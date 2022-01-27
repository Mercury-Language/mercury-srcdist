/*
** Automatically generated from `typecheck.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module check_hlds.typecheck. */
/* :- implementation. */

/*
INIT mercury__check_hlds__typecheck__init
ENDINIT
*/

#include "check_hlds.typecheck.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.typecheck_errors.mih"
#include "check_hlds.typecheck_info.mih"
#include "check_hlds.typeclasses.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
#include "hlds.headvar_names.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
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
#include "hlds.special_pred.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 2990 "typecheck.m"
struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s {
#line 2990 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4;
#line 2993 "typecheck.m"
  MR_bool check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
#line 2993 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__Types0_9;
#line 2996 "typecheck.m"
  jmp_buf check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0;
#line 2996 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13;
#line 2996 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12;
#line 2990 "typecheck.m"
};

#line 901 "typecheck.m"
struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s {
#line 901 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3;
#line 904 "typecheck.m"
  MR_bool check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
#line 904 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__Types_5;
#line 905 "typecheck.m"
  jmp_buf check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0;
#line 905 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_6;
#line 901 "typecheck.m"
};


#line 182 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 185 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 188 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 191 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 194 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 197 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 200 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0;

#line 203 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__pseudo_1;

#line 206 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 209 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 212 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 215 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0;

#line 218 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1;

#line 221 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2;

#line 224 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3];

#line 227 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3];

#line 230 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3];

#line 233 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 236 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0[2];

#line 239 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0;

#line 242 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0[1];

#line 245 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0[1];

#line 248 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0[1];

#line 251 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0[1];

#line 254 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0;

#line 257 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0;

#line 260 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1];

#line 263 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0;

#line 266 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1];

#line 269 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1;

#line 272 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1];

#line 275 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1];

#line 278 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0[2];

#line 281 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2];

#line 284 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2];

#line 287 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0;

#line 290 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1;

#line 293 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2];

#line 296 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2];

#line 299 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2];

#line 302 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
#line 305 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 307 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 310 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
#line 313 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 315 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 317 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 320 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0_10001(
#line 323 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 325 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 328 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0_10001(
#line 331 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 333 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 335 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 338 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
#line 341 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 343 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 346 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
#line 349 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 351 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 353 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 356 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
#line 359 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 361 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 364 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
#line 367 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 369 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 371 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 374 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
#line 377 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 379 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 382 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
#line 385 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 387 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 389 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 2707 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
#line 2707 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_6,
#line 2707 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_7,
#line 2707 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8);

#line 2250 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(
#line 2250 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2250 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2250 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2250 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2213 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 2213 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2213 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_3,
#line 2213 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2213 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5);

#line 2197 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(
#line 2197 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2197 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsDefns_3,
#line 2197 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2197 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5);

#line 1994 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(
#line 1994 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1994 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 1994 "typecheck.m"
  MR_Word check_hlds__typecheck__Types_3,
#line 1994 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1994 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6);

#line 3223 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3223__2_1_f_0(
#line 3223 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_36);

#line 1419 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1419__1_2_p_0(
#line 1419 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalType_84,
#line 1419 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_139);

#line 1416 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1416__1_3_p_0(
#line 1416 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_131,
#line 1416 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_132,
#line 1416 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_133);

#line 504 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__504__1_2_p_0(
#line 504 "typecheck.m"
  MR_Word check_hlds__typecheck__StartingSpecs_22,
#line 504 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_51);

#line 1120 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
#line 1120 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 1120 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1120 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 1120 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
#line 1120 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 1120 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2826 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
#line 2826 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2826 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2826 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2826 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
#line 2826 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2826 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2182 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
#line 2182 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2182 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2182 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2182 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
#line 2182 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2182 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2179 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0(
#line 2179 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2179 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2179 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2179 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0(
#line 2179 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2179 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3193 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
#line 3193 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3193 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3193 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 3193 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
#line 3193 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 3193 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3223 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
#line 3223 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3223 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 3211 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
#line 3211 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 3211 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 3211 "typecheck.m"
  MR_Word check_hlds__typecheck__Action_8,
#line 3211 "typecheck.m"
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
#line 3211 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10);

#line 3198 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
#line 3198 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3198 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3198 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3198 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3198 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__5_5);

#line 3175 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
#line 3175 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3175 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 3175 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3);

#line 3041 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
#line 3041 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3041 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3041 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3041 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3041 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3041 "typecheck.m"
  MR_Word * check_hlds__typecheck__DataConsErrors_12);

#line 2762 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
#line 2762 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2762 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2762 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 3011 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
#line 3011 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3011 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3011 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3011 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3011 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3011 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsErrors_12);

#line 2996 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
#line 2996 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 2996 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
#line 2996 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 2996 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
#line 2996 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 2990 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
#line 2990 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_4,
#line 2990 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint0_5,
#line 2990 "typecheck.m"
  MR_Word * check_hlds__typecheck__Constraint_6);

#line 2981 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
#line 2981 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_3,
#line 2981 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4);

#line 2974 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
#line 2974 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2974 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2974 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 2973 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
#line 2973 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2973 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 2963 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
#line 2963 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_7,
#line 2963 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarSet_8,
#line 2963 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_9,
#line 2963 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_10,
#line 2963 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
#line 2963 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21);

#line 2830 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_8,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_9,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_10,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_11,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
#line 2830 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14);

#line 2766 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_9,
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__FuncName_11,
#line 2766 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_12,
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_13,
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_14,
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_15,
#line 2766 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16);

#line 2762 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
#line 2762 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2762 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2762 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 2746 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
#line 2746 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2746 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 2746 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2746 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 2746 "typecheck.m"
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10);

#line 2615 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__make_pred_cons_info_list_7_p_0(
#line 2615 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2615 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2615 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTable_3,
#line 2615 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_4,
#line 2615 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_5,
#line 2615 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
#line 2615 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7);

#line 2594 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
#line 2594 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2594 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_7,
#line 2594 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_8,
#line 2594 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 2594 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10);

#line 2510 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
#line 2510 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2510 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 2510 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2510 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);

#line 2495 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_2,
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__PredOrFunc_3,
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVars_6,
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2495 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8);

#line 2458 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_3_p_0(
#line 2458 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2458 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_4,
#line 2458 "typecheck.m"
  MR_Word check_hlds__typecheck__Var0_5,
#line 2458 "typecheck.m"
  MR_Word * check_hlds__typecheck__Var_6);

#line 2456 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0_1(
#line 2456 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2456 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2456 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 2452 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0(
#line 2452 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2452 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars0_4,
#line 2452 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_5,
#line 2452 "typecheck.m"
  MR_Word * check_hlds__typecheck__Vars_6);

#line 2362 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
#line 2362 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsType_6,
#line 2362 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_7,
#line 2362 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_8,
#line 2362 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
#line 2362 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16);

#line 2264 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(
#line 2264 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2264 "typecheck.m"
  MR_Word check_hlds__typecheck__X_2,
#line 2264 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_3,
#line 2264 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2264 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2233 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_functor_type_4_p_0(
#line 2233 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2233 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2233 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
#line 2233 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4);

#line 2117 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0_2(
#line 2117 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2117 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 2076 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0_1(
#line 2076 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2076 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2076 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2076 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 2068 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0(
#line 2068 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_7,
#line 2068 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2068 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_9,
#line 2068 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2068 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_46,
#line 2068 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_47);

#line 2049 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_4,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsType_5,
#line 2049 "typecheck.m"
  MR_String * check_hlds__typecheck__BuiltinTypeName_6);

#line 2010 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unification_6_p_0(
#line 2010 "typecheck.m"
  MR_Word check_hlds__typecheck__X_7,
#line 2010 "typecheck.m"
  MR_Word check_hlds__typecheck__RHS0_8,
#line 2010 "typecheck.m"
  MR_Word * check_hlds__typecheck__RHS_9,
#line 2010 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2010 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 2010 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27);

#line 1934 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
#line 1934 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1934 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1934 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_3,
#line 1934 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1934 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 1918 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_4_p_0(
#line 1918 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 1918 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_6,
#line 1918 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 1918 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14);

#line 1905 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(
#line 1905 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1905 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1905 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_3,
#line 1905 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_4,
#line 1905 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_5);

#line 1827 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
#line 1827 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1827 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1827 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1827 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

#line 1811 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__skip_arg_2_p_0(
#line 1811 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1811 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2);

#line 1776 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(
#line 1776 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1776 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_2,
#line 1776 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1776 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_4,
#line 1776 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_5);

#line 1730 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__PredExistQVars_3,
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__PredArgTypes_4,
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__PredConstraints_5,
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
#line 1730 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7);

#line 1689 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
#line 1689 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7);

#line 1665 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_overloaded_pred_6_p_0(
#line 1665 "typecheck.m"
  MR_Word check_hlds__typecheck__CallId_7,
#line 1665 "typecheck.m"
  MR_Word check_hlds__typecheck__PredIdList_8,
#line 1665 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_9,
#line 1665 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 1665 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 1665 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21);

#line 1636 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_5_p_0(
#line 1636 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_6,
#line 1636 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_7,
#line 1636 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_8,
#line 1636 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 1636 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21);

#line 1587 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_6_p_0(
#line 1587 "typecheck.m"
  MR_Word check_hlds__typecheck__CallId_7,
#line 1587 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_8,
#line 1587 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 1587 "typecheck.m"
  MR_Word * check_hlds__typecheck__PredId_10,
#line 1587 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_25,
#line 1587 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_26);

#line 1565 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_4_p_0(
#line 1565 "typecheck.m"
  MR_String check_hlds__typecheck__EventName_5,
#line 1565 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_6,
#line 1565 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 1565 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14);

#line 1508 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_5_p_0(
#line 1508 "typecheck.m"
  MR_Word check_hlds__typecheck__PredVar_6,
#line 1508 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_7,
#line 1508 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_8,
#line 1508 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
#line 1508 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17);

#line 1485 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_3_p_0(
#line 1485 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_4,
#line 1485 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_15,
#line 1485 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_16);

#line 1463 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(
#line 1463 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_4,
#line 1463 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_14,
#line 1463 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_15);

#line 1451 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_4_p_0(
#line 1451 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1451 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 1451 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_3,
#line 1451 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_4);

#line 1442 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
#line 1442 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1);

#line 1419 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_3(
#line 1419 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg);

#line 1416 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_2(
#line 1416 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1416 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 1416 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 1416 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 1374 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_1(
#line 1374 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1374 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 1244 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0(
#line 1244 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalExpr0_6,
#line 1244 "typecheck.m"
  MR_Word * check_hlds__typecheck__GoalExpr_7,
#line 1244 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalInfo_8,
#line 1244 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_103,
#line 1244 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_104);

#line 1189 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_4_p_0(
#line 1189 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_5,
#line 1189 "typecheck.m"
  MR_Word * check_hlds__typecheck__Goal_6,
#line 1189 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1189 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 1124 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_4_p_0(
#line 1124 "typecheck.m"
  MR_Word check_hlds__typecheck__StuffToCheck_5,
#line 1124 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_6,
#line 1124 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1124 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 1087 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_6_p_0(
#line 1087 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_7,
#line 1087 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_8,
#line 1087 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_15,
#line 1087 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_16,
#line 1087 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_17,
#line 1087 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_18);

#line 1059 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_6_p_0(
#line 1059 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1059 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1059 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1059 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 1059 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_5,
#line 1059 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_6);

#line 954 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
#line 954 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 954 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 954 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 954 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

#line 920 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__KindMap_8,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesA_10,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesB_13,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsB_14);

#line 905 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
#line 905 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 905 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
#line 905 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 905 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
#line 905 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 901 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
#line 901 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
#line 901 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 898 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
#line 898 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 898 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 885 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
#line 885 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 885 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVarTypes_7,
#line 885 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 885 "typecheck.m"
  MR_Word * check_hlds__typecheck__UnprovenCs_10);

#line 850 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
#line 850 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypeVars_5,
#line 850 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExistQVars_6,
#line 850 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeParams0_7,
#line 850 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadTypeParams_8);

#line 828 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
#line 828 "typecheck.m"
  MR_Word check_hlds__typecheck__Renaming_4,
#line 828 "typecheck.m"
  MR_Word check_hlds__typecheck__Origin0_5,
#line 828 "typecheck.m"
  MR_Word * check_hlds__typecheck__Origin_6);

#line 777 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
#line 777 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_5,
#line 777 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16,
#line 777 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_17,
#line 777 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7);

#line 753 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_5_p_0(
#line 753 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_6,
#line 753 "typecheck.m"
  MR_Word check_hlds__typecheck__Impl_7,
#line 753 "typecheck.m"
  MR_Word check_hlds__typecheck__TVar_8,
#line 753 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 753 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14);

#line 747 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
#line 747 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 747 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 747 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 747 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 741 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
#line 741 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_6,
#line 741 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVars_7,
#line 741 "typecheck.m"
  MR_Word check_hlds__typecheck__Clause_8,
#line 741 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_19,
#line 741 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_20);

#line 692 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
#line 692 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 692 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 692 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 692 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 535 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_8,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_9,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_68,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_69,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_70,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_71,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_12);

#line 504 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0_1(
#line 504 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg);

#line 440 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0(
#line 440 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7,
#line 440 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_8,
#line 440 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 440 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_33,
#line 440 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_10,
#line 440 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_11);

#line 345 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 345 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
#line 345 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
#line 345 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_9,
#line 345 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_10);

#line 272 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
#line 272 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 272 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 272 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 272 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_4,
#line 272 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_5);

#line 216 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_9_p_0(
#line 216 "typecheck.m"
  MR_Integer check_hlds__typecheck__Iteration_10,
#line 216 "typecheck.m"
  MR_Integer check_hlds__typecheck__MaxIterations_11,
#line 216 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_33,
#line 216 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_34,
#line 216 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIds_13,
#line 216 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_14,
#line 216 "typecheck.m"
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_15,
#line 216 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_16,
#line 216 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_17);

#line 185 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
#line 185 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 185 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 185 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 185 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);


static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[21][2];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[5][3];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[4][1];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[7][5];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[3][8];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[2][6];

static /* final */ const MR_Integer check_hlds__typecheck_scalar_common_8[1][2];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_9[1][7];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_10[1][11];




static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[21][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__typecheck_scalar_common_2[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "option to increase the limit)."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__typecheck_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "iterations."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Type inference iteration limit exceeded."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "This probably indicates that your program has a type error."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "You should declare the types explicitly."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Inferred"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_5[2])),
    ((MR_Box) (check_hlds__typecheck__typecheck_goal_2_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_7[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_goal_2_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_5[4])),
    ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_5[6])),
    ((MR_Box) (check_hlds__typecheck__convert_cons_defn_5_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 42)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "--type-inference-iteration-limit"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "tuple"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[7][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_atomic_goal_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
};

static /* final */ const MR_Integer check_hlds__typecheck_scalar_common_8[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_9[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&check_hlds__typecheck_scalar_common_8[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&check_hlds__typecheck__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_field_access_type_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1947 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1955 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1963 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1971 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1979 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1987 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1995 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0
  }
};

#line 2003 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2011 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__pti_var_1__pseudo_1
  }
};

#line 2020 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2028 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2037 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0 = {
  (MR_String) "flip_constraints_for_new",
  (MR_Integer) 0
};

#line 2043 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1 = {
  (MR_String) "flip_constraints_for_field_set",
  (MR_Integer) 1
};

#line 2049 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2 = {
  (MR_String) "do_not_flip_constraints",
  (MR_Integer) 2
};

#line 2055 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2
};

#line 2062 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0
};

#line 2069 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2076 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_constraints_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_constraints_action",
  {
    check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0
  },
  {
    check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0
};

#line 2097 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2105 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2111 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0 = {
  (MR_String) "cons_type",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 2126 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0
};

#line 2131 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0
  }
};

#line 2140 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0
};

#line 2145 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0[1] = {
  (MR_Integer) 0
};

#line 2150 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type",
  {
    check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0
  },
  {
    check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0
};

#line 2171 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0,
    (MR_TypeInfo) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0
  }
};

#line 2180 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck__pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0
  }
};

#line 2188 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type_assign_set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2209 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0
};

#line 2214 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2229 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0
};

#line 2234 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1,
  NULL,
  NULL,
  NULL
};

#line 2249 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

#line 2254 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1
};

#line 2259 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1
  }
};

#line 2273 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

#line 2279 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2285 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "maybe_cons_type_info",
  {
    check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0
  },
  {
    check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0
};

#line 2306 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0 = {
  (MR_String) "clause_only",
  (MR_Integer) 0
};

#line 2312 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1 = {
  (MR_String) "whole_pred",
  (MR_Integer) 1
};

#line 2318 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

#line 2324 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

#line 2330 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2336 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_stuff_to_check_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____stuff_to_check_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____stuff_to_check_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "stuff_to_check",
  {
    check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0
  },
  {
    check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0
};

#line 2357 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
#line 2360 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2362 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2364 "check_hlds.typecheck.c"
{
#line 2366 "check_hlds.typecheck.c"
  {
#line 2368 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2371 "check_hlds.typecheck.c"
    {
#line 2373 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_constraints_action_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2376 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2378 "check_hlds.typecheck.c"
  }
#line 2380 "check_hlds.typecheck.c"
}

#line 2383 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
#line 2386 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2388 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2390 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2392 "check_hlds.typecheck.c"
{
#line 2394 "check_hlds.typecheck.c"
  {
#line 2396 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2399 "check_hlds.typecheck.c"
    {
#line 2401 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_constraints_action_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2404 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2406 "check_hlds.typecheck.c"
  }
#line 2408 "check_hlds.typecheck.c"
}

#line 2411 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0_10001(
#line 2414 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2416 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2418 "check_hlds.typecheck.c"
{
#line 2420 "check_hlds.typecheck.c"
  {
#line 2422 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2425 "check_hlds.typecheck.c"
    {
#line 2427 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2430 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2432 "check_hlds.typecheck.c"
  }
#line 2434 "check_hlds.typecheck.c"
}

#line 2437 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0_10001(
#line 2440 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2442 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2444 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2446 "check_hlds.typecheck.c"
{
#line 2448 "check_hlds.typecheck.c"
  {
#line 2450 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2453 "check_hlds.typecheck.c"
    {
#line 2455 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_type_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2458 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2460 "check_hlds.typecheck.c"
  }
#line 2462 "check_hlds.typecheck.c"
}

#line 2465 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
#line 2468 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2470 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2472 "check_hlds.typecheck.c"
{
#line 2474 "check_hlds.typecheck.c"
  {
#line 2476 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2479 "check_hlds.typecheck.c"
    {
#line 2481 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_assign_set_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2484 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2486 "check_hlds.typecheck.c"
  }
#line 2488 "check_hlds.typecheck.c"
}

#line 2491 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
#line 2494 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2496 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2498 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2500 "check_hlds.typecheck.c"
{
#line 2502 "check_hlds.typecheck.c"
  {
#line 2504 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2507 "check_hlds.typecheck.c"
    {
#line 2509 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_type_assign_set_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2512 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2514 "check_hlds.typecheck.c"
  }
#line 2516 "check_hlds.typecheck.c"
}

#line 2519 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
#line 2522 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2524 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2526 "check_hlds.typecheck.c"
{
#line 2528 "check_hlds.typecheck.c"
  {
#line 2530 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2533 "check_hlds.typecheck.c"
    {
#line 2535 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2538 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2540 "check_hlds.typecheck.c"
  }
#line 2542 "check_hlds.typecheck.c"
}

#line 2545 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
#line 2548 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2550 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2552 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2554 "check_hlds.typecheck.c"
{
#line 2556 "check_hlds.typecheck.c"
  {
#line 2558 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2561 "check_hlds.typecheck.c"
    {
#line 2563 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2566 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2568 "check_hlds.typecheck.c"
  }
#line 2570 "check_hlds.typecheck.c"
}

#line 2573 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
#line 2576 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2578 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2580 "check_hlds.typecheck.c"
{
#line 2582 "check_hlds.typecheck.c"
  {
#line 2584 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2587 "check_hlds.typecheck.c"
    {
#line 2589 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____stuff_to_check_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2592 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2594 "check_hlds.typecheck.c"
  }
#line 2596 "check_hlds.typecheck.c"
}

#line 2599 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
#line 2602 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2604 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2606 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2608 "check_hlds.typecheck.c"
{
#line 2610 "check_hlds.typecheck.c"
  {
#line 2612 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2615 "check_hlds.typecheck.c"
    {
#line 2617 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____stuff_to_check_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2620 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2622 "check_hlds.typecheck.c"
  }
#line 2624 "check_hlds.typecheck.c"
}

#line 2707 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
#line 2707 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_6,
#line 2707 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_7,
#line 2707 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8)
#line 2707 "typecheck.m"
{
#line 2710 "typecheck.m"
  {
#line 2710 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_21_42;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_22_43;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_23_44;
#line 2710 "typecheck.m"
    MR_String check_hlds__typecheck__ApplyName_9;
#line 2710 "typecheck.m"
    MR_String check_hlds__typecheck__ApplyNameToUse_12;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__Purity_13;
#line 2710 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity1_14;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_15;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__FuncType_16;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_17;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__RetType_18;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars_19;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_20;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 2710 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_22_22;
#line 2710 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_23_23;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_36;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_37;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet1_38;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__RetTypeVar_39;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 2710 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;
#line 2711 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_10_10;
#line 2711 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;

#line 2711 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2711 "typecheck.m"
      {
#line 2711 "typecheck.m"
        check_hlds__typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 1)));
#line 2711 "typecheck.m"
        check_hlds__typecheck__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 2)));
#line 2711 "typecheck.m"
        check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 3)));
#line 2711 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 2711 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2711 "typecheck.m"
          {
#line 2711 "typecheck.m"
            check_hlds__typecheck__ApplyName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_21_21, (MR_Integer) 0)));
#line 2717 "typecheck.m"
            if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "") == 0))
#line 2718 "typecheck.m"
              {
#line 2719 "typecheck.m"
                check_hlds__typecheck__ApplyNameToUse_12 = (MR_String) "apply";
#line 2720 "typecheck.m"
                check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
#line 2718 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2718 "typecheck.m"
              }
#line 2717 "typecheck.m"
            else
#line 2717 "typecheck.m"
              if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "apply") == 0))
#line 2714 "typecheck.m"
                {
#line 2715 "typecheck.m"
                  check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2716 "typecheck.m"
                  check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
#line 2714 "typecheck.m"
                  check_hlds__typecheck__succeeded = MR_TRUE;
#line 2714 "typecheck.m"
                }
#line 2717 "typecheck.m"
              else
#line 2717 "typecheck.m"
                if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "impure_apply") == 0))
#line 2722 "typecheck.m"
                  {
#line 2723 "typecheck.m"
                    check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2724 "typecheck.m"
                    check_hlds__typecheck__Purity_13 = (MR_Integer) 2;
#line 2722 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2722 "typecheck.m"
                  }
#line 2717 "typecheck.m"
                else
#line 2717 "typecheck.m"
                  if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "semipure_apply") == 0))
#line 2726 "typecheck.m"
                    {
#line 2727 "typecheck.m"
                      check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2728 "typecheck.m"
                      check_hlds__typecheck__Purity_13 = (MR_Integer) 1;
#line 2726 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2726 "typecheck.m"
                    }
#line 2717 "typecheck.m"
                  else
#line 2717 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_FALSE;
#line 2710 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2710 "typecheck.m"
              {
#line 2730 "typecheck.m"
                check_hlds__typecheck__V_22_22 = (MR_Integer) 1;
#line 2730 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_7 >= check_hlds__typecheck__V_22_22);
#line 2710 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2710 "typecheck.m"
                  {
#line 2731 "typecheck.m"
                    check_hlds__typecheck__V_23_23 = (MR_Integer) 1;
#line 2731 "typecheck.m"
                    check_hlds__typecheck__Arity1_14 = (check_hlds__typecheck__Arity_7 - check_hlds__typecheck__V_23_23);
#line 2732 "typecheck.m"
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2793 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_21_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1554 "typecheck.m"
                    {
#line 1554 "typecheck.m"
                      mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__TypeVarSet0_36);
                    }
#line 1555 "typecheck.m"
                    {
#line 1555 "typecheck.m"
                      mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, check_hlds__typecheck__Arity1_14, &check_hlds__typecheck__ArgTypeVars_37, check_hlds__typecheck__TypeVarSet0_36, &check_hlds__typecheck__TypeVarSet1_38);
                    }
#line 1556 "typecheck.m"
                    {
#line 1556 "typecheck.m"
                      mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__RetTypeVar_39, check_hlds__typecheck__TypeVarSet1_38, &check_hlds__typecheck__TypeVarSet_15);
                    }
#line 2810 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeInfo_22_43 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 2812 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_23_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0;
#line 1558 "typecheck.m"
                    {
#line 1558 "typecheck.m"
                      check_hlds__typecheck__V_40_40 = mercury__map__init_0_f_0(check_hlds__typecheck__TypeInfo_22_43, check_hlds__typecheck__TypeCtorInfo_23_44);
                    }
#line 1558 "typecheck.m"
                    {
#line 1558 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_40_40, check_hlds__typecheck__ArgTypeVars_37, &check_hlds__typecheck__ArgTypes_17);
                    }
#line 1559 "typecheck.m"
                    check_hlds__typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1559 "typecheck.m"
                    {
#line 1559 "typecheck.m"
                      check_hlds__typecheck__RetType_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1559 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 0) = ((MR_Box) (check_hlds__typecheck__RetTypeVar_39));
#line 1559 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 1) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 1559 "typecheck.m"
                    }
#line 1560 "typecheck.m"
                    {
#line 1560 "typecheck.m"
                      parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_13, check_hlds__typecheck__ArgTypes_17, check_hlds__typecheck__RetType_18, &check_hlds__typecheck__FuncType_16);
                    }
#line 2734 "typecheck.m"
                    check_hlds__typecheck__ExistQVars_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2735 "typecheck.m"
                    {
#line 2735 "typecheck.m"
                      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_20);
                    }
#line 2738 "typecheck.m"
                    check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2737 "typecheck.m"
                    {
#line 2737 "typecheck.m"
                      check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2737 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__FuncType_16));
#line 2737 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_17));
#line 2737 "typecheck.m"
                    }
#line 2738 "typecheck.m"
                    {
#line 2738 "typecheck.m"
                      check_hlds__typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2738 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2738 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck__ApplyNameToUse_12));
#line 2738 "typecheck.m"
                    }
#line 2736 "typecheck.m"
                    {
#line 2736 "typecheck.m"
                      check_hlds__typecheck__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2736 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_15));
#line 2736 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_19));
#line 2736 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 2) = ((MR_Box) (check_hlds__typecheck__RetType_18));
#line 2736 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 3) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 2736 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_20));
#line 2736 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 5) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 2736 "typecheck.m"
                    }
#line 2738 "typecheck.m"
                    {
#line 2738 "typecheck.m"
                      MR_Word base;
#line 2738 "typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2738 "typecheck.m"
                      *check_hlds__typecheck__ConsTypeInfos_8 = base;
#line 2738 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_25_25));
#line 2738 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 2738 "typecheck.m"
                    }
#line 2738 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2710 "typecheck.m"
                  }
#line 2710 "typecheck.m"
              }
#line 2711 "typecheck.m"
          }
#line 2711 "typecheck.m"
      }
#line 2710 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2710 "typecheck.m"
  }
#line 2707 "typecheck.m"
}

#line 2250 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(
#line 2250 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2250 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2250 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2250 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2250 "typecheck.m"
{
#line 2254 "typecheck.m"
  while (MR_TRUE)
#line 2254 "typecheck.m"
    {
#line 2254 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2254 "typecheck.m"
      {
#line 2254 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2254 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2254 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2254 "typecheck.m"
        else
#line 2256 "typecheck.m"
          {
#line 2256 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssign_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2256 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssigns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2256 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 0)));
#line 2256 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 1)));
#line 2256 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;
#line 2257 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 2)));

#line 1975 "typecheck.m"
            if ((check_hlds__typecheck__Args_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1975 "typecheck.m"
              if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1980 "typecheck.m"
                {
#line 1980 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_16));
#line 1980 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 1980 "typecheck.m"
                }
#line 1975 "typecheck.m"
              else
#line 1975 "typecheck.m"
                {
#line 1976 "typecheck.m"
                  {
#line 1976 "typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 1976 "typecheck.m"
                    return;
                  }
#line 1975 "typecheck.m"
                }
#line 1975 "typecheck.m"
            else
#line 1975 "typecheck.m"
              {
#line 1975 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 1)));
#line 1975 "typecheck.m"
                MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 0)));

#line 1975 "typecheck.m"
                if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1977 "typecheck.m"
                  {
#line 1978 "typecheck.m"
                    {
#line 1978 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 1978 "typecheck.m"
                      return;
                    }
#line 1977 "typecheck.m"
                  }
#line 1975 "typecheck.m"
                else
#line 1982 "typecheck.m"
                  {
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 0)));
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__Types_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 1)));
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssignSet1_52;
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes0_62;
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__MaybeOldVarType_63;
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_64;

#line 1947 "typecheck.m"
                    {
#line 1947 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__VarTypes0_62);
                    }
#line 1948 "typecheck.m"
                    {
#line 1948 "typecheck.m"
                      parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__V_55_55, check_hlds__typecheck__Type_46, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
                    }
#line 1956 "typecheck.m"
                    if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1957 "typecheck.m"
                      {
#line 1957 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeAssign_67;

#line 1958 "typecheck.m"
                        {
#line 1958 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign_67);
                        }
#line 1959 "typecheck.m"
                        {
#line 1959 "typecheck.m"
                          check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
#line 1959 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 1959 "typecheck.m"
                        }
#line 1957 "typecheck.m"
                      }
#line 1956 "typecheck.m"
                    else
#line 1950 "typecheck.m"
                      {
#line 1950 "typecheck.m"
                        MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
#line 1953 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeAssign1_66;
#line 2541 "typecheck.m"
                        MR_Word check_hlds__typecheck__HeadTypeParams_75;
#line 2541 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeBindings0_76;
#line 2541 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeBindings_77;

#line 2542 "typecheck.m"
                        {
#line 2542 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__HeadTypeParams_75);
                        }
#line 2543 "typecheck.m"
                        {
#line 2543 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeBindings0_76);
                        }
#line 2544 "typecheck.m"
                        {
#line 2544 "typecheck.m"
                          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_46, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
                        }
#line 2541 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2541 "typecheck.m"
                          {
#line 2545 "typecheck.m"
                            {
#line 2545 "typecheck.m"
                              check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign1_66);
                            }
#line 2545 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2541 "typecheck.m"
                          }
#line 1953 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 1952 "typecheck.m"
                          {
#line 1952 "typecheck.m"
                            check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
#line 1952 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 1952 "typecheck.m"
                          }
#line 1953 "typecheck.m"
                        else
#line 1954 "typecheck.m"
                          check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__V_53_53;
#line 1950 "typecheck.m"
                      }
#line 1984 "typecheck.m"
                    {
#line 1984 "typecheck.m"
                      check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__V_54_54, check_hlds__typecheck__Types_47, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
                    }
#line 1982 "typecheck.m"
                  }
#line 1975 "typecheck.m"
              }
#line 2260 "typecheck.m"
            /* direct tailcall eliminated */
#line 2260 "typecheck.m"
            {
#line 2260 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsTypeAssigns_12;
#line 2260 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2260 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2260 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2260 "typecheck.m"
            }
#line 2260 "typecheck.m"
            continue;
#line 2256 "typecheck.m"
          }
#line 2254 "typecheck.m"
      }
#line 2254 "typecheck.m"
      break;
#line 2254 "typecheck.m"
    }
#line 2250 "typecheck.m"
}

#line 2213 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 2213 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2213 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_3,
#line 2213 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2213 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5)
#line 2213 "typecheck.m"
{
#line 2217 "typecheck.m"
  while (MR_TRUE)
#line 2217 "typecheck.m"
    {
#line 2217 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2217 "typecheck.m"
      {
#line 2217 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2217 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2217 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4;
#line 2217 "typecheck.m"
        else
#line 2219 "typecheck.m"
          {
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType_16;
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_17;
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_18;
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssign_19;
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__V_22_22;
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23;
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeVarSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 0)));
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsExistQVars0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 1)));
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 2)));
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 3)));
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassConstraints0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 4)));
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_37;
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ConstraintsToAdd_38;
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__OldConstraints_46;
#line 2219 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassConstraints_47;
#line 2398 "typecheck.m"
            MR_Word check_hlds__typecheck___Source_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 5)));

#line 2405 "typecheck.m"
            {
#line 2405 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ConsTypeVarSet_31);
            }
#line 2411 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2407 "typecheck.m"
              {
#line 2407 "typecheck.m"
                check_hlds__typecheck__ConsType_16 = check_hlds__typecheck__ConsType0_33;
#line 2408 "typecheck.m"
                check_hlds__typecheck__ArgTypes_17 = check_hlds__typecheck__ArgTypes0_34;
#line 2409 "typecheck.m"
                check_hlds__typecheck__TypeAssign2_37 = check_hlds__typecheck__TypeAssign0_3;
#line 2410 "typecheck.m"
                check_hlds__typecheck__ConstraintsToAdd_38 = check_hlds__typecheck__ClassConstraints0_35;
#line 2407 "typecheck.m"
              }
#line 2411 "typecheck.m"
            else
#line 2427 "typecheck.m"
              {
#line 2427 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_39;
#line 2427 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsType1_40;
#line 2427 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes1_41;
#line 2427 "typecheck.m"
                MR_Word check_hlds__typecheck__Renaming_42;
#line 2412 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;
#line 2412 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 2412 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet0_61;
#line 2412 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet_62;

#line 2413 "typecheck.m"
                {
#line 2413 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2413 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__ConsType0_33));
#line 2413 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes0_34));
#line 2413 "typecheck.m"
                }
#line 1765 "typecheck.m"
                {
#line 1765 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_3, &check_hlds__typecheck__TypeVarSet0_61);
                }
#line 1766 "typecheck.m"
                {
#line 1766 "typecheck.m"
                  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_61, check_hlds__typecheck__ConsTypeVarSet_31, &check_hlds__typecheck__TypeVarSet_62, &check_hlds__typecheck__Renaming_42);
                }
#line 1767 "typecheck.m"
                {
#line 1767 "typecheck.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__V_48_48, &check_hlds__typecheck__V_49_49);
                }
#line 1769 "typecheck.m"
                {
#line 1769 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_62, check_hlds__typecheck__TypeAssign0_3, &check_hlds__typecheck__TypeAssign1_39);
                }
#line 2413 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 2413 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2413 "typecheck.m"
                  {
#line 2413 "typecheck.m"
                    check_hlds__typecheck__ConsType1_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_49_49, (MR_Integer) 0)));
#line 2413 "typecheck.m"
                    check_hlds__typecheck__ArgTypes1_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_49_49, (MR_Integer) 1)));
#line 2417 "typecheck.m"
                    {
#line 2417 "typecheck.m"
                      MR_Word check_hlds__typecheck__ConsExistQVars_43;
#line 2417 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams0_44;
#line 2417 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams_45;

#line 2416 "typecheck.m"
                      {
#line 2416 "typecheck.m"
                        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__ConsExistQVars0_32, &check_hlds__typecheck__ConsExistQVars_43);
                      }
#line 2418 "typecheck.m"
                      {
#line 2418 "typecheck.m"
                        check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__ClassConstraints0_35, &check_hlds__typecheck__ConstraintsToAdd_38);
                      }
#line 2420 "typecheck.m"
                      {
#line 2420 "typecheck.m"
                        check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_39, &check_hlds__typecheck__HeadTypeParams0_44);
                      }
#line 2421 "typecheck.m"
                      {
#line 2421 "typecheck.m"
                        check_hlds__typecheck__HeadTypeParams_45 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ConsExistQVars_43, check_hlds__typecheck__HeadTypeParams0_44);
                      }
#line 2422 "typecheck.m"
                      {
#line 2422 "typecheck.m"
                        check_hlds__typecheck_info__type_assign_set_head_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_45, check_hlds__typecheck__TypeAssign1_39, &check_hlds__typecheck__TypeAssign2_37);
                      }
#line 2425 "typecheck.m"
                      check_hlds__typecheck__ConsType_16 = check_hlds__typecheck__ConsType1_40;
#line 2426 "typecheck.m"
                      check_hlds__typecheck__ArgTypes_17 = check_hlds__typecheck__ArgTypes1_41;
#line 2417 "typecheck.m"
                    }
#line 2413 "typecheck.m"
                  }
#line 2413 "typecheck.m"
                else
#line 2428 "typecheck.m"
                  {
#line 2428 "typecheck.m"
                    {
#line 2428 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.get_cons_stuff\'/6", (MR_String) "type_assign_rename_apart failed");
#line 2428 "typecheck.m"
                      return;
                    }
#line 2428 "typecheck.m"
                  }
#line 2427 "typecheck.m"
              }
#line 2439 "typecheck.m"
            {
#line 2439 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typecheck__TypeAssign2_37, &check_hlds__typecheck__OldConstraints_46);
            }
#line 2440 "typecheck.m"
            {
#line 2440 "typecheck.m"
              hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck__ConstraintsToAdd_38, check_hlds__typecheck__OldConstraints_46, &check_hlds__typecheck__ClassConstraints_47);
            }
#line 2441 "typecheck.m"
            {
#line 2441 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_p_0(check_hlds__typecheck__ClassConstraints_47, check_hlds__typecheck__TypeAssign2_37, &check_hlds__typecheck__TypeAssign1_18);
            }
#line 2222 "typecheck.m"
            {
#line 2222 "typecheck.m"
              check_hlds__typecheck__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2222 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck__ConsType_16));
#line 2222 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_17));
#line 2222 "typecheck.m"
            }
#line 2222 "typecheck.m"
            {
#line 2222 "typecheck.m"
              check_hlds__typecheck__ConsTypeAssign_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2222 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_19, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_18));
#line 2222 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_19, 1) = ((MR_Box) (check_hlds__typecheck__V_22_22));
#line 2222 "typecheck.m"
            }
#line 2223 "typecheck.m"
            {
#line 2223 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeAssign_19));
#line 2223 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4));
#line 2223 "typecheck.m"
            }
#line 2224 "typecheck.m"
            /* direct tailcall eliminated */
#line 2224 "typecheck.m"
            {
#line 2224 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsDefns_12;
#line 2224 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23;

#line 2224 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4;
#line 2224 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2224 "typecheck.m"
            }
#line 2224 "typecheck.m"
            continue;
#line 2219 "typecheck.m"
          }
#line 2217 "typecheck.m"
      }
#line 2217 "typecheck.m"
      break;
#line 2217 "typecheck.m"
    }
#line 2213 "typecheck.m"
}

#line 2197 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(
#line 2197 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2197 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsDefns_3,
#line 2197 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2197 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5)
#line 2197 "typecheck.m"
{
#line 2203 "typecheck.m"
  while (MR_TRUE)
#line 2203 "typecheck.m"
    {
#line 2203 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2203 "typecheck.m"
      {
#line 2203 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2203 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2203 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4;
#line 2203 "typecheck.m"
        else
#line 2205 "typecheck.m"
          {
#line 2205 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2205 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2205 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18;

#line 2206 "typecheck.m"
            {
#line 2206 "typecheck.m"
              check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__ConsDefns_3, check_hlds__typecheck__TypeAssign_11, check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18);
            }
#line 2208 "typecheck.m"
            /* direct tailcall eliminated */
#line 2208 "typecheck.m"
            {
#line 2208 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns_12;
#line 2208 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18;

#line 2208 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4;
#line 2208 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2208 "typecheck.m"
            }
#line 2208 "typecheck.m"
            continue;
#line 2205 "typecheck.m"
          }
#line 2203 "typecheck.m"
      }
#line 2203 "typecheck.m"
      break;
#line 2203 "typecheck.m"
    }
#line 2197 "typecheck.m"
}

#line 1994 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(
#line 1994 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1994 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 1994 "typecheck.m"
  MR_Word check_hlds__typecheck__Types_3,
#line 1994 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1994 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6)
#line 1994 "typecheck.m"
{
#line 1998 "typecheck.m"
  while (MR_TRUE)
#line 1998 "typecheck.m"
    {
#line 1998 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1998 "typecheck.m"
      {
#line 1998 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1998 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1998 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
#line 1998 "typecheck.m"
        else
#line 2000 "typecheck.m"
          {
#line 2000 "typecheck.m"
            MR_Word check_hlds__typecheck__TA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2000 "typecheck.m"
            MR_Word check_hlds__typecheck__TAs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2000 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 1975 "typecheck.m"
            if ((check_hlds__typecheck__Args_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1975 "typecheck.m"
              if ((check_hlds__typecheck__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1980 "typecheck.m"
                {
#line 1980 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TA_13));
#line 1980 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5));
#line 1980 "typecheck.m"
                }
#line 1975 "typecheck.m"
              else
#line 1975 "typecheck.m"
                {
#line 1976 "typecheck.m"
                  {
#line 1976 "typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 1976 "typecheck.m"
                    return;
                  }
#line 1975 "typecheck.m"
                }
#line 1975 "typecheck.m"
            else
#line 1975 "typecheck.m"
              {
#line 1975 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 1)));
#line 1975 "typecheck.m"
                MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 0)));

#line 1975 "typecheck.m"
                if ((check_hlds__typecheck__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1977 "typecheck.m"
                  {
#line 1978 "typecheck.m"
                    {
#line 1978 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 1978 "typecheck.m"
                      return;
                    }
#line 1977 "typecheck.m"
                  }
#line 1975 "typecheck.m"
                else
#line 1982 "typecheck.m"
                  {
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_3, (MR_Integer) 0)));
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__Types_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_3, (MR_Integer) 1)));
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssignSet1_52;
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes0_62;
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__MaybeOldVarType_63;
#line 1982 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_64;

#line 1947 "typecheck.m"
                    {
#line 1947 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__VarTypes0_62);
                    }
#line 1948 "typecheck.m"
                    {
#line 1948 "typecheck.m"
                      parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__V_55_55, check_hlds__typecheck__Type_46, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
                    }
#line 1956 "typecheck.m"
                    if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1957 "typecheck.m"
                      {
#line 1957 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeAssign_67;

#line 1958 "typecheck.m"
                        {
#line 1958 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeAssign_67);
                        }
#line 1959 "typecheck.m"
                        {
#line 1959 "typecheck.m"
                          check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
#line 1959 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 1959 "typecheck.m"
                        }
#line 1957 "typecheck.m"
                      }
#line 1956 "typecheck.m"
                    else
#line 1950 "typecheck.m"
                      {
#line 1950 "typecheck.m"
                        MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
#line 1953 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeAssign1_66;
#line 2541 "typecheck.m"
                        MR_Word check_hlds__typecheck__HeadTypeParams_75;
#line 2541 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeBindings0_76;
#line 2541 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeBindings_77;

#line 2542 "typecheck.m"
                        {
#line 2542 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__HeadTypeParams_75);
                        }
#line 2543 "typecheck.m"
                        {
#line 2543 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeBindings0_76);
                        }
#line 2544 "typecheck.m"
                        {
#line 2544 "typecheck.m"
                          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_46, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
                        }
#line 2541 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2541 "typecheck.m"
                          {
#line 2545 "typecheck.m"
                            {
#line 2545 "typecheck.m"
                              check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeAssign1_66);
                            }
#line 2545 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2541 "typecheck.m"
                          }
#line 1953 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 1952 "typecheck.m"
                          {
#line 1952 "typecheck.m"
                            check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
#line 1952 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 1952 "typecheck.m"
                          }
#line 1953 "typecheck.m"
                        else
#line 1954 "typecheck.m"
                          check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__V_53_53;
#line 1950 "typecheck.m"
                      }
#line 1984 "typecheck.m"
                    {
#line 1984 "typecheck.m"
                      check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__V_54_54, check_hlds__typecheck__Types_47, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
                    }
#line 1982 "typecheck.m"
                  }
#line 1975 "typecheck.m"
              }
#line 2002 "typecheck.m"
            /* direct tailcall eliminated */
#line 2002 "typecheck.m"
            {
#line 2002 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TAs_14;
#line 2002 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2002 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5;
#line 2002 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2002 "typecheck.m"
            }
#line 2002 "typecheck.m"
            continue;
#line 2000 "typecheck.m"
          }
#line 1998 "typecheck.m"
      }
#line 1998 "typecheck.m"
      break;
#line 1998 "typecheck.m"
    }
#line 1994 "typecheck.m"
}

#line 3223 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3223__2_1_f_0(
#line 3223 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_36)
#line 3223 "typecheck.m"
{
#line 3223 "typecheck.m"
  {
#line 3223 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3223 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVar__2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 1)));
#line 3223 "typecheck.m"
    MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 0)));
#line 3223 "typecheck.m"
    MR_Word check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 2)));
#line 3223 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 3)));

#line 3223 "typecheck.m"
    return check_hlds__typecheck__HeadVar__2_37;
#line 3223 "typecheck.m"
  }
#line 3223 "typecheck.m"
}

#line 1419 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1419__1_2_p_0(
#line 1419 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalType_84,
#line 1419 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_139)
#line 1419 "typecheck.m"
{
#line 1419 "typecheck.m"
  {
#line 1419 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__GoalType_84 == check_hlds__typecheck__HeadVar__2_139);

#line 1419 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 1419 "typecheck.m"
  }
#line 1419 "typecheck.m"
}

#line 1416 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1416__1_3_p_0(
#line 1416 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_131,
#line 1416 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_132,
#line 1416 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_133)
#line 1416 "typecheck.m"
{
#line 1416 "typecheck.m"
  {
#line 1416 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1416 "typecheck.m"
    MR_Word check_hlds__typecheck__V_134_134;

#line 1417 "typecheck.m"
    {
#line 1417 "typecheck.m"
      check_hlds__typecheck__V_134_134 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
    }
#line 1417 "typecheck.m"
    {
#line 1417 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_4_p_0(check_hlds__typecheck__HeadVar__1_131, check_hlds__typecheck__V_134_134, check_hlds__typecheck__HeadVar__2_132, check_hlds__typecheck__HeadVar__3_133);
#line 1417 "typecheck.m"
      return;
    }
#line 1416 "typecheck.m"
  }
#line 1416 "typecheck.m"
}

#line 504 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__504__1_2_p_0(
#line 504 "typecheck.m"
  MR_Word check_hlds__typecheck__StartingSpecs_22,
#line 504 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_51)
#line 504 "typecheck.m"
{
#line 504 "typecheck.m"
  {
#line 504 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 504 "typecheck.m"
    {
#line 504 "typecheck.m"
      return check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[0], ((MR_Box) (check_hlds__typecheck__StartingSpecs_22)), ((MR_Box) (check_hlds__typecheck__HeadVar__2_51)));
    }
#line 504 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 504 "typecheck.m"
  }
#line 504 "typecheck.m"
}

#line 1120 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
#line 1120 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 1120 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1120 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 1120 "typecheck.m"
{
#line 1120 "typecheck.m"
  {
#line 1120 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1120 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 1120 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 1120 "typecheck.m"
    {
#line 1120 "typecheck.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
#line 1120 "typecheck.m"
      return;
    }
#line 1120 "typecheck.m"
  }
#line 1120 "typecheck.m"
}

#line 1120 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
#line 1120 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 1120 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 1120 "typecheck.m"
{
#line 3906 "check_hlds.typecheck.c"
  {
#line 3908 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

#line 3911 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 3913 "check_hlds.typecheck.c"
  }
#line 1120 "typecheck.m"
}

#line 2826 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
#line 2826 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2826 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2826 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2826 "typecheck.m"
{
#line 2826 "typecheck.m"
  {
#line 2826 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2826 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_12 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 2826 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_13 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 2826 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_12 == check_hlds__typecheck__CastY_13);
#line 2826 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3942 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 2826 "typecheck.m"
    else
#line 2826 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 2826 "typecheck.m"
        {
#line 2826 "typecheck.m"
          MR_Word check_hlds__typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));

#line 2826 "typecheck.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2826 "typecheck.m"
            {
#line 2826 "typecheck.m"
              MR_Word check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));

#line 2826 "typecheck.m"
              {
#line 2826 "typecheck.m"
                check_hlds__typecheck_errors____Compare____cons_error_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__V_16_16, check_hlds__typecheck__V_11_11);
#line 2826 "typecheck.m"
                return;
              }
#line 2826 "typecheck.m"
            }
#line 2826 "typecheck.m"
          else
#line 3971 "check_hlds.typecheck.c"
            *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 2826 "typecheck.m"
        }
#line 2826 "typecheck.m"
      else
#line 2826 "typecheck.m"
        {
#line 2826 "typecheck.m"
          MR_Word check_hlds__typecheck__V_17_17 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);

#line 2826 "typecheck.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3984 "check_hlds.typecheck.c"
            *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 2826 "typecheck.m"
          else
#line 2826 "typecheck.m"
            {
#line 2826 "typecheck.m"
              MR_Word check_hlds__typecheck__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__3_3), (MR_Integer) 0);

#line 2826 "typecheck.m"
              {
#line 2826 "typecheck.m"
                check_hlds__typecheck_info____Compare____cons_type_info_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__V_17_17, check_hlds__typecheck__V_5_5);
#line 2826 "typecheck.m"
                return;
              }
#line 2826 "typecheck.m"
            }
#line 2826 "typecheck.m"
        }
#line 2826 "typecheck.m"
  }
#line 2826 "typecheck.m"
}

#line 2826 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
#line 2826 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2826 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2826 "typecheck.m"
{
#line 2826 "typecheck.m"
  {
#line 2826 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2826 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_7 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
#line 2826 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_8 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

#line 2826 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_7 == check_hlds__typecheck__CastY_8);
#line 2826 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2826 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2826 "typecheck.m"
    else
#line 2826 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2826 "typecheck.m"
        {
#line 2826 "typecheck.m"
          MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2826 "typecheck.m"
          MR_Word check_hlds__typecheck__V_6_6;

#line 2826 "typecheck.m"
          check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2826 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2826 "typecheck.m"
            {
#line 2826 "typecheck.m"
              check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 4052 "check_hlds.typecheck.c"
              {
#line 4054 "check_hlds.typecheck.c"
                return check_hlds__typecheck__succeeded = check_hlds__typecheck_errors____Unify____cons_error_0_0(check_hlds__typecheck__V_5_5, check_hlds__typecheck__V_6_6);
              }
#line 2826 "typecheck.m"
            }
#line 2826 "typecheck.m"
        }
#line 2826 "typecheck.m"
      else
#line 2826 "typecheck.m"
        {
#line 2826 "typecheck.m"
          MR_Word check_hlds__typecheck__V_3_3 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__1_1), (MR_Integer) 0);
#line 2826 "typecheck.m"
          MR_Word check_hlds__typecheck__V_4_4;

#line 2826 "typecheck.m"
          check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 2826 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2826 "typecheck.m"
            {
#line 2826 "typecheck.m"
              check_hlds__typecheck__V_4_4 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);
#line 4078 "check_hlds.typecheck.c"
              {
#line 4080 "check_hlds.typecheck.c"
                return check_hlds__typecheck__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(check_hlds__typecheck__V_3_3, check_hlds__typecheck__V_4_4);
              }
#line 2826 "typecheck.m"
            }
#line 2826 "typecheck.m"
        }
#line 2826 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2826 "typecheck.m"
  }
#line 2826 "typecheck.m"
}

#line 2182 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
#line 2182 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2182 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2182 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2182 "typecheck.m"
{
#line 2182 "typecheck.m"
  {
#line 2182 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2182 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar1_4 = check_hlds__typecheck__HeadVar__2_2;
#line 2182 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar2_5 = check_hlds__typecheck__HeadVar__3_3;

#line 2182 "typecheck.m"
    {
#line 2182 "typecheck.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_5)));
#line 2182 "typecheck.m"
      return;
    }
#line 2182 "typecheck.m"
  }
#line 2182 "typecheck.m"
}

#line 2182 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
#line 2182 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2182 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2182 "typecheck.m"
{
#line 2182 "typecheck.m"
  {
#line 2182 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2182 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar1_3 = check_hlds__typecheck__HeadVar__1_1;
#line 2182 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar2_4 = check_hlds__typecheck__HeadVar__2_2;

#line 2182 "typecheck.m"
    {
#line 2182 "typecheck.m"
      return check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_4)));
    }
#line 2182 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2182 "typecheck.m"
  }
#line 2182 "typecheck.m"
}

#line 2179 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0(
#line 2179 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2179 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2179 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2179 "typecheck.m"
{
#line 2179 "typecheck.m"
  {
#line 2179 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2179 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_9 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 2179 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_10 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 2179 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_9 == check_hlds__typecheck__CastY_10);
#line 2179 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 4180 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 2179 "typecheck.m"
    else
#line 2179 "typecheck.m"
      {
#line 2179 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2179 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 2179 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 2179 "typecheck.m"
        MR_Word check_hlds__typecheck__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 2179 "typecheck.m"
        MR_Word check_hlds__typecheck__V_8_8;

#line 2179 "typecheck.m"
        {
#line 2179 "typecheck.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__typecheck__V_8_8, check_hlds__typecheck__V_4_4, check_hlds__typecheck__V_6_6);
        }
#line 4202 "check_hlds.typecheck.c"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_8_8 == (MR_Integer) 0);
#line 2179 "typecheck.m"
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 2179 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2179 "typecheck.m"
          *check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__V_8_8;
#line 2179 "typecheck.m"
        else
#line 2179 "typecheck.m"
          {
#line 2179 "typecheck.m"
            {
#line 2179 "typecheck.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[5], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__V_5_5)), ((MR_Box) (check_hlds__typecheck__V_7_7)));
#line 2179 "typecheck.m"
              return;
            }
#line 2179 "typecheck.m"
          }
#line 2179 "typecheck.m"
      }
#line 2179 "typecheck.m"
  }
#line 2179 "typecheck.m"
}

#line 2179 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0(
#line 2179 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2179 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2179 "typecheck.m"
{
#line 2179 "typecheck.m"
  {
#line 2179 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2179 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_7 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
#line 2179 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_8 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

#line 2179 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_7 == check_hlds__typecheck__CastY_8);
#line 2179 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2179 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2179 "typecheck.m"
    else
#line 2179 "typecheck.m"
      {
#line 2179 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_10_10;
#line 2179 "typecheck.m"
        MR_Word check_hlds__typecheck__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2179 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2179 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2179 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));

#line 4269 "check_hlds.typecheck.c"
        {
#line 4271 "check_hlds.typecheck.c"
          check_hlds__typecheck__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck__V_3_3, check_hlds__typecheck__V_5_5);
        }
#line 2179 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2179 "typecheck.m"
          {
#line 4278 "check_hlds.typecheck.c"
            check_hlds__typecheck__TypeInfo_10_10 = (MR_Word) &check_hlds__typecheck_scalar_common_1[5];
#line 4280 "check_hlds.typecheck.c"
            {
#line 4282 "check_hlds.typecheck.c"
              return check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck__TypeInfo_10_10, ((MR_Box) (check_hlds__typecheck__V_4_4)), ((MR_Box) (check_hlds__typecheck__V_6_6)));
            }
#line 2179 "typecheck.m"
          }
#line 2179 "typecheck.m"
      }
#line 2179 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2179 "typecheck.m"
  }
#line 2179 "typecheck.m"
}

#line 3193 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
#line 3193 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3193 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3193 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 3193 "typecheck.m"
{
#line 3193 "typecheck.m"
  {
#line 3193 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3193 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 3193 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 3193 "typecheck.m"
    {
#line 3193 "typecheck.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
#line 3193 "typecheck.m"
      return;
    }
#line 3193 "typecheck.m"
  }
#line 3193 "typecheck.m"
}

#line 3193 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
#line 3193 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 3193 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 3193 "typecheck.m"
{
#line 4337 "check_hlds.typecheck.c"
  {
#line 4339 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

#line 4342 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 4344 "check_hlds.typecheck.c"
  }
#line 3193 "typecheck.m"
}

#line 3223 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
#line 3223 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3223 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 3223 "typecheck.m"
{
#line 3223 "typecheck.m"
  {
#line 3223 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 3223 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 3223 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__2_37;

#line 3223 "typecheck.m"
    {
#line 3223 "typecheck.m"
      check_hlds__typecheck__conv0_HeadVar__2_37 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3223__2_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 3223 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__2_37));
#line 3223 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 3223 "typecheck.m"
  }
#line 3223 "typecheck.m"
}

#line 3211 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
#line 3211 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 3211 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 3211 "typecheck.m"
  MR_Word check_hlds__typecheck__Action_8,
#line 3211 "typecheck.m"
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
#line 3211 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10)
#line 3211 "typecheck.m"
{
#line 3213 "typecheck.m"
  {
#line 3213 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 0)));
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 1)));
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 2)));
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeKinds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 3)));
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 4)));
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistProgConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 5)));
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 6)));
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_19;
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeTable_21;
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeDefn_22;
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_23;
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__PredId_24;
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_25;
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__ClassTable_26;
#line 3213 "typecheck.m"
    MR_Word check_hlds__typecheck__PredInfo_27;
#line 3221 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 7)));
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__V_53_53;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 3250 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_55_55;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__V_57_57;
#line 3250 "typecheck.m"
    MR_Word check_hlds__typecheck__V_58_58;
#line 3250 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_59_59;
#line 3254 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38;
#line 3254 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;
#line 3254 "typecheck.m"
    MR_Word check_hlds__typecheck__V_61_61;
#line 3254 "typecheck.m"
    MR_Word check_hlds__typecheck__V_62_62;
#line 3254 "typecheck.m"
    MR_Word check_hlds__typecheck__V_63_63;
#line 3254 "typecheck.m"
    MR_Word check_hlds__typecheck__V_64_64;
#line 3254 "typecheck.m"
    MR_Word check_hlds__typecheck__V_65_65;
#line 3254 "typecheck.m"
    MR_Word check_hlds__typecheck__V_66_66;
#line 3254 "typecheck.m"
    MR_Word check_hlds__typecheck__V_67_67;
#line 3254 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 3255 "typecheck.m"
    MR_Word check_hlds__typecheck__V_39_39;
#line 3255 "typecheck.m"
    MR_Word check_hlds__typecheck__V_70_70;
#line 3257 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 3257 "typecheck.m"
    MR_Word check_hlds__typecheck__V_71_71;

#line 3223 "typecheck.m"
    {
#line 3223 "typecheck.m"
      check_hlds__typecheck__ArgTypes_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[4], check_hlds__typecheck__Args_17);
    }
#line 3224 "typecheck.m"
    {
#line 3224 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__TypeTable_21);
    }
#line 3225 "typecheck.m"
    {
#line 3225 "typecheck.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_21, check_hlds__typecheck__TypeCtor_11, &check_hlds__typecheck__TypeDefn_22);
    }
#line 3226 "typecheck.m"
    {
#line 3226 "typecheck.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__Body_23);
    }
#line 3249 "typecheck.m"
    {
#line 3249 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_predid_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredId_24);
    }
#line 3250 "typecheck.m"
    check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 0)));
#line 3250 "typecheck.m"
    check_hlds__typecheck__ModuleInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 1)));
#line 3250 "typecheck.m"
    check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 2)));
#line 3250 "typecheck.m"
    check_hlds__typecheck__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 3)));
#line 3250 "typecheck.m"
    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 4)));
#line 3250 "typecheck.m"
    check_hlds__typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 5)));
#line 3250 "typecheck.m"
    check_hlds__typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 6)));
#line 3250 "typecheck.m"
    check_hlds__typecheck__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 7)));
#line 3251 "typecheck.m"
    {
#line 3251 "typecheck.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_25, &check_hlds__typecheck__ClassTable_26);
    }
#line 3252 "typecheck.m"
    {
#line 3252 "typecheck.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_25, check_hlds__typecheck__PredId_24, &check_hlds__typecheck__PredInfo_27);
    }
#line 3254 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Body_23)) == (MR_mktag((MR_Integer) 1)));
#line 3254 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3254 "typecheck.m"
      {
#line 3254 "typecheck.m"
        check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 0)));
#line 3254 "typecheck.m"
        check_hlds__typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 1)));
#line 3254 "typecheck.m"
        check_hlds__typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 2)));
#line 3254 "typecheck.m"
        check_hlds__typecheck__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 3)));
#line 3254 "typecheck.m"
        check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 4)));
#line 3254 "typecheck.m"
        check_hlds__typecheck__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 5)));
#line 3254 "typecheck.m"
        check_hlds__typecheck__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 3254 "typecheck.m"
        check_hlds__typecheck__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 3254 "typecheck.m"
        check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 7)));
#line 3254 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 3254 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3254 "typecheck.m"
          {
#line 3254 "typecheck.m"
            check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_38_38, (MR_Integer) 0)));
#line 3255 "typecheck.m"
            check_hlds__typecheck__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 3255 "typecheck.m"
            {
#line 3255 "typecheck.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__typecheck__PredInfo_27, &check_hlds__typecheck__V_70_70);
            }
#line 3255 "typecheck.m"
            {
#line 3255 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(check_hlds__typecheck__V_39_39, check_hlds__typecheck__V_70_70);
            }
#line 3255 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3254 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3254 "typecheck.m"
              {
#line 3256 "typecheck.m"
                {
#line 3256 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_27);
                }
#line 3256 "typecheck.m"
                check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3254 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 3254 "typecheck.m"
                  {
#line 3257 "typecheck.m"
                    check_hlds__typecheck__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3257 "typecheck.m"
                    {
#line 3257 "typecheck.m"
                      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__PredInfo_27, &check_hlds__typecheck__V_71_71);
                    }
#line 3257 "typecheck.m"
                    {
#line 3257 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____import_status_0_0(check_hlds__typecheck__V_40_40, check_hlds__typecheck__V_71_71);
                    }
#line 3257 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3254 "typecheck.m"
                  }
#line 3254 "typecheck.m"
              }
#line 3254 "typecheck.m"
          }
#line 3254 "typecheck.m"
      }
#line 3260 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3259 "typecheck.m"
      {
#line 3259 "typecheck.m"
        MR_Word check_hlds__typecheck__V_41_41;

#line 3259 "typecheck.m"
        {
#line 3259 "typecheck.m"
          check_hlds__typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3259 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_41_41, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3259 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_41_41, 1) = ((MR_Box) (check_hlds__typecheck__TypeDefn_22));
#line 3259 "typecheck.m"
        }
#line 3259 "typecheck.m"
        {
#line 3259 "typecheck.m"
          MR_Word base;
#line 3259 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3259 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfo_10 = base;
#line 3259 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 3259 "typecheck.m"
        }
#line 3259 "typecheck.m"
      }
#line 3260 "typecheck.m"
    else
#line 3268 "typecheck.m"
      {
#line 3263 "typecheck.m"
        MR_Word check_hlds__typecheck__V_72_72;
#line 3265 "typecheck.m"
        MR_Word check_hlds__typecheck__V_43_43;
#line 3265 "typecheck.m"
        MR_Word check_hlds__typecheck__V_73_73;

#line 3263 "typecheck.m"
        {
#line 3263 "typecheck.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__V_72_72);
        }
#line 3263 "typecheck.m"
        {
#line 3263 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____import_status_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__typecheck__V_72_72);
        }
#line 3263 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3263 "typecheck.m"
          {
#line 3264 "typecheck.m"
            {
#line 3264 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_27);
            }
#line 3264 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3263 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3263 "typecheck.m"
              {
#line 3265 "typecheck.m"
                check_hlds__typecheck__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3265 "typecheck.m"
                {
#line 3265 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__PredInfo_27, &check_hlds__typecheck__V_73_73);
                }
#line 3265 "typecheck.m"
                {
#line 3265 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____import_status_0_0(check_hlds__typecheck__V_43_43, check_hlds__typecheck__V_73_73);
                }
#line 3265 "typecheck.m"
                check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3263 "typecheck.m"
              }
#line 3263 "typecheck.m"
          }
#line 3268 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3267 "typecheck.m"
          {
#line 3267 "typecheck.m"
            *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[3]);
#line 3267 "typecheck.m"
          }
#line 3268 "typecheck.m"
        else
#line 3274 "typecheck.m"
          {
#line 3269 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Action_8 == (MR_Integer) 0);
#line 3269 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3270 "typecheck.m"
              check_hlds__typecheck__succeeded = (check_hlds__typecheck__ExistQVars0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3274 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3273 "typecheck.m"
              {
#line 3273 "typecheck.m"
                MR_Word check_hlds__typecheck__V_45_45;

#line 3273 "typecheck.m"
                {
#line 3273 "typecheck.m"
                  check_hlds__typecheck__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3273 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_45_45, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3273 "typecheck.m"
                }
#line 3273 "typecheck.m"
                {
#line 3273 "typecheck.m"
                  MR_Word base;
#line 3273 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3273 "typecheck.m"
                  *check_hlds__typecheck__ConsTypeInfo_10 = base;
#line 3273 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_45_45));
#line 3273 "typecheck.m"
                }
#line 3273 "typecheck.m"
              }
#line 3274 "typecheck.m"
            else
#line 3276 "typecheck.m"
              {
#line 3276 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeArgs_29;
#line 3276 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsType_30;
#line 3276 "typecheck.m"
                MR_Word check_hlds__typecheck__UnivProgConstraints_31;
#line 3276 "typecheck.m"
                MR_Word check_hlds__typecheck__ProgConstraints_32;
#line 3276 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVars_33;
#line 3276 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_34;
#line 3276 "typecheck.m"
                MR_Word check_hlds__typecheck__V_47_47;
#line 3276 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;

#line 3275 "typecheck.m"
                {
#line 3275 "typecheck.m"
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__ConsTypeKinds_14, check_hlds__typecheck__ConsTypeParams_13, &check_hlds__typecheck__ConsTypeArgs_29);
                }
#line 3277 "typecheck.m"
                {
#line 3277 "typecheck.m"
                  parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_11, check_hlds__typecheck__ConsTypeArgs_29, &check_hlds__typecheck__ConsType_30);
                }
#line 3278 "typecheck.m"
                check_hlds__typecheck__UnivProgConstraints_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3284 "typecheck.m"
                if ((check_hlds__typecheck__Action_8 == (MR_Integer) 2))
#line 3280 "typecheck.m"
                  {
#line 3281 "typecheck.m"
                    {
#line 3281 "typecheck.m"
                      check_hlds__typecheck__ProgConstraints_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3281 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 0) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_31));
#line 3281 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3281 "typecheck.m"
                    }
#line 3283 "typecheck.m"
                    check_hlds__typecheck__ExistQVars_33 = check_hlds__typecheck__ExistQVars0_15;
#line 3280 "typecheck.m"
                  }
#line 3284 "typecheck.m"
                else
#line 3284 "typecheck.m"
                  if ((check_hlds__typecheck__Action_8 == (MR_Integer) 1))
#line 3293 "typecheck.m"
                    {
#line 3299 "typecheck.m"
                      {
#line 3299 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3299 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3299 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3299 "typecheck.m"
                      }
#line 3301 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_33 = check_hlds__typecheck__ExistQVars0_15;
#line 3293 "typecheck.m"
                    }
#line 3284 "typecheck.m"
                  else
#line 3285 "typecheck.m"
                    {
#line 3289 "typecheck.m"
                      {
#line 3289 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3289 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3289 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 1) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_31));
#line 3289 "typecheck.m"
                      }
#line 3291 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3285 "typecheck.m"
                    }
#line 3303 "typecheck.m"
                {
#line 3303 "typecheck.m"
                  hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_26, check_hlds__typecheck__ConsTypeVarSet_12, check_hlds__typecheck__GoalId_7, check_hlds__typecheck__ProgConstraints_32, &check_hlds__typecheck__Constraints_34);
                }
#line 3306 "typecheck.m"
                {
#line 3306 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 3306 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3306 "typecheck.m"
                }
#line 3305 "typecheck.m"
                {
#line 3305 "typecheck.m"
                  check_hlds__typecheck__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3305 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_12));
#line 3305 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_33));
#line 3305 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_30));
#line 3305 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_19));
#line 3305 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_34));
#line 3305 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 5) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 3305 "typecheck.m"
                }
#line 3305 "typecheck.m"
                *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_47_47);
#line 3276 "typecheck.m"
              }
#line 3274 "typecheck.m"
          }
#line 3268 "typecheck.m"
      }
#line 3213 "typecheck.m"
  }
#line 3211 "typecheck.m"
}

#line 3198 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
#line 3198 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3198 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3198 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3198 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3198 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__5_5)
#line 3198 "typecheck.m"
{
#line 3202 "typecheck.m"
  {
#line 3202 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 3202 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3202 "typecheck.m"
      *check_hlds__typecheck__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3202 "typecheck.m"
    else
#line 3203 "typecheck.m"
      {
#line 3203 "typecheck.m"
        MR_Word check_hlds__typecheck__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 3203 "typecheck.m"
        MR_Word check_hlds__typecheck__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
#line 3203 "typecheck.m"
        MR_Word check_hlds__typecheck__Y_14;
#line 3203 "typecheck.m"
        MR_Word check_hlds__typecheck__Ys_15;

#line 3204 "typecheck.m"
        {
#line 3204 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__X_12, &check_hlds__typecheck__Y_14);
        }
#line 3205 "typecheck.m"
        {
#line 3205 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__Xs_13, &check_hlds__typecheck__Ys_15);
        }
#line 3203 "typecheck.m"
        {
#line 3203 "typecheck.m"
          MR_Word base;
#line 3203 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3203 "typecheck.m"
          *check_hlds__typecheck__HeadVar__5_5 = base;
#line 3203 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Y_14));
#line 3203 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Ys_15));
#line 3203 "typecheck.m"
        }
#line 3203 "typecheck.m"
      }
#line 3202 "typecheck.m"
  }
#line 3198 "typecheck.m"
}

#line 3175 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
#line 3175 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3175 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 3175 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3)
#line 3175 "typecheck.m"
{
#line 3178 "typecheck.m"
  {
#line 3178 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 3178 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3178 "typecheck.m"
      {
#line 3178 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3178 "typecheck.m"
        *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3178 "typecheck.m"
      }
#line 3178 "typecheck.m"
    else
#line 3179 "typecheck.m"
      {
#line 3179 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeConsInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 3179 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeConsInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 3179 "typecheck.m"
        MR_Word check_hlds__typecheck__InfosTail_8;
#line 3179 "typecheck.m"
        MR_Word check_hlds__typecheck__ErrorsTail_9;

#line 3180 "typecheck.m"
        {
#line 3180 "typecheck.m"
          check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__MaybeConsInfos_5, &check_hlds__typecheck__InfosTail_8, &check_hlds__typecheck__ErrorsTail_9);
        }
#line 3185 "typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeConsInfo_4)) == (MR_mktag((MR_Integer) 1))))
#line 3186 "typecheck.m"
          {
#line 3186 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeConsInfo_4, (MR_Integer) 0)));

#line 3187 "typecheck.m"
            *check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__InfosTail_8;
#line 3188 "typecheck.m"
            {
#line 3188 "typecheck.m"
              MR_Word base;
#line 3188 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3188 "typecheck.m"
              *check_hlds__typecheck__HeadVar__3_3 = base;
#line 3188 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsError_11));
#line 3188 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__ErrorsTail_9));
#line 3188 "typecheck.m"
            }
#line 3186 "typecheck.m"
          }
#line 3185 "typecheck.m"
        else
#line 3182 "typecheck.m"
          {
#line 3182 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsInfo_10 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeConsInfo_4), (MR_Integer) 0);

#line 3183 "typecheck.m"
            {
#line 3183 "typecheck.m"
              MR_Word base;
#line 3183 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3183 "typecheck.m"
              *check_hlds__typecheck__HeadVar__2_2 = base;
#line 3183 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_10));
#line 3183 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__InfosTail_8));
#line 3183 "typecheck.m"
            }
#line 3184 "typecheck.m"
            *check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__ErrorsTail_9;
#line 3182 "typecheck.m"
          }
#line 3179 "typecheck.m"
      }
#line 3178 "typecheck.m"
  }
#line 3175 "typecheck.m"
}

#line 3041 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
#line 3041 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3041 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3041 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3041 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3041 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3041 "typecheck.m"
  MR_Word * check_hlds__typecheck__DataConsErrors_12)
#line 3041 "typecheck.m"
{
#line 3046 "typecheck.m"
  {
#line 3046 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_72_72;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_77_77;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_13;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__Ctors_14;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__PlainMaybeConsInfos_19;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfos_27;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__DataMaybeConsInfos_28;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__DataConsInfos_29;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__BuiltinConsInfos_35;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__TupleConsInfos_46;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConsInfos_48;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__ApplyConsInfos_50;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__OtherConsInfos_51;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__V_70_70;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__V_71_71;
#line 3059 "typecheck.m"
    MR_Word check_hlds__typecheck__HLDS_ConsDefns_18;
#line 3054 "typecheck.m"
    MR_Word check_hlds__typecheck__V_15_15;
#line 3054 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_16_16;
#line 3054 "typecheck.m"
    MR_Word check_hlds__typecheck__V_17_17;
#line 3087 "typecheck.m"
    MR_Word check_hlds__typecheck__HLDS_ExistQConsDefns_24;
#line 3080 "typecheck.m"
    MR_Word check_hlds__typecheck__Name_20;
#line 3080 "typecheck.m"
    MR_Word check_hlds__typecheck__FunctorTypeCtor_21;
#line 3080 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigName_22;
#line 3080 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigFunctor_23;
#line 3080 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_78_78;
#line 3098 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
#line 3119 "typecheck.m"
    MR_String check_hlds__typecheck__BuiltInTypeName_30;
#line 3148 "typecheck.m"
    MR_Integer check_hlds__typecheck__TupleArity_36;
#line 3157 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConsInfosPrime_47;
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__ApplyConsInfosPrime_49;

#line 3047 "typecheck.m"
    {
#line 3047 "typecheck.m"
      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_13);
    }
#line 3052 "typecheck.m"
    {
#line 3052 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__Ctors_14);
    }
#line 3054 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 3054 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3054 "typecheck.m"
      {
#line 3054 "typecheck.m"
        check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3054 "typecheck.m"
        check_hlds__typecheck__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3054 "typecheck.m"
        check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3055 "typecheck.m"
        {
#line 3055 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__Functor_8, &check_hlds__typecheck__HLDS_ConsDefns_18);
        }
#line 3054 "typecheck.m"
      }
#line 3059 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3057 "typecheck.m"
      {
#line 3057 "typecheck.m"
        {
#line 3057 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 2, check_hlds__typecheck__HLDS_ConsDefns_18, &check_hlds__typecheck__PlainMaybeConsInfos_19);
        }
#line 3057 "typecheck.m"
      }
#line 3059 "typecheck.m"
    else
#line 3060 "typecheck.m"
      check_hlds__typecheck__PlainMaybeConsInfos_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3080 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 3080 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3080 "typecheck.m"
      {
#line 3080 "typecheck.m"
        check_hlds__typecheck__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3080 "typecheck.m"
        check_hlds__typecheck__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3080 "typecheck.m"
        check_hlds__typecheck__FunctorTypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3080 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_78_78);
#line 3080 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3080 "typecheck.m"
          {
#line 3081 "typecheck.m"
            {
#line 3081 "typecheck.m"
              check_hlds__typecheck__succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(check_hlds__typecheck__Name_20, &check_hlds__typecheck__OrigName_22);
            }
#line 3080 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3080 "typecheck.m"
              {
#line 3082 "typecheck.m"
                {
#line 3082 "typecheck.m"
                  check_hlds__typecheck__OrigFunctor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 3082 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 3082 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 1) = ((MR_Box) (check_hlds__typecheck__OrigName_22));
#line 3082 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 2) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 3082 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 3) = ((MR_Box) (check_hlds__typecheck__FunctorTypeCtor_21));
#line 3082 "typecheck.m"
                }
#line 3083 "typecheck.m"
                {
#line 3083 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__OrigFunctor_23, &check_hlds__typecheck__HLDS_ExistQConsDefns_24);
                }
#line 3080 "typecheck.m"
              }
#line 3080 "typecheck.m"
          }
#line 3080 "typecheck.m"
      }
#line 3087 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3085 "typecheck.m"
      {
#line 3085 "typecheck.m"
        {
#line 3085 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 0, check_hlds__typecheck__HLDS_ExistQConsDefns_24, &check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25);
        }
#line 3085 "typecheck.m"
      }
#line 3087 "typecheck.m"
    else
#line 3088 "typecheck.m"
      check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3094 "typecheck.m"
    {
#line 3094 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_field_access_function_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26);
    }
#line 3098 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3097 "typecheck.m"
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
#line 3098 "typecheck.m"
    else
#line 3099 "typecheck.m"
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5253 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_72_72 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 3103 "typecheck.m"
    {
#line 3103 "typecheck.m"
      check_hlds__typecheck__V_54_54 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25, check_hlds__typecheck__FieldAccessMaybeConsInfos_27);
    }
#line 3102 "typecheck.m"
    {
#line 3102 "typecheck.m"
      check_hlds__typecheck__DataMaybeConsInfos_28 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__PlainMaybeConsInfos_19, check_hlds__typecheck__V_54_54);
    }
#line 3104 "typecheck.m"
    {
#line 3104 "typecheck.m"
      check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__DataMaybeConsInfos_28, &check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__DataConsErrors_12);
    }
#line 3110 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == (MR_Integer) 0);
#line 3110 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2557 "typecheck.m"
      {
#line 2557 "typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2559 "typecheck.m"
          {
#line 2559 "typecheck.m"
            check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
#line 2559 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2559 "typecheck.m"
          }
#line 2557 "typecheck.m"
        else
#line 2557 "typecheck.m"
          if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2561 "typecheck.m"
            {
#line 2561 "typecheck.m"
              MR_String check_hlds__typecheck__String_83;
#line 2561 "typecheck.m"
              MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2561 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 2561 "typecheck.m"
              MR_Word check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 2568 "typecheck.m"
              MR_Char check_hlds__typecheck__V_85_85;

#line 2561 "typecheck.m"
              check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_87_87 == (MR_Integer) 0);
#line 2561 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2561 "typecheck.m"
                {
#line 2561 "typecheck.m"
                  check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_86_86)) == (MR_mktag((MR_Integer) 0)));
#line 2561 "typecheck.m"
                  if (check_hlds__typecheck__succeeded)
#line 2561 "typecheck.m"
                    {
#line 2561 "typecheck.m"
                      check_hlds__typecheck__String_83 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_86_86, (MR_Integer) 0)));
#line 2561 "typecheck.m"
                      check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
#line 2568 "typecheck.m"
                      {
#line 2568 "typecheck.m"
                        check_hlds__typecheck__succeeded = mercury__string__char_to_string_2_p_1(&check_hlds__typecheck__V_85_85, check_hlds__typecheck__String_83);
                      }
#line 2561 "typecheck.m"
                    }
#line 2561 "typecheck.m"
                }
#line 2561 "typecheck.m"
            }
#line 2557 "typecheck.m"
          else
#line 2557 "typecheck.m"
            if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2558 "typecheck.m"
              {
#line 2558 "typecheck.m"
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "float";
#line 2558 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2558 "typecheck.m"
              }
#line 2557 "typecheck.m"
            else
#line 2557 "typecheck.m"
              if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 2569 "typecheck.m"
                {
#line 2569 "typecheck.m"
                  MR_String check_hlds__typecheck__Name_88 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));

#line 2577 "typecheck.m"
                  if ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "line") == 0))
#line 2579 "typecheck.m"
                    {
#line 2579 "typecheck.m"
                      check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int";
#line 2579 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2579 "typecheck.m"
                    }
#line 2577 "typecheck.m"
                  else
#line 2577 "typecheck.m"
                    if ((((((((strcmp(check_hlds__typecheck__Name_88, (MR_String) "file") == 0)) || ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "grade") == 0)))) || ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "module") == 0)))) || ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "pred") == 0))))
#line 2576 "typecheck.m"
                      {
#line 2576 "typecheck.m"
                        check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "string";
#line 2576 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2576 "typecheck.m"
                      }
#line 2577 "typecheck.m"
                    else
#line 2577 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_FALSE;
#line 2569 "typecheck.m"
                }
#line 2557 "typecheck.m"
              else
#line 2557 "typecheck.m"
                if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2557 "typecheck.m"
                  {
#line 2557 "typecheck.m"
                    check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int";
#line 2557 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2557 "typecheck.m"
                  }
#line 2557 "typecheck.m"
                else
#line 2557 "typecheck.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 2560 "typecheck.m"
                    {
#line 2560 "typecheck.m"
                      check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "string";
#line 2560 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2560 "typecheck.m"
                    }
#line 2557 "typecheck.m"
                  else
#line 2557 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_FALSE;
#line 2557 "typecheck.m"
      }
#line 3119 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3113 "typecheck.m"
      {
#line 3113 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtor_31;
#line 3113 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsType_32;
#line 3113 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsTypeVarSet_33;
#line 3113 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsInfo_34;
#line 3113 "typecheck.m"
        MR_Word check_hlds__typecheck__V_55_55;
#line 3113 "typecheck.m"
        MR_Word check_hlds__typecheck__V_60_60;

#line 3113 "typecheck.m"
        {
#line 3113 "typecheck.m"
          check_hlds__typecheck__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 3113 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_55_55, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
#line 3113 "typecheck.m"
        }
#line 3113 "typecheck.m"
        {
#line 3113 "typecheck.m"
          check_hlds__typecheck__TypeCtor_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3113 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 0) = ((MR_Box) (check_hlds__typecheck__V_55_55));
#line 3113 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 3113 "typecheck.m"
        }
#line 3114 "typecheck.m"
        {
#line 3114 "typecheck.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsType_32);
        }
#line 3115 "typecheck.m"
        {
#line 3115 "typecheck.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_33);
        }
#line 3117 "typecheck.m"
        {
#line 3117 "typecheck.m"
          check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3117 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
#line 3117 "typecheck.m"
        }
#line 3116 "typecheck.m"
        {
#line 3116 "typecheck.m"
          check_hlds__typecheck__ConsInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3116 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_33));
#line 3116 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3116 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_32));
#line 3116 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3116 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
#line 3116 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 5) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 3116 "typecheck.m"
        }
#line 3118 "typecheck.m"
        {
#line 3118 "typecheck.m"
          check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3118 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_34));
#line 3118 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3118 "typecheck.m"
        }
#line 3113 "typecheck.m"
      }
#line 3119 "typecheck.m"
    else
#line 3120 "typecheck.m"
      check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3126 "typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3125 "typecheck.m"
      {
#line 3125 "typecheck.m"
        MR_Word check_hlds__typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3125 "typecheck.m"
        MR_String check_hlds__typecheck__V_63_63;
#line 3125 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37;

#line 3125 "typecheck.m"
        check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3125 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3125 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 3125 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3125 "typecheck.m"
          {
#line 3125 "typecheck.m"
            check_hlds__typecheck__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_62_62, (MR_Integer) 0)));
#line 3125 "typecheck.m"
            check_hlds__typecheck__succeeded = (strcmp(check_hlds__typecheck__V_63_63, (MR_String) "{}") == 0);
#line 3125 "typecheck.m"
          }
#line 3125 "typecheck.m"
      }
#line 3126 "typecheck.m"
    else
#line 3126 "typecheck.m"
      if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 3126 "typecheck.m"
        {
#line 3126 "typecheck.m"
          check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3126 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_TRUE;
#line 3126 "typecheck.m"
        }
#line 3126 "typecheck.m"
      else
#line 3126 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_FALSE;
#line 3148 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3133 "typecheck.m"
      {
#line 3133 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 3133 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsTypeVarSet0_38;
#line 3133 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleArgTVars_39;
#line 3133 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsTypeVarSet_40;
#line 3133 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleArgTypes_41;
#line 3133 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleTypeCtor_42;
#line 3133 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsType_43;
#line 3133 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsInfo_45;
#line 3133 "typecheck.m"
        MR_Word check_hlds__typecheck__V_64_64;

#line 3133 "typecheck.m"
        {
#line 3133 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, &check_hlds__typecheck__TupleConsTypeVarSet0_38);
        }
#line 3134 "typecheck.m"
        {
#line 3134 "typecheck.m"
          mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, check_hlds__typecheck__TupleArity_36, &check_hlds__typecheck__TupleArgTVars_39, check_hlds__typecheck__TupleConsTypeVarSet0_38, &check_hlds__typecheck__TupleConsTypeVarSet_40);
        }
#line 3136 "typecheck.m"
        {
#line 3136 "typecheck.m"
          check_hlds__typecheck__V_64_64 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 3136 "typecheck.m"
        {
#line 3136 "typecheck.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_64_64, check_hlds__typecheck__TupleArgTVars_39, &check_hlds__typecheck__TupleArgTypes_41);
        }
#line 3139 "typecheck.m"
        {
#line 3139 "typecheck.m"
          check_hlds__typecheck__TupleTypeCtor_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3139 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[1]));
#line 3139 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 1) = ((MR_Box) (check_hlds__typecheck__TupleArity_36));
#line 3139 "typecheck.m"
        }
#line 3140 "typecheck.m"
        {
#line 3140 "typecheck.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TupleTypeCtor_42, check_hlds__typecheck__TupleArgTypes_41, &check_hlds__typecheck__TupleConsType_43);
        }
#line 3144 "typecheck.m"
        {
#line 3144 "typecheck.m"
          check_hlds__typecheck__TupleConsInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3144 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsTypeVarSet_40));
#line 3144 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3144 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 2) = ((MR_Box) (check_hlds__typecheck__TupleConsType_43));
#line 3144 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 3) = ((MR_Box) (check_hlds__typecheck__TupleArgTypes_41));
#line 3144 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
#line 3144 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[2])));
#line 3144 "typecheck.m"
        }
#line 3147 "typecheck.m"
        {
#line 3147 "typecheck.m"
          check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3147 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsInfo_45));
#line 3147 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3147 "typecheck.m"
        }
#line 3133 "typecheck.m"
      }
#line 3148 "typecheck.m"
    else
#line 3149 "typecheck.m"
      check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3155 "typecheck.m"
    {
#line 3155 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_pred_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, &check_hlds__typecheck__PredConsInfosPrime_47);
    }
#line 3157 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3156 "typecheck.m"
      check_hlds__typecheck__PredConsInfos_48 = check_hlds__typecheck__PredConsInfosPrime_47;
#line 3157 "typecheck.m"
    else
#line 3158 "typecheck.m"
      check_hlds__typecheck__PredConsInfos_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3162 "typecheck.m"
    {
#line 3162 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__ApplyConsInfosPrime_49);
    }
#line 3164 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3163 "typecheck.m"
      check_hlds__typecheck__ApplyConsInfos_50 = check_hlds__typecheck__ApplyConsInfosPrime_49;
#line 3164 "typecheck.m"
    else
#line 3165 "typecheck.m"
      check_hlds__typecheck__ApplyConsInfos_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5659 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_77_77 = (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0;
#line 3169 "typecheck.m"
    {
#line 3169 "typecheck.m"
      check_hlds__typecheck__V_71_71 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__PredConsInfos_48, check_hlds__typecheck__ApplyConsInfos_50);
    }
#line 3169 "typecheck.m"
    {
#line 3169 "typecheck.m"
      check_hlds__typecheck__V_70_70 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__TupleConsInfos_46, check_hlds__typecheck__V_71_71);
    }
#line 3168 "typecheck.m"
    {
#line 3168 "typecheck.m"
      check_hlds__typecheck__OtherConsInfos_51 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__BuiltinConsInfos_35, check_hlds__typecheck__V_70_70);
    }
#line 3170 "typecheck.m"
    {
#line 3170 "typecheck.m"
      *check_hlds__typecheck__ConsInfos_11 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__OtherConsInfos_51);
    }
#line 3046 "typecheck.m"
  }
#line 3041 "typecheck.m"
}

#line 2762 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
#line 2762 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2762 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2762 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2762 "typecheck.m"
{
#line 2762 "typecheck.m"
  {
#line 2762 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2762 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2762 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

#line 2762 "typecheck.m"
    {
#line 2762 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    }
#line 2762 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2762 "typecheck.m"
      {
#line 2762 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
#line 2762 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2762 "typecheck.m"
      }
#line 2762 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2762 "typecheck.m"
  }
#line 2762 "typecheck.m"
}

#line 3011 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
#line 3011 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3011 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3011 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3011 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3011 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3011 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsErrors_12)
#line 3011 "typecheck.m"
{
#line 3015 "typecheck.m"
  {
#line 3015 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3015 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_13;
#line 3023 "typecheck.m"
    MR_Word check_hlds__typecheck__ImportStatus_14;

#line 3016 "typecheck.m"
    {
#line 3016 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__IsFieldAccessFunc_13);
    }
#line 3023 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsFieldAccessFunc_13 == (MR_Integer) 1);
#line 3023 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3023 "typecheck.m"
      {
#line 3024 "typecheck.m"
        {
#line 3024 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_pred_import_status_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__ImportStatus_14);
        }
#line 3025 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__ImportStatus_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3025 "typecheck.m"
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3023 "typecheck.m"
      }
#line 3036 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3032 "typecheck.m"
      {
#line 3032 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldAccessConsInfos_15;
#line 2750 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_26_36;
#line 2750 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_27_37;
#line 2750 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_30_40;
#line 2750 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_31_41;
#line 2750 "typecheck.m"
        MR_Word check_hlds__typecheck__Name_21;
#line 2750 "typecheck.m"
        MR_Word check_hlds__typecheck__ModuleInfo_23;
#line 2750 "typecheck.m"
        MR_Word check_hlds__typecheck__AccessType_24;
#line 2750 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldName_25;
#line 2750 "typecheck.m"
        MR_Word check_hlds__typecheck__CtorFieldTable_26;
#line 2750 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldDefns_27;
#line 2750 "typecheck.m"
        MR_Word check_hlds__typecheck__V_28_28;
#line 2750 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_42_42;
#line 2750 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_43_43;
#line 2753 "typecheck.m"
        MR_Word check_hlds__typecheck__V_22_22;
#line 2754 "typecheck.m"
        MR_Word check_hlds__typecheck__V_29_29;
#line 2754 "typecheck.m"
        MR_Word check_hlds__typecheck__V_30_30;
#line 2754 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_31_31;
#line 2754 "typecheck.m"
        MR_Word check_hlds__typecheck__V_32_32;
#line 2754 "typecheck.m"
        MR_Word check_hlds__typecheck__V_33_33;
#line 2754 "typecheck.m"
        MR_Word check_hlds__typecheck__V_34_34;
#line 2754 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_35_35;
#line 2759 "typecheck.m"
        MR_Box check_hlds__typecheck__conv0_FieldDefns_27;

#line 2753 "typecheck.m"
        check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2753 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2753 "typecheck.m"
          {
#line 2753 "typecheck.m"
            check_hlds__typecheck__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2753 "typecheck.m"
            check_hlds__typecheck__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 2753 "typecheck.m"
            check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 2753 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_42_42);
#line 2750 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2750 "typecheck.m"
              {
#line 2754 "typecheck.m"
                check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 0)));
#line 2754 "typecheck.m"
                check_hlds__typecheck__ModuleInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 1)));
#line 2754 "typecheck.m"
                check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 2)));
#line 2754 "typecheck.m"
                check_hlds__typecheck__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 3)));
#line 2754 "typecheck.m"
                check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 4)));
#line 2754 "typecheck.m"
                check_hlds__typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 5)));
#line 2754 "typecheck.m"
                check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 6)));
#line 2754 "typecheck.m"
                check_hlds__typecheck__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 7)));
#line 2755 "typecheck.m"
                {
#line 2755 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_23, check_hlds__typecheck__Name_21, &check_hlds__typecheck__V_43_43, &check_hlds__typecheck__AccessType_24, &check_hlds__typecheck__FieldName_25);
                }
#line 2750 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2750 "typecheck.m"
                  {
#line 2755 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_43_43);
#line 2750 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2750 "typecheck.m"
                      {
#line 2758 "typecheck.m"
                        {
#line 2758 "typecheck.m"
                          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_23, &check_hlds__typecheck__CtorFieldTable_26);
                        }
#line 5881 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_26_36 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 5883 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeInfo_27_37 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
#line 2759 "typecheck.m"
                        {
#line 2759 "typecheck.m"
                          check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_36, check_hlds__typecheck__TypeInfo_27_37, check_hlds__typecheck__CtorFieldTable_26, ((MR_Box) (check_hlds__typecheck__FieldName_25)), &check_hlds__typecheck__conv0_FieldDefns_27);
                        }
#line 2759 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2759 "typecheck.m"
                          {
#line 2759 "typecheck.m"
                            check_hlds__typecheck__FieldDefns_27 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_27);
#line 2759 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2759 "typecheck.m"
                          }
#line 2750 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2750 "typecheck.m"
                          {
#line 5904 "check_hlds.typecheck.c"
                            check_hlds__typecheck__TypeCtorInfo_30_40 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
#line 5906 "check_hlds.typecheck.c"
                            check_hlds__typecheck__TypeCtorInfo_31_41 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 2762 "typecheck.m"
                            {
#line 2762 "typecheck.m"
                              check_hlds__typecheck__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2762 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[0]));
#line 2762 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1));
#line 2762 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2762 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 3) = ((MR_Box) (check_hlds__typecheck__Info_7));
#line 2762 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_10));
#line 2762 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 5) = ((MR_Box) (check_hlds__typecheck__Name_21));
#line 2762 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 2762 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_24));
#line 2762 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_25));
#line 2762 "typecheck.m"
                            }
#line 2761 "typecheck.m"
                            {
#line 2761 "typecheck.m"
                              mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_30_40, check_hlds__typecheck__TypeCtorInfo_31_41, check_hlds__typecheck__V_28_28, check_hlds__typecheck__FieldDefns_27, &check_hlds__typecheck__FieldAccessConsInfos_15);
                            }
#line 2761 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2750 "typecheck.m"
                          }
#line 2750 "typecheck.m"
                      }
#line 2750 "typecheck.m"
                  }
#line 2750 "typecheck.m"
              }
#line 2753 "typecheck.m"
          }
#line 3032 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3031 "typecheck.m"
          {
#line 3031 "typecheck.m"
            check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__FieldAccessConsInfos_15, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
#line 3031 "typecheck.m"
            return;
          }
#line 3032 "typecheck.m"
        else
#line 3033 "typecheck.m"
          {
#line 3033 "typecheck.m"
            *check_hlds__typecheck__ConsInfos_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3034 "typecheck.m"
            *check_hlds__typecheck__ConsErrors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3033 "typecheck.m"
          }
#line 3032 "typecheck.m"
      }
#line 3036 "typecheck.m"
    else
#line 3037 "typecheck.m"
      {
#line 3037 "typecheck.m"
        check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
#line 3037 "typecheck.m"
        return;
      }
#line 3015 "typecheck.m"
  }
#line 3011 "typecheck.m"
}

#line 2996 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
#line 2996 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 2996 "typecheck.m"
{
#line 2996 "typecheck.m"
  {
#line 2996 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 2996 "typecheck.m"
    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0, 1);
#line 2996 "typecheck.m"
  }
#line 2996 "typecheck.m"
}

#line 2996 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
#line 2996 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 2996 "typecheck.m"
{
#line 2996 "typecheck.m"
  {
#line 2996 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 6015 "check_hlds.typecheck.c"
    (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 2997 "typecheck.m"
    {
#line 2997 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = mercury__map__contains_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12)));
    }
#line 2997 "typecheck.m"
    if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
#line 2997 "typecheck.m"
      {
#line 2997 "typecheck.m"
        check_hlds__typecheck__rename_constraint_3_p_0_1(check_hlds__typecheck__env_ptr);
#line 2997 "typecheck.m"
        return;
      }
#line 2996 "typecheck.m"
  }
#line 2996 "typecheck.m"
}

#line 2996 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
#line 2996 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 2996 "typecheck.m"
{
#line 2996 "typecheck.m"
  {
#line 2996 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 2996 "typecheck.m"
    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0) == 0)
#line 2996 "typecheck.m"
      {
#line 2996 "typecheck.m"
        {
#line 2996 "typecheck.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Types0_9, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12, check_hlds__typecheck__rename_constraint_3_p_0_2, check_hlds__typecheck__env_ptr);
        }
#line 2996 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_FALSE;
#line 2996 "typecheck.m"
      }
#line 2996 "typecheck.m"
    else
#line 2996 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
#line 2996 "typecheck.m"
  }
#line 2996 "typecheck.m"
}

#line 2990 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
#line 2990 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_4,
#line 2990 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint0_5,
#line 2990 "typecheck.m"
  MR_Word * check_hlds__typecheck__Constraint_6)
#line 2990 "typecheck.m"
{
#line 2990 "typecheck.m"
  {
#line 2990 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s check_hlds__typecheck__env;

#line 2990 "typecheck.m"
    (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4 = check_hlds__typecheck__TVarRenaming_4;
#line 2993 "typecheck.m"
    {
#line 2993 "typecheck.m"
      MR_Word check_hlds__typecheck__Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 0)));
#line 2993 "typecheck.m"
      MR_Word check_hlds__typecheck__Name_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 1)));
#line 2993 "typecheck.m"
      MR_Word check_hlds__typecheck__Types_11;

#line 2994 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__Types0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 2)));
#line 2996 "typecheck.m"
      {
#line 2996 "typecheck.m"
        check_hlds__typecheck__rename_constraint_3_p_0_3(&check_hlds__typecheck__env);
      }
#line 2993 "typecheck.m"
      if ((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
#line 2993 "typecheck.m"
        {
#line 2999 "typecheck.m"
          {
#line 2999 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__Types0_9, &check_hlds__typecheck__Types_11);
          }
#line 3000 "typecheck.m"
          {
#line 3000 "typecheck.m"
            MR_Word base;
#line 3000 "typecheck.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3000 "typecheck.m"
            *check_hlds__typecheck__Constraint_6 = base;
#line 3000 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Ids_7));
#line 3000 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Name_8));
#line 3000 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__Types_11));
#line 3000 "typecheck.m"
          }
#line 3000 "typecheck.m"
          (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
#line 2993 "typecheck.m"
        }
#line 2993 "typecheck.m"
      return (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
#line 2993 "typecheck.m"
    }
#line 2990 "typecheck.m"
  }
#line 2990 "typecheck.m"
}

#line 2981 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
#line 2981 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_3,
#line 2981 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4)
#line 2981 "typecheck.m"
{
#line 2983 "typecheck.m"
  {
#line 2983 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2983 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_11_11;
#line 2983 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesToCheck_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 2)));
#line 2983 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarsToCheck0_8;
#line 2983 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarsToCheck_9;
#line 2983 "typecheck.m"
    MR_Word check_hlds__typecheck__RelevantTVars_10;
#line 2984 "typecheck.m"
    MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 0)));
#line 2984 "typecheck.m"
    MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 1)));

#line 2985 "typecheck.m"
    {
#line 2985 "typecheck.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__TypesToCheck_7, &check_hlds__typecheck__TVarsToCheck0_8);
    }
#line 6175 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeInfo_11_11 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 2986 "typecheck.m"
    {
#line 2986 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck0_8, &check_hlds__typecheck__TVarsToCheck_9);
    }
#line 2987 "typecheck.m"
    {
#line 2987 "typecheck.m"
      mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck_9, check_hlds__typecheck__CallTVars_3, &check_hlds__typecheck__RelevantTVars_10);
    }
#line 2988 "typecheck.m"
    {
#line 2988 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__set__empty_1_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__RelevantTVars_10);
    }
#line 2988 "typecheck.m"
    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 2983 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2983 "typecheck.m"
  }
#line 2981 "typecheck.m"
}

#line 2974 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
#line 2974 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2974 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2974 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2974 "typecheck.m"
{
#line 2974 "typecheck.m"
  {
#line 2974 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2974 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2974 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_Constraint_6;

#line 2974 "typecheck.m"
    {
#line 2974 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__rename_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv0_Constraint_6);
    }
#line 2974 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2974 "typecheck.m"
      {
#line 2974 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_Constraint_6));
#line 2974 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2974 "typecheck.m"
      }
#line 2974 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2974 "typecheck.m"
  }
#line 2974 "typecheck.m"
}

#line 2973 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
#line 2973 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2973 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 2973 "typecheck.m"
{
#line 2973 "typecheck.m"
  {
#line 2973 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2973 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 2973 "typecheck.m"
    {
#line 2973 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__project_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 2973 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2973 "typecheck.m"
  }
#line 2973 "typecheck.m"
}

#line 2963 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
#line 2963 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_7,
#line 2963 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarSet_8,
#line 2963 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_9,
#line 2963 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_10,
#line 2963 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
#line 2963 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21)
#line 2963 "typecheck.m"
{
#line 2968 "typecheck.m"
  {
#line 2968 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__Unproven0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 0)));
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__Assumed_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 1)));
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__Redundant0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 2)));
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 3)));
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__NewUnproven0_16;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__NewUnproven_17;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__Redundant_18;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__Unproven_19;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;

#line 2973 "typecheck.m"
    {
#line 2973 "typecheck.m"
      check_hlds__typecheck__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2973 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[5]));
#line 2973 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_1));
#line 2973 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2973 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 3) = ((MR_Box) (check_hlds__typecheck__CallTVars_9));
#line 2973 "typecheck.m"
    }
#line 6329 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 2973 "typecheck.m"
    {
#line 2973 "typecheck.m"
      mercury__list__filter_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__V_22_22, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__NewUnproven0_16);
    }
#line 2974 "typecheck.m"
    {
#line 2974 "typecheck.m"
      check_hlds__typecheck__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2974 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_7[1]));
#line 2974 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_2));
#line 2974 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2974 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 3) = ((MR_Box) (check_hlds__typecheck__TVarRenaming_10));
#line 2974 "typecheck.m"
    }
#line 2974 "typecheck.m"
    {
#line 2974 "typecheck.m"
      mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__V_23_23, check_hlds__typecheck__NewUnproven0_16, &check_hlds__typecheck__NewUnproven_17);
    }
#line 2976 "typecheck.m"
    {
#line 2976 "typecheck.m"
      hlds__hlds_data__update_redundant_constraints_5_p_0(check_hlds__typecheck__ClassTable_7, check_hlds__typecheck__TVarSet_8, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Redundant0_14, &check_hlds__typecheck__Redundant_18);
    }
#line 2978 "typecheck.m"
    {
#line 2978 "typecheck.m"
      mercury__list__append_3_p_1(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__Unproven_19);
    }
#line 2979 "typecheck.m"
    {
#line 2979 "typecheck.m"
      MR_Word base;
#line 2979 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2979 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Constraints_21 = base;
#line 2979 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Unproven_19));
#line 2979 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Assumed_13));
#line 2979 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__Redundant_18));
#line 2979 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__Ancestors_15));
#line 2979 "typecheck.m"
    }
#line 2968 "typecheck.m"
  }
#line 2963 "typecheck.m"
}

#line 2830 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_8,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_9,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_10,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_11,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
#line 2830 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
#line 2830 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14)
#line 2830 "typecheck.m"
{
#line 2835 "typecheck.m"
  {
#line 2835 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2835 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_100_100;
#line 2835 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 0)));
#line 2835 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 1)));
#line 2835 "typecheck.m"
    MR_Word check_hlds__typecheck__FunctorType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 2)));
#line 2835 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 3)));
#line 2835 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 4)));
#line 2835 "typecheck.m"
    MR_Word check_hlds__typecheck__Source0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 5)));
#line 2835 "typecheck.m"
    MR_Word check_hlds__typecheck__SourceType_22;
#line 2835 "typecheck.m"
    MR_Integer check_hlds__typecheck__FieldNumber_32;
#line 2835 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldType_33;
#line 2850 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 2850 "typecheck.m"
    MR_Word check_hlds__typecheck__V_29_29;
#line 2850 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;
#line 2850 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 2851 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_FieldType_33;

#line 2841 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__Source0_20)) == (MR_mktag((MR_Integer) 0))))
#line 2839 "typecheck.m"
      check_hlds__typecheck__SourceType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Source0_20, (MR_Integer) 0)));
#line 2841 "typecheck.m"
    else
#line 2847 "typecheck.m"
      {
#line 2848 "typecheck.m"
        {
#line 2848 "typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
#line 2848 "typecheck.m"
          return;
        }
#line 2847 "typecheck.m"
      }
#line 2850 "typecheck.m"
    check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 0)));
#line 2850 "typecheck.m"
    check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 1)));
#line 2850 "typecheck.m"
    check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 2)));
#line 2850 "typecheck.m"
    check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 3)));
#line 2850 "typecheck.m"
    check_hlds__typecheck__FieldNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 4)));
#line 6469 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 2851 "typecheck.m"
    {
#line 2851 "typecheck.m"
      mercury__list__det_index1_3_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, &check_hlds__typecheck__conv0_FieldType_33);
    }
#line 2851 "typecheck.m"
    check_hlds__typecheck__FieldType_33 = ((MR_Word) check_hlds__typecheck__conv0_FieldType_33);
#line 2861 "typecheck.m"
    if ((check_hlds__typecheck__AccessType_9 == (MR_Integer) 0))
#line 2853 "typecheck.m"
      {
#line 2853 "typecheck.m"
        MR_Word check_hlds__typecheck__Source_34;
#line 2853 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypes_36;
#line 2853 "typecheck.m"
        MR_Word check_hlds__typecheck__V_74_74;

#line 2854 "typecheck.m"
        {
#line 2854 "typecheck.m"
          check_hlds__typecheck__Source_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2854 "typecheck.m"
          MR_hl_field(MR_mktag(2), check_hlds__typecheck__Source_34, 0) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
#line 2854 "typecheck.m"
        }
#line 2856 "typecheck.m"
        {
#line 2856 "typecheck.m"
          check_hlds__typecheck__ArgTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2856 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 2856 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2856 "typecheck.m"
        }
#line 2859 "typecheck.m"
        {
#line 2859 "typecheck.m"
          check_hlds__typecheck__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2859 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 2859 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 2859 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 2) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 2859 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_36));
#line 2859 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
#line 2859 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 5) = ((MR_Box) (check_hlds__typecheck__Source_34));
#line 2859 "typecheck.m"
        }
#line 2859 "typecheck.m"
        *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_74_74);
#line 2853 "typecheck.m"
      }
#line 2861 "typecheck.m"
    else
#line 2862 "typecheck.m"
      {
#line 2862 "typecheck.m"
        MR_Word check_hlds__typecheck__TVarsInField_39;
#line 2862 "typecheck.m"
        MR_Word check_hlds__typecheck__Source_95;

#line 2863 "typecheck.m"
        {
#line 2863 "typecheck.m"
          check_hlds__typecheck__Source_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2863 "typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2863 "typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 1) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
#line 2863 "typecheck.m"
        }
#line 2877 "typecheck.m"
        {
#line 2877 "typecheck.m"
          parse_tree__prog_type__type_vars_2_p_0(check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__TVarsInField_39);
        }
#line 2890 "typecheck.m"
        if ((check_hlds__typecheck__TVarsInField_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2879 "typecheck.m"
          {
#line 2879 "typecheck.m"
            MR_Word check_hlds__typecheck__V_70_70;
#line 2879 "typecheck.m"
            MR_Word check_hlds__typecheck__V_72_72;
#line 2879 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_76;

#line 2882 "typecheck.m"
            {
#line 2882 "typecheck.m"
              check_hlds__typecheck__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2882 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_70_70, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 2882 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2882 "typecheck.m"
            }
#line 2882 "typecheck.m"
            {
#line 2882 "typecheck.m"
              check_hlds__typecheck__ArgTypes_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2882 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 2882 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 1) = ((MR_Box) (check_hlds__typecheck__V_70_70));
#line 2882 "typecheck.m"
            }
#line 2888 "typecheck.m"
            {
#line 2888 "typecheck.m"
              check_hlds__typecheck__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2888 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 2888 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 2888 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 2) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 2888 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_76));
#line 2888 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
#line 2888 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
#line 2888 "typecheck.m"
            }
#line 2888 "typecheck.m"
            *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_72_72);
#line 2879 "typecheck.m"
          }
#line 2890 "typecheck.m"
        else
#line 2891 "typecheck.m"
          {
#line 2891 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeInfo_101_101;
#line 2891 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypesWithoutField_42;
#line 2891 "typecheck.m"
            MR_Word check_hlds__typecheck__TVarsInOtherArgs_43;
#line 2891 "typecheck.m"
            MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers_44;
#line 2891 "typecheck.m"
            MR_Word check_hlds__typecheck__V_58_58;
#line 2891 "typecheck.m"
            MR_Word check_hlds__typecheck__V_59_59;
#line 2891 "typecheck.m"
            MR_Word check_hlds__typecheck__V_60_60;
#line 2891 "typecheck.m"
            MR_Word check_hlds__typecheck__V_61_61;
#line 2891 "typecheck.m"
            MR_Word check_hlds__typecheck__V_62_62;

#line 2906 "typecheck.m"
            {
#line 2906 "typecheck.m"
              check_hlds__typecheck__V_58_58 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
#line 2906 "typecheck.m"
            {
#line 2906 "typecheck.m"
              mercury__list__det_replace_nth_4_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, ((MR_Box) (check_hlds__typecheck__V_58_58)), &check_hlds__typecheck__ArgTypesWithoutField_42);
            }
#line 2908 "typecheck.m"
            {
#line 2908 "typecheck.m"
              parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypesWithoutField_42, &check_hlds__typecheck__TVarsInOtherArgs_43);
            }
#line 6644 "check_hlds.typecheck.c"
            check_hlds__typecheck__TypeInfo_101_101 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 2910 "typecheck.m"
            {
#line 2910 "typecheck.m"
              check_hlds__typecheck__V_59_59 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39);
            }
#line 2912 "typecheck.m"
            {
#line 2912 "typecheck.m"
              check_hlds__typecheck__V_61_61 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInOtherArgs_43);
            }
#line 2913 "typecheck.m"
            {
#line 2913 "typecheck.m"
              check_hlds__typecheck__V_62_62 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__OrigExistTVars_13);
            }
#line 2911 "typecheck.m"
            {
#line 2911 "typecheck.m"
              check_hlds__typecheck__V_60_60 = mercury__set__intersect_2_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__V_61_61, check_hlds__typecheck__V_62_62);
            }
#line 2909 "typecheck.m"
            {
#line 2909 "typecheck.m"
              mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__V_59_59, check_hlds__typecheck__V_60_60, &check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
            }
#line 2916 "typecheck.m"
            {
#line 2916 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__set__empty_1_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
            }
#line 2945 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2921 "typecheck.m"
              {
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarsOnlyInField0_45;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarsOnlyInField_46;
#line 2921 "typecheck.m"
                MR_Integer check_hlds__typecheck__NumNewTVars_47;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__NewTVars_48;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarRenaming_49;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__RenamedFieldType_50;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__CallTVars0_52;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__CallTVars_53;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__V_63_63;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__V_64_64;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__V_66_66;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__RetType_79;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_80;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarSet_81;
#line 2921 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_82;

#line 2920 "typecheck.m"
                {
#line 2920 "typecheck.m"
                  mercury__list__delete_elems_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39, check_hlds__typecheck__TVarsInOtherArgs_43, &check_hlds__typecheck__TVarsOnlyInField0_45);
                }
#line 2922 "typecheck.m"
                {
#line 2922 "typecheck.m"
                  mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField0_45, &check_hlds__typecheck__TVarsOnlyInField_46);
                }
#line 2923 "typecheck.m"
                {
#line 2923 "typecheck.m"
                  mercury__list__length_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, &check_hlds__typecheck__NumNewTVars_47);
                }
#line 2924 "typecheck.m"
                {
#line 2924 "typecheck.m"
                  mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__NumNewTVars_47, &check_hlds__typecheck__NewTVars_48, check_hlds__typecheck__TVarSet0_15, &check_hlds__typecheck__TVarSet_81);
                }
#line 2925 "typecheck.m"
                {
#line 2925 "typecheck.m"
                  mercury__map__from_corresponding_lists_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, check_hlds__typecheck__NewTVars_48, &check_hlds__typecheck__TVarRenaming_49);
                }
#line 2927 "typecheck.m"
                {
#line 2927 "typecheck.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__RenamedFieldType_50);
                }
#line 2929 "typecheck.m"
                {
#line 2929 "typecheck.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FunctorType_17, &check_hlds__typecheck__RetType_79);
                }
#line 2936 "typecheck.m"
                {
#line 2936 "typecheck.m"
                  check_hlds__typecheck__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2936 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 2936 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2936 "typecheck.m"
                }
#line 2936 "typecheck.m"
                {
#line 2936 "typecheck.m"
                  check_hlds__typecheck__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2936 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 2936 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 1) = ((MR_Box) (check_hlds__typecheck__V_64_64));
#line 2936 "typecheck.m"
                }
#line 2936 "typecheck.m"
                {
#line 2936 "typecheck.m"
                  parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__V_63_63, &check_hlds__typecheck__CallTVars0_52);
                }
#line 2937 "typecheck.m"
                {
#line 2937 "typecheck.m"
                  mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__CallTVars0_52, &check_hlds__typecheck__CallTVars_53);
                }
#line 2938 "typecheck.m"
                {
#line 2938 "typecheck.m"
                  check_hlds__typecheck__project_and_rename_constraints_6_p_0(check_hlds__typecheck__ClassTable_8, check_hlds__typecheck__TVarSet_81, check_hlds__typecheck__CallTVars_53, check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__Constraints0_19, &check_hlds__typecheck__Constraints_82);
                }
#line 2942 "typecheck.m"
                {
#line 2942 "typecheck.m"
                  check_hlds__typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2942 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__typecheck__RenamedFieldType_50));
#line 2942 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2942 "typecheck.m"
                }
#line 2942 "typecheck.m"
                {
#line 2942 "typecheck.m"
                  check_hlds__typecheck__ArgTypes_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2942 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 2942 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 1) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 2942 "typecheck.m"
                }
#line 2943 "typecheck.m"
                {
#line 2943 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2943 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet_81));
#line 2943 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 2943 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 2) = ((MR_Box) (check_hlds__typecheck__RetType_79));
#line 2943 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_80));
#line 2943 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_82));
#line 2943 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
#line 2943 "typecheck.m"
                }
#line 2943 "typecheck.m"
                *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_68_68);
#line 2921 "typecheck.m"
              }
#line 2945 "typecheck.m"
            else
#line 2951 "typecheck.m"
              {
#line 2951 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54;
#line 2951 "typecheck.m"
                MR_Word check_hlds__typecheck__V_69_69;

#line 2950 "typecheck.m"
                {
#line 2950 "typecheck.m"
                  mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44, &check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54);
                }
#line 2952 "typecheck.m"
                {
#line 2952 "typecheck.m"
                  check_hlds__typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2952 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 0) = ((MR_Box) (check_hlds__typecheck__FieldName_10));
#line 2952 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 1) = ((MR_Box) (check_hlds__typecheck__FieldDefn_11));
#line 2952 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 2) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 2952 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 3) = ((MR_Box) (check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54));
#line 2952 "typecheck.m"
                }
#line 2952 "typecheck.m"
                {
#line 2952 "typecheck.m"
                  MR_Word base;
#line 2952 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2952 "typecheck.m"
                  *check_hlds__typecheck__ConsTypeInfo_14 = base;
#line 2952 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 2952 "typecheck.m"
                }
#line 2951 "typecheck.m"
              }
#line 2891 "typecheck.m"
          }
#line 2862 "typecheck.m"
      }
#line 2835 "typecheck.m"
  }
#line 2830 "typecheck.m"
}

#line 2766 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_9,
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__FuncName_11,
#line 2766 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_12,
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_13,
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_14,
#line 2766 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_15,
#line 2766 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16)
#line 2766 "typecheck.m"
{
#line 2772 "typecheck.m"
  {
#line 2772 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigExistTVars_17;
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtor_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 2)));
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsId_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 3)));
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeModule_43;
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_46;
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__PredTable_47;
#line 2772 "typecheck.m"
    MR_String check_hlds__typecheck__UnqualFuncName_48;
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_49;
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__Ctors_51;
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsDefn_52;
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsAction_53;
#line 2772 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_40, (MR_Integer) 0)));
#line 2794 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 0)));
#line 2794 "typecheck.m"
    MR_Word check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 1)));
#line 2794 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 4)));
#line 2795 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_40, (MR_Integer) 1)));
#line 2795 "typecheck.m"
    MR_String check_hlds__typecheck__V_44_44;
#line 2802 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 2802 "typecheck.m"
    MR_Word check_hlds__typecheck__V_57_57;
#line 2802 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_58_58;
#line 2802 "typecheck.m"
    MR_Word check_hlds__typecheck__V_59_59;
#line 2802 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;
#line 2802 "typecheck.m"
    MR_Word check_hlds__typecheck__V_61_61;
#line 2802 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_62_62;
#line 2823 "typecheck.m"
    MR_Word check_hlds__typecheck__V_63_63;
#line 2823 "typecheck.m"
    MR_Word check_hlds__typecheck__V_64_64;
#line 2823 "typecheck.m"
    MR_Word check_hlds__typecheck__V_65_65;
#line 2823 "typecheck.m"
    MR_Word check_hlds__typecheck__V_66_66;
#line 2823 "typecheck.m"
    MR_Word check_hlds__typecheck__V_67_67;
#line 2823 "typecheck.m"
    MR_Word check_hlds__typecheck__V_68_68;
#line 2823 "typecheck.m"
    MR_Word check_hlds__typecheck__V_69_69;

#line 2795 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 2795 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2795 "typecheck.m"
      {
#line 2795 "typecheck.m"
        check_hlds__typecheck__TypeModule_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, (MR_Integer) 0)));
#line 2795 "typecheck.m"
        check_hlds__typecheck__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, (MR_Integer) 1)));
#line 2802 "typecheck.m"
        check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 0)));
#line 2802 "typecheck.m"
        check_hlds__typecheck__ModuleInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 1)));
#line 2802 "typecheck.m"
        check_hlds__typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 2)));
#line 2802 "typecheck.m"
        check_hlds__typecheck__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 3)));
#line 2802 "typecheck.m"
        check_hlds__typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 4)));
#line 2802 "typecheck.m"
        check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 5)));
#line 2802 "typecheck.m"
        check_hlds__typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 6)));
#line 2802 "typecheck.m"
        check_hlds__typecheck__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 7)));
#line 2803 "typecheck.m"
        {
#line 2803 "typecheck.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_46, &check_hlds__typecheck__PredTable_47);
        }
#line 2804 "typecheck.m"
        {
#line 2804 "typecheck.m"
          check_hlds__typecheck__UnqualFuncName_48 = mdbcomp__prim_data__unqualify_name_1_f_0(check_hlds__typecheck__FuncName_11);
        }
#line 2805 "typecheck.m"
        {
#line 2805 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__IsFieldAccessFunc_49);
        }
#line 2811 "typecheck.m"
        if ((check_hlds__typecheck__IsFieldAccessFunc_49 == (MR_Integer) 0))
#line 2807 "typecheck.m"
          {
#line 2807 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_50;

#line 2808 "typecheck.m"
            {
#line 2808 "typecheck.m"
              hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(check_hlds__typecheck__PredTable_47, (MR_Integer) 0, check_hlds__typecheck__TypeModule_43, check_hlds__typecheck__UnqualFuncName_48, check_hlds__typecheck__Arity_12, &check_hlds__typecheck__PredIds_50);
            }
#line 2810 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredIds_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2807 "typecheck.m"
          }
#line 2811 "typecheck.m"
        else
#line 2812 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2772 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2772 "typecheck.m"
          {
#line 2814 "typecheck.m"
            {
#line 2814 "typecheck.m"
              hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck__ModuleInfo_46, &check_hlds__typecheck__Ctors_51);
            }
#line 2815 "typecheck.m"
            {
#line 2815 "typecheck.m"
              hlds__hlds_data__lookup_cons_table_of_type_ctor_4_p_0(check_hlds__typecheck__Ctors_51, check_hlds__typecheck__TypeCtor_40, check_hlds__typecheck__ConsId_41, &check_hlds__typecheck__ConsDefn_52);
            }
#line 2819 "typecheck.m"
            if ((check_hlds__typecheck__AccessType_13 == (MR_Integer) 0))
#line 2818 "typecheck.m"
              check_hlds__typecheck__ConsAction_53 = (MR_Integer) 2;
#line 2819 "typecheck.m"
            else
#line 2821 "typecheck.m"
              check_hlds__typecheck__ConsAction_53 = (MR_Integer) 1;
#line 2823 "typecheck.m"
            check_hlds__typecheck__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 0)));
#line 2823 "typecheck.m"
            check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 1)));
#line 2823 "typecheck.m"
            check_hlds__typecheck__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 2)));
#line 2823 "typecheck.m"
            check_hlds__typecheck__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 3)));
#line 2823 "typecheck.m"
            check_hlds__typecheck__OrigExistTVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 4)));
#line 2823 "typecheck.m"
            check_hlds__typecheck__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 5)));
#line 2823 "typecheck.m"
            check_hlds__typecheck__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 6)));
#line 2823 "typecheck.m"
            check_hlds__typecheck__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 7)));
#line 2824 "typecheck.m"
            {
#line 2824 "typecheck.m"
              check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__Info_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsAction_53, check_hlds__typecheck__ConsDefn_52, &check_hlds__typecheck__MaybeFunctorConsTypeInfo_18);
            }
#line 2783 "typecheck.m"
            if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18)) == (MR_mktag((MR_Integer) 1))))
#line 2785 "typecheck.m"
              *check_hlds__typecheck__ConsTypeInfo_16 = check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
#line 2783 "typecheck.m"
            else
#line 2777 "typecheck.m"
              {
#line 2777 "typecheck.m"
                MR_Word check_hlds__typecheck__FunctorConsTypeInfo_19 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18), (MR_Integer) 0);
#line 2777 "typecheck.m"
                MR_Word check_hlds__typecheck__ModuleInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 1)));
#line 2777 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassTable_21;
#line 2778 "typecheck.m"
                MR_Word check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 0)));
#line 2778 "typecheck.m"
                MR_Word check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 2)));
#line 2778 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 3)));
#line 2778 "typecheck.m"
                MR_Word check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 4)));
#line 2778 "typecheck.m"
                MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 5)));
#line 2778 "typecheck.m"
                MR_Word check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 6)));
#line 2778 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 7)));

#line 2779 "typecheck.m"
                {
#line 2779 "typecheck.m"
                  hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_20, &check_hlds__typecheck__ClassTable_21);
                }
#line 2780 "typecheck.m"
                {
#line 2780 "typecheck.m"
                  check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(check_hlds__typecheck__ClassTable_21, check_hlds__typecheck__AccessType_13, check_hlds__typecheck__FieldName_14, check_hlds__typecheck__FieldDefn_15, check_hlds__typecheck__FunctorConsTypeInfo_19, check_hlds__typecheck__OrigExistTVars_17, check_hlds__typecheck__ConsTypeInfo_16);
                }
#line 2777 "typecheck.m"
              }
#line 2783 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2772 "typecheck.m"
          }
#line 2795 "typecheck.m"
      }
#line 2772 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2772 "typecheck.m"
  }
#line 2766 "typecheck.m"
}

#line 2762 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
#line 2762 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2762 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2762 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2762 "typecheck.m"
{
#line 2762 "typecheck.m"
  {
#line 2762 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2762 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2762 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

#line 2762 "typecheck.m"
    {
#line 2762 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    }
#line 2762 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2762 "typecheck.m"
      {
#line 2762 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
#line 2762 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2762 "typecheck.m"
      }
#line 2762 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2762 "typecheck.m"
  }
#line 2762 "typecheck.m"
}

#line 2746 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
#line 2746 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2746 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 2746 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2746 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 2746 "typecheck.m"
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10)
#line 2746 "typecheck.m"
{
#line 2750 "typecheck.m"
  {
#line 2750 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2750 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
#line 2750 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_27_27;
#line 2750 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_30_30;
#line 2750 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_31_31;
#line 2750 "typecheck.m"
    MR_Word check_hlds__typecheck__Name_11;
#line 2750 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_13;
#line 2750 "typecheck.m"
    MR_Word check_hlds__typecheck__AccessType_14;
#line 2750 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldName_15;
#line 2750 "typecheck.m"
    MR_Word check_hlds__typecheck__CtorFieldTable_16;
#line 2750 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldDefns_17;
#line 2750 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;
#line 2750 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_32_32;
#line 2750 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_33_33;
#line 2753 "typecheck.m"
    MR_Word check_hlds__typecheck__V_12_12;
#line 2754 "typecheck.m"
    MR_Word check_hlds__typecheck__V_19_19;
#line 2754 "typecheck.m"
    MR_Word check_hlds__typecheck__V_20_20;
#line 2754 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_21_21;
#line 2754 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 2754 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;
#line 2754 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 2754 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_25_25;
#line 2759 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_FieldDefns_17;

#line 2753 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2753 "typecheck.m"
      {
#line 2753 "typecheck.m"
        check_hlds__typecheck__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 1)));
#line 2753 "typecheck.m"
        check_hlds__typecheck__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 2)));
#line 2753 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 3)));
#line 2753 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_32_32);
#line 2750 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2750 "typecheck.m"
          {
#line 2754 "typecheck.m"
            check_hlds__typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 0)));
#line 2754 "typecheck.m"
            check_hlds__typecheck__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 1)));
#line 2754 "typecheck.m"
            check_hlds__typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 2)));
#line 2754 "typecheck.m"
            check_hlds__typecheck__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 3)));
#line 2754 "typecheck.m"
            check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 4)));
#line 2754 "typecheck.m"
            check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 5)));
#line 2754 "typecheck.m"
            check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 6)));
#line 2754 "typecheck.m"
            check_hlds__typecheck__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 7)));
#line 2755 "typecheck.m"
            {
#line 2755 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_13, check_hlds__typecheck__Name_11, &check_hlds__typecheck__V_33_33, &check_hlds__typecheck__AccessType_14, &check_hlds__typecheck__FieldName_15);
            }
#line 2750 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2750 "typecheck.m"
              {
#line 2755 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_33_33);
#line 2750 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2750 "typecheck.m"
                  {
#line 2758 "typecheck.m"
                    {
#line 2758 "typecheck.m"
                      hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_13, &check_hlds__typecheck__CtorFieldTable_16);
                    }
#line 7282 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 7284 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeInfo_27_27 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
#line 2759 "typecheck.m"
                    {
#line 2759 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeInfo_27_27, check_hlds__typecheck__CtorFieldTable_16, ((MR_Box) (check_hlds__typecheck__FieldName_15)), &check_hlds__typecheck__conv0_FieldDefns_17);
                    }
#line 2759 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2759 "typecheck.m"
                      {
#line 2759 "typecheck.m"
                        check_hlds__typecheck__FieldDefns_17 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_17);
#line 2759 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2759 "typecheck.m"
                      }
#line 2750 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2750 "typecheck.m"
                      {
#line 7305 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
#line 7307 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_31_31 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 2762 "typecheck.m"
                        {
#line 2762 "typecheck.m"
                          check_hlds__typecheck__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2762 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[0]));
#line 2762 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 1) = ((MR_Box) (check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1));
#line 2762 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2762 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 3) = ((MR_Box) (check_hlds__typecheck__Info_6));
#line 2762 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_7));
#line 2762 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 5) = ((MR_Box) (check_hlds__typecheck__Name_11));
#line 2762 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 2762 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_14));
#line 2762 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_15));
#line 2762 "typecheck.m"
                        }
#line 2761 "typecheck.m"
                        {
#line 2761 "typecheck.m"
                          mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, check_hlds__typecheck__TypeCtorInfo_31_31, check_hlds__typecheck__V_18_18, check_hlds__typecheck__FieldDefns_17, check_hlds__typecheck__MaybeConsTypeInfos_10);
                        }
#line 2761 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2750 "typecheck.m"
                      }
#line 2750 "typecheck.m"
                  }
#line 2750 "typecheck.m"
              }
#line 2750 "typecheck.m"
          }
#line 2753 "typecheck.m"
      }
#line 2750 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2750 "typecheck.m"
  }
#line 2746 "typecheck.m"
}

#line 2615 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__make_pred_cons_info_list_7_p_0(
#line 2615 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2615 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2615 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTable_3,
#line 2615 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_4,
#line 2615 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_5,
#line 2615 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
#line 2615 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7)
#line 2615 "typecheck.m"
{
#line 2619 "typecheck.m"
  while (MR_TRUE)
#line 2619 "typecheck.m"
    {
#line 2619 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2619 "typecheck.m"
      {
#line 2619 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2619 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2619 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
#line 2619 "typecheck.m"
        else
#line 2621 "typecheck.m"
          {
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__ModuleInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 1)));
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassTable_35;
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_36;
#line 2621 "typecheck.m"
            MR_Integer check_hlds__typecheck__PredArity_37;
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__IsPredOrFunc_38;
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_39;
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_40;
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_41;
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__CompleteArgTypes_42;
#line 2621 "typecheck.m"
            MR_Word check_hlds__typecheck__Purity_43;
#line 2632 "typecheck.m"
            MR_Word check_hlds__typecheck__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 0)));
#line 2632 "typecheck.m"
            MR_Word check_hlds__typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 2)));
#line 2632 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 3)));
#line 2632 "typecheck.m"
            MR_Word check_hlds__typecheck__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 4)));
#line 2632 "typecheck.m"
            MR_Word check_hlds__typecheck__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 5)));
#line 2632 "typecheck.m"
            MR_Word check_hlds__typecheck__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 6)));
#line 2632 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 7)));
#line 2634 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_36;

#line 2633 "typecheck.m"
            {
#line 2633 "typecheck.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_34, &check_hlds__typecheck__ClassTable_35);
            }
#line 2634 "typecheck.m"
            {
#line 2634 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__PredTable_3, ((MR_Box) (check_hlds__typecheck__PredId_16)), &check_hlds__typecheck__conv0_PredInfo_36);
            }
#line 2634 "typecheck.m"
            check_hlds__typecheck__PredInfo_36 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_36);
#line 2635 "typecheck.m"
            {
#line 2635 "typecheck.m"
              check_hlds__typecheck__PredArity_37 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__PredInfo_36);
            }
#line 2636 "typecheck.m"
            {
#line 2636 "typecheck.m"
              check_hlds__typecheck__IsPredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__typecheck__PredInfo_36);
            }
#line 2637 "typecheck.m"
            {
#line 2637 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredClassContext_39);
            }
#line 2638 "typecheck.m"
            {
#line 2638 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredTypeVarSet_40, &check_hlds__typecheck__PredExistQVars_41, &check_hlds__typecheck__CompleteArgTypes_42);
            }
#line 2640 "typecheck.m"
            {
#line 2640 "typecheck.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__Purity_43);
            }
#line 2642 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 0);
#line 2642 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2642 "typecheck.m"
              {
#line 2643 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredArity_37 >= check_hlds__typecheck__Arity_4);
#line 2642 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2646 "typecheck.m"
                  check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2642 "typecheck.m"
              }
#line 2662 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2659 "typecheck.m"
              {
#line 2659 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_44;
#line 2659 "typecheck.m"
                MR_Word check_hlds__typecheck__PredTypeParams_45;

#line 2649 "typecheck.m"
                {
#line 2649 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__list__split_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Arity_4, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__ArgTypes_44, &check_hlds__typecheck__PredTypeParams_45);
                }
#line 2659 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2653 "typecheck.m"
                  {
#line 2653 "typecheck.m"
                    MR_Word check_hlds__typecheck__PredType_46;
#line 2653 "typecheck.m"
                    MR_Word check_hlds__typecheck__PredConstraints_47;
#line 2653 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsInfo_48;
#line 2653 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_58_58;

#line 2652 "typecheck.m"
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2652 "typecheck.m"
                    {
#line 2652 "typecheck.m"
                      parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__PredTypeParams_45, &check_hlds__typecheck__PredType_46);
                    }
#line 2654 "typecheck.m"
                    {
#line 2654 "typecheck.m"
                      hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_5, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_47);
                    }
#line 2657 "typecheck.m"
                    {
#line 2657 "typecheck.m"
                      check_hlds__typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2657 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2657 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 1) = ((MR_Box) (check_hlds__typecheck__PredId_16));
#line 2657 "typecheck.m"
                    }
#line 2656 "typecheck.m"
                    {
#line 2656 "typecheck.m"
                      check_hlds__typecheck__ConsInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2656 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
#line 2656 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
#line 2656 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 2) = ((MR_Box) (check_hlds__typecheck__PredType_46));
#line 2656 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_44));
#line 2656 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_47));
#line 2656 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 5) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 2656 "typecheck.m"
                    }
#line 2658 "typecheck.m"
                    {
#line 2658 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2658 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_48));
#line 2658 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
#line 2658 "typecheck.m"
                    }
#line 2653 "typecheck.m"
                  }
#line 2659 "typecheck.m"
                else
#line 2660 "typecheck.m"
                  {
#line 2660 "typecheck.m"
                    {
#line 2660 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.make_pred_cons_info\'/7", (MR_String) "split_list failed");
#line 2660 "typecheck.m"
                      return;
                    }
#line 2660 "typecheck.m"
                  }
#line 2659 "typecheck.m"
              }
#line 2662 "typecheck.m"
            else
#line 2696 "typecheck.m"
              {
#line 2663 "typecheck.m"
                MR_Integer check_hlds__typecheck__PredAsFuncArity_49;
#line 2663 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_63_63;

#line 2663 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 1);
#line 2663 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2663 "typecheck.m"
                  {
#line 2664 "typecheck.m"
                    check_hlds__typecheck__V_63_63 = (MR_Integer) 1;
#line 2664 "typecheck.m"
                    check_hlds__typecheck__PredAsFuncArity_49 = (check_hlds__typecheck__PredArity_37 - check_hlds__typecheck__V_63_63);
#line 2665 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 >= check_hlds__typecheck__Arity_4);
#line 2663 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2663 "typecheck.m"
                      {
#line 2669 "typecheck.m"
                        check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2670 "typecheck.m"
                        if (!(check_hlds__typecheck__succeeded))
#line 2670 "typecheck.m"
                          check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 == check_hlds__typecheck__Arity_4);
#line 2663 "typecheck.m"
                      }
#line 2663 "typecheck.m"
                  }
#line 2696 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2693 "typecheck.m"
                  {
#line 2693 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncArgTypes_50;
#line 2693 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncArgTypeParams_52;
#line 2693 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncReturnTypeParam_53;
#line 2675 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeCtorInfo_68_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 2675 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncTypeParams_51;
#line 2676 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv1_FuncReturnTypeParam_53;

#line 2674 "typecheck.m"
                    {
#line 2674 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__list__split_list_4_p_0(check_hlds__typecheck__TypeCtorInfo_68_86, check_hlds__typecheck__Arity_4, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__FuncArgTypes_50, &check_hlds__typecheck__FuncTypeParams_51);
                    }
#line 2675 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2675 "typecheck.m"
                      {
#line 2676 "typecheck.m"
                        {
#line 2676 "typecheck.m"
                          parse_tree__prog_util__pred_args_to_func_args_3_p_0(check_hlds__typecheck__TypeCtorInfo_68_86, check_hlds__typecheck__FuncTypeParams_51, &check_hlds__typecheck__FuncArgTypeParams_52, &check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
                        }
#line 2676 "typecheck.m"
                        check_hlds__typecheck__FuncReturnTypeParam_53 = ((MR_Word) check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
#line 2676 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2675 "typecheck.m"
                      }
#line 2693 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2686 "typecheck.m"
                      {
#line 2686 "typecheck.m"
                        MR_Word check_hlds__typecheck__FuncType_54;
#line 2686 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_65_65;
#line 2686 "typecheck.m"
                        MR_Word check_hlds__typecheck__PredConstraints_70;
#line 2686 "typecheck.m"
                        MR_Word check_hlds__typecheck__ConsInfo_71;

#line 2682 "typecheck.m"
                        if ((check_hlds__typecheck__FuncArgTypeParams_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2681 "typecheck.m"
                          check_hlds__typecheck__FuncType_54 = check_hlds__typecheck__FuncReturnTypeParam_53;
#line 2682 "typecheck.m"
                        else
#line 2683 "typecheck.m"
                          {
#line 2684 "typecheck.m"
                            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2684 "typecheck.m"
                            {
#line 2684 "typecheck.m"
                              parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__FuncArgTypeParams_52, check_hlds__typecheck__FuncReturnTypeParam_53, &check_hlds__typecheck__FuncType_54);
                            }
#line 2683 "typecheck.m"
                          }
#line 2687 "typecheck.m"
                        {
#line 2687 "typecheck.m"
                          hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_5, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_70);
                        }
#line 2691 "typecheck.m"
                        {
#line 2691 "typecheck.m"
                          check_hlds__typecheck__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2691 "typecheck.m"
                          MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2691 "typecheck.m"
                          MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_65_65, 1) = ((MR_Box) (check_hlds__typecheck__PredId_16));
#line 2691 "typecheck.m"
                        }
#line 2689 "typecheck.m"
                        {
#line 2689 "typecheck.m"
                          check_hlds__typecheck__ConsInfo_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2689 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
#line 2689 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
#line 2689 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 2) = ((MR_Box) (check_hlds__typecheck__FuncType_54));
#line 2689 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 3) = ((MR_Box) (check_hlds__typecheck__FuncArgTypes_50));
#line 2689 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_70));
#line 2689 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 5) = ((MR_Box) (check_hlds__typecheck__V_65_65));
#line 2689 "typecheck.m"
                        }
#line 2692 "typecheck.m"
                        {
#line 2692 "typecheck.m"
                          check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2692 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_71));
#line 2692 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
#line 2692 "typecheck.m"
                        }
#line 2686 "typecheck.m"
                      }
#line 2693 "typecheck.m"
                    else
#line 2694 "typecheck.m"
                      {
#line 2694 "typecheck.m"
                        {
#line 2694 "typecheck.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.make_pred_cons_info\'/7", (MR_String) "split_list failed");
#line 2694 "typecheck.m"
                          return;
                        }
#line 2694 "typecheck.m"
                      }
#line 2693 "typecheck.m"
                  }
#line 2696 "typecheck.m"
                else
#line 2694 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
#line 2696 "typecheck.m"
              }
#line 2624 "typecheck.m"
            /* direct tailcall eliminated */
#line 2624 "typecheck.m"
            {
#line 2624 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__2__tmp_copy_2 = check_hlds__typecheck__PredIds_17;
#line 2624 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;

#line 2624 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0__tmp_copy_6;
#line 2624 "typecheck.m"
              check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__HeadVar__2__tmp_copy_2;
#line 2624 "typecheck.m"
            }
#line 2624 "typecheck.m"
            continue;
#line 2621 "typecheck.m"
          }
#line 2619 "typecheck.m"
      }
#line 2619 "typecheck.m"
      break;
#line 2619 "typecheck.m"
    }
#line 2615 "typecheck.m"
}

#line 2594 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
#line 2594 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2594 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_7,
#line 2594 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_8,
#line 2594 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 2594 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10)
#line 2594 "typecheck.m"
{
#line 2597 "typecheck.m"
  {
#line 2597 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2597 "typecheck.m"
    MR_Word check_hlds__typecheck__SymName_11;
#line 2597 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_14;
#line 2597 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_15;
#line 2597 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMarkers_16;
#line 2597 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFullyQualified_17;
#line 2597 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIds_18;
#line 2598 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_12_12;
#line 2598 "typecheck.m"
    MR_Word check_hlds__typecheck__V_13_13;
#line 2599 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;
#line 2599 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 2599 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_25_25;
#line 2599 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 2599 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 2599 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 2599 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_29_29;

#line 2598 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2598 "typecheck.m"
      {
#line 2598 "typecheck.m"
        check_hlds__typecheck__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 1)));
#line 2598 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 2)));
#line 2598 "typecheck.m"
        check_hlds__typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 3)));
#line 2599 "typecheck.m"
        check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 0)));
#line 2599 "typecheck.m"
        check_hlds__typecheck__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 1)));
#line 2599 "typecheck.m"
        check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 2)));
#line 2599 "typecheck.m"
        check_hlds__typecheck__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 3)));
#line 2599 "typecheck.m"
        check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 4)));
#line 2599 "typecheck.m"
        check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 5)));
#line 2599 "typecheck.m"
        check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 6)));
#line 2599 "typecheck.m"
        check_hlds__typecheck__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 7)));
#line 2600 "typecheck.m"
        {
#line 2600 "typecheck.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_14, &check_hlds__typecheck__PredicateTable_15);
        }
#line 2601 "typecheck.m"
        {
#line 2601 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredMarkers_16);
        }
#line 2602 "typecheck.m"
        {
#line 2602 "typecheck.m"
          check_hlds__typecheck__IsFullyQualified_17 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__typecheck__PredMarkers_16);
        }
#line 2603 "typecheck.m"
        {
#line 2603 "typecheck.m"
          hlds__pred_table__predicate_table_lookup_sym_4_p_0(check_hlds__typecheck__PredicateTable_15, check_hlds__typecheck__IsFullyQualified_17, check_hlds__typecheck__SymName_11, &check_hlds__typecheck__PredIds_18);
        }
#line 2610 "typecheck.m"
        if ((check_hlds__typecheck__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2612 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfos_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2610 "typecheck.m"
        else
#line 2606 "typecheck.m"
          {
#line 2606 "typecheck.m"
            MR_Word check_hlds__typecheck__Preds_21;

#line 2607 "typecheck.m"
            {
#line 2607 "typecheck.m"
              hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_15, &check_hlds__typecheck__Preds_21);
            }
#line 2608 "typecheck.m"
            {
#line 2608 "typecheck.m"
              check_hlds__typecheck__make_pred_cons_info_list_7_p_0(check_hlds__typecheck__Info_6, check_hlds__typecheck__PredIds_18, check_hlds__typecheck__Preds_21, check_hlds__typecheck__Arity_8, check_hlds__typecheck__GoalId_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__ConsTypeInfos_10);
            }
#line 2606 "typecheck.m"
          }
#line 2610 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2598 "typecheck.m"
      }
#line 2597 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2597 "typecheck.m"
  }
#line 2594 "typecheck.m"
}

#line 2510 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
#line 2510 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2510 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 2510 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2510 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4)
#line 2510 "typecheck.m"
{
#line 2513 "typecheck.m"
  {
#line 2513 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 2513 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2513 "typecheck.m"
      {
#line 2513 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2513 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2513 "typecheck.m"
      }
#line 2513 "typecheck.m"
    else
#line 2514 "typecheck.m"
      {
#line 2514 "typecheck.m"
        MR_Word check_hlds__typecheck__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2514 "typecheck.m"
        MR_Word check_hlds__typecheck__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2514 "typecheck.m"
        MR_Word check_hlds__typecheck__Type_10;
#line 2514 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_11;
#line 2514 "typecheck.m"
        MR_Word check_hlds__typecheck__VarTypes0_13;
#line 2514 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23;
#line 2520 "typecheck.m"
        MR_Word check_hlds__typecheck__VarType_14;

#line 2516 "typecheck.m"
        {
#line 2516 "typecheck.m"
          check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__VarTypes0_13);
        }
#line 2517 "typecheck.m"
        {
#line 2517 "typecheck.m"
          check_hlds__typecheck__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_13, check_hlds__typecheck__Var_8, &check_hlds__typecheck__VarType_14);
        }
#line 2520 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2519 "typecheck.m"
          {
#line 2519 "typecheck.m"
            check_hlds__typecheck__Type_10 = check_hlds__typecheck__VarType_14;
#line 2519 "typecheck.m"
            check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2519 "typecheck.m"
          }
#line 2520 "typecheck.m"
        else
#line 2523 "typecheck.m"
          {
#line 2523 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet0_15;
#line 2523 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVar_16;
#line 2523 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet_17;
#line 2523 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes1_18;
#line 2523 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21;

#line 2523 "typecheck.m"
            {
#line 2523 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__TypeVarSet0_15);
            }
#line 2524 "typecheck.m"
            {
#line 2524 "typecheck.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
            }
#line 2525 "typecheck.m"
            {
#line 2525 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21);
            }
#line 2526 "typecheck.m"
            {
#line 2526 "typecheck.m"
              check_hlds__typecheck__Type_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2526 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
#line 2526 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2526 "typecheck.m"
            }
#line 2527 "typecheck.m"
            {
#line 2527 "typecheck.m"
              parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__Var_8, check_hlds__typecheck__Type_10, check_hlds__typecheck__VarTypes0_13, &check_hlds__typecheck__VarTypes1_18);
            }
#line 2528 "typecheck.m"
            {
#line 2528 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes1_18, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23);
            }
#line 2523 "typecheck.m"
          }
#line 2531 "typecheck.m"
        {
#line 2531 "typecheck.m"
          check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(check_hlds__typecheck__Vars_9, &check_hlds__typecheck__Types_11, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);
        }
#line 2514 "typecheck.m"
        {
#line 2514 "typecheck.m"
          MR_Word base;
#line 2514 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2514 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 2514 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Type_10));
#line 2514 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Types_11));
#line 2514 "typecheck.m"
        }
#line 2514 "typecheck.m"
      }
#line 2513 "typecheck.m"
  }
#line 2510 "typecheck.m"
}

#line 2495 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_2,
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__PredOrFunc_3,
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVars_6,
#line 2495 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2495 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8)
#line 2495 "typecheck.m"
{
#line 2499 "typecheck.m"
  while (MR_TRUE)
#line 2499 "typecheck.m"
    {
#line 2499 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2499 "typecheck.m"
      {
#line 2499 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2499 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2499 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 2499 "typecheck.m"
        else
#line 2501 "typecheck.m"
          {
#line 2501 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2501 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssignSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2501 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVarTypes_25;
#line 2501 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_26;
#line 2501 "typecheck.m"
            MR_Word check_hlds__typecheck__LambdaType_27;
#line 2501 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;
#line 2501 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_38;
#line 2501 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeOldVarType_39;
#line 2501 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_40;

#line 2502 "typecheck.m"
            {
#line 2502 "typecheck.m"
              check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(check_hlds__typecheck__ArgVars_6, &check_hlds__typecheck__ArgVarTypes_25, check_hlds__typecheck__TypeAssign0_17, &check_hlds__typecheck__TypeAssign1_26);
            }
#line 2504 "typecheck.m"
            {
#line 2504 "typecheck.m"
              parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_2, check_hlds__typecheck__PredOrFunc_3, check_hlds__typecheck__ArgVarTypes_25, &check_hlds__typecheck__LambdaType_27);
            }
#line 1947 "typecheck.m"
            {
#line 1947 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__VarTypes0_38);
            }
#line 1948 "typecheck.m"
            {
#line 1948 "typecheck.m"
              parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_5, check_hlds__typecheck__LambdaType_27, &check_hlds__typecheck__MaybeOldVarType_39, check_hlds__typecheck__VarTypes0_38, &check_hlds__typecheck__VarTypes_40);
            }
#line 1956 "typecheck.m"
            if ((check_hlds__typecheck__MaybeOldVarType_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1957 "typecheck.m"
              {
#line 1957 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_43;

#line 1958 "typecheck.m"
                {
#line 1958 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_40, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign_43);
                }
#line 1959 "typecheck.m"
                {
#line 1959 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_43));
#line 1959 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
#line 1959 "typecheck.m"
                }
#line 1957 "typecheck.m"
              }
#line 1956 "typecheck.m"
            else
#line 1950 "typecheck.m"
              {
#line 1950 "typecheck.m"
                MR_Word check_hlds__typecheck__OldVarType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_39, (MR_Integer) 0)));
#line 1953 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_42;
#line 2541 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_51;
#line 2541 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_52;
#line 2541 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_53;

#line 2542 "typecheck.m"
                {
#line 2542 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__HeadTypeParams_51);
                }
#line 2543 "typecheck.m"
                {
#line 2543 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeBindings0_52);
                }
#line 2544 "typecheck.m"
                {
#line 2544 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_41, check_hlds__typecheck__LambdaType_27, check_hlds__typecheck__HeadTypeParams_51, check_hlds__typecheck__TypeBindings0_52, &check_hlds__typecheck__TypeBindings_53);
                }
#line 2541 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2541 "typecheck.m"
                  {
#line 2545 "typecheck.m"
                    {
#line 2545 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_53, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign1_42);
                    }
#line 2545 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2541 "typecheck.m"
                  }
#line 1953 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1952 "typecheck.m"
                  {
#line 1952 "typecheck.m"
                    check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_42));
#line 1952 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
#line 1952 "typecheck.m"
                  }
#line 1953 "typecheck.m"
                else
#line 1954 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 1950 "typecheck.m"
              }
#line 2507 "typecheck.m"
            /* direct tailcall eliminated */
#line 2507 "typecheck.m"
            {
#line 2507 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssignSet0_18;
#line 2507 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;

#line 2507 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7;
#line 2507 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2507 "typecheck.m"
            }
#line 2507 "typecheck.m"
            continue;
#line 2501 "typecheck.m"
          }
#line 2499 "typecheck.m"
      }
#line 2499 "typecheck.m"
      break;
#line 2499 "typecheck.m"
    }
#line 2495 "typecheck.m"
}

#line 2458 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_3_p_0(
#line 2458 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2458 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_4,
#line 2458 "typecheck.m"
  MR_Word check_hlds__typecheck__Var0_5,
#line 2458 "typecheck.m"
  MR_Word * check_hlds__typecheck__Var_6)
#line 2458 "typecheck.m"
{
#line 2464 "typecheck.m"
  {
#line 2464 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2464 "typecheck.m"
    MR_Word check_hlds__typecheck__Var1_7;
#line 2462 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_10_10;
#line 2462 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_Var1_7;

#line 8268 "check_hlds.typecheck.c"
    {
#line 8270 "check_hlds.typecheck.c"
      check_hlds__typecheck__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8272 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 8274 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_10_10, 1) = ((MR_Box) (check_hlds__typecheck__TypeInfo_for_T_8));
#line 8276 "check_hlds.typecheck.c"
    }
#line 2462 "typecheck.m"
    {
#line 2462 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(check_hlds__typecheck__TypeInfo_for_T_8, check_hlds__typecheck__TypeInfo_10_10, check_hlds__typecheck__TypeInfo_10_10, (MR_Word) check_hlds__typecheck__RenameSubst_4, check_hlds__typecheck__Var0_5, &check_hlds__typecheck__conv0_Var1_7);
    }
#line 2462 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2462 "typecheck.m"
      {
#line 2462 "typecheck.m"
        check_hlds__typecheck__Var1_7 = ((MR_Word) check_hlds__typecheck__conv0_Var1_7);
#line 2462 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2462 "typecheck.m"
      }
#line 2464 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2463 "typecheck.m"
      *check_hlds__typecheck__Var_6 = check_hlds__typecheck__Var1_7;
#line 2464 "typecheck.m"
    else
#line 2465 "typecheck.m"
      *check_hlds__typecheck__Var_6 = check_hlds__typecheck__Var0_5;
#line 2464 "typecheck.m"
  }
#line 2458 "typecheck.m"
}

#line 2456 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0_1(
#line 2456 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2456 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2456 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2456 "typecheck.m"
{
#line 2456 "typecheck.m"
  {
#line 2456 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2456 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_Var_6;

#line 2456 "typecheck.m"
    {
#line 2456 "typecheck.m"
      check_hlds__typecheck__apply_var_renaming_to_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv0_Var_6);
    }
#line 2456 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_Var_6));
#line 2456 "typecheck.m"
  }
#line 2456 "typecheck.m"
}

#line 2452 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0(
#line 2452 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2452 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars0_4,
#line 2452 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_5,
#line 2452 "typecheck.m"
  MR_Word * check_hlds__typecheck__Vars_6)
#line 2452 "typecheck.m"
{
#line 2455 "typecheck.m"
  {
#line 2455 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2455 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_12_12;
#line 2455 "typecheck.m"
    MR_Word check_hlds__typecheck__V_7_7;

#line 2456 "typecheck.m"
    {
#line 2456 "typecheck.m"
      check_hlds__typecheck__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2456 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_9[0]));
#line 2456 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0_1));
#line 2456 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2456 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 3) = ((MR_Box) (check_hlds__typecheck__TypeInfo_for_T_8));
#line 2456 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 4) = ((MR_Box) (check_hlds__typecheck__RenameSubst_5));
#line 2456 "typecheck.m"
    }
#line 8374 "check_hlds.typecheck.c"
    {
#line 8376 "check_hlds.typecheck.c"
      check_hlds__typecheck__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8378 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 8380 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_12_12, 1) = ((MR_Box) (check_hlds__typecheck__TypeInfo_for_T_8));
#line 8382 "check_hlds.typecheck.c"
    }
#line 2456 "typecheck.m"
    {
#line 2456 "typecheck.m"
      mercury__list__map_3_p_0(check_hlds__typecheck__TypeInfo_12_12, check_hlds__typecheck__TypeInfo_12_12, (MR_Word) check_hlds__typecheck__V_7_7, (MR_Word) check_hlds__typecheck__Vars0_4, check_hlds__typecheck__Vars_6);
#line 2456 "typecheck.m"
      return;
    }
#line 2455 "typecheck.m"
  }
#line 2452 "typecheck.m"
}

#line 2362 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
#line 2362 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsType_6,
#line 2362 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_7,
#line 2362 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_8,
#line 2362 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
#line 2362 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16)
#line 2362 "typecheck.m"
{
#line 2367 "typecheck.m"
  {
#line 2367 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2367 "typecheck.m"
    MR_Word check_hlds__typecheck__VarTypes0_10;
#line 2367 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeTypeY_11;
#line 2367 "typecheck.m"
    MR_Word check_hlds__typecheck__VarTypes_12;

#line 2369 "typecheck.m"
    {
#line 2369 "typecheck.m"
      check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__VarTypes0_10);
    }
#line 2370 "typecheck.m"
    {
#line 2370 "typecheck.m"
      parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_7, check_hlds__typecheck__ConsType_6, &check_hlds__typecheck__MaybeTypeY_11, check_hlds__typecheck__VarTypes0_10, &check_hlds__typecheck__VarTypes_12);
    }
#line 2380 "typecheck.m"
    if ((check_hlds__typecheck__MaybeTypeY_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2381 "typecheck.m"
      {
#line 2381 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_19;

#line 2384 "typecheck.m"
        {
#line 2384 "typecheck.m"
          check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_12, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_19);
        }
#line 2385 "typecheck.m"
        {
#line 2385 "typecheck.m"
          MR_Word base;
#line 2385 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2385 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
#line 2385 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_19));
#line 2385 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
#line 2385 "typecheck.m"
        }
#line 2381 "typecheck.m"
      }
#line 2380 "typecheck.m"
    else
#line 2372 "typecheck.m"
      {
#line 2372 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeY_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_11, (MR_Integer) 0)));
#line 2377 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_14;
#line 2541 "typecheck.m"
        MR_Word check_hlds__typecheck__HeadTypeParams_24;
#line 2541 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeBindings0_25;
#line 2541 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeBindings_26;

#line 2542 "typecheck.m"
        {
#line 2542 "typecheck.m"
          check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__HeadTypeParams_24);
        }
#line 2543 "typecheck.m"
        {
#line 2543 "typecheck.m"
          check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeBindings0_25);
        }
#line 2544 "typecheck.m"
        {
#line 2544 "typecheck.m"
          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__ConsType_6, check_hlds__typecheck__TypeY_13, check_hlds__typecheck__HeadTypeParams_24, check_hlds__typecheck__TypeBindings0_25, &check_hlds__typecheck__TypeBindings_26);
        }
#line 2541 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2541 "typecheck.m"
          {
#line 2545 "typecheck.m"
            {
#line 2545 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_26, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_14);
            }
#line 2545 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2541 "typecheck.m"
          }
#line 2377 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2376 "typecheck.m"
          {
#line 2376 "typecheck.m"
            MR_Word base;
#line 2376 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2376 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
#line 2376 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_14));
#line 2376 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
#line 2376 "typecheck.m"
          }
#line 2377 "typecheck.m"
        else
#line 2376 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15;
#line 2372 "typecheck.m"
      }
#line 2367 "typecheck.m"
  }
#line 2362 "typecheck.m"
}

#line 2264 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(
#line 2264 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2264 "typecheck.m"
  MR_Word check_hlds__typecheck__X_2,
#line 2264 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_3,
#line 2264 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2264 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2264 "typecheck.m"
{
#line 2268 "typecheck.m"
  while (MR_TRUE)
#line 2268 "typecheck.m"
    {
#line 2268 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2268 "typecheck.m"
      {
#line 2268 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2268 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2268 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2268 "typecheck.m"
        else
#line 2270 "typecheck.m"
          {
#line 2270 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2270 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2270 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
#line 2270 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_26;
#line 2304 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeX_27;

#line 2288 "typecheck.m"
            {
#line 2288 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__VarTypes0_26);
            }
#line 2289 "typecheck.m"
            {
#line 2289 "typecheck.m"
              check_hlds__typecheck__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__X_2, &check_hlds__typecheck__TypeX_27);
            }
#line 2304 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2290 "typecheck.m"
              {
#line 2290 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeTypeY_28;
#line 2290 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_29;

#line 2290 "typecheck.m"
                {
#line 2290 "typecheck.m"
                  parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__TypeX_27, &check_hlds__typecheck__MaybeTypeY_28, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_29);
                }
#line 2299 "typecheck.m"
                if ((check_hlds__typecheck__MaybeTypeY_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2300 "typecheck.m"
                  {
#line 2300 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_32;

#line 2301 "typecheck.m"
                    {
#line 2301 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_29, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_32);
                    }
#line 2302 "typecheck.m"
                    {
#line 2302 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2302 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_32));
#line 2302 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2302 "typecheck.m"
                    }
#line 2300 "typecheck.m"
                  }
#line 2299 "typecheck.m"
                else
#line 2292 "typecheck.m"
                  {
#line 2292 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeY_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_28, (MR_Integer) 0)));
#line 2296 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign3_31;
#line 2541 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_58;
#line 2541 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_59;
#line 2541 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_60;

#line 2542 "typecheck.m"
                    {
#line 2542 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__HeadTypeParams_58);
                    }
#line 2543 "typecheck.m"
                    {
#line 2543 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeBindings0_59);
                    }
#line 2544 "typecheck.m"
                    {
#line 2544 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__TypeX_27, check_hlds__typecheck__TypeY_30, check_hlds__typecheck__HeadTypeParams_58, check_hlds__typecheck__TypeBindings0_59, &check_hlds__typecheck__TypeBindings_60);
                    }
#line 2541 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2541 "typecheck.m"
                      {
#line 2545 "typecheck.m"
                        {
#line 2545 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_60, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign3_31);
                        }
#line 2545 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2541 "typecheck.m"
                      }
#line 2296 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2295 "typecheck.m"
                      {
#line 2295 "typecheck.m"
                        check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2295 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign3_31));
#line 2295 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2295 "typecheck.m"
                      }
#line 2296 "typecheck.m"
                    else
#line 2297 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2292 "typecheck.m"
                  }
#line 2290 "typecheck.m"
              }
#line 2304 "typecheck.m"
            else
#line 2310 "typecheck.m"
              {
#line 2310 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeY_50;

#line 2305 "typecheck.m"
                {
#line 2305 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__Y_3, &check_hlds__typecheck__TypeY_50);
                }
#line 2310 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2307 "typecheck.m"
                  {
#line 2307 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_45;
#line 2307 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_46;

#line 2307 "typecheck.m"
                    {
#line 2307 "typecheck.m"
                      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__TypeY_50, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_45);
                    }
#line 2308 "typecheck.m"
                    {
#line 2308 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_45, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_46);
                    }
#line 2309 "typecheck.m"
                    {
#line 2309 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2309 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_46));
#line 2309 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2309 "typecheck.m"
                    }
#line 2307 "typecheck.m"
                  }
#line 2310 "typecheck.m"
                else
#line 2313 "typecheck.m"
                  {
#line 2313 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVarSet0_33;
#line 2313 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVar_34;
#line 2313 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVarSet_35;
#line 2313 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_36;
#line 2313 "typecheck.m"
                    MR_Word check_hlds__typecheck__Type_37;
#line 2313 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes1_38;
#line 2313 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_47;
#line 2313 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_48;

#line 2313 "typecheck.m"
                    {
#line 2313 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeVarSet0_33);
                    }
#line 2314 "typecheck.m"
                    {
#line 2314 "typecheck.m"
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_34, check_hlds__typecheck__TypeVarSet0_33, &check_hlds__typecheck__TypeVarSet_35);
                    }
#line 2315 "typecheck.m"
                    {
#line 2315 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_35, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign1_36);
                    }
#line 2316 "typecheck.m"
                    {
#line 2316 "typecheck.m"
                      check_hlds__typecheck__Type_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2316 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_34));
#line 2316 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2316 "typecheck.m"
                    }
#line 2317 "typecheck.m"
                    {
#line 2317 "typecheck.m"
                      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes1_38);
                    }
#line 2318 "typecheck.m"
                    {
#line 2318 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], ((MR_Box) (check_hlds__typecheck__X_2)), ((MR_Box) (check_hlds__typecheck__Y_3)));
                    }
#line 2318 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 2320 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2319 "typecheck.m"
                      {
#line 2319 "typecheck.m"
                        parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes1_38, &check_hlds__typecheck__VarTypes_47);
                      }
#line 2320 "typecheck.m"
                    else
#line 2321 "typecheck.m"
                      check_hlds__typecheck__VarTypes_47 = check_hlds__typecheck__VarTypes1_38;
#line 2323 "typecheck.m"
                    {
#line 2323 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_47, check_hlds__typecheck__TypeAssign1_36, &check_hlds__typecheck__TypeAssign_48);
                    }
#line 2324 "typecheck.m"
                    {
#line 2324 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2324 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_48));
#line 2324 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2324 "typecheck.m"
                    }
#line 2313 "typecheck.m"
                  }
#line 2310 "typecheck.m"
              }
#line 2272 "typecheck.m"
            /* direct tailcall eliminated */
#line 2272 "typecheck.m"
            {
#line 2272 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_12;
#line 2272 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

#line 2272 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2272 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2272 "typecheck.m"
            }
#line 2272 "typecheck.m"
            continue;
#line 2270 "typecheck.m"
          }
#line 2268 "typecheck.m"
      }
#line 2268 "typecheck.m"
      break;
#line 2268 "typecheck.m"
    }
#line 2264 "typecheck.m"
}

#line 2233 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_functor_type_4_p_0(
#line 2233 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2233 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2233 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
#line 2233 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4)
#line 2233 "typecheck.m"
{
#line 2236 "typecheck.m"
  while (MR_TRUE)
#line 2236 "typecheck.m"
    {
#line 2236 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2236 "typecheck.m"
      {
#line 2236 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2236 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2236 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
#line 2236 "typecheck.m"
        else
#line 2238 "typecheck.m"
          {
#line 2238 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_9;
#line 2238 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType_10;
#line 2238 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssigns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2238 "typecheck.m"
            MR_Word check_hlds__typecheck__Type_14;
#line 2238 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_15;
#line 2238 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2238 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19;
#line 2238 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_28;
#line 2238 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeTypeY_29;
#line 2238 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_30;

#line 2237 "typecheck.m"
            check_hlds__typecheck__TypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, (MR_Integer) 0)));
#line 2237 "typecheck.m"
            check_hlds__typecheck__ConsType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, (MR_Integer) 1)));
#line 2239 "typecheck.m"
            check_hlds__typecheck__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsType_10, (MR_Integer) 0)));
#line 2239 "typecheck.m"
            check_hlds__typecheck__ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsType_10, (MR_Integer) 1)));
#line 2337 "typecheck.m"
            {
#line 2337 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__VarTypes0_28);
            }
#line 2338 "typecheck.m"
            {
#line 2338 "typecheck.m"
              parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_14, &check_hlds__typecheck__MaybeTypeY_29, check_hlds__typecheck__VarTypes0_28, &check_hlds__typecheck__VarTypes_30);
            }
#line 2351 "typecheck.m"
            if ((check_hlds__typecheck__MaybeTypeY_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2352 "typecheck.m"
              {
#line 2352 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_37;
#line 2352 "typecheck.m"
                MR_Word check_hlds__typecheck__EmptyConstraints_38;
#line 2352 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssign_39;

#line 2355 "typecheck.m"
                {
#line 2355 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_30, check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeAssign_37);
                }
#line 2356 "typecheck.m"
                {
#line 2356 "typecheck.m"
                  hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_38);
                }
#line 2357 "typecheck.m"
                {
#line 2357 "typecheck.m"
                  check_hlds__typecheck__ArgsTypeAssign_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2357 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_37));
#line 2357 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_15));
#line 2357 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_38));
#line 2357 "typecheck.m"
                }
#line 2359 "typecheck.m"
                {
#line 2359 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2359 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_39));
#line 2359 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
#line 2359 "typecheck.m"
                }
#line 2352 "typecheck.m"
              }
#line 2351 "typecheck.m"
            else
#line 2340 "typecheck.m"
              {
#line 2340 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeY_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_29, (MR_Integer) 0)));
#line 2348 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_32;
#line 2541 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_44;
#line 2541 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_45;
#line 2541 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_46;

#line 2542 "typecheck.m"
                {
#line 2542 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__HeadTypeParams_44);
                }
#line 2543 "typecheck.m"
                {
#line 2543 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeBindings0_45);
                }
#line 2544 "typecheck.m"
                {
#line 2544 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__Type_14, check_hlds__typecheck__TypeY_31, check_hlds__typecheck__HeadTypeParams_44, check_hlds__typecheck__TypeBindings0_45, &check_hlds__typecheck__TypeBindings_46);
                }
#line 2541 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2541 "typecheck.m"
                  {
#line 2545 "typecheck.m"
                    {
#line 2545 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_46, check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeAssign_32);
                    }
#line 2545 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2541 "typecheck.m"
                  }
#line 2348 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2344 "typecheck.m"
                  {
#line 2344 "typecheck.m"
                    MR_Word check_hlds__typecheck__EmptyConstraints_33;
#line 2344 "typecheck.m"
                    MR_Word check_hlds__typecheck__ArgsTypeAssign_34;

#line 2344 "typecheck.m"
                    {
#line 2344 "typecheck.m"
                      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_33);
                    }
#line 2345 "typecheck.m"
                    {
#line 2345 "typecheck.m"
                      check_hlds__typecheck__ArgsTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2345 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_32));
#line 2345 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_15));
#line 2345 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_33));
#line 2345 "typecheck.m"
                    }
#line 2347 "typecheck.m"
                    {
#line 2347 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2347 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_34));
#line 2347 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
#line 2347 "typecheck.m"
                    }
#line 2344 "typecheck.m"
                  }
#line 2348 "typecheck.m"
                else
#line 2347 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
#line 2340 "typecheck.m"
              }
#line 2242 "typecheck.m"
            /* direct tailcall eliminated */
#line 2242 "typecheck.m"
            {
#line 2242 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsTypeAssigns_11;
#line 2242 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19;

#line 2242 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_3;
#line 2242 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2242 "typecheck.m"
            }
#line 2242 "typecheck.m"
            continue;
#line 2238 "typecheck.m"
          }
#line 2236 "typecheck.m"
      }
#line 2236 "typecheck.m"
      break;
#line 2236 "typecheck.m"
    }
#line 2233 "typecheck.m"
}

#line 2117 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0_2(
#line 2117 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2117 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 2117 "typecheck.m"
{
#line 2117 "typecheck.m"
  {
#line 2117 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 2117 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2117 "typecheck.m"
    MR_Word check_hlds__typecheck__conv2_HeadVar__2_2;

#line 2117 "typecheck.m"
    {
#line 2117 "typecheck.m"
      check_hlds__typecheck__conv2_HeadVar__2_2 = check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 2117 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv2_HeadVar__2_2));
#line 2117 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 2117 "typecheck.m"
  }
#line 2117 "typecheck.m"
}

#line 2076 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0_1(
#line 2076 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2076 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2076 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2076 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2076 "typecheck.m"
{
#line 2076 "typecheck.m"
  {
#line 2076 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2076 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16;

#line 2076 "typecheck.m"
    {
#line 2076 "typecheck.m"
      check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16);
    }
#line 2076 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16));
#line 2076 "typecheck.m"
  }
#line 2076 "typecheck.m"
}

#line 2068 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0(
#line 2068 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_7,
#line 2068 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2068 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_9,
#line 2068 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2068 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_46,
#line 2068 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_47)
#line 2068 "typecheck.m"
{
#line 2101 "typecheck.m"
  {
#line 2101 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2101 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsType_12;
#line 2101 "typecheck.m"
    MR_String check_hlds__typecheck__BuiltinTypeName_13;

#line 2073 "typecheck.m"
    {
#line 2073 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(check_hlds__typecheck__ConsId_8, &check_hlds__typecheck__ConsType_12, &check_hlds__typecheck__BuiltinTypeName_13);
    }
#line 2101 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2074 "typecheck.m"
      {
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 6)));
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet_15;
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__V_48_48;
#line 2074 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_310_310;
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__V_312_312;
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__V_313_313;
#line 2074 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_314_314;
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__V_315_315;
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__V_316_316;
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__V_317_317;
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 0)));
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 1)));
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 2)));
#line 2074 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 3)));
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 4)));
#line 2074 "typecheck.m"
        MR_Word check_hlds__typecheck__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 5)));
#line 2074 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 7)));
#line 2075 "typecheck.m"
        MR_Box check_hlds__typecheck__conv1_TypeAssignSet_15;
#line 2085 "typecheck.m"
        MR_Word check_hlds__typecheck__V_311_311;

#line 2076 "typecheck.m"
        {
#line 2076 "typecheck.m"
          check_hlds__typecheck__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2076 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[2]));
#line 2076 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_6_p_0_1));
#line 2076 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2076 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 3) = ((MR_Box) (check_hlds__typecheck__ConsType_12));
#line 2076 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 4) = ((MR_Box) (check_hlds__typecheck__Var_7));
#line 2076 "typecheck.m"
        }
#line 2075 "typecheck.m"
        {
#line 2075 "typecheck.m"
          mercury__list__foldl_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[3], check_hlds__typecheck__V_48_48, check_hlds__typecheck__TypeAssignSet0_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typecheck__conv1_TypeAssignSet_15);
        }
#line 2075 "typecheck.m"
        check_hlds__typecheck__TypeAssignSet_15 = ((MR_Word) check_hlds__typecheck__conv1_TypeAssignSet_15);
#line 2085 "typecheck.m"
        check_hlds__typecheck__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 0)));
#line 2085 "typecheck.m"
        check_hlds__typecheck__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 1)));
#line 2085 "typecheck.m"
        check_hlds__typecheck__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 2)));
#line 2085 "typecheck.m"
        check_hlds__typecheck__V_314_314 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 3)));
#line 2085 "typecheck.m"
        check_hlds__typecheck__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 4)));
#line 2085 "typecheck.m"
        check_hlds__typecheck__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 5)));
#line 2085 "typecheck.m"
        check_hlds__typecheck__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 6)));
#line 2085 "typecheck.m"
        check_hlds__typecheck__V_310_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 7)));
#line 2081 "typecheck.m"
        if ((check_hlds__typecheck__TypeAssignSet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2082 "typecheck.m"
          {
#line 2082 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_50_50;

#line 2085 "typecheck.m"
            {
#line 2085 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2085 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (check_hlds__typecheck__V_317_317));
#line 2085 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (check_hlds__typecheck__V_316_316));
#line 2085 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (check_hlds__typecheck__V_315_315));
#line 2085 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (check_hlds__typecheck__V_314_314));
#line 2085 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (check_hlds__typecheck__V_313_313));
#line 2085 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (check_hlds__typecheck__V_312_312));
#line 2085 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet0_14));
#line 2085 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (check_hlds__typecheck__V_310_310));
#line 2085 "typecheck.m"
            }
#line 2090 "typecheck.m"
            if ((check_hlds__typecheck__TypeAssignSet0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2087 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_47 = check_hlds__typecheck__STATE_VARIABLE_Info_50_50;
#line 2090 "typecheck.m"
            else
#line 2091 "typecheck.m"
              {
#line 2091 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeVarSet_20;
#line 2091 "typecheck.m"
                MR_Word check_hlds__typecheck__EmptyConstraints_21;
#line 2091 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsDefn_22;
#line 2091 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsIdSpec_23;
#line 2091 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53;
#line 2091 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54;

#line 2092 "typecheck.m"
                {
#line 2092 "typecheck.m"
                  mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_20);
                }
#line 2093 "typecheck.m"
                {
#line 2093 "typecheck.m"
                  hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_21);
                }
#line 2095 "typecheck.m"
                {
#line 2095 "typecheck.m"
                  check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2095 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_53_53, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinTypeName_13));
#line 2095 "typecheck.m"
                }
#line 2094 "typecheck.m"
                {
#line 2094 "typecheck.m"
                  check_hlds__typecheck__ConsDefn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2094 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_20));
#line 2094 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2094 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_12));
#line 2094 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2094 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_21));
#line 2094 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 5) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2094 "typecheck.m"
                }
#line 2096 "typecheck.m"
                {
#line 2096 "typecheck.m"
                  check_hlds__typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2096 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 0) = ((MR_Box) (check_hlds__typecheck__ConsDefn_22));
#line 2096 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2096 "typecheck.m"
                }
#line 2096 "typecheck.m"
                {
#line 2096 "typecheck.m"
                  check_hlds__typecheck__ConsIdSpec_23 = check_hlds__typecheck_errors__report_error_functor_type_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_50_50, check_hlds__typecheck__Var_7, check_hlds__typecheck__V_54_54, check_hlds__typecheck__ConsId_8, (MR_Integer) 0, check_hlds__typecheck__TypeAssignSet0_14);
                }
#line 2098 "typecheck.m"
                {
#line 2098 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_23, check_hlds__typecheck__STATE_VARIABLE_Info_50_50, check_hlds__typecheck__STATE_VARIABLE_Info_47);
#line 2098 "typecheck.m"
                  return;
                }
#line 2091 "typecheck.m"
              }
#line 2082 "typecheck.m"
          }
#line 2081 "typecheck.m"
        else
#line 2080 "typecheck.m"
          {
#line 2080 "typecheck.m"
            MR_Word base;
#line 2080 "typecheck.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2080 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_47 = base;
#line 2080 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_317_317));
#line 2080 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_316_316));
#line 2080 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_315_315));
#line 2080 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_314_314));
#line 2080 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_313_313));
#line 2080 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_312_312));
#line 2080 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_15));
#line 2080 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_310_310));
#line 2080 "typecheck.m"
          }
#line 2074 "typecheck.m"
      }
#line 2101 "typecheck.m"
    else
#line 2104 "typecheck.m"
      {
#line 2104 "typecheck.m"
        MR_Integer check_hlds__typecheck__Arity_24;
#line 2104 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsDefns_25;
#line 2104 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsErrors_26;

#line 2104 "typecheck.m"
        {
#line 2104 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_9, &check_hlds__typecheck__Arity_24);
        }
#line 2105 "typecheck.m"
        {
#line 2105 "typecheck.m"
          check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_46, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Arity_24, check_hlds__typecheck__GoalId_10, &check_hlds__typecheck__ConsDefns_25, &check_hlds__typecheck__ConsErrors_26);
        }
#line 2111 "typecheck.m"
        if ((check_hlds__typecheck__ConsDefns_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2108 "typecheck.m"
          {
#line 2108 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_27;

#line 2109 "typecheck.m"
            {
#line 2109 "typecheck.m"
              check_hlds__typecheck__Spec_27 = check_hlds__typecheck_errors__report_error_undef_cons_4_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_46, check_hlds__typecheck__ConsErrors_26, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Arity_24);
            }
#line 2110 "typecheck.m"
            {
#line 2110 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_27, check_hlds__typecheck__STATE_VARIABLE_Info_0_46, check_hlds__typecheck__STATE_VARIABLE_Info_47);
#line 2110 "typecheck.m"
              return;
            }
#line 2108 "typecheck.m"
          }
#line 2111 "typecheck.m"
        else
#line 2111 "typecheck.m"
          {
#line 2111 "typecheck.m"
            MR_Word check_hlds__typecheck__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_25, (MR_Integer) 1)));
#line 2111 "typecheck.m"
            MR_Word check_hlds__typecheck__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 6)));
#line 2111 "typecheck.m"
            MR_Word check_hlds__typecheck__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 4)));
#line 2113 "typecheck.m"
            MR_Word check_hlds__typecheck__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_25, (MR_Integer) 0)));
#line 2124 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_320_320 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 7)));
#line 2124 "typecheck.m"
            MR_Word check_hlds__typecheck__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 5)));
#line 2124 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_324_324 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 3)));
#line 2124 "typecheck.m"
            MR_Word check_hlds__typecheck__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 2)));
#line 2124 "typecheck.m"
            MR_Word check_hlds__typecheck__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 1)));
#line 2124 "typecheck.m"
            MR_Word check_hlds__typecheck__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 0)));

#line 2111 "typecheck.m"
            if ((check_hlds__typecheck__V_318_318 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2120 "typecheck.m"
              {
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeAssignSet_35;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_38;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_68_68;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet_77;
#line 2120 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_328_328;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__V_330_330;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__V_331_331;
#line 2120 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_332_332;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__V_333_333;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__V_334_334;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__V_335_335;
#line 2129 "typecheck.m"
                MR_Word check_hlds__typecheck__V_36_36;
#line 2129 "typecheck.m"
                MR_Word check_hlds__typecheck__V_37_37;
#line 2144 "typecheck.m"
                MR_Word check_hlds__typecheck__V_39_39;
#line 2144 "typecheck.m"
                MR_Word check_hlds__typecheck__V_40_40;
#line 2159 "typecheck.m"
                MR_Word check_hlds__typecheck__V_329_329;

#line 2125 "typecheck.m"
                {
#line 2125 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__V_321_321, check_hlds__typecheck__ConsDefns_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsTypeAssignSet_35);
                }
#line 2128 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2128 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2128 "typecheck.m"
                  {
#line 2129 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_321_321)) == (MR_mktag((MR_Integer) 1)));
#line 2129 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2129 "typecheck.m"
                      {
#line 2129 "typecheck.m"
                        check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_321_321, (MR_Integer) 0)));
#line 2129 "typecheck.m"
                        check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_321_321, (MR_Integer) 1)));
#line 2129 "typecheck.m"
                      }
#line 2128 "typecheck.m"
                  }
#line 2134 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2133 "typecheck.m"
                  {
#line 2133 "typecheck.m"
                    {
#line 2133 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/6", (MR_String) "undefined cons\?");
#line 2133 "typecheck.m"
                      return;
                    }
#line 2133 "typecheck.m"
                  }
#line 2134 "typecheck.m"
                else
#line 2135 "typecheck.m"
                  {
#line 2135 "typecheck.m"
                  }
#line 2140 "typecheck.m"
                {
#line 2140 "typecheck.m"
                  check_hlds__typecheck__typecheck_functor_type_4_p_0(check_hlds__typecheck__ConsTypeAssignSet_35, check_hlds__typecheck__Var_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_38);
                }
#line 2143 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2143 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2143 "typecheck.m"
                  {
#line 2144 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_35)) == (MR_mktag((MR_Integer) 1)));
#line 2144 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2144 "typecheck.m"
                      {
#line 2144 "typecheck.m"
                        check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_35, (MR_Integer) 0)));
#line 2144 "typecheck.m"
                        check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_35, (MR_Integer) 1)));
#line 2144 "typecheck.m"
                      }
#line 2143 "typecheck.m"
                  }
#line 2149 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2147 "typecheck.m"
                  {
#line 2147 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsIdSpec_74;

#line 2146 "typecheck.m"
                    {
#line 2146 "typecheck.m"
                      check_hlds__typecheck__ConsIdSpec_74 = check_hlds__typecheck_errors__report_error_functor_type_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_46, check_hlds__typecheck__Var_7, check_hlds__typecheck__ConsDefns_25, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Arity_24, check_hlds__typecheck__V_321_321);
                    }
#line 2148 "typecheck.m"
                    {
#line 2148 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_74, check_hlds__typecheck__STATE_VARIABLE_Info_0_46, &check_hlds__typecheck__STATE_VARIABLE_Info_68_68);
                    }
#line 2147 "typecheck.m"
                  }
#line 2149 "typecheck.m"
                else
#line 2148 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_68_68 = check_hlds__typecheck__STATE_VARIABLE_Info_0_46;
#line 2155 "typecheck.m"
                {
#line 2155 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(check_hlds__typecheck__ArgsTypeAssignSet_38, check_hlds__typecheck__Args_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_77);
                }
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 0)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 1)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 2)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_332_332 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 3)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 4)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 5)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 6)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_328_328 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 7)));
#line 2160 "typecheck.m"
                if ((check_hlds__typecheck__TypeAssignSet_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2161 "typecheck.m"
                  {
#line 2161 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_70_70;

#line 2164 "typecheck.m"
                    {
#line 2164 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_Info_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 0) = ((MR_Box) (check_hlds__typecheck__V_335_335));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 1) = ((MR_Box) (check_hlds__typecheck__V_334_334));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 2) = ((MR_Box) (check_hlds__typecheck__V_333_333));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 3) = ((MR_Box) (check_hlds__typecheck__V_332_332));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 4) = ((MR_Box) (check_hlds__typecheck__V_331_331));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 5) = ((MR_Box) (check_hlds__typecheck__V_330_330));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 6) = ((MR_Box) (check_hlds__typecheck__V_321_321));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 7) = ((MR_Box) (check_hlds__typecheck__V_328_328));
#line 2164 "typecheck.m"
                    }
#line 2169 "typecheck.m"
                    if ((check_hlds__typecheck__ArgsTypeAssignSet_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2166 "typecheck.m"
                      *check_hlds__typecheck__STATE_VARIABLE_Info_47 = check_hlds__typecheck__STATE_VARIABLE_Info_70_70;
#line 2169 "typecheck.m"
                    else
#line 2170 "typecheck.m"
                      {
#line 2170 "typecheck.m"
                        MR_Word check_hlds__typecheck__ArgSpec_45;

#line 2171 "typecheck.m"
                        {
#line 2171 "typecheck.m"
                          check_hlds__typecheck__ArgSpec_45 = check_hlds__typecheck_errors__report_error_functor_arg_types_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_70_70, check_hlds__typecheck__Var_7, check_hlds__typecheck__ConsDefns_25, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Args_9, check_hlds__typecheck__ArgsTypeAssignSet_38);
                        }
#line 2173 "typecheck.m"
                        {
#line 2173 "typecheck.m"
                          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_45, check_hlds__typecheck__STATE_VARIABLE_Info_70_70, check_hlds__typecheck__STATE_VARIABLE_Info_47);
#line 2173 "typecheck.m"
                          return;
                        }
#line 2170 "typecheck.m"
                      }
#line 2161 "typecheck.m"
                  }
#line 2160 "typecheck.m"
                else
#line 2159 "typecheck.m"
                  {
#line 2159 "typecheck.m"
                    MR_Word base;
#line 2159 "typecheck.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2159 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_47 = base;
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_335_335));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_334_334));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_333_333));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_332_332));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_331_331));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_330_330));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_77));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_328_328));
#line 2159 "typecheck.m"
                  }
#line 2120 "typecheck.m"
              }
#line 2111 "typecheck.m"
            else
#line 2120 "typecheck.m"
              {
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__Sources_33;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__Symbol_34;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeAssignSet_264;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_267;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_61_275;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_68_281;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet0_285;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet_286;
#line 2120 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_336_336;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__V_338_338;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__V_339_339;
#line 2120 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_340_340;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__V_341_341;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__V_342_342;
#line 2120 "typecheck.m"
                MR_Word check_hlds__typecheck__V_343_343;
#line 2124 "typecheck.m"
                MR_Word check_hlds__typecheck__V_149_149;
#line 2124 "typecheck.m"
                MR_Word check_hlds__typecheck__V_150_150;
#line 2124 "typecheck.m"
                MR_Word check_hlds__typecheck__V_151_151;
#line 2124 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_152_152;
#line 2124 "typecheck.m"
                MR_Word check_hlds__typecheck__V_153_153;
#line 2124 "typecheck.m"
                MR_Word check_hlds__typecheck__V_154_154;
#line 2124 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_155_155;
#line 2129 "typecheck.m"
                MR_Word check_hlds__typecheck__V_156_156;
#line 2129 "typecheck.m"
                MR_Word check_hlds__typecheck__V_157_157;
#line 2144 "typecheck.m"
                MR_Word check_hlds__typecheck__V_168_168;
#line 2144 "typecheck.m"
                MR_Word check_hlds__typecheck__V_169_169;
#line 2159 "typecheck.m"
                MR_Word check_hlds__typecheck__V_337_337;

#line 2117 "typecheck.m"
                {
#line 2117 "typecheck.m"
                  check_hlds__typecheck__Sources_33 = mercury__list__map_2_f_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[3], check_hlds__typecheck__ConsDefns_25);
                }
#line 2118 "typecheck.m"
                {
#line 2118 "typecheck.m"
                  check_hlds__typecheck__Symbol_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2118 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_34, 0) = ((MR_Box) (check_hlds__typecheck__ConsId_8));
#line 2118 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_34, 1) = ((MR_Box) (check_hlds__typecheck__Sources_33));
#line 2118 "typecheck.m"
                }
#line 2119 "typecheck.m"
                {
#line 2119 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_34, check_hlds__typecheck__V_323_323, check_hlds__typecheck__STATE_VARIABLE_Info_0_46, &check_hlds__typecheck__STATE_VARIABLE_Info_61_275);
                }
#line 2124 "typecheck.m"
                check_hlds__typecheck__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 0)));
#line 2124 "typecheck.m"
                check_hlds__typecheck__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 1)));
#line 2124 "typecheck.m"
                check_hlds__typecheck__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 2)));
#line 2124 "typecheck.m"
                check_hlds__typecheck__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 3)));
#line 2124 "typecheck.m"
                check_hlds__typecheck__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 4)));
#line 2124 "typecheck.m"
                check_hlds__typecheck__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 5)));
#line 2124 "typecheck.m"
                check_hlds__typecheck__TypeAssignSet0_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 6)));
#line 2124 "typecheck.m"
                check_hlds__typecheck__V_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 7)));
#line 2125 "typecheck.m"
                {
#line 2125 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__TypeAssignSet0_285, check_hlds__typecheck__ConsDefns_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsTypeAssignSet_264);
                }
#line 2128 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_264 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2128 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2128 "typecheck.m"
                  {
#line 2129 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_285)) == (MR_mktag((MR_Integer) 1)));
#line 2129 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2129 "typecheck.m"
                      {
#line 2129 "typecheck.m"
                        check_hlds__typecheck__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_285, (MR_Integer) 0)));
#line 2129 "typecheck.m"
                        check_hlds__typecheck__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_285, (MR_Integer) 1)));
#line 2129 "typecheck.m"
                      }
#line 2128 "typecheck.m"
                  }
#line 2134 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2133 "typecheck.m"
                  {
#line 2133 "typecheck.m"
                    {
#line 2133 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/6", (MR_String) "undefined cons\?");
#line 2133 "typecheck.m"
                      return;
                    }
#line 2133 "typecheck.m"
                  }
#line 2134 "typecheck.m"
                else
#line 2135 "typecheck.m"
                  {
#line 2135 "typecheck.m"
                  }
#line 2140 "typecheck.m"
                {
#line 2140 "typecheck.m"
                  check_hlds__typecheck__typecheck_functor_type_4_p_0(check_hlds__typecheck__ConsTypeAssignSet_264, check_hlds__typecheck__Var_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_267);
                }
#line 2143 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_267 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2143 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2143 "typecheck.m"
                  {
#line 2144 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_264)) == (MR_mktag((MR_Integer) 1)));
#line 2144 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2144 "typecheck.m"
                      {
#line 2144 "typecheck.m"
                        check_hlds__typecheck__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_264, (MR_Integer) 0)));
#line 2144 "typecheck.m"
                        check_hlds__typecheck__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_264, (MR_Integer) 1)));
#line 2144 "typecheck.m"
                      }
#line 2143 "typecheck.m"
                  }
#line 2149 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2147 "typecheck.m"
                  {
#line 2147 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsIdSpec_172;

#line 2146 "typecheck.m"
                    {
#line 2146 "typecheck.m"
                      check_hlds__typecheck__ConsIdSpec_172 = check_hlds__typecheck_errors__report_error_functor_type_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_61_275, check_hlds__typecheck__Var_7, check_hlds__typecheck__ConsDefns_25, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Arity_24, check_hlds__typecheck__TypeAssignSet0_285);
                    }
#line 2148 "typecheck.m"
                    {
#line 2148 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_172, check_hlds__typecheck__STATE_VARIABLE_Info_61_275, &check_hlds__typecheck__STATE_VARIABLE_Info_68_281);
                    }
#line 2147 "typecheck.m"
                  }
#line 2149 "typecheck.m"
                else
#line 2148 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_68_281 = check_hlds__typecheck__STATE_VARIABLE_Info_61_275;
#line 2155 "typecheck.m"
                {
#line 2155 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(check_hlds__typecheck__ArgsTypeAssignSet_267, check_hlds__typecheck__Args_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_286);
                }
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 0)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 1)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 2)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_340_340 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 3)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 4)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 5)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 6)));
#line 2159 "typecheck.m"
                check_hlds__typecheck__V_336_336 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 7)));
#line 2160 "typecheck.m"
                if ((check_hlds__typecheck__TypeAssignSet_286 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2161 "typecheck.m"
                  {
#line 2161 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_70_233;

#line 2164 "typecheck.m"
                    {
#line 2164 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_Info_70_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 0) = ((MR_Box) (check_hlds__typecheck__V_343_343));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 1) = ((MR_Box) (check_hlds__typecheck__V_342_342));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 2) = ((MR_Box) (check_hlds__typecheck__V_341_341));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 3) = ((MR_Box) (check_hlds__typecheck__V_340_340));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 4) = ((MR_Box) (check_hlds__typecheck__V_339_339));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 5) = ((MR_Box) (check_hlds__typecheck__V_338_338));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet0_285));
#line 2164 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 7) = ((MR_Box) (check_hlds__typecheck__V_336_336));
#line 2164 "typecheck.m"
                    }
#line 2169 "typecheck.m"
                    if ((check_hlds__typecheck__ArgsTypeAssignSet_267 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2166 "typecheck.m"
                      *check_hlds__typecheck__STATE_VARIABLE_Info_47 = check_hlds__typecheck__STATE_VARIABLE_Info_70_233;
#line 2169 "typecheck.m"
                    else
#line 2170 "typecheck.m"
                      {
#line 2170 "typecheck.m"
                        MR_Word check_hlds__typecheck__ArgSpec_226;

#line 2171 "typecheck.m"
                        {
#line 2171 "typecheck.m"
                          check_hlds__typecheck__ArgSpec_226 = check_hlds__typecheck_errors__report_error_functor_arg_types_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_70_233, check_hlds__typecheck__Var_7, check_hlds__typecheck__ConsDefns_25, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Args_9, check_hlds__typecheck__ArgsTypeAssignSet_267);
                        }
#line 2173 "typecheck.m"
                        {
#line 2173 "typecheck.m"
                          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_226, check_hlds__typecheck__STATE_VARIABLE_Info_70_233, check_hlds__typecheck__STATE_VARIABLE_Info_47);
#line 2173 "typecheck.m"
                          return;
                        }
#line 2170 "typecheck.m"
                      }
#line 2161 "typecheck.m"
                  }
#line 2160 "typecheck.m"
                else
#line 2159 "typecheck.m"
                  {
#line 2159 "typecheck.m"
                    MR_Word base;
#line 2159 "typecheck.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2159 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_47 = base;
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_343_343));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_342_342));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_341_341));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_340_340));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_339_339));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_338_338));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_286));
#line 2159 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_336_336));
#line 2159 "typecheck.m"
                  }
#line 2120 "typecheck.m"
              }
#line 2111 "typecheck.m"
          }
#line 2104 "typecheck.m"
      }
#line 2101 "typecheck.m"
  }
#line 2068 "typecheck.m"
}

#line 2049 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_4,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsType_5,
#line 2049 "typecheck.m"
  MR_String * check_hlds__typecheck__BuiltinTypeName_6)
#line 2049 "typecheck.m"
{
#line 2052 "typecheck.m"
  {
#line 2052 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2052 "typecheck.m"
    MR_Word check_hlds__typecheck__BuiltinType_8;

#line 2057 "typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2058 "typecheck.m"
      {
#line 2059 "typecheck.m"
        *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "float";
#line 2060 "typecheck.m"
        check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 1;
#line 2058 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2058 "typecheck.m"
      }
#line 2057 "typecheck.m"
    else
#line 2057 "typecheck.m"
      if (((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2054 "typecheck.m"
        {
#line 2055 "typecheck.m"
          *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "int";
#line 2056 "typecheck.m"
          check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 0;
#line 2054 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2054 "typecheck.m"
        }
#line 2057 "typecheck.m"
      else
#line 2057 "typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 2062 "typecheck.m"
          {
#line 2063 "typecheck.m"
            *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "string";
#line 2064 "typecheck.m"
            check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 2;
#line 2062 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2062 "typecheck.m"
          }
#line 2057 "typecheck.m"
        else
#line 2057 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_FALSE;
#line 2052 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2052 "typecheck.m"
      {
#line 2066 "typecheck.m"
        {
#line 2066 "typecheck.m"
          MR_Word base;
#line 2066 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2066 "typecheck.m"
          *check_hlds__typecheck__ConsType_5 = base;
#line 2066 "typecheck.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinType_8));
#line 2066 "typecheck.m"
        }
#line 2066 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2052 "typecheck.m"
      }
#line 2052 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2052 "typecheck.m"
  }
#line 2049 "typecheck.m"
}

#line 2010 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unification_6_p_0(
#line 2010 "typecheck.m"
  MR_Word check_hlds__typecheck__X_7,
#line 2010 "typecheck.m"
  MR_Word check_hlds__typecheck__RHS0_8,
#line 2010 "typecheck.m"
  MR_Word * check_hlds__typecheck__RHS_9,
#line 2010 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2010 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 2010 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27)
#line 2010 "typecheck.m"
{
#line 2015 "typecheck.m"
  {
#line 2015 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 2015 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__RHS0_8)) == (MR_mktag((MR_Integer) 1))))
#line 2019 "typecheck.m"
      {
#line 2019 "typecheck.m"
        MR_Word check_hlds__typecheck__Functor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_8, (MR_Integer) 0)));
#line 2019 "typecheck.m"
        MR_Word check_hlds__typecheck__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_8, (MR_Integer) 2)));
#line 2019 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_30_30;
#line 2019 "typecheck.m"
        MR_Word check_hlds__typecheck___ExistConstraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_8, (MR_Integer) 1)));

#line 2020 "typecheck.m"
        {
#line 2020 "typecheck.m"
          check_hlds__typecheck__typecheck_unify_var_functor_6_p_0(check_hlds__typecheck__X_7, check_hlds__typecheck__Functor_13, check_hlds__typecheck__Args_15, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__STATE_VARIABLE_Info_30_30);
        }
#line 2021 "typecheck.m"
        {
#line 2021 "typecheck.m"
          check_hlds__typeclasses__perform_context_reduction_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_30_30, check_hlds__typecheck__STATE_VARIABLE_Info_27);
        }
#line 2022 "typecheck.m"
        *check_hlds__typecheck__RHS_9 = check_hlds__typecheck__RHS0_8;
#line 2019 "typecheck.m"
      }
#line 2015 "typecheck.m"
    else
#line 2015 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__RHS0_8)) == (MR_mktag((MR_Integer) 2))))
#line 2025 "typecheck.m"
        {
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__Purity_16 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__Groundness_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__PredOrFunc_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__NonLocals_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 2)));
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 3)));
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 4)));
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 5)));
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 6)));
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__Goal_25;
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_28_28;
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));
#line 2025 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet_42;
#line 2481 "typecheck.m"
          MR_Word check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 2481 "typecheck.m"
          MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 2481 "typecheck.m"
          MR_Word check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 2481 "typecheck.m"
          MR_Integer check_hlds__typecheck__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 2481 "typecheck.m"
          MR_Word check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
#line 2481 "typecheck.m"
          MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 2481 "typecheck.m"
          MR_Integer check_hlds__typecheck__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
#line 2486 "typecheck.m"
          MR_Word check_hlds__typecheck__V_43_43;
#line 2486 "typecheck.m"
          MR_Word check_hlds__typecheck__V_44_44;

#line 2482 "typecheck.m"
          {
#line 2482 "typecheck.m"
            check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(check_hlds__typecheck__TypeAssignSet0_41, check_hlds__typecheck__Purity_16, check_hlds__typecheck__PredOrFunc_18, check_hlds__typecheck__X_7, check_hlds__typecheck__Vars_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_42);
          }
#line 2485 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2485 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2485 "typecheck.m"
            {
#line 2486 "typecheck.m"
              check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_41)) == (MR_mktag((MR_Integer) 1)));
#line 2486 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2486 "typecheck.m"
                {
#line 2486 "typecheck.m"
                  check_hlds__typecheck__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_41, (MR_Integer) 0)));
#line 2486 "typecheck.m"
                  check_hlds__typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_41, (MR_Integer) 1)));
#line 2486 "typecheck.m"
                }
#line 2485 "typecheck.m"
            }
#line 2491 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2489 "typecheck.m"
            {
#line 2489 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_45;

#line 2488 "typecheck.m"
              {
#line 2488 "typecheck.m"
                check_hlds__typecheck__Spec_45 = check_hlds__typecheck_errors__report_error_lambda_var_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__PredOrFunc_18, check_hlds__typecheck__X_7, check_hlds__typecheck__Vars_21, check_hlds__typecheck__TypeAssignSet0_41);
              }
#line 2490 "typecheck.m"
              {
#line 2490 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_45, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__STATE_VARIABLE_Info_28_28);
              }
#line 2489 "typecheck.m"
            }
#line 2491 "typecheck.m"
          else
#line 2492 "typecheck.m"
            {
#line 2492 "typecheck.m"
              MR_Word check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 2492 "typecheck.m"
              MR_Word check_hlds__typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 2492 "typecheck.m"
              MR_Word check_hlds__typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 2492 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 2492 "typecheck.m"
              MR_Word check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
#line 2492 "typecheck.m"
              MR_Word check_hlds__typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 2492 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
#line 2492 "typecheck.m"
              MR_Word check_hlds__typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));

#line 2492 "typecheck.m"
              {
#line 2492 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2492 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (check_hlds__typecheck__V_56_56));
#line 2492 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (check_hlds__typecheck__V_57_57));
#line 2492 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 2492 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (check_hlds__typecheck__V_59_59));
#line 2492 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 4) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 2492 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 5) = ((MR_Box) (check_hlds__typecheck__V_61_61));
#line 2492 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_42));
#line 2492 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 7) = ((MR_Box) (check_hlds__typecheck__V_63_63));
#line 2492 "typecheck.m"
              }
#line 2492 "typecheck.m"
            }
#line 2028 "typecheck.m"
          {
#line 2028 "typecheck.m"
            check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Goal0_24, &check_hlds__typecheck__Goal_25, check_hlds__typecheck__STATE_VARIABLE_Info_28_28, check_hlds__typecheck__STATE_VARIABLE_Info_27);
          }
#line 2029 "typecheck.m"
          {
#line 2029 "typecheck.m"
            MR_Word base;
#line 2029 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 2029 "typecheck.m"
            *check_hlds__typecheck__RHS_9 = base;
#line 2029 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((check_hlds__typecheck__Purity_16 | ((((check_hlds__typecheck__Groundness_17 << (MR_Integer) 2)) | ((check_hlds__typecheck__PredOrFunc_18 << (MR_Integer) 3)))))));
#line 2029 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
#line 2029 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__typecheck__NonLocals_20));
#line 2029 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__typecheck__Vars_21));
#line 2029 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__typecheck__Modes_22));
#line 2029 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__typecheck__Det_23));
#line 2029 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (check_hlds__typecheck__Goal_25));
#line 2029 "typecheck.m"
          }
#line 2025 "typecheck.m"
        }
#line 2015 "typecheck.m"
      else
#line 2015 "typecheck.m"
        {
#line 2015 "typecheck.m"
          MR_Word check_hlds__typecheck__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__RHS0_8, (MR_Integer) 0)));
#line 2015 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));
#line 2015 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet_70;
#line 2037 "typecheck.m"
          MR_Word check_hlds__typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 2037 "typecheck.m"
          MR_Word check_hlds__typecheck__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 2037 "typecheck.m"
          MR_Word check_hlds__typecheck__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 2037 "typecheck.m"
          MR_Integer check_hlds__typecheck__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 2037 "typecheck.m"
          MR_Word check_hlds__typecheck__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
#line 2037 "typecheck.m"
          MR_Word check_hlds__typecheck__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 2037 "typecheck.m"
          MR_Integer check_hlds__typecheck__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
#line 2041 "typecheck.m"
          MR_Word check_hlds__typecheck__V_71_71;
#line 2041 "typecheck.m"
          MR_Word check_hlds__typecheck__V_72_72;

#line 2038 "typecheck.m"
          {
#line 2038 "typecheck.m"
            check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_69, check_hlds__typecheck__X_7, check_hlds__typecheck__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_70);
          }
#line 2040 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2040 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2040 "typecheck.m"
            {
#line 2041 "typecheck.m"
              check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_69)) == (MR_mktag((MR_Integer) 1)));
#line 2041 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2041 "typecheck.m"
                {
#line 2041 "typecheck.m"
                  check_hlds__typecheck__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_69, (MR_Integer) 0)));
#line 2041 "typecheck.m"
                  check_hlds__typecheck__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_69, (MR_Integer) 1)));
#line 2041 "typecheck.m"
                }
#line 2040 "typecheck.m"
            }
#line 2045 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2043 "typecheck.m"
            {
#line 2043 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_73;

#line 2043 "typecheck.m"
              {
#line 2043 "typecheck.m"
                check_hlds__typecheck__Spec_73 = check_hlds__typecheck_errors__report_error_unif_var_var_4_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__X_7, check_hlds__typecheck__Y_12, check_hlds__typecheck__TypeAssignSet0_69);
              }
#line 2044 "typecheck.m"
              {
#line 2044 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_73, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__STATE_VARIABLE_Info_27);
              }
#line 2043 "typecheck.m"
            }
#line 2045 "typecheck.m"
          else
#line 2046 "typecheck.m"
            {
#line 2046 "typecheck.m"
              MR_Word check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 2046 "typecheck.m"
              MR_Word check_hlds__typecheck__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 2046 "typecheck.m"
              MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 2046 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 2046 "typecheck.m"
              MR_Word check_hlds__typecheck__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
#line 2046 "typecheck.m"
              MR_Word check_hlds__typecheck__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 2046 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
#line 2046 "typecheck.m"
              MR_Word check_hlds__typecheck__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));

#line 2046 "typecheck.m"
              {
#line 2046 "typecheck.m"
                MR_Word base;
#line 2046 "typecheck.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2046 "typecheck.m"
                *check_hlds__typecheck__STATE_VARIABLE_Info_27 = base;
#line 2046 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_84_84));
#line 2046 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_85_85));
#line 2046 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_86_86));
#line 2046 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_87_87));
#line 2046 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_88_88));
#line 2046 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_89_89));
#line 2046 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_70));
#line 2046 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_91_91));
#line 2046 "typecheck.m"
              }
#line 2046 "typecheck.m"
            }
#line 2017 "typecheck.m"
          *check_hlds__typecheck__RHS_9 = check_hlds__typecheck__RHS0_8;
#line 2015 "typecheck.m"
        }
#line 2015 "typecheck.m"
  }
#line 2010 "typecheck.m"
}

#line 1934 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
#line 1934 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1934 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1934 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_3,
#line 1934 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1934 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 1934 "typecheck.m"
{
#line 1937 "typecheck.m"
  while (MR_TRUE)
#line 1937 "typecheck.m"
    {
#line 1937 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1937 "typecheck.m"
      {
#line 1937 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1937 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1937 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 1937 "typecheck.m"
        else
#line 1939 "typecheck.m"
          {
#line 1939 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1939 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1939 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
#line 1939 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_26;
#line 1939 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeOldVarType_27;
#line 1939 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_28;

#line 1947 "typecheck.m"
            {
#line 1947 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__VarTypes0_26);
            }
#line 1948 "typecheck.m"
            {
#line 1948 "typecheck.m"
              parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_3, &check_hlds__typecheck__MaybeOldVarType_27, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_28);
            }
#line 1956 "typecheck.m"
            if ((check_hlds__typecheck__MaybeOldVarType_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1957 "typecheck.m"
              {
#line 1957 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_31;

#line 1958 "typecheck.m"
                {
#line 1958 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_28, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_31);
                }
#line 1959 "typecheck.m"
                {
#line 1959 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_31));
#line 1959 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 1959 "typecheck.m"
                }
#line 1957 "typecheck.m"
              }
#line 1956 "typecheck.m"
            else
#line 1950 "typecheck.m"
              {
#line 1950 "typecheck.m"
                MR_Word check_hlds__typecheck__OldVarType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_27, (MR_Integer) 0)));
#line 1953 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_30;
#line 2541 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_39;
#line 2541 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_40;
#line 2541 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_41;

#line 2542 "typecheck.m"
                {
#line 2542 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__HeadTypeParams_39);
                }
#line 2543 "typecheck.m"
                {
#line 2543 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeBindings0_40);
                }
#line 2544 "typecheck.m"
                {
#line 2544 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_29, check_hlds__typecheck__Type_3, check_hlds__typecheck__HeadTypeParams_39, check_hlds__typecheck__TypeBindings0_40, &check_hlds__typecheck__TypeBindings_41);
                }
#line 2541 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2541 "typecheck.m"
                  {
#line 2545 "typecheck.m"
                    {
#line 2545 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_41, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign1_30);
                    }
#line 2545 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2541 "typecheck.m"
                  }
#line 1953 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1952 "typecheck.m"
                  {
#line 1952 "typecheck.m"
                    check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_30));
#line 1952 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 1952 "typecheck.m"
                  }
#line 1953 "typecheck.m"
                else
#line 1954 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 1950 "typecheck.m"
              }
#line 1941 "typecheck.m"
            /* direct tailcall eliminated */
#line 1941 "typecheck.m"
            {
#line 1941 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_12;
#line 1941 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

#line 1941 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 1941 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1941 "typecheck.m"
            }
#line 1941 "typecheck.m"
            continue;
#line 1939 "typecheck.m"
          }
#line 1937 "typecheck.m"
      }
#line 1937 "typecheck.m"
      break;
#line 1937 "typecheck.m"
    }
#line 1934 "typecheck.m"
}

#line 1918 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_4_p_0(
#line 1918 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 1918 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_6,
#line 1918 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 1918 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14)
#line 1918 "typecheck.m"
{
#line 1921 "typecheck.m"
  {
#line 1921 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1921 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1921 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet_9;
#line 1922 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1922 "typecheck.m"
    MR_Word check_hlds__typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1922 "typecheck.m"
    MR_Word check_hlds__typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1922 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1922 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1922 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1922 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1926 "typecheck.m"
    MR_Word check_hlds__typecheck__V_10_10;
#line 1926 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;

#line 1923 "typecheck.m"
    {
#line 1923 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_8, check_hlds__typecheck__Var_5, check_hlds__typecheck__Type_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_9);
    }
#line 1925 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1925 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1925 "typecheck.m"
      {
#line 1926 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_8)) == (MR_mktag((MR_Integer) 1)));
#line 1926 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1926 "typecheck.m"
          {
#line 1926 "typecheck.m"
            check_hlds__typecheck__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_8, (MR_Integer) 0)));
#line 1926 "typecheck.m"
            check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_8, (MR_Integer) 1)));
#line 1926 "typecheck.m"
          }
#line 1925 "typecheck.m"
      }
#line 1930 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1928 "typecheck.m"
      {
#line 1928 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_12;

#line 1928 "typecheck.m"
        {
#line 1928 "typecheck.m"
          check_hlds__typecheck__Spec_12 = check_hlds__typecheck_errors__report_error_var_4_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__Var_5, check_hlds__typecheck__Type_6, check_hlds__typecheck__TypeAssignSet0_8);
        }
#line 1929 "typecheck.m"
        {
#line 1929 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_12, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
#line 1929 "typecheck.m"
          return;
        }
#line 1928 "typecheck.m"
      }
#line 1930 "typecheck.m"
    else
#line 1931 "typecheck.m"
      {
#line 1931 "typecheck.m"
        MR_Word check_hlds__typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1931 "typecheck.m"
        MR_Word check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1931 "typecheck.m"
        MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1931 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1931 "typecheck.m"
        MR_Word check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1931 "typecheck.m"
        MR_Word check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1931 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1931 "typecheck.m"
        MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));

#line 1931 "typecheck.m"
        {
#line 1931 "typecheck.m"
          MR_Word base;
#line 1931 "typecheck.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1931 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_14 = base;
#line 1931 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_25_25));
#line 1931 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 1931 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 1931 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 1931 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_29_29));
#line 1931 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_30_30));
#line 1931 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_9));
#line 1931 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_32_32));
#line 1931 "typecheck.m"
        }
#line 1931 "typecheck.m"
      }
#line 1921 "typecheck.m"
  }
#line 1918 "typecheck.m"
}

#line 1905 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(
#line 1905 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1905 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1905 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_3,
#line 1905 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_4,
#line 1905 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_5)
#line 1905 "typecheck.m"
{
#line 1908 "typecheck.m"
  while (MR_TRUE)
#line 1908 "typecheck.m"
    {
#line 1908 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1908 "typecheck.m"
      {
#line 1908 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1908 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1908 "typecheck.m"
          if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1912 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_5 = check_hlds__typecheck__STATE_VARIABLE_Info_0_4;
#line 1908 "typecheck.m"
          else
#line 1908 "typecheck.m"
            {
#line 1909 "typecheck.m"
              {
#line 1909 "typecheck.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_var_has_type_list\'/5", (MR_String) "length mismatch");
#line 1909 "typecheck.m"
                return;
              }
#line 1908 "typecheck.m"
            }
#line 1908 "typecheck.m"
        else
#line 1908 "typecheck.m"
          {
#line 1908 "typecheck.m"
            MR_Word check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1908 "typecheck.m"
            MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));

#line 1908 "typecheck.m"
            if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1910 "typecheck.m"
              {
#line 1911 "typecheck.m"
                {
#line 1911 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_var_has_type_list\'/5", (MR_String) "length mismatch");
#line 1911 "typecheck.m"
                  return;
                }
#line 1910 "typecheck.m"
              }
#line 1908 "typecheck.m"
            else
#line 1913 "typecheck.m"
              {
#line 1913 "typecheck.m"
                MR_Word check_hlds__typecheck__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 1913 "typecheck.m"
                MR_Word check_hlds__typecheck__Types_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 1913 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_36_36;
#line 1913 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_37_37;
#line 1913 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_38_38;
#line 1913 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 1913 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet_57;
#line 1914 "typecheck.m"
                MR_Word check_hlds__typecheck__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1914 "typecheck.m"
                MR_Word check_hlds__typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1914 "typecheck.m"
                MR_Word check_hlds__typecheck__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1914 "typecheck.m"
                MR_Word check_hlds__typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 1914 "typecheck.m"
                MR_Word check_hlds__typecheck__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 1914 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 7)));
#line 1914 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 1926 "typecheck.m"
                MR_Word check_hlds__typecheck__V_58_58;
#line 1926 "typecheck.m"
                MR_Word check_hlds__typecheck__V_59_59;

#line 1914 "typecheck.m"
                {
#line 1914 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1914 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 0) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 1914 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 1) = ((MR_Box) (check_hlds__typecheck__V_42_42));
#line 1914 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 2) = ((MR_Box) (check_hlds__typecheck__V_43_43));
#line 1914 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 3) = ((MR_Box) (check_hlds__typecheck__ArgNum_3));
#line 1914 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 4) = ((MR_Box) (check_hlds__typecheck__V_45_45));
#line 1914 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 5) = ((MR_Box) (check_hlds__typecheck__V_46_46));
#line 1914 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet0_56));
#line 1914 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 7) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 1914 "typecheck.m"
                }
#line 1923 "typecheck.m"
                {
#line 1923 "typecheck.m"
                  check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_56, check_hlds__typecheck__V_50_50, check_hlds__typecheck__Type_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_57);
                }
#line 1925 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1925 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1925 "typecheck.m"
                  {
#line 1926 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_56)) == (MR_mktag((MR_Integer) 1)));
#line 1926 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 1926 "typecheck.m"
                      {
#line 1926 "typecheck.m"
                        check_hlds__typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_56, (MR_Integer) 0)));
#line 1926 "typecheck.m"
                        check_hlds__typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_56, (MR_Integer) 1)));
#line 1926 "typecheck.m"
                      }
#line 1925 "typecheck.m"
                  }
#line 1930 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1928 "typecheck.m"
                  {
#line 1928 "typecheck.m"
                    MR_Word check_hlds__typecheck__Spec_60;

#line 1928 "typecheck.m"
                    {
#line 1928 "typecheck.m"
                      check_hlds__typecheck__Spec_60 = check_hlds__typecheck_errors__report_error_var_4_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_36_36, check_hlds__typecheck__V_50_50, check_hlds__typecheck__Type_30, check_hlds__typecheck__TypeAssignSet0_56);
                    }
#line 1929 "typecheck.m"
                    {
#line 1929 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_60, check_hlds__typecheck__STATE_VARIABLE_Info_36_36, &check_hlds__typecheck__STATE_VARIABLE_Info_37_37);
                    }
#line 1928 "typecheck.m"
                  }
#line 1930 "typecheck.m"
                else
#line 1931 "typecheck.m"
                  {
#line 1931 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 0)));
#line 1931 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 1)));
#line 1931 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 2)));
#line 1931 "typecheck.m"
                    MR_Integer check_hlds__typecheck__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 3)));
#line 1931 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 4)));
#line 1931 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 5)));
#line 1931 "typecheck.m"
                    MR_Integer check_hlds__typecheck__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 7)));
#line 1931 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 6)));

#line 1931 "typecheck.m"
                    {
#line 1931 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1931 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (check_hlds__typecheck__V_71_71));
#line 1931 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (check_hlds__typecheck__V_72_72));
#line 1931 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (check_hlds__typecheck__V_73_73));
#line 1931 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (check_hlds__typecheck__V_74_74));
#line 1931 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (check_hlds__typecheck__V_75_75));
#line 1931 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (check_hlds__typecheck__V_76_76));
#line 1931 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_57));
#line 1931 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 7) = ((MR_Box) (check_hlds__typecheck__V_78_78));
#line 1931 "typecheck.m"
                    }
#line 1931 "typecheck.m"
                  }
#line 1916 "typecheck.m"
                check_hlds__typecheck__V_38_38 = (check_hlds__typecheck__ArgNum_3 + (MR_Integer) 1);
#line 1916 "typecheck.m"
                /* direct tailcall eliminated */
#line 1916 "typecheck.m"
                {
#line 1916 "typecheck.m"
                  MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__V_49_49;
#line 1916 "typecheck.m"
                  MR_Word check_hlds__typecheck__HeadVar__2__tmp_copy_2 = check_hlds__typecheck__Types_31;
#line 1916 "typecheck.m"
                  MR_Integer check_hlds__typecheck__ArgNum__tmp_copy_3 = check_hlds__typecheck__V_38_38;
#line 1916 "typecheck.m"
                  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_Info_37_37;

#line 1916 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_0_4 = check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1916 "typecheck.m"
                  check_hlds__typecheck__ArgNum_3 = check_hlds__typecheck__ArgNum__tmp_copy_3;
#line 1916 "typecheck.m"
                  check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__HeadVar__2__tmp_copy_2;
#line 1916 "typecheck.m"
                  check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1916 "typecheck.m"
                }
#line 1916 "typecheck.m"
                continue;
#line 1913 "typecheck.m"
              }
#line 1908 "typecheck.m"
          }
#line 1908 "typecheck.m"
      }
#line 1908 "typecheck.m"
      break;
#line 1908 "typecheck.m"
    }
#line 1905 "typecheck.m"
}

#line 1827 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
#line 1827 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1827 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1827 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1827 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 1827 "typecheck.m"
{
#line 1830 "typecheck.m"
  while (MR_TRUE)
#line 1830 "typecheck.m"
    {
#line 1830 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1830 "typecheck.m"
      {
#line 1830 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1830 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1830 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__HeadVar__3_3;
#line 1830 "typecheck.m"
        else
#line 1832 "typecheck.m"
          {
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssignSets_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 0)));
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 1)));
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 2)));
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_27;

#line 1845 "typecheck.m"
            {
#line 1845 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__VarTypes0_27);
            }
#line 1869 "typecheck.m"
            if ((check_hlds__typecheck__ArgTypes0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1870 "typecheck.m"
              {
#line 1871 "typecheck.m"
                {
#line 1871 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.arg_type_assign_var_has_type\'/6", (MR_String) "ArgTypes0 = []");
#line 1871 "typecheck.m"
                  return;
                }
#line 1870 "typecheck.m"
              }
#line 1869 "typecheck.m"
            else
#line 1847 "typecheck.m"
              {
#line 1847 "typecheck.m"
                MR_Word check_hlds__typecheck__Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 0)));
#line 1847 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 1)));
#line 1847 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeOldVarType_30;
#line 1847 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_31;

#line 1848 "typecheck.m"
                {
#line 1848 "typecheck.m"
                  parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_28, &check_hlds__typecheck__MaybeOldVarType_30, check_hlds__typecheck__VarTypes0_27, &check_hlds__typecheck__VarTypes_31);
                }
#line 1862 "typecheck.m"
                if ((check_hlds__typecheck__MaybeOldVarType_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1863 "typecheck.m"
                  {
#line 1863 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_35;
#line 1863 "typecheck.m"
                    MR_Word check_hlds__typecheck__NewTypeAssign_41;

#line 1864 "typecheck.m"
                    {
#line 1864 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_31, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign_35);
                    }
#line 1865 "typecheck.m"
                    {
#line 1865 "typecheck.m"
                      check_hlds__typecheck__NewTypeAssign_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1865 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_35));
#line 1865 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
#line 1865 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
#line 1865 "typecheck.m"
                    }
#line 1867 "typecheck.m"
                    {
#line 1867 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1867 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_41));
#line 1867 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
#line 1867 "typecheck.m"
                    }
#line 1863 "typecheck.m"
                  }
#line 1862 "typecheck.m"
                else
#line 1851 "typecheck.m"
                  {
#line 1851 "typecheck.m"
                    MR_Word check_hlds__typecheck__OldVarType_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_30, (MR_Integer) 0)));
#line 1859 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_33;
#line 2541 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_46;
#line 2541 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_47;
#line 2541 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_48;

#line 2542 "typecheck.m"
                    {
#line 2542 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__HeadTypeParams_46);
                    }
#line 2543 "typecheck.m"
                    {
#line 2543 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeBindings0_47);
                    }
#line 2544 "typecheck.m"
                    {
#line 2544 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_32, check_hlds__typecheck__Type_28, check_hlds__typecheck__HeadTypeParams_46, check_hlds__typecheck__TypeBindings0_47, &check_hlds__typecheck__TypeBindings_48);
                    }
#line 2541 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2541 "typecheck.m"
                      {
#line 2545 "typecheck.m"
                        {
#line 2545 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_48, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign1_33);
                        }
#line 2545 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2541 "typecheck.m"
                      }
#line 1859 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 1857 "typecheck.m"
                      {
#line 1857 "typecheck.m"
                        MR_Word check_hlds__typecheck__NewTypeAssign_34;

#line 1856 "typecheck.m"
                        {
#line 1856 "typecheck.m"
                          check_hlds__typecheck__NewTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1856 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_33));
#line 1856 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
#line 1856 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
#line 1856 "typecheck.m"
                        }
#line 1858 "typecheck.m"
                        {
#line 1858 "typecheck.m"
                          check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1858 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_34));
#line 1858 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
#line 1858 "typecheck.m"
                        }
#line 1857 "typecheck.m"
                      }
#line 1859 "typecheck.m"
                    else
#line 1858 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = check_hlds__typecheck__HeadVar__3_3;
#line 1851 "typecheck.m"
                  }
#line 1847 "typecheck.m"
              }
#line 1836 "typecheck.m"
            /* direct tailcall eliminated */
#line 1836 "typecheck.m"
            {
#line 1836 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ArgsTypeAssignSets_10;
#line 1836 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;

#line 1836 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 1836 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1836 "typecheck.m"
            }
#line 1836 "typecheck.m"
            continue;
#line 1832 "typecheck.m"
          }
#line 1830 "typecheck.m"
      }
#line 1830 "typecheck.m"
      break;
#line 1830 "typecheck.m"
    }
#line 1827 "typecheck.m"
}

#line 1811 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__skip_arg_2_p_0(
#line 1811 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1811 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2)
#line 1811 "typecheck.m"
{
#line 1813 "typecheck.m"
  {
#line 1813 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1813 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1813 "typecheck.m"
      *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1813 "typecheck.m"
    else
#line 1815 "typecheck.m"
      {
#line 1815 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssign0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1815 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssigns0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1815 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssign_5;
#line 1815 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssigns_6;
#line 1815 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 0)));
#line 1815 "typecheck.m"
        MR_Word check_hlds__typecheck__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 1)));
#line 1815 "typecheck.m"
        MR_Word check_hlds__typecheck__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 2)));
#line 1815 "typecheck.m"
        MR_Word check_hlds__typecheck__Args_11;

#line 1819 "typecheck.m"
        if ((check_hlds__typecheck__Args0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1820 "typecheck.m"
          {
#line 1822 "typecheck.m"
            {
#line 1822 "typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.skip_arg\'/2", (MR_String) "skip_arg");
#line 1822 "typecheck.m"
              return;
            }
#line 1820 "typecheck.m"
          }
#line 1819 "typecheck.m"
        else
#line 1818 "typecheck.m"
          {
#line 1818 "typecheck.m"
            MR_Word check_hlds__typecheck__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 0)));

#line 1818 "typecheck.m"
            check_hlds__typecheck__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 1)));
#line 1818 "typecheck.m"
          }
#line 1824 "typecheck.m"
        {
#line 1824 "typecheck.m"
          check_hlds__typecheck__ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1824 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_7));
#line 1824 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 1) = ((MR_Box) (check_hlds__typecheck__Args_11));
#line 1824 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_9));
#line 1824 "typecheck.m"
        }
#line 1825 "typecheck.m"
        {
#line 1825 "typecheck.m"
          check_hlds__typecheck__skip_arg_2_p_0(check_hlds__typecheck__ArgTypeAssigns0_4, &check_hlds__typecheck__ArgTypeAssigns_6);
        }
#line 1815 "typecheck.m"
        {
#line 1815 "typecheck.m"
          MR_Word base;
#line 1815 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 1815 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_5));
#line 1815 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssigns_6));
#line 1815 "typecheck.m"
        }
#line 1815 "typecheck.m"
      }
#line 1813 "typecheck.m"
  }
#line 1811 "typecheck.m"
}

#line 1776 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(
#line 1776 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1776 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_2,
#line 1776 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1776 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_4,
#line 1776 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_5)
#line 1776 "typecheck.m"
{
#line 1780 "typecheck.m"
  while (MR_TRUE)
#line 1780 "typecheck.m"
    {
#line 1780 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1780 "typecheck.m"
      {
#line 1780 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1780 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1780 "typecheck.m"
          {
#line 1780 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssignSet_9;
#line 1783 "typecheck.m"
            MR_Word check_hlds__typecheck__V_26_26;
#line 1783 "typecheck.m"
            MR_Word check_hlds__typecheck__V_27_27;
#line 1783 "typecheck.m"
            MR_Word check_hlds__typecheck__V_28_28;
#line 1783 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_29_29;
#line 1783 "typecheck.m"
            MR_Word check_hlds__typecheck__V_30_30;
#line 1783 "typecheck.m"
            MR_Word check_hlds__typecheck__V_31_31;
#line 1783 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_33_33;
#line 1783 "typecheck.m"
            MR_Word check_hlds__typecheck__V_32_32;

#line 1781 "typecheck.m"
            {
#line 1781 "typecheck.m"
              check_hlds__typecheck__TypeAssignSet_9 = check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_f_0(check_hlds__typecheck__HeadVar__3_3);
            }
#line 1783 "typecheck.m"
            check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1783 "typecheck.m"
            check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1783 "typecheck.m"
            check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1783 "typecheck.m"
            check_hlds__typecheck__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 1783 "typecheck.m"
            check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 1783 "typecheck.m"
            check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 1783 "typecheck.m"
            check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 1783 "typecheck.m"
            check_hlds__typecheck__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 7)));
#line 1783 "typecheck.m"
            {
#line 1783 "typecheck.m"
              MR_Word base;
#line 1783 "typecheck.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1783 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_5 = base;
#line 1783 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 1783 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 1783 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 1783 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_29_29));
#line 1783 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_30_30));
#line 1783 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_31_31));
#line 1783 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_9));
#line 1783 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_33_33));
#line 1783 "typecheck.m"
            }
#line 1780 "typecheck.m"
          }
#line 1780 "typecheck.m"
        else
#line 1786 "typecheck.m"
          {
#line 1786 "typecheck.m"
            MR_Word check_hlds__typecheck__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1786 "typecheck.m"
            MR_Word check_hlds__typecheck__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1786 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssignSet1_18;
#line 1786 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_21_21;
#line 1786 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_22_22;
#line 1786 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_23_23;
#line 1786 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssignSet1_48;
#line 1787 "typecheck.m"
            MR_Word check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1787 "typecheck.m"
            MR_Word check_hlds__typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1787 "typecheck.m"
            MR_Word check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1787 "typecheck.m"
            MR_Word check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 1787 "typecheck.m"
            MR_Word check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 1787 "typecheck.m"
            MR_Word check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 1787 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 7)));
#line 1787 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 1807 "typecheck.m"
            MR_Word check_hlds__typecheck__V_49_49;
#line 1807 "typecheck.m"
            MR_Word check_hlds__typecheck__V_50_50;

#line 1787 "typecheck.m"
            {
#line 1787 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1787 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (check_hlds__typecheck__V_34_34));
#line 1787 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (check_hlds__typecheck__V_35_35));
#line 1787 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (check_hlds__typecheck__V_36_36));
#line 1787 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (check_hlds__typecheck__ArgNum_2));
#line 1787 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (check_hlds__typecheck__V_38_38));
#line 1787 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (check_hlds__typecheck__V_39_39));
#line 1787 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) (check_hlds__typecheck__V_40_40));
#line 1787 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 1787 "typecheck.m"
            }
#line 1798 "typecheck.m"
            {
#line 1798 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__Var_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgTypeAssignSet1_48);
            }
#line 1801 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgTypeAssignSet1_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1801 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1801 "typecheck.m"
              {
#line 1802 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1802 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1802 "typecheck.m"
                  {
#line 1802 "typecheck.m"
                    check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 1802 "typecheck.m"
                    check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 1802 "typecheck.m"
                  }
#line 1801 "typecheck.m"
              }
#line 1807 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1804 "typecheck.m"
              {
#line 1804 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_51;
#line 1804 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypeAssign_56;
#line 1804 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypeAssigns_57;
#line 1804 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, (MR_Integer) 0)));
#line 1804 "typecheck.m"
                MR_Word check_hlds__typecheck__Args0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, (MR_Integer) 1)));
#line 1804 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, (MR_Integer) 2)));
#line 1804 "typecheck.m"
                MR_Word check_hlds__typecheck__Args_62;

#line 1819 "typecheck.m"
                if ((check_hlds__typecheck__Args0_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1820 "typecheck.m"
                  {
#line 1822 "typecheck.m"
                    {
#line 1822 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.skip_arg\'/2", (MR_String) "skip_arg");
#line 1822 "typecheck.m"
                      return;
                    }
#line 1820 "typecheck.m"
                  }
#line 1819 "typecheck.m"
                else
#line 1818 "typecheck.m"
                  {
#line 1818 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_59, (MR_Integer) 0)));

#line 1818 "typecheck.m"
                    check_hlds__typecheck__Args_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_59, (MR_Integer) 1)));
#line 1818 "typecheck.m"
                  }
#line 1824 "typecheck.m"
                {
#line 1824 "typecheck.m"
                  check_hlds__typecheck__ArgTypeAssign_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1824 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_56, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_58));
#line 1824 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_56, 1) = ((MR_Box) (check_hlds__typecheck__Args_62));
#line 1824 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_56, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_60));
#line 1824 "typecheck.m"
                }
#line 1825 "typecheck.m"
                {
#line 1825 "typecheck.m"
                  check_hlds__typecheck__skip_arg_2_p_0(check_hlds__typecheck__V_50_50, &check_hlds__typecheck__ArgTypeAssigns_57);
                }
#line 1815 "typecheck.m"
                {
#line 1815 "typecheck.m"
                  check_hlds__typecheck__ArgTypeAssignSet1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_18, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_56));
#line 1815 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_18, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssigns_57));
#line 1815 "typecheck.m"
                }
#line 1805 "typecheck.m"
                {
#line 1805 "typecheck.m"
                  check_hlds__typecheck__Spec_51 = check_hlds__typecheck_errors__report_error_arg_var_3_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_21_21, check_hlds__typecheck__Var_13, check_hlds__typecheck__HeadVar__3_3);
                }
#line 1806 "typecheck.m"
                {
#line 1806 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_51, check_hlds__typecheck__STATE_VARIABLE_Info_21_21, &check_hlds__typecheck__STATE_VARIABLE_Info_22_22);
                }
#line 1804 "typecheck.m"
              }
#line 1807 "typecheck.m"
            else
#line 1808 "typecheck.m"
              {
#line 1808 "typecheck.m"
                check_hlds__typecheck__ArgTypeAssignSet1_18 = check_hlds__typecheck__ArgTypeAssignSet1_48;
#line 1808 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_Info_22_22 = check_hlds__typecheck__STATE_VARIABLE_Info_21_21;
#line 1808 "typecheck.m"
              }
#line 1790 "typecheck.m"
            check_hlds__typecheck__V_23_23 = (check_hlds__typecheck__ArgNum_2 + (MR_Integer) 1);
#line 1790 "typecheck.m"
            /* direct tailcall eliminated */
#line 1790 "typecheck.m"
            {
#line 1790 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__Vars_14;
#line 1790 "typecheck.m"
              MR_Integer check_hlds__typecheck__ArgNum__tmp_copy_2 = check_hlds__typecheck__V_23_23;
#line 1790 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__ArgTypeAssignSet1_18;
#line 1790 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_Info_22_22;

#line 1790 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_0_4 = check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1790 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 1790 "typecheck.m"
              check_hlds__typecheck__ArgNum_2 = check_hlds__typecheck__ArgNum__tmp_copy_2;
#line 1790 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1790 "typecheck.m"
            }
#line 1790 "typecheck.m"
            continue;
#line 1786 "typecheck.m"
          }
#line 1780 "typecheck.m"
      }
#line 1780 "typecheck.m"
      break;
#line 1780 "typecheck.m"
    }
#line 1776 "typecheck.m"
}

#line 1730 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__PredExistQVars_3,
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__PredArgTypes_4,
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__PredConstraints_5,
#line 1730 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
#line 1730 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7)
#line 1730 "typecheck.m"
{
#line 1734 "typecheck.m"
  while (MR_TRUE)
#line 1734 "typecheck.m"
    {
#line 1734 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1734 "typecheck.m"
      {
#line 1734 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1734 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1734 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6;
#line 1734 "typecheck.m"
        else
#line 1736 "typecheck.m"
          {
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_22;
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentArgTypes_23;
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__Renaming_24;
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentExistQVars_25;
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentConstraints_26;
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypeParams0_27;
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypeParams_28;
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_29;
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__NewArgTypeAssign_30;
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet0_42;
#line 1736 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet_43;

#line 1765 "typecheck.m"
            {
#line 1765 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeVarSet0_42);
            }
#line 1766 "typecheck.m"
            {
#line 1766 "typecheck.m"
              parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_42, check_hlds__typecheck__PredTypeVarSet_2, &check_hlds__typecheck__TypeVarSet_43, &check_hlds__typecheck__Renaming_24);
            }
#line 1767 "typecheck.m"
            {
#line 1767 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredArgTypes_4, &check_hlds__typecheck__ParentArgTypes_23);
            }
#line 1769 "typecheck.m"
            {
#line 1769 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_43, check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeAssign1_22);
            }
#line 1740 "typecheck.m"
            {
#line 1740 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredExistQVars_3, &check_hlds__typecheck__ParentExistQVars_25);
            }
#line 1742 "typecheck.m"
            {
#line 1742 "typecheck.m"
              check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredConstraints_5, &check_hlds__typecheck__ParentConstraints_26);
            }
#line 1748 "typecheck.m"
            {
#line 1748 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__HeadTypeParams0_27);
            }
#line 1749 "typecheck.m"
            {
#line 1749 "typecheck.m"
              mercury__list__append_3_p_1((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ParentExistQVars_25, check_hlds__typecheck__HeadTypeParams0_27, &check_hlds__typecheck__HeadTypeParams_28);
            }
#line 1750 "typecheck.m"
            {
#line 1750 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_head_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_28, check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__TypeAssign_29);
            }
#line 1753 "typecheck.m"
            {
#line 1753 "typecheck.m"
              check_hlds__typecheck__NewArgTypeAssign_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1753 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_29));
#line 1753 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 1) = ((MR_Box) (check_hlds__typecheck__ParentArgTypes_23));
#line 1753 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 2) = ((MR_Box) (check_hlds__typecheck__ParentConstraints_26));
#line 1753 "typecheck.m"
            }
#line 1755 "typecheck.m"
            {
#line 1755 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1755 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 0) = ((MR_Box) (check_hlds__typecheck__NewArgTypeAssign_30));
#line 1755 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6));
#line 1755 "typecheck.m"
            }
#line 1756 "typecheck.m"
            /* direct tailcall eliminated */
#line 1756 "typecheck.m"
            {
#line 1756 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_16;
#line 1756 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;

#line 1756 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0__tmp_copy_6;
#line 1756 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1756 "typecheck.m"
            }
#line 1756 "typecheck.m"
            continue;
#line 1736 "typecheck.m"
          }
#line 1734 "typecheck.m"
      }
#line 1734 "typecheck.m"
      break;
#line 1734 "typecheck.m"
    }
#line 1730 "typecheck.m"
}

#line 1689 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1689 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
#line 1689 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7)
#line 1689 "typecheck.m"
{
#line 1693 "typecheck.m"
  while (MR_TRUE)
#line 1693 "typecheck.m"
    {
#line 1693 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1693 "typecheck.m"
      {
#line 1693 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1693 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1694 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6;
#line 1693 "typecheck.m"
        else
#line 1696 "typecheck.m"
          {
#line 1696 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1696 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1696 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_22;
#line 1696 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_23;
#line 1696 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_24;
#line 1696 "typecheck.m"
            MR_Word check_hlds__typecheck__PredArgTypes_25;
#line 1696 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_26;
#line 1696 "typecheck.m"
            MR_Word check_hlds__typecheck__TVarSet_27;
#line 1696 "typecheck.m"
            MR_Word check_hlds__typecheck__PredConstraints_28;
#line 1696 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;
#line 1697 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_22;

#line 1697 "typecheck.m"
            {
#line 1697 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__HeadVar__2_2, ((MR_Box) (check_hlds__typecheck__PredId_15)), &check_hlds__typecheck__conv0_PredInfo_22);
            }
#line 1697 "typecheck.m"
            check_hlds__typecheck__PredInfo_22 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_22);
#line 1698 "typecheck.m"
            {
#line 1698 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredTypeVarSet_23, &check_hlds__typecheck__PredExistQVars_24, &check_hlds__typecheck__PredArgTypes_25);
            }
#line 1700 "typecheck.m"
            {
#line 1700 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredClassContext_26);
            }
#line 1701 "typecheck.m"
            {
#line 1701 "typecheck.m"
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__TVarSet_27);
            }
#line 1702 "typecheck.m"
            {
#line 1702 "typecheck.m"
              hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__TVarSet_27, check_hlds__typecheck__HeadVar__4_4, check_hlds__typecheck__PredClassContext_26, &check_hlds__typecheck__PredConstraints_28);
            }
#line 1704 "typecheck.m"
            {
#line 1704 "typecheck.m"
              check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__HeadVar__5_5, check_hlds__typecheck__PredTypeVarSet_23, check_hlds__typecheck__PredExistQVars_24, check_hlds__typecheck__PredArgTypes_25, check_hlds__typecheck__PredConstraints_28, check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6, &check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31);
            }
#line 1706 "typecheck.m"
            /* direct tailcall eliminated */
#line 1706 "typecheck.m"
            {
#line 1706 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__PredIds_16;
#line 1706 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;

#line 1706 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_6;
#line 1706 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1706 "typecheck.m"
            }
#line 1706 "typecheck.m"
            continue;
#line 1696 "typecheck.m"
          }
#line 1693 "typecheck.m"
      }
#line 1693 "typecheck.m"
      break;
#line 1693 "typecheck.m"
    }
#line 1689 "typecheck.m"
}

#line 1665 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_overloaded_pred_6_p_0(
#line 1665 "typecheck.m"
  MR_Word check_hlds__typecheck__CallId_7,
#line 1665 "typecheck.m"
  MR_Word check_hlds__typecheck__PredIdList_8,
#line 1665 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_9,
#line 1665 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 1665 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 1665 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21)
#line 1665 "typecheck.m"
{
#line 1669 "typecheck.m"
  {
#line 1669 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1669 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
#line 1669 "typecheck.m"
    MR_Word check_hlds__typecheck__Symbol_13;
#line 1669 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_14;
#line 1669 "typecheck.m"
    MR_Word check_hlds__typecheck__ClassTable_15;
#line 1669 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_16;
#line 1669 "typecheck.m"
    MR_Word check_hlds__typecheck__Preds_17;
#line 1669 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet0_18;
#line 1669 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgsTypeAssignSet_19;
#line 1669 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_22_22;
#line 1670 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 1670 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 1670 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 1670 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 1670 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
#line 1670 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 6)));
#line 1670 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 7)));
#line 1677 "typecheck.m"
    MR_Word check_hlds__typecheck__V_33_33;
#line 1677 "typecheck.m"
    MR_Word check_hlds__typecheck__V_34_34;
#line 1677 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_35_35;
#line 1677 "typecheck.m"
    MR_Word check_hlds__typecheck__V_36_36;
#line 1677 "typecheck.m"
    MR_Word check_hlds__typecheck__V_37_37;
#line 1677 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38;
#line 1677 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_39_39;
#line 1681 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 1681 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;
#line 1681 "typecheck.m"
    MR_Word check_hlds__typecheck__V_42_42;
#line 1681 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_43_43;
#line 1681 "typecheck.m"
    MR_Word check_hlds__typecheck__V_44_44;
#line 1681 "typecheck.m"
    MR_Word check_hlds__typecheck__V_45_45;
#line 1681 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_46_46;

#line 1671 "typecheck.m"
    {
#line 1671 "typecheck.m"
      check_hlds__typecheck__Symbol_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1671 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_13, 0) = ((MR_Box) (check_hlds__typecheck__CallId_7));
#line 1671 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_13, 1) = ((MR_Box) (check_hlds__typecheck__PredIdList_8));
#line 1671 "typecheck.m"
    }
#line 1672 "typecheck.m"
    {
#line 1672 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_13, check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_Info_0_20, &check_hlds__typecheck__STATE_VARIABLE_Info_22_22);
    }
#line 1677 "typecheck.m"
    check_hlds__typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 0)));
#line 1677 "typecheck.m"
    check_hlds__typecheck__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 1)));
#line 1677 "typecheck.m"
    check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 2)));
#line 1677 "typecheck.m"
    check_hlds__typecheck__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)));
#line 1677 "typecheck.m"
    check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 4)));
#line 1677 "typecheck.m"
    check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 5)));
#line 1677 "typecheck.m"
    check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 6)));
#line 1677 "typecheck.m"
    check_hlds__typecheck__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 7)));
#line 1678 "typecheck.m"
    {
#line 1678 "typecheck.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_14, &check_hlds__typecheck__ClassTable_15);
    }
#line 1679 "typecheck.m"
    {
#line 1679 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_14, &check_hlds__typecheck__PredicateTable_16);
    }
#line 1680 "typecheck.m"
    {
#line 1680 "typecheck.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_16, &check_hlds__typecheck__Preds_17);
    }
#line 1681 "typecheck.m"
    check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 0)));
#line 1681 "typecheck.m"
    check_hlds__typecheck__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 1)));
#line 1681 "typecheck.m"
    check_hlds__typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 2)));
#line 1681 "typecheck.m"
    check_hlds__typecheck__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)));
#line 1681 "typecheck.m"
    check_hlds__typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 4)));
#line 1681 "typecheck.m"
    check_hlds__typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 5)));
#line 1681 "typecheck.m"
    check_hlds__typecheck__TypeAssignSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 6)));
#line 1681 "typecheck.m"
    check_hlds__typecheck__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 7)));
#line 1682 "typecheck.m"
    {
#line 1682 "typecheck.m"
      check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(check_hlds__typecheck__PredIdList_8, check_hlds__typecheck__Preds_17, check_hlds__typecheck__ClassTable_15, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__TypeAssignSet0_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_19);
    }
#line 1687 "typecheck.m"
    {
#line 1687 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__Args_9, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_19, check_hlds__typecheck__STATE_VARIABLE_Info_22_22, check_hlds__typecheck__STATE_VARIABLE_Info_21);
#line 1687 "typecheck.m"
      return;
    }
#line 1669 "typecheck.m"
  }
#line 1665 "typecheck.m"
}

#line 1636 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_5_p_0(
#line 1636 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_6,
#line 1636 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_7,
#line 1636 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_8,
#line 1636 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 1636 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21)
#line 1636 "typecheck.m"
{
#line 1639 "typecheck.m"
  {
#line 1639 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1639 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 1639 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_11;
#line 1639 "typecheck.m"
    MR_Word check_hlds__typecheck__Preds_12;
#line 1639 "typecheck.m"
    MR_Word check_hlds__typecheck__PredInfo_13;
#line 1639 "typecheck.m"
    MR_Word check_hlds__typecheck__PredTypeVarSet_14;
#line 1639 "typecheck.m"
    MR_Word check_hlds__typecheck__PredExistQVars_15;
#line 1639 "typecheck.m"
    MR_Word check_hlds__typecheck__PredArgTypes_16;
#line 1639 "typecheck.m"
    MR_Word check_hlds__typecheck__PredClassContext_17;
#line 1640 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 1640 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 1640 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 1640 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
#line 1640 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
#line 1640 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 6)));
#line 1640 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 7)));
#line 1643 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_PredInfo_13;
#line 1653 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 1653 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;

#line 1641 "typecheck.m"
    {
#line 1641 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_10, &check_hlds__typecheck__PredicateTable_11);
    }
#line 1642 "typecheck.m"
    {
#line 1642 "typecheck.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_11, &check_hlds__typecheck__Preds_12);
    }
#line 1643 "typecheck.m"
    {
#line 1643 "typecheck.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_12, ((MR_Box) (check_hlds__typecheck__PredId_6)), &check_hlds__typecheck__conv0_PredInfo_13);
    }
#line 1643 "typecheck.m"
    check_hlds__typecheck__PredInfo_13 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_13);
#line 1644 "typecheck.m"
    {
#line 1644 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_13, &check_hlds__typecheck__PredTypeVarSet_14, &check_hlds__typecheck__PredExistQVars_15, &check_hlds__typecheck__PredArgTypes_16);
    }
#line 1646 "typecheck.m"
    {
#line 1646 "typecheck.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_13, &check_hlds__typecheck__PredClassContext_17);
    }
#line 1653 "typecheck.m"
    {
#line 1653 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__PredTypeVarSet_14);
    }
#line 1653 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1653 "typecheck.m"
      {
#line 1654 "typecheck.m"
        check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_17, (MR_Integer) 0)));
#line 1654 "typecheck.m"
        check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_17, (MR_Integer) 1)));
#line 1654 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1653 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1654 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1653 "typecheck.m"
      }
#line 1657 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1656 "typecheck.m"
      {
#line 1656 "typecheck.m"
        {
#line 1656 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(check_hlds__typecheck__Args_7, check_hlds__typecheck__PredArgTypes_16, (MR_Integer) 1, check_hlds__typecheck__STATE_VARIABLE_Info_0_20, check_hlds__typecheck__STATE_VARIABLE_Info_21);
#line 1656 "typecheck.m"
          return;
        }
#line 1656 "typecheck.m"
      }
#line 1657 "typecheck.m"
    else
#line 1658 "typecheck.m"
      {
#line 1658 "typecheck.m"
        MR_Word check_hlds__typecheck__ClassTable_18;
#line 1658 "typecheck.m"
        MR_Word check_hlds__typecheck__PredConstraints_19;
#line 1658 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet0_45;
#line 1658 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_46;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_50_50;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_51_51;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_52_52;
#line 1725 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_53_53;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_54_54;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_55_55;
#line 1725 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_56_56;

#line 1658 "typecheck.m"
        {
#line 1658 "typecheck.m"
          hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_10, &check_hlds__typecheck__ClassTable_18);
        }
#line 1659 "typecheck.m"
        {
#line 1659 "typecheck.m"
          hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_18, check_hlds__typecheck__PredTypeVarSet_14, check_hlds__typecheck__GoalId_8, check_hlds__typecheck__PredClassContext_17, &check_hlds__typecheck__PredConstraints_19);
        }
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__TypeAssignSet0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 6)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 7)));
#line 1726 "typecheck.m"
        {
#line 1726 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__TypeAssignSet0_45, check_hlds__typecheck__PredTypeVarSet_14, check_hlds__typecheck__PredExistQVars_15, check_hlds__typecheck__PredArgTypes_16, check_hlds__typecheck__PredConstraints_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_46);
        }
#line 1728 "typecheck.m"
        {
#line 1728 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__Args_7, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_46, check_hlds__typecheck__STATE_VARIABLE_Info_0_20, check_hlds__typecheck__STATE_VARIABLE_Info_21);
#line 1728 "typecheck.m"
          return;
        }
#line 1658 "typecheck.m"
      }
#line 1639 "typecheck.m"
  }
#line 1636 "typecheck.m"
}

#line 1587 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_6_p_0(
#line 1587 "typecheck.m"
  MR_Word check_hlds__typecheck__CallId_7,
#line 1587 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_8,
#line 1587 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 1587 "typecheck.m"
  MR_Word * check_hlds__typecheck__PredId_10,
#line 1587 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_25,
#line 1587 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_26)
#line 1587 "typecheck.m"
{
#line 1590 "typecheck.m"
  {
#line 1590 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1590 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 1590 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_13;
#line 1590 "typecheck.m"
    MR_Word check_hlds__typecheck__PorF_14;
#line 1590 "typecheck.m"
    MR_Word check_hlds__typecheck__SymName_15;
#line 1590 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity_16;
#line 1590 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMarkers_17;
#line 1590 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFullyQualified_18;
#line 1590 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIds_19;
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 1592 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 1592 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));

#line 1593 "typecheck.m"
    {
#line 1593 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_12, &check_hlds__typecheck__PredicateTable_13);
    }
#line 1594 "typecheck.m"
    check_hlds__typecheck__PorF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__CallId_7, (MR_Integer) 0)));
#line 1594 "typecheck.m"
    check_hlds__typecheck__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__CallId_7, (MR_Integer) 1)));
#line 1594 "typecheck.m"
    check_hlds__typecheck__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__CallId_7, (MR_Integer) 2)));
#line 1595 "typecheck.m"
    {
#line 1595 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_25, &check_hlds__typecheck__PredMarkers_17);
    }
#line 1596 "typecheck.m"
    {
#line 1596 "typecheck.m"
      check_hlds__typecheck__IsFullyQualified_18 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__typecheck__PredMarkers_17);
    }
#line 1597 "typecheck.m"
    {
#line 1597 "typecheck.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(check_hlds__typecheck__PredicateTable_13, check_hlds__typecheck__IsFullyQualified_18, check_hlds__typecheck__PorF_14, check_hlds__typecheck__SymName_15, check_hlds__typecheck__Arity_16, &check_hlds__typecheck__PredIds_19);
    }
#line 1604 "typecheck.m"
    if ((check_hlds__typecheck__PredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1600 "typecheck.m"
      {
#line 1600 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_20;

#line 1601 "typecheck.m"
        {
#line 1601 "typecheck.m"
          *check_hlds__typecheck__PredId_10 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 1602 "typecheck.m"
        {
#line 1602 "typecheck.m"
          check_hlds__typecheck__Spec_20 = check_hlds__typecheck_errors__report_pred_call_error_2_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_25, check_hlds__typecheck__CallId_7);
        }
#line 1603 "typecheck.m"
        {
#line 1603 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_20, check_hlds__typecheck__STATE_VARIABLE_Info_0_25, check_hlds__typecheck__STATE_VARIABLE_Info_26);
#line 1603 "typecheck.m"
          return;
        }
#line 1600 "typecheck.m"
      }
#line 1604 "typecheck.m"
    else
#line 1605 "typecheck.m"
      {
#line 1605 "typecheck.m"
        MR_Word check_hlds__typecheck__HeadPredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_19, (MR_Integer) 0)));
#line 1605 "typecheck.m"
        MR_Word check_hlds__typecheck__TailPredIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_19, (MR_Integer) 1)));
#line 1605 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_28_28;

#line 1613 "typecheck.m"
        if ((check_hlds__typecheck__TailPredIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1607 "typecheck.m"
          {
#line 1607 "typecheck.m"
            MR_Word check_hlds__typecheck__ModuleInfo_44;
#line 1607 "typecheck.m"
            MR_Word check_hlds__typecheck__PredicateTable_45;
#line 1607 "typecheck.m"
            MR_Word check_hlds__typecheck__Preds_46;
#line 1607 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_47;
#line 1607 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_48;
#line 1607 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_49;
#line 1607 "typecheck.m"
            MR_Word check_hlds__typecheck__PredArgTypes_50;
#line 1607 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_51;
#line 1640 "typecheck.m"
            MR_Word check_hlds__typecheck__V_59_59;
#line 1640 "typecheck.m"
            MR_Word check_hlds__typecheck__V_60_60;
#line 1640 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_61_61;
#line 1640 "typecheck.m"
            MR_Word check_hlds__typecheck__V_62_62;
#line 1640 "typecheck.m"
            MR_Word check_hlds__typecheck__V_63_63;
#line 1640 "typecheck.m"
            MR_Word check_hlds__typecheck__V_64_64;
#line 1640 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_65_65;
#line 1643 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_47;
#line 1653 "typecheck.m"
            MR_Word check_hlds__typecheck__V_54_54;
#line 1653 "typecheck.m"
            MR_Word check_hlds__typecheck__V_55_55;

#line 1611 "typecheck.m"
            *check_hlds__typecheck__PredId_10 = check_hlds__typecheck__HeadPredId_21;
#line 1640 "typecheck.m"
            check_hlds__typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 1640 "typecheck.m"
            check_hlds__typecheck__ModuleInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 1640 "typecheck.m"
            check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 1640 "typecheck.m"
            check_hlds__typecheck__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 1640 "typecheck.m"
            check_hlds__typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 1640 "typecheck.m"
            check_hlds__typecheck__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 1640 "typecheck.m"
            check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 1640 "typecheck.m"
            check_hlds__typecheck__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 1641 "typecheck.m"
            {
#line 1641 "typecheck.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_44, &check_hlds__typecheck__PredicateTable_45);
            }
#line 1642 "typecheck.m"
            {
#line 1642 "typecheck.m"
              hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_45, &check_hlds__typecheck__Preds_46);
            }
#line 1643 "typecheck.m"
            {
#line 1643 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_46, ((MR_Box) (*check_hlds__typecheck__PredId_10)), &check_hlds__typecheck__conv0_PredInfo_47);
            }
#line 1643 "typecheck.m"
            check_hlds__typecheck__PredInfo_47 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_47);
#line 1644 "typecheck.m"
            {
#line 1644 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_47, &check_hlds__typecheck__PredTypeVarSet_48, &check_hlds__typecheck__PredExistQVars_49, &check_hlds__typecheck__PredArgTypes_50);
            }
#line 1646 "typecheck.m"
            {
#line 1646 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_47, &check_hlds__typecheck__PredClassContext_51);
            }
#line 1653 "typecheck.m"
            {
#line 1653 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__PredTypeVarSet_48);
            }
#line 1653 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1653 "typecheck.m"
              {
#line 1654 "typecheck.m"
                check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_51, (MR_Integer) 0)));
#line 1654 "typecheck.m"
                check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_51, (MR_Integer) 1)));
#line 1654 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1653 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1654 "typecheck.m"
                  check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1653 "typecheck.m"
              }
#line 1657 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1656 "typecheck.m"
              {
#line 1656 "typecheck.m"
                {
#line 1656 "typecheck.m"
                  check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(check_hlds__typecheck__Args_8, check_hlds__typecheck__PredArgTypes_50, (MR_Integer) 1, check_hlds__typecheck__STATE_VARIABLE_Info_0_25, &check_hlds__typecheck__STATE_VARIABLE_Info_28_28);
                }
#line 1656 "typecheck.m"
              }
#line 1657 "typecheck.m"
            else
#line 1658 "typecheck.m"
              {
#line 1658 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassTable_52;
#line 1658 "typecheck.m"
                MR_Word check_hlds__typecheck__PredConstraints_53;
#line 1658 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet0_77;
#line 1658 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_78;
#line 1725 "typecheck.m"
                MR_Word check_hlds__typecheck__V_82_82;
#line 1725 "typecheck.m"
                MR_Word check_hlds__typecheck__V_83_83;
#line 1725 "typecheck.m"
                MR_Word check_hlds__typecheck__V_84_84;
#line 1725 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_85_85;
#line 1725 "typecheck.m"
                MR_Word check_hlds__typecheck__V_86_86;
#line 1725 "typecheck.m"
                MR_Word check_hlds__typecheck__V_87_87;
#line 1725 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_88_88;

#line 1658 "typecheck.m"
                {
#line 1658 "typecheck.m"
                  hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_44, &check_hlds__typecheck__ClassTable_52);
                }
#line 1659 "typecheck.m"
                {
#line 1659 "typecheck.m"
                  hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_52, check_hlds__typecheck__PredTypeVarSet_48, check_hlds__typecheck__GoalId_9, check_hlds__typecheck__PredClassContext_51, &check_hlds__typecheck__PredConstraints_53);
                }
#line 1725 "typecheck.m"
                check_hlds__typecheck__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 1725 "typecheck.m"
                check_hlds__typecheck__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 1725 "typecheck.m"
                check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 1725 "typecheck.m"
                check_hlds__typecheck__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 1725 "typecheck.m"
                check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 1725 "typecheck.m"
                check_hlds__typecheck__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 1725 "typecheck.m"
                check_hlds__typecheck__TypeAssignSet0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 1725 "typecheck.m"
                check_hlds__typecheck__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 1726 "typecheck.m"
                {
#line 1726 "typecheck.m"
                  check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__TypeAssignSet0_77, check_hlds__typecheck__PredTypeVarSet_48, check_hlds__typecheck__PredExistQVars_49, check_hlds__typecheck__PredArgTypes_50, check_hlds__typecheck__PredConstraints_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_78);
                }
#line 1728 "typecheck.m"
                {
#line 1728 "typecheck.m"
                  check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__Args_8, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_78, check_hlds__typecheck__STATE_VARIABLE_Info_0_25, &check_hlds__typecheck__STATE_VARIABLE_Info_28_28);
                }
#line 1658 "typecheck.m"
              }
#line 1607 "typecheck.m"
          }
#line 1613 "typecheck.m"
        else
#line 1614 "typecheck.m"
          {
#line 1615 "typecheck.m"
            {
#line 1615 "typecheck.m"
              check_hlds__typecheck__typecheck_call_overloaded_pred_6_p_0(check_hlds__typecheck__CallId_7, check_hlds__typecheck__PredIds_19, check_hlds__typecheck__Args_8, check_hlds__typecheck__GoalId_9, check_hlds__typecheck__STATE_VARIABLE_Info_0_25, &check_hlds__typecheck__STATE_VARIABLE_Info_28_28);
            }
#line 1624 "typecheck.m"
            {
#line 1624 "typecheck.m"
              *check_hlds__typecheck__PredId_10 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 1614 "typecheck.m"
          }
#line 1631 "typecheck.m"
        {
#line 1631 "typecheck.m"
          check_hlds__typeclasses__perform_context_reduction_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_28_28, check_hlds__typecheck__STATE_VARIABLE_Info_26);
#line 1631 "typecheck.m"
          return;
        }
#line 1605 "typecheck.m"
      }
#line 1590 "typecheck.m"
  }
#line 1587 "typecheck.m"
}

#line 1565 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_4_p_0(
#line 1565 "typecheck.m"
  MR_String check_hlds__typecheck__EventName_5,
#line 1565 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_6,
#line 1565 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 1565 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14)
#line 1565 "typecheck.m"
{
#line 1568 "typecheck.m"
  {
#line 1568 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1568 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1568 "typecheck.m"
    MR_Word check_hlds__typecheck__EventSet_9;
#line 1568 "typecheck.m"
    MR_Word check_hlds__typecheck__EventSpecMap_10;
#line 1569 "typecheck.m"
    MR_Word check_hlds__typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1569 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1569 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1569 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1569 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1569 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1569 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1571 "typecheck.m"
    MR_String check_hlds__typecheck__V_27_27;
#line 1580 "typecheck.m"
    MR_Word check_hlds__typecheck__EventArgTypes_11;

#line 1570 "typecheck.m"
    {
#line 1570 "typecheck.m"
      hlds__hlds_module__module_info_get_event_set_2_p_0(check_hlds__typecheck__ModuleInfo_8, &check_hlds__typecheck__EventSet_9);
    }
#line 1571 "typecheck.m"
    check_hlds__typecheck__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_9, (MR_Integer) 0)));
#line 1571 "typecheck.m"
    check_hlds__typecheck__EventSpecMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_9, (MR_Integer) 1)));
#line 1572 "typecheck.m"
    {
#line 1572 "typecheck.m"
      check_hlds__typecheck__succeeded = parse_tree__prog_event__event_arg_types_3_p_0(check_hlds__typecheck__EventSpecMap_10, check_hlds__typecheck__EventName_5, &check_hlds__typecheck__EventArgTypes_11);
    }
#line 1580 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1575 "typecheck.m"
      {
#line 1573 "typecheck.m"
        {
#line 1573 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Args_6, check_hlds__typecheck__EventArgTypes_11);
        }
#line 1575 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1574 "typecheck.m"
          {
#line 1574 "typecheck.m"
            {
#line 1574 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(check_hlds__typecheck__Args_6, check_hlds__typecheck__EventArgTypes_11, (MR_Integer) 1, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
#line 1574 "typecheck.m"
              return;
            }
#line 1574 "typecheck.m"
          }
#line 1575 "typecheck.m"
        else
#line 1577 "typecheck.m"
          {
#line 1577 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_12;

#line 1576 "typecheck.m"
            {
#line 1576 "typecheck.m"
              check_hlds__typecheck__Spec_12 = check_hlds__typecheck_errors__report_event_args_mismatch_4_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__EventName_5, check_hlds__typecheck__EventArgTypes_11, check_hlds__typecheck__Args_6);
            }
#line 1578 "typecheck.m"
            {
#line 1578 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_12, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
#line 1578 "typecheck.m"
              return;
            }
#line 1577 "typecheck.m"
          }
#line 1575 "typecheck.m"
      }
#line 1580 "typecheck.m"
    else
#line 1581 "typecheck.m"
      {
#line 1581 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_19;

#line 1581 "typecheck.m"
        {
#line 1581 "typecheck.m"
          check_hlds__typecheck__Spec_19 = check_hlds__typecheck_errors__report_unknown_event_call_error_2_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__EventName_5);
        }
#line 1582 "typecheck.m"
        {
#line 1582 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_19, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
#line 1582 "typecheck.m"
          return;
        }
#line 1581 "typecheck.m"
      }
#line 1568 "typecheck.m"
  }
#line 1565 "typecheck.m"
}

#line 1508 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_5_p_0(
#line 1508 "typecheck.m"
  MR_Word check_hlds__typecheck__PredVar_6,
#line 1508 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_7,
#line 1508 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_8,
#line 1508 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
#line 1508 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17)
#line 1508 "typecheck.m"
{
#line 1511 "typecheck.m"
  {
#line 1511 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_33;
#line 1511 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity_10;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_11;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__PredVarType_12;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_13;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_14;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__V_19_19;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__V_20_20;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_29;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_30;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet0_44;
#line 1511 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgsTypeAssignSet_45;
#line 1725 "typecheck.m"
    MR_Word check_hlds__typecheck__V_49_49;
#line 1725 "typecheck.m"
    MR_Word check_hlds__typecheck__V_50_50;
#line 1725 "typecheck.m"
    MR_Word check_hlds__typecheck__V_51_51;
#line 1725 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_52_52;
#line 1725 "typecheck.m"
    MR_Word check_hlds__typecheck__V_53_53;
#line 1725 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 1725 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_55_55;

#line 1512 "typecheck.m"
    {
#line 1512 "typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_8, &check_hlds__typecheck__Arity_10);
    }
#line 1513 "typecheck.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 12807 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_17_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1534 "typecheck.m"
    {
#line 1534 "typecheck.m"
      mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_17_33, &check_hlds__typecheck__TypeVarSet0_29);
    }
#line 1535 "typecheck.m"
    {
#line 1535 "typecheck.m"
      mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_17_33, check_hlds__typecheck__Arity_10, &check_hlds__typecheck__ArgTypeVars_30, check_hlds__typecheck__TypeVarSet0_29, &check_hlds__typecheck__TypeVarSet_11);
    }
#line 1537 "typecheck.m"
    {
#line 1537 "typecheck.m"
      check_hlds__typecheck__V_31_31 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 1537 "typecheck.m"
    {
#line 1537 "typecheck.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_31_31, check_hlds__typecheck__ArgTypeVars_30, &check_hlds__typecheck__ArgTypes_13);
    }
#line 1538 "typecheck.m"
    {
#line 1538 "typecheck.m"
      parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_7, (MR_Integer) 0, check_hlds__typecheck__ArgTypes_13, &check_hlds__typecheck__PredVarType_12);
    }
#line 1517 "typecheck.m"
    {
#line 1517 "typecheck.m"
      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_14);
    }
#line 1519 "typecheck.m"
    {
#line 1519 "typecheck.m"
      check_hlds__typecheck__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_19_19, 0) = ((MR_Box) (check_hlds__typecheck__PredVar_6));
#line 1519 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_19_19, 1) = ((MR_Box) (check_hlds__typecheck__Args_8));
#line 1519 "typecheck.m"
    }
#line 1520 "typecheck.m"
    {
#line 1520 "typecheck.m"
      check_hlds__typecheck__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_20_20, 0) = ((MR_Box) (check_hlds__typecheck__PredVarType_12));
#line 1520 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_20_20, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_13));
#line 1520 "typecheck.m"
    }
#line 1725 "typecheck.m"
    check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1725 "typecheck.m"
    check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 1725 "typecheck.m"
    check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1725 "typecheck.m"
    check_hlds__typecheck__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 1725 "typecheck.m"
    check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 1725 "typecheck.m"
    check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 1725 "typecheck.m"
    check_hlds__typecheck__TypeAssignSet0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 1725 "typecheck.m"
    check_hlds__typecheck__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 1726 "typecheck.m"
    {
#line 1726 "typecheck.m"
      check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__TypeAssignSet0_44, check_hlds__typecheck__TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__V_20_20, check_hlds__typecheck__EmptyConstraints_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_45);
    }
#line 1728 "typecheck.m"
    {
#line 1728 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__V_19_19, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_45, check_hlds__typecheck__STATE_VARIABLE_Info_0_16, check_hlds__typecheck__STATE_VARIABLE_Info_17);
#line 1728 "typecheck.m"
      return;
    }
#line 1511 "typecheck.m"
  }
#line 1508 "typecheck.m"
}

#line 1485 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_3_p_0(
#line 1485 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_4,
#line 1485 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_15,
#line 1485 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_16)
#line 1485 "typecheck.m"
{
#line 1490 "typecheck.m"
  {
#line 1490 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1490 "typecheck.m"
    if ((check_hlds__typecheck__Vars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1490 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_16 = check_hlds__typecheck__STATE_VARIABLE_Info_0_15;
#line 1490 "typecheck.m"
    else
#line 1492 "typecheck.m"
      {
#line 1492 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1492 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet0_8;
#line 1492 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVar_9;
#line 1492 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet_10;
#line 1492 "typecheck.m"
        MR_Word check_hlds__typecheck__Type_11;
#line 1492 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumVars_12;
#line 1492 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_13;
#line 1492 "typecheck.m"
        MR_Word check_hlds__typecheck__EmptyConstraints_14;
#line 1492 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet0_31;
#line 1492 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_32;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_36_36;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_38_38;
#line 1725 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_39_39;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_40_40;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_41_41;
#line 1725 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_42_42;

#line 1496 "typecheck.m"
        {
#line 1496 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_20_20, &check_hlds__typecheck__TypeVarSet0_8);
        }
#line 1497 "typecheck.m"
        {
#line 1497 "typecheck.m"
          mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_20_20, &check_hlds__typecheck__TypeVar_9, check_hlds__typecheck__TypeVarSet0_8, &check_hlds__typecheck__TypeVarSet_10);
        }
#line 1498 "typecheck.m"
        {
#line 1498 "typecheck.m"
          check_hlds__typecheck__Type_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1498 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_11, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_9));
#line 1498 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1498 "typecheck.m"
        }
#line 1499 "typecheck.m"
        {
#line 1499 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_4, &check_hlds__typecheck__NumVars_12);
        }
#line 1500 "typecheck.m"
        {
#line 1500 "typecheck.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__NumVars_12, ((MR_Box) (check_hlds__typecheck__Type_11)), &check_hlds__typecheck__Types_13);
        }
#line 1501 "typecheck.m"
        {
#line 1501 "typecheck.m"
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_14);
        }
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__TypeAssignSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 1726 "typecheck.m"
        {
#line 1726 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__TypeAssignSet0_31, check_hlds__typecheck__TypeVarSet_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_13, check_hlds__typecheck__EmptyConstraints_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_32);
        }
#line 1728 "typecheck.m"
        {
#line 1728 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__Vars_4, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_32, check_hlds__typecheck__STATE_VARIABLE_Info_0_15, check_hlds__typecheck__STATE_VARIABLE_Info_16);
#line 1728 "typecheck.m"
          return;
        }
#line 1492 "typecheck.m"
      }
#line 1490 "typecheck.m"
  }
#line 1485 "typecheck.m"
}

#line 1463 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(
#line 1463 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_4,
#line 1463 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_14,
#line 1463 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_15)
#line 1463 "typecheck.m"
{
#line 1468 "typecheck.m"
  {
#line 1468 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1468 "typecheck.m"
    if ((check_hlds__typecheck__Vars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1468 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_15 = check_hlds__typecheck__STATE_VARIABLE_Info_0_14;
#line 1468 "typecheck.m"
    else
#line 1470 "typecheck.m"
      {
#line 1470 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_20_20;
#line 1470 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumVars_8;
#line 1470 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet0_9;
#line 1470 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVars_10;
#line 1470 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet_11;
#line 1470 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_12;
#line 1470 "typecheck.m"
        MR_Word check_hlds__typecheck__EmptyConstraints_13;
#line 1470 "typecheck.m"
        MR_Word check_hlds__typecheck__V_16_16;
#line 1470 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet0_31;
#line 1470 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_32;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_36_36;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_38_38;
#line 1725 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_39_39;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_40_40;
#line 1725 "typecheck.m"
        MR_Word check_hlds__typecheck__V_41_41;
#line 1725 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_42_42;

#line 1474 "typecheck.m"
        {
#line 1474 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_4, &check_hlds__typecheck__NumVars_8);
        }
#line 13085 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1475 "typecheck.m"
        {
#line 1475 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_20_20, &check_hlds__typecheck__TypeVarSet0_9);
        }
#line 1476 "typecheck.m"
        {
#line 1476 "typecheck.m"
          mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_20_20, check_hlds__typecheck__NumVars_8, &check_hlds__typecheck__TypeVars_10, check_hlds__typecheck__TypeVarSet0_9, &check_hlds__typecheck__TypeVarSet_11);
        }
#line 1477 "typecheck.m"
        {
#line 1477 "typecheck.m"
          check_hlds__typecheck__V_16_16 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 1477 "typecheck.m"
        {
#line 1477 "typecheck.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_16_16, check_hlds__typecheck__TypeVars_10, &check_hlds__typecheck__Types_12);
        }
#line 1478 "typecheck.m"
        {
#line 1478 "typecheck.m"
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_13);
        }
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__TypeAssignSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1725 "typecheck.m"
        check_hlds__typecheck__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1726 "typecheck.m"
        {
#line 1726 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__TypeAssignSet0_31, check_hlds__typecheck__TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_12, check_hlds__typecheck__EmptyConstraints_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_32);
        }
#line 1728 "typecheck.m"
        {
#line 1728 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__Vars_4, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_32, check_hlds__typecheck__STATE_VARIABLE_Info_0_14, check_hlds__typecheck__STATE_VARIABLE_Info_15);
#line 1728 "typecheck.m"
          return;
        }
#line 1470 "typecheck.m"
      }
#line 1468 "typecheck.m"
  }
#line 1463 "typecheck.m"
}

#line 1451 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_4_p_0(
#line 1451 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1451 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 1451 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_3,
#line 1451 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_4)
#line 1451 "typecheck.m"
{
#line 1454 "typecheck.m"
  {
#line 1454 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1454 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1454 "typecheck.m"
      {
#line 1454 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1454 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_4 = check_hlds__typecheck__STATE_VARIABLE_Info_0_3;
#line 1454 "typecheck.m"
      }
#line 1454 "typecheck.m"
    else
#line 1455 "typecheck.m"
      {
#line 1455 "typecheck.m"
        MR_Word check_hlds__typecheck__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1455 "typecheck.m"
        MR_Word check_hlds__typecheck__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1455 "typecheck.m"
        MR_Word check_hlds__typecheck__Goal_10;
#line 1455 "typecheck.m"
        MR_Word check_hlds__typecheck__Goals_11;
#line 1455 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_15_15;

#line 1456 "typecheck.m"
        {
#line 1456 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Goal0_8, &check_hlds__typecheck__Goal_10, check_hlds__typecheck__STATE_VARIABLE_Info_0_3, &check_hlds__typecheck__STATE_VARIABLE_Info_15_15);
        }
#line 1457 "typecheck.m"
        {
#line 1457 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_list_4_p_0(check_hlds__typecheck__Goals0_9, &check_hlds__typecheck__Goals_11, check_hlds__typecheck__STATE_VARIABLE_Info_15_15, check_hlds__typecheck__STATE_VARIABLE_Info_4);
        }
#line 1455 "typecheck.m"
        {
#line 1455 "typecheck.m"
          MR_Word base;
#line 1455 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 1455 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Goal_10));
#line 1455 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Goals_11));
#line 1455 "typecheck.m"
        }
#line 1455 "typecheck.m"
      }
#line 1454 "typecheck.m"
  }
#line 1451 "typecheck.m"
}

#line 1442 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
#line 1442 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1)
#line 1442 "typecheck.m"
{
#line 1445 "typecheck.m"
  {
#line 1445 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1445 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVar__2_2;

#line 1445 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1445 "typecheck.m"
      check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1445 "typecheck.m"
    else
#line 1446 "typecheck.m"
      {
#line 1446 "typecheck.m"
        MR_Word check_hlds__typecheck__I_3;
#line 1446 "typecheck.m"
        MR_Word check_hlds__typecheck__O_4;
#line 1446 "typecheck.m"
        MR_Word check_hlds__typecheck__Interfaces_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1446 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1446 "typecheck.m"
        MR_Word check_hlds__typecheck__V_7_7;
#line 1446 "typecheck.m"
        MR_Word check_hlds__typecheck__V_8_8;

#line 1446 "typecheck.m"
        check_hlds__typecheck__I_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 0)));
#line 1446 "typecheck.m"
        check_hlds__typecheck__O_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 1)));
#line 1447 "typecheck.m"
        {
#line 1447 "typecheck.m"
          check_hlds__typecheck__V_8_8 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(check_hlds__typecheck__Interfaces_5);
        }
#line 1447 "typecheck.m"
        {
#line 1447 "typecheck.m"
          check_hlds__typecheck__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck__O_4));
#line 1447 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck__V_8_8));
#line 1447 "typecheck.m"
        }
#line 1447 "typecheck.m"
        {
#line 1447 "typecheck.m"
          check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1447 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck__I_3));
#line 1447 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck__V_7_7));
#line 1447 "typecheck.m"
        }
#line 1446 "typecheck.m"
      }
#line 1445 "typecheck.m"
    return check_hlds__typecheck__HeadVar__2_2;
#line 1445 "typecheck.m"
  }
#line 1442 "typecheck.m"
}

#line 1419 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_3(
#line 1419 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg)
#line 1419 "typecheck.m"
{
#line 1419 "typecheck.m"
  {
#line 1419 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1419 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 1419 "typecheck.m"
    {
#line 1419 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1419__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))));
    }
#line 1419 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 1419 "typecheck.m"
  }
#line 1419 "typecheck.m"
}

#line 1416 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_2(
#line 1416 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1416 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 1416 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 1416 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 1416 "typecheck.m"
{
#line 1416 "typecheck.m"
  {
#line 1416 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 1416 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_HeadVar__3_133;

#line 1416 "typecheck.m"
    {
#line 1416 "typecheck.m"
      check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1416__1_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv1_HeadVar__3_133);
    }
#line 1416 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv1_HeadVar__3_133));
#line 1416 "typecheck.m"
  }
#line 1416 "typecheck.m"
}

#line 1374 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_1(
#line 1374 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1374 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 1374 "typecheck.m"
{
#line 1374 "typecheck.m"
  {
#line 1374 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 1374 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 1374 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__2_2;

#line 1374 "typecheck.m"
    {
#line 1374 "typecheck.m"
      check_hlds__typecheck__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 1374 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__2_2));
#line 1374 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 1374 "typecheck.m"
  }
#line 1374 "typecheck.m"
}

#line 1244 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0(
#line 1244 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalExpr0_6,
#line 1244 "typecheck.m"
  MR_Word * check_hlds__typecheck__GoalExpr_7,
#line 1244 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalInfo_8,
#line 1244 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_103,
#line 1244 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_104)
#line 1244 "typecheck.m"
{
#line 1249 "typecheck.m"
  {
#line 1249 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1249 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 0))))
#line 1279 "typecheck.m"
      {
#line 1279 "typecheck.m"
        MR_Word check_hlds__typecheck__SubGoal0_21 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__GoalExpr0_6), (MR_Integer) 0);
#line 1279 "typecheck.m"
        MR_Word check_hlds__typecheck__SubGoal_22;

#line 1283 "typecheck.m"
        {
#line 1283 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__SubGoal0_21, &check_hlds__typecheck__SubGoal_22, check_hlds__typecheck__STATE_VARIABLE_Info_0_103, check_hlds__typecheck__STATE_VARIABLE_Info_104);
        }
#line 1284 "typecheck.m"
        *check_hlds__typecheck__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__SubGoal_22);
#line 1279 "typecheck.m"
      }
#line 1249 "typecheck.m"
    else
#line 1249 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 2))))
#line 1315 "typecheck.m"
        {
#line 1315 "typecheck.m"
          MR_Integer check_hlds__typecheck__ProcId_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1315 "typecheck.m"
          MR_Word check_hlds__typecheck__Args_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1315 "typecheck.m"
          MR_Word check_hlds__typecheck__BI_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 3)));
#line 1315 "typecheck.m"
          MR_Word check_hlds__typecheck__UC_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 4)));
#line 1315 "typecheck.m"
          MR_Word check_hlds__typecheck__Name_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 5)));
#line 1315 "typecheck.m"
          MR_Integer check_hlds__typecheck__Arity_46;
#line 1315 "typecheck.m"
          MR_Word check_hlds__typecheck__CurCall_47;
#line 1315 "typecheck.m"
          MR_Word check_hlds__typecheck__GoalId_48;
#line 1315 "typecheck.m"
          MR_Word check_hlds__typecheck__PredId_49;
#line 1315 "typecheck.m"
          MR_Word check_hlds__typecheck__V_174_174;
#line 1315 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_175_175;
#line 1315 "typecheck.m"
          MR_Word check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)));

#line 1319 "typecheck.m"
          {
#line 1319 "typecheck.m"
            mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_42, &check_hlds__typecheck__Arity_46);
          }
#line 1320 "typecheck.m"
          {
#line 1320 "typecheck.m"
            check_hlds__typecheck__CurCall_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1320 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__CurCall_47, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1320 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__CurCall_47, 1) = ((MR_Box) (check_hlds__typecheck__Name_45));
#line 1320 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__CurCall_47, 2) = ((MR_Box) (check_hlds__typecheck__Arity_46));
#line 1320 "typecheck.m"
          }
#line 1321 "typecheck.m"
          {
#line 1321 "typecheck.m"
            check_hlds__typecheck__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_174_174, 0) = ((MR_Box) (check_hlds__typecheck__CurCall_47));
#line 1321 "typecheck.m"
          }
#line 1321 "typecheck.m"
          {
#line 1321 "typecheck.m"
            check_hlds__typecheck_info__typecheck_info_set_called_predid_3_p_0(check_hlds__typecheck__V_174_174, check_hlds__typecheck__STATE_VARIABLE_Info_0_103, &check_hlds__typecheck__STATE_VARIABLE_Info_175_175);
          }
#line 1322 "typecheck.m"
          {
#line 1322 "typecheck.m"
            check_hlds__typecheck__GoalId_48 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_8);
          }
#line 1323 "typecheck.m"
          {
#line 1323 "typecheck.m"
            check_hlds__typecheck__typecheck_call_pred_6_p_0(check_hlds__typecheck__CurCall_47, check_hlds__typecheck__Args_42, check_hlds__typecheck__GoalId_48, &check_hlds__typecheck__PredId_49, check_hlds__typecheck__STATE_VARIABLE_Info_175_175, check_hlds__typecheck__STATE_VARIABLE_Info_104);
          }
#line 1324 "typecheck.m"
          {
#line 1324 "typecheck.m"
            MR_Word base;
#line 1324 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "typecheck.m"
            *check_hlds__typecheck__GoalExpr_7 = base;
#line 1324 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__PredId_49));
#line 1324 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__typecheck__ProcId_41));
#line 1324 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__typecheck__Args_42));
#line 1324 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__typecheck__BI_43));
#line 1324 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__typecheck__UC_44));
#line 1324 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__typecheck__Name_45));
#line 1324 "typecheck.m"
          }
#line 1315 "typecheck.m"
        }
#line 1249 "typecheck.m"
      else
#line 1249 "typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 1))))
#line 1355 "typecheck.m"
          {
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__LHS_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)));
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__RHS0_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__UnifyMode_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__Unification_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 3)));
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__UnifyContext_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 4)));
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__RHS_71;
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_156_156;
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalId_217;
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_103, (MR_Integer) 0)));
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_103, (MR_Integer) 1)));
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_103, (MR_Integer) 2)));
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_103, (MR_Integer) 4)));
#line 1355 "typecheck.m"
            MR_Word check_hlds__typecheck__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_103, (MR_Integer) 6)));
#line 1355 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_246_246 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_103, (MR_Integer) 7)));
#line 1359 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_242_242 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_103, (MR_Integer) 3)));
#line 1359 "typecheck.m"
            MR_Word check_hlds__typecheck__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_103, (MR_Integer) 5)));

#line 1360 "typecheck.m"
            {
#line 1360 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1360 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_156_156, 0) = ((MR_Box) (check_hlds__typecheck__V_239_239));
#line 1360 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_156_156, 1) = ((MR_Box) (check_hlds__typecheck__V_240_240));
#line 1360 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_156_156, 2) = ((MR_Box) (check_hlds__typecheck__V_241_241));
#line 1360 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_156_156, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1360 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_156_156, 4) = ((MR_Box) (check_hlds__typecheck__V_243_243));
#line 1360 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_156_156, 5) = ((MR_Box) (check_hlds__typecheck__UnifyContext_70));
#line 1360 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_156_156, 6) = ((MR_Box) (check_hlds__typecheck__V_245_245));
#line 1360 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_156_156, 7) = ((MR_Box) (check_hlds__typecheck__V_246_246));
#line 1360 "typecheck.m"
            }
#line 1361 "typecheck.m"
            {
#line 1361 "typecheck.m"
              check_hlds__typecheck__GoalId_217 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_8);
            }
#line 1362 "typecheck.m"
            {
#line 1362 "typecheck.m"
              check_hlds__typecheck__typecheck_unification_6_p_0(check_hlds__typecheck__LHS_66, check_hlds__typecheck__RHS0_67, &check_hlds__typecheck__RHS_71, check_hlds__typecheck__GoalId_217, check_hlds__typecheck__STATE_VARIABLE_Info_156_156, check_hlds__typecheck__STATE_VARIABLE_Info_104);
            }
#line 1363 "typecheck.m"
            {
#line 1363 "typecheck.m"
              MR_Word base;
#line 1363 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "typecheck.m"
              *check_hlds__typecheck__GoalExpr_7 = base;
#line 1363 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__LHS_66));
#line 1363 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__RHS_71));
#line 1363 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__typecheck__UnifyMode_68));
#line 1363 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__typecheck__Unification_69));
#line 1363 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__typecheck__UnifyContext_70));
#line 1363 "typecheck.m"
            }
#line 1355 "typecheck.m"
          }
#line 1249 "typecheck.m"
        else
#line 1249 "typecheck.m"
          if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1368 "typecheck.m"
            {
#line 1368 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgVars_80;
#line 1368 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_146_146;
#line 1368 "typecheck.m"
              MR_Word check_hlds__typecheck__Args_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 4)));
#line 1368 "typecheck.m"
              MR_Word check_hlds__typecheck__GoalId_219;
#line 1368 "typecheck.m"
              MR_Word check_hlds__typecheck__PredId_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1368 "typecheck.m"
              MR_Word check_hlds__typecheck__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1368 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 3)));
#line 1368 "typecheck.m"
              MR_Word check_hlds__typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 5)));
#line 1368 "typecheck.m"
              MR_Word check_hlds__typecheck__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 6)));
#line 1368 "typecheck.m"
              MR_Word check_hlds__typecheck__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 7)));

#line 1374 "typecheck.m"
              {
#line 1374 "typecheck.m"
                check_hlds__typecheck__ArgVars_80 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_scalar_common_2[1], check_hlds__typecheck__Args_218);
              }
#line 1375 "typecheck.m"
              {
#line 1375 "typecheck.m"
                check_hlds__typecheck__GoalId_219 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_8);
              }
#line 1376 "typecheck.m"
              {
#line 1376 "typecheck.m"
                check_hlds__typecheck__typecheck_call_pred_id_5_p_0(check_hlds__typecheck__PredId_220, check_hlds__typecheck__ArgVars_80, check_hlds__typecheck__GoalId_219, check_hlds__typecheck__STATE_VARIABLE_Info_0_103, &check_hlds__typecheck__STATE_VARIABLE_Info_146_146);
              }
#line 1377 "typecheck.m"
              {
#line 1377 "typecheck.m"
                check_hlds__typeclasses__perform_context_reduction_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_146_146, check_hlds__typecheck__STATE_VARIABLE_Info_104);
              }
#line 1378 "typecheck.m"
              *check_hlds__typecheck__GoalExpr_7 = check_hlds__typecheck__GoalExpr0_6;
#line 1368 "typecheck.m"
            }
#line 1249 "typecheck.m"
          else
#line 1249 "typecheck.m"
            if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1249 "typecheck.m"
              {
#line 1249 "typecheck.m"
                MR_Word check_hlds__typecheck__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1249 "typecheck.m"
                MR_Word check_hlds__typecheck__List0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1249 "typecheck.m"
                MR_Word check_hlds__typecheck__List_13;

#line 1253 "typecheck.m"
                {
#line 1253 "typecheck.m"
                  check_hlds__typecheck__typecheck_goal_list_4_p_0(check_hlds__typecheck__List0_11, &check_hlds__typecheck__List_13, check_hlds__typecheck__STATE_VARIABLE_Info_0_103, check_hlds__typecheck__STATE_VARIABLE_Info_104);
                }
#line 1254 "typecheck.m"
                {
#line 1254 "typecheck.m"
                  MR_Word base;
#line 1254 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1254 "typecheck.m"
                  *check_hlds__typecheck__GoalExpr_7 = base;
#line 1254 "typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1254 "typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ConjType_10));
#line 1254 "typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__List_13));
#line 1254 "typecheck.m"
                }
#line 1249 "typecheck.m"
              }
#line 1249 "typecheck.m"
            else
#line 1249 "typecheck.m"
              if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1256 "typecheck.m"
                {
#line 1256 "typecheck.m"
                  MR_Word check_hlds__typecheck__List0_209 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1256 "typecheck.m"
                  MR_Word check_hlds__typecheck__List_210;

#line 1260 "typecheck.m"
                  {
#line 1260 "typecheck.m"
                    check_hlds__typecheck__typecheck_goal_list_4_p_0(check_hlds__typecheck__List0_209, &check_hlds__typecheck__List_210, check_hlds__typecheck__STATE_VARIABLE_Info_0_103, check_hlds__typecheck__STATE_VARIABLE_Info_104);
                  }
#line 1261 "typecheck.m"
                  {
#line 1261 "typecheck.m"
                    MR_Word base;
#line 1261 "typecheck.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "typecheck.m"
                    *check_hlds__typecheck__GoalExpr_7 = base;
#line 1261 "typecheck.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1261 "typecheck.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__List_210));
#line 1261 "typecheck.m"
                  }
#line 1256 "typecheck.m"
                }
#line 1249 "typecheck.m"
              else
#line 1249 "typecheck.m"
                if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1327 "typecheck.m"
                  {
#line 1327 "typecheck.m"
                    MR_Word check_hlds__typecheck__GenericCall0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1327 "typecheck.m"
                    MR_Word check_hlds__typecheck__Modes_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 3)));
#line 1327 "typecheck.m"
                    MR_Word check_hlds__typecheck__MaybeArgRegs_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 4)));
#line 1327 "typecheck.m"
                    MR_Word check_hlds__typecheck__Detism_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 5)));
#line 1327 "typecheck.m"
                    MR_Word check_hlds__typecheck__CallId_54;
#line 1327 "typecheck.m"
                    MR_Word check_hlds__typecheck__GenericCall_59;
#line 1327 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_158_158;
#line 1327 "typecheck.m"
                    MR_Word check_hlds__typecheck__Args_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));

#line 1328 "typecheck.m"
                    {
#line 1328 "typecheck.m"
                      hlds__hlds_goal__generic_call_id_2_p_0(check_hlds__typecheck__GenericCall0_50, &check_hlds__typecheck__CallId_54);
                    }
#line 1329 "typecheck.m"
                    {
#line 1329 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_set_called_predid_3_p_0(check_hlds__typecheck__CallId_54, check_hlds__typecheck__STATE_VARIABLE_Info_0_103, &check_hlds__typecheck__STATE_VARIABLE_Info_158_158);
                    }
#line 1337 "typecheck.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck__GenericCall0_50)) == (MR_mktag((MR_Integer) 3))))
#line 1348 "typecheck.m"
                      {
#line 1351 "typecheck.m"
                        check_hlds__typecheck__GenericCall_59 = check_hlds__typecheck__GenericCall0_50;
#line 1351 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_104 = check_hlds__typecheck__STATE_VARIABLE_Info_158_158;
#line 1348 "typecheck.m"
                      }
#line 1337 "typecheck.m"
                    else
#line 1337 "typecheck.m"
                      if (((MR_tag((MR_Word) check_hlds__typecheck__GenericCall0_50)) == (MR_mktag((MR_Integer) 1))))
#line 1338 "typecheck.m"
                        {
#line 1339 "typecheck.m"
                          {
#line 1339 "typecheck.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_2\'/5", (MR_String) "unexpected class method call");
#line 1339 "typecheck.m"
                            return;
                          }
#line 1338 "typecheck.m"
                        }
#line 1337 "typecheck.m"
                      else
#line 1337 "typecheck.m"
                        if (((MR_tag((MR_Word) check_hlds__typecheck__GenericCall0_50)) == (MR_mktag((MR_Integer) 2))))
#line 1341 "typecheck.m"
                          {
#line 1341 "typecheck.m"
                            MR_String check_hlds__typecheck__EventName_64 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GenericCall0_50, (MR_Integer) 0)));

#line 1342 "typecheck.m"
                            check_hlds__typecheck__GenericCall_59 = check_hlds__typecheck__GenericCall0_50;
#line 1346 "typecheck.m"
                            {
#line 1346 "typecheck.m"
                              check_hlds__typecheck__typecheck_event_call_4_p_0(check_hlds__typecheck__EventName_64, check_hlds__typecheck__Args_216, check_hlds__typecheck__STATE_VARIABLE_Info_158_158, check_hlds__typecheck__STATE_VARIABLE_Info_104);
                            }
#line 1341 "typecheck.m"
                          }
#line 1337 "typecheck.m"
                        else
#line 1331 "typecheck.m"
                          {
#line 1331 "typecheck.m"
                            MR_Word check_hlds__typecheck__PredVar_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall0_50, (MR_Integer) 0)));
#line 1331 "typecheck.m"
                            MR_Word check_hlds__typecheck__Purity_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall0_50, (MR_Integer) 1)));
#line 1331 "typecheck.m"
                            MR_Word check_hlds__typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall0_50, (MR_Integer) 2)));
#line 1331 "typecheck.m"
                            MR_Integer check_hlds__typecheck__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall0_50, (MR_Integer) 3)));

#line 1332 "typecheck.m"
                            check_hlds__typecheck__GenericCall_59 = check_hlds__typecheck__GenericCall0_50;
#line 1336 "typecheck.m"
                            {
#line 1336 "typecheck.m"
                              check_hlds__typecheck__typecheck_higher_order_call_5_p_0(check_hlds__typecheck__PredVar_55, check_hlds__typecheck__Purity_56, check_hlds__typecheck__Args_216, check_hlds__typecheck__STATE_VARIABLE_Info_158_158, check_hlds__typecheck__STATE_VARIABLE_Info_104);
                            }
#line 1331 "typecheck.m"
                          }
#line 1353 "typecheck.m"
                    {
#line 1353 "typecheck.m"
                      MR_Word base;
#line 1353 "typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "typecheck.m"
                      *check_hlds__typecheck__GoalExpr_7 = base;
#line 1353 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1353 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__GenericCall_59));
#line 1353 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__Args_216));
#line 1353 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__typecheck__Modes_51));
#line 1353 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__typecheck__MaybeArgRegs_52));
#line 1353 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (check_hlds__typecheck__Detism_53));
#line 1353 "typecheck.m"
                    }
#line 1327 "typecheck.m"
                  }
#line 1249 "typecheck.m"
                else
#line 1249 "typecheck.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1263 "typecheck.m"
                    {
#line 1263 "typecheck.m"
                      MR_Word check_hlds__typecheck__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1263 "typecheck.m"
                      MR_Word check_hlds__typecheck__Cond0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1263 "typecheck.m"
                      MR_Word check_hlds__typecheck__Then0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 3)));
#line 1263 "typecheck.m"
                      MR_Word check_hlds__typecheck__Else0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 4)));
#line 1263 "typecheck.m"
                      MR_Word check_hlds__typecheck__Cond_18;
#line 1263 "typecheck.m"
                      MR_Word check_hlds__typecheck__Then_19;
#line 1263 "typecheck.m"
                      MR_Word check_hlds__typecheck__Else_20;
#line 1263 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_191_191;
#line 1263 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_195_195;
#line 1263 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_199_199;

#line 1267 "typecheck.m"
                      {
#line 1267 "typecheck.m"
                        check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Cond0_15, &check_hlds__typecheck__Cond_18, check_hlds__typecheck__STATE_VARIABLE_Info_0_103, &check_hlds__typecheck__STATE_VARIABLE_Info_191_191);
                      }
#line 1271 "typecheck.m"
                      {
#line 1271 "typecheck.m"
                        check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Then0_16, &check_hlds__typecheck__Then_19, check_hlds__typecheck__STATE_VARIABLE_Info_191_191, &check_hlds__typecheck__STATE_VARIABLE_Info_195_195);
                      }
#line 1275 "typecheck.m"
                      {
#line 1275 "typecheck.m"
                        check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Else0_17, &check_hlds__typecheck__Else_20, check_hlds__typecheck__STATE_VARIABLE_Info_195_195, &check_hlds__typecheck__STATE_VARIABLE_Info_199_199);
                      }
#line 1276 "typecheck.m"
                      {
#line 1276 "typecheck.m"
                        check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__Vars_14, check_hlds__typecheck__STATE_VARIABLE_Info_199_199, check_hlds__typecheck__STATE_VARIABLE_Info_104);
                      }
#line 1277 "typecheck.m"
                      {
#line 1277 "typecheck.m"
                        MR_Word base;
#line 1277 "typecheck.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1277 "typecheck.m"
                        *check_hlds__typecheck__GoalExpr_7 = base;
#line 1277 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1277 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Vars_14));
#line 1277 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__Cond_18));
#line 1277 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__typecheck__Then_19));
#line 1277 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__typecheck__Else_20));
#line 1277 "typecheck.m"
                      }
#line 1263 "typecheck.m"
                    }
#line 1249 "typecheck.m"
                  else
#line 1249 "typecheck.m"
                    if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1286 "typecheck.m"
                      {
#line 1286 "typecheck.m"
                        MR_Word check_hlds__typecheck__Reason_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1286 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_180_180;
#line 1286 "typecheck.m"
                        MR_Word check_hlds__typecheck__SubGoal0_214 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1286 "typecheck.m"
                        MR_Word check_hlds__typecheck__SubGoal_215;

#line 1290 "typecheck.m"
                        {
#line 1290 "typecheck.m"
                          check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__SubGoal0_214, &check_hlds__typecheck__SubGoal_215, check_hlds__typecheck__STATE_VARIABLE_Info_0_103, &check_hlds__typecheck__STATE_VARIABLE_Info_180_180);
                        }
#line 1303 "typecheck.m"
                        if (((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 0))))
#line 1301 "typecheck.m"
                          {
#line 1301 "typecheck.m"
                            MR_Word check_hlds__typecheck__Vars_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Reason_23, (MR_Integer) 0)));

#line 1302 "typecheck.m"
                            {
#line 1302 "typecheck.m"
                              check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__Vars_211, check_hlds__typecheck__STATE_VARIABLE_Info_180_180, check_hlds__typecheck__STATE_VARIABLE_Info_104);
                            }
#line 1301 "typecheck.m"
                          }
#line 1303 "typecheck.m"
                        else
#line 1303 "typecheck.m"
                          if (((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 2))))
#line 1304 "typecheck.m"
                            *check_hlds__typecheck__STATE_VARIABLE_Info_104 = check_hlds__typecheck__STATE_VARIABLE_Info_180_180;
#line 1303 "typecheck.m"
                          else
#line 1303 "typecheck.m"
                            if (((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 1))))
#line 1301 "typecheck.m"
                              {
#line 1301 "typecheck.m"
                                MR_Word check_hlds__typecheck__Vars_264 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Reason_23, (MR_Integer) 0)));
#line 1294 "typecheck.m"
                                MR_Word check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Reason_23, (MR_Integer) 1)));

#line 1302 "typecheck.m"
                                {
#line 1302 "typecheck.m"
                                  check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__Vars_264, check_hlds__typecheck__STATE_VARIABLE_Info_180_180, check_hlds__typecheck__STATE_VARIABLE_Info_104);
                                }
#line 1301 "typecheck.m"
                              }
#line 1303 "typecheck.m"
                            else
#line 1303 "typecheck.m"
                              if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1308 "typecheck.m"
                                *check_hlds__typecheck__STATE_VARIABLE_Info_104 = check_hlds__typecheck__STATE_VARIABLE_Info_180_180;
#line 1303 "typecheck.m"
                              else
#line 1303 "typecheck.m"
                                if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1307 "typecheck.m"
                                  *check_hlds__typecheck__STATE_VARIABLE_Info_104 = check_hlds__typecheck__STATE_VARIABLE_Info_180_180;
#line 1303 "typecheck.m"
                                else
#line 1303 "typecheck.m"
                                  if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1309 "typecheck.m"
                                    *check_hlds__typecheck__STATE_VARIABLE_Info_104 = check_hlds__typecheck__STATE_VARIABLE_Info_180_180;
#line 1303 "typecheck.m"
                                  else
#line 1303 "typecheck.m"
                                    if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1301 "typecheck.m"
                                      {
#line 1301 "typecheck.m"
                                        MR_Word check_hlds__typecheck__LCVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 1)));
#line 1301 "typecheck.m"
                                        MR_Word check_hlds__typecheck__LCSVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 2)));
#line 1301 "typecheck.m"
                                        MR_Word check_hlds__typecheck__V_181_181;
#line 1301 "typecheck.m"
                                        MR_Word check_hlds__typecheck__Vars_263;
#line 1299 "typecheck.m"
                                        MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 3)));

#line 1300 "typecheck.m"
                                        {
#line 1300 "typecheck.m"
                                          check_hlds__typecheck__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_181_181, 0) = ((MR_Box) (check_hlds__typecheck__LCSVar_26));
#line 1300 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1300 "typecheck.m"
                                        }
#line 1300 "typecheck.m"
                                        {
#line 1300 "typecheck.m"
                                          check_hlds__typecheck__Vars_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_263, 0) = ((MR_Box) (check_hlds__typecheck__LCVar_25));
#line 1300 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_263, 1) = ((MR_Box) (check_hlds__typecheck__V_181_181));
#line 1300 "typecheck.m"
                                        }
#line 1302 "typecheck.m"
                                        {
#line 1302 "typecheck.m"
                                          check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__Vars_263, check_hlds__typecheck__STATE_VARIABLE_Info_180_180, check_hlds__typecheck__STATE_VARIABLE_Info_104);
                                        }
#line 1301 "typecheck.m"
                                      }
#line 1303 "typecheck.m"
                                    else
#line 1303 "typecheck.m"
                                      if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1306 "typecheck.m"
                                        *check_hlds__typecheck__STATE_VARIABLE_Info_104 = check_hlds__typecheck__STATE_VARIABLE_Info_180_180;
#line 1303 "typecheck.m"
                                      else
#line 1303 "typecheck.m"
                                        if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1305 "typecheck.m"
                                          *check_hlds__typecheck__STATE_VARIABLE_Info_104 = check_hlds__typecheck__STATE_VARIABLE_Info_180_180;
#line 1303 "typecheck.m"
                                        else
#line 1310 "typecheck.m"
                                          *check_hlds__typecheck__STATE_VARIABLE_Info_104 = check_hlds__typecheck__STATE_VARIABLE_Info_180_180;
#line 1313 "typecheck.m"
                        {
#line 1313 "typecheck.m"
                          MR_Word base;
#line 1313 "typecheck.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "typecheck.m"
                          *check_hlds__typecheck__GoalExpr_7 = base;
#line 1313 "typecheck.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1313 "typecheck.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Reason_23));
#line 1313 "typecheck.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_215));
#line 1313 "typecheck.m"
                        }
#line 1286 "typecheck.m"
                      }
#line 1249 "typecheck.m"
                    else
#line 1249 "typecheck.m"
                      if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1380 "typecheck.m"
                        {
#line 1380 "typecheck.m"
                          MR_Word check_hlds__typecheck__ShortHand0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1380 "typecheck.m"
                          MR_Word check_hlds__typecheck__ShortHand_83;

#line 1389 "typecheck.m"
                          if (((MR_tag((MR_Word) check_hlds__typecheck__ShortHand0_81)) == (MR_mktag((MR_Integer) 1))))
#line 1391 "typecheck.m"
                            {
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__GoalType_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 0)));
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__Outer_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 1)));
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__Inner_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 2)));
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__MaybeOutputVars_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 3)));
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__MainGoal0_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 4)));
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__OrElseGoals0_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 5)));
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__OrElseInners_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 6)));
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__MainGoal_92;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__OrElseGoals_93;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__OuterDI_94;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__OuterUO_95;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__InnerVars_96;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_121_121;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_122_122;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_123_123;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_124_124;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_125_125;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_126_126;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_128_128;
#line 1391 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_135_135;
#line 1416 "typecheck.m"
                              MR_Box check_hlds__typecheck__conv2_STATE_VARIABLE_Info_104;

#line 1398 "typecheck.m"
                              if ((check_hlds__typecheck__MaybeOutputVars_87 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1399 "typecheck.m"
                                check_hlds__typecheck__STATE_VARIABLE_Info_121_121 = check_hlds__typecheck__STATE_VARIABLE_Info_0_103;
#line 1398 "typecheck.m"
                              else
#line 1396 "typecheck.m"
                                {
#line 1396 "typecheck.m"
                                  MR_Word check_hlds__typecheck__OutputVars_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOutputVars_87, (MR_Integer) 0)));

#line 1397 "typecheck.m"
                                  {
#line 1397 "typecheck.m"
                                    check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__OutputVars_91, check_hlds__typecheck__STATE_VARIABLE_Info_0_103, &check_hlds__typecheck__STATE_VARIABLE_Info_121_121);
                                  }
#line 1396 "typecheck.m"
                                }
#line 1402 "typecheck.m"
                              {
#line 1402 "typecheck.m"
                                check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__MainGoal0_88, &check_hlds__typecheck__MainGoal_92, check_hlds__typecheck__STATE_VARIABLE_Info_121_121, &check_hlds__typecheck__STATE_VARIABLE_Info_122_122);
                              }
#line 1403 "typecheck.m"
                              {
#line 1403 "typecheck.m"
                                check_hlds__typecheck__typecheck_goal_list_4_p_0(check_hlds__typecheck__OrElseGoals0_89, &check_hlds__typecheck__OrElseGoals_93, check_hlds__typecheck__STATE_VARIABLE_Info_122_122, &check_hlds__typecheck__STATE_VARIABLE_Info_123_123);
                              }
#line 1405 "typecheck.m"
                              check_hlds__typecheck__OuterDI_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_85, (MR_Integer) 0)));
#line 1405 "typecheck.m"
                              check_hlds__typecheck__OuterUO_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_85, (MR_Integer) 1)));
#line 1406 "typecheck.m"
                              {
#line 1406 "typecheck.m"
                                check_hlds__typecheck__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_126_126, 0) = ((MR_Box) (check_hlds__typecheck__OuterUO_95));
#line 1406 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1406 "typecheck.m"
                              }
#line 1406 "typecheck.m"
                              {
#line 1406 "typecheck.m"
                                check_hlds__typecheck__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_124_124, 0) = ((MR_Box) (check_hlds__typecheck__OuterDI_94));
#line 1406 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_124_124, 1) = ((MR_Box) (check_hlds__typecheck__V_126_126));
#line 1406 "typecheck.m"
                              }
#line 1406 "typecheck.m"
                              {
#line 1406 "typecheck.m"
                                check_hlds__typecheck__ensure_vars_have_a_single_type_3_p_0(check_hlds__typecheck__V_124_124, check_hlds__typecheck__STATE_VARIABLE_Info_123_123, &check_hlds__typecheck__STATE_VARIABLE_Info_125_125);
                              }
#line 1415 "typecheck.m"
                              {
#line 1415 "typecheck.m"
                                check_hlds__typecheck__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_128_128, 0) = ((MR_Box) (check_hlds__typecheck__Inner_86));
#line 1415 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_128_128, 1) = ((MR_Box) (check_hlds__typecheck__OrElseInners_90));
#line 1415 "typecheck.m"
                              }
#line 1414 "typecheck.m"
                              {
#line 1414 "typecheck.m"
                                check_hlds__typecheck__InnerVars_96 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(check_hlds__typecheck__V_128_128);
                              }
#line 1416 "typecheck.m"
                              {
#line 1416 "typecheck.m"
                                mercury__list__foldl_4_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[2], check_hlds__typecheck__InnerVars_96, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_125_125)), &check_hlds__typecheck__conv2_STATE_VARIABLE_Info_104);
                              }
#line 1416 "typecheck.m"
                              *check_hlds__typecheck__STATE_VARIABLE_Info_104 = ((MR_Word) check_hlds__typecheck__conv2_STATE_VARIABLE_Info_104);
#line 1419 "typecheck.m"
                              {
#line 1419 "typecheck.m"
                                check_hlds__typecheck__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1419 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_135_135, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[3]));
#line 1419 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_135_135, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_2_5_p_0_3));
#line 1419 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_135_135, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1419 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_135_135, 3) = ((MR_Box) (check_hlds__typecheck__GoalType_84));
#line 1419 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_135_135, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1419 "typecheck.m"
                              }
#line 1419 "typecheck.m"
                              {
#line 1419 "typecheck.m"
                                mercury__require__expect_4_p_0(check_hlds__typecheck__V_135_135, (MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_2\'/5", (MR_String) "GoalType != unknown_atomic_goal_type");
                              }
#line 1421 "typecheck.m"
                              {
#line 1421 "typecheck.m"
                                check_hlds__typecheck__ShortHand_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_83, 0) = ((MR_Box) (check_hlds__typecheck__GoalType_84));
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_83, 1) = ((MR_Box) (check_hlds__typecheck__Outer_85));
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_83, 2) = ((MR_Box) (check_hlds__typecheck__Inner_86));
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_83, 3) = ((MR_Box) (check_hlds__typecheck__MaybeOutputVars_87));
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_83, 4) = ((MR_Box) (check_hlds__typecheck__MainGoal_92));
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_83, 5) = ((MR_Box) (check_hlds__typecheck__OrElseGoals_93));
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_83, 6) = ((MR_Box) (check_hlds__typecheck__OrElseInners_90));
#line 1421 "typecheck.m"
                              }
#line 1391 "typecheck.m"
                            }
#line 1389 "typecheck.m"
                          else
#line 1389 "typecheck.m"
                            if (((MR_tag((MR_Word) check_hlds__typecheck__ShortHand0_81)) == (MR_mktag((MR_Integer) 0))))
#line 1382 "typecheck.m"
                              {
#line 1382 "typecheck.m"
                                MR_Word check_hlds__typecheck__LHS0_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 0)));
#line 1382 "typecheck.m"
                                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_143_143;
#line 1382 "typecheck.m"
                                MR_Word check_hlds__typecheck__LHS_221;
#line 1382 "typecheck.m"
                                MR_Word check_hlds__typecheck__RHS0_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 1)));
#line 1382 "typecheck.m"
                                MR_Word check_hlds__typecheck__RHS_223;

#line 1386 "typecheck.m"
                                {
#line 1386 "typecheck.m"
                                  check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__LHS0_82, &check_hlds__typecheck__LHS_221, check_hlds__typecheck__STATE_VARIABLE_Info_0_103, &check_hlds__typecheck__STATE_VARIABLE_Info_143_143);
                                }
#line 1387 "typecheck.m"
                                {
#line 1387 "typecheck.m"
                                  check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__RHS0_222, &check_hlds__typecheck__RHS_223, check_hlds__typecheck__STATE_VARIABLE_Info_143_143, check_hlds__typecheck__STATE_VARIABLE_Info_104);
                                }
#line 1388 "typecheck.m"
                                {
#line 1388 "typecheck.m"
                                  check_hlds__typecheck__ShortHand_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1388 "typecheck.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_83, 0) = ((MR_Box) (check_hlds__typecheck__LHS_221));
#line 1388 "typecheck.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_83, 1) = ((MR_Box) (check_hlds__typecheck__RHS_223));
#line 1388 "typecheck.m"
                                }
#line 1382 "typecheck.m"
                              }
#line 1389 "typecheck.m"
                            else
#line 1424 "typecheck.m"
                              {
#line 1424 "typecheck.m"
                                MR_Word check_hlds__typecheck__MaybeIO_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 0)));
#line 1424 "typecheck.m"
                                MR_Word check_hlds__typecheck__ResultVar_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 1)));
#line 1424 "typecheck.m"
                                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_108_108;
#line 1424 "typecheck.m"
                                MR_Word check_hlds__typecheck__SubGoal0_227 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_81, (MR_Integer) 2)));
#line 1424 "typecheck.m"
                                MR_Word check_hlds__typecheck__SubGoal_228;

#line 1428 "typecheck.m"
                                {
#line 1428 "typecheck.m"
                                  check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__SubGoal0_227, &check_hlds__typecheck__SubGoal_228, check_hlds__typecheck__STATE_VARIABLE_Info_0_103, &check_hlds__typecheck__STATE_VARIABLE_Info_108_108);
                                }
#line 1434 "typecheck.m"
                                if ((check_hlds__typecheck__MaybeIO_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1435 "typecheck.m"
                                  *check_hlds__typecheck__STATE_VARIABLE_Info_104 = check_hlds__typecheck__STATE_VARIABLE_Info_108_108;
#line 1434 "typecheck.m"
                                else
#line 1430 "typecheck.m"
                                  {
#line 1430 "typecheck.m"
                                    MR_Word check_hlds__typecheck__InitialIO_101;
#line 1430 "typecheck.m"
                                    MR_Word check_hlds__typecheck__FinalIO_102;
#line 1430 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeIO_99, (MR_Integer) 0)));
#line 1430 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_110_110;
#line 1430 "typecheck.m"
                                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_111_111;
#line 1430 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_112_112;
#line 1430 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_114_114;
#line 1430 "typecheck.m"
                                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_115_115;
#line 1430 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_116_116;

#line 1430 "typecheck.m"
                                    check_hlds__typecheck__InitialIO_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_109_109, (MR_Integer) 0)));
#line 1430 "typecheck.m"
                                    check_hlds__typecheck__FinalIO_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_109_109, (MR_Integer) 1)));
#line 1431 "typecheck.m"
                                    {
#line 1431 "typecheck.m"
                                      check_hlds__typecheck__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_112_112, 0) = ((MR_Box) (check_hlds__typecheck__FinalIO_102));
#line 1431 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1431 "typecheck.m"
                                    }
#line 1431 "typecheck.m"
                                    {
#line 1431 "typecheck.m"
                                      check_hlds__typecheck__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_110_110, 0) = ((MR_Box) (check_hlds__typecheck__InitialIO_101));
#line 1431 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_110_110, 1) = ((MR_Box) (check_hlds__typecheck__V_112_112));
#line 1431 "typecheck.m"
                                    }
#line 1431 "typecheck.m"
                                    {
#line 1431 "typecheck.m"
                                      check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__V_110_110, check_hlds__typecheck__STATE_VARIABLE_Info_108_108, &check_hlds__typecheck__STATE_VARIABLE_Info_111_111);
                                    }
#line 1432 "typecheck.m"
                                    {
#line 1432 "typecheck.m"
                                      check_hlds__typecheck__V_114_114 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                                    }
#line 1432 "typecheck.m"
                                    {
#line 1432 "typecheck.m"
                                      check_hlds__typecheck__typecheck_var_has_type_4_p_0(check_hlds__typecheck__InitialIO_101, check_hlds__typecheck__V_114_114, check_hlds__typecheck__STATE_VARIABLE_Info_111_111, &check_hlds__typecheck__STATE_VARIABLE_Info_115_115);
                                    }
#line 1433 "typecheck.m"
                                    {
#line 1433 "typecheck.m"
                                      check_hlds__typecheck__V_116_116 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                                    }
#line 1433 "typecheck.m"
                                    {
#line 1433 "typecheck.m"
                                      check_hlds__typecheck__typecheck_var_has_type_4_p_0(check_hlds__typecheck__FinalIO_102, check_hlds__typecheck__V_116_116, check_hlds__typecheck__STATE_VARIABLE_Info_115_115, check_hlds__typecheck__STATE_VARIABLE_Info_104);
                                    }
#line 1430 "typecheck.m"
                                  }
#line 1437 "typecheck.m"
                                {
#line 1437 "typecheck.m"
                                  check_hlds__typecheck__ShortHand_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "typecheck.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_83, 0) = ((MR_Box) (check_hlds__typecheck__MaybeIO_99));
#line 1437 "typecheck.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_83, 1) = ((MR_Box) (check_hlds__typecheck__ResultVar_100));
#line 1437 "typecheck.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_83, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_228));
#line 1437 "typecheck.m"
                                }
#line 1424 "typecheck.m"
                              }
#line 1439 "typecheck.m"
                          {
#line 1439 "typecheck.m"
                            MR_Word base;
#line 1439 "typecheck.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "typecheck.m"
                            *check_hlds__typecheck__GoalExpr_7 = base;
#line 1439 "typecheck.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1439 "typecheck.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ShortHand_83));
#line 1439 "typecheck.m"
                          }
#line 1380 "typecheck.m"
                        }
#line 1249 "typecheck.m"
                      else
#line 1365 "typecheck.m"
                        {
#line 1366 "typecheck.m"
                          {
#line 1366 "typecheck.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_2\'/5", (MR_String) "switch");
#line 1366 "typecheck.m"
                            return;
                          }
#line 1365 "typecheck.m"
                        }
#line 1249 "typecheck.m"
  }
#line 1244 "typecheck.m"
}

#line 1189 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_4_p_0(
#line 1189 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_5,
#line 1189 "typecheck.m"
  MR_Word * check_hlds__typecheck__Goal_6,
#line 1189 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1189 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 1189 "typecheck.m"
{
#line 1192 "typecheck.m"
  {
#line 1192 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_5, (MR_Integer) 0)));
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_5, (MR_Integer) 1)));
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_10;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyContext_11;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo_13;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet_14;
#line 1192 "typecheck.m"
    MR_Integer check_hlds__typecheck__Count_15;
#line 1192 "typecheck.m"
    MR_Integer check_hlds__typecheck__WarnLimit_16;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr_19;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_25_25;
#line 1192 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_62_62;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__V_63_63;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__V_64_64;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__V_65_65;
#line 1192 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_66_66;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__V_67_67;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__V_68_68;
#line 1192 "typecheck.m"
    MR_Word check_hlds__typecheck__V_69_69;
#line 1204 "typecheck.m"
    MR_Word check_hlds__typecheck__V_47_47;
#line 1204 "typecheck.m"
    MR_Word check_hlds__typecheck__V_48_48;
#line 1204 "typecheck.m"
    MR_Word check_hlds__typecheck__V_49_49;
#line 1204 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_50_50;
#line 1204 "typecheck.m"
    MR_Word check_hlds__typecheck__V_51_51;
#line 1204 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52;
#line 1204 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_53_53;
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__V_55_55;
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 1217 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_57_57;
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__V_58_58;
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__V_59_59;
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;

#line 1194 "typecheck.m"
    {
#line 1194 "typecheck.m"
      check_hlds__typecheck__Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo0_9);
    }
#line 1195 "typecheck.m"
    {
#line 1195 "typecheck.m"
      mercury__term__context_init_1_p_0(&check_hlds__typecheck__EmptyContext_11);
    }
#line 1197 "typecheck.m"
    check_hlds__typecheck__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 1197 "typecheck.m"
    check_hlds__typecheck__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 1197 "typecheck.m"
    check_hlds__typecheck__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 1197 "typecheck.m"
    check_hlds__typecheck__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 1197 "typecheck.m"
    check_hlds__typecheck__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
#line 1197 "typecheck.m"
    check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
#line 1197 "typecheck.m"
    check_hlds__typecheck__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
#line 1197 "typecheck.m"
    check_hlds__typecheck__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
#line 1196 "typecheck.m"
    {
#line 1196 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck__Context_10, check_hlds__typecheck__EmptyContext_11);
    }
#line 1199 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1197 "typecheck.m"
      {
#line 1198 "typecheck.m"
        {
#line 1198 "typecheck.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__typecheck__V_65_65, check_hlds__typecheck__GoalInfo0_9, &check_hlds__typecheck__GoalInfo_13);
        }
#line 1198 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_Info_25_25 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 1197 "typecheck.m"
      }
#line 1199 "typecheck.m"
    else
#line 1200 "typecheck.m"
      {
#line 1200 "typecheck.m"
        check_hlds__typecheck__GoalInfo_13 = check_hlds__typecheck__GoalInfo0_9;
#line 1201 "typecheck.m"
        {
#line 1201 "typecheck.m"
          check_hlds__typecheck__STATE_VARIABLE_Info_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1201 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 0) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 1201 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 1) = ((MR_Box) (check_hlds__typecheck__V_68_68));
#line 1201 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 2) = ((MR_Box) (check_hlds__typecheck__V_67_67));
#line 1201 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 3) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 1201 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 4) = ((MR_Box) (check_hlds__typecheck__Context_10));
#line 1201 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 5) = ((MR_Box) (check_hlds__typecheck__V_64_64));
#line 1201 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 6) = ((MR_Box) (check_hlds__typecheck__V_63_63));
#line 1201 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 7) = ((MR_Box) (check_hlds__typecheck__V_62_62));
#line 1201 "typecheck.m"
        }
#line 1200 "typecheck.m"
      }
#line 1204 "typecheck.m"
    check_hlds__typecheck__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1204 "typecheck.m"
    check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 1204 "typecheck.m"
    check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1204 "typecheck.m"
    check_hlds__typecheck__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1204 "typecheck.m"
    check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1204 "typecheck.m"
    check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1204 "typecheck.m"
    check_hlds__typecheck__TypeAssignSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1204 "typecheck.m"
    check_hlds__typecheck__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1205 "typecheck.m"
    {
#line 1205 "typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0, check_hlds__typecheck__TypeAssignSet_14, &check_hlds__typecheck__Count_15);
    }
#line 1217 "typecheck.m"
    check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1217 "typecheck.m"
    check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 1217 "typecheck.m"
    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1217 "typecheck.m"
    check_hlds__typecheck__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1217 "typecheck.m"
    check_hlds__typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1217 "typecheck.m"
    check_hlds__typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1217 "typecheck.m"
    check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1217 "typecheck.m"
    check_hlds__typecheck__WarnLimit_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1218 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Count_15 > check_hlds__typecheck__WarnLimit_16);
#line 1239 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1219 "typecheck.m"
      {
#line 1219 "typecheck.m"
        MR_Integer check_hlds__typecheck__ErrorLimit_17;

#line 1219 "typecheck.m"
        {
#line 1219 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_25_25, &check_hlds__typecheck__ErrorLimit_17);
        }
#line 1220 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Count_15 > check_hlds__typecheck__ErrorLimit_17);
#line 1228 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1222 "typecheck.m"
          {
#line 1222 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorSpec_18;
#line 1222 "typecheck.m"
            MR_Word check_hlds__typecheck__V_26_26;

#line 1222 "typecheck.m"
            {
#line 1222 "typecheck.m"
              check_hlds__typecheck__ErrorSpec_18 = check_hlds__typecheck_errors__report_error_too_much_overloading_1_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_25_25);
            }
#line 1223 "typecheck.m"
            {
#line 1223 "typecheck.m"
              check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__ErrorSpec_18));
#line 1223 "typecheck.m"
            }
#line 1223 "typecheck.m"
            {
#line 1223 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_26_26, check_hlds__typecheck__STATE_VARIABLE_Info_25_25, check_hlds__typecheck__STATE_VARIABLE_Info_24);
            }
#line 1227 "typecheck.m"
            check_hlds__typecheck__GoalExpr_19 = check_hlds__typecheck__GoalExpr0_8;
#line 1222 "typecheck.m"
          }
#line 1228 "typecheck.m"
        else
#line 1229 "typecheck.m"
          {
#line 1229 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybePrevSpec_20;
#line 1229 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_29_29;

#line 1229 "typecheck.m"
            {
#line 1229 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_25_25, &check_hlds__typecheck__MaybePrevSpec_20);
            }
#line 1234 "typecheck.m"
            if ((check_hlds__typecheck__MaybePrevSpec_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1231 "typecheck.m"
              {
#line 1231 "typecheck.m"
                MR_Word check_hlds__typecheck__WarnSpec_21;
#line 1231 "typecheck.m"
                MR_Word check_hlds__typecheck__V_28_28;

#line 1232 "typecheck.m"
                {
#line 1232 "typecheck.m"
                  check_hlds__typecheck__WarnSpec_21 = check_hlds__typecheck_errors__report_warning_too_much_overloading_1_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_25_25);
                }
#line 1233 "typecheck.m"
                {
#line 1233 "typecheck.m"
                  check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_28_28, 0) = ((MR_Box) (check_hlds__typecheck__WarnSpec_21));
#line 1233 "typecheck.m"
                }
#line 1233 "typecheck.m"
                {
#line 1233 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_28_28, check_hlds__typecheck__STATE_VARIABLE_Info_25_25, &check_hlds__typecheck__STATE_VARIABLE_Info_29_29);
                }
#line 1231 "typecheck.m"
              }
#line 1234 "typecheck.m"
            else
#line 1235 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_29_29 = check_hlds__typecheck__STATE_VARIABLE_Info_25_25;
#line 1237 "typecheck.m"
            {
#line 1237 "typecheck.m"
              check_hlds__typecheck__typecheck_goal_2_5_p_0(check_hlds__typecheck__GoalExpr0_8, &check_hlds__typecheck__GoalExpr_19, check_hlds__typecheck__GoalInfo_13, check_hlds__typecheck__STATE_VARIABLE_Info_29_29, check_hlds__typecheck__STATE_VARIABLE_Info_24);
            }
#line 1229 "typecheck.m"
          }
#line 1219 "typecheck.m"
      }
#line 1239 "typecheck.m"
    else
#line 1240 "typecheck.m"
      {
#line 1240 "typecheck.m"
        check_hlds__typecheck__typecheck_goal_2_5_p_0(check_hlds__typecheck__GoalExpr0_8, &check_hlds__typecheck__GoalExpr_19, check_hlds__typecheck__GoalInfo_13, check_hlds__typecheck__STATE_VARIABLE_Info_25_25, check_hlds__typecheck__STATE_VARIABLE_Info_24);
      }
#line 1242 "typecheck.m"
    {
#line 1242 "typecheck.m"
      MR_Word base;
#line 1242 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "typecheck.m"
      *check_hlds__typecheck__Goal_6 = base;
#line 1242 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_19));
#line 1242 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_13));
#line 1242 "typecheck.m"
    }
#line 1192 "typecheck.m"
  }
#line 1189 "typecheck.m"
}

#line 1124 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_4_p_0(
#line 1124 "typecheck.m"
  MR_Word check_hlds__typecheck__StuffToCheck_5,
#line 1124 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_6,
#line 1124 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1124 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 1124 "typecheck.m"
{
#line 1127 "typecheck.m"
  {
#line 1127 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1127 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
#line 1128 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 1128 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 1128 "typecheck.m"
    MR_Word check_hlds__typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 1128 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 1128 "typecheck.m"
    MR_Word check_hlds__typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
#line 1128 "typecheck.m"
    MR_Word check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
#line 1128 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));

#line 1137 "typecheck.m"
    if ((check_hlds__typecheck__TypeAssignSet_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1135 "typecheck.m"
      {
#line 1136 "typecheck.m"
        {
#line 1136 "typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/4", (MR_String) "no type-assignment");
#line 1136 "typecheck.m"
          return;
        }
#line 1135 "typecheck.m"
      }
#line 1137 "typecheck.m"
    else
#line 1137 "typecheck.m"
      {
#line 1137 "typecheck.m"
        MR_Word check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_8, (MR_Integer) 1)));
#line 1137 "typecheck.m"
        MR_Word check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_8, (MR_Integer) 0)));

#line 1137 "typecheck.m"
        if ((check_hlds__typecheck__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 1137 "typecheck.m"
        else
#line 1140 "typecheck.m"
          {
#line 1140 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_38_38, (MR_Integer) 0)));
#line 1140 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorsSoFar_13;
#line 1140 "typecheck.m"
            MR_Word check_hlds__typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_38_38, (MR_Integer) 1)));

#line 1149 "typecheck.m"
            {
#line 1149 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ErrorsSoFar_13);
            }
#line 1151 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ErrorsSoFar_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1154 "typecheck.m"
              {
#line 1154 "typecheck.m"
                if ((check_hlds__typecheck__StuffToCheck_5 == (MR_Integer) 0))
#line 1155 "typecheck.m"
                  {
#line 1155 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes1_14;
#line 1155 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes2_15;
#line 1155 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings1_16;
#line 1155 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings2_17;
#line 1155 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypes1_18;
#line 1155 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypes2_19;
#line 1155 "typecheck.m"
                    MR_Word check_hlds__typecheck__FinalHeadTypes1_20;
#line 1155 "typecheck.m"
                    MR_Word check_hlds__typecheck__FinalHeadTypes2_21;
#line 974 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_42_42;
#line 975 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_43_43;

#line 1160 "typecheck.m"
                    {
#line 1160 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__V_39_39, &check_hlds__typecheck__VarTypes1_14);
                    }
#line 1161 "typecheck.m"
                    {
#line 1161 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign2_11, &check_hlds__typecheck__VarTypes2_15);
                    }
#line 1162 "typecheck.m"
                    {
#line 1162 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__V_39_39, &check_hlds__typecheck__TypeBindings1_16);
                    }
#line 1163 "typecheck.m"
                    {
#line 1163 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign2_11, &check_hlds__typecheck__TypeBindings2_17);
                    }
#line 1164 "typecheck.m"
                    {
#line 1164 "typecheck.m"
                      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes1_14, check_hlds__typecheck__HeadVars_6, &check_hlds__typecheck__HeadTypes1_18);
                    }
#line 1165 "typecheck.m"
                    {
#line 1165 "typecheck.m"
                      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes2_15, check_hlds__typecheck__HeadVars_6, &check_hlds__typecheck__HeadTypes2_19);
                    }
#line 1166 "typecheck.m"
                    {
#line 1166 "typecheck.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings1_16, check_hlds__typecheck__HeadTypes1_18, &check_hlds__typecheck__FinalHeadTypes1_20);
                    }
#line 1168 "typecheck.m"
                    {
#line 1168 "typecheck.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings2_17, check_hlds__typecheck__HeadTypes2_19, &check_hlds__typecheck__FinalHeadTypes2_21);
                    }
#line 974 "typecheck.m"
                    {
#line 974 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes1_20, check_hlds__typecheck__FinalHeadTypes2_21, &check_hlds__typecheck__V_42_42);
                    }
#line 1155 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 975 "typecheck.m"
                      {
#line 975 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes2_21, check_hlds__typecheck__FinalHeadTypes1_20, &check_hlds__typecheck__V_43_43);
                      }
#line 1155 "typecheck.m"
                  }
#line 1154 "typecheck.m"
                else
#line 1153 "typecheck.m"
                  check_hlds__typecheck__succeeded = MR_TRUE;
#line 1154 "typecheck.m"
              }
#line 1175 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1173 "typecheck.m"
              {
#line 1173 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_22;

#line 1173 "typecheck.m"
                {
#line 1173 "typecheck.m"
                  check_hlds__typecheck__Spec_22 = check_hlds__typecheck_errors__report_ambiguity_error_3_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__V_39_39, check_hlds__typecheck__TypeAssign2_11);
                }
#line 1174 "typecheck.m"
                {
#line 1174 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_22, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
#line 1174 "typecheck.m"
                  return;
                }
#line 1173 "typecheck.m"
              }
#line 1175 "typecheck.m"
            else
#line 1174 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 1140 "typecheck.m"
          }
#line 1137 "typecheck.m"
      }
#line 1127 "typecheck.m"
  }
#line 1124 "typecheck.m"
}

#line 1087 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_6_p_0(
#line 1087 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_7,
#line 1087 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_8,
#line 1087 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_15,
#line 1087 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_16,
#line 1087 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_17,
#line 1087 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_18)
#line 1087 "typecheck.m"
{
#line 1090 "typecheck.m"
  {
#line 1090 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1090 "typecheck.m"
    MR_Word check_hlds__typecheck__Body0_11;
#line 1090 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_12;
#line 1090 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_13;
#line 1090 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_19_19;
#line 1090 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_21_21;
#line 1090 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_22_22;
#line 1090 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_27;
#line 1090 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet_60;
#line 1092 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;
#line 1092 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 1092 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32;
#line 1092 "typecheck.m"
    MR_Word check_hlds__typecheck__V_33_33;
#line 1093 "typecheck.m"
    MR_Word check_hlds__typecheck__V_34_34;
#line 1093 "typecheck.m"
    MR_Word check_hlds__typecheck__V_35_35;
#line 1093 "typecheck.m"
    MR_Word check_hlds__typecheck__V_36_36;
#line 1093 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_37_37;
#line 1093 "typecheck.m"
    MR_Word check_hlds__typecheck__V_39_39;
#line 1093 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 1093 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_41_41;
#line 1093 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38;
#line 1101 "typecheck.m"
    MR_Word check_hlds__typecheck__V_42_42;
#line 1101 "typecheck.m"
    MR_Word check_hlds__typecheck__V_44_44;
#line 1101 "typecheck.m"
    MR_Word check_hlds__typecheck__V_45_45;
#line 1101 "typecheck.m"
    MR_Word check_hlds__typecheck__V_46_46;
#line 1101 "typecheck.m"
    MR_Word check_hlds__typecheck__V_43_43;
#line 1102 "typecheck.m"
    MR_Word check_hlds__typecheck__V_47_47;
#line 1102 "typecheck.m"
    MR_Word check_hlds__typecheck__V_48_48;
#line 1102 "typecheck.m"
    MR_Word check_hlds__typecheck__V_49_49;
#line 1102 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_50_50;
#line 1102 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52;
#line 1102 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_54_54;
#line 1102 "typecheck.m"
    MR_Word check_hlds__typecheck__V_51_51;

#line 1091 "typecheck.m"
    {
#line 1091 "typecheck.m"
      check_hlds__typecheck__Body0_11 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__typecheck__STATE_VARIABLE_Clause_0_15);
    }
#line 1092 "typecheck.m"
    check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 0)));
#line 1092 "typecheck.m"
    check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 1)));
#line 1092 "typecheck.m"
    check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 2)));
#line 1092 "typecheck.m"
    check_hlds__typecheck__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 3)));
#line 1092 "typecheck.m"
    check_hlds__typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 4)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1093 "typecheck.m"
    {
#line 1093 "typecheck.m"
      check_hlds__typecheck__STATE_VARIABLE_Info_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1093 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 0) = ((MR_Box) (check_hlds__typecheck__V_34_34));
#line 1093 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 1) = ((MR_Box) (check_hlds__typecheck__V_35_35));
#line 1093 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 2) = ((MR_Box) (check_hlds__typecheck__V_36_36));
#line 1093 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 3) = ((MR_Box) (check_hlds__typecheck__V_37_37));
#line 1093 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 4) = ((MR_Box) (check_hlds__typecheck__Context_12));
#line 1093 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 5) = ((MR_Box) (check_hlds__typecheck__V_39_39));
#line 1093 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 6) = ((MR_Box) (check_hlds__typecheck__V_40_40));
#line 1093 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 7) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 1093 "typecheck.m"
    }
#line 1096 "typecheck.m"
    {
#line 1096 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(check_hlds__typecheck__HeadVars_7, check_hlds__typecheck__ArgTypes_8, (MR_Integer) 1, check_hlds__typecheck__STATE_VARIABLE_Info_19_19, &check_hlds__typecheck__STATE_VARIABLE_Info_21_21);
    }
#line 1097 "typecheck.m"
    {
#line 1097 "typecheck.m"
      check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Body0_11, &check_hlds__typecheck__Body_13, check_hlds__typecheck__STATE_VARIABLE_Info_21_21, &check_hlds__typecheck__STATE_VARIABLE_Info_22_22);
    }
#line 1101 "typecheck.m"
    check_hlds__typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 0)));
#line 1101 "typecheck.m"
    check_hlds__typecheck__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 1)));
#line 1101 "typecheck.m"
    check_hlds__typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 2)));
#line 1101 "typecheck.m"
    check_hlds__typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 3)));
#line 1101 "typecheck.m"
    check_hlds__typecheck__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 4)));
#line 1101 "typecheck.m"
    {
#line 1101 "typecheck.m"
      MR_Word base;
#line 1101 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1101 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Clause_16 = base;
#line 1101 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_42_42));
#line 1101 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Body_13));
#line 1101 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_44_44));
#line 1101 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_45_45));
#line 1101 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_46_46));
#line 1101 "typecheck.m"
    }
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 0)));
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 1)));
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 2)));
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)));
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 4)));
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 5)));
#line 1102 "typecheck.m"
    check_hlds__typecheck__TypeAssignSet_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 6)));
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 7)));
#line 1102 "typecheck.m"
    {
#line 1102 "typecheck.m"
      check_hlds__typecheck__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__typecheck__V_47_47));
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__typecheck__V_49_49));
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (check_hlds__typecheck__V_50_50));
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (check_hlds__typecheck__Context_12));
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 5) = ((MR_Box) (check_hlds__typecheck__V_52_52));
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_60));
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 7) = ((MR_Box) (check_hlds__typecheck__V_54_54));
#line 1102 "typecheck.m"
    }
#line 1137 "typecheck.m"
    if ((check_hlds__typecheck__TypeAssignSet_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1135 "typecheck.m"
      {
#line 1136 "typecheck.m"
        {
#line 1136 "typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/4", (MR_String) "no type-assignment");
#line 1136 "typecheck.m"
          return;
        }
#line 1135 "typecheck.m"
      }
#line 1137 "typecheck.m"
    else
#line 1137 "typecheck.m"
      {
#line 1137 "typecheck.m"
        MR_Word check_hlds__typecheck__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_60, (MR_Integer) 1)));
#line 1137 "typecheck.m"
        MR_Word check_hlds__typecheck__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_60, (MR_Integer) 0)));

#line 1137 "typecheck.m"
        if ((check_hlds__typecheck__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1138 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_18 = check_hlds__typecheck__STATE_VARIABLE_Info_27_27;
#line 1137 "typecheck.m"
        else
#line 1140 "typecheck.m"
          {
#line 1140 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_88_88, (MR_Integer) 0)));
#line 1140 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorsSoFar_65;
#line 1140 "typecheck.m"
            MR_Word check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_88_88, (MR_Integer) 1)));
#line 1151 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes1_66;
#line 1151 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes2_67;
#line 1151 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeBindings1_68;
#line 1151 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeBindings2_69;
#line 1151 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypes1_70;
#line 1151 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypes2_71;
#line 1151 "typecheck.m"
            MR_Word check_hlds__typecheck__FinalHeadTypes1_72;
#line 1151 "typecheck.m"
            MR_Word check_hlds__typecheck__FinalHeadTypes2_73;
#line 974 "typecheck.m"
            MR_Word check_hlds__typecheck__V_92_92;
#line 975 "typecheck.m"
            MR_Word check_hlds__typecheck__V_93_93;

#line 1149 "typecheck.m"
            {
#line 1149 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_27_27, &check_hlds__typecheck__ErrorsSoFar_65);
            }
#line 1151 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ErrorsSoFar_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1151 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1151 "typecheck.m"
              {
#line 1160 "typecheck.m"
                {
#line 1160 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__V_89_89, &check_hlds__typecheck__VarTypes1_66);
                }
#line 1161 "typecheck.m"
                {
#line 1161 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign2_63, &check_hlds__typecheck__VarTypes2_67);
                }
#line 1162 "typecheck.m"
                {
#line 1162 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__V_89_89, &check_hlds__typecheck__TypeBindings1_68);
                }
#line 1163 "typecheck.m"
                {
#line 1163 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign2_63, &check_hlds__typecheck__TypeBindings2_69);
                }
#line 1164 "typecheck.m"
                {
#line 1164 "typecheck.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes1_66, check_hlds__typecheck__HeadVars_7, &check_hlds__typecheck__HeadTypes1_70);
                }
#line 1165 "typecheck.m"
                {
#line 1165 "typecheck.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes2_67, check_hlds__typecheck__HeadVars_7, &check_hlds__typecheck__HeadTypes2_71);
                }
#line 1166 "typecheck.m"
                {
#line 1166 "typecheck.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings1_68, check_hlds__typecheck__HeadTypes1_70, &check_hlds__typecheck__FinalHeadTypes1_72);
                }
#line 1168 "typecheck.m"
                {
#line 1168 "typecheck.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings2_69, check_hlds__typecheck__HeadTypes2_71, &check_hlds__typecheck__FinalHeadTypes2_73);
                }
#line 974 "typecheck.m"
                {
#line 974 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes1_72, check_hlds__typecheck__FinalHeadTypes2_73, &check_hlds__typecheck__V_92_92);
                }
#line 1151 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 975 "typecheck.m"
                  {
#line 975 "typecheck.m"
                    check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes2_73, check_hlds__typecheck__FinalHeadTypes1_72, &check_hlds__typecheck__V_93_93);
                  }
#line 1151 "typecheck.m"
              }
#line 1175 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1173 "typecheck.m"
              {
#line 1173 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_74;

#line 1173 "typecheck.m"
                {
#line 1173 "typecheck.m"
                  check_hlds__typecheck__Spec_74 = check_hlds__typecheck_errors__report_ambiguity_error_3_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_27_27, check_hlds__typecheck__V_89_89, check_hlds__typecheck__TypeAssign2_63);
                }
#line 1174 "typecheck.m"
                {
#line 1174 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_74, check_hlds__typecheck__STATE_VARIABLE_Info_27_27, check_hlds__typecheck__STATE_VARIABLE_Info_18);
#line 1174 "typecheck.m"
                  return;
                }
#line 1173 "typecheck.m"
              }
#line 1175 "typecheck.m"
            else
#line 1174 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_18 = check_hlds__typecheck__STATE_VARIABLE_Info_27_27;
#line 1140 "typecheck.m"
          }
#line 1137 "typecheck.m"
      }
#line 1090 "typecheck.m"
  }
#line 1087 "typecheck.m"
}

#line 1059 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_6_p_0(
#line 1059 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1059 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1059 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1059 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 1059 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_5,
#line 1059 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_6)
#line 1059 "typecheck.m"
{
#line 1063 "typecheck.m"
  {
#line 1063 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1063 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1063 "typecheck.m"
      {
#line 1063 "typecheck.m"
        *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1063 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_6 = check_hlds__typecheck__STATE_VARIABLE_Info_0_5;
#line 1063 "typecheck.m"
      }
#line 1063 "typecheck.m"
    else
#line 1065 "typecheck.m"
      {
#line 1065 "typecheck.m"
        MR_Word check_hlds__typecheck__Clause0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 1065 "typecheck.m"
        MR_Word check_hlds__typecheck__Clauses0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 1065 "typecheck.m"
        MR_Word check_hlds__typecheck__Clause_16;
#line 1065 "typecheck.m"
        MR_Word check_hlds__typecheck__Clauses_17;
#line 1065 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_21_21;

#line 1066 "typecheck.m"
        {
#line 1066 "typecheck.m"
          check_hlds__typecheck__typecheck_clause_6_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clause0_14, &check_hlds__typecheck__Clause_16, check_hlds__typecheck__STATE_VARIABLE_Info_0_5, &check_hlds__typecheck__STATE_VARIABLE_Info_21_21);
        }
#line 1067 "typecheck.m"
        {
#line 1067 "typecheck.m"
          check_hlds__typecheck__typecheck_clause_list_6_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clauses0_15, &check_hlds__typecheck__Clauses_17, check_hlds__typecheck__STATE_VARIABLE_Info_21_21, check_hlds__typecheck__STATE_VARIABLE_Info_6);
        }
#line 1065 "typecheck.m"
        {
#line 1065 "typecheck.m"
          MR_Word base;
#line 1065 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 1065 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Clause_16));
#line 1065 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Clauses_17));
#line 1065 "typecheck.m"
        }
#line 1065 "typecheck.m"
      }
#line 1063 "typecheck.m"
  }
#line 1059 "typecheck.m"
}

#line 954 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
#line 954 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 954 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 954 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 954 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 954 "typecheck.m"
{
#line 957 "typecheck.m"
  {
#line 957 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 957 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "typecheck.m"
      {
#line 957 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 957 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 957 "typecheck.m"
          {
#line 957 "typecheck.m"
            *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 957 "typecheck.m"
            *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 957 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 957 "typecheck.m"
          }
#line 957 "typecheck.m"
      }
#line 957 "typecheck.m"
    else
#line 959 "typecheck.m"
      {
#line 959 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_16_16;
#line 959 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 959 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintsA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 959 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintB_7;
#line 959 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintsB_8;
#line 959 "typecheck.m"
        MR_Word check_hlds__typecheck__ClassName_11;
#line 959 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypesA_12;
#line 959 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypesB_13;
#line 959 "typecheck.m"
        MR_Word check_hlds__typecheck__TypesA0_14;
#line 959 "typecheck.m"
        MR_Word check_hlds__typecheck__TypesB0_15;
#line 959 "typecheck.m"
        MR_Word check_hlds__typecheck__V_17_17;

#line 958 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 958 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 958 "typecheck.m"
          {
#line 958 "typecheck.m"
            check_hlds__typecheck__ConstraintB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 958 "typecheck.m"
            check_hlds__typecheck__ConstraintsB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 960 "typecheck.m"
            check_hlds__typecheck__ClassName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 0)));
#line 960 "typecheck.m"
            check_hlds__typecheck__ArgTypesA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 1)));
#line 961 "typecheck.m"
            check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 0)));
#line 961 "typecheck.m"
            check_hlds__typecheck__ArgTypesB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 1)));
#line 961 "typecheck.m"
            {
#line 961 "typecheck.m"
              check_hlds__typecheck__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__typecheck__ClassName_11, check_hlds__typecheck__V_17_17);
            }
#line 959 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 959 "typecheck.m"
              {
#line 15505 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 962 "typecheck.m"
                {
#line 962 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__ArgTypesB_13);
                }
#line 959 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 959 "typecheck.m"
                  {
#line 963 "typecheck.m"
                    {
#line 963 "typecheck.m"
                      check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ConstraintsA_6, check_hlds__typecheck__ConstraintsB_8, &check_hlds__typecheck__TypesA0_14, &check_hlds__typecheck__TypesB0_15);
                    }
#line 959 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 959 "typecheck.m"
                      {
#line 964 "typecheck.m"
                        {
#line 964 "typecheck.m"
                          *check_hlds__typecheck__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__TypesA0_14);
                        }
#line 965 "typecheck.m"
                        {
#line 965 "typecheck.m"
                          *check_hlds__typecheck__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesB_13, check_hlds__typecheck__TypesB0_15);
                        }
#line 965 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 959 "typecheck.m"
                      }
#line 959 "typecheck.m"
                  }
#line 959 "typecheck.m"
              }
#line 958 "typecheck.m"
          }
#line 959 "typecheck.m"
      }
#line 957 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 957 "typecheck.m"
  }
#line 954 "typecheck.m"
}

#line 920 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__KindMap_8,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesA_10,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesB_13,
#line 920 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsB_14)
#line 920 "typecheck.m"
{
#line 925 "typecheck.m"
  {
#line 925 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_29_29;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_18_43;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstrainedTypesA_15;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstrainedTypesB_16;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarTypesA_17;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarTypesB_18;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesListA_19;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesListB_20;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 0)));
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCsA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 1)));
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 0)));
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 1)));
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivTypesA_38;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivTypesB_39;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypesA_40;
#line 925 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypesB_41;
#line 974 "typecheck.m"
    MR_Word check_hlds__typecheck__V_46_46;
#line 975 "typecheck.m"
    MR_Word check_hlds__typecheck__V_47_47;

#line 947 "typecheck.m"
    {
#line 947 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36);
    }
#line 925 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 925 "typecheck.m"
      {
#line 948 "typecheck.m"
        {
#line 948 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37);
        }
#line 925 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 925 "typecheck.m"
          {
#line 949 "typecheck.m"
            {
#line 949 "typecheck.m"
              check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36, &check_hlds__typecheck__UnivTypesA_38, &check_hlds__typecheck__UnivTypesB_39);
            }
#line 925 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 925 "typecheck.m"
              {
#line 950 "typecheck.m"
                {
#line 950 "typecheck.m"
                  check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37, &check_hlds__typecheck__ExistTypesA_40, &check_hlds__typecheck__ExistTypesB_41);
                }
#line 925 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 925 "typecheck.m"
                  {
#line 15668 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_18_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 951 "typecheck.m"
                    {
#line 951 "typecheck.m"
                      check_hlds__typecheck__ConstrainedTypesA_15 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesA_40, check_hlds__typecheck__UnivTypesA_38);
                    }
#line 952 "typecheck.m"
                    {
#line 952 "typecheck.m"
                      check_hlds__typecheck__ConstrainedTypesB_16 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesB_41, check_hlds__typecheck__UnivTypesB_39);
                    }
#line 928 "typecheck.m"
                    {
#line 928 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsA_9, &check_hlds__typecheck__ExistQVarTypesA_17);
                    }
#line 929 "typecheck.m"
                    {
#line 929 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsB_12, &check_hlds__typecheck__ExistQVarTypesB_18);
                    }
#line 930 "typecheck.m"
                    check_hlds__typecheck__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15692 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 930 "typecheck.m"
                    {
#line 930 "typecheck.m"
                      check_hlds__typecheck__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesA_15));
#line 930 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__V_24_24));
#line 930 "typecheck.m"
                    }
#line 930 "typecheck.m"
                    {
#line 930 "typecheck.m"
                      check_hlds__typecheck__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesA_10));
#line 930 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__V_23_23));
#line 930 "typecheck.m"
                    }
#line 930 "typecheck.m"
                    {
#line 930 "typecheck.m"
                      check_hlds__typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesA_17));
#line 930 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__typecheck__V_22_22));
#line 930 "typecheck.m"
                    }
#line 930 "typecheck.m"
                    {
#line 930 "typecheck.m"
                      mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__V_21_21, &check_hlds__typecheck__TypesListA_19);
                    }
#line 931 "typecheck.m"
                    check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 931 "typecheck.m"
                    {
#line 931 "typecheck.m"
                      check_hlds__typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_27_27, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesB_16));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 931 "typecheck.m"
                    }
#line 931 "typecheck.m"
                    {
#line 931 "typecheck.m"
                      check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesB_13));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 1) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 931 "typecheck.m"
                    }
#line 931 "typecheck.m"
                    {
#line 931 "typecheck.m"
                      check_hlds__typecheck__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesB_18));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_25_25, 1) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 931 "typecheck.m"
                    }
#line 931 "typecheck.m"
                    {
#line 931 "typecheck.m"
                      mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__V_25_25, &check_hlds__typecheck__TypesListB_20);
                    }
#line 974 "typecheck.m"
                    {
#line 974 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListA_19, check_hlds__typecheck__TypesListB_20, &check_hlds__typecheck__V_46_46);
                    }
#line 925 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 975 "typecheck.m"
                      {
#line 975 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListB_20, check_hlds__typecheck__TypesListA_19, &check_hlds__typecheck__V_47_47);
                      }
#line 925 "typecheck.m"
                  }
#line 925 "typecheck.m"
              }
#line 925 "typecheck.m"
          }
#line 925 "typecheck.m"
      }
#line 925 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 925 "typecheck.m"
  }
#line 920 "typecheck.m"
}

#line 905 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
#line 905 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 905 "typecheck.m"
{
#line 905 "typecheck.m"
  {
#line 905 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 905 "typecheck.m"
    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0, 1);
#line 905 "typecheck.m"
  }
#line 905 "typecheck.m"
}

#line 905 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
#line 905 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 905 "typecheck.m"
{
#line 905 "typecheck.m"
  {
#line 905 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 905 "typecheck.m"
    {
#line 908 "typecheck.m"
      {
#line 908 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_6)), (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3);
      }
#line 907 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
#line 907 "typecheck.m"
      if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded)
#line 907 "typecheck.m"
        {
#line 907 "typecheck.m"
          check_hlds__typecheck__is_head_class_constraint_2_p_0_1(check_hlds__typecheck__env_ptr);
#line 907 "typecheck.m"
          return;
        }
#line 905 "typecheck.m"
    }
#line 905 "typecheck.m"
  }
#line 905 "typecheck.m"
}

#line 905 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
#line 905 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 905 "typecheck.m"
{
#line 905 "typecheck.m"
  {
#line 905 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 905 "typecheck.m"
    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0) == 0)
#line 905 "typecheck.m"
      {
#line 906 "typecheck.m"
        {
#line 906 "typecheck.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__Types_5, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_6, check_hlds__typecheck__is_head_class_constraint_2_p_0_2, check_hlds__typecheck__env_ptr);
        }
#line 905 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_FALSE;
#line 905 "typecheck.m"
      }
#line 905 "typecheck.m"
    else
#line 905 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_TRUE;
#line 905 "typecheck.m"
  }
#line 905 "typecheck.m"
}

#line 901 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
#line 901 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
#line 901 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 901 "typecheck.m"
{
#line 901 "typecheck.m"
  {
#line 901 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s check_hlds__typecheck__env;

#line 901 "typecheck.m"
    (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3 = check_hlds__typecheck__HeadTypeVars_3;
#line 904 "typecheck.m"
    {
#line 904 "typecheck.m"
      MR_Word check_hlds__typecheck___Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));

#line 904 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__Types_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 905 "typecheck.m"
      {
#line 905 "typecheck.m"
        check_hlds__typecheck__is_head_class_constraint_2_p_0_3(&check_hlds__typecheck__env);
      }
#line 905 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
#line 904 "typecheck.m"
      return (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
#line 904 "typecheck.m"
    }
#line 901 "typecheck.m"
  }
#line 901 "typecheck.m"
}

#line 898 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
#line 898 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 898 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 898 "typecheck.m"
{
#line 898 "typecheck.m"
  {
#line 898 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 898 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 898 "typecheck.m"
    {
#line 898 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__is_head_class_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 898 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 898 "typecheck.m"
  }
#line 898 "typecheck.m"
}

#line 885 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
#line 885 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 885 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVarTypes_7,
#line 885 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 885 "typecheck.m"
  MR_Word * check_hlds__typecheck__UnprovenCs_10)
#line 885 "typecheck.m"
{
#line 889 "typecheck.m"
  {
#line 889 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 889 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 889 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 889 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCs_8;
#line 889 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCs_9;
#line 889 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;
#line 898 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;

#line 898 "typecheck.m"
    {
#line 898 "typecheck.m"
      check_hlds__typecheck__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 898 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[1]));
#line 898 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 1) = ((MR_Box) (check_hlds__typecheck__restrict_to_head_vars_4_p_0_1));
#line 898 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 898 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 3) = ((MR_Box) (check_hlds__typecheck__ArgVarTypes_7));
#line 898 "typecheck.m"
    }
#line 898 "typecheck.m"
    {
#line 898 "typecheck.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__typecheck__V_16_16, check_hlds__typecheck__UnivCs0_5, &check_hlds__typecheck__UnivCs_8, check_hlds__typecheck__UnprovenCs_10);
    }
#line 898 "typecheck.m"
    {
#line 898 "typecheck.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__typecheck__V_16_16, check_hlds__typecheck__ExistCs0_6, &check_hlds__typecheck__ExistCs_9, &check_hlds__typecheck__V_11_11);
    }
#line 889 "typecheck.m"
    {
#line 889 "typecheck.m"
      MR_Word base;
#line 889 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 889 "typecheck.m"
      *check_hlds__typecheck__HeadVar__3_3 = base;
#line 889 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__UnivCs_8));
#line 889 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__ExistCs_9));
#line 889 "typecheck.m"
    }
#line 889 "typecheck.m"
  }
#line 885 "typecheck.m"
}

#line 850 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
#line 850 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypeVars_5,
#line 850 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExistQVars_6,
#line 850 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeParams0_7,
#line 850 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadTypeParams_8)
#line 850 "typecheck.m"
{
#line 854 "typecheck.m"
  {
#line 854 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 854 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 854 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVarsSet_9;
#line 854 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadTypeParamsSet_10;
#line 854 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarsSet_11;
#line 854 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQVarsSet_12;
#line 854 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQVars_13;

#line 862 "typecheck.m"
    {
#line 862 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVars_5, &check_hlds__typecheck__ArgTypeVarsSet_9);
    }
#line 863 "typecheck.m"
    {
#line 863 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__HeadTypeParams0_7, &check_hlds__typecheck__HeadTypeParamsSet_10);
    }
#line 864 "typecheck.m"
    {
#line 864 "typecheck.m"
      mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVarsSet_9, check_hlds__typecheck__HeadTypeParamsSet_10, &check_hlds__typecheck__ExistQVarsSet_11);
    }
#line 865 "typecheck.m"
    {
#line 865 "typecheck.m"
      mercury__set__difference_3_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVarsSet_9, check_hlds__typecheck__ExistQVarsSet_11, &check_hlds__typecheck__UnivQVarsSet_12);
    }
#line 866 "typecheck.m"
    {
#line 866 "typecheck.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ExistQVarsSet_11, check_hlds__typecheck__ExistQVars_6);
    }
#line 867 "typecheck.m"
    {
#line 867 "typecheck.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__UnivQVarsSet_12, &check_hlds__typecheck__UnivQVars_13);
    }
#line 875 "typecheck.m"
    {
#line 875 "typecheck.m"
      mercury__list__append_3_p_1(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__UnivQVars_13, check_hlds__typecheck__HeadTypeParams0_7, check_hlds__typecheck__HeadTypeParams_8);
#line 875 "typecheck.m"
      return;
    }
#line 854 "typecheck.m"
  }
#line 850 "typecheck.m"
}

#line 828 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
#line 828 "typecheck.m"
  MR_Word check_hlds__typecheck__Renaming_4,
#line 828 "typecheck.m"
  MR_Word check_hlds__typecheck__Origin0_5,
#line 828 "typecheck.m"
  MR_Word * check_hlds__typecheck__Origin_6)
#line 828 "typecheck.m"
{
#line 844 "typecheck.m"
  {
#line 844 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin0_5)) == (MR_mktag((MR_Integer) 1)));
#line 844 "typecheck.m"
    MR_Word check_hlds__typecheck__MethodName_7;
#line 844 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints0_8;

#line 832 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 832 "typecheck.m"
      {
#line 832 "typecheck.m"
        check_hlds__typecheck__MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Origin0_5, (MR_Integer) 0)));
#line 832 "typecheck.m"
        check_hlds__typecheck__Constraints0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Origin0_5, (MR_Integer) 1)));
#line 834 "typecheck.m"
        {
#line 834 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 0)));
#line 834 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 1)));
#line 834 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceConstraints0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 2)));
#line 834 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassMethodClassContext0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 3)));
#line 834 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceTypes_13;
#line 834 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceConstraints_14;
#line 834 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassMethodClassContext_15;
#line 834 "typecheck.m"
          MR_Word check_hlds__typecheck__Constraints_16;

#line 835 "typecheck.m"
          {
#line 835 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__InstanceTypes0_10, &check_hlds__typecheck__InstanceTypes_13);
          }
#line 837 "typecheck.m"
          {
#line 837 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__InstanceConstraints0_11, &check_hlds__typecheck__InstanceConstraints_14);
          }
#line 839 "typecheck.m"
          {
#line 839 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__ClassMethodClassContext0_12, &check_hlds__typecheck__ClassMethodClassContext_15);
          }
#line 841 "typecheck.m"
          {
#line 841 "typecheck.m"
            check_hlds__typecheck__Constraints_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 841 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 0) = ((MR_Box) (check_hlds__typecheck__ClassId_9));
#line 841 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 1) = ((MR_Box) (check_hlds__typecheck__InstanceTypes_13));
#line 841 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 2) = ((MR_Box) (check_hlds__typecheck__InstanceConstraints_14));
#line 841 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 3) = ((MR_Box) (check_hlds__typecheck__ClassMethodClassContext_15));
#line 841 "typecheck.m"
          }
#line 843 "typecheck.m"
          {
#line 843 "typecheck.m"
            MR_Word base;
#line 843 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "typecheck.m"
            *check_hlds__typecheck__Origin_6 = base;
#line 843 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__MethodName_7));
#line 843 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Constraints_16));
#line 843 "typecheck.m"
          }
#line 834 "typecheck.m"
        }
#line 832 "typecheck.m"
      }
#line 832 "typecheck.m"
    else
#line 845 "typecheck.m"
      *check_hlds__typecheck__Origin_6 = check_hlds__typecheck__Origin0_5;
#line 844 "typecheck.m"
  }
#line 828 "typecheck.m"
}

#line 777 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
#line 777 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_5,
#line 777 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16,
#line 777 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_17,
#line 777 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7)
#line 777 "typecheck.m"
{
#line 782 "typecheck.m"
  {
#line 782 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__VarSet0_9;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__PredPieces_10;
#line 782 "typecheck.m"
    MR_String check_hlds__typecheck__PredName_11;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__StubClause_12;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__VarSet_13;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep_14;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers_15;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_35;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers_36;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__PredNameVar_37;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__UnifyGoal_38;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleName_39;
#line 782 "typecheck.m"
    MR_String check_hlds__typecheck__CalleeName_40;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_41;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__CallGoal_42;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo_43;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_44;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__V_49_49;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__V_58_58;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;
#line 782 "typecheck.m"
    MR_Word check_hlds__typecheck__V_61_61;

#line 782 "typecheck.m"
    {
#line 782 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18);
    }
#line 783 "typecheck.m"
    {
#line 783 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18, &check_hlds__typecheck__VarSet0_9);
    }
#line 784 "typecheck.m"
    {
#line 784 "typecheck.m"
      check_hlds__typecheck__PredPieces_10 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__typecheck__ModuleInfo_7, (MR_Integer) 0, check_hlds__typecheck__PredId_5);
    }
#line 786 "typecheck.m"
    {
#line 786 "typecheck.m"
      check_hlds__typecheck__PredName_11 = parse_tree__error_util__error_pieces_to_string_1_f_0(check_hlds__typecheck__PredPieces_10);
    }
#line 802 "typecheck.m"
    {
#line 802 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__Markers0_35);
    }
#line 803 "typecheck.m"
    {
#line 803 "typecheck.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, check_hlds__typecheck__Markers0_35, &check_hlds__typecheck__Markers_36);
    }
#line 804 "typecheck.m"
    {
#line 804 "typecheck.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_36, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
    }
#line 807 "typecheck.m"
    {
#line 807 "typecheck.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "PredName", &check_hlds__typecheck__PredNameVar_37, check_hlds__typecheck__VarSet0_9, &check_hlds__typecheck__VarSet_13);
    }
#line 808 "typecheck.m"
    {
#line 808 "typecheck.m"
      hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__typecheck__PredNameVar_37, check_hlds__typecheck__PredName_11, &check_hlds__typecheck__UnifyGoal_38);
    }
#line 812 "typecheck.m"
    {
#line 812 "typecheck.m"
      check_hlds__typecheck__ModuleName_39 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
    }
#line 813 "typecheck.m"
    {
#line 813 "typecheck.m"
      check_hlds__typecheck__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(check_hlds__typecheck__ModuleName_39);
    }
#line 815 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 814 "typecheck.m"
      check_hlds__typecheck__CalleeName_40 = (MR_String) "sorry";
#line 815 "typecheck.m"
    else
#line 816 "typecheck.m"
      check_hlds__typecheck__CalleeName_40 = (MR_String) "no_clauses";
#line 818 "typecheck.m"
    {
#line 818 "typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_41);
    }
#line 819 "typecheck.m"
    {
#line 819 "typecheck.m"
      check_hlds__typecheck__V_49_49 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
    }
#line 820 "typecheck.m"
    {
#line 820 "typecheck.m"
      check_hlds__typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 0) = ((MR_Box) (check_hlds__typecheck__PredNameVar_37));
#line 820 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 820 "typecheck.m"
    }
#line 821 "typecheck.m"
    {
#line 821 "typecheck.m"
      check_hlds__typecheck__V_56_56 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 819 "typecheck.m"
    {
#line 819 "typecheck.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__typecheck__V_49_49, check_hlds__typecheck__CalleeName_40, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__typecheck__V_54_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__V_56_56, check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__Context_41, &check_hlds__typecheck__CallGoal_42);
    }
#line 824 "typecheck.m"
    {
#line 824 "typecheck.m"
      hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__typecheck__Context_41, &check_hlds__typecheck__GoalInfo_43);
    }
#line 825 "typecheck.m"
    {
#line 825 "typecheck.m"
      check_hlds__typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck__CallGoal_42));
#line 825 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "typecheck.m"
    }
#line 825 "typecheck.m"
    {
#line 825 "typecheck.m"
      check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__UnifyGoal_38));
#line 825 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 1) = ((MR_Box) (check_hlds__typecheck__V_61_61));
#line 825 "typecheck.m"
    }
#line 825 "typecheck.m"
    {
#line 825 "typecheck.m"
      check_hlds__typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 825 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 825 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 825 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 2) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 825 "typecheck.m"
    }
#line 825 "typecheck.m"
    {
#line 825 "typecheck.m"
      check_hlds__typecheck__Body_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 825 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Body_44, 0) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 825 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Body_44, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_43));
#line 825 "typecheck.m"
    }
#line 826 "typecheck.m"
    {
#line 826 "typecheck.m"
      check_hlds__typecheck__StubClause_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 826 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 826 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 1) = ((MR_Box) (check_hlds__typecheck__Body_44));
#line 826 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 826 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 3) = ((MR_Box) (check_hlds__typecheck__Context_41));
#line 826 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 826 "typecheck.m"
    }
#line 789 "typecheck.m"
    {
#line 789 "typecheck.m"
      check_hlds__typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 0) = ((MR_Box) (check_hlds__typecheck__StubClause_12));
#line 789 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 789 "typecheck.m"
    }
#line 789 "typecheck.m"
    {
#line 789 "typecheck.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__V_21_21, &check_hlds__typecheck__ClausesRep_14);
    }
#line 790 "typecheck.m"
    {
#line 790 "typecheck.m"
      check_hlds__typecheck__ItemNumbers_15 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 791 "typecheck.m"
    {
#line 791 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_14, check_hlds__typecheck__ItemNumbers_15, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23);
    }
#line 792 "typecheck.m"
    {
#line 792 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(check_hlds__typecheck__VarSet_13, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24);
    }
#line 793 "typecheck.m"
    {
#line 793 "typecheck.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, check_hlds__typecheck__STATE_VARIABLE_PredInfo_17);
#line 793 "typecheck.m"
      return;
    }
#line 782 "typecheck.m"
  }
#line 777 "typecheck.m"
}

#line 753 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_5_p_0(
#line 753 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_6,
#line 753 "typecheck.m"
  MR_Word check_hlds__typecheck__Impl_7,
#line 753 "typecheck.m"
  MR_Word check_hlds__typecheck__TVar_8,
#line 753 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 753 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14)
#line 753 "typecheck.m"
{
#line 756 "typecheck.m"
  {
#line 756 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 756 "typecheck.m"
    MR_String check_hlds__typecheck__Name_10;
#line 756 "typecheck.m"
    MR_String check_hlds__typecheck__VarName_11;

#line 757 "typecheck.m"
    {
#line 757 "typecheck.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__TypeVarSet_6, check_hlds__typecheck__TVar_8, &check_hlds__typecheck__Name_10);
    }
#line 758 "typecheck.m"
    {
#line 758 "typecheck.m"
      check_hlds__typecheck__VarName_11 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", check_hlds__typecheck__Name_10);
    }
#line 759 "typecheck.m"
    {
#line 759 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(check_hlds__typecheck__Impl_7, check_hlds__typecheck__VarName_11);
    }
#line 761 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 759 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_14 = check_hlds__typecheck__STATE_VARIABLE_Info_0_13;
#line 761 "typecheck.m"
    else
#line 762 "typecheck.m"
      {
#line 762 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_12;

#line 762 "typecheck.m"
        {
#line 762 "typecheck.m"
          check_hlds__typecheck__Spec_12 = check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_2_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__VarName_11);
        }
#line 763 "typecheck.m"
        {
#line 763 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_12, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
#line 763 "typecheck.m"
          return;
        }
#line 762 "typecheck.m"
      }
#line 756 "typecheck.m"
  }
#line 753 "typecheck.m"
}

#line 747 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
#line 747 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 747 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 747 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 747 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 747 "typecheck.m"
{
#line 747 "typecheck.m"
  {
#line 747 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 747 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_Info_14;

#line 747 "typecheck.m"
    {
#line 747 "typecheck.m"
      check_hlds__typecheck__check_mention_existq_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_Info_14);
    }
#line 747 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_Info_14));
#line 747 "typecheck.m"
  }
#line 747 "typecheck.m"
}

#line 741 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
#line 741 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_6,
#line 741 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVars_7,
#line 741 "typecheck.m"
  MR_Word check_hlds__typecheck__Clause_8,
#line 741 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_19,
#line 741 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_20)
#line 741 "typecheck.m"
{
#line 744 "typecheck.m"
  {
#line 744 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 744 "typecheck.m"
    MR_Word check_hlds__typecheck__Goal_10;
#line 749 "typecheck.m"
    MR_Word check_hlds__typecheck__Impl_17;
#line 746 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 746 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;
#line 746 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;
#line 746 "typecheck.m"
    MR_Word check_hlds__typecheck__V_12_12;
#line 746 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_13_13;
#line 746 "typecheck.m"
    MR_Word check_hlds__typecheck__V_14_14;
#line 746 "typecheck.m"
    MR_Word check_hlds__typecheck__V_15_15;
#line 746 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;

#line 745 "typecheck.m"
    {
#line 745 "typecheck.m"
      check_hlds__typecheck__Goal_10 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__typecheck__Clause_8);
    }
#line 746 "typecheck.m"
    check_hlds__typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_10, (MR_Integer) 0)));
#line 746 "typecheck.m"
    check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_10, (MR_Integer) 1)));
#line 746 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 746 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 746 "typecheck.m"
      {
#line 746 "typecheck.m"
        check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_21_21, (MR_Integer) 1)));
#line 746 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_21_21, (MR_Integer) 2)));
#line 746 "typecheck.m"
        check_hlds__typecheck__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_21_21, (MR_Integer) 3)));
#line 746 "typecheck.m"
        check_hlds__typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_21_21, (MR_Integer) 4)));
#line 746 "typecheck.m"
        check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_21_21, (MR_Integer) 5)));
#line 746 "typecheck.m"
        check_hlds__typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_21_21, (MR_Integer) 6)));
#line 746 "typecheck.m"
        check_hlds__typecheck__Impl_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_21_21, (MR_Integer) 7)));
#line 747 "typecheck.m"
        {
#line 747 "typecheck.m"
          MR_Word check_hlds__typecheck__V_22_22;
#line 747 "typecheck.m"
          MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_20;

#line 747 "typecheck.m"
          {
#line 747 "typecheck.m"
            check_hlds__typecheck__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 747 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[1]));
#line 747 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__check_existq_clause_5_p_0_1));
#line 747 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 747 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 3) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_6));
#line 747 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 4) = ((MR_Box) (check_hlds__typecheck__Impl_17));
#line 747 "typecheck.m"
          }
#line 747 "typecheck.m"
          {
#line 747 "typecheck.m"
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__V_22_22, check_hlds__typecheck__ExistQVars_7, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_19)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_20);
          }
#line 747 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_20 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_20);
#line 747 "typecheck.m"
        }
#line 746 "typecheck.m"
      }
#line 746 "typecheck.m"
    else
#line 747 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_20 = check_hlds__typecheck__STATE_VARIABLE_Info_0_19;
#line 744 "typecheck.m"
  }
#line 741 "typecheck.m"
}

#line 692 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
#line 692 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 692 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 692 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 692 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 692 "typecheck.m"
{
#line 692 "typecheck.m"
  {
#line 692 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 692 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_Info_20;

#line 692 "typecheck.m"
    {
#line 692 "typecheck.m"
      check_hlds__typecheck__check_existq_clause_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_Info_20);
    }
#line 692 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_Info_20));
#line 692 "typecheck.m"
  }
#line 692 "typecheck.m"
}

#line 535 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_8,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_9,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_68,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_69,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_70,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_71,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_12)
#line 535 "typecheck.m"
{
#line 541 "typecheck.m"
  {
#line 541 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0_16;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers_17;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVars_18;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__VarSet_19;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes0_20;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Status_21;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_22;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars0_24;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes0_25;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_26;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Inferring_27;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConstraints_29;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ClassTable_31;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints_32;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunction_33;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMarkers0_34;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Clauses0_35;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Clauses_36;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_37;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredVarTypes0_38;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredTypeConstraints0_39;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstraintProofs_40;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstraintMap_41;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarRenaming_42;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypeRenaming_43;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMarkers_44;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredVarTypes_45;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes1_46;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes_49;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep_50;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_51;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_52;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredTypeConstraints_53;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__UnprovenBodyConstraints_54;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_72_72;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_77_77;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_88_88;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_89_89;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_90_90;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_92_92;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_93_93;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_94_94;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_95_95;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_96_96;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_97_97;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_98_98;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_99_99;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_100_100;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_105_105;
#line 548 "typecheck.m"
    MR_Word check_hlds__typecheck___ArgTypeVarSet_23;

#line 541 "typecheck.m"
    {
#line 541 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_68, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_72_72);
    }
#line 542 "typecheck.m"
    {
#line 542 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_72_72, &check_hlds__typecheck__ClausesRep0_16, &check_hlds__typecheck__ItemNumbers_17);
    }
#line 543 "typecheck.m"
    {
#line 543 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_72_72, &check_hlds__typecheck__HeadVars_18);
    }
#line 544 "typecheck.m"
    {
#line 544 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_72_72, &check_hlds__typecheck__VarSet_19);
    }
#line 545 "typecheck.m"
    {
#line 545 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_72_72, &check_hlds__typecheck__ExplicitVarTypes0_20);
    }
#line 546 "typecheck.m"
    {
#line 546 "typecheck.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_68, &check_hlds__typecheck__Status_21);
    }
#line 547 "typecheck.m"
    {
#line 547 "typecheck.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_68, &check_hlds__typecheck__TypeVarSet0_22);
    }
#line 548 "typecheck.m"
    {
#line 548 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_68, &check_hlds__typecheck___ArgTypeVarSet_23, &check_hlds__typecheck__ExistQVars0_24, &check_hlds__typecheck__ArgTypes0_25);
    }
#line 550 "typecheck.m"
    {
#line 550 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_68, &check_hlds__typecheck__Markers0_26);
    }
#line 551 "typecheck.m"
    {
#line 551 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_26, (MR_Integer) 2);
    }
#line 563 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 556 "typecheck.m"
      {
#line 556 "typecheck.m"
        check_hlds__typecheck__Inferring_27 = (MR_Integer) 1;
#line 558 "typecheck.m"
        {
#line 558 "typecheck.m"
          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Inferring type of ", check_hlds__typecheck__PredId_9, check_hlds__typecheck__ModuleInfo_8);
        }
#line 561 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_77_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "typecheck.m"
        check_hlds__typecheck__PredConstraints_29 = (MR_Word) &check_hlds__typecheck_scalar_common_1[20];
#line 556 "typecheck.m"
      }
#line 563 "typecheck.m"
    else
#line 564 "typecheck.m"
      {
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_118_118;
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__UnivTVars_30;
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_83_83;
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__V_84_84;
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_85_85;
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86;
#line 571 "typecheck.m"
        MR_Word check_hlds__typecheck__V_117_117;

#line 564 "typecheck.m"
        check_hlds__typecheck__Inferring_27 = (MR_Integer) 0;
#line 566 "typecheck.m"
        {
#line 566 "typecheck.m"
          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Type-checking ", check_hlds__typecheck__PredId_9, check_hlds__typecheck__ModuleInfo_8);
        }
#line 569 "typecheck.m"
        {
#line 569 "typecheck.m"
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes0_25, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_83_83);
        }
#line 570 "typecheck.m"
        {
#line 570 "typecheck.m"
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_68, &check_hlds__typecheck__PredConstraints_29);
        }
#line 571 "typecheck.m"
        check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredConstraints_29, (MR_Integer) 0)));
#line 571 "typecheck.m"
        check_hlds__typecheck__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredConstraints_29, (MR_Integer) 1)));
#line 571 "typecheck.m"
        {
#line 571 "typecheck.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__typecheck__V_84_84, &check_hlds__typecheck__UnivTVars_30);
        }
#line 16955 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeInfo_118_118 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 573 "typecheck.m"
        {
#line 573 "typecheck.m"
          mercury__list__append_3_p_1(check_hlds__typecheck__TypeInfo_118_118, check_hlds__typecheck__UnivTVars_30, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_83_83, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_85_85);
        }
#line 574 "typecheck.m"
        {
#line 574 "typecheck.m"
          mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck__TypeInfo_118_118, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_85_85, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86);
        }
#line 575 "typecheck.m"
        {
#line 575 "typecheck.m"
          mercury__list__delete_elems_3_p_0(check_hlds__typecheck__TypeInfo_118_118, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86, check_hlds__typecheck__ExistQVars0_24, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_77_77);
        }
#line 564 "typecheck.m"
      }
#line 578 "typecheck.m"
    {
#line 578 "typecheck.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_8, &check_hlds__typecheck__ClassTable_31);
    }
#line 579 "typecheck.m"
    {
#line 579 "typecheck.m"
      hlds__hlds_data__make_head_hlds_constraints_4_p_0(check_hlds__typecheck__ClassTable_31, check_hlds__typecheck__TypeVarSet0_22, check_hlds__typecheck__PredConstraints_29, &check_hlds__typecheck__Constraints_32);
    }
#line 581 "typecheck.m"
    {
#line 581 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_68);
    }
#line 583 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 582 "typecheck.m"
      check_hlds__typecheck__IsFieldAccessFunction_33 = (MR_Integer) 1;
#line 583 "typecheck.m"
    else
#line 584 "typecheck.m"
      check_hlds__typecheck__IsFieldAccessFunction_33 = (MR_Integer) 0;
#line 586 "typecheck.m"
    {
#line 586 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_68, &check_hlds__typecheck__PredMarkers0_34);
    }
#line 587 "typecheck.m"
    {
#line 587 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_init_12_p_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__PredId_9, check_hlds__typecheck__IsFieldAccessFunction_33, check_hlds__typecheck__TypeVarSet0_22, check_hlds__typecheck__VarSet_19, check_hlds__typecheck__ExplicitVarTypes0_20, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_77_77, check_hlds__typecheck__Constraints_32, check_hlds__typecheck__Status_21, check_hlds__typecheck__PredMarkers0_34, check_hlds__typecheck__STATE_VARIABLE_Specs_0_70, &check_hlds__typecheck__STATE_VARIABLE_Info_88_88);
    }
#line 590 "typecheck.m"
    {
#line 590 "typecheck.m"
      hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__typecheck__ClausesRep0_16, &check_hlds__typecheck__Clauses0_35);
    }
#line 591 "typecheck.m"
    {
#line 591 "typecheck.m"
      check_hlds__typecheck__typecheck_clause_list_6_p_0(check_hlds__typecheck__HeadVars_18, check_hlds__typecheck__ArgTypes0_25, check_hlds__typecheck__Clauses0_35, &check_hlds__typecheck__Clauses_36, check_hlds__typecheck__STATE_VARIABLE_Info_88_88, &check_hlds__typecheck__STATE_VARIABLE_Info_89_89);
    }
#line 594 "typecheck.m"
    {
#line 594 "typecheck.m"
      check_hlds__typeclasses__perform_context_reduction_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_89_89, &check_hlds__typecheck__STATE_VARIABLE_Info_90_90);
    }
#line 595 "typecheck.m"
    {
#line 595 "typecheck.m"
      check_hlds__typecheck__typecheck_check_for_ambiguity_4_p_0((MR_Integer) 1, check_hlds__typecheck__HeadVars_18, check_hlds__typecheck__STATE_VARIABLE_Info_90_90, &check_hlds__typecheck__STATE_VARIABLE_Info_92_92);
    }
#line 596 "typecheck.m"
    {
#line 596 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_92_92, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_77_77, check_hlds__typecheck__ExistQVars0_24, check_hlds__typecheck__ExplicitVarTypes0_20, &check_hlds__typecheck__TypeVarSet_37, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_93_93, &check_hlds__typecheck__InferredVarTypes0_38, &check_hlds__typecheck__InferredTypeConstraints0_39, &check_hlds__typecheck__ConstraintProofs_40, &check_hlds__typecheck__ConstraintMap_41, &check_hlds__typecheck__TVarRenaming_42, &check_hlds__typecheck__ExistTypeRenaming_43);
    }
#line 600 "typecheck.m"
    {
#line 600 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_92_92, &check_hlds__typecheck__PredMarkers_44);
    }
#line 601 "typecheck.m"
    {
#line 601 "typecheck.m"
      parse_tree__prog_data__vartypes_optimize_2_p_0(check_hlds__typecheck__InferredVarTypes0_38, &check_hlds__typecheck__InferredVarTypes_45);
    }
#line 602 "typecheck.m"
    {
#line 602 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__typecheck__InferredVarTypes_45, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_72_72, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_94_94);
    }
#line 608 "typecheck.m"
    if ((check_hlds__typecheck__ExistQVars0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 607 "typecheck.m"
      check_hlds__typecheck__ExplicitVarTypes1_46 = check_hlds__typecheck__ExplicitVarTypes0_20;
#line 608 "typecheck.m"
    else
#line 610 "typecheck.m"
      {
#line 610 "typecheck.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__typecheck__ExistTypeRenaming_43, check_hlds__typecheck__ExplicitVarTypes0_20, &check_hlds__typecheck__ExplicitVarTypes1_46);
      }
#line 613 "typecheck.m"
    {
#line 613 "typecheck.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__typecheck__TVarRenaming_42, check_hlds__typecheck__ExplicitVarTypes1_46, &check_hlds__typecheck__ExplicitVarTypes_49);
    }
#line 616 "typecheck.m"
    {
#line 616 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(check_hlds__typecheck__ExplicitVarTypes_49, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_94_94, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_95_95);
    }
#line 617 "typecheck.m"
    {
#line 617 "typecheck.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__Clauses_36, &check_hlds__typecheck__ClausesRep_50);
    }
#line 618 "typecheck.m"
    {
#line 618 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_50, check_hlds__typecheck__ItemNumbers_17, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_95_95, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_96_96);
    }
#line 619 "typecheck.m"
    {
#line 619 "typecheck.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_96_96, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_68, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_97_97);
    }
#line 620 "typecheck.m"
    {
#line 620 "typecheck.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_37, check_hlds__typecheck__STATE_VARIABLE_PredInfo_97_97, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_98_98);
    }
#line 621 "typecheck.m"
    {
#line 621 "typecheck.m"
      hlds__hlds_pred__pred_info_set_constraint_proofs_3_p_0(check_hlds__typecheck__ConstraintProofs_40, check_hlds__typecheck__STATE_VARIABLE_PredInfo_98_98, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_99_99);
    }
#line 622 "typecheck.m"
    {
#line 622 "typecheck.m"
      hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(check_hlds__typecheck__ConstraintMap_41, check_hlds__typecheck__STATE_VARIABLE_PredInfo_99_99, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_100_100);
    }
#line 623 "typecheck.m"
    {
#line 623 "typecheck.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__PredMarkers_44, check_hlds__typecheck__STATE_VARIABLE_PredInfo_100_100, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101);
    }
#line 628 "typecheck.m"
    {
#line 628 "typecheck.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__InferredVarTypes_45, check_hlds__typecheck__HeadVars_18, &check_hlds__typecheck__ArgTypes_51);
    }
#line 629 "typecheck.m"
    {
#line 629 "typecheck.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes_51, &check_hlds__typecheck__ArgTypeVars_52);
    }
#line 630 "typecheck.m"
    {
#line 630 "typecheck.m"
      check_hlds__typecheck__restrict_to_head_vars_4_p_0(check_hlds__typecheck__InferredTypeConstraints0_39, check_hlds__typecheck__ArgTypeVars_52, &check_hlds__typecheck__InferredTypeConstraints_53, &check_hlds__typecheck__UnprovenBodyConstraints_54);
    }
#line 640 "typecheck.m"
    {
#line 640 "typecheck.m"
      hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_p_0(check_hlds__typecheck__UnprovenBodyConstraints_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102);
    }
#line 669 "typecheck.m"
    if ((check_hlds__typecheck__Inferring_27 == (MR_Integer) 0))
#line 670 "typecheck.m"
      {
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__Origin0_58;
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__ExistQVars1_59;
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypes1_60;
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__PredConstraints1_61;
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__Origin1_62;
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__RenamedOldArgTypes_65;
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__RenamedOldConstraints_66;
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__Origin_67;
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103;
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106;
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_107_107;
#line 670 "typecheck.m"
        MR_Word check_hlds__typecheck__ExistQVars_115;

#line 671 "typecheck.m"
        {
#line 671 "typecheck.m"
          hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_93_93, check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103);
        }
#line 672 "typecheck.m"
        {
#line 672 "typecheck.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103, &check_hlds__typecheck__Origin0_58);
        }
#line 689 "typecheck.m"
        if ((check_hlds__typecheck__ExistQVars0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 683 "typecheck.m"
          {
#line 685 "typecheck.m"
            check_hlds__typecheck__ExistQVars1_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 686 "typecheck.m"
            check_hlds__typecheck__ArgTypes1_60 = check_hlds__typecheck__ArgTypes0_25;
#line 687 "typecheck.m"
            check_hlds__typecheck__PredConstraints1_61 = check_hlds__typecheck__PredConstraints_29;
#line 688 "typecheck.m"
            check_hlds__typecheck__Origin1_62 = check_hlds__typecheck__Origin0_58;
#line 688 "typecheck.m"
            check_hlds__typecheck__STATE_VARIABLE_Info_105_105 = check_hlds__typecheck__STATE_VARIABLE_Info_92_92;
#line 683 "typecheck.m"
          }
#line 689 "typecheck.m"
        else
#line 690 "typecheck.m"
          {
#line 690 "typecheck.m"
            MR_Word check_hlds__typecheck__V_104_104;
#line 691 "typecheck.m"
            MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_105_105;

#line 692 "typecheck.m"
            {
#line 692 "typecheck.m"
              check_hlds__typecheck__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 692 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_104_104, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[0]));
#line 692 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_104_104, 1) = ((MR_Box) (check_hlds__typecheck__do_typecheck_pred_7_p_0_1));
#line 692 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_104_104, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 692 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_104_104, 3) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_37));
#line 692 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_104_104, 4) = ((MR_Box) (check_hlds__typecheck__ExistQVars0_24));
#line 692 "typecheck.m"
            }
#line 691 "typecheck.m"
            {
#line 691 "typecheck.m"
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__V_104_104, check_hlds__typecheck__Clauses_36, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_92_92)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_105_105);
            }
#line 691 "typecheck.m"
            check_hlds__typecheck__STATE_VARIABLE_Info_105_105 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_105_105);
#line 695 "typecheck.m"
            {
#line 695 "typecheck.m"
              check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ExistQVars0_24, check_hlds__typecheck__ExistTypeRenaming_43, &check_hlds__typecheck__ExistQVars1_59);
            }
#line 697 "typecheck.m"
            {
#line 697 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__ExistTypeRenaming_43, check_hlds__typecheck__ArgTypes0_25, &check_hlds__typecheck__ArgTypes1_60);
            }
#line 699 "typecheck.m"
            {
#line 699 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__ExistTypeRenaming_43, check_hlds__typecheck__PredConstraints_29, &check_hlds__typecheck__PredConstraints1_61);
            }
#line 701 "typecheck.m"
            {
#line 701 "typecheck.m"
              check_hlds__typecheck__rename_instance_method_constraints_3_p_0(check_hlds__typecheck__ExistTypeRenaming_43, check_hlds__typecheck__Origin0_58, &check_hlds__typecheck__Origin1_62);
            }
#line 690 "typecheck.m"
          }
#line 706 "typecheck.m"
        {
#line 706 "typecheck.m"
          check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ExistQVars1_59, check_hlds__typecheck__TVarRenaming_42, &check_hlds__typecheck__ExistQVars_115);
        }
#line 708 "typecheck.m"
        {
#line 708 "typecheck.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__TVarRenaming_42, check_hlds__typecheck__ArgTypes1_60, &check_hlds__typecheck__RenamedOldArgTypes_65);
        }
#line 710 "typecheck.m"
        {
#line 710 "typecheck.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__TVarRenaming_42, check_hlds__typecheck__PredConstraints1_61, &check_hlds__typecheck__RenamedOldConstraints_66);
        }
#line 712 "typecheck.m"
        {
#line 712 "typecheck.m"
          check_hlds__typecheck__rename_instance_method_constraints_3_p_0(check_hlds__typecheck__TVarRenaming_42, check_hlds__typecheck__Origin1_62, &check_hlds__typecheck__Origin_67);
        }
#line 715 "typecheck.m"
        {
#line 715 "typecheck.m"
          hlds__hlds_pred__pred_info_set_arg_types_5_p_0(check_hlds__typecheck__TypeVarSet_37, check_hlds__typecheck__ExistQVars_115, check_hlds__typecheck__RenamedOldArgTypes_65, check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106);
        }
#line 717 "typecheck.m"
        {
#line 717 "typecheck.m"
          hlds__hlds_pred__pred_info_set_class_context_3_p_0(check_hlds__typecheck__RenamedOldConstraints_66, check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_107_107);
        }
#line 718 "typecheck.m"
        {
#line 718 "typecheck.m"
          hlds__hlds_pred__pred_info_set_origin_3_p_0(check_hlds__typecheck__Origin_67, check_hlds__typecheck__STATE_VARIABLE_PredInfo_107_107, check_hlds__typecheck__STATE_VARIABLE_PredInfo_69);
        }
#line 720 "typecheck.m"
        *check_hlds__typecheck__Changed_12 = (MR_Integer) 0;
#line 670 "typecheck.m"
      }
#line 669 "typecheck.m"
    else
#line 644 "typecheck.m"
      {
#line 644 "typecheck.m"
        MR_Word check_hlds__typecheck__ExistQVars_55;
#line 644 "typecheck.m"
        MR_Word check_hlds__typecheck__OldTypeConstraints_56;
#line 644 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_109_109;
#line 644 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110;
#line 644 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_111_111;
#line 660 "typecheck.m"
        MR_Word check_hlds__typecheck__TVarKinds_57;

#line 647 "typecheck.m"
        {
#line 647 "typecheck.m"
          check_hlds__typecheck__infer_existential_types_4_p_0(check_hlds__typecheck__ArgTypeVars_52, &check_hlds__typecheck__ExistQVars_55, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_93_93, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_109_109);
        }
#line 650 "typecheck.m"
        {
#line 650 "typecheck.m"
          hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_109_109, check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110);
        }
#line 651 "typecheck.m"
        {
#line 651 "typecheck.m"
          hlds__hlds_pred__pred_info_set_arg_types_5_p_0(check_hlds__typecheck__TypeVarSet_37, check_hlds__typecheck__ExistQVars_55, check_hlds__typecheck__ArgTypes_51, check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_111_111);
        }
#line 653 "typecheck.m"
        {
#line 653 "typecheck.m"
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_111_111, &check_hlds__typecheck__OldTypeConstraints_56);
        }
#line 654 "typecheck.m"
        {
#line 654 "typecheck.m"
          hlds__hlds_pred__pred_info_set_class_context_3_p_0(check_hlds__typecheck__InferredTypeConstraints_53, check_hlds__typecheck__STATE_VARIABLE_PredInfo_111_111, check_hlds__typecheck__STATE_VARIABLE_PredInfo_69);
        }
#line 660 "typecheck.m"
        {
#line 660 "typecheck.m"
          hlds__hlds_pred__pred_info_get_tvar_kinds_2_p_0(*check_hlds__typecheck__STATE_VARIABLE_PredInfo_69, &check_hlds__typecheck__TVarKinds_57);
        }
#line 661 "typecheck.m"
        {
#line 661 "typecheck.m"
          check_hlds__typecheck__succeeded = check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(check_hlds__typecheck__TVarKinds_57, check_hlds__typecheck__ExistQVars0_24, check_hlds__typecheck__ArgTypes0_25, check_hlds__typecheck__OldTypeConstraints_56, check_hlds__typecheck__ExistQVars_55, check_hlds__typecheck__ArgTypes_51, check_hlds__typecheck__InferredTypeConstraints_53);
        }
#line 666 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 665 "typecheck.m"
          *check_hlds__typecheck__Changed_12 = (MR_Integer) 0;
#line 666 "typecheck.m"
        else
#line 667 "typecheck.m"
          *check_hlds__typecheck__Changed_12 = (MR_Integer) 1;
#line 667 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_Info_105_105 = check_hlds__typecheck__STATE_VARIABLE_Info_92_92;
#line 644 "typecheck.m"
      }
#line 722 "typecheck.m"
    {
#line 722 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_105_105, check_hlds__typecheck__STATE_VARIABLE_Specs_71);
#line 722 "typecheck.m"
      return;
    }
#line 541 "typecheck.m"
  }
#line 535 "typecheck.m"
}

#line 504 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0_1(
#line 504 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg)
#line 504 "typecheck.m"
{
#line 504 "typecheck.m"
  {
#line 504 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 504 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 504 "typecheck.m"
    {
#line 504 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__504__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))));
    }
#line 504 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 504 "typecheck.m"
  }
#line 504 "typecheck.m"
}

#line 440 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0(
#line 440 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7,
#line 440 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_8,
#line 440 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 440 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_33,
#line 440 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_10,
#line 440 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_11)
#line 440 "typecheck.m"
{
#line 443 "typecheck.m"
  {
#line 443 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__Globals_12;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes0_15;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesInfo0_16;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0_17;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers0_18;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_19;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0IsEmpty_20;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__StartingSpecs_22;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep1_26;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVars_28;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep1IsEmpty_29;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42;
#line 443 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck___ArgTypeVarSet_13;
#line 451 "typecheck.m"
    MR_Word check_hlds__typecheck___ExistQVars0_14;
#line 499 "typecheck.m"
    MR_Word check_hlds__typecheck___ItemNumbers_27;

#line 450 "typecheck.m"
    {
#line 450 "typecheck.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_7, &check_hlds__typecheck__Globals_12);
    }
#line 451 "typecheck.m"
    {
#line 451 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck___ArgTypeVarSet_13, &check_hlds__typecheck___ExistQVars0_14, &check_hlds__typecheck__ArgTypes0_15);
    }
#line 453 "typecheck.m"
    {
#line 453 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__ClausesInfo0_16);
    }
#line 454 "typecheck.m"
    {
#line 454 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_16, &check_hlds__typecheck__ClausesRep0_17, &check_hlds__typecheck__ItemNumbers0_18);
    }
#line 455 "typecheck.m"
    {
#line 455 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__Markers0_19);
    }
#line 456 "typecheck.m"
    {
#line 456 "typecheck.m"
      check_hlds__typecheck__ClausesRep0IsEmpty_20 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_17);
    }
#line 474 "typecheck.m"
    if ((check_hlds__typecheck__ClausesRep0IsEmpty_20 == (MR_Integer) 0))
#line 475 "typecheck.m"
      {
#line 475 "typecheck.m"
        MR_Word check_hlds__typecheck__WarnNonContiguousForeignProcs_23;

#line 476 "typecheck.m"
        {
#line 476 "typecheck.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_12, (MR_Integer) 16, &check_hlds__typecheck__WarnNonContiguousForeignProcs_23);
        }
#line 482 "typecheck.m"
        if ((check_hlds__typecheck__WarnNonContiguousForeignProcs_23 == (MR_Integer) 0))
#line 483 "typecheck.m"
          {
#line 483 "typecheck.m"
            MR_Word check_hlds__typecheck__WarnNonContiguousClauses_24;

#line 484 "typecheck.m"
            {
#line 484 "typecheck.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_12, (MR_Integer) 15, &check_hlds__typecheck__WarnNonContiguousClauses_24);
            }
#line 490 "typecheck.m"
            if ((check_hlds__typecheck__WarnNonContiguousClauses_24 == (MR_Integer) 0))
#line 492 "typecheck.m"
              check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 490 "typecheck.m"
            else
#line 487 "typecheck.m"
              {
#line 737 "typecheck.m"
                MR_Word check_hlds__typecheck__FirstRegion_69;
#line 737 "typecheck.m"
                MR_Word check_hlds__typecheck__SecondRegion_70;
#line 737 "typecheck.m"
                MR_Word check_hlds__typecheck__LaterRegions_71;

#line 731 "typecheck.m"
                {
#line 731 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(check_hlds__typecheck__ItemNumbers0_18, (MR_Integer) 0, &check_hlds__typecheck__FirstRegion_69, &check_hlds__typecheck__SecondRegion_70, &check_hlds__typecheck__LaterRegions_71);
                }
#line 737 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 735 "typecheck.m"
                  {
#line 735 "typecheck.m"
                    MR_Word check_hlds__typecheck__Spec_72;

#line 734 "typecheck.m"
                    {
#line 734 "typecheck.m"
                      check_hlds__typecheck__Spec_72 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__typecheck__FirstRegion_69, check_hlds__typecheck__SecondRegion_70, check_hlds__typecheck__LaterRegions_71);
                    }
#line 736 "typecheck.m"
                    {
#line 736 "typecheck.m"
                      check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 0) = ((MR_Box) (check_hlds__typecheck__Spec_72));
#line 736 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "typecheck.m"
                    }
#line 735 "typecheck.m"
                  }
#line 737 "typecheck.m"
                else
#line 738 "typecheck.m"
                  check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 487 "typecheck.m"
              }
#line 483 "typecheck.m"
          }
#line 482 "typecheck.m"
        else
#line 479 "typecheck.m"
          {
#line 737 "typecheck.m"
            MR_Word check_hlds__typecheck__FirstRegion_80;
#line 737 "typecheck.m"
            MR_Word check_hlds__typecheck__SecondRegion_81;
#line 737 "typecheck.m"
            MR_Word check_hlds__typecheck__LaterRegions_82;

#line 731 "typecheck.m"
            {
#line 731 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(check_hlds__typecheck__ItemNumbers0_18, (MR_Integer) 1, &check_hlds__typecheck__FirstRegion_80, &check_hlds__typecheck__SecondRegion_81, &check_hlds__typecheck__LaterRegions_82);
            }
#line 737 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 735 "typecheck.m"
              {
#line 735 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_83;

#line 734 "typecheck.m"
                {
#line 734 "typecheck.m"
                  check_hlds__typecheck__Spec_83 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__typecheck__FirstRegion_80, check_hlds__typecheck__SecondRegion_81, check_hlds__typecheck__LaterRegions_82);
                }
#line 736 "typecheck.m"
                {
#line 736 "typecheck.m"
                  check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 0) = ((MR_Box) (check_hlds__typecheck__Spec_83));
#line 736 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 736 "typecheck.m"
                }
#line 735 "typecheck.m"
              }
#line 737 "typecheck.m"
            else
#line 738 "typecheck.m"
              check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 479 "typecheck.m"
          }
#line 492 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32;
#line 475 "typecheck.m"
      }
#line 474 "typecheck.m"
    else
#line 466 "typecheck.m"
      {
#line 461 "typecheck.m"
        MR_Word check_hlds__typecheck__V_40_40;

#line 460 "typecheck.m"
        {
#line 460 "typecheck.m"
          check_hlds__typecheck__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__typecheck__Globals_12, (MR_Integer) 161, (MR_Integer) 1);
        }
#line 460 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 460 "typecheck.m"
          {
#line 461 "typecheck.m"
            check_hlds__typecheck__V_40_40 = (MR_Integer) 9;
#line 461 "typecheck.m"
            {
#line 461 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_19, check_hlds__typecheck__V_40_40);
            }
#line 461 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 460 "typecheck.m"
          }
#line 466 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 463 "typecheck.m"
          {
#line 463 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_21;

#line 463 "typecheck.m"
            {
#line 463 "typecheck.m"
              check_hlds__typecheck__Spec_21 = check_hlds__typecheck_errors__report_no_clauses_stub_3_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32);
            }
#line 464 "typecheck.m"
            {
#line 464 "typecheck.m"
              check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 0) = ((MR_Box) (check_hlds__typecheck__Spec_21));
#line 464 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 464 "typecheck.m"
            }
#line 465 "typecheck.m"
            {
#line 465 "typecheck.m"
              check_hlds__typecheck__generate_stub_clause_4_p_0(check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, check_hlds__typecheck__ModuleInfo_7);
            }
#line 463 "typecheck.m"
          }
#line 466 "typecheck.m"
        else
#line 471 "typecheck.m"
          {
#line 467 "typecheck.m"
            {
#line 467 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_19, (MR_Integer) 1);
            }
#line 471 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 469 "typecheck.m"
              {
#line 469 "typecheck.m"
                check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 470 "typecheck.m"
                {
#line 470 "typecheck.m"
                  check_hlds__typecheck__generate_stub_clause_4_p_0(check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, check_hlds__typecheck__ModuleInfo_7);
                }
#line 469 "typecheck.m"
              }
#line 471 "typecheck.m"
            else
#line 472 "typecheck.m"
              {
#line 472 "typecheck.m"
                check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 472 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32;
#line 472 "typecheck.m"
              }
#line 471 "typecheck.m"
          }
#line 466 "typecheck.m"
      }
#line 498 "typecheck.m"
    {
#line 498 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45);
    }
#line 499 "typecheck.m"
    {
#line 499 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45, &check_hlds__typecheck__ClausesRep1_26, &check_hlds__typecheck___ItemNumbers_27);
    }
#line 500 "typecheck.m"
    {
#line 500 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45, &check_hlds__typecheck__HeadVars_28);
    }
#line 501 "typecheck.m"
    {
#line 501 "typecheck.m"
      check_hlds__typecheck__ClausesRep1IsEmpty_29 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep1_26);
    }
#line 528 "typecheck.m"
    if ((check_hlds__typecheck__ClausesRep1IsEmpty_29 == (MR_Integer) 0))
#line 530 "typecheck.m"
      {
#line 530 "typecheck.m"
        check_hlds__typecheck__do_typecheck_pred_7_p_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, check_hlds__typecheck__STATE_VARIABLE_PredInfo_33, check_hlds__typecheck__StartingSpecs_22, check_hlds__typecheck__Specs_10, check_hlds__typecheck__Changed_11);
#line 530 "typecheck.m"
        return;
      }
#line 528 "typecheck.m"
    else
#line 503 "typecheck.m"
      {
#line 503 "typecheck.m"
        MR_Word check_hlds__typecheck__V_47_47;

#line 504 "typecheck.m"
        {
#line 504 "typecheck.m"
          check_hlds__typecheck__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 504 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[0]));
#line 504 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_pred_6_p_0_1));
#line 504 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 504 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 3) = ((MR_Box) (check_hlds__typecheck__StartingSpecs_22));
#line 504 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 504 "typecheck.m"
        }
#line 504 "typecheck.m"
        {
#line 504 "typecheck.m"
          mercury__require__expect_4_p_0(check_hlds__typecheck__V_47_47, (MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_pred\'/6", (MR_String) "StartingSpecs not empty");
        }
#line 509 "typecheck.m"
        {
#line 509 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_19, (MR_Integer) 9);
        }
#line 524 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 513 "typecheck.m"
          {
#line 513 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_30;
#line 513 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadVarsIncludingExistentials_31;
#line 513 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_53_53;
#line 513 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_54_54;

#line 512 "typecheck.m"
            {
#line 512 "typecheck.m"
              parse_tree__prog_data__vartypes_from_corresponding_lists_3_p_0(check_hlds__typecheck__HeadVars_28, check_hlds__typecheck__ArgTypes0_15, &check_hlds__typecheck__VarTypes_30);
            }
#line 514 "typecheck.m"
            {
#line 514 "typecheck.m"
              hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__typecheck__VarTypes_30, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_53_53);
            }
#line 515 "typecheck.m"
            {
#line 515 "typecheck.m"
              hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_53_53, check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_54_54);
            }
#line 519 "typecheck.m"
            {
#line 519 "typecheck.m"
              parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes0_15, &check_hlds__typecheck__HeadVarsIncludingExistentials_31);
            }
#line 520 "typecheck.m"
            {
#line 520 "typecheck.m"
              hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__HeadVarsIncludingExistentials_31, check_hlds__typecheck__STATE_VARIABLE_PredInfo_54_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_33);
            }
#line 522 "typecheck.m"
            *check_hlds__typecheck__Specs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 523 "typecheck.m"
            *check_hlds__typecheck__Changed_11 = (MR_Integer) 0;
#line 513 "typecheck.m"
          }
#line 524 "typecheck.m"
        else
#line 525 "typecheck.m"
          {
#line 525 "typecheck.m"
            MR_Word check_hlds__typecheck__V_56_56;

#line 525 "typecheck.m"
            {
#line 525 "typecheck.m"
              check_hlds__typecheck__V_56_56 = check_hlds__typecheck_errors__report_no_clauses_3_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42);
            }
#line 525 "typecheck.m"
            {
#line 525 "typecheck.m"
              MR_Word base;
#line 525 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "typecheck.m"
              *check_hlds__typecheck__Specs_10 = base;
#line 525 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_56_56));
#line 525 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "typecheck.m"
            }
#line 526 "typecheck.m"
            *check_hlds__typecheck__Changed_11 = (MR_Integer) 0;
#line 526 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_PredInfo_33 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42;
#line 525 "typecheck.m"
          }
#line 503 "typecheck.m"
      }
#line 443 "typecheck.m"
  }
#line 440 "typecheck.m"
}

#line 345 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 345 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
#line 345 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
#line 345 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
#line 345 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_9,
#line 345 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_10)
#line 345 "typecheck.m"
{
#line 351 "typecheck.m"
  {
#line 351 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 351 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "typecheck.m"
      {
#line 351 "typecheck.m"
        *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Changed_10 = check_hlds__typecheck__STATE_VARIABLE_Changed_0_9;
#line 352 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Specs_8 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_7;
#line 352 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
#line 351 "typecheck.m"
      }
#line 351 "typecheck.m"
    else
#line 355 "typecheck.m"
      {
#line 355 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 355 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 355 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo_26;
#line 355 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_27;
#line 355 "typecheck.m"
        MR_Word check_hlds__typecheck__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_24, (MR_Integer) 0)));
#line 355 "typecheck.m"
        MR_Word check_hlds__typecheck__PredInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_24, (MR_Integer) 1)));

#line 359 "typecheck.m"
        {
#line 359 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__typecheck__PredInfo0_32);
        }
#line 360 "typecheck.m"
        if (!(check_hlds__typecheck__succeeded))
#line 361 "typecheck.m"
          {
#line 361 "typecheck.m"
            {
#line 361 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_31)));
            }
#line 361 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 361 "typecheck.m"
          }
#line 368 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 364 "typecheck.m"
          {
#line 364 "typecheck.m"
            check_hlds__typecheck__PredIdInfo_26 = check_hlds__typecheck__PredIdInfo0_24;
#line 365 "typecheck.m"
            {
#line 365 "typecheck.m"
              check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_25, &check_hlds__typecheck__PredIdsInfos_27, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7, check_hlds__typecheck__STATE_VARIABLE_Specs_8, check_hlds__typecheck__STATE_VARIABLE_Changed_0_9, check_hlds__typecheck__STATE_VARIABLE_Changed_10);
            }
#line 364 "typecheck.m"
          }
#line 368 "typecheck.m"
        else
#line 371 "typecheck.m"
          {
#line 371 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_33;
#line 371 "typecheck.m"
            MR_Word check_hlds__typecheck__PredSpecs_34;
#line 371 "typecheck.m"
            MR_Word check_hlds__typecheck__PredChanged_35;
#line 371 "typecheck.m"
            MR_Word check_hlds__typecheck__Globals_36;
#line 371 "typecheck.m"
            MR_Word check_hlds__typecheck__ContainsErrors_37;
#line 371 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47;
#line 371 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_48_48;
#line 371 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_49_49;

#line 417 "typecheck.m"
            {
#line 988 "typecheck.m"
              MR_Word check_hlds__typecheck__Origin_72;
#line 988 "typecheck.m"
              MR_Word check_hlds__typecheck__SpecialPredId_73;
#line 988 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeCtor_74;
#line 988 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeTable_75;
#line 988 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeDefn_76;
#line 988 "typecheck.m"
              MR_Word check_hlds__typecheck__Body_77;
#line 988 "typecheck.m"
              MR_Word check_hlds__typecheck__V_78_78;
#line 996 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeCtorInfo_13_80;
#line 996 "typecheck.m"
              MR_Word check_hlds__typecheck__V_79_79;

#line 417 "typecheck.m"
              {
#line 417 "typecheck.m"
                check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo0_32);
              }
#line 417 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 417 "typecheck.m"
                {
#line 991 "typecheck.m"
                  {
#line 991 "typecheck.m"
                    hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__Origin_72);
                  }
#line 992 "typecheck.m"
                  check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin_72)) == (MR_mktag((MR_Integer) 0)));
#line 992 "typecheck.m"
                  if (check_hlds__typecheck__succeeded)
#line 992 "typecheck.m"
                    {
#line 992 "typecheck.m"
                      check_hlds__typecheck__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Origin_72, (MR_Integer) 0)));
#line 992 "typecheck.m"
                      check_hlds__typecheck__SpecialPredId_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_78_78, (MR_Integer) 0)));
#line 992 "typecheck.m"
                      check_hlds__typecheck__TypeCtor_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_78_78, (MR_Integer) 1)));
#line 996 "typecheck.m"
                      {
#line 996 "typecheck.m"
                        check_hlds__typecheck__V_79_79 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
                      }
#line 17985 "check_hlds.typecheck.c"
                      check_hlds__typecheck__TypeCtorInfo_13_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 996 "typecheck.m"
                      {
#line 996 "typecheck.m"
                        check_hlds__typecheck__succeeded = mercury__list__member_2_p_0(check_hlds__typecheck__TypeCtorInfo_13_80, ((MR_Box) (check_hlds__typecheck__TypeCtor_74)), check_hlds__typecheck__V_79_79);
                      }
#line 996 "typecheck.m"
                      check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 988 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 988 "typecheck.m"
                        {
#line 1000 "typecheck.m"
                          {
#line 1000 "typecheck.m"
                            hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__TypeTable_75);
                          }
#line 1001 "typecheck.m"
                          {
#line 1001 "typecheck.m"
                            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_75, check_hlds__typecheck__TypeCtor_74, &check_hlds__typecheck__TypeDefn_76);
                          }
#line 1002 "typecheck.m"
                          {
#line 1002 "typecheck.m"
                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_76, &check_hlds__typecheck__Body_77);
                          }
#line 1003 "typecheck.m"
                          {
#line 1003 "typecheck.m"
                            check_hlds__typecheck__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__SpecialPredId_73, check_hlds__typecheck__Body_77);
                          }
#line 988 "typecheck.m"
                        }
#line 992 "typecheck.m"
                    }
#line 418 "typecheck.m"
                  check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 417 "typecheck.m"
                }
#line 417 "typecheck.m"
            }
#line 419 "typecheck.m"
            if (!(check_hlds__typecheck__succeeded))
#line 420 "typecheck.m"
              {
#line 420 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers_62;
#line 422 "typecheck.m"
                MR_Word check_hlds__typecheck__V_67_67;

#line 420 "typecheck.m"
                {
#line 420 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(check_hlds__typecheck__PredInfo0_32);
                }
#line 420 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 420 "typecheck.m"
                  {
#line 421 "typecheck.m"
                    {
#line 421 "typecheck.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__Markers_62);
                    }
#line 422 "typecheck.m"
                    check_hlds__typecheck__V_67_67 = (MR_Integer) 1;
#line 422 "typecheck.m"
                    {
#line 422 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers_62, check_hlds__typecheck__V_67_67);
                    }
#line 422 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 420 "typecheck.m"
                  }
#line 420 "typecheck.m"
              }
#line 436 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 425 "typecheck.m"
              {
#line 425 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesInfo0_63;
#line 425 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesRep0_64;
#line 425 "typecheck.m"
                MR_Word check_hlds__typecheck__IsEmpty_66;
#line 426 "typecheck.m"
                MR_Word check_hlds__typecheck___ItemNumbers_65;

#line 425 "typecheck.m"
                {
#line 425 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__ClausesInfo0_63);
                }
#line 426 "typecheck.m"
                {
#line 426 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_63, &check_hlds__typecheck__ClausesRep0_64, &check_hlds__typecheck___ItemNumbers_65);
                }
#line 427 "typecheck.m"
                {
#line 427 "typecheck.m"
                  check_hlds__typecheck__IsEmpty_66 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_64);
                }
#line 431 "typecheck.m"
                if ((check_hlds__typecheck__IsEmpty_66 == (MR_Integer) 0))
#line 432 "typecheck.m"
                  check_hlds__typecheck__PredInfo_33 = check_hlds__typecheck__PredInfo0_32;
#line 431 "typecheck.m"
                else
#line 430 "typecheck.m"
                  {
#line 430 "typecheck.m"
                    hlds__hlds_pred__pred_info_mark_as_external_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__PredInfo_33);
                  }
#line 434 "typecheck.m"
                check_hlds__typecheck__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 435 "typecheck.m"
                check_hlds__typecheck__PredChanged_35 = (MR_Integer) 0;
#line 425 "typecheck.m"
              }
#line 436 "typecheck.m"
            else
#line 437 "typecheck.m"
              {
#line 437 "typecheck.m"
                check_hlds__typecheck__typecheck_pred_6_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_31, check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__PredInfo_33, &check_hlds__typecheck__PredSpecs_34, &check_hlds__typecheck__PredChanged_35);
              }
#line 373 "typecheck.m"
            {
#line 373 "typecheck.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__Globals_36);
            }
#line 374 "typecheck.m"
            {
#line 374 "typecheck.m"
              check_hlds__typecheck__ContainsErrors_37 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__typecheck__Globals_36, check_hlds__typecheck__PredSpecs_34);
            }
#line 377 "typecheck.m"
            if ((check_hlds__typecheck__ContainsErrors_37 == (MR_Integer) 0))
#line 376 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
#line 377 "typecheck.m"
            else
#line 393 "typecheck.m"
              {
#line 393 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, 0) = ((MR_Box) (check_hlds__typecheck__PredId_31));
#line 393 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5));
#line 393 "typecheck.m"
              }
#line 395 "typecheck.m"
            {
#line 395 "typecheck.m"
              check_hlds__typecheck__PredIdInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_26, 0) = ((MR_Box) (check_hlds__typecheck__PredId_31));
#line 395 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_26, 1) = ((MR_Box) (check_hlds__typecheck__PredInfo_33));
#line 395 "typecheck.m"
            }
#line 396 "typecheck.m"
            {
#line 396 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__PredSpecs_34, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7);
            }
#line 397 "typecheck.m"
            {
#line 397 "typecheck.m"
              mercury__bool__or_3_p_0(check_hlds__typecheck__PredChanged_35, check_hlds__typecheck__STATE_VARIABLE_Changed_0_9, &check_hlds__typecheck__STATE_VARIABLE_Changed_49_49);
            }
#line 398 "typecheck.m"
            {
#line 398 "typecheck.m"
              check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_25, &check_hlds__typecheck__PredIdsInfos_27, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6, check_hlds__typecheck__STATE_VARIABLE_Specs_48_48, check_hlds__typecheck__STATE_VARIABLE_Specs_8, check_hlds__typecheck__STATE_VARIABLE_Changed_49_49, check_hlds__typecheck__STATE_VARIABLE_Changed_10);
            }
#line 371 "typecheck.m"
          }
#line 354 "typecheck.m"
        {
#line 354 "typecheck.m"
          MR_Word base;
#line 354 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 354 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__PredIdInfo_26));
#line 354 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__PredIdsInfos_27));
#line 354 "typecheck.m"
        }
#line 355 "typecheck.m"
      }
#line 351 "typecheck.m"
  }
#line 345 "typecheck.m"
}

#line 272 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
#line 272 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 272 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 272 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 272 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_4,
#line 272 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_5)
#line 272 "typecheck.m"
{
#line 276 "typecheck.m"
  while (MR_TRUE)
#line 276 "typecheck.m"
    {
#line 276 "typecheck.m"
      /* tailcall optimized into a loop */
#line 276 "typecheck.m"
      {
#line 276 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 276 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 276 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Specs_5 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_4;
#line 276 "typecheck.m"
        else
#line 278 "typecheck.m"
          {
#line 278 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 278 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 278 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_16;
#line 278 "typecheck.m"
            MR_Word check_hlds__typecheck__Markers_17;
#line 278 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_23_23;
#line 282 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeCtorInfo_25_25;
#line 284 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18;

#line 279 "typecheck.m"
            {
#line 279 "typecheck.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_13, &check_hlds__typecheck__PredInfo_16);
            }
#line 280 "typecheck.m"
            {
#line 280 "typecheck.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Markers_17);
            }
#line 282 "typecheck.m"
            {
#line 282 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers_17, (MR_Integer) 2);
            }
#line 282 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 282 "typecheck.m"
              {
#line 18258 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 283 "typecheck.m"
                {
#line 283 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0(check_hlds__typecheck__TypeCtorInfo_25_25, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_13)));
                }
#line 282 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 282 "typecheck.m"
                  {
#line 284 "typecheck.m"
                    {
#line 284 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__V_18_18);
                    }
#line 284 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 282 "typecheck.m"
                  }
#line 282 "typecheck.m"
              }
#line 288 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 286 "typecheck.m"
              {
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_19;
#line 286 "typecheck.m"
                MR_String check_hlds__typecheck__PredName_28;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__PredOrFunc_29;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__Name_30;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__Context_31;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__VarSet_32;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVars_33;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__Types0_34;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__Types_35;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassContext_36;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__Purity_37;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeDet_38;
#line 286 "typecheck.m"
                MR_String check_hlds__typecheck__TypeStr_40;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__Pieces_43;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__Msg_44;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__V_57_57;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__V_58_58;
#line 286 "typecheck.m"
                MR_Word check_hlds__typecheck__V_66_66;

#line 300 "typecheck.m"
                {
#line 300 "typecheck.m"
                  check_hlds__typecheck__PredName_28 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__PredInfo_16);
                }
#line 301 "typecheck.m"
                {
#line 301 "typecheck.m"
                  check_hlds__typecheck__PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__typecheck__PredInfo_16);
                }
#line 302 "typecheck.m"
                {
#line 302 "typecheck.m"
                  check_hlds__typecheck__Name_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 302 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Name_30, 0) = ((MR_Box) (check_hlds__typecheck__PredName_28));
#line 302 "typecheck.m"
                }
#line 303 "typecheck.m"
                {
#line 303 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Context_31);
                }
#line 304 "typecheck.m"
                {
#line 304 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__VarSet_32, &check_hlds__typecheck__ExistQVars_33, &check_hlds__typecheck__Types0_34);
                }
#line 305 "typecheck.m"
                {
#line 305 "typecheck.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(check_hlds__typecheck__Types0_34, &check_hlds__typecheck__Types_35);
                }
#line 306 "typecheck.m"
                {
#line 306 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__ClassContext_36);
                }
#line 307 "typecheck.m"
                {
#line 307 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Purity_37);
                }
#line 308 "typecheck.m"
                check_hlds__typecheck__MaybeDet_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 314 "typecheck.m"
                if ((check_hlds__typecheck__PredOrFunc_29 == (MR_Integer) 1))
#line 315 "typecheck.m"
                  {
#line 315 "typecheck.m"
                    MR_Word check_hlds__typecheck__ArgTypes_41;
#line 315 "typecheck.m"
                    MR_Word check_hlds__typecheck__RetType_42;
#line 316 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv0_RetType_42;

#line 316 "typecheck.m"
                    {
#line 316 "typecheck.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Types_35, &check_hlds__typecheck__ArgTypes_41, &check_hlds__typecheck__conv0_RetType_42);
                    }
#line 316 "typecheck.m"
                    check_hlds__typecheck__RetType_42 = ((MR_Word) check_hlds__typecheck__conv0_RetType_42);
#line 317 "typecheck.m"
                    {
#line 317 "typecheck.m"
                      check_hlds__typecheck__TypeStr_40 = parse_tree__mercury_to_mercury__mercury_func_type_to_string_10_f_0(check_hlds__typecheck__VarSet_32, check_hlds__typecheck__ExistQVars_33, check_hlds__typecheck__Name_30, check_hlds__typecheck__ArgTypes_41, check_hlds__typecheck__RetType_42, check_hlds__typecheck__MaybeDet_38, check_hlds__typecheck__Purity_37, check_hlds__typecheck__ClassContext_36, check_hlds__typecheck__Context_31, (MR_Integer) 0);
                    }
#line 315 "typecheck.m"
                  }
#line 314 "typecheck.m"
                else
#line 312 "typecheck.m"
                  {
#line 312 "typecheck.m"
                    check_hlds__typecheck__TypeStr_40 = parse_tree__mercury_to_mercury__mercury_pred_type_to_string_9_f_0(check_hlds__typecheck__VarSet_32, check_hlds__typecheck__ExistQVars_33, check_hlds__typecheck__Name_30, check_hlds__typecheck__Types_35, check_hlds__typecheck__MaybeDet_38, check_hlds__typecheck__Purity_37, check_hlds__typecheck__ClassContext_36, check_hlds__typecheck__Context_31, (MR_Integer) 0);
                  }
#line 321 "typecheck.m"
                {
#line 321 "typecheck.m"
                  check_hlds__typecheck__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 321 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_49_49, 1) = ((MR_Box) (check_hlds__typecheck__TypeStr_40));
#line 321 "typecheck.m"
                }
#line 321 "typecheck.m"
                {
#line 321 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__V_49_49));
#line 321 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[19])));
#line 321 "typecheck.m"
                }
#line 321 "typecheck.m"
                {
#line 321 "typecheck.m"
                  check_hlds__typecheck__Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[18])));
#line 321 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_43, 1) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 321 "typecheck.m"
                }
#line 323 "typecheck.m"
                {
#line 323 "typecheck.m"
                  check_hlds__typecheck__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (check_hlds__typecheck__Pieces_43));
#line 323 "typecheck.m"
                }
#line 323 "typecheck.m"
                {
#line 323 "typecheck.m"
                  check_hlds__typecheck__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_57_57, 0) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "typecheck.m"
                }
#line 323 "typecheck.m"
                {
#line 323 "typecheck.m"
                  check_hlds__typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 0) = ((MR_Box) (((MR_Integer) 42 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 1) = ((MR_Box) (check_hlds__typecheck__V_57_57));
#line 323 "typecheck.m"
                }
#line 323 "typecheck.m"
                {
#line 323 "typecheck.m"
                  check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_53_53, 0) = ((MR_Box) (check_hlds__typecheck__V_54_54));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "typecheck.m"
                }
#line 322 "typecheck.m"
                {
#line 322 "typecheck.m"
                  check_hlds__typecheck__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Msg_44, 0) = ((MR_Box) (check_hlds__typecheck__Context_31));
#line 322 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Msg_44, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 322 "typecheck.m"
                }
#line 326 "typecheck.m"
                {
#line 326 "typecheck.m"
                  check_hlds__typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__typecheck__Msg_44));
#line 326 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "typecheck.m"
                }
#line 326 "typecheck.m"
                {
#line 326 "typecheck.m"
                  check_hlds__typecheck__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 326 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[0])));
#line 326 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 326 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 2) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 326 "typecheck.m"
                }
#line 287 "typecheck.m"
                {
#line 287 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Specs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_Specs_23_23, 0) = ((MR_Box) (check_hlds__typecheck__Spec_19));
#line 287 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_Specs_23_23, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Specs_0_4));
#line 287 "typecheck.m"
                }
#line 286 "typecheck.m"
              }
#line 288 "typecheck.m"
            else
#line 287 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_23_23 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_4;
#line 291 "typecheck.m"
            /* direct tailcall eliminated */
#line 291 "typecheck.m"
            {
#line 291 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__PredIds_14;
#line 291 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_Specs_23_23;

#line 291 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_0_4 = check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 291 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 291 "typecheck.m"
            }
#line 291 "typecheck.m"
            continue;
#line 278 "typecheck.m"
          }
#line 276 "typecheck.m"
      }
#line 276 "typecheck.m"
      break;
#line 276 "typecheck.m"
    }
#line 272 "typecheck.m"
}

#line 216 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_9_p_0(
#line 216 "typecheck.m"
  MR_Integer check_hlds__typecheck__Iteration_10,
#line 216 "typecheck.m"
  MR_Integer check_hlds__typecheck__MaxIterations_11,
#line 216 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_33,
#line 216 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_34,
#line 216 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIds_13,
#line 216 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_14,
#line 216 "typecheck.m"
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_15,
#line 216 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_16,
#line 216 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_17)
#line 216 "typecheck.m"
{
#line 223 "typecheck.m"
  while (MR_TRUE)
#line 223 "typecheck.m"
    {
#line 223 "typecheck.m"
      /* tailcall optimized into a loop */
#line 223 "typecheck.m"
      {
#line 223 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_52_52;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_53_53;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__PredMap0_18;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_19;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_20;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__NewlyInvalidPredIds_21;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__CurSpecs_22;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__Changed_23;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__PredMap_24;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__NewValidPredIdSet_25;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__NewValidPredIds_26;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__Globals_27;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;
#line 223 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_39_39;

#line 224 "typecheck.m"
        {
#line 224 "typecheck.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__typecheck__PredMap0_18);
        }
#line 18617 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 18619 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_53_53 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 225 "typecheck.m"
        {
#line 225 "typecheck.m"
          mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__TypeCtorInfo_53_53, check_hlds__typecheck__PredMap0_18, &check_hlds__typecheck__PredIdsInfos0_19);
        }
#line 226 "typecheck.m"
        {
#line 226 "typecheck.m"
          check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_33, check_hlds__typecheck__OrigValidPredIdSet_14, check_hlds__typecheck__PredIdsInfos0_19, &check_hlds__typecheck__PredIdsInfos_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__NewlyInvalidPredIds_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__CurSpecs_22, (MR_Integer) 0, &check_hlds__typecheck__Changed_23);
        }
#line 229 "typecheck.m"
        {
#line 229 "typecheck.m"
          mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__TypeCtorInfo_53_53, check_hlds__typecheck__PredIdsInfos_20, &check_hlds__typecheck__PredMap_24);
        }
#line 230 "typecheck.m"
        {
#line 230 "typecheck.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_24, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_33, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38);
        }
#line 232 "typecheck.m"
        {
#line 232 "typecheck.m"
          mercury__set_tree234__delete_list_3_p_0(check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__NewlyInvalidPredIds_21, check_hlds__typecheck__OrigValidPredIdSet_14, &check_hlds__typecheck__NewValidPredIdSet_25);
        }
#line 234 "typecheck.m"
        {
#line 234 "typecheck.m"
          check_hlds__typecheck__NewValidPredIds_26 = mercury__set_tree234__to_sorted_list_1_f_0(check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__NewValidPredIdSet_25);
        }
#line 235 "typecheck.m"
        {
#line 235 "typecheck.m"
          hlds__hlds_module__module_info_set_valid_predids_3_p_0(check_hlds__typecheck__NewValidPredIds_26, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_39_39);
        }
#line 237 "typecheck.m"
        {
#line 237 "typecheck.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_39_39, &check_hlds__typecheck__Globals_27);
        }
#line 239 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Changed_23 == (MR_Integer) 0);
#line 240 "typecheck.m"
        if (!(check_hlds__typecheck__succeeded))
#line 240 "typecheck.m"
          {
#line 240 "typecheck.m"
            MR_Word check_hlds__typecheck__V_40_40;

#line 240 "typecheck.m"
            {
#line 240 "typecheck.m"
              check_hlds__typecheck__V_40_40 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__typecheck__Globals_27, check_hlds__typecheck__CurSpecs_22);
            }
#line 240 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_40_40 == (MR_Integer) 1);
#line 240 "typecheck.m"
          }
#line 246 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 243 "typecheck.m"
          {
#line 243 "typecheck.m"
            *check_hlds__typecheck__FinalValidPredIdSet_15 = check_hlds__typecheck__NewValidPredIdSet_25;
#line 244 "typecheck.m"
            *check_hlds__typecheck__Specs_16 = check_hlds__typecheck__CurSpecs_22;
#line 245 "typecheck.m"
            *check_hlds__typecheck__ExceededIterationLimit_17 = (MR_Integer) 0;
#line 245 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_34 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_39_39;
#line 243 "typecheck.m"
          }
#line 246 "typecheck.m"
        else
#line 247 "typecheck.m"
          {
#line 247 "typecheck.m"
            MR_Word check_hlds__typecheck__DebugTypes_28;

#line 247 "typecheck.m"
            {
#line 247 "typecheck.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_27, (MR_Integer) 57, &check_hlds__typecheck__DebugTypes_28);
            }
#line 255 "typecheck.m"
            if ((check_hlds__typecheck__DebugTypes_28 == (MR_Integer) 0))
#line 256 "typecheck.m"
              {
#line 256 "typecheck.m"
              }
#line 255 "typecheck.m"
            else
#line 249 "typecheck.m"
              {
#line 249 "typecheck.m"
                MR_Word check_hlds__typecheck__ProgressSpecs_29;
#line 253 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_31_31;
#line 253 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_32_32;

#line 250 "typecheck.m"
                {
#line 250 "typecheck.m"
                  check_hlds__typecheck__construct_type_inference_messages_5_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_39_39, check_hlds__typecheck__NewValidPredIdSet_25, check_hlds__typecheck__OrigValidPredIds_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ProgressSpecs_29);
                }
#line 253 "typecheck.m"
                {
#line 253 "typecheck.m"
                  parse_tree__error_util__write_error_specs_8_p_0(check_hlds__typecheck__ProgressSpecs_29, check_hlds__typecheck__Globals_27, (MR_Integer) 0, &check_hlds__typecheck__V_31_31, (MR_Integer) 0, &check_hlds__typecheck__V_32_32);
                }
#line 249 "typecheck.m"
              }
#line 258 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Iteration_10 < check_hlds__typecheck__MaxIterations_11);
#line 262 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 259 "typecheck.m"
              {
#line 259 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_47_47 = (check_hlds__typecheck__Iteration_10 + (MR_Integer) 1);

#line 259 "typecheck.m"
                /* direct tailcall eliminated */
#line 259 "typecheck.m"
                {
#line 259 "typecheck.m"
                  MR_Integer check_hlds__typecheck__Iteration__tmp_copy_10 = check_hlds__typecheck__V_47_47;
#line 259 "typecheck.m"
                  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_39_39;

#line 259 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_33 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0__tmp_copy_33;
#line 259 "typecheck.m"
                  check_hlds__typecheck__Iteration_10 = check_hlds__typecheck__Iteration__tmp_copy_10;
#line 259 "typecheck.m"
                }
#line 259 "typecheck.m"
                continue;
#line 259 "typecheck.m"
              }
#line 262 "typecheck.m"
            else
#line 263 "typecheck.m"
              {
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_50_50;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__Pieces_56;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__Msg_57;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_60_60;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_63_63;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_66_66;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_69_69;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_70_70;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_87_87;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_88_88;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_92_92;

#line 263 "typecheck.m"
                *check_hlds__typecheck__FinalValidPredIdSet_15 = check_hlds__typecheck__NewValidPredIdSet_25;
#line 334 "typecheck.m"
                {
#line 334 "typecheck.m"
                  check_hlds__typecheck__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_70_70, 1) = ((MR_Box) (check_hlds__typecheck__MaxIterations_11));
#line 334 "typecheck.m"
                }
#line 334 "typecheck.m"
                {
#line 334 "typecheck.m"
                  check_hlds__typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_69_69, 0) = ((MR_Box) (check_hlds__typecheck__V_70_70));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[13])));
#line 334 "typecheck.m"
                }
#line 334 "typecheck.m"
                {
#line 334 "typecheck.m"
                  check_hlds__typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[17])));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 1) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 334 "typecheck.m"
                }
#line 333 "typecheck.m"
                {
#line 333 "typecheck.m"
                  check_hlds__typecheck__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[16])));
#line 333 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 1) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 333 "typecheck.m"
                }
#line 332 "typecheck.m"
                {
#line 332 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[15])));
#line 332 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 1) = ((MR_Box) (check_hlds__typecheck__V_63_63));
#line 332 "typecheck.m"
                }
#line 331 "typecheck.m"
                {
#line 331 "typecheck.m"
                  check_hlds__typecheck__Pieces_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[14])));
#line 331 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_56, 1) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 331 "typecheck.m"
                }
#line 338 "typecheck.m"
                {
#line 338 "typecheck.m"
                  check_hlds__typecheck__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_88_88, 0) = ((MR_Box) (check_hlds__typecheck__Pieces_56));
#line 338 "typecheck.m"
                }
#line 338 "typecheck.m"
                {
#line 338 "typecheck.m"
                  check_hlds__typecheck__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_87_87, 0) = ((MR_Box) (check_hlds__typecheck__V_88_88));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "typecheck.m"
                }
#line 338 "typecheck.m"
                {
#line 338 "typecheck.m"
                  check_hlds__typecheck__Msg_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_57, 1) = ((MR_Box) ((MR_Integer) 1));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_57, 2) = ((MR_Box) ((MR_Integer) 0));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_57, 3) = ((MR_Box) (check_hlds__typecheck__V_87_87));
#line 338 "typecheck.m"
                }
#line 339 "typecheck.m"
                {
#line 339 "typecheck.m"
                  check_hlds__typecheck__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_92_92, 0) = ((MR_Box) (check_hlds__typecheck__Msg_57));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "typecheck.m"
                }
#line 339 "typecheck.m"
                {
#line 339 "typecheck.m"
                  check_hlds__typecheck__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_50_50, 2) = ((MR_Box) (check_hlds__typecheck__V_92_92));
#line 339 "typecheck.m"
                }
#line 264 "typecheck.m"
                {
#line 264 "typecheck.m"
                  MR_Word base;
#line 264 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "typecheck.m"
                  *check_hlds__typecheck__Specs_16 = base;
#line 264 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_50_50));
#line 264 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "typecheck.m"
                }
#line 265 "typecheck.m"
                *check_hlds__typecheck__ExceededIterationLimit_17 = (MR_Integer) 1;
#line 265 "typecheck.m"
                *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_34 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_39_39;
#line 263 "typecheck.m"
              }
#line 247 "typecheck.m"
          }
#line 223 "typecheck.m"
      }
#line 223 "typecheck.m"
      break;
#line 223 "typecheck.m"
    }
#line 216 "typecheck.m"
}

#line 185 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
#line 185 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 185 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 185 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 185 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 185 "typecheck.m"
{
#line 189 "typecheck.m"
  {
#line 189 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 189 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "typecheck.m"
      *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 189 "typecheck.m"
    else
#line 191 "typecheck.m"
      {
#line 191 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 191 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 191 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo_11;
#line 191 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_12;
#line 191 "typecheck.m"
        MR_Word check_hlds__typecheck__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 0)));
#line 191 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 1)));

#line 194 "typecheck.m"
        {
#line 194 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_14)));
        }
#line 206 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 196 "typecheck.m"
          {
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalIdClausesInfo0_15;
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalIdClausesInfo_17;
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__Globals_18;
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21;
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22;
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__ImportStatus_30;
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__ClausesInfo0_31;
#line 196 "typecheck.m"
            MR_Word check_hlds__typecheck__ClausesRep0_32;
#line 197 "typecheck.m"
            MR_Word check_hlds__typecheck___ContainingGoalMap_16;
#line 1019 "typecheck.m"
            MR_Word check_hlds__typecheck___ItemNumbers0_33;
#line 1021 "typecheck.m"
            MR_Word check_hlds__typecheck__V_57_57;
#line 1021 "typecheck.m"
            MR_Word check_hlds__typecheck__V_58_58;

#line 196 "typecheck.m"
            {
#line 196 "typecheck.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__GoalIdClausesInfo0_15);
            }
#line 197 "typecheck.m"
            {
#line 197 "typecheck.m"
              hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck___ContainingGoalMap_16, check_hlds__typecheck__GoalIdClausesInfo0_15, &check_hlds__typecheck__GoalIdClausesInfo_17);
            }
#line 199 "typecheck.m"
            {
#line 199 "typecheck.m"
              hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__GoalIdClausesInfo_17, check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 1017 "typecheck.m"
            {
#line 1017 "typecheck.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ImportStatus_30);
            }
#line 1018 "typecheck.m"
            {
#line 1018 "typecheck.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ClausesInfo0_31);
            }
#line 1019 "typecheck.m"
            {
#line 1019 "typecheck.m"
              hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesRep0_32, &check_hlds__typecheck___ItemNumbers0_33);
            }
#line 1021 "typecheck.m"
            {
#line 1021 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 1021 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1021 "typecheck.m"
              {
#line 1022 "typecheck.m"
                {
#line 1022 "typecheck.m"
                  check_hlds__typecheck__V_57_57 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_32);
                }
#line 1022 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_57_57 == (MR_Integer) 1);
#line 1021 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1021 "typecheck.m"
                  {
#line 1023 "typecheck.m"
                    {
#line 1023 "typecheck.m"
                      check_hlds__typecheck__V_58_58 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__typecheck__ImportStatus_30);
                    }
#line 1023 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_58_58 == (MR_Integer) 1);
#line 1021 "typecheck.m"
                  }
#line 1021 "typecheck.m"
              }
#line 1051 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1025 "typecheck.m"
              {
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeInfo_53_75;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadVars_34;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncArgs_35;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncRetVal_36;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__Context_37;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncModule_38;
#line 1025 "typecheck.m"
                MR_String check_hlds__typecheck__FuncName_39;
#line 1025 "typecheck.m"
                MR_Integer check_hlds__typecheck__PredArity_40;
#line 1025 "typecheck.m"
                MR_Integer check_hlds__typecheck__FuncArity_41;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncSymName_42;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncConsId_43;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncRHS_44;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__Goal0_45;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalExpr_46;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalInfo0_47;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__NonLocals_48;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalInfo_49;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__Goal_50;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__Clause_51;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesRep_52;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__ItemNumbers_53;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesInfo_54;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers0_55;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers_56;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__V_60_60;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__V_64_64;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71;
#line 1025 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72;
#line 1026 "typecheck.m"
                MR_Box check_hlds__typecheck__conv0_FuncRetVal_36;

#line 1025 "typecheck.m"
                {
#line 1025 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__HeadVars_34);
                }
#line 19142 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeInfo_53_75 = (MR_Word) &check_hlds__typecheck_scalar_common_1[2];
#line 1026 "typecheck.m"
                {
#line 1026 "typecheck.m"
                  hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34, &check_hlds__typecheck__FuncArgs_35, &check_hlds__typecheck__conv0_FuncRetVal_36);
                }
#line 1026 "typecheck.m"
                check_hlds__typecheck__FuncRetVal_36 = ((MR_Word) check_hlds__typecheck__conv0_FuncRetVal_36);
#line 1027 "typecheck.m"
                {
#line 1027 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_37);
                }
#line 1028 "typecheck.m"
                {
#line 1028 "typecheck.m"
                  check_hlds__typecheck__FuncModule_38 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1029 "typecheck.m"
                {
#line 1029 "typecheck.m"
                  check_hlds__typecheck__FuncName_39 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1030 "typecheck.m"
                {
#line 1030 "typecheck.m"
                  check_hlds__typecheck__PredArity_40 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1031 "typecheck.m"
                {
#line 1031 "typecheck.m"
                  parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &check_hlds__typecheck__FuncArity_41, check_hlds__typecheck__PredArity_40);
                }
#line 1032 "typecheck.m"
                {
#line 1032 "typecheck.m"
                  check_hlds__typecheck__FuncSymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1032 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 0) = ((MR_Box) (check_hlds__typecheck__FuncModule_38));
#line 1032 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 1) = ((MR_Box) (check_hlds__typecheck__FuncName_39));
#line 1032 "typecheck.m"
                }
#line 1033 "typecheck.m"
                {
#line 1033 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 1033 "typecheck.m"
                {
#line 1033 "typecheck.m"
                  check_hlds__typecheck__FuncConsId_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1033 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 1) = ((MR_Box) (check_hlds__typecheck__FuncSymName_42));
#line 1033 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 2) = ((MR_Box) (check_hlds__typecheck__FuncArity_41));
#line 1033 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 3) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 1033 "typecheck.m"
                }
#line 1034 "typecheck.m"
                {
#line 1034 "typecheck.m"
                  check_hlds__typecheck__FuncRHS_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 0) = ((MR_Box) (check_hlds__typecheck__FuncConsId_43));
#line 1034 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1034 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 2) = ((MR_Box) (check_hlds__typecheck__FuncArgs_35));
#line 1034 "typecheck.m"
                }
#line 1035 "typecheck.m"
                {
#line 1035 "typecheck.m"
                  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__typecheck__FuncRetVal_36, check_hlds__typecheck__FuncRHS_44, check_hlds__typecheck__Context_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Goal0_45);
                }
#line 1037 "typecheck.m"
                check_hlds__typecheck__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 0)));
#line 1037 "typecheck.m"
                check_hlds__typecheck__GoalInfo0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 1)));
#line 1038 "typecheck.m"
                {
#line 1038 "typecheck.m"
                  check_hlds__typecheck__V_64_64 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34);
                }
#line 1038 "typecheck.m"
                {
#line 1038 "typecheck.m"
                  check_hlds__typecheck__NonLocals_48 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck__V_64_64);
                }
#line 1039 "typecheck.m"
                {
#line 1039 "typecheck.m"
                  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__typecheck__NonLocals_48, check_hlds__typecheck__GoalInfo0_47, &check_hlds__typecheck__GoalInfo_49);
                }
#line 1040 "typecheck.m"
                {
#line 1040 "typecheck.m"
                  check_hlds__typecheck__Goal_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1040 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_46));
#line 1040 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_49));
#line 1040 "typecheck.m"
                }
#line 1041 "typecheck.m"
                {
#line 1041 "typecheck.m"
                  check_hlds__typecheck__Clause_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 1) = ((MR_Box) (check_hlds__typecheck__Goal_50));
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 3) = ((MR_Box) (check_hlds__typecheck__Context_37));
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1041 "typecheck.m"
                }
#line 1042 "typecheck.m"
                {
#line 1042 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__Clause_51));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "typecheck.m"
                }
#line 1042 "typecheck.m"
                {
#line 1042 "typecheck.m"
                  hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__V_68_68, &check_hlds__typecheck__ClausesRep_52);
                }
#line 1043 "typecheck.m"
                {
#line 1043 "typecheck.m"
                  check_hlds__typecheck__ItemNumbers_53 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
                }
#line 1044 "typecheck.m"
                {
#line 1044 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_52, check_hlds__typecheck__ItemNumbers_53, check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesInfo_54);
                }
#line 1046 "typecheck.m"
                {
#line 1046 "typecheck.m"
                  hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71);
                }
#line 1047 "typecheck.m"
                {
#line 1047 "typecheck.m"
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__ClausesInfo_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72);
                }
#line 1048 "typecheck.m"
                {
#line 1048 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__Markers0_55);
                }
#line 1049 "typecheck.m"
                {
#line 1049 "typecheck.m"
                  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, check_hlds__typecheck__Markers0_55, &check_hlds__typecheck__Markers_56);
                }
#line 1050 "typecheck.m"
                {
#line 1050 "typecheck.m"
                  hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_56, check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21);
                }
#line 1025 "typecheck.m"
              }
#line 1051 "typecheck.m"
            else
#line 1050 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 203 "typecheck.m"
            {
#line 203 "typecheck.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__Globals_18);
            }
#line 204 "typecheck.m"
            {
#line 204 "typecheck.m"
              hlds__headvar_names__maybe_improve_headvar_names_3_p_0(check_hlds__typecheck__Globals_18, check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22);
            }
#line 205 "typecheck.m"
            {
#line 205 "typecheck.m"
              check_hlds__typecheck__PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 205 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 0) = ((MR_Box) (check_hlds__typecheck__PredId_14));
#line 205 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22));
#line 205 "typecheck.m"
            }
#line 196 "typecheck.m"
          }
#line 206 "typecheck.m"
        else
#line 207 "typecheck.m"
          check_hlds__typecheck__PredIdInfo_11 = check_hlds__typecheck__PredIdInfo0_9;
#line 210 "typecheck.m"
        {
#line 210 "typecheck.m"
          check_hlds__typecheck__prepare_for_typecheck_4_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_10, &check_hlds__typecheck__PredIdsInfos_12);
        }
#line 191 "typecheck.m"
        {
#line 191 "typecheck.m"
          MR_Word base;
#line 191 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 191 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__PredIdInfo_11));
#line 191 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__PredIdsInfos_12));
#line 191 "typecheck.m"
        }
#line 191 "typecheck.m"
      }
#line 189 "typecheck.m"
  }
#line 185 "typecheck.m"
}

#line 92 "typecheck.m"
void MR_CALL 
check_hlds__typecheck__typecheck_module_4_p_0(
#line 92 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19,
#line 92 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20,
#line 92 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_6,
#line 92 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_7)
#line 92 "typecheck.m"
{
#line 149 "typecheck.m"
  {
#line 149 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_27_27;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_28_28;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__Globals_8;
#line 149 "typecheck.m"
    MR_Integer check_hlds__typecheck__MaxIterations_9;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigValidPredIds_10;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigValidPredIdSet_11;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMap0_12;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIdsInfos0_13;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIdsInfos_14;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMap_15;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__FinalValidPredIdSet_16;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__CheckSpecs_17;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__InferSpecs_18;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22;
#line 149 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_23_23;

#line 150 "typecheck.m"
    {
#line 150 "typecheck.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__Globals_8);
    }
#line 151 "typecheck.m"
    {
#line 151 "typecheck.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck__Globals_8, (MR_Integer) 166, &check_hlds__typecheck__MaxIterations_9);
    }
#line 154 "typecheck.m"
    {
#line 154 "typecheck.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&check_hlds__typecheck__OrigValidPredIds_10, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 19438 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 155 "typecheck.m"
    {
#line 155 "typecheck.m"
      check_hlds__typecheck__OrigValidPredIdSet_11 = mercury__set_tree234__list_to_set_1_f_0(check_hlds__typecheck__TypeCtorInfo_27_27, check_hlds__typecheck__OrigValidPredIds_10);
    }
#line 157 "typecheck.m"
    {
#line 157 "typecheck.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22, &check_hlds__typecheck__PredMap0_12);
    }
#line 19450 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 158 "typecheck.m"
    {
#line 158 "typecheck.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_27_27, check_hlds__typecheck__TypeCtorInfo_28_28, check_hlds__typecheck__PredMap0_12, &check_hlds__typecheck__PredIdsInfos0_13);
    }
#line 171 "typecheck.m"
    {
#line 171 "typecheck.m"
      check_hlds__typecheck__prepare_for_typecheck_4_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__typecheck__OrigValidPredIdSet_11, check_hlds__typecheck__PredIdsInfos0_13, &check_hlds__typecheck__PredIdsInfos_14);
    }
#line 174 "typecheck.m"
    {
#line 174 "typecheck.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_27_27, check_hlds__typecheck__TypeCtorInfo_28_28, check_hlds__typecheck__PredIdsInfos_14, &check_hlds__typecheck__PredMap_15);
    }
#line 175 "typecheck.m"
    {
#line 175 "typecheck.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_15, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_23_23);
    }
#line 177 "typecheck.m"
    {
#line 177 "typecheck.m"
      check_hlds__typecheck__typecheck_to_fixpoint_9_p_0((MR_Integer) 1, check_hlds__typecheck__MaxIterations_9, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_23_23, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20, check_hlds__typecheck__OrigValidPredIds_10, check_hlds__typecheck__OrigValidPredIdSet_11, &check_hlds__typecheck__FinalValidPredIdSet_16, &check_hlds__typecheck__CheckSpecs_17, check_hlds__typecheck__ExceededIterationLimit_7);
    }
#line 181 "typecheck.m"
    {
#line 181 "typecheck.m"
      check_hlds__typecheck__construct_type_inference_messages_5_p_0(*check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20, check_hlds__typecheck__FinalValidPredIdSet_16, check_hlds__typecheck__OrigValidPredIds_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__InferSpecs_18);
    }
#line 183 "typecheck.m"
    {
#line 183 "typecheck.m"
      *check_hlds__typecheck__Specs_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__InferSpecs_18, check_hlds__typecheck__CheckSpecs_17);
    }
#line 149 "typecheck.m"
  }
#line 92 "typecheck.m"
}

void mercury__check_hlds__typecheck__init(void)
{
}

void mercury__check_hlds__typecheck__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_constraints_action_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0);
	MR_register_type_ctor_info(&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_stuff_to_check_0);
}

void mercury__check_hlds__typecheck__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.typecheck. */
