/*
** Automatically generated from `typecheck.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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
#include "cord.mih"
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
#include "check_hlds.type_assign.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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



#line 3186 "typecheck.m"
struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s {
#line 3186 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4;
#line 3189 "typecheck.m"
  MR_bool check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
#line 3189 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9;
#line 3192 "typecheck.m"
  jmp_buf check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0;
#line 3192 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13;
#line 3192 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12;
#line 3186 "typecheck.m"
};

#line 908 "typecheck.m"
struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s {
#line 908 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3;
#line 911 "typecheck.m"
  MR_bool check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
#line 911 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6;
#line 913 "typecheck.m"
  jmp_buf check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0;
#line 913 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7;
#line 908 "typecheck.m"
};


#line 186 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 189 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 192 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 195 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 198 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 201 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 204 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

#line 207 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__pseudo_1;

#line 210 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 213 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 216 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 219 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0;

#line 222 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1;

#line 225 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2;

#line 228 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3];

#line 231 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3];

#line 234 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3];

#line 237 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 240 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0[2];

#line 243 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0;

#line 246 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0[1];

#line 249 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0[1];

#line 252 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0[1];

#line 255 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0[1];

#line 258 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0;

#line 261 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0;

#line 264 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1];

#line 267 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0;

#line 270 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1];

#line 273 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1;

#line 276 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1];

#line 279 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1];

#line 282 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0[2];

#line 285 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2];

#line 288 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2];

#line 291 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0;

#line 294 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1;

#line 297 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2];

#line 300 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2];

#line 303 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2];

#line 306 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
#line 309 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 311 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 314 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
#line 317 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 319 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 321 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 324 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0_10001(
#line 327 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 329 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 332 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0_10001(
#line 335 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 337 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 339 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 342 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
#line 345 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 347 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 350 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
#line 353 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 355 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 357 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 360 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
#line 363 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 365 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 368 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
#line 371 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 373 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 375 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 378 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
#line 381 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 383 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 386 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
#line 389 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 391 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 393 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 2903 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
#line 2903 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_6,
#line 2903 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_7,
#line 2903 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8);

#line 2455 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(
#line 2455 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2455 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2455 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2455 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2418 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 2418 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2418 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_3,
#line 2418 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2418 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5);

#line 2402 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(
#line 2402 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2402 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsDefns_3,
#line 2402 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2402 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5);

#line 2183 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(
#line 2183 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2183 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2183 "typecheck.m"
  MR_Word check_hlds__typecheck__Types_3,
#line 2183 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 2183 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6);

#line 3418 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3418__2_1_f_0(
#line 3418 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_36);

#line 1473 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1473__1_2_p_0(
#line 1473 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalType_94,
#line 1473 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_160);

#line 505 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__505__1_2_p_0(
#line 505 "typecheck.m"
  MR_Word check_hlds__typecheck__StartingSpecs_22,
#line 505 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_51);

#line 1134 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
#line 1134 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 1134 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1134 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 1134 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
#line 1134 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 1134 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3022 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
#line 3022 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3022 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3022 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 3022 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
#line 3022 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3022 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2387 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
#line 2387 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2387 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2387 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2387 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
#line 2387 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2387 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2384 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0(
#line 2384 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2384 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2384 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2384 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0(
#line 2384 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2384 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3388 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
#line 3388 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 3388 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
#line 3388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 3388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3418 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
#line 3418 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3418 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 3406 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__Action_8,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
#line 3406 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10);

#line 3393 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
#line 3393 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3393 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3393 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3393 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3393 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__5_5);

#line 3370 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
#line 3370 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3370 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 3370 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3);

#line 3236 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
#line 3236 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3236 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3236 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3236 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3236 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3236 "typecheck.m"
  MR_Word * check_hlds__typecheck__DataConsErrors_12);

#line 2958 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
#line 2958 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2958 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2958 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 3207 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
#line 3207 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3207 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3207 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3207 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3207 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3207 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsErrors_12);

#line 3192 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
#line 3192 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 3192 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
#line 3192 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 3192 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
#line 3192 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 3186 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
#line 3186 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_4,
#line 3186 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint0_5,
#line 3186 "typecheck.m"
  MR_Word * check_hlds__typecheck__Constraint_6);

#line 3177 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
#line 3177 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_3,
#line 3177 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4);

#line 3170 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
#line 3170 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3170 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 3170 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 3169 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
#line 3169 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3169 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 3159 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
#line 3159 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_7,
#line 3159 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarSet_8,
#line 3159 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_9,
#line 3159 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_10,
#line 3159 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
#line 3159 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21);

#line 3026 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_8,
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_9,
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_10,
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_11,
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
#line 3026 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14);

#line 2962 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_9,
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__FuncName_11,
#line 2962 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_12,
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_13,
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_14,
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_15,
#line 2962 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16);

#line 2958 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
#line 2958 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2958 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2958 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 2942 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
#line 2942 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2942 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 2942 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2942 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 2942 "typecheck.m"
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10);

#line 2821 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__make_pred_cons_info_list_7_p_0(
#line 2821 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2821 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2821 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTable_3,
#line 2821 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_4,
#line 2821 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_5,
#line 2821 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
#line 2821 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7);

#line 2802 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
#line 2802 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2802 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_7,
#line 2802 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_8,
#line 2802 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 2802 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10);

#line 2718 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
#line 2718 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2718 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 2718 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2718 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);

#line 2703 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_2,
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__PredOrFunc_3,
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVars_6,
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2703 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8);

#line 2663 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_3_p_0(
#line 2663 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2663 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_4,
#line 2663 "typecheck.m"
  MR_Word check_hlds__typecheck__Var0_5,
#line 2663 "typecheck.m"
  MR_Word * check_hlds__typecheck__Var_6);

#line 2661 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0_1(
#line 2661 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2661 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2661 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 2657 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0(
#line 2657 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2657 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars0_4,
#line 2657 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_5,
#line 2657 "typecheck.m"
  MR_Word * check_hlds__typecheck__Vars_6);

#line 2567 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
#line 2567 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsType_6,
#line 2567 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_7,
#line 2567 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_8,
#line 2567 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
#line 2567 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16);

#line 2469 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(
#line 2469 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2469 "typecheck.m"
  MR_Word check_hlds__typecheck__X_2,
#line 2469 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_3,
#line 2469 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2469 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2438 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_functor_type_4_p_0(
#line 2438 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2438 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2438 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
#line 2438 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4);

#line 2321 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2(
#line 2321 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2321 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 2277 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
#line 2277 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2277 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2277 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2277 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 2267 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_13,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_14,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_15,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_16,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_17,
#line 2267 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_18,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_54,
#line 2267 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_55);

#line 2248 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
#line 2248 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_4,
#line 2248 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsType_5,
#line 2248 "typecheck.m"
  MR_String * check_hlds__typecheck__BuiltinTypeName_6);

#line 2199 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unification_10_p_0(
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_13,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__X_14,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__RHS0_15,
#line 2199 "typecheck.m"
  MR_Word * check_hlds__typecheck__RHS_16,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33,
#line 2199 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_35,
#line 2199 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_36);

#line 2123 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
#line 2123 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2123 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2123 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_3,
#line 2123 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2123 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2101 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_8_p_0(
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalContext_9,
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_10,
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_11,
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_12,
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_13,
#line 2101 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_14,
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 2101 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 2093 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(
#line 2093 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 2093 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_8,
#line 2093 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11,
#line 2093 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12,
#line 2093 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 2093 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14);

#line 2048 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_13,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_14,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_15,
#line 2048 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_16,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_17,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_18,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_19,
#line 2048 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_20,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_35,
#line 2048 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_36,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37,
#line 2048 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38);

#line 2023 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_2,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_3,
#line 2023 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_4,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__6_6,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2023 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_9,
#line 2023 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_10,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
#line 2023 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12);

#line 1923 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
#line 1923 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1923 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1923 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1923 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

#line 1907 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__skip_arg_2_p_0(
#line 1907 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1907 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2);

#line 1868 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(
#line 1868 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_1,
#line 1868 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_2,
#line 1868 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1868 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1868 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1868 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_6,
#line 1868 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1868 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8);

#line 1825 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__PredExistQVars_3,
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__PredArgTypes_4,
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__PredConstraints_5,
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
#line 1825 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7);

#line 1781 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
#line 1781 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7);

#line 2020 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1(
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2020 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 1721 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0(
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_10,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_13,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27,
#line 1721 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_29,
#line 1721 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_30);

#line 1667 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__SimpleCallId_10,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_13,
#line 1667 "typecheck.m"
  MR_Word * check_hlds__typecheck__PredId_14,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31,
#line 1667 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_33,
#line 1667 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_34);

#line 2020 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0_1(
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2020 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 1640 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0(
#line 1640 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_8,
#line 1640 "typecheck.m"
  MR_String check_hlds__typecheck__EventName_9,
#line 1640 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_10,
#line 1640 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1640 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1640 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1640 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 1578 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_9_p_0(
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__GenericCallId_10,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__PredVar_12,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_13,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1578 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1578 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27);

#line 1552 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0(
#line 1552 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1552 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1552 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1552 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22,
#line 1552 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23,
#line 1552 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_24,
#line 1552 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_25);

#line 1528 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_7_p_0(
#line 1528 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1528 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1528 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1528 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1528 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1528 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1528 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 1514 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_7_p_0(
#line 1514 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1514 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 1514 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1514 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1514 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
#line 1514 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
#line 1514 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7);

#line 1505 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
#line 1505 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1);

#line 1473 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
#line 1473 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg);

#line 1471 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_2(
#line 1471 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1471 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 1471 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 1471 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3,
#line 1471 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_4,
#line 1471 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_5);

#line 1420 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_1(
#line 1420 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1420 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 1275 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0(
#line 1275 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalExpr0_8,
#line 1275 "typecheck.m"
  MR_Word * check_hlds__typecheck__GoalExpr_9,
#line 1275 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalInfo_10,
#line 1275 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115,
#line 1275 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116,
#line 1275 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_117,
#line 1275 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_118);

#line 1212 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_7_p_0(
#line 1212 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_8,
#line 1212 "typecheck.m"
  MR_Word * check_hlds__typecheck__Goal_9,
#line 1212 "typecheck.m"
  MR_Word check_hlds__typecheck__EnclosingContext_10,
#line 1212 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
#line 1212 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
#line 1212 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
#line 1212 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31);

#line 1148 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(
#line 1148 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 1148 "typecheck.m"
  MR_Word check_hlds__typecheck__StuffToCheck_8,
#line 1148 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1148 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet_10,
#line 1148 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_28,
#line 1148 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_29);

#line 2020 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_1(
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2020 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 1107 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0(
#line 1107 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1107 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_10,
#line 1107 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_22,
#line 1107 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_23,
#line 1107 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1107 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1107 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1107 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27);

#line 1067 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_8_p_0(
#line 1067 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1067 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1067 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1067 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 1067 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1067 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
#line 1067 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1067 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8);

#line 962 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
#line 962 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 962 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 962 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 962 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

#line 928 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__KindMap_8,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesA_10,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesB_13,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsB_14);

#line 913 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
#line 913 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 913 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
#line 913 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 913 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
#line 913 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 908 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
#line 908 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
#line 908 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4);

#line 905 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
#line 905 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 905 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 892 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
#line 892 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 892 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVarTypes_7,
#line 892 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 892 "typecheck.m"
  MR_Word * check_hlds__typecheck__UnprovenCs_10);

#line 857 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
#line 857 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypeVars_5,
#line 857 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExistQVars_6,
#line 857 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeParams0_7,
#line 857 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadTypeParams_8);

#line 835 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
#line 835 "typecheck.m"
  MR_Word check_hlds__typecheck__Renaming_4,
#line 835 "typecheck.m"
  MR_Word check_hlds__typecheck__Origin0_5,
#line 835 "typecheck.m"
  MR_Word * check_hlds__typecheck__Origin_6);

#line 784 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
#line 784 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_5,
#line 784 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16,
#line 784 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_17,
#line 784 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7);

#line 757 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_6_p_0(
#line 757 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 757 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_8,
#line 757 "typecheck.m"
  MR_Word check_hlds__typecheck__Impl_9,
#line 757 "typecheck.m"
  MR_Word check_hlds__typecheck__TVar_10,
#line 757 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
#line 757 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17);

#line 751 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
#line 751 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 751 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 751 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 751 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 744 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
#line 744 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_6,
#line 744 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVars_7,
#line 744 "typecheck.m"
  MR_Word check_hlds__typecheck__Clause_8,
#line 744 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 744 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21);

#line 695 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
#line 695 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 695 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 695 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 695 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 535 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_8,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_9,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_70,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_71,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_72,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_12);

#line 505 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0_1(
#line 505 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg);

#line 441 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0(
#line 441 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7,
#line 441 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_8,
#line 441 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 441 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_33,
#line 441 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_10,
#line 441 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_11);

#line 346 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 346 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
#line 346 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
#line 346 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_9,
#line 346 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_10);

#line 273 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
#line 273 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 273 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 273 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 273 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_4,
#line 273 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_5);

#line 219 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_9_p_0(
#line 219 "typecheck.m"
  MR_Integer check_hlds__typecheck__Iteration_10,
#line 219 "typecheck.m"
  MR_Integer check_hlds__typecheck__MaxIterations_11,
#line 219 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32,
#line 219 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33,
#line 219 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIds_13,
#line 219 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_14,
#line 219 "typecheck.m"
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_15,
#line 219 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_16,
#line 219 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_17);

#line 188 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
#line 188 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 188 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 188 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 188 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);


static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[23][2];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[5][1];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[7][5];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[2][8];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[2][9];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_8[2][6];

static /* final */ const MR_Integer check_hlds__typecheck_scalar_common_9[1][2];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_10[1][7];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_11[1][11];




static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[23][2] = {
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
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
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
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_8[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_clause_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_5[2])),
    ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_8[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_event_call_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_8[0])),
    ((MR_Box) (check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_5[4])),
    ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_5[6])),
    ((MR_Box) (check_hlds__typecheck__convert_cons_defn_5_p_1_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 43)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "--type-inference-iteration-limit"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "tuple"))
  },
  /* row 4 */
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

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[2][8] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_8[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
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

static /* final */ const MR_Integer check_hlds__typecheck_scalar_common_9[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_10[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&check_hlds__typecheck_scalar_common_9[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&check_hlds__typecheck__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__pseudo_1)),
    ((MR_Box) (&check_hlds__typecheck__term__pti_var_1__pseudo_1))
  },
};

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_11[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_field_access_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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



#line 2171 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2179 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2187 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2195 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2203 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2211 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2219 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0
  }
};

#line 2227 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2235 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__pti_var_1__pseudo_1
  }
};

#line 2244 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2252 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2261 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0 = {
  (MR_String) "flip_constraints_for_new",
  (MR_Integer) 0
};

#line 2267 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1 = {
  (MR_String) "flip_constraints_for_field_set",
  (MR_Integer) 1
};

#line 2273 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2 = {
  (MR_String) "do_not_flip_constraints",
  (MR_Integer) 2
};

#line 2279 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2
};

#line 2286 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0
};

#line 2293 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2300 "check_hlds.typecheck.c"
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

#line 2321 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2329 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2335 "check_hlds.typecheck.c"
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

#line 2350 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0
};

#line 2355 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0
  }
};

#line 2364 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0
};

#line 2369 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0[1] = {
  (MR_Integer) 0
};

#line 2374 "check_hlds.typecheck.c"
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

#line 2395 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0,
    (MR_TypeInfo) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0
  }
};

#line 2404 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck__pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0
  }
};

#line 2412 "check_hlds.typecheck.c"
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
    (MR_PseudoTypeInfo) &check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2433 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0
};

#line 2438 "check_hlds.typecheck.c"
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

#line 2453 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0
};

#line 2458 "check_hlds.typecheck.c"
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

#line 2473 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

#line 2478 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1
};

#line 2483 "check_hlds.typecheck.c"
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

#line 2497 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

#line 2503 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2509 "check_hlds.typecheck.c"
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

#line 2530 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0 = {
  (MR_String) "clause_only",
  (MR_Integer) 0
};

#line 2536 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1 = {
  (MR_String) "whole_pred",
  (MR_Integer) 1
};

#line 2542 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

#line 2548 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

#line 2554 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2560 "check_hlds.typecheck.c"
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

#line 2581 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
#line 2584 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2586 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2588 "check_hlds.typecheck.c"
{
#line 2590 "check_hlds.typecheck.c"
  {
#line 2592 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2595 "check_hlds.typecheck.c"
    {
#line 2597 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_constraints_action_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2600 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2602 "check_hlds.typecheck.c"
  }
#line 2604 "check_hlds.typecheck.c"
}

#line 2607 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
#line 2610 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2612 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2614 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2616 "check_hlds.typecheck.c"
{
#line 2618 "check_hlds.typecheck.c"
  {
#line 2620 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2623 "check_hlds.typecheck.c"
    {
#line 2625 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_constraints_action_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2628 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2630 "check_hlds.typecheck.c"
  }
#line 2632 "check_hlds.typecheck.c"
}

#line 2635 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0_10001(
#line 2638 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2640 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2642 "check_hlds.typecheck.c"
{
#line 2644 "check_hlds.typecheck.c"
  {
#line 2646 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2649 "check_hlds.typecheck.c"
    {
#line 2651 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2654 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2656 "check_hlds.typecheck.c"
  }
#line 2658 "check_hlds.typecheck.c"
}

#line 2661 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0_10001(
#line 2664 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2666 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2668 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2670 "check_hlds.typecheck.c"
{
#line 2672 "check_hlds.typecheck.c"
  {
#line 2674 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2677 "check_hlds.typecheck.c"
    {
#line 2679 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_type_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2682 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2684 "check_hlds.typecheck.c"
  }
#line 2686 "check_hlds.typecheck.c"
}

#line 2689 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
#line 2692 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2694 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2696 "check_hlds.typecheck.c"
{
#line 2698 "check_hlds.typecheck.c"
  {
#line 2700 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2703 "check_hlds.typecheck.c"
    {
#line 2705 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_assign_set_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2708 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2710 "check_hlds.typecheck.c"
  }
#line 2712 "check_hlds.typecheck.c"
}

#line 2715 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
#line 2718 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2720 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2722 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2724 "check_hlds.typecheck.c"
{
#line 2726 "check_hlds.typecheck.c"
  {
#line 2728 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2731 "check_hlds.typecheck.c"
    {
#line 2733 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_type_assign_set_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2736 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2738 "check_hlds.typecheck.c"
  }
#line 2740 "check_hlds.typecheck.c"
}

#line 2743 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
#line 2746 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2748 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2750 "check_hlds.typecheck.c"
{
#line 2752 "check_hlds.typecheck.c"
  {
#line 2754 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2757 "check_hlds.typecheck.c"
    {
#line 2759 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2762 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2764 "check_hlds.typecheck.c"
  }
#line 2766 "check_hlds.typecheck.c"
}

#line 2769 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
#line 2772 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2774 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2776 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2778 "check_hlds.typecheck.c"
{
#line 2780 "check_hlds.typecheck.c"
  {
#line 2782 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2785 "check_hlds.typecheck.c"
    {
#line 2787 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2790 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2792 "check_hlds.typecheck.c"
  }
#line 2794 "check_hlds.typecheck.c"
}

#line 2797 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
#line 2800 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2802 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2804 "check_hlds.typecheck.c"
{
#line 2806 "check_hlds.typecheck.c"
  {
#line 2808 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2811 "check_hlds.typecheck.c"
    {
#line 2813 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____stuff_to_check_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2816 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2818 "check_hlds.typecheck.c"
  }
#line 2820 "check_hlds.typecheck.c"
}

#line 2823 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
#line 2826 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2828 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2830 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2832 "check_hlds.typecheck.c"
{
#line 2834 "check_hlds.typecheck.c"
  {
#line 2836 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2839 "check_hlds.typecheck.c"
    {
#line 2841 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____stuff_to_check_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2844 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2846 "check_hlds.typecheck.c"
  }
#line 2848 "check_hlds.typecheck.c"
}

#line 2903 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
#line 2903 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_6,
#line 2903 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_7,
#line 2903 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8)
#line 2903 "typecheck.m"
{
#line 2906 "typecheck.m"
  {
#line 2906 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_21_42;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_22_43;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_23_44;
#line 2906 "typecheck.m"
    MR_String check_hlds__typecheck__ApplyName_9;
#line 2906 "typecheck.m"
    MR_String check_hlds__typecheck__ApplyNameToUse_12;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__Purity_13;
#line 2906 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity1_14;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_15;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__FuncType_16;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_17;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__RetType_18;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars_19;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_20;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 2906 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_22_22;
#line 2906 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_23_23;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_36;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_37;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet1_38;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__RetTypeVar_39;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 2906 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;
#line 2907 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_10_10;
#line 2907 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;

#line 2907 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2907 "typecheck.m"
      {
#line 2907 "typecheck.m"
        check_hlds__typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 1)));
#line 2907 "typecheck.m"
        check_hlds__typecheck__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 2)));
#line 2907 "typecheck.m"
        check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 3)));
#line 2907 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 2907 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2907 "typecheck.m"
          {
#line 2907 "typecheck.m"
            check_hlds__typecheck__ApplyName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_21_21, (MR_Integer) 0)));
#line 2913 "typecheck.m"
            if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "") == 0))
#line 2914 "typecheck.m"
              {
#line 2915 "typecheck.m"
                check_hlds__typecheck__ApplyNameToUse_12 = (MR_String) "apply";
#line 2916 "typecheck.m"
                check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
#line 2914 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2914 "typecheck.m"
              }
#line 2913 "typecheck.m"
            else
#line 2913 "typecheck.m"
              if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "apply") == 0))
#line 2910 "typecheck.m"
                {
#line 2911 "typecheck.m"
                  check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2912 "typecheck.m"
                  check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
#line 2910 "typecheck.m"
                  check_hlds__typecheck__succeeded = MR_TRUE;
#line 2910 "typecheck.m"
                }
#line 2913 "typecheck.m"
              else
#line 2913 "typecheck.m"
                if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "impure_apply") == 0))
#line 2918 "typecheck.m"
                  {
#line 2919 "typecheck.m"
                    check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2920 "typecheck.m"
                    check_hlds__typecheck__Purity_13 = (MR_Integer) 2;
#line 2918 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2918 "typecheck.m"
                  }
#line 2913 "typecheck.m"
                else
#line 2913 "typecheck.m"
                  if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "semipure_apply") == 0))
#line 2922 "typecheck.m"
                    {
#line 2923 "typecheck.m"
                      check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2924 "typecheck.m"
                      check_hlds__typecheck__Purity_13 = (MR_Integer) 1;
#line 2922 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2922 "typecheck.m"
                    }
#line 2913 "typecheck.m"
                  else
#line 2913 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_FALSE;
#line 2906 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2906 "typecheck.m"
              {
#line 2926 "typecheck.m"
                check_hlds__typecheck__V_22_22 = (MR_Integer) 1;
#line 2926 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_7 >= check_hlds__typecheck__V_22_22);
#line 2906 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2906 "typecheck.m"
                  {
#line 2927 "typecheck.m"
                    check_hlds__typecheck__V_23_23 = (MR_Integer) 1;
#line 2927 "typecheck.m"
                    check_hlds__typecheck__Arity1_14 = (check_hlds__typecheck__Arity_7 - check_hlds__typecheck__V_23_23);
#line 2928 "typecheck.m"
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 3017 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_21_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1629 "typecheck.m"
                    {
#line 1629 "typecheck.m"
                      mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__TypeVarSet0_36);
                    }
#line 1630 "typecheck.m"
                    {
#line 1630 "typecheck.m"
                      mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, check_hlds__typecheck__Arity1_14, &check_hlds__typecheck__ArgTypeVars_37, check_hlds__typecheck__TypeVarSet0_36, &check_hlds__typecheck__TypeVarSet1_38);
                    }
#line 1631 "typecheck.m"
                    {
#line 1631 "typecheck.m"
                      mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__RetTypeVar_39, check_hlds__typecheck__TypeVarSet1_38, &check_hlds__typecheck__TypeVarSet_15);
                    }
#line 3034 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeInfo_22_43 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 3036 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_23_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0;
#line 1633 "typecheck.m"
                    {
#line 1633 "typecheck.m"
                      check_hlds__typecheck__V_40_40 = mercury__map__init_0_f_0(check_hlds__typecheck__TypeInfo_22_43, check_hlds__typecheck__TypeCtorInfo_23_44);
                    }
#line 1633 "typecheck.m"
                    {
#line 1633 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_40_40, check_hlds__typecheck__ArgTypeVars_37, &check_hlds__typecheck__ArgTypes_17);
                    }
#line 1634 "typecheck.m"
                    check_hlds__typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1634 "typecheck.m"
                    {
#line 1634 "typecheck.m"
                      check_hlds__typecheck__RetType_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1634 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 0) = ((MR_Box) (check_hlds__typecheck__RetTypeVar_39));
#line 1634 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 1) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 1634 "typecheck.m"
                    }
#line 1635 "typecheck.m"
                    {
#line 1635 "typecheck.m"
                      parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_13, check_hlds__typecheck__ArgTypes_17, check_hlds__typecheck__RetType_18, &check_hlds__typecheck__FuncType_16);
                    }
#line 2930 "typecheck.m"
                    check_hlds__typecheck__ExistQVars_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2931 "typecheck.m"
                    {
#line 2931 "typecheck.m"
                      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_20);
                    }
#line 2934 "typecheck.m"
                    check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2933 "typecheck.m"
                    {
#line 2933 "typecheck.m"
                      check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2933 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__FuncType_16));
#line 2933 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_17));
#line 2933 "typecheck.m"
                    }
#line 2934 "typecheck.m"
                    {
#line 2934 "typecheck.m"
                      check_hlds__typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2934 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2934 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck__ApplyNameToUse_12));
#line 2934 "typecheck.m"
                    }
#line 2932 "typecheck.m"
                    {
#line 2932 "typecheck.m"
                      check_hlds__typecheck__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2932 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_15));
#line 2932 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_19));
#line 2932 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 2) = ((MR_Box) (check_hlds__typecheck__RetType_18));
#line 2932 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 3) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 2932 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_20));
#line 2932 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 5) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 2932 "typecheck.m"
                    }
#line 2934 "typecheck.m"
                    {
#line 2934 "typecheck.m"
                      MR_Word base;
#line 2934 "typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2934 "typecheck.m"
                      *check_hlds__typecheck__ConsTypeInfos_8 = base;
#line 2934 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_25_25));
#line 2934 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 2934 "typecheck.m"
                    }
#line 2934 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2906 "typecheck.m"
                  }
#line 2906 "typecheck.m"
              }
#line 2907 "typecheck.m"
          }
#line 2907 "typecheck.m"
      }
#line 2906 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2906 "typecheck.m"
  }
#line 2903 "typecheck.m"
}

#line 2455 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(
#line 2455 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2455 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2455 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2455 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2455 "typecheck.m"
{
#line 2459 "typecheck.m"
  while (MR_TRUE)
#line 2459 "typecheck.m"
    {
#line 2459 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2459 "typecheck.m"
      {
#line 2459 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2459 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2459 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2459 "typecheck.m"
        else
#line 2461 "typecheck.m"
          {
#line 2461 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssign_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2461 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssigns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2461 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 0)));
#line 2461 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 1)));
#line 2461 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;
#line 2462 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 2)));

#line 2164 "typecheck.m"
            if ((check_hlds__typecheck__Args_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2164 "typecheck.m"
              if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2169 "typecheck.m"
                {
#line 2169 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_16));
#line 2169 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2169 "typecheck.m"
                }
#line 2164 "typecheck.m"
              else
#line 2164 "typecheck.m"
                {
#line 2165 "typecheck.m"
                  {
#line 2165 "typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2165 "typecheck.m"
                    return;
                  }
#line 2164 "typecheck.m"
                }
#line 2164 "typecheck.m"
            else
#line 2164 "typecheck.m"
              if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2166 "typecheck.m"
                {
#line 2167 "typecheck.m"
                  {
#line 2167 "typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2167 "typecheck.m"
                    return;
                  }
#line 2166 "typecheck.m"
                }
#line 2164 "typecheck.m"
              else
#line 2171 "typecheck.m"
                {
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 0)));
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__Types_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 1)));
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__TypeAssignSet1_52;
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 1)));
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 0)));
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__VarTypes0_62;
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__MaybeOldVarType_63;
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__VarTypes_64;

#line 2136 "typecheck.m"
                  {
#line 2136 "typecheck.m"
                    check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__VarTypes0_62);
                  }
#line 2137 "typecheck.m"
                  {
#line 2137 "typecheck.m"
                    parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__V_55_55, check_hlds__typecheck__Type_46, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
                  }
#line 2145 "typecheck.m"
                  if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2146 "typecheck.m"
                    {
#line 2146 "typecheck.m"
                      MR_Word check_hlds__typecheck__TypeAssign_67;

#line 2147 "typecheck.m"
                      {
#line 2147 "typecheck.m"
                        check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign_67);
                      }
#line 2148 "typecheck.m"
                      {
#line 2148 "typecheck.m"
                        check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2148 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
#line 2148 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2148 "typecheck.m"
                      }
#line 2146 "typecheck.m"
                    }
#line 2145 "typecheck.m"
                  else
#line 2139 "typecheck.m"
                    {
#line 2139 "typecheck.m"
                      MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
#line 2142 "typecheck.m"
                      MR_Word check_hlds__typecheck__TypeAssign1_66;
#line 2749 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams_75;
#line 2749 "typecheck.m"
                      MR_Word check_hlds__typecheck__TypeBindings0_76;
#line 2749 "typecheck.m"
                      MR_Word check_hlds__typecheck__TypeBindings_77;

#line 2750 "typecheck.m"
                      {
#line 2750 "typecheck.m"
                        check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__HeadTypeParams_75);
                      }
#line 2751 "typecheck.m"
                      {
#line 2751 "typecheck.m"
                        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeBindings0_76);
                      }
#line 2752 "typecheck.m"
                      {
#line 2752 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_46, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
                      }
#line 2749 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 2749 "typecheck.m"
                        {
#line 2753 "typecheck.m"
                          {
#line 2753 "typecheck.m"
                            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign1_66);
                          }
#line 2753 "typecheck.m"
                          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2749 "typecheck.m"
                        }
#line 2142 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 2141 "typecheck.m"
                        {
#line 2141 "typecheck.m"
                          check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2141 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
#line 2141 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2141 "typecheck.m"
                        }
#line 2142 "typecheck.m"
                      else
#line 2143 "typecheck.m"
                        check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__V_53_53;
#line 2139 "typecheck.m"
                    }
#line 2173 "typecheck.m"
                  {
#line 2173 "typecheck.m"
                    check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__V_54_54, check_hlds__typecheck__Types_47, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
                  }
#line 2171 "typecheck.m"
                }
#line 2465 "typecheck.m"
            /* direct tailcall eliminated */
#line 2465 "typecheck.m"
            {
#line 2465 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsTypeAssigns_12;
#line 2465 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2465 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2465 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2465 "typecheck.m"
            }
#line 2465 "typecheck.m"
            continue;
#line 2461 "typecheck.m"
          }
#line 2459 "typecheck.m"
      }
#line 2459 "typecheck.m"
      break;
#line 2459 "typecheck.m"
    }
#line 2455 "typecheck.m"
}

#line 2418 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 2418 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2418 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_3,
#line 2418 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2418 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5)
#line 2418 "typecheck.m"
{
#line 2422 "typecheck.m"
  while (MR_TRUE)
#line 2422 "typecheck.m"
    {
#line 2422 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2422 "typecheck.m"
      {
#line 2422 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2422 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2422 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4;
#line 2422 "typecheck.m"
        else
#line 2424 "typecheck.m"
          {
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType_16;
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_17;
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_18;
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssign_19;
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__V_22_22;
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23;
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeVarSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 0)));
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsExistQVars0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 1)));
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 2)));
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 3)));
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassConstraints0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 4)));
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_37;
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ConstraintsToAdd_38;
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__OldConstraints_46;
#line 2424 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassConstraints_47;
#line 2603 "typecheck.m"
            MR_Word check_hlds__typecheck___Source_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 5)));

#line 2610 "typecheck.m"
            {
#line 2610 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ConsTypeVarSet_31);
            }
#line 2616 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2612 "typecheck.m"
              {
#line 2612 "typecheck.m"
                check_hlds__typecheck__ConsType_16 = check_hlds__typecheck__ConsType0_33;
#line 2613 "typecheck.m"
                check_hlds__typecheck__ArgTypes_17 = check_hlds__typecheck__ArgTypes0_34;
#line 2614 "typecheck.m"
                check_hlds__typecheck__TypeAssign2_37 = check_hlds__typecheck__TypeAssign0_3;
#line 2615 "typecheck.m"
                check_hlds__typecheck__ConstraintsToAdd_38 = check_hlds__typecheck__ClassConstraints0_35;
#line 2612 "typecheck.m"
              }
#line 2616 "typecheck.m"
            else
#line 2632 "typecheck.m"
              {
#line 2632 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_39;
#line 2632 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsType1_40;
#line 2632 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes1_41;
#line 2632 "typecheck.m"
                MR_Word check_hlds__typecheck__Renaming_42;
#line 2617 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;
#line 2617 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 2617 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet0_61;
#line 2617 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet_62;

#line 2618 "typecheck.m"
                {
#line 2618 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2618 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__ConsType0_33));
#line 2618 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes0_34));
#line 2618 "typecheck.m"
                }
#line 1860 "typecheck.m"
                {
#line 1860 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_3, &check_hlds__typecheck__TypeVarSet0_61);
                }
#line 1861 "typecheck.m"
                {
#line 1861 "typecheck.m"
                  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_61, check_hlds__typecheck__ConsTypeVarSet_31, &check_hlds__typecheck__TypeVarSet_62, &check_hlds__typecheck__Renaming_42);
                }
#line 1862 "typecheck.m"
                {
#line 1862 "typecheck.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__V_48_48, &check_hlds__typecheck__V_49_49);
                }
#line 1864 "typecheck.m"
                {
#line 1864 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_62, check_hlds__typecheck__TypeAssign0_3, &check_hlds__typecheck__TypeAssign1_39);
                }
#line 2618 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 2618 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2618 "typecheck.m"
                  {
#line 2618 "typecheck.m"
                    check_hlds__typecheck__ConsType1_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_49_49, (MR_Integer) 0)));
#line 2618 "typecheck.m"
                    check_hlds__typecheck__ArgTypes1_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_49_49, (MR_Integer) 1)));
#line 2622 "typecheck.m"
                    {
#line 2622 "typecheck.m"
                      MR_Word check_hlds__typecheck__ConsExistQVars_43;
#line 2622 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams0_44;
#line 2622 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams_45;

#line 2621 "typecheck.m"
                      {
#line 2621 "typecheck.m"
                        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__ConsExistQVars0_32, &check_hlds__typecheck__ConsExistQVars_43);
                      }
#line 2623 "typecheck.m"
                      {
#line 2623 "typecheck.m"
                        check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__ClassConstraints0_35, &check_hlds__typecheck__ConstraintsToAdd_38);
                      }
#line 2625 "typecheck.m"
                      {
#line 2625 "typecheck.m"
                        check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_39, &check_hlds__typecheck__HeadTypeParams0_44);
                      }
#line 2626 "typecheck.m"
                      {
#line 2626 "typecheck.m"
                        check_hlds__typecheck__HeadTypeParams_45 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ConsExistQVars_43, check_hlds__typecheck__HeadTypeParams0_44);
                      }
#line 2627 "typecheck.m"
                      {
#line 2627 "typecheck.m"
                        check_hlds__type_assign__type_assign_set_head_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_45, check_hlds__typecheck__TypeAssign1_39, &check_hlds__typecheck__TypeAssign2_37);
                      }
#line 2630 "typecheck.m"
                      check_hlds__typecheck__ConsType_16 = check_hlds__typecheck__ConsType1_40;
#line 2631 "typecheck.m"
                      check_hlds__typecheck__ArgTypes_17 = check_hlds__typecheck__ArgTypes1_41;
#line 2622 "typecheck.m"
                    }
#line 2618 "typecheck.m"
                  }
#line 2618 "typecheck.m"
                else
#line 2633 "typecheck.m"
                  {
#line 2633 "typecheck.m"
                    {
#line 2633 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.get_cons_stuff\'/6", (MR_String) "type_assign_rename_apart failed");
#line 2633 "typecheck.m"
                      return;
                    }
#line 2633 "typecheck.m"
                  }
#line 2632 "typecheck.m"
              }
#line 2644 "typecheck.m"
            {
#line 2644 "typecheck.m"
              check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typecheck__TypeAssign2_37, &check_hlds__typecheck__OldConstraints_46);
            }
#line 2645 "typecheck.m"
            {
#line 2645 "typecheck.m"
              hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck__ConstraintsToAdd_38, check_hlds__typecheck__OldConstraints_46, &check_hlds__typecheck__ClassConstraints_47);
            }
#line 2646 "typecheck.m"
            {
#line 2646 "typecheck.m"
              check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(check_hlds__typecheck__ClassConstraints_47, check_hlds__typecheck__TypeAssign2_37, &check_hlds__typecheck__TypeAssign1_18);
            }
#line 2427 "typecheck.m"
            {
#line 2427 "typecheck.m"
              check_hlds__typecheck__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2427 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck__ConsType_16));
#line 2427 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_17));
#line 2427 "typecheck.m"
            }
#line 2427 "typecheck.m"
            {
#line 2427 "typecheck.m"
              check_hlds__typecheck__ConsTypeAssign_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2427 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_19, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_18));
#line 2427 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_19, 1) = ((MR_Box) (check_hlds__typecheck__V_22_22));
#line 2427 "typecheck.m"
            }
#line 2428 "typecheck.m"
            {
#line 2428 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2428 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeAssign_19));
#line 2428 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4));
#line 2428 "typecheck.m"
            }
#line 2429 "typecheck.m"
            /* direct tailcall eliminated */
#line 2429 "typecheck.m"
            {
#line 2429 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsDefns_12;
#line 2429 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23;

#line 2429 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4;
#line 2429 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2429 "typecheck.m"
            }
#line 2429 "typecheck.m"
            continue;
#line 2424 "typecheck.m"
          }
#line 2422 "typecheck.m"
      }
#line 2422 "typecheck.m"
      break;
#line 2422 "typecheck.m"
    }
#line 2418 "typecheck.m"
}

#line 2402 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(
#line 2402 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2402 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsDefns_3,
#line 2402 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2402 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5)
#line 2402 "typecheck.m"
{
#line 2408 "typecheck.m"
  while (MR_TRUE)
#line 2408 "typecheck.m"
    {
#line 2408 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2408 "typecheck.m"
      {
#line 2408 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2408 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2408 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4;
#line 2408 "typecheck.m"
        else
#line 2410 "typecheck.m"
          {
#line 2410 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2410 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2410 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18;

#line 2411 "typecheck.m"
            {
#line 2411 "typecheck.m"
              check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__ConsDefns_3, check_hlds__typecheck__TypeAssign_11, check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18);
            }
#line 2413 "typecheck.m"
            /* direct tailcall eliminated */
#line 2413 "typecheck.m"
            {
#line 2413 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns_12;
#line 2413 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18;

#line 2413 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4;
#line 2413 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2413 "typecheck.m"
            }
#line 2413 "typecheck.m"
            continue;
#line 2410 "typecheck.m"
          }
#line 2408 "typecheck.m"
      }
#line 2408 "typecheck.m"
      break;
#line 2408 "typecheck.m"
    }
#line 2402 "typecheck.m"
}

#line 2183 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(
#line 2183 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2183 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2183 "typecheck.m"
  MR_Word check_hlds__typecheck__Types_3,
#line 2183 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 2183 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6)
#line 2183 "typecheck.m"
{
#line 2187 "typecheck.m"
  while (MR_TRUE)
#line 2187 "typecheck.m"
    {
#line 2187 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2187 "typecheck.m"
      {
#line 2187 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2187 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2187 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
#line 2187 "typecheck.m"
        else
#line 2189 "typecheck.m"
          {
#line 2189 "typecheck.m"
            MR_Word check_hlds__typecheck__TA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2189 "typecheck.m"
            MR_Word check_hlds__typecheck__TAs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2189 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2164 "typecheck.m"
            if ((check_hlds__typecheck__Args_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2164 "typecheck.m"
              if ((check_hlds__typecheck__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2169 "typecheck.m"
                {
#line 2169 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TA_13));
#line 2169 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5));
#line 2169 "typecheck.m"
                }
#line 2164 "typecheck.m"
              else
#line 2164 "typecheck.m"
                {
#line 2165 "typecheck.m"
                  {
#line 2165 "typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2165 "typecheck.m"
                    return;
                  }
#line 2164 "typecheck.m"
                }
#line 2164 "typecheck.m"
            else
#line 2164 "typecheck.m"
              if ((check_hlds__typecheck__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2166 "typecheck.m"
                {
#line 2167 "typecheck.m"
                  {
#line 2167 "typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2167 "typecheck.m"
                    return;
                  }
#line 2166 "typecheck.m"
                }
#line 2164 "typecheck.m"
              else
#line 2171 "typecheck.m"
                {
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_3, (MR_Integer) 0)));
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__Types_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_3, (MR_Integer) 1)));
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__TypeAssignSet1_52;
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 1)));
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 0)));
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__VarTypes0_62;
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__MaybeOldVarType_63;
#line 2171 "typecheck.m"
                  MR_Word check_hlds__typecheck__VarTypes_64;

#line 2136 "typecheck.m"
                  {
#line 2136 "typecheck.m"
                    check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__VarTypes0_62);
                  }
#line 2137 "typecheck.m"
                  {
#line 2137 "typecheck.m"
                    parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__V_55_55, check_hlds__typecheck__Type_46, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
                  }
#line 2145 "typecheck.m"
                  if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2146 "typecheck.m"
                    {
#line 2146 "typecheck.m"
                      MR_Word check_hlds__typecheck__TypeAssign_67;

#line 2147 "typecheck.m"
                      {
#line 2147 "typecheck.m"
                        check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeAssign_67);
                      }
#line 2148 "typecheck.m"
                      {
#line 2148 "typecheck.m"
                        check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2148 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
#line 2148 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2148 "typecheck.m"
                      }
#line 2146 "typecheck.m"
                    }
#line 2145 "typecheck.m"
                  else
#line 2139 "typecheck.m"
                    {
#line 2139 "typecheck.m"
                      MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
#line 2142 "typecheck.m"
                      MR_Word check_hlds__typecheck__TypeAssign1_66;
#line 2749 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams_75;
#line 2749 "typecheck.m"
                      MR_Word check_hlds__typecheck__TypeBindings0_76;
#line 2749 "typecheck.m"
                      MR_Word check_hlds__typecheck__TypeBindings_77;

#line 2750 "typecheck.m"
                      {
#line 2750 "typecheck.m"
                        check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__HeadTypeParams_75);
                      }
#line 2751 "typecheck.m"
                      {
#line 2751 "typecheck.m"
                        check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeBindings0_76);
                      }
#line 2752 "typecheck.m"
                      {
#line 2752 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_46, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
                      }
#line 2749 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 2749 "typecheck.m"
                        {
#line 2753 "typecheck.m"
                          {
#line 2753 "typecheck.m"
                            check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeAssign1_66);
                          }
#line 2753 "typecheck.m"
                          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2749 "typecheck.m"
                        }
#line 2142 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 2141 "typecheck.m"
                        {
#line 2141 "typecheck.m"
                          check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2141 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
#line 2141 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2141 "typecheck.m"
                        }
#line 2142 "typecheck.m"
                      else
#line 2143 "typecheck.m"
                        check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__V_53_53;
#line 2139 "typecheck.m"
                    }
#line 2173 "typecheck.m"
                  {
#line 2173 "typecheck.m"
                    check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__V_54_54, check_hlds__typecheck__Types_47, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
                  }
#line 2171 "typecheck.m"
                }
#line 2191 "typecheck.m"
            /* direct tailcall eliminated */
#line 2191 "typecheck.m"
            {
#line 2191 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TAs_14;
#line 2191 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2191 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5;
#line 2191 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2191 "typecheck.m"
            }
#line 2191 "typecheck.m"
            continue;
#line 2189 "typecheck.m"
          }
#line 2187 "typecheck.m"
      }
#line 2187 "typecheck.m"
      break;
#line 2187 "typecheck.m"
    }
#line 2183 "typecheck.m"
}

#line 3418 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3418__2_1_f_0(
#line 3418 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_36)
#line 3418 "typecheck.m"
{
#line 3418 "typecheck.m"
  {
#line 3418 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3418 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVar__2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 1)));
#line 3418 "typecheck.m"
    MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 0)));
#line 3418 "typecheck.m"
    MR_Word check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 2)));
#line 3418 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 3)));

#line 3418 "typecheck.m"
    return check_hlds__typecheck__HeadVar__2_37;
#line 3418 "typecheck.m"
  }
#line 3418 "typecheck.m"
}

#line 1473 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1473__1_2_p_0(
#line 1473 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalType_94,
#line 1473 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_160)
#line 1473 "typecheck.m"
{
#line 1473 "typecheck.m"
  {
#line 1473 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__GoalType_94 == check_hlds__typecheck__HeadVar__2_160);

#line 1473 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 1473 "typecheck.m"
  }
#line 1473 "typecheck.m"
}

#line 505 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__505__1_2_p_0(
#line 505 "typecheck.m"
  MR_Word check_hlds__typecheck__StartingSpecs_22,
#line 505 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_51)
#line 505 "typecheck.m"
{
#line 505 "typecheck.m"
  {
#line 505 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 505 "typecheck.m"
    {
#line 505 "typecheck.m"
      return check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[0], ((MR_Box) (check_hlds__typecheck__StartingSpecs_22)), ((MR_Box) (check_hlds__typecheck__HeadVar__2_51)));
    }
#line 505 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 505 "typecheck.m"
  }
#line 505 "typecheck.m"
}

#line 1134 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
#line 1134 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 1134 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1134 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 1134 "typecheck.m"
{
#line 1134 "typecheck.m"
  {
#line 1134 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1134 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 1134 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 1134 "typecheck.m"
    {
#line 1134 "typecheck.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
#line 1134 "typecheck.m"
      return;
    }
#line 1134 "typecheck.m"
  }
#line 1134 "typecheck.m"
}

#line 1134 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
#line 1134 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 1134 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 1134 "typecheck.m"
{
#line 4085 "check_hlds.typecheck.c"
  {
#line 4087 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

#line 4090 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 4092 "check_hlds.typecheck.c"
  }
#line 1134 "typecheck.m"
}

#line 3022 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
#line 3022 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3022 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3022 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 3022 "typecheck.m"
{
#line 3022 "typecheck.m"
  {
#line 3022 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3022 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_12 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 3022 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_13 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 3022 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_12 == check_hlds__typecheck__CastY_13);
#line 3022 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 4121 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 3022 "typecheck.m"
    else
#line 3022 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 3022 "typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3022 "typecheck.m"
          {
#line 3022 "typecheck.m"
            MR_Word check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 3022 "typecheck.m"
            MR_Word check_hlds__typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));

#line 3022 "typecheck.m"
            {
#line 3022 "typecheck.m"
              check_hlds__typecheck_errors____Compare____cons_error_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__V_16_16, check_hlds__typecheck__V_11_11);
#line 3022 "typecheck.m"
              return;
            }
#line 3022 "typecheck.m"
          }
#line 3022 "typecheck.m"
        else
#line 4147 "check_hlds.typecheck.c"
          *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 3022 "typecheck.m"
      else
#line 3022 "typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4153 "check_hlds.typecheck.c"
          *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 3022 "typecheck.m"
        else
#line 3022 "typecheck.m"
          {
#line 3022 "typecheck.m"
            MR_Word check_hlds__typecheck__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__3_3), (MR_Integer) 0);
#line 3022 "typecheck.m"
            MR_Word check_hlds__typecheck__V_17_17 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);

#line 3022 "typecheck.m"
            {
#line 3022 "typecheck.m"
              check_hlds__typecheck_info____Compare____cons_type_info_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__V_17_17, check_hlds__typecheck__V_5_5);
#line 3022 "typecheck.m"
              return;
            }
#line 3022 "typecheck.m"
          }
#line 3022 "typecheck.m"
  }
#line 3022 "typecheck.m"
}

#line 3022 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
#line 3022 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3022 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 3022 "typecheck.m"
{
#line 3022 "typecheck.m"
  {
#line 3022 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3022 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_7 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
#line 3022 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_8 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

#line 3022 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_7 == check_hlds__typecheck__CastY_8);
#line 3022 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3022 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_TRUE;
#line 3022 "typecheck.m"
    else
#line 3022 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 3022 "typecheck.m"
        {
#line 3022 "typecheck.m"
          MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 3022 "typecheck.m"
          MR_Word check_hlds__typecheck__V_6_6;

#line 3022 "typecheck.m"
          check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 3022 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 3022 "typecheck.m"
            {
#line 3022 "typecheck.m"
              check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 4221 "check_hlds.typecheck.c"
              {
#line 4223 "check_hlds.typecheck.c"
                return check_hlds__typecheck__succeeded = check_hlds__typecheck_errors____Unify____cons_error_0_0(check_hlds__typecheck__V_5_5, check_hlds__typecheck__V_6_6);
              }
#line 3022 "typecheck.m"
            }
#line 3022 "typecheck.m"
        }
#line 3022 "typecheck.m"
      else
#line 3022 "typecheck.m"
        {
#line 3022 "typecheck.m"
          MR_Word check_hlds__typecheck__V_3_3 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__1_1), (MR_Integer) 0);
#line 3022 "typecheck.m"
          MR_Word check_hlds__typecheck__V_4_4;

#line 3022 "typecheck.m"
          check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 3022 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 3022 "typecheck.m"
            {
#line 3022 "typecheck.m"
              check_hlds__typecheck__V_4_4 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);
#line 4247 "check_hlds.typecheck.c"
              {
#line 4249 "check_hlds.typecheck.c"
                return check_hlds__typecheck__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(check_hlds__typecheck__V_3_3, check_hlds__typecheck__V_4_4);
              }
#line 3022 "typecheck.m"
            }
#line 3022 "typecheck.m"
        }
#line 3022 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 3022 "typecheck.m"
  }
#line 3022 "typecheck.m"
}

#line 2387 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
#line 2387 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2387 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2387 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2387 "typecheck.m"
{
#line 2387 "typecheck.m"
  {
#line 2387 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2387 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar1_4 = check_hlds__typecheck__HeadVar__2_2;
#line 2387 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar2_5 = check_hlds__typecheck__HeadVar__3_3;

#line 2387 "typecheck.m"
    {
#line 2387 "typecheck.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_5)));
#line 2387 "typecheck.m"
      return;
    }
#line 2387 "typecheck.m"
  }
#line 2387 "typecheck.m"
}

#line 2387 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
#line 2387 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2387 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2387 "typecheck.m"
{
#line 2387 "typecheck.m"
  {
#line 2387 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2387 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar1_3 = check_hlds__typecheck__HeadVar__1_1;
#line 2387 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar2_4 = check_hlds__typecheck__HeadVar__2_2;

#line 2387 "typecheck.m"
    {
#line 2387 "typecheck.m"
      return check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_4)));
    }
#line 2387 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2387 "typecheck.m"
  }
#line 2387 "typecheck.m"
}

#line 2384 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0(
#line 2384 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2384 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2384 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2384 "typecheck.m"
{
#line 2384 "typecheck.m"
  {
#line 2384 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2384 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_9 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 2384 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_10 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 2384 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_9 == check_hlds__typecheck__CastY_10);
#line 2384 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 4349 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 2384 "typecheck.m"
    else
#line 2384 "typecheck.m"
      {
#line 2384 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2384 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 2384 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 2384 "typecheck.m"
        MR_Word check_hlds__typecheck__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 2384 "typecheck.m"
        MR_Word check_hlds__typecheck__V_8_8;

#line 2384 "typecheck.m"
        {
#line 2384 "typecheck.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__typecheck__V_8_8, check_hlds__typecheck__V_4_4, check_hlds__typecheck__V_6_6);
        }
#line 4371 "check_hlds.typecheck.c"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_8_8 == (MR_Integer) 0);
#line 2384 "typecheck.m"
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 2384 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2384 "typecheck.m"
          *check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__V_8_8;
#line 2384 "typecheck.m"
        else
#line 2384 "typecheck.m"
          {
#line 2384 "typecheck.m"
            {
#line 2384 "typecheck.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[5], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__V_5_5)), ((MR_Box) (check_hlds__typecheck__V_7_7)));
#line 2384 "typecheck.m"
              return;
            }
#line 2384 "typecheck.m"
          }
#line 2384 "typecheck.m"
      }
#line 2384 "typecheck.m"
  }
#line 2384 "typecheck.m"
}

#line 2384 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0(
#line 2384 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2384 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2384 "typecheck.m"
{
#line 2384 "typecheck.m"
  {
#line 2384 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2384 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_7 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
#line 2384 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_8 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

#line 2384 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_7 == check_hlds__typecheck__CastY_8);
#line 2384 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2384 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2384 "typecheck.m"
    else
#line 2384 "typecheck.m"
      {
#line 2384 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_10_10;
#line 2384 "typecheck.m"
        MR_Word check_hlds__typecheck__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2384 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2384 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2384 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));

#line 4438 "check_hlds.typecheck.c"
        {
#line 4440 "check_hlds.typecheck.c"
          check_hlds__typecheck__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck__V_3_3, check_hlds__typecheck__V_5_5);
        }
#line 2384 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2384 "typecheck.m"
          {
#line 4447 "check_hlds.typecheck.c"
            check_hlds__typecheck__TypeInfo_10_10 = (MR_Word) &check_hlds__typecheck_scalar_common_1[5];
#line 4449 "check_hlds.typecheck.c"
            {
#line 4451 "check_hlds.typecheck.c"
              return check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck__TypeInfo_10_10, ((MR_Box) (check_hlds__typecheck__V_4_4)), ((MR_Box) (check_hlds__typecheck__V_6_6)));
            }
#line 2384 "typecheck.m"
          }
#line 2384 "typecheck.m"
      }
#line 2384 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2384 "typecheck.m"
  }
#line 2384 "typecheck.m"
}

#line 3388 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
#line 3388 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 3388 "typecheck.m"
{
#line 3388 "typecheck.m"
  {
#line 3388 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3388 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 3388 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 3388 "typecheck.m"
    {
#line 3388 "typecheck.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
#line 3388 "typecheck.m"
      return;
    }
#line 3388 "typecheck.m"
  }
#line 3388 "typecheck.m"
}

#line 3388 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
#line 3388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 3388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 3388 "typecheck.m"
{
#line 4506 "check_hlds.typecheck.c"
  {
#line 4508 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

#line 4511 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 4513 "check_hlds.typecheck.c"
  }
#line 3388 "typecheck.m"
}

#line 3418 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
#line 3418 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3418 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 3418 "typecheck.m"
{
#line 3418 "typecheck.m"
  {
#line 3418 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 3418 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 3418 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__2_37;

#line 3418 "typecheck.m"
    {
#line 3418 "typecheck.m"
      check_hlds__typecheck__conv0_HeadVar__2_37 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3418__2_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 3418 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__2_37));
#line 3418 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 3418 "typecheck.m"
  }
#line 3418 "typecheck.m"
}

#line 3406 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__Action_8,
#line 3406 "typecheck.m"
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
#line 3406 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10)
#line 3406 "typecheck.m"
{
#line 3408 "typecheck.m"
  {
#line 3408 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 0)));
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 1)));
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 2)));
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeKinds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 3)));
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 4)));
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistProgConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 5)));
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 6)));
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_19;
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeTable_21;
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeDefn_22;
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_23;
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__PredId_24;
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_25;
#line 3408 "typecheck.m"
    MR_Word check_hlds__typecheck__PredInfo_26;
#line 3416 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 7)));
#line 3447 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38;
#line 3447 "typecheck.m"
    MR_Word check_hlds__typecheck__V_53_53;
#line 3447 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 3447 "typecheck.m"
    MR_Word check_hlds__typecheck__V_55_55;
#line 3447 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 3447 "typecheck.m"
    MR_Word check_hlds__typecheck__V_57_57;
#line 3447 "typecheck.m"
    MR_Word check_hlds__typecheck__V_58_58;
#line 3447 "typecheck.m"
    MR_Word check_hlds__typecheck__V_59_59;
#line 3447 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;
#line 3447 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 3448 "typecheck.m"
    MR_Word check_hlds__typecheck__V_39_39;
#line 3448 "typecheck.m"
    MR_Word check_hlds__typecheck__V_63_63;
#line 3450 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 3450 "typecheck.m"
    MR_Word check_hlds__typecheck__V_64_64;

#line 3418 "typecheck.m"
    {
#line 3418 "typecheck.m"
      check_hlds__typecheck__ArgTypes_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[6], check_hlds__typecheck__Args_17);
    }
#line 3419 "typecheck.m"
    {
#line 3419 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__TypeTable_21);
    }
#line 3420 "typecheck.m"
    {
#line 3420 "typecheck.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_21, check_hlds__typecheck__TypeCtor_11, &check_hlds__typecheck__TypeDefn_22);
    }
#line 3421 "typecheck.m"
    {
#line 3421 "typecheck.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__Body_23);
    }
#line 3443 "typecheck.m"
    {
#line 3443 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredId_24);
    }
#line 3444 "typecheck.m"
    {
#line 3444 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__ModuleInfo_25);
    }
#line 3445 "typecheck.m"
    {
#line 3445 "typecheck.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_25, check_hlds__typecheck__PredId_24, &check_hlds__typecheck__PredInfo_26);
    }
#line 3447 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Body_23)) == (MR_mktag((MR_Integer) 1)));
#line 3447 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3447 "typecheck.m"
      {
#line 3447 "typecheck.m"
        check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 0)));
#line 3447 "typecheck.m"
        check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 1)));
#line 3447 "typecheck.m"
        check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 2)));
#line 3447 "typecheck.m"
        check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 3)));
#line 3447 "typecheck.m"
        check_hlds__typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 4)));
#line 3447 "typecheck.m"
        check_hlds__typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 5)));
#line 3447 "typecheck.m"
        check_hlds__typecheck__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 3447 "typecheck.m"
        check_hlds__typecheck__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 3447 "typecheck.m"
        check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 7)));
#line 3447 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 3447 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3447 "typecheck.m"
          {
#line 3447 "typecheck.m"
            check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_38_38, (MR_Integer) 0)));
#line 3448 "typecheck.m"
            check_hlds__typecheck__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 3448 "typecheck.m"
            {
#line 3448 "typecheck.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__V_63_63);
            }
#line 3448 "typecheck.m"
            {
#line 3448 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(check_hlds__typecheck__V_39_39, check_hlds__typecheck__V_63_63);
            }
#line 3448 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3447 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3447 "typecheck.m"
              {
#line 3449 "typecheck.m"
                {
#line 3449 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_26);
                }
#line 3449 "typecheck.m"
                check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3447 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 3447 "typecheck.m"
                  {
#line 3450 "typecheck.m"
                    check_hlds__typecheck__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3450 "typecheck.m"
                    {
#line 3450 "typecheck.m"
                      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__V_64_64);
                    }
#line 3450 "typecheck.m"
                    {
#line 3450 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____import_status_0_0(check_hlds__typecheck__V_40_40, check_hlds__typecheck__V_64_64);
                    }
#line 3450 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3447 "typecheck.m"
                  }
#line 3447 "typecheck.m"
              }
#line 3447 "typecheck.m"
          }
#line 3447 "typecheck.m"
      }
#line 3453 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3452 "typecheck.m"
      {
#line 3452 "typecheck.m"
        MR_Word check_hlds__typecheck__V_41_41;

#line 3452 "typecheck.m"
        {
#line 3452 "typecheck.m"
          check_hlds__typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3452 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_41_41, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3452 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_41_41, 1) = ((MR_Box) (check_hlds__typecheck__TypeDefn_22));
#line 3452 "typecheck.m"
        }
#line 3452 "typecheck.m"
        {
#line 3452 "typecheck.m"
          MR_Word base;
#line 3452 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3452 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfo_10 = base;
#line 3452 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 3452 "typecheck.m"
        }
#line 3452 "typecheck.m"
      }
#line 3453 "typecheck.m"
    else
#line 3461 "typecheck.m"
      {
#line 3456 "typecheck.m"
        MR_Word check_hlds__typecheck__V_65_65;
#line 3458 "typecheck.m"
        MR_Word check_hlds__typecheck__V_43_43;
#line 3458 "typecheck.m"
        MR_Word check_hlds__typecheck__V_66_66;

#line 3456 "typecheck.m"
        {
#line 3456 "typecheck.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__V_65_65);
        }
#line 3456 "typecheck.m"
        {
#line 3456 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____import_status_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__typecheck__V_65_65);
        }
#line 3456 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3456 "typecheck.m"
          {
#line 3457 "typecheck.m"
            {
#line 3457 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_26);
            }
#line 3457 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3456 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3456 "typecheck.m"
              {
#line 3458 "typecheck.m"
                check_hlds__typecheck__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3458 "typecheck.m"
                {
#line 3458 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__V_66_66);
                }
#line 3458 "typecheck.m"
                {
#line 3458 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____import_status_0_0(check_hlds__typecheck__V_43_43, check_hlds__typecheck__V_66_66);
                }
#line 3458 "typecheck.m"
                check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3456 "typecheck.m"
              }
#line 3456 "typecheck.m"
          }
#line 3461 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3460 "typecheck.m"
          {
#line 3460 "typecheck.m"
            *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[4]);
#line 3460 "typecheck.m"
          }
#line 3461 "typecheck.m"
        else
#line 3467 "typecheck.m"
          {
#line 3462 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Action_8 == (MR_Integer) 0);
#line 3462 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3463 "typecheck.m"
              check_hlds__typecheck__succeeded = (check_hlds__typecheck__ExistQVars0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3467 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3466 "typecheck.m"
              {
#line 3466 "typecheck.m"
                MR_Word check_hlds__typecheck__V_45_45;

#line 3466 "typecheck.m"
                {
#line 3466 "typecheck.m"
                  check_hlds__typecheck__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3466 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_45_45, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3466 "typecheck.m"
                }
#line 3466 "typecheck.m"
                {
#line 3466 "typecheck.m"
                  MR_Word base;
#line 3466 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3466 "typecheck.m"
                  *check_hlds__typecheck__ConsTypeInfo_10 = base;
#line 3466 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_45_45));
#line 3466 "typecheck.m"
                }
#line 3466 "typecheck.m"
              }
#line 3467 "typecheck.m"
            else
#line 3469 "typecheck.m"
              {
#line 3469 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeArgs_28;
#line 3469 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsType_29;
#line 3469 "typecheck.m"
                MR_Word check_hlds__typecheck__UnivProgConstraints_30;
#line 3469 "typecheck.m"
                MR_Word check_hlds__typecheck__ProgConstraints_31;
#line 3469 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVars_32;
#line 3469 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassTable_33;
#line 3469 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_34;
#line 3469 "typecheck.m"
                MR_Word check_hlds__typecheck__V_47_47;
#line 3469 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;

#line 3468 "typecheck.m"
                {
#line 3468 "typecheck.m"
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__ConsTypeKinds_14, check_hlds__typecheck__ConsTypeParams_13, &check_hlds__typecheck__ConsTypeArgs_28);
                }
#line 3470 "typecheck.m"
                {
#line 3470 "typecheck.m"
                  parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_11, check_hlds__typecheck__ConsTypeArgs_28, &check_hlds__typecheck__ConsType_29);
                }
#line 3471 "typecheck.m"
                check_hlds__typecheck__UnivProgConstraints_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3477 "typecheck.m"
                if ((check_hlds__typecheck__Action_8 == (MR_Integer) 2))
#line 3473 "typecheck.m"
                  {
#line 3474 "typecheck.m"
                    {
#line 3474 "typecheck.m"
                      check_hlds__typecheck__ProgConstraints_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3474 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 0) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_30));
#line 3474 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3474 "typecheck.m"
                    }
#line 3476 "typecheck.m"
                    check_hlds__typecheck__ExistQVars_32 = check_hlds__typecheck__ExistQVars0_15;
#line 3473 "typecheck.m"
                  }
#line 3477 "typecheck.m"
                else
#line 3477 "typecheck.m"
                  if ((check_hlds__typecheck__Action_8 == (MR_Integer) 1))
#line 3486 "typecheck.m"
                    {
#line 3492 "typecheck.m"
                      {
#line 3492 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3492 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3492 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3492 "typecheck.m"
                      }
#line 3494 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_32 = check_hlds__typecheck__ExistQVars0_15;
#line 3486 "typecheck.m"
                    }
#line 3477 "typecheck.m"
                  else
#line 3478 "typecheck.m"
                    {
#line 3482 "typecheck.m"
                      {
#line 3482 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3482 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3482 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 1) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_30));
#line 3482 "typecheck.m"
                      }
#line 3484 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3478 "typecheck.m"
                    }
#line 3496 "typecheck.m"
                {
#line 3496 "typecheck.m"
                  hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_25, &check_hlds__typecheck__ClassTable_33);
                }
#line 3497 "typecheck.m"
                {
#line 3497 "typecheck.m"
                  hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_33, check_hlds__typecheck__ConsTypeVarSet_12, check_hlds__typecheck__GoalId_7, check_hlds__typecheck__ProgConstraints_31, &check_hlds__typecheck__Constraints_34);
                }
#line 3500 "typecheck.m"
                {
#line 3500 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 3500 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3500 "typecheck.m"
                }
#line 3499 "typecheck.m"
                {
#line 3499 "typecheck.m"
                  check_hlds__typecheck__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3499 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_12));
#line 3499 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_32));
#line 3499 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_29));
#line 3499 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_19));
#line 3499 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_34));
#line 3499 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 5) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 3499 "typecheck.m"
                }
#line 3499 "typecheck.m"
                *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_47_47);
#line 3469 "typecheck.m"
              }
#line 3467 "typecheck.m"
          }
#line 3461 "typecheck.m"
      }
#line 3408 "typecheck.m"
  }
#line 3406 "typecheck.m"
}

#line 3393 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
#line 3393 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3393 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3393 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3393 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3393 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__5_5)
#line 3393 "typecheck.m"
{
#line 3397 "typecheck.m"
  {
#line 3397 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 3397 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3397 "typecheck.m"
      *check_hlds__typecheck__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3397 "typecheck.m"
    else
#line 3398 "typecheck.m"
      {
#line 3398 "typecheck.m"
        MR_Word check_hlds__typecheck__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 3398 "typecheck.m"
        MR_Word check_hlds__typecheck__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
#line 3398 "typecheck.m"
        MR_Word check_hlds__typecheck__Y_14;
#line 3398 "typecheck.m"
        MR_Word check_hlds__typecheck__Ys_15;

#line 3399 "typecheck.m"
        {
#line 3399 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__X_12, &check_hlds__typecheck__Y_14);
        }
#line 3400 "typecheck.m"
        {
#line 3400 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__Xs_13, &check_hlds__typecheck__Ys_15);
        }
#line 3398 "typecheck.m"
        {
#line 3398 "typecheck.m"
          MR_Word base;
#line 3398 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3398 "typecheck.m"
          *check_hlds__typecheck__HeadVar__5_5 = base;
#line 3398 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Y_14));
#line 3398 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Ys_15));
#line 3398 "typecheck.m"
        }
#line 3398 "typecheck.m"
      }
#line 3397 "typecheck.m"
  }
#line 3393 "typecheck.m"
}

#line 3370 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
#line 3370 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3370 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 3370 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3)
#line 3370 "typecheck.m"
{
#line 3373 "typecheck.m"
  {
#line 3373 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 3373 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3373 "typecheck.m"
      {
#line 3373 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3373 "typecheck.m"
        *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3373 "typecheck.m"
      }
#line 3373 "typecheck.m"
    else
#line 3374 "typecheck.m"
      {
#line 3374 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeConsInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 3374 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeConsInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 3374 "typecheck.m"
        MR_Word check_hlds__typecheck__InfosTail_8;
#line 3374 "typecheck.m"
        MR_Word check_hlds__typecheck__ErrorsTail_9;

#line 3375 "typecheck.m"
        {
#line 3375 "typecheck.m"
          check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__MaybeConsInfos_5, &check_hlds__typecheck__InfosTail_8, &check_hlds__typecheck__ErrorsTail_9);
        }
#line 3380 "typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeConsInfo_4)) == (MR_mktag((MR_Integer) 1))))
#line 3381 "typecheck.m"
          {
#line 3381 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeConsInfo_4, (MR_Integer) 0)));

#line 3382 "typecheck.m"
            *check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__InfosTail_8;
#line 3383 "typecheck.m"
            {
#line 3383 "typecheck.m"
              MR_Word base;
#line 3383 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3383 "typecheck.m"
              *check_hlds__typecheck__HeadVar__3_3 = base;
#line 3383 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsError_11));
#line 3383 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__ErrorsTail_9));
#line 3383 "typecheck.m"
            }
#line 3381 "typecheck.m"
          }
#line 3380 "typecheck.m"
        else
#line 3377 "typecheck.m"
          {
#line 3377 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsInfo_10 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeConsInfo_4), (MR_Integer) 0);

#line 3378 "typecheck.m"
            {
#line 3378 "typecheck.m"
              MR_Word base;
#line 3378 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3378 "typecheck.m"
              *check_hlds__typecheck__HeadVar__2_2 = base;
#line 3378 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_10));
#line 3378 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__InfosTail_8));
#line 3378 "typecheck.m"
            }
#line 3379 "typecheck.m"
            *check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__ErrorsTail_9;
#line 3377 "typecheck.m"
          }
#line 3374 "typecheck.m"
      }
#line 3373 "typecheck.m"
  }
#line 3370 "typecheck.m"
}

#line 3236 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
#line 3236 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3236 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3236 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3236 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3236 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3236 "typecheck.m"
  MR_Word * check_hlds__typecheck__DataConsErrors_12)
#line 3236 "typecheck.m"
{
#line 3241 "typecheck.m"
  {
#line 3241 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_72_72;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_77_77;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_13;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__Ctors_14;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__PlainMaybeConsInfos_19;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfos_27;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__DataMaybeConsInfos_28;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__DataConsInfos_29;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__BuiltinConsInfos_35;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__TupleConsInfos_46;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConsInfos_48;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__ApplyConsInfos_50;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__OtherConsInfos_51;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__V_70_70;
#line 3241 "typecheck.m"
    MR_Word check_hlds__typecheck__V_71_71;
#line 3254 "typecheck.m"
    MR_Word check_hlds__typecheck__HLDS_ConsDefns_18;
#line 3249 "typecheck.m"
    MR_Word check_hlds__typecheck__V_15_15;
#line 3249 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_16_16;
#line 3249 "typecheck.m"
    MR_Word check_hlds__typecheck__V_17_17;
#line 3282 "typecheck.m"
    MR_Word check_hlds__typecheck__HLDS_ExistQConsDefns_24;
#line 3275 "typecheck.m"
    MR_Word check_hlds__typecheck__Name_20;
#line 3275 "typecheck.m"
    MR_Word check_hlds__typecheck__FunctorTypeCtor_21;
#line 3275 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigName_22;
#line 3275 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigFunctor_23;
#line 3275 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_78_78;
#line 3293 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
#line 3314 "typecheck.m"
    MR_String check_hlds__typecheck__BuiltInTypeName_30;
#line 3343 "typecheck.m"
    MR_Integer check_hlds__typecheck__TupleArity_36;
#line 3352 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConsInfosPrime_47;
#line 3359 "typecheck.m"
    MR_Word check_hlds__typecheck__ApplyConsInfosPrime_49;

#line 3242 "typecheck.m"
    {
#line 3242 "typecheck.m"
      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_13);
    }
#line 3247 "typecheck.m"
    {
#line 3247 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__Ctors_14);
    }
#line 3249 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 3249 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3249 "typecheck.m"
      {
#line 3249 "typecheck.m"
        check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3249 "typecheck.m"
        check_hlds__typecheck__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3249 "typecheck.m"
        check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3250 "typecheck.m"
        {
#line 3250 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__Functor_8, &check_hlds__typecheck__HLDS_ConsDefns_18);
        }
#line 3249 "typecheck.m"
      }
#line 3254 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3252 "typecheck.m"
      {
#line 3252 "typecheck.m"
        {
#line 3252 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 2, check_hlds__typecheck__HLDS_ConsDefns_18, &check_hlds__typecheck__PlainMaybeConsInfos_19);
        }
#line 3252 "typecheck.m"
      }
#line 3254 "typecheck.m"
    else
#line 3255 "typecheck.m"
      check_hlds__typecheck__PlainMaybeConsInfos_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3275 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 3275 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3275 "typecheck.m"
      {
#line 3275 "typecheck.m"
        check_hlds__typecheck__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3275 "typecheck.m"
        check_hlds__typecheck__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3275 "typecheck.m"
        check_hlds__typecheck__FunctorTypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3275 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_78_78);
#line 3275 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3275 "typecheck.m"
          {
#line 3276 "typecheck.m"
            {
#line 3276 "typecheck.m"
              check_hlds__typecheck__succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(check_hlds__typecheck__Name_20, &check_hlds__typecheck__OrigName_22);
            }
#line 3275 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3275 "typecheck.m"
              {
#line 3277 "typecheck.m"
                {
#line 3277 "typecheck.m"
                  check_hlds__typecheck__OrigFunctor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 3277 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 3277 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 1) = ((MR_Box) (check_hlds__typecheck__OrigName_22));
#line 3277 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 2) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 3277 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 3) = ((MR_Box) (check_hlds__typecheck__FunctorTypeCtor_21));
#line 3277 "typecheck.m"
                }
#line 3278 "typecheck.m"
                {
#line 3278 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__OrigFunctor_23, &check_hlds__typecheck__HLDS_ExistQConsDefns_24);
                }
#line 3275 "typecheck.m"
              }
#line 3275 "typecheck.m"
          }
#line 3275 "typecheck.m"
      }
#line 3282 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3280 "typecheck.m"
      {
#line 3280 "typecheck.m"
        {
#line 3280 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 0, check_hlds__typecheck__HLDS_ExistQConsDefns_24, &check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25);
        }
#line 3280 "typecheck.m"
      }
#line 3282 "typecheck.m"
    else
#line 3283 "typecheck.m"
      check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3289 "typecheck.m"
    {
#line 3289 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_field_access_function_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26);
    }
#line 3293 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3292 "typecheck.m"
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
#line 3293 "typecheck.m"
    else
#line 3294 "typecheck.m"
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5397 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_72_72 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 3298 "typecheck.m"
    {
#line 3298 "typecheck.m"
      check_hlds__typecheck__V_54_54 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25, check_hlds__typecheck__FieldAccessMaybeConsInfos_27);
    }
#line 3297 "typecheck.m"
    {
#line 3297 "typecheck.m"
      check_hlds__typecheck__DataMaybeConsInfos_28 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__PlainMaybeConsInfos_19, check_hlds__typecheck__V_54_54);
    }
#line 3299 "typecheck.m"
    {
#line 3299 "typecheck.m"
      check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__DataMaybeConsInfos_28, &check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__DataConsErrors_12);
    }
#line 3305 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == (MR_Integer) 0);
#line 3305 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2765 "typecheck.m"
      {
#line 2765 "typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2767 "typecheck.m"
          {
#line 2767 "typecheck.m"
            check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
#line 2767 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2767 "typecheck.m"
          }
#line 2765 "typecheck.m"
        else
#line 2765 "typecheck.m"
          if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2769 "typecheck.m"
            {
#line 2769 "typecheck.m"
              MR_String check_hlds__typecheck__String_83;
#line 2769 "typecheck.m"
              MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2769 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 2769 "typecheck.m"
              MR_Word check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 2776 "typecheck.m"
              MR_Char check_hlds__typecheck__V_85_85;

#line 2769 "typecheck.m"
              check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_87_87 == (MR_Integer) 0);
#line 2769 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2769 "typecheck.m"
                {
#line 2769 "typecheck.m"
                  check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_86_86)) == (MR_mktag((MR_Integer) 0)));
#line 2769 "typecheck.m"
                  if (check_hlds__typecheck__succeeded)
#line 2769 "typecheck.m"
                    {
#line 2769 "typecheck.m"
                      check_hlds__typecheck__String_83 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_86_86, (MR_Integer) 0)));
#line 2769 "typecheck.m"
                      check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
#line 2776 "typecheck.m"
                      {
#line 2776 "typecheck.m"
                        check_hlds__typecheck__succeeded = mercury__string__char_to_string_2_p_1(&check_hlds__typecheck__V_85_85, check_hlds__typecheck__String_83);
                      }
#line 2769 "typecheck.m"
                    }
#line 2769 "typecheck.m"
                }
#line 2769 "typecheck.m"
            }
#line 2765 "typecheck.m"
          else
#line 2765 "typecheck.m"
            if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2766 "typecheck.m"
              {
#line 2766 "typecheck.m"
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "float";
#line 2766 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2766 "typecheck.m"
              }
#line 2765 "typecheck.m"
            else
#line 2765 "typecheck.m"
              if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 2777 "typecheck.m"
                {
#line 2777 "typecheck.m"
                  MR_String check_hlds__typecheck__Name_88 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));

#line 2785 "typecheck.m"
                  if ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "line") == 0))
#line 2787 "typecheck.m"
                    {
#line 2787 "typecheck.m"
                      check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int";
#line 2787 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2787 "typecheck.m"
                    }
#line 2785 "typecheck.m"
                  else
#line 2785 "typecheck.m"
                    if ((((((((strcmp(check_hlds__typecheck__Name_88, (MR_String) "file") == 0)) || ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "grade") == 0)))) || ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "module") == 0)))) || ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "pred") == 0))))
#line 2784 "typecheck.m"
                      {
#line 2784 "typecheck.m"
                        check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "string";
#line 2784 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2784 "typecheck.m"
                      }
#line 2785 "typecheck.m"
                    else
#line 2785 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_FALSE;
#line 2777 "typecheck.m"
                }
#line 2765 "typecheck.m"
              else
#line 2765 "typecheck.m"
                if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2765 "typecheck.m"
                  {
#line 2765 "typecheck.m"
                    check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int";
#line 2765 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2765 "typecheck.m"
                  }
#line 2765 "typecheck.m"
                else
#line 2765 "typecheck.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 2768 "typecheck.m"
                    {
#line 2768 "typecheck.m"
                      check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "string";
#line 2768 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2768 "typecheck.m"
                    }
#line 2765 "typecheck.m"
                  else
#line 2765 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_FALSE;
#line 2765 "typecheck.m"
      }
#line 3314 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3308 "typecheck.m"
      {
#line 3308 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtor_31;
#line 3308 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsType_32;
#line 3308 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsTypeVarSet_33;
#line 3308 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsInfo_34;
#line 3308 "typecheck.m"
        MR_Word check_hlds__typecheck__V_55_55;
#line 3308 "typecheck.m"
        MR_Word check_hlds__typecheck__V_60_60;

#line 3308 "typecheck.m"
        {
#line 3308 "typecheck.m"
          check_hlds__typecheck__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 3308 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_55_55, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
#line 3308 "typecheck.m"
        }
#line 3308 "typecheck.m"
        {
#line 3308 "typecheck.m"
          check_hlds__typecheck__TypeCtor_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3308 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 0) = ((MR_Box) (check_hlds__typecheck__V_55_55));
#line 3308 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 3308 "typecheck.m"
        }
#line 3309 "typecheck.m"
        {
#line 3309 "typecheck.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsType_32);
        }
#line 3310 "typecheck.m"
        {
#line 3310 "typecheck.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_33);
        }
#line 3312 "typecheck.m"
        {
#line 3312 "typecheck.m"
          check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3312 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
#line 3312 "typecheck.m"
        }
#line 3311 "typecheck.m"
        {
#line 3311 "typecheck.m"
          check_hlds__typecheck__ConsInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3311 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_33));
#line 3311 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3311 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_32));
#line 3311 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3311 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
#line 3311 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 5) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 3311 "typecheck.m"
        }
#line 3313 "typecheck.m"
        {
#line 3313 "typecheck.m"
          check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3313 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_34));
#line 3313 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3313 "typecheck.m"
        }
#line 3308 "typecheck.m"
      }
#line 3314 "typecheck.m"
    else
#line 3315 "typecheck.m"
      check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3321 "typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3320 "typecheck.m"
      {
#line 3320 "typecheck.m"
        MR_Word check_hlds__typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3320 "typecheck.m"
        MR_String check_hlds__typecheck__V_63_63;
#line 3320 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37;

#line 3320 "typecheck.m"
        check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3320 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3320 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 3320 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3320 "typecheck.m"
          {
#line 3320 "typecheck.m"
            check_hlds__typecheck__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_62_62, (MR_Integer) 0)));
#line 3320 "typecheck.m"
            check_hlds__typecheck__succeeded = (strcmp(check_hlds__typecheck__V_63_63, (MR_String) "{}") == 0);
#line 3320 "typecheck.m"
          }
#line 3320 "typecheck.m"
      }
#line 3321 "typecheck.m"
    else
#line 3321 "typecheck.m"
      if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 3321 "typecheck.m"
        {
#line 3321 "typecheck.m"
          check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3321 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_TRUE;
#line 3321 "typecheck.m"
        }
#line 3321 "typecheck.m"
      else
#line 3321 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_FALSE;
#line 3343 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3328 "typecheck.m"
      {
#line 3328 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 3328 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsTypeVarSet0_38;
#line 3328 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleArgTVars_39;
#line 3328 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsTypeVarSet_40;
#line 3328 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleArgTypes_41;
#line 3328 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleTypeCtor_42;
#line 3328 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsType_43;
#line 3328 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsInfo_45;
#line 3328 "typecheck.m"
        MR_Word check_hlds__typecheck__V_64_64;

#line 3328 "typecheck.m"
        {
#line 3328 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, &check_hlds__typecheck__TupleConsTypeVarSet0_38);
        }
#line 3329 "typecheck.m"
        {
#line 3329 "typecheck.m"
          mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, check_hlds__typecheck__TupleArity_36, &check_hlds__typecheck__TupleArgTVars_39, check_hlds__typecheck__TupleConsTypeVarSet0_38, &check_hlds__typecheck__TupleConsTypeVarSet_40);
        }
#line 3331 "typecheck.m"
        {
#line 3331 "typecheck.m"
          check_hlds__typecheck__V_64_64 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 3331 "typecheck.m"
        {
#line 3331 "typecheck.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_64_64, check_hlds__typecheck__TupleArgTVars_39, &check_hlds__typecheck__TupleArgTypes_41);
        }
#line 3334 "typecheck.m"
        {
#line 3334 "typecheck.m"
          check_hlds__typecheck__TupleTypeCtor_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3334 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[2]));
#line 3334 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 1) = ((MR_Box) (check_hlds__typecheck__TupleArity_36));
#line 3334 "typecheck.m"
        }
#line 3335 "typecheck.m"
        {
#line 3335 "typecheck.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TupleTypeCtor_42, check_hlds__typecheck__TupleArgTypes_41, &check_hlds__typecheck__TupleConsType_43);
        }
#line 3339 "typecheck.m"
        {
#line 3339 "typecheck.m"
          check_hlds__typecheck__TupleConsInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3339 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsTypeVarSet_40));
#line 3339 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3339 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 2) = ((MR_Box) (check_hlds__typecheck__TupleConsType_43));
#line 3339 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 3) = ((MR_Box) (check_hlds__typecheck__TupleArgTypes_41));
#line 3339 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
#line 3339 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[3])));
#line 3339 "typecheck.m"
        }
#line 3342 "typecheck.m"
        {
#line 3342 "typecheck.m"
          check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3342 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsInfo_45));
#line 3342 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3342 "typecheck.m"
        }
#line 3328 "typecheck.m"
      }
#line 3343 "typecheck.m"
    else
#line 3344 "typecheck.m"
      check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3350 "typecheck.m"
    {
#line 3350 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_pred_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, &check_hlds__typecheck__PredConsInfosPrime_47);
    }
#line 3352 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3351 "typecheck.m"
      check_hlds__typecheck__PredConsInfos_48 = check_hlds__typecheck__PredConsInfosPrime_47;
#line 3352 "typecheck.m"
    else
#line 3353 "typecheck.m"
      check_hlds__typecheck__PredConsInfos_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3357 "typecheck.m"
    {
#line 3357 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__ApplyConsInfosPrime_49);
    }
#line 3359 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3358 "typecheck.m"
      check_hlds__typecheck__ApplyConsInfos_50 = check_hlds__typecheck__ApplyConsInfosPrime_49;
#line 3359 "typecheck.m"
    else
#line 3360 "typecheck.m"
      check_hlds__typecheck__ApplyConsInfos_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5803 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_77_77 = (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0;
#line 3364 "typecheck.m"
    {
#line 3364 "typecheck.m"
      check_hlds__typecheck__V_71_71 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__PredConsInfos_48, check_hlds__typecheck__ApplyConsInfos_50);
    }
#line 3364 "typecheck.m"
    {
#line 3364 "typecheck.m"
      check_hlds__typecheck__V_70_70 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__TupleConsInfos_46, check_hlds__typecheck__V_71_71);
    }
#line 3363 "typecheck.m"
    {
#line 3363 "typecheck.m"
      check_hlds__typecheck__OtherConsInfos_51 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__BuiltinConsInfos_35, check_hlds__typecheck__V_70_70);
    }
#line 3365 "typecheck.m"
    {
#line 3365 "typecheck.m"
      *check_hlds__typecheck__ConsInfos_11 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__OtherConsInfos_51);
    }
#line 3241 "typecheck.m"
  }
#line 3236 "typecheck.m"
}

#line 2958 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
#line 2958 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2958 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2958 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2958 "typecheck.m"
{
#line 2958 "typecheck.m"
  {
#line 2958 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2958 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2958 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

#line 2958 "typecheck.m"
    {
#line 2958 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    }
#line 2958 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2958 "typecheck.m"
      {
#line 2958 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
#line 2958 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2958 "typecheck.m"
      }
#line 2958 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2958 "typecheck.m"
  }
#line 2958 "typecheck.m"
}

#line 3207 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
#line 3207 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3207 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3207 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3207 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3207 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3207 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsErrors_12)
#line 3207 "typecheck.m"
{
#line 3211 "typecheck.m"
  {
#line 3211 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3211 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_13;
#line 3219 "typecheck.m"
    MR_Word check_hlds__typecheck__ImportStatus_14;

#line 3212 "typecheck.m"
    {
#line 3212 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__IsFieldAccessFunc_13);
    }
#line 3219 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__IsFieldAccessFunc_13)) == (MR_mktag((MR_Integer) 1)));
#line 3219 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3219 "typecheck.m"
      {
#line 3219 "typecheck.m"
        check_hlds__typecheck__ImportStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__IsFieldAccessFunc_13, (MR_Integer) 0)));
#line 3220 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__ImportStatus_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3220 "typecheck.m"
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3219 "typecheck.m"
      }
#line 3231 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3227 "typecheck.m"
      {
#line 3227 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldAccessConsInfos_15;
#line 2946 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_19_29;
#line 2946 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_20_30;
#line 2946 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_23_33;
#line 2946 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_24_34;
#line 2946 "typecheck.m"
        MR_Word check_hlds__typecheck__Name_21;
#line 2946 "typecheck.m"
        MR_Word check_hlds__typecheck__ModuleInfo_23;
#line 2946 "typecheck.m"
        MR_Word check_hlds__typecheck__AccessType_24;
#line 2946 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldName_25;
#line 2946 "typecheck.m"
        MR_Word check_hlds__typecheck__CtorFieldTable_26;
#line 2946 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldDefns_27;
#line 2946 "typecheck.m"
        MR_Word check_hlds__typecheck__V_28_28;
#line 2946 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_35_35;
#line 2946 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_36_36;
#line 2949 "typecheck.m"
        MR_Word check_hlds__typecheck__V_22_22;
#line 2955 "typecheck.m"
        MR_Box check_hlds__typecheck__conv0_FieldDefns_27;

#line 2949 "typecheck.m"
        check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2949 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2949 "typecheck.m"
          {
#line 2949 "typecheck.m"
            check_hlds__typecheck__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2949 "typecheck.m"
            check_hlds__typecheck__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 2949 "typecheck.m"
            check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 2949 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_35_35);
#line 2946 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2946 "typecheck.m"
              {
#line 2950 "typecheck.m"
                {
#line 2950 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__ModuleInfo_23);
                }
#line 2951 "typecheck.m"
                {
#line 2951 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_23, check_hlds__typecheck__Name_21, &check_hlds__typecheck__V_36_36, &check_hlds__typecheck__AccessType_24, &check_hlds__typecheck__FieldName_25);
                }
#line 2946 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2946 "typecheck.m"
                  {
#line 2951 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_36_36);
#line 2946 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2946 "typecheck.m"
                      {
#line 2954 "typecheck.m"
                        {
#line 2954 "typecheck.m"
                          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_23, &check_hlds__typecheck__CtorFieldTable_26);
                        }
#line 5997 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_19_29 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 5999 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeInfo_20_30 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
#line 2955 "typecheck.m"
                        {
#line 2955 "typecheck.m"
                          check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_19_29, check_hlds__typecheck__TypeInfo_20_30, check_hlds__typecheck__CtorFieldTable_26, ((MR_Box) (check_hlds__typecheck__FieldName_25)), &check_hlds__typecheck__conv0_FieldDefns_27);
                        }
#line 2955 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2955 "typecheck.m"
                          {
#line 2955 "typecheck.m"
                            check_hlds__typecheck__FieldDefns_27 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_27);
#line 2955 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2955 "typecheck.m"
                          }
#line 2946 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2946 "typecheck.m"
                          {
#line 6020 "check_hlds.typecheck.c"
                            check_hlds__typecheck__TypeCtorInfo_23_33 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
#line 6022 "check_hlds.typecheck.c"
                            check_hlds__typecheck__TypeCtorInfo_24_34 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 2958 "typecheck.m"
                            {
#line 2958 "typecheck.m"
                              check_hlds__typecheck__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2958 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_11[0]));
#line 2958 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1));
#line 2958 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2958 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 3) = ((MR_Box) (check_hlds__typecheck__Info_7));
#line 2958 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_10));
#line 2958 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 5) = ((MR_Box) (check_hlds__typecheck__Name_21));
#line 2958 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 2958 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_24));
#line 2958 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_25));
#line 2958 "typecheck.m"
                            }
#line 2957 "typecheck.m"
                            {
#line 2957 "typecheck.m"
                              mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_23_33, check_hlds__typecheck__TypeCtorInfo_24_34, check_hlds__typecheck__V_28_28, check_hlds__typecheck__FieldDefns_27, &check_hlds__typecheck__FieldAccessConsInfos_15);
                            }
#line 2957 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2946 "typecheck.m"
                          }
#line 2946 "typecheck.m"
                      }
#line 2946 "typecheck.m"
                  }
#line 2946 "typecheck.m"
              }
#line 2949 "typecheck.m"
          }
#line 3227 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3226 "typecheck.m"
          {
#line 3226 "typecheck.m"
            check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__FieldAccessConsInfos_15, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
#line 3226 "typecheck.m"
            return;
          }
#line 3227 "typecheck.m"
        else
#line 3228 "typecheck.m"
          {
#line 3228 "typecheck.m"
            *check_hlds__typecheck__ConsInfos_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3229 "typecheck.m"
            *check_hlds__typecheck__ConsErrors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3228 "typecheck.m"
          }
#line 3227 "typecheck.m"
      }
#line 3231 "typecheck.m"
    else
#line 3232 "typecheck.m"
      {
#line 3232 "typecheck.m"
        check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
#line 3232 "typecheck.m"
        return;
      }
#line 3211 "typecheck.m"
  }
#line 3207 "typecheck.m"
}

#line 3192 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
#line 3192 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 3192 "typecheck.m"
{
#line 3192 "typecheck.m"
  {
#line 3192 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 3192 "typecheck.m"
    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0, 1);
#line 3192 "typecheck.m"
  }
#line 3192 "typecheck.m"
}

#line 3192 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
#line 3192 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 3192 "typecheck.m"
{
#line 3192 "typecheck.m"
  {
#line 3192 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 6131 "check_hlds.typecheck.c"
    (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 3193 "typecheck.m"
    {
#line 3193 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = mercury__map__contains_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12)));
    }
#line 3193 "typecheck.m"
    if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
#line 3193 "typecheck.m"
      {
#line 3193 "typecheck.m"
        check_hlds__typecheck__rename_constraint_3_p_0_1(check_hlds__typecheck__env_ptr);
#line 3193 "typecheck.m"
        return;
      }
#line 3192 "typecheck.m"
  }
#line 3192 "typecheck.m"
}

#line 3192 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
#line 3192 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 3192 "typecheck.m"
{
#line 3192 "typecheck.m"
  {
#line 3192 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 3192 "typecheck.m"
    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0) == 0)
#line 3192 "typecheck.m"
      {
#line 3192 "typecheck.m"
        {
#line 3192 "typecheck.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12, check_hlds__typecheck__rename_constraint_3_p_0_2, check_hlds__typecheck__env_ptr);
        }
#line 3192 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_FALSE;
#line 3192 "typecheck.m"
      }
#line 3192 "typecheck.m"
    else
#line 3192 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
#line 3192 "typecheck.m"
  }
#line 3192 "typecheck.m"
}

#line 3186 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
#line 3186 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_4,
#line 3186 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint0_5,
#line 3186 "typecheck.m"
  MR_Word * check_hlds__typecheck__Constraint_6)
#line 3186 "typecheck.m"
{
#line 3186 "typecheck.m"
  {
#line 3186 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s check_hlds__typecheck__env;

#line 3186 "typecheck.m"
    (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4 = check_hlds__typecheck__TVarRenaming_4;
#line 3189 "typecheck.m"
    {
#line 3189 "typecheck.m"
      MR_Word check_hlds__typecheck__Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 0)));
#line 3189 "typecheck.m"
      MR_Word check_hlds__typecheck__ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 1)));
#line 3189 "typecheck.m"
      MR_Word check_hlds__typecheck__ArgTypes_11;

#line 3190 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 2)));
#line 3192 "typecheck.m"
      {
#line 3192 "typecheck.m"
        check_hlds__typecheck__rename_constraint_3_p_0_3(&check_hlds__typecheck__env);
      }
#line 3189 "typecheck.m"
      if ((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
#line 3189 "typecheck.m"
        {
#line 3195 "typecheck.m"
          {
#line 3195 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &check_hlds__typecheck__ArgTypes_11);
          }
#line 3196 "typecheck.m"
          {
#line 3196 "typecheck.m"
            MR_Word base;
#line 3196 "typecheck.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3196 "typecheck.m"
            *check_hlds__typecheck__Constraint_6 = base;
#line 3196 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Ids_7));
#line 3196 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__ClassName_8));
#line 3196 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__ArgTypes_11));
#line 3196 "typecheck.m"
          }
#line 3196 "typecheck.m"
          (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
#line 3189 "typecheck.m"
        }
#line 3189 "typecheck.m"
      return (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
#line 3189 "typecheck.m"
    }
#line 3186 "typecheck.m"
  }
#line 3186 "typecheck.m"
}

#line 3177 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
#line 3177 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_3,
#line 3177 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4)
#line 3177 "typecheck.m"
{
#line 3179 "typecheck.m"
  {
#line 3179 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3179 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_11_11;
#line 3179 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesToCheck_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 2)));
#line 3179 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarsToCheck0_8;
#line 3179 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarsToCheck_9;
#line 3179 "typecheck.m"
    MR_Word check_hlds__typecheck__RelevantTVars_10;
#line 3180 "typecheck.m"
    MR_Word check_hlds__typecheck___Ids_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 0)));
#line 3180 "typecheck.m"
    MR_Word check_hlds__typecheck___ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 1)));

#line 3181 "typecheck.m"
    {
#line 3181 "typecheck.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__TypesToCheck_7, &check_hlds__typecheck__TVarsToCheck0_8);
    }
#line 6291 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeInfo_11_11 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 3182 "typecheck.m"
    {
#line 3182 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck0_8, &check_hlds__typecheck__TVarsToCheck_9);
    }
#line 3183 "typecheck.m"
    {
#line 3183 "typecheck.m"
      mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck_9, check_hlds__typecheck__CallTVars_3, &check_hlds__typecheck__RelevantTVars_10);
    }
#line 3184 "typecheck.m"
    {
#line 3184 "typecheck.m"
      return check_hlds__typecheck__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__RelevantTVars_10);
    }
#line 3179 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 3179 "typecheck.m"
  }
#line 3177 "typecheck.m"
}

#line 3170 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
#line 3170 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3170 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 3170 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 3170 "typecheck.m"
{
#line 3170 "typecheck.m"
  {
#line 3170 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3170 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 3170 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_Constraint_6;

#line 3170 "typecheck.m"
    {
#line 3170 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__rename_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv0_Constraint_6);
    }
#line 3170 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3170 "typecheck.m"
      {
#line 3170 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_Constraint_6));
#line 3170 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 3170 "typecheck.m"
      }
#line 3170 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 3170 "typecheck.m"
  }
#line 3170 "typecheck.m"
}

#line 3169 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
#line 3169 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3169 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 3169 "typecheck.m"
{
#line 3169 "typecheck.m"
  {
#line 3169 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3169 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 3169 "typecheck.m"
    {
#line 3169 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__project_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 3169 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 3169 "typecheck.m"
  }
#line 3169 "typecheck.m"
}

#line 3159 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
#line 3159 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_7,
#line 3159 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarSet_8,
#line 3159 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_9,
#line 3159 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_10,
#line 3159 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
#line 3159 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21)
#line 3159 "typecheck.m"
{
#line 3164 "typecheck.m"
  {
#line 3164 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__Unproven0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 0)));
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__Assumed_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 1)));
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__Redundant0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 2)));
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 3)));
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__NewUnproven0_16;
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__NewUnproven_17;
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__Redundant_18;
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__Unproven_19;
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 3164 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;

#line 3169 "typecheck.m"
    {
#line 3169 "typecheck.m"
      check_hlds__typecheck__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3169 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[5]));
#line 3169 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_1));
#line 3169 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 3169 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 3) = ((MR_Box) (check_hlds__typecheck__CallTVars_9));
#line 3169 "typecheck.m"
    }
#line 6443 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 3169 "typecheck.m"
    {
#line 3169 "typecheck.m"
      mercury__list__filter_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__V_22_22, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__NewUnproven0_16);
    }
#line 3170 "typecheck.m"
    {
#line 3170 "typecheck.m"
      check_hlds__typecheck__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3170 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_8[1]));
#line 3170 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_2));
#line 3170 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 3170 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 3) = ((MR_Box) (check_hlds__typecheck__TVarRenaming_10));
#line 3170 "typecheck.m"
    }
#line 3170 "typecheck.m"
    {
#line 3170 "typecheck.m"
      mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__V_23_23, check_hlds__typecheck__NewUnproven0_16, &check_hlds__typecheck__NewUnproven_17);
    }
#line 3172 "typecheck.m"
    {
#line 3172 "typecheck.m"
      hlds__hlds_data__update_redundant_constraints_5_p_0(check_hlds__typecheck__ClassTable_7, check_hlds__typecheck__TVarSet_8, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Redundant0_14, &check_hlds__typecheck__Redundant_18);
    }
#line 3174 "typecheck.m"
    {
#line 3174 "typecheck.m"
      mercury__list__append_3_p_1(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__Unproven_19);
    }
#line 3175 "typecheck.m"
    {
#line 3175 "typecheck.m"
      MR_Word base;
#line 3175 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3175 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Constraints_21 = base;
#line 3175 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Unproven_19));
#line 3175 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Assumed_13));
#line 3175 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__Redundant_18));
#line 3175 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__Ancestors_15));
#line 3175 "typecheck.m"
    }
#line 3164 "typecheck.m"
  }
#line 3159 "typecheck.m"
}

#line 3026 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_8,
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_9,
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_10,
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_11,
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
#line 3026 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
#line 3026 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14)
#line 3026 "typecheck.m"
{
#line 3031 "typecheck.m"
  {
#line 3031 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3031 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_100_100;
#line 3031 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 0)));
#line 3031 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 1)));
#line 3031 "typecheck.m"
    MR_Word check_hlds__typecheck__FunctorType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 2)));
#line 3031 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 3)));
#line 3031 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 4)));
#line 3031 "typecheck.m"
    MR_Word check_hlds__typecheck__Source0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 5)));
#line 3031 "typecheck.m"
    MR_Word check_hlds__typecheck__SourceType_22;
#line 3031 "typecheck.m"
    MR_Integer check_hlds__typecheck__FieldNumber_32;
#line 3031 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldType_33;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__V_29_29;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;
#line 3046 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 3047 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_FieldType_33;

#line 3037 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__Source0_20)) == (MR_mktag((MR_Integer) 0))))
#line 3035 "typecheck.m"
      check_hlds__typecheck__SourceType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Source0_20, (MR_Integer) 0)));
#line 3037 "typecheck.m"
    else
#line 3043 "typecheck.m"
      {
#line 3044 "typecheck.m"
        {
#line 3044 "typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
#line 3044 "typecheck.m"
          return;
        }
#line 3043 "typecheck.m"
      }
#line 3046 "typecheck.m"
    check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 0)));
#line 3046 "typecheck.m"
    check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 1)));
#line 3046 "typecheck.m"
    check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 2)));
#line 3046 "typecheck.m"
    check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 3)));
#line 3046 "typecheck.m"
    check_hlds__typecheck__FieldNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 4)));
#line 6583 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 3047 "typecheck.m"
    {
#line 3047 "typecheck.m"
      mercury__list__det_index1_3_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, &check_hlds__typecheck__conv0_FieldType_33);
    }
#line 3047 "typecheck.m"
    check_hlds__typecheck__FieldType_33 = ((MR_Word) check_hlds__typecheck__conv0_FieldType_33);
#line 3057 "typecheck.m"
    if ((check_hlds__typecheck__AccessType_9 == (MR_Integer) 0))
#line 3049 "typecheck.m"
      {
#line 3049 "typecheck.m"
        MR_Word check_hlds__typecheck__Source_34;
#line 3049 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypes_36;
#line 3049 "typecheck.m"
        MR_Word check_hlds__typecheck__V_74_74;

#line 3050 "typecheck.m"
        {
#line 3050 "typecheck.m"
          check_hlds__typecheck__Source_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3050 "typecheck.m"
          MR_hl_field(MR_mktag(2), check_hlds__typecheck__Source_34, 0) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
#line 3050 "typecheck.m"
        }
#line 3052 "typecheck.m"
        {
#line 3052 "typecheck.m"
          check_hlds__typecheck__ArgTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3052 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3052 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3052 "typecheck.m"
        }
#line 3055 "typecheck.m"
        {
#line 3055 "typecheck.m"
          check_hlds__typecheck__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3055 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 3055 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 3055 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 2) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 3055 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_36));
#line 3055 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
#line 3055 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 5) = ((MR_Box) (check_hlds__typecheck__Source_34));
#line 3055 "typecheck.m"
        }
#line 3055 "typecheck.m"
        *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_74_74);
#line 3049 "typecheck.m"
      }
#line 3057 "typecheck.m"
    else
#line 3058 "typecheck.m"
      {
#line 3058 "typecheck.m"
        MR_Word check_hlds__typecheck__TVarsInField_39;
#line 3058 "typecheck.m"
        MR_Word check_hlds__typecheck__Source_95;

#line 3059 "typecheck.m"
        {
#line 3059 "typecheck.m"
          check_hlds__typecheck__Source_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3059 "typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 3059 "typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 1) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
#line 3059 "typecheck.m"
        }
#line 3073 "typecheck.m"
        {
#line 3073 "typecheck.m"
          parse_tree__prog_type__type_vars_2_p_0(check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__TVarsInField_39);
        }
#line 3086 "typecheck.m"
        if ((check_hlds__typecheck__TVarsInField_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3075 "typecheck.m"
          {
#line 3075 "typecheck.m"
            MR_Word check_hlds__typecheck__V_70_70;
#line 3075 "typecheck.m"
            MR_Word check_hlds__typecheck__V_72_72;
#line 3075 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_76;

#line 3078 "typecheck.m"
            {
#line 3078 "typecheck.m"
              check_hlds__typecheck__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3078 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_70_70, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 3078 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3078 "typecheck.m"
            }
#line 3078 "typecheck.m"
            {
#line 3078 "typecheck.m"
              check_hlds__typecheck__ArgTypes_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3078 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3078 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 1) = ((MR_Box) (check_hlds__typecheck__V_70_70));
#line 3078 "typecheck.m"
            }
#line 3084 "typecheck.m"
            {
#line 3084 "typecheck.m"
              check_hlds__typecheck__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3084 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 3084 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 3084 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 2) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3084 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_76));
#line 3084 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
#line 3084 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
#line 3084 "typecheck.m"
            }
#line 3084 "typecheck.m"
            *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_72_72);
#line 3075 "typecheck.m"
          }
#line 3086 "typecheck.m"
        else
#line 3087 "typecheck.m"
          {
#line 3087 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeInfo_101_101;
#line 3087 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypesWithoutField_42;
#line 3087 "typecheck.m"
            MR_Word check_hlds__typecheck__TVarsInOtherArgs_43;
#line 3087 "typecheck.m"
            MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers_44;
#line 3087 "typecheck.m"
            MR_Word check_hlds__typecheck__V_58_58;
#line 3087 "typecheck.m"
            MR_Word check_hlds__typecheck__V_59_59;
#line 3087 "typecheck.m"
            MR_Word check_hlds__typecheck__V_60_60;
#line 3087 "typecheck.m"
            MR_Word check_hlds__typecheck__V_61_61;
#line 3087 "typecheck.m"
            MR_Word check_hlds__typecheck__V_62_62;

#line 3102 "typecheck.m"
            {
#line 3102 "typecheck.m"
              check_hlds__typecheck__V_58_58 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
#line 3102 "typecheck.m"
            {
#line 3102 "typecheck.m"
              mercury__list__det_replace_nth_4_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, ((MR_Box) (check_hlds__typecheck__V_58_58)), &check_hlds__typecheck__ArgTypesWithoutField_42);
            }
#line 3104 "typecheck.m"
            {
#line 3104 "typecheck.m"
              parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypesWithoutField_42, &check_hlds__typecheck__TVarsInOtherArgs_43);
            }
#line 6758 "check_hlds.typecheck.c"
            check_hlds__typecheck__TypeInfo_101_101 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 3106 "typecheck.m"
            {
#line 3106 "typecheck.m"
              check_hlds__typecheck__V_59_59 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39);
            }
#line 3108 "typecheck.m"
            {
#line 3108 "typecheck.m"
              check_hlds__typecheck__V_61_61 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInOtherArgs_43);
            }
#line 3109 "typecheck.m"
            {
#line 3109 "typecheck.m"
              check_hlds__typecheck__V_62_62 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__OrigExistTVars_13);
            }
#line 3107 "typecheck.m"
            {
#line 3107 "typecheck.m"
              check_hlds__typecheck__V_60_60 = mercury__set__intersect_2_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__V_61_61, check_hlds__typecheck__V_62_62);
            }
#line 3105 "typecheck.m"
            {
#line 3105 "typecheck.m"
              mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__V_59_59, check_hlds__typecheck__V_60_60, &check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
            }
#line 3112 "typecheck.m"
            {
#line 3112 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__set__is_empty_1_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
            }
#line 3141 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3117 "typecheck.m"
              {
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarsOnlyInField0_45;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarsOnlyInField_46;
#line 3117 "typecheck.m"
                MR_Integer check_hlds__typecheck__NumNewTVars_47;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__NewTVars_48;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarRenaming_49;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__RenamedFieldType_50;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__CallTVars0_52;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__CallTVars_53;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__V_63_63;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__V_64_64;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__V_66_66;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__RetType_79;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_80;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarSet_81;
#line 3117 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_82;

#line 3116 "typecheck.m"
                {
#line 3116 "typecheck.m"
                  mercury__list__delete_elems_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39, check_hlds__typecheck__TVarsInOtherArgs_43, &check_hlds__typecheck__TVarsOnlyInField0_45);
                }
#line 3118 "typecheck.m"
                {
#line 3118 "typecheck.m"
                  mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField0_45, &check_hlds__typecheck__TVarsOnlyInField_46);
                }
#line 3119 "typecheck.m"
                {
#line 3119 "typecheck.m"
                  mercury__list__length_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, &check_hlds__typecheck__NumNewTVars_47);
                }
#line 3120 "typecheck.m"
                {
#line 3120 "typecheck.m"
                  mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__NumNewTVars_47, &check_hlds__typecheck__NewTVars_48, check_hlds__typecheck__TVarSet0_15, &check_hlds__typecheck__TVarSet_81);
                }
#line 3121 "typecheck.m"
                {
#line 3121 "typecheck.m"
                  mercury__map__from_corresponding_lists_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, check_hlds__typecheck__NewTVars_48, &check_hlds__typecheck__TVarRenaming_49);
                }
#line 3123 "typecheck.m"
                {
#line 3123 "typecheck.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__RenamedFieldType_50);
                }
#line 3125 "typecheck.m"
                {
#line 3125 "typecheck.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FunctorType_17, &check_hlds__typecheck__RetType_79);
                }
#line 3132 "typecheck.m"
                {
#line 3132 "typecheck.m"
                  check_hlds__typecheck__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3132 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 3132 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3132 "typecheck.m"
                }
#line 3132 "typecheck.m"
                {
#line 3132 "typecheck.m"
                  check_hlds__typecheck__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3132 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3132 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 1) = ((MR_Box) (check_hlds__typecheck__V_64_64));
#line 3132 "typecheck.m"
                }
#line 3132 "typecheck.m"
                {
#line 3132 "typecheck.m"
                  parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__V_63_63, &check_hlds__typecheck__CallTVars0_52);
                }
#line 3133 "typecheck.m"
                {
#line 3133 "typecheck.m"
                  mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__CallTVars0_52, &check_hlds__typecheck__CallTVars_53);
                }
#line 3134 "typecheck.m"
                {
#line 3134 "typecheck.m"
                  check_hlds__typecheck__project_and_rename_constraints_6_p_0(check_hlds__typecheck__ClassTable_8, check_hlds__typecheck__TVarSet_81, check_hlds__typecheck__CallTVars_53, check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__Constraints0_19, &check_hlds__typecheck__Constraints_82);
                }
#line 3138 "typecheck.m"
                {
#line 3138 "typecheck.m"
                  check_hlds__typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3138 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__typecheck__RenamedFieldType_50));
#line 3138 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3138 "typecheck.m"
                }
#line 3138 "typecheck.m"
                {
#line 3138 "typecheck.m"
                  check_hlds__typecheck__ArgTypes_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3138 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3138 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 1) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 3138 "typecheck.m"
                }
#line 3139 "typecheck.m"
                {
#line 3139 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3139 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet_81));
#line 3139 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 3139 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 2) = ((MR_Box) (check_hlds__typecheck__RetType_79));
#line 3139 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_80));
#line 3139 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_82));
#line 3139 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
#line 3139 "typecheck.m"
                }
#line 3139 "typecheck.m"
                *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_68_68);
#line 3117 "typecheck.m"
              }
#line 3141 "typecheck.m"
            else
#line 3147 "typecheck.m"
              {
#line 3147 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54;
#line 3147 "typecheck.m"
                MR_Word check_hlds__typecheck__V_69_69;

#line 3146 "typecheck.m"
                {
#line 3146 "typecheck.m"
                  mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44, &check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54);
                }
#line 3148 "typecheck.m"
                {
#line 3148 "typecheck.m"
                  check_hlds__typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 3148 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 0) = ((MR_Box) (check_hlds__typecheck__FieldName_10));
#line 3148 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 1) = ((MR_Box) (check_hlds__typecheck__FieldDefn_11));
#line 3148 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 2) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 3148 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 3) = ((MR_Box) (check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54));
#line 3148 "typecheck.m"
                }
#line 3148 "typecheck.m"
                {
#line 3148 "typecheck.m"
                  MR_Word base;
#line 3148 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3148 "typecheck.m"
                  *check_hlds__typecheck__ConsTypeInfo_14 = base;
#line 3148 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 3148 "typecheck.m"
                }
#line 3147 "typecheck.m"
              }
#line 3087 "typecheck.m"
          }
#line 3058 "typecheck.m"
      }
#line 3031 "typecheck.m"
  }
#line 3026 "typecheck.m"
}

#line 2962 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_9,
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__FuncName_11,
#line 2962 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_12,
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_13,
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_14,
#line 2962 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_15,
#line 2962 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16)
#line 2962 "typecheck.m"
{
#line 2968 "typecheck.m"
  {
#line 2968 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 2)));
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 3)));
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeModule_36;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_39;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__PredTable_40;
#line 2968 "typecheck.m"
    MR_String check_hlds__typecheck__UnqualFuncName_41;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_42;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__Ctors_45;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsDefn_46;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsAction_47;
#line 2968 "typecheck.m"
    MR_Word check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_33, (MR_Integer) 0)));
#line 2990 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 0)));
#line 2990 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 1)));
#line 2990 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 4)));
#line 2991 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_33, (MR_Integer) 1)));
#line 2991 "typecheck.m"
    MR_String check_hlds__typecheck__V_37_37;

#line 2991 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 2991 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2991 "typecheck.m"
      {
#line 2991 "typecheck.m"
        check_hlds__typecheck__TypeModule_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, (MR_Integer) 0)));
#line 2991 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, (MR_Integer) 1)));
#line 2998 "typecheck.m"
        {
#line 2998 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__ModuleInfo_39);
        }
#line 2999 "typecheck.m"
        {
#line 2999 "typecheck.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_39, &check_hlds__typecheck__PredTable_40);
        }
#line 3000 "typecheck.m"
        {
#line 3000 "typecheck.m"
          check_hlds__typecheck__UnqualFuncName_41 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__typecheck__FuncName_11);
        }
#line 3001 "typecheck.m"
        {
#line 3001 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__IsFieldAccessFunc_42);
        }
#line 3007 "typecheck.m"
        if ((check_hlds__typecheck__IsFieldAccessFunc_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3003 "typecheck.m"
          {
#line 3003 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_43;

#line 3004 "typecheck.m"
            {
#line 3004 "typecheck.m"
              hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(check_hlds__typecheck__PredTable_40, (MR_Integer) 0, check_hlds__typecheck__TypeModule_36, check_hlds__typecheck__UnqualFuncName_41, check_hlds__typecheck__Arity_12, &check_hlds__typecheck__PredIds_43);
            }
#line 3006 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredIds_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3003 "typecheck.m"
          }
#line 3007 "typecheck.m"
        else
#line 3008 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2968 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2968 "typecheck.m"
          {
#line 3010 "typecheck.m"
            {
#line 3010 "typecheck.m"
              hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck__ModuleInfo_39, &check_hlds__typecheck__Ctors_45);
            }
#line 3011 "typecheck.m"
            {
#line 3011 "typecheck.m"
              hlds__hlds_data__lookup_cons_table_of_type_ctor_4_p_0(check_hlds__typecheck__Ctors_45, check_hlds__typecheck__TypeCtor_33, check_hlds__typecheck__ConsId_34, &check_hlds__typecheck__ConsDefn_46);
            }
#line 3015 "typecheck.m"
            if ((check_hlds__typecheck__AccessType_13 == (MR_Integer) 0))
#line 3014 "typecheck.m"
              check_hlds__typecheck__ConsAction_47 = (MR_Integer) 2;
#line 3015 "typecheck.m"
            else
#line 3017 "typecheck.m"
              check_hlds__typecheck__ConsAction_47 = (MR_Integer) 1;
#line 3020 "typecheck.m"
            {
#line 3020 "typecheck.m"
              check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__Info_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsAction_47, check_hlds__typecheck__ConsDefn_46, &check_hlds__typecheck__MaybeFunctorConsTypeInfo_18);
            }
#line 2979 "typecheck.m"
            if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18)) == (MR_mktag((MR_Integer) 1))))
#line 2981 "typecheck.m"
              *check_hlds__typecheck__ConsTypeInfo_16 = check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
#line 2979 "typecheck.m"
            else
#line 2973 "typecheck.m"
              {
#line 2973 "typecheck.m"
                MR_Word check_hlds__typecheck__OrigExistTVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 4)));
#line 2973 "typecheck.m"
                MR_Word check_hlds__typecheck__FunctorConsTypeInfo_19 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18), (MR_Integer) 0);
#line 2973 "typecheck.m"
                MR_Word check_hlds__typecheck__ModuleInfo_20;
#line 2973 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassTable_21;
#line 3019 "typecheck.m"
                MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 0)));
#line 3019 "typecheck.m"
                MR_Word check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 1)));
#line 3019 "typecheck.m"
                MR_Word check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 2)));
#line 3019 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 3)));
#line 3019 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 5)));
#line 3019 "typecheck.m"
                MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 6)));
#line 3019 "typecheck.m"
                MR_Word check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 7)));

#line 2974 "typecheck.m"
                {
#line 2974 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__ModuleInfo_20);
                }
#line 2975 "typecheck.m"
                {
#line 2975 "typecheck.m"
                  hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_20, &check_hlds__typecheck__ClassTable_21);
                }
#line 2976 "typecheck.m"
                {
#line 2976 "typecheck.m"
                  check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(check_hlds__typecheck__ClassTable_21, check_hlds__typecheck__AccessType_13, check_hlds__typecheck__FieldName_14, check_hlds__typecheck__FieldDefn_15, check_hlds__typecheck__FunctorConsTypeInfo_19, check_hlds__typecheck__OrigExistTVars_17, check_hlds__typecheck__ConsTypeInfo_16);
                }
#line 2973 "typecheck.m"
              }
#line 2979 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2968 "typecheck.m"
          }
#line 2991 "typecheck.m"
      }
#line 2968 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2968 "typecheck.m"
  }
#line 2962 "typecheck.m"
}

#line 2958 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
#line 2958 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2958 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2958 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2958 "typecheck.m"
{
#line 2958 "typecheck.m"
  {
#line 2958 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2958 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2958 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

#line 2958 "typecheck.m"
    {
#line 2958 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    }
#line 2958 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2958 "typecheck.m"
      {
#line 2958 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
#line 2958 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2958 "typecheck.m"
      }
#line 2958 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2958 "typecheck.m"
  }
#line 2958 "typecheck.m"
}

#line 2942 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
#line 2942 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2942 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 2942 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2942 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 2942 "typecheck.m"
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10)
#line 2942 "typecheck.m"
{
#line 2946 "typecheck.m"
  {
#line 2946 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2946 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_19_19;
#line 2946 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_20_20;
#line 2946 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_23_23;
#line 2946 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_24_24;
#line 2946 "typecheck.m"
    MR_Word check_hlds__typecheck__Name_11;
#line 2946 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_13;
#line 2946 "typecheck.m"
    MR_Word check_hlds__typecheck__AccessType_14;
#line 2946 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldName_15;
#line 2946 "typecheck.m"
    MR_Word check_hlds__typecheck__CtorFieldTable_16;
#line 2946 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldDefns_17;
#line 2946 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;
#line 2946 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_25_25;
#line 2946 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_26_26;
#line 2949 "typecheck.m"
    MR_Word check_hlds__typecheck__V_12_12;
#line 2955 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_FieldDefns_17;

#line 2949 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2949 "typecheck.m"
      {
#line 2949 "typecheck.m"
        check_hlds__typecheck__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 1)));
#line 2949 "typecheck.m"
        check_hlds__typecheck__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 2)));
#line 2949 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 3)));
#line 2949 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_25_25);
#line 2946 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2946 "typecheck.m"
          {
#line 2950 "typecheck.m"
            {
#line 2950 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__ModuleInfo_13);
            }
#line 2951 "typecheck.m"
            {
#line 2951 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_13, check_hlds__typecheck__Name_11, &check_hlds__typecheck__V_26_26, &check_hlds__typecheck__AccessType_14, &check_hlds__typecheck__FieldName_15);
            }
#line 2946 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2946 "typecheck.m"
              {
#line 2951 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_26_26);
#line 2946 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2946 "typecheck.m"
                  {
#line 2954 "typecheck.m"
                    {
#line 2954 "typecheck.m"
                      hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_13, &check_hlds__typecheck__CtorFieldTable_16);
                    }
#line 7321 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 7323 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
#line 2955 "typecheck.m"
                    {
#line 2955 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_19_19, check_hlds__typecheck__TypeInfo_20_20, check_hlds__typecheck__CtorFieldTable_16, ((MR_Box) (check_hlds__typecheck__FieldName_15)), &check_hlds__typecheck__conv0_FieldDefns_17);
                    }
#line 2955 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2955 "typecheck.m"
                      {
#line 2955 "typecheck.m"
                        check_hlds__typecheck__FieldDefns_17 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_17);
#line 2955 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2955 "typecheck.m"
                      }
#line 2946 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2946 "typecheck.m"
                      {
#line 7344 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
#line 7346 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_24_24 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 2958 "typecheck.m"
                        {
#line 2958 "typecheck.m"
                          check_hlds__typecheck__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2958 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_11[0]));
#line 2958 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 1) = ((MR_Box) (check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1));
#line 2958 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2958 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 3) = ((MR_Box) (check_hlds__typecheck__Info_6));
#line 2958 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_7));
#line 2958 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 5) = ((MR_Box) (check_hlds__typecheck__Name_11));
#line 2958 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 2958 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_14));
#line 2958 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_15));
#line 2958 "typecheck.m"
                        }
#line 2957 "typecheck.m"
                        {
#line 2957 "typecheck.m"
                          mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_23_23, check_hlds__typecheck__TypeCtorInfo_24_24, check_hlds__typecheck__V_18_18, check_hlds__typecheck__FieldDefns_17, check_hlds__typecheck__MaybeConsTypeInfos_10);
                        }
#line 2957 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2946 "typecheck.m"
                      }
#line 2946 "typecheck.m"
                  }
#line 2946 "typecheck.m"
              }
#line 2946 "typecheck.m"
          }
#line 2949 "typecheck.m"
      }
#line 2946 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2946 "typecheck.m"
  }
#line 2942 "typecheck.m"
}

#line 2821 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__make_pred_cons_info_list_7_p_0(
#line 2821 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2821 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2821 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTable_3,
#line 2821 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_4,
#line 2821 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_5,
#line 2821 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
#line 2821 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7)
#line 2821 "typecheck.m"
{
#line 2825 "typecheck.m"
  while (MR_TRUE)
#line 2825 "typecheck.m"
    {
#line 2825 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2825 "typecheck.m"
      {
#line 2825 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2825 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2825 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
#line 2825 "typecheck.m"
        else
#line 2827 "typecheck.m"
          {
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__ModuleInfo_34;
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassTable_35;
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_36;
#line 2827 "typecheck.m"
            MR_Integer check_hlds__typecheck__PredArity_37;
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__IsPredOrFunc_38;
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_39;
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_40;
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_41;
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__CompleteArgTypes_42;
#line 2827 "typecheck.m"
            MR_Word check_hlds__typecheck__Purity_43;
#line 2840 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_36;

#line 2838 "typecheck.m"
            {
#line 2838 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_1, &check_hlds__typecheck__ModuleInfo_34);
            }
#line 2839 "typecheck.m"
            {
#line 2839 "typecheck.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_34, &check_hlds__typecheck__ClassTable_35);
            }
#line 2840 "typecheck.m"
            {
#line 2840 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__PredTable_3, ((MR_Box) (check_hlds__typecheck__PredId_16)), &check_hlds__typecheck__conv0_PredInfo_36);
            }
#line 2840 "typecheck.m"
            check_hlds__typecheck__PredInfo_36 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_36);
#line 2841 "typecheck.m"
            {
#line 2841 "typecheck.m"
              check_hlds__typecheck__PredArity_37 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__PredInfo_36);
            }
#line 2842 "typecheck.m"
            {
#line 2842 "typecheck.m"
              check_hlds__typecheck__IsPredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__typecheck__PredInfo_36);
            }
#line 2843 "typecheck.m"
            {
#line 2843 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredClassContext_39);
            }
#line 2844 "typecheck.m"
            {
#line 2844 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredTypeVarSet_40, &check_hlds__typecheck__PredExistQVars_41, &check_hlds__typecheck__CompleteArgTypes_42);
            }
#line 2846 "typecheck.m"
            {
#line 2846 "typecheck.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__Purity_43);
            }
#line 2848 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 0);
#line 2848 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2848 "typecheck.m"
              {
#line 2849 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredArity_37 >= check_hlds__typecheck__Arity_4);
#line 2848 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2852 "typecheck.m"
                  check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2848 "typecheck.m"
              }
#line 2863 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2855 "typecheck.m"
              {
#line 2855 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_44;
#line 2855 "typecheck.m"
                MR_Word check_hlds__typecheck__PredTypeParams_45;
#line 2855 "typecheck.m"
                MR_Word check_hlds__typecheck__PredType_46;
#line 2855 "typecheck.m"
                MR_Word check_hlds__typecheck__PredConstraints_47;
#line 2855 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsInfo_48;
#line 2855 "typecheck.m"
                MR_Word check_hlds__typecheck__V_58_58;

#line 2854 "typecheck.m"
                {
#line 2854 "typecheck.m"
                  mercury__list__det_split_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Arity_4, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__ArgTypes_44, &check_hlds__typecheck__PredTypeParams_45);
                }
#line 2856 "typecheck.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2856 "typecheck.m"
                {
#line 2856 "typecheck.m"
                  parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__PredTypeParams_45, &check_hlds__typecheck__PredType_46);
                }
#line 2858 "typecheck.m"
                {
#line 2858 "typecheck.m"
                  hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_5, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_47);
                }
#line 2861 "typecheck.m"
                {
#line 2861 "typecheck.m"
                  check_hlds__typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2861 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2861 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 1) = ((MR_Box) (check_hlds__typecheck__PredId_16));
#line 2861 "typecheck.m"
                }
#line 2860 "typecheck.m"
                {
#line 2860 "typecheck.m"
                  check_hlds__typecheck__ConsInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2860 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
#line 2860 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
#line 2860 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 2) = ((MR_Box) (check_hlds__typecheck__PredType_46));
#line 2860 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_44));
#line 2860 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_47));
#line 2860 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 5) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 2860 "typecheck.m"
                }
#line 2862 "typecheck.m"
                {
#line 2862 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2862 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_48));
#line 2862 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
#line 2862 "typecheck.m"
                }
#line 2855 "typecheck.m"
              }
#line 2863 "typecheck.m"
            else
#line 2892 "typecheck.m"
              {
#line 2864 "typecheck.m"
                MR_Integer check_hlds__typecheck__PredAsFuncArity_49;
#line 2864 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_60_60;

#line 2864 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 1);
#line 2864 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2864 "typecheck.m"
                  {
#line 2865 "typecheck.m"
                    check_hlds__typecheck__V_60_60 = (MR_Integer) 1;
#line 2865 "typecheck.m"
                    check_hlds__typecheck__PredAsFuncArity_49 = (check_hlds__typecheck__PredArity_37 - check_hlds__typecheck__V_60_60);
#line 2866 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 >= check_hlds__typecheck__Arity_4);
#line 2864 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2864 "typecheck.m"
                      {
#line 2870 "typecheck.m"
                        check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2871 "typecheck.m"
                        if (!(check_hlds__typecheck__succeeded))
#line 2871 "typecheck.m"
                          check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 == check_hlds__typecheck__Arity_4);
#line 2864 "typecheck.m"
                      }
#line 2864 "typecheck.m"
                  }
#line 2892 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2875 "typecheck.m"
                  {
#line 2875 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeCtorInfo_53_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 2875 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncArgTypes_50;
#line 2875 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncTypeParams_51;
#line 2875 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncArgTypeParams_52;
#line 2875 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncReturnTypeParam_53;
#line 2875 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncType_54;
#line 2875 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_62_62;
#line 2875 "typecheck.m"
                    MR_Word check_hlds__typecheck__PredConstraints_64;
#line 2875 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsInfo_65;
#line 2876 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv1_FuncReturnTypeParam_53;

#line 2874 "typecheck.m"
                    {
#line 2874 "typecheck.m"
                      mercury__list__det_split_list_4_p_0(check_hlds__typecheck__TypeCtorInfo_53_71, check_hlds__typecheck__Arity_4, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__FuncArgTypes_50, &check_hlds__typecheck__FuncTypeParams_51);
                    }
#line 2876 "typecheck.m"
                    {
#line 2876 "typecheck.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0(check_hlds__typecheck__TypeCtorInfo_53_71, check_hlds__typecheck__FuncTypeParams_51, &check_hlds__typecheck__FuncArgTypeParams_52, &check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
                    }
#line 2876 "typecheck.m"
                    check_hlds__typecheck__FuncReturnTypeParam_53 = ((MR_Word) check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
#line 2881 "typecheck.m"
                    if ((check_hlds__typecheck__FuncArgTypeParams_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2880 "typecheck.m"
                      check_hlds__typecheck__FuncType_54 = check_hlds__typecheck__FuncReturnTypeParam_53;
#line 2881 "typecheck.m"
                    else
#line 2882 "typecheck.m"
                      {
#line 2883 "typecheck.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2883 "typecheck.m"
                        {
#line 2883 "typecheck.m"
                          parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__FuncArgTypeParams_52, check_hlds__typecheck__FuncReturnTypeParam_53, &check_hlds__typecheck__FuncType_54);
                        }
#line 2882 "typecheck.m"
                      }
#line 2886 "typecheck.m"
                    {
#line 2886 "typecheck.m"
                      hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_5, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_64);
                    }
#line 2890 "typecheck.m"
                    {
#line 2890 "typecheck.m"
                      check_hlds__typecheck__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2890 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2890 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_62_62, 1) = ((MR_Box) (check_hlds__typecheck__PredId_16));
#line 2890 "typecheck.m"
                    }
#line 2888 "typecheck.m"
                    {
#line 2888 "typecheck.m"
                      check_hlds__typecheck__ConsInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2888 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
#line 2888 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
#line 2888 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 2) = ((MR_Box) (check_hlds__typecheck__FuncType_54));
#line 2888 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 3) = ((MR_Box) (check_hlds__typecheck__FuncArgTypes_50));
#line 2888 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_64));
#line 2888 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 5) = ((MR_Box) (check_hlds__typecheck__V_62_62));
#line 2888 "typecheck.m"
                    }
#line 2891 "typecheck.m"
                    {
#line 2891 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2891 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_65));
#line 2891 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
#line 2891 "typecheck.m"
                    }
#line 2875 "typecheck.m"
                  }
#line 2892 "typecheck.m"
                else
#line 2892 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
#line 2892 "typecheck.m"
              }
#line 2830 "typecheck.m"
            /* direct tailcall eliminated */
#line 2830 "typecheck.m"
            {
#line 2830 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__2__tmp_copy_2 = check_hlds__typecheck__PredIds_17;
#line 2830 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;

#line 2830 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0__tmp_copy_6;
#line 2830 "typecheck.m"
              check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__HeadVar__2__tmp_copy_2;
#line 2830 "typecheck.m"
            }
#line 2830 "typecheck.m"
            continue;
#line 2827 "typecheck.m"
          }
#line 2825 "typecheck.m"
      }
#line 2825 "typecheck.m"
      break;
#line 2825 "typecheck.m"
    }
#line 2821 "typecheck.m"
}

#line 2802 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
#line 2802 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2802 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_7,
#line 2802 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_8,
#line 2802 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 2802 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10)
#line 2802 "typecheck.m"
{
#line 2805 "typecheck.m"
  {
#line 2805 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2805 "typecheck.m"
    MR_Word check_hlds__typecheck__SymName_11;
#line 2805 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_14;
#line 2805 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFullyQualified_15;
#line 2805 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIds_16;
#line 2806 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_12_12;
#line 2806 "typecheck.m"
    MR_Word check_hlds__typecheck__V_13_13;

#line 2806 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2806 "typecheck.m"
      {
#line 2806 "typecheck.m"
        check_hlds__typecheck__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 1)));
#line 2806 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 2)));
#line 2806 "typecheck.m"
        check_hlds__typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 3)));
#line 2807 "typecheck.m"
        {
#line 2807 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_preds_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredicateTable_14);
        }
#line 2808 "typecheck.m"
        {
#line 2808 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__IsFullyQualified_15);
        }
#line 2809 "typecheck.m"
        {
#line 2809 "typecheck.m"
          hlds__pred_table__predicate_table_lookup_sym_4_p_0(check_hlds__typecheck__PredicateTable_14, check_hlds__typecheck__IsFullyQualified_15, check_hlds__typecheck__SymName_11, &check_hlds__typecheck__PredIds_16);
        }
#line 2816 "typecheck.m"
        if ((check_hlds__typecheck__PredIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2818 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfos_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2816 "typecheck.m"
        else
#line 2812 "typecheck.m"
          {
#line 2812 "typecheck.m"
            MR_Word check_hlds__typecheck__Preds_19;

#line 2813 "typecheck.m"
            {
#line 2813 "typecheck.m"
              hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_14, &check_hlds__typecheck__Preds_19);
            }
#line 2814 "typecheck.m"
            {
#line 2814 "typecheck.m"
              check_hlds__typecheck__make_pred_cons_info_list_7_p_0(check_hlds__typecheck__Info_6, check_hlds__typecheck__PredIds_16, check_hlds__typecheck__Preds_19, check_hlds__typecheck__Arity_8, check_hlds__typecheck__GoalId_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__ConsTypeInfos_10);
            }
#line 2812 "typecheck.m"
          }
#line 2816 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2806 "typecheck.m"
      }
#line 2805 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2805 "typecheck.m"
  }
#line 2802 "typecheck.m"
}

#line 2718 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
#line 2718 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2718 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 2718 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2718 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4)
#line 2718 "typecheck.m"
{
#line 2721 "typecheck.m"
  {
#line 2721 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 2721 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2721 "typecheck.m"
      {
#line 2721 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2721 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2721 "typecheck.m"
      }
#line 2721 "typecheck.m"
    else
#line 2722 "typecheck.m"
      {
#line 2722 "typecheck.m"
        MR_Word check_hlds__typecheck__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2722 "typecheck.m"
        MR_Word check_hlds__typecheck__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2722 "typecheck.m"
        MR_Word check_hlds__typecheck__Type_10;
#line 2722 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_11;
#line 2722 "typecheck.m"
        MR_Word check_hlds__typecheck__VarTypes0_13;
#line 2722 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23;
#line 2728 "typecheck.m"
        MR_Word check_hlds__typecheck__VarType_14;

#line 2724 "typecheck.m"
        {
#line 2724 "typecheck.m"
          check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__VarTypes0_13);
        }
#line 2725 "typecheck.m"
        {
#line 2725 "typecheck.m"
          check_hlds__typecheck__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_13, check_hlds__typecheck__Var_8, &check_hlds__typecheck__VarType_14);
        }
#line 2728 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2727 "typecheck.m"
          {
#line 2727 "typecheck.m"
            check_hlds__typecheck__Type_10 = check_hlds__typecheck__VarType_14;
#line 2727 "typecheck.m"
            check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2727 "typecheck.m"
          }
#line 2728 "typecheck.m"
        else
#line 2731 "typecheck.m"
          {
#line 2731 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet0_15;
#line 2731 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVar_16;
#line 2731 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet_17;
#line 2731 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes1_18;
#line 2731 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21;

#line 2731 "typecheck.m"
            {
#line 2731 "typecheck.m"
              check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__TypeVarSet0_15);
            }
#line 2732 "typecheck.m"
            {
#line 2732 "typecheck.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
            }
#line 2733 "typecheck.m"
            {
#line 2733 "typecheck.m"
              check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21);
            }
#line 2734 "typecheck.m"
            {
#line 2734 "typecheck.m"
              check_hlds__typecheck__Type_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2734 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
#line 2734 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2734 "typecheck.m"
            }
#line 2735 "typecheck.m"
            {
#line 2735 "typecheck.m"
              parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__Var_8, check_hlds__typecheck__Type_10, check_hlds__typecheck__VarTypes0_13, &check_hlds__typecheck__VarTypes1_18);
            }
#line 2736 "typecheck.m"
            {
#line 2736 "typecheck.m"
              check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes1_18, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23);
            }
#line 2731 "typecheck.m"
          }
#line 2739 "typecheck.m"
        {
#line 2739 "typecheck.m"
          check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(check_hlds__typecheck__Vars_9, &check_hlds__typecheck__Types_11, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);
        }
#line 2722 "typecheck.m"
        {
#line 2722 "typecheck.m"
          MR_Word base;
#line 2722 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2722 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 2722 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Type_10));
#line 2722 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Types_11));
#line 2722 "typecheck.m"
        }
#line 2722 "typecheck.m"
      }
#line 2721 "typecheck.m"
  }
#line 2718 "typecheck.m"
}

#line 2703 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_2,
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__PredOrFunc_3,
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVars_6,
#line 2703 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2703 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8)
#line 2703 "typecheck.m"
{
#line 2707 "typecheck.m"
  while (MR_TRUE)
#line 2707 "typecheck.m"
    {
#line 2707 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2707 "typecheck.m"
      {
#line 2707 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2707 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2707 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 2707 "typecheck.m"
        else
#line 2709 "typecheck.m"
          {
#line 2709 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2709 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssignSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2709 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVarTypes_25;
#line 2709 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_26;
#line 2709 "typecheck.m"
            MR_Word check_hlds__typecheck__LambdaType_27;
#line 2709 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;
#line 2709 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_38;
#line 2709 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeOldVarType_39;
#line 2709 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_40;

#line 2710 "typecheck.m"
            {
#line 2710 "typecheck.m"
              check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(check_hlds__typecheck__ArgVars_6, &check_hlds__typecheck__ArgVarTypes_25, check_hlds__typecheck__TypeAssign0_17, &check_hlds__typecheck__TypeAssign1_26);
            }
#line 2712 "typecheck.m"
            {
#line 2712 "typecheck.m"
              parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_2, check_hlds__typecheck__PredOrFunc_3, check_hlds__typecheck__ArgVarTypes_25, &check_hlds__typecheck__LambdaType_27);
            }
#line 2136 "typecheck.m"
            {
#line 2136 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__VarTypes0_38);
            }
#line 2137 "typecheck.m"
            {
#line 2137 "typecheck.m"
              parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_5, check_hlds__typecheck__LambdaType_27, &check_hlds__typecheck__MaybeOldVarType_39, check_hlds__typecheck__VarTypes0_38, &check_hlds__typecheck__VarTypes_40);
            }
#line 2145 "typecheck.m"
            if ((check_hlds__typecheck__MaybeOldVarType_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2146 "typecheck.m"
              {
#line 2146 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_43;

#line 2147 "typecheck.m"
                {
#line 2147 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_40, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign_43);
                }
#line 2148 "typecheck.m"
                {
#line 2148 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2148 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_43));
#line 2148 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
#line 2148 "typecheck.m"
                }
#line 2146 "typecheck.m"
              }
#line 2145 "typecheck.m"
            else
#line 2139 "typecheck.m"
              {
#line 2139 "typecheck.m"
                MR_Word check_hlds__typecheck__OldVarType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_39, (MR_Integer) 0)));
#line 2142 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_42;
#line 2749 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_51;
#line 2749 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_52;
#line 2749 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_53;

#line 2750 "typecheck.m"
                {
#line 2750 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__HeadTypeParams_51);
                }
#line 2751 "typecheck.m"
                {
#line 2751 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeBindings0_52);
                }
#line 2752 "typecheck.m"
                {
#line 2752 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_41, check_hlds__typecheck__LambdaType_27, check_hlds__typecheck__HeadTypeParams_51, check_hlds__typecheck__TypeBindings0_52, &check_hlds__typecheck__TypeBindings_53);
                }
#line 2749 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2749 "typecheck.m"
                  {
#line 2753 "typecheck.m"
                    {
#line 2753 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_53, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign1_42);
                    }
#line 2753 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2749 "typecheck.m"
                  }
#line 2142 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2141 "typecheck.m"
                  {
#line 2141 "typecheck.m"
                    check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2141 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_42));
#line 2141 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
#line 2141 "typecheck.m"
                  }
#line 2142 "typecheck.m"
                else
#line 2143 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 2139 "typecheck.m"
              }
#line 2715 "typecheck.m"
            /* direct tailcall eliminated */
#line 2715 "typecheck.m"
            {
#line 2715 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssignSet0_18;
#line 2715 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;

#line 2715 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7;
#line 2715 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2715 "typecheck.m"
            }
#line 2715 "typecheck.m"
            continue;
#line 2709 "typecheck.m"
          }
#line 2707 "typecheck.m"
      }
#line 2707 "typecheck.m"
      break;
#line 2707 "typecheck.m"
    }
#line 2703 "typecheck.m"
}

#line 2663 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_3_p_0(
#line 2663 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2663 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_4,
#line 2663 "typecheck.m"
  MR_Word check_hlds__typecheck__Var0_5,
#line 2663 "typecheck.m"
  MR_Word * check_hlds__typecheck__Var_6)
#line 2663 "typecheck.m"
{
#line 2669 "typecheck.m"
  {
#line 2669 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2669 "typecheck.m"
    MR_Word check_hlds__typecheck__Var1_7;
#line 2667 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_10_10;
#line 2667 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_Var1_7;

#line 8211 "check_hlds.typecheck.c"
    {
#line 8213 "check_hlds.typecheck.c"
      check_hlds__typecheck__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8215 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 8217 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_10_10, 1) = ((MR_Box) (check_hlds__typecheck__TypeInfo_for_T_8));
#line 8219 "check_hlds.typecheck.c"
    }
#line 2667 "typecheck.m"
    {
#line 2667 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(check_hlds__typecheck__TypeInfo_for_T_8, check_hlds__typecheck__TypeInfo_10_10, check_hlds__typecheck__TypeInfo_10_10, (MR_Word) check_hlds__typecheck__RenameSubst_4, check_hlds__typecheck__Var0_5, &check_hlds__typecheck__conv0_Var1_7);
    }
#line 2667 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2667 "typecheck.m"
      {
#line 2667 "typecheck.m"
        check_hlds__typecheck__Var1_7 = ((MR_Word) check_hlds__typecheck__conv0_Var1_7);
#line 2667 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2667 "typecheck.m"
      }
#line 2669 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2668 "typecheck.m"
      *check_hlds__typecheck__Var_6 = check_hlds__typecheck__Var1_7;
#line 2669 "typecheck.m"
    else
#line 2670 "typecheck.m"
      *check_hlds__typecheck__Var_6 = check_hlds__typecheck__Var0_5;
#line 2669 "typecheck.m"
  }
#line 2663 "typecheck.m"
}

#line 2661 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0_1(
#line 2661 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2661 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2661 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2661 "typecheck.m"
{
#line 2661 "typecheck.m"
  {
#line 2661 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2661 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_Var_6;

#line 2661 "typecheck.m"
    {
#line 2661 "typecheck.m"
      check_hlds__typecheck__apply_var_renaming_to_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv0_Var_6);
    }
#line 2661 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_Var_6));
#line 2661 "typecheck.m"
  }
#line 2661 "typecheck.m"
}

#line 2657 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0(
#line 2657 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2657 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars0_4,
#line 2657 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_5,
#line 2657 "typecheck.m"
  MR_Word * check_hlds__typecheck__Vars_6)
#line 2657 "typecheck.m"
{
#line 2660 "typecheck.m"
  {
#line 2660 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2660 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_12_12;
#line 2660 "typecheck.m"
    MR_Word check_hlds__typecheck__V_7_7;

#line 2661 "typecheck.m"
    {
#line 2661 "typecheck.m"
      check_hlds__typecheck__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2661 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[0]));
#line 2661 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0_1));
#line 2661 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2661 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 3) = ((MR_Box) (check_hlds__typecheck__TypeInfo_for_T_8));
#line 2661 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 4) = ((MR_Box) (check_hlds__typecheck__RenameSubst_5));
#line 2661 "typecheck.m"
    }
#line 8317 "check_hlds.typecheck.c"
    {
#line 8319 "check_hlds.typecheck.c"
      check_hlds__typecheck__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8321 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 8323 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_12_12, 1) = ((MR_Box) (check_hlds__typecheck__TypeInfo_for_T_8));
#line 8325 "check_hlds.typecheck.c"
    }
#line 2661 "typecheck.m"
    {
#line 2661 "typecheck.m"
      mercury__list__map_3_p_0(check_hlds__typecheck__TypeInfo_12_12, check_hlds__typecheck__TypeInfo_12_12, (MR_Word) check_hlds__typecheck__V_7_7, (MR_Word) check_hlds__typecheck__Vars0_4, check_hlds__typecheck__Vars_6);
#line 2661 "typecheck.m"
      return;
    }
#line 2660 "typecheck.m"
  }
#line 2657 "typecheck.m"
}

#line 2567 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
#line 2567 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsType_6,
#line 2567 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_7,
#line 2567 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_8,
#line 2567 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
#line 2567 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16)
#line 2567 "typecheck.m"
{
#line 2572 "typecheck.m"
  {
#line 2572 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2572 "typecheck.m"
    MR_Word check_hlds__typecheck__VarTypes0_10;
#line 2572 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeTypeY_11;
#line 2572 "typecheck.m"
    MR_Word check_hlds__typecheck__VarTypes_12;

#line 2574 "typecheck.m"
    {
#line 2574 "typecheck.m"
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__VarTypes0_10);
    }
#line 2575 "typecheck.m"
    {
#line 2575 "typecheck.m"
      parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_7, check_hlds__typecheck__ConsType_6, &check_hlds__typecheck__MaybeTypeY_11, check_hlds__typecheck__VarTypes0_10, &check_hlds__typecheck__VarTypes_12);
    }
#line 2585 "typecheck.m"
    if ((check_hlds__typecheck__MaybeTypeY_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2586 "typecheck.m"
      {
#line 2586 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_19;

#line 2589 "typecheck.m"
        {
#line 2589 "typecheck.m"
          check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_12, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_19);
        }
#line 2590 "typecheck.m"
        {
#line 2590 "typecheck.m"
          MR_Word base;
#line 2590 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2590 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
#line 2590 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_19));
#line 2590 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
#line 2590 "typecheck.m"
        }
#line 2586 "typecheck.m"
      }
#line 2585 "typecheck.m"
    else
#line 2577 "typecheck.m"
      {
#line 2577 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeY_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_11, (MR_Integer) 0)));
#line 2582 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_14;
#line 2749 "typecheck.m"
        MR_Word check_hlds__typecheck__HeadTypeParams_24;
#line 2749 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeBindings0_25;
#line 2749 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeBindings_26;

#line 2750 "typecheck.m"
        {
#line 2750 "typecheck.m"
          check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__HeadTypeParams_24);
        }
#line 2751 "typecheck.m"
        {
#line 2751 "typecheck.m"
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeBindings0_25);
        }
#line 2752 "typecheck.m"
        {
#line 2752 "typecheck.m"
          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__ConsType_6, check_hlds__typecheck__TypeY_13, check_hlds__typecheck__HeadTypeParams_24, check_hlds__typecheck__TypeBindings0_25, &check_hlds__typecheck__TypeBindings_26);
        }
#line 2749 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2749 "typecheck.m"
          {
#line 2753 "typecheck.m"
            {
#line 2753 "typecheck.m"
              check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_26, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_14);
            }
#line 2753 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2749 "typecheck.m"
          }
#line 2582 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2581 "typecheck.m"
          {
#line 2581 "typecheck.m"
            MR_Word base;
#line 2581 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2581 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
#line 2581 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_14));
#line 2581 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
#line 2581 "typecheck.m"
          }
#line 2582 "typecheck.m"
        else
#line 2582 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15;
#line 2577 "typecheck.m"
      }
#line 2572 "typecheck.m"
  }
#line 2567 "typecheck.m"
}

#line 2469 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(
#line 2469 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2469 "typecheck.m"
  MR_Word check_hlds__typecheck__X_2,
#line 2469 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_3,
#line 2469 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2469 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2469 "typecheck.m"
{
#line 2473 "typecheck.m"
  while (MR_TRUE)
#line 2473 "typecheck.m"
    {
#line 2473 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2473 "typecheck.m"
      {
#line 2473 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2473 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2473 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2473 "typecheck.m"
        else
#line 2475 "typecheck.m"
          {
#line 2475 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2475 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2475 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
#line 2475 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_26;
#line 2509 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeX_27;

#line 2493 "typecheck.m"
            {
#line 2493 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__VarTypes0_26);
            }
#line 2494 "typecheck.m"
            {
#line 2494 "typecheck.m"
              check_hlds__typecheck__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__X_2, &check_hlds__typecheck__TypeX_27);
            }
#line 2509 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2495 "typecheck.m"
              {
#line 2495 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeTypeY_28;
#line 2495 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_29;

#line 2495 "typecheck.m"
                {
#line 2495 "typecheck.m"
                  parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__TypeX_27, &check_hlds__typecheck__MaybeTypeY_28, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_29);
                }
#line 2504 "typecheck.m"
                if ((check_hlds__typecheck__MaybeTypeY_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2505 "typecheck.m"
                  {
#line 2505 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_32;

#line 2506 "typecheck.m"
                    {
#line 2506 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_29, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_32);
                    }
#line 2507 "typecheck.m"
                    {
#line 2507 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2507 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_32));
#line 2507 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2507 "typecheck.m"
                    }
#line 2505 "typecheck.m"
                  }
#line 2504 "typecheck.m"
                else
#line 2497 "typecheck.m"
                  {
#line 2497 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeY_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_28, (MR_Integer) 0)));
#line 2501 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign3_31;
#line 2749 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_58;
#line 2749 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_59;
#line 2749 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_60;

#line 2750 "typecheck.m"
                    {
#line 2750 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__HeadTypeParams_58);
                    }
#line 2751 "typecheck.m"
                    {
#line 2751 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeBindings0_59);
                    }
#line 2752 "typecheck.m"
                    {
#line 2752 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__TypeX_27, check_hlds__typecheck__TypeY_30, check_hlds__typecheck__HeadTypeParams_58, check_hlds__typecheck__TypeBindings0_59, &check_hlds__typecheck__TypeBindings_60);
                    }
#line 2749 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2749 "typecheck.m"
                      {
#line 2753 "typecheck.m"
                        {
#line 2753 "typecheck.m"
                          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_60, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign3_31);
                        }
#line 2753 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2749 "typecheck.m"
                      }
#line 2501 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2500 "typecheck.m"
                      {
#line 2500 "typecheck.m"
                        check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2500 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign3_31));
#line 2500 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2500 "typecheck.m"
                      }
#line 2501 "typecheck.m"
                    else
#line 2502 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2497 "typecheck.m"
                  }
#line 2495 "typecheck.m"
              }
#line 2509 "typecheck.m"
            else
#line 2515 "typecheck.m"
              {
#line 2515 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeY_50;

#line 2510 "typecheck.m"
                {
#line 2510 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__Y_3, &check_hlds__typecheck__TypeY_50);
                }
#line 2515 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2512 "typecheck.m"
                  {
#line 2512 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_45;
#line 2512 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_46;

#line 2512 "typecheck.m"
                    {
#line 2512 "typecheck.m"
                      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__TypeY_50, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_45);
                    }
#line 2513 "typecheck.m"
                    {
#line 2513 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_45, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_46);
                    }
#line 2514 "typecheck.m"
                    {
#line 2514 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2514 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_46));
#line 2514 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2514 "typecheck.m"
                    }
#line 2512 "typecheck.m"
                  }
#line 2515 "typecheck.m"
                else
#line 2518 "typecheck.m"
                  {
#line 2518 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVarSet0_33;
#line 2518 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVar_34;
#line 2518 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVarSet_35;
#line 2518 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_36;
#line 2518 "typecheck.m"
                    MR_Word check_hlds__typecheck__Type_37;
#line 2518 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes1_38;
#line 2518 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_47;
#line 2518 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_48;

#line 2518 "typecheck.m"
                    {
#line 2518 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeVarSet0_33);
                    }
#line 2519 "typecheck.m"
                    {
#line 2519 "typecheck.m"
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_34, check_hlds__typecheck__TypeVarSet0_33, &check_hlds__typecheck__TypeVarSet_35);
                    }
#line 2520 "typecheck.m"
                    {
#line 2520 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_35, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign1_36);
                    }
#line 2521 "typecheck.m"
                    {
#line 2521 "typecheck.m"
                      check_hlds__typecheck__Type_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2521 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_34));
#line 2521 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2521 "typecheck.m"
                    }
#line 2522 "typecheck.m"
                    {
#line 2522 "typecheck.m"
                      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes1_38);
                    }
#line 2523 "typecheck.m"
                    {
#line 2523 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], ((MR_Box) (check_hlds__typecheck__X_2)), ((MR_Box) (check_hlds__typecheck__Y_3)));
                    }
#line 2523 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 2525 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2524 "typecheck.m"
                      {
#line 2524 "typecheck.m"
                        parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes1_38, &check_hlds__typecheck__VarTypes_47);
                      }
#line 2525 "typecheck.m"
                    else
#line 2526 "typecheck.m"
                      check_hlds__typecheck__VarTypes_47 = check_hlds__typecheck__VarTypes1_38;
#line 2528 "typecheck.m"
                    {
#line 2528 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_47, check_hlds__typecheck__TypeAssign1_36, &check_hlds__typecheck__TypeAssign_48);
                    }
#line 2529 "typecheck.m"
                    {
#line 2529 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2529 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_48));
#line 2529 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2529 "typecheck.m"
                    }
#line 2518 "typecheck.m"
                  }
#line 2515 "typecheck.m"
              }
#line 2477 "typecheck.m"
            /* direct tailcall eliminated */
#line 2477 "typecheck.m"
            {
#line 2477 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_12;
#line 2477 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

#line 2477 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2477 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2477 "typecheck.m"
            }
#line 2477 "typecheck.m"
            continue;
#line 2475 "typecheck.m"
          }
#line 2473 "typecheck.m"
      }
#line 2473 "typecheck.m"
      break;
#line 2473 "typecheck.m"
    }
#line 2469 "typecheck.m"
}

#line 2438 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_functor_type_4_p_0(
#line 2438 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2438 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2438 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
#line 2438 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4)
#line 2438 "typecheck.m"
{
#line 2441 "typecheck.m"
  while (MR_TRUE)
#line 2441 "typecheck.m"
    {
#line 2441 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2441 "typecheck.m"
      {
#line 2441 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2441 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2441 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
#line 2441 "typecheck.m"
        else
#line 2443 "typecheck.m"
          {
#line 2443 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_9;
#line 2443 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType_10;
#line 2443 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssigns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2443 "typecheck.m"
            MR_Word check_hlds__typecheck__Type_14;
#line 2443 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_15;
#line 2443 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2443 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19;
#line 2443 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_28;
#line 2443 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeTypeY_29;
#line 2443 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_30;

#line 2442 "typecheck.m"
            check_hlds__typecheck__TypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, (MR_Integer) 0)));
#line 2442 "typecheck.m"
            check_hlds__typecheck__ConsType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, (MR_Integer) 1)));
#line 2444 "typecheck.m"
            check_hlds__typecheck__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsType_10, (MR_Integer) 0)));
#line 2444 "typecheck.m"
            check_hlds__typecheck__ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsType_10, (MR_Integer) 1)));
#line 2542 "typecheck.m"
            {
#line 2542 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__VarTypes0_28);
            }
#line 2543 "typecheck.m"
            {
#line 2543 "typecheck.m"
              parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_14, &check_hlds__typecheck__MaybeTypeY_29, check_hlds__typecheck__VarTypes0_28, &check_hlds__typecheck__VarTypes_30);
            }
#line 2556 "typecheck.m"
            if ((check_hlds__typecheck__MaybeTypeY_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2557 "typecheck.m"
              {
#line 2557 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_37;
#line 2557 "typecheck.m"
                MR_Word check_hlds__typecheck__EmptyConstraints_38;
#line 2557 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssign_39;

#line 2560 "typecheck.m"
                {
#line 2560 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_30, check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeAssign_37);
                }
#line 2561 "typecheck.m"
                {
#line 2561 "typecheck.m"
                  hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_38);
                }
#line 2562 "typecheck.m"
                {
#line 2562 "typecheck.m"
                  check_hlds__typecheck__ArgsTypeAssign_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2562 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_37));
#line 2562 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_15));
#line 2562 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_38));
#line 2562 "typecheck.m"
                }
#line 2564 "typecheck.m"
                {
#line 2564 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2564 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_39));
#line 2564 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
#line 2564 "typecheck.m"
                }
#line 2557 "typecheck.m"
              }
#line 2556 "typecheck.m"
            else
#line 2545 "typecheck.m"
              {
#line 2545 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeY_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_29, (MR_Integer) 0)));
#line 2553 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_32;
#line 2749 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_44;
#line 2749 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_45;
#line 2749 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_46;

#line 2750 "typecheck.m"
                {
#line 2750 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__HeadTypeParams_44);
                }
#line 2751 "typecheck.m"
                {
#line 2751 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeBindings0_45);
                }
#line 2752 "typecheck.m"
                {
#line 2752 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__Type_14, check_hlds__typecheck__TypeY_31, check_hlds__typecheck__HeadTypeParams_44, check_hlds__typecheck__TypeBindings0_45, &check_hlds__typecheck__TypeBindings_46);
                }
#line 2749 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2749 "typecheck.m"
                  {
#line 2753 "typecheck.m"
                    {
#line 2753 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_46, check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeAssign_32);
                    }
#line 2753 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2749 "typecheck.m"
                  }
#line 2553 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2549 "typecheck.m"
                  {
#line 2549 "typecheck.m"
                    MR_Word check_hlds__typecheck__EmptyConstraints_33;
#line 2549 "typecheck.m"
                    MR_Word check_hlds__typecheck__ArgsTypeAssign_34;

#line 2549 "typecheck.m"
                    {
#line 2549 "typecheck.m"
                      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_33);
                    }
#line 2550 "typecheck.m"
                    {
#line 2550 "typecheck.m"
                      check_hlds__typecheck__ArgsTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2550 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_32));
#line 2550 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_15));
#line 2550 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_33));
#line 2550 "typecheck.m"
                    }
#line 2552 "typecheck.m"
                    {
#line 2552 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2552 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_34));
#line 2552 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
#line 2552 "typecheck.m"
                    }
#line 2549 "typecheck.m"
                  }
#line 2553 "typecheck.m"
                else
#line 2553 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
#line 2545 "typecheck.m"
              }
#line 2447 "typecheck.m"
            /* direct tailcall eliminated */
#line 2447 "typecheck.m"
            {
#line 2447 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsTypeAssigns_11;
#line 2447 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19;

#line 2447 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_3;
#line 2447 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2447 "typecheck.m"
            }
#line 2447 "typecheck.m"
            continue;
#line 2443 "typecheck.m"
          }
#line 2441 "typecheck.m"
      }
#line 2441 "typecheck.m"
      break;
#line 2441 "typecheck.m"
    }
#line 2438 "typecheck.m"
}

#line 2321 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2(
#line 2321 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2321 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 2321 "typecheck.m"
{
#line 2321 "typecheck.m"
  {
#line 2321 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 2321 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2321 "typecheck.m"
    MR_Word check_hlds__typecheck__conv2_HeadVar__2_2;

#line 2321 "typecheck.m"
    {
#line 2321 "typecheck.m"
      check_hlds__typecheck__conv2_HeadVar__2_2 = check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 2321 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv2_HeadVar__2_2));
#line 2321 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 2321 "typecheck.m"
  }
#line 2321 "typecheck.m"
}

#line 2277 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
#line 2277 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2277 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2277 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2277 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2277 "typecheck.m"
{
#line 2277 "typecheck.m"
  {
#line 2277 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2277 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16;

#line 2277 "typecheck.m"
    {
#line 2277 "typecheck.m"
      check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16);
    }
#line 2277 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16));
#line 2277 "typecheck.m"
  }
#line 2277 "typecheck.m"
}

#line 2267 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_13,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_14,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_15,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_16,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_17,
#line 2267 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_18,
#line 2267 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_54,
#line 2267 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_55)
#line 2267 "typecheck.m"
{
#line 2273 "typecheck.m"
  {
#line 2273 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2273 "typecheck.m"
    MR_Word check_hlds__typecheck__ClauseContext_20;
#line 2303 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsType_21;
#line 2303 "typecheck.m"
    MR_String check_hlds__typecheck__BuiltinTypeName_22;

#line 2274 "typecheck.m"
    {
#line 2274 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__ClauseContext_20);
    }
#line 2275 "typecheck.m"
    {
#line 2275 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(check_hlds__typecheck__ConsId_14, &check_hlds__typecheck__ConsType_21, &check_hlds__typecheck__BuiltinTypeName_22);
    }
#line 2303 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2278 "typecheck.m"
      {
#line 2278 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet1_23;
#line 2278 "typecheck.m"
        MR_Word check_hlds__typecheck__V_56_56;
#line 2276 "typecheck.m"
        MR_Box check_hlds__typecheck__conv1_TypeAssignSet1_23;

#line 2277 "typecheck.m"
        {
#line 2277 "typecheck.m"
          check_hlds__typecheck__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2277 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[1]));
#line 2277 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1));
#line 2277 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2277 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 3) = ((MR_Box) (check_hlds__typecheck__ConsType_21));
#line 2277 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 4) = ((MR_Box) (check_hlds__typecheck__Var_13));
#line 2277 "typecheck.m"
        }
#line 2276 "typecheck.m"
        {
#line 2276 "typecheck.m"
          mercury__list__foldl_4_p_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[3], check_hlds__typecheck__V_56_56, check_hlds__typecheck__TypeAssignSet0_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typecheck__conv1_TypeAssignSet1_23);
        }
#line 2276 "typecheck.m"
        check_hlds__typecheck__TypeAssignSet1_23 = ((MR_Word) check_hlds__typecheck__conv1_TypeAssignSet1_23);
#line 2282 "typecheck.m"
        if ((check_hlds__typecheck__TypeAssignSet1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2283 "typecheck.m"
          {
#line 2286 "typecheck.m"
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2291 "typecheck.m"
            if ((check_hlds__typecheck__TypeAssignSet0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2288 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
#line 2291 "typecheck.m"
            else
#line 2292 "typecheck.m"
              {
#line 2292 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeVarSet_28;
#line 2292 "typecheck.m"
                MR_Word check_hlds__typecheck__EmptyConstraints_29;
#line 2292 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsDefn_30;
#line 2292 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsIdSpec_31;
#line 2292 "typecheck.m"
                MR_Word check_hlds__typecheck__V_60_60;
#line 2292 "typecheck.m"
                MR_Word check_hlds__typecheck__V_61_61;

#line 2293 "typecheck.m"
                {
#line 2293 "typecheck.m"
                  mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_28);
                }
#line 2294 "typecheck.m"
                {
#line 2294 "typecheck.m"
                  hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_29);
                }
#line 2296 "typecheck.m"
                {
#line 2296 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2296 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinTypeName_22));
#line 2296 "typecheck.m"
                }
#line 2295 "typecheck.m"
                {
#line 2295 "typecheck.m"
                  check_hlds__typecheck__ConsDefn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2295 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_28));
#line 2295 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2295 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_21));
#line 2295 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2295 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_29));
#line 2295 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 5) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 2295 "typecheck.m"
                }
#line 2298 "typecheck.m"
                {
#line 2298 "typecheck.m"
                  check_hlds__typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2298 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck__ConsDefn_30));
#line 2298 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2298 "typecheck.m"
                }
#line 2297 "typecheck.m"
                {
#line 2297 "typecheck.m"
                  check_hlds__typecheck__ConsIdSpec_31 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__V_61_61, check_hlds__typecheck__ConsId_14, (MR_Integer) 0, check_hlds__typecheck__TypeAssignSet0_17);
                }
#line 2300 "typecheck.m"
                {
#line 2300 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_31, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__STATE_VARIABLE_Info_55);
#line 2300 "typecheck.m"
                  return;
                }
#line 2292 "typecheck.m"
              }
#line 2283 "typecheck.m"
          }
#line 2282 "typecheck.m"
        else
#line 2280 "typecheck.m"
          {
#line 2281 "typecheck.m"
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_23;
#line 2280 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
#line 2280 "typecheck.m"
          }
#line 2278 "typecheck.m"
      }
#line 2303 "typecheck.m"
    else
#line 2306 "typecheck.m"
      {
#line 2306 "typecheck.m"
        MR_Integer check_hlds__typecheck__Arity_32;
#line 2306 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsDefns_33;
#line 2306 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsErrors_34;

#line 2306 "typecheck.m"
        {
#line 2306 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_15, &check_hlds__typecheck__Arity_32);
        }
#line 2307 "typecheck.m"
        {
#line 2307 "typecheck.m"
          check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__GoalId_16, &check_hlds__typecheck__ConsDefns_33, &check_hlds__typecheck__ConsErrors_34);
        }
#line 2316 "typecheck.m"
        if ((check_hlds__typecheck__ConsDefns_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2310 "typecheck.m"
          {
#line 2310 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalContext_35;
#line 2310 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_36;

#line 2311 "typecheck.m"
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2312 "typecheck.m"
            {
#line 2312 "typecheck.m"
              check_hlds__typecheck__GoalContext_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2312 "typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalContext_35, 0) = ((MR_Box) (check_hlds__typecheck__UnifyContext_11));
#line 2312 "typecheck.m"
            }
#line 2313 "typecheck.m"
            {
#line 2313 "typecheck.m"
              check_hlds__typecheck__Spec_36 = check_hlds__typecheck_errors__report_error_undef_cons_6_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__GoalContext_35, check_hlds__typecheck__Context_12, check_hlds__typecheck__ConsErrors_34, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32);
            }
#line 2315 "typecheck.m"
            {
#line 2315 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_36, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__STATE_VARIABLE_Info_55);
#line 2315 "typecheck.m"
              return;
            }
#line 2310 "typecheck.m"
          }
#line 2316 "typecheck.m"
        else
#line 2316 "typecheck.m"
          {
#line 2316 "typecheck.m"
            MR_Word check_hlds__typecheck__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_33, (MR_Integer) 1)));
#line 2318 "typecheck.m"
            MR_Word check_hlds__typecheck__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_33, (MR_Integer) 0)));

#line 2316 "typecheck.m"
            if ((check_hlds__typecheck__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2324 "typecheck.m"
              {
#line 2324 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeAssignSet_43;
#line 2324 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_46;
#line 2324 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
#line 2324 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet1_80;
#line 2332 "typecheck.m"
                MR_Word check_hlds__typecheck__V_44_44;
#line 2332 "typecheck.m"
                MR_Word check_hlds__typecheck__V_45_45;
#line 2347 "typecheck.m"
                MR_Word check_hlds__typecheck__V_47_47;
#line 2347 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;

#line 2328 "typecheck.m"
                {
#line 2328 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__TypeAssignSet0_17, check_hlds__typecheck__ConsDefns_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsTypeAssignSet_43);
                }
#line 2331 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2331 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2331 "typecheck.m"
                  {
#line 2332 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_17)) == (MR_mktag((MR_Integer) 1)));
#line 2332 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2332 "typecheck.m"
                      {
#line 2332 "typecheck.m"
                        check_hlds__typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 0)));
#line 2332 "typecheck.m"
                        check_hlds__typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 1)));
#line 2332 "typecheck.m"
                      }
#line 2331 "typecheck.m"
                  }
#line 2337 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2336 "typecheck.m"
                  {
#line 2336 "typecheck.m"
                    {
#line 2336 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
#line 2336 "typecheck.m"
                      return;
                    }
#line 2336 "typecheck.m"
                  }
#line 2337 "typecheck.m"
                else
#line 2338 "typecheck.m"
                  {
#line 2338 "typecheck.m"
                  }
#line 2343 "typecheck.m"
                {
#line 2343 "typecheck.m"
                  check_hlds__typecheck__typecheck_functor_type_4_p_0(check_hlds__typecheck__ConsTypeAssignSet_43, check_hlds__typecheck__Var_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_46);
                }
#line 2346 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2346 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2346 "typecheck.m"
                  {
#line 2347 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_43)) == (MR_mktag((MR_Integer) 1)));
#line 2347 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2347 "typecheck.m"
                      {
#line 2347 "typecheck.m"
                        check_hlds__typecheck__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_43, (MR_Integer) 0)));
#line 2347 "typecheck.m"
                        check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_43, (MR_Integer) 1)));
#line 2347 "typecheck.m"
                      }
#line 2346 "typecheck.m"
                  }
#line 2353 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2351 "typecheck.m"
                  {
#line 2351 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsIdSpec_78;

#line 2349 "typecheck.m"
                    {
#line 2349 "typecheck.m"
                      check_hlds__typecheck__ConsIdSpec_78 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__TypeAssignSet0_17);
                    }
#line 2352 "typecheck.m"
                    {
#line 2352 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_78, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__STATE_VARIABLE_Info_74_74);
                    }
#line 2351 "typecheck.m"
                  }
#line 2353 "typecheck.m"
                else
#line 2353 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_74_74 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
#line 2359 "typecheck.m"
                {
#line 2359 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(check_hlds__typecheck__ArgsTypeAssignSet_46, check_hlds__typecheck__Args_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_80);
                }
#line 2364 "typecheck.m"
                if ((check_hlds__typecheck__TypeAssignSet1_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2365 "typecheck.m"
                  {
#line 2368 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2373 "typecheck.m"
                    if ((check_hlds__typecheck__ArgsTypeAssignSet_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2370 "typecheck.m"
                      *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
#line 2373 "typecheck.m"
                    else
#line 2374 "typecheck.m"
                      {
#line 2374 "typecheck.m"
                        MR_Word check_hlds__typecheck__ArgSpec_53;

#line 2375 "typecheck.m"
                        {
#line 2375 "typecheck.m"
                          check_hlds__typecheck__ArgSpec_53 = check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Args_15, check_hlds__typecheck__ArgsTypeAssignSet_46);
                        }
#line 2378 "typecheck.m"
                        {
#line 2378 "typecheck.m"
                          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_53, check_hlds__typecheck__STATE_VARIABLE_Info_74_74, check_hlds__typecheck__STATE_VARIABLE_Info_55);
#line 2378 "typecheck.m"
                          return;
                        }
#line 2374 "typecheck.m"
                      }
#line 2365 "typecheck.m"
                  }
#line 2364 "typecheck.m"
                else
#line 2362 "typecheck.m"
                  {
#line 2363 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_80;
#line 2362 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
#line 2362 "typecheck.m"
                  }
#line 2324 "typecheck.m"
              }
#line 2316 "typecheck.m"
            else
#line 2324 "typecheck.m"
              {
#line 2324 "typecheck.m"
                MR_Word check_hlds__typecheck__Sources_41;
#line 2324 "typecheck.m"
                MR_Word check_hlds__typecheck__Symbol_42;
#line 2324 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeAssignSet_137;
#line 2324 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_140;
#line 2324 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_67_148;
#line 2324 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
#line 2324 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet1_157;
#line 2332 "typecheck.m"
                MR_Word check_hlds__typecheck__V_97_97;
#line 2332 "typecheck.m"
                MR_Word check_hlds__typecheck__V_98_98;
#line 2347 "typecheck.m"
                MR_Word check_hlds__typecheck__V_109_109;
#line 2347 "typecheck.m"
                MR_Word check_hlds__typecheck__V_110_110;

#line 2321 "typecheck.m"
                {
#line 2321 "typecheck.m"
                  check_hlds__typecheck__Sources_41 = mercury__list__map_2_f_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[5], check_hlds__typecheck__ConsDefns_33);
                }
#line 2322 "typecheck.m"
                {
#line 2322 "typecheck.m"
                  check_hlds__typecheck__Symbol_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2322 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_42, 0) = ((MR_Box) (check_hlds__typecheck__ConsId_14));
#line 2322 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_42, 1) = ((MR_Box) (check_hlds__typecheck__Sources_41));
#line 2322 "typecheck.m"
                }
#line 2323 "typecheck.m"
                {
#line 2323 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_42, check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__STATE_VARIABLE_Info_67_148);
                }
#line 2328 "typecheck.m"
                {
#line 2328 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__TypeAssignSet0_17, check_hlds__typecheck__ConsDefns_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsTypeAssignSet_137);
                }
#line 2331 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2331 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2331 "typecheck.m"
                  {
#line 2332 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_17)) == (MR_mktag((MR_Integer) 1)));
#line 2332 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2332 "typecheck.m"
                      {
#line 2332 "typecheck.m"
                        check_hlds__typecheck__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 0)));
#line 2332 "typecheck.m"
                        check_hlds__typecheck__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 1)));
#line 2332 "typecheck.m"
                      }
#line 2331 "typecheck.m"
                  }
#line 2337 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2336 "typecheck.m"
                  {
#line 2336 "typecheck.m"
                    {
#line 2336 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
#line 2336 "typecheck.m"
                      return;
                    }
#line 2336 "typecheck.m"
                  }
#line 2337 "typecheck.m"
                else
#line 2338 "typecheck.m"
                  {
#line 2338 "typecheck.m"
                  }
#line 2343 "typecheck.m"
                {
#line 2343 "typecheck.m"
                  check_hlds__typecheck__typecheck_functor_type_4_p_0(check_hlds__typecheck__ConsTypeAssignSet_137, check_hlds__typecheck__Var_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_140);
                }
#line 2346 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2346 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2346 "typecheck.m"
                  {
#line 2347 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_137)) == (MR_mktag((MR_Integer) 1)));
#line 2347 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2347 "typecheck.m"
                      {
#line 2347 "typecheck.m"
                        check_hlds__typecheck__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_137, (MR_Integer) 0)));
#line 2347 "typecheck.m"
                        check_hlds__typecheck__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_137, (MR_Integer) 1)));
#line 2347 "typecheck.m"
                      }
#line 2346 "typecheck.m"
                  }
#line 2353 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2351 "typecheck.m"
                  {
#line 2351 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsIdSpec_113;

#line 2349 "typecheck.m"
                    {
#line 2349 "typecheck.m"
                      check_hlds__typecheck__ConsIdSpec_113 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__TypeAssignSet0_17);
                    }
#line 2352 "typecheck.m"
                    {
#line 2352 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_113, check_hlds__typecheck__STATE_VARIABLE_Info_67_148, &check_hlds__typecheck__STATE_VARIABLE_Info_74_154);
                    }
#line 2351 "typecheck.m"
                  }
#line 2353 "typecheck.m"
                else
#line 2353 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_74_154 = check_hlds__typecheck__STATE_VARIABLE_Info_67_148;
#line 2359 "typecheck.m"
                {
#line 2359 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(check_hlds__typecheck__ArgsTypeAssignSet_140, check_hlds__typecheck__Args_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_157);
                }
#line 2364 "typecheck.m"
                if ((check_hlds__typecheck__TypeAssignSet1_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2365 "typecheck.m"
                  {
#line 2368 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2373 "typecheck.m"
                    if ((check_hlds__typecheck__ArgsTypeAssignSet_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2370 "typecheck.m"
                      *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
#line 2373 "typecheck.m"
                    else
#line 2374 "typecheck.m"
                      {
#line 2374 "typecheck.m"
                        MR_Word check_hlds__typecheck__ArgSpec_121;

#line 2375 "typecheck.m"
                        {
#line 2375 "typecheck.m"
                          check_hlds__typecheck__ArgSpec_121 = check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Args_15, check_hlds__typecheck__ArgsTypeAssignSet_140);
                        }
#line 2378 "typecheck.m"
                        {
#line 2378 "typecheck.m"
                          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_121, check_hlds__typecheck__STATE_VARIABLE_Info_74_154, check_hlds__typecheck__STATE_VARIABLE_Info_55);
#line 2378 "typecheck.m"
                          return;
                        }
#line 2374 "typecheck.m"
                      }
#line 2365 "typecheck.m"
                  }
#line 2364 "typecheck.m"
                else
#line 2362 "typecheck.m"
                  {
#line 2363 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_157;
#line 2362 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
#line 2362 "typecheck.m"
                  }
#line 2324 "typecheck.m"
              }
#line 2316 "typecheck.m"
          }
#line 2306 "typecheck.m"
      }
#line 2273 "typecheck.m"
  }
#line 2267 "typecheck.m"
}

#line 2248 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
#line 2248 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_4,
#line 2248 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsType_5,
#line 2248 "typecheck.m"
  MR_String * check_hlds__typecheck__BuiltinTypeName_6)
#line 2248 "typecheck.m"
{
#line 2251 "typecheck.m"
  {
#line 2251 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2251 "typecheck.m"
    MR_Word check_hlds__typecheck__BuiltinType_8;

#line 2256 "typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2257 "typecheck.m"
      {
#line 2258 "typecheck.m"
        *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "float";
#line 2259 "typecheck.m"
        check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 1;
#line 2257 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2257 "typecheck.m"
      }
#line 2256 "typecheck.m"
    else
#line 2256 "typecheck.m"
      if (((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2253 "typecheck.m"
        {
#line 2254 "typecheck.m"
          *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "int";
#line 2255 "typecheck.m"
          check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 0;
#line 2253 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2253 "typecheck.m"
        }
#line 2256 "typecheck.m"
      else
#line 2256 "typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 2261 "typecheck.m"
          {
#line 2262 "typecheck.m"
            *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "string";
#line 2263 "typecheck.m"
            check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 2;
#line 2261 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2261 "typecheck.m"
          }
#line 2256 "typecheck.m"
        else
#line 2256 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_FALSE;
#line 2251 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2251 "typecheck.m"
      {
#line 2265 "typecheck.m"
        {
#line 2265 "typecheck.m"
          MR_Word base;
#line 2265 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2265 "typecheck.m"
          *check_hlds__typecheck__ConsType_5 = base;
#line 2265 "typecheck.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinType_8));
#line 2265 "typecheck.m"
        }
#line 2265 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2251 "typecheck.m"
      }
#line 2251 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2251 "typecheck.m"
  }
#line 2248 "typecheck.m"
}

#line 2199 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unification_10_p_0(
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_13,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__X_14,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__RHS0_15,
#line 2199 "typecheck.m"
  MR_Word * check_hlds__typecheck__RHS_16,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33,
#line 2199 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_35,
#line 2199 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_36)
#line 2199 "typecheck.m"
{
#line 2207 "typecheck.m"
  {
#line 2207 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 2207 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__RHS0_15)) == (MR_mktag((MR_Integer) 1))))
#line 2212 "typecheck.m"
      {
#line 2212 "typecheck.m"
        MR_Word check_hlds__typecheck__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)));
#line 2212 "typecheck.m"
        MR_Word check_hlds__typecheck__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 2)));
#line 2212 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41;
#line 2212 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_42_42;
#line 2212 "typecheck.m"
        MR_Word check_hlds__typecheck___ExistConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 1)));

#line 2213 "typecheck.m"
        {
#line 2213 "typecheck.m"
          check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__X_14, check_hlds__typecheck__Functor_20, check_hlds__typecheck__Args_22, check_hlds__typecheck__GoalId_13, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__STATE_VARIABLE_Info_42_42);
        }
#line 2215 "typecheck.m"
        {
#line 2215 "typecheck.m"
          check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34, check_hlds__typecheck__STATE_VARIABLE_Info_42_42, check_hlds__typecheck__STATE_VARIABLE_Info_36);
        }
#line 2216 "typecheck.m"
        *check_hlds__typecheck__RHS_16 = check_hlds__typecheck__RHS0_15;
#line 2212 "typecheck.m"
      }
#line 2207 "typecheck.m"
    else
#line 2207 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__RHS0_15)) == (MR_mktag((MR_Integer) 2))))
#line 2219 "typecheck.m"
        {
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__Purity_23 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__Groundness_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__PredOrFunc_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__NonLocals_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 2)));
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 3)));
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 4)));
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__Det_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 5)));
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__Goal0_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 6)));
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__Goal_32;
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37;
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_38_38;
#line 2219 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet1_59;
#line 2692 "typecheck.m"
          MR_Word check_hlds__typecheck__V_60_60;
#line 2692 "typecheck.m"
          MR_Word check_hlds__typecheck__V_61_61;

#line 2688 "typecheck.m"
          {
#line 2688 "typecheck.m"
            check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, check_hlds__typecheck__Purity_23, check_hlds__typecheck__PredOrFunc_25, check_hlds__typecheck__X_14, check_hlds__typecheck__Vars_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_59);
          }
#line 2691 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2691 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2691 "typecheck.m"
            {
#line 2692 "typecheck.m"
              check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33)) == (MR_mktag((MR_Integer) 1)));
#line 2692 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2692 "typecheck.m"
                {
#line 2692 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 0)));
#line 2692 "typecheck.m"
                  check_hlds__typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 1)));
#line 2692 "typecheck.m"
                }
#line 2691 "typecheck.m"
            }
#line 2699 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2694 "typecheck.m"
            {
#line 2694 "typecheck.m"
              MR_Word check_hlds__typecheck__ClauseContext_62;
#line 2694 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_63;

#line 2694 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33;
#line 2695 "typecheck.m"
              {
#line 2695 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__ClauseContext_62);
              }
#line 2696 "typecheck.m"
              {
#line 2696 "typecheck.m"
                check_hlds__typecheck__Spec_63 = check_hlds__typecheck_errors__report_error_lambda_var_8_f_0(check_hlds__typecheck__ClauseContext_62, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__PredOrFunc_25, check_hlds__typecheck__X_14, check_hlds__typecheck__Vars_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33);
              }
#line 2698 "typecheck.m"
              {
#line 2698 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_63, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
              }
#line 2694 "typecheck.m"
            }
#line 2699 "typecheck.m"
          else
#line 2700 "typecheck.m"
            {
#line 2700 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37 = check_hlds__typecheck__TypeAssignSet1_59;
#line 2700 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_38_38 = check_hlds__typecheck__STATE_VARIABLE_Info_0_35;
#line 2700 "typecheck.m"
            }
#line 2222 "typecheck.m"
          {
#line 2222 "typecheck.m"
            check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Goal0_31, &check_hlds__typecheck__Goal_32, check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34, check_hlds__typecheck__STATE_VARIABLE_Info_38_38, check_hlds__typecheck__STATE_VARIABLE_Info_36);
          }
#line 2223 "typecheck.m"
          {
#line 2223 "typecheck.m"
            MR_Word base;
#line 2223 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "typecheck.m"
            *check_hlds__typecheck__RHS_16 = base;
#line 2223 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((check_hlds__typecheck__Purity_23 | ((((check_hlds__typecheck__Groundness_24 << (MR_Integer) 2)) | ((check_hlds__typecheck__PredOrFunc_25 << (MR_Integer) 3)))))));
#line 2223 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
#line 2223 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__typecheck__NonLocals_27));
#line 2223 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__typecheck__Vars_28));
#line 2223 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__typecheck__Modes_29));
#line 2223 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__typecheck__Det_30));
#line 2223 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (check_hlds__typecheck__Goal_32));
#line 2223 "typecheck.m"
          }
#line 2219 "typecheck.m"
        }
#line 2207 "typecheck.m"
      else
#line 2207 "typecheck.m"
        {
#line 2207 "typecheck.m"
          MR_Word check_hlds__typecheck__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)));
#line 2207 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet1_75;
#line 2237 "typecheck.m"
          MR_Word check_hlds__typecheck__V_76_76;
#line 2237 "typecheck.m"
          MR_Word check_hlds__typecheck__V_77_77;

#line 2234 "typecheck.m"
          {
#line 2234 "typecheck.m"
            check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, check_hlds__typecheck__X_14, check_hlds__typecheck__Y_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_75);
          }
#line 2236 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2236 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2236 "typecheck.m"
            {
#line 2237 "typecheck.m"
              check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33)) == (MR_mktag((MR_Integer) 1)));
#line 2237 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2237 "typecheck.m"
                {
#line 2237 "typecheck.m"
                  check_hlds__typecheck__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 0)));
#line 2237 "typecheck.m"
                  check_hlds__typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 1)));
#line 2237 "typecheck.m"
                }
#line 2236 "typecheck.m"
            }
#line 2244 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2239 "typecheck.m"
            {
#line 2239 "typecheck.m"
              MR_Word check_hlds__typecheck__ClauseContext_78;
#line 2239 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_79;

#line 2239 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33;
#line 2240 "typecheck.m"
              {
#line 2240 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__ClauseContext_78);
              }
#line 2241 "typecheck.m"
              {
#line 2241 "typecheck.m"
                check_hlds__typecheck__Spec_79 = check_hlds__typecheck_errors__report_error_unif_var_var_6_f_0(check_hlds__typecheck__ClauseContext_78, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__X_14, check_hlds__typecheck__Y_19, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33);
              }
#line 2243 "typecheck.m"
              {
#line 2243 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_79, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, check_hlds__typecheck__STATE_VARIABLE_Info_36);
              }
#line 2239 "typecheck.m"
            }
#line 2244 "typecheck.m"
          else
#line 2245 "typecheck.m"
            {
#line 2245 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34 = check_hlds__typecheck__TypeAssignSet1_75;
#line 2245 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_36 = check_hlds__typecheck__STATE_VARIABLE_Info_0_35;
#line 2245 "typecheck.m"
            }
#line 2210 "typecheck.m"
          *check_hlds__typecheck__RHS_16 = check_hlds__typecheck__RHS0_15;
#line 2207 "typecheck.m"
        }
#line 2207 "typecheck.m"
  }
#line 2199 "typecheck.m"
}

#line 2123 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
#line 2123 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2123 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2123 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_3,
#line 2123 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2123 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2123 "typecheck.m"
{
#line 2126 "typecheck.m"
  while (MR_TRUE)
#line 2126 "typecheck.m"
    {
#line 2126 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2126 "typecheck.m"
      {
#line 2126 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2126 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2126 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2126 "typecheck.m"
        else
#line 2128 "typecheck.m"
          {
#line 2128 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2128 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2128 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
#line 2128 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_26;
#line 2128 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeOldVarType_27;
#line 2128 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_28;

#line 2136 "typecheck.m"
            {
#line 2136 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__VarTypes0_26);
            }
#line 2137 "typecheck.m"
            {
#line 2137 "typecheck.m"
              parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_3, &check_hlds__typecheck__MaybeOldVarType_27, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_28);
            }
#line 2145 "typecheck.m"
            if ((check_hlds__typecheck__MaybeOldVarType_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2146 "typecheck.m"
              {
#line 2146 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_31;

#line 2147 "typecheck.m"
                {
#line 2147 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_28, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_31);
                }
#line 2148 "typecheck.m"
                {
#line 2148 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2148 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_31));
#line 2148 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2148 "typecheck.m"
                }
#line 2146 "typecheck.m"
              }
#line 2145 "typecheck.m"
            else
#line 2139 "typecheck.m"
              {
#line 2139 "typecheck.m"
                MR_Word check_hlds__typecheck__OldVarType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_27, (MR_Integer) 0)));
#line 2142 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_30;
#line 2749 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_39;
#line 2749 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_40;
#line 2749 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_41;

#line 2750 "typecheck.m"
                {
#line 2750 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__HeadTypeParams_39);
                }
#line 2751 "typecheck.m"
                {
#line 2751 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeBindings0_40);
                }
#line 2752 "typecheck.m"
                {
#line 2752 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_29, check_hlds__typecheck__Type_3, check_hlds__typecheck__HeadTypeParams_39, check_hlds__typecheck__TypeBindings0_40, &check_hlds__typecheck__TypeBindings_41);
                }
#line 2749 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2749 "typecheck.m"
                  {
#line 2753 "typecheck.m"
                    {
#line 2753 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_41, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign1_30);
                    }
#line 2753 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2749 "typecheck.m"
                  }
#line 2142 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2141 "typecheck.m"
                  {
#line 2141 "typecheck.m"
                    check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2141 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_30));
#line 2141 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2141 "typecheck.m"
                  }
#line 2142 "typecheck.m"
                else
#line 2143 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2139 "typecheck.m"
              }
#line 2130 "typecheck.m"
            /* direct tailcall eliminated */
#line 2130 "typecheck.m"
            {
#line 2130 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_12;
#line 2130 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

#line 2130 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2130 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2130 "typecheck.m"
            }
#line 2130 "typecheck.m"
            continue;
#line 2128 "typecheck.m"
          }
#line 2126 "typecheck.m"
      }
#line 2126 "typecheck.m"
      break;
#line 2126 "typecheck.m"
    }
#line 2123 "typecheck.m"
}

#line 2101 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_8_p_0(
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalContext_9,
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_10,
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_11,
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_12,
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_13,
#line 2101 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_14,
#line 2101 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 2101 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 2101 "typecheck.m"
{
#line 2107 "typecheck.m"
  {
#line 2107 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2107 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet1_16;
#line 2111 "typecheck.m"
    MR_Word check_hlds__typecheck__V_17_17;
#line 2111 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;

#line 2108 "typecheck.m"
    {
#line 2108 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_13, check_hlds__typecheck__Var_11, check_hlds__typecheck__Type_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_16);
    }
#line 2110 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2110 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2110 "typecheck.m"
      {
#line 2111 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_13)) == (MR_mktag((MR_Integer) 1)));
#line 2111 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2111 "typecheck.m"
          {
#line 2111 "typecheck.m"
            check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_13, (MR_Integer) 0)));
#line 2111 "typecheck.m"
            check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_13, (MR_Integer) 1)));
#line 2111 "typecheck.m"
          }
#line 2110 "typecheck.m"
      }
#line 2119 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2113 "typecheck.m"
      {
#line 2113 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_19;
#line 2113 "typecheck.m"
        MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_20;
#line 2113 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_21;
#line 2117 "typecheck.m"
        MR_Word check_hlds__typecheck__V_22_22;

#line 2113 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_14 = check_hlds__typecheck__TypeAssignSet0_13;
#line 2114 "typecheck.m"
        {
#line 2114 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ClauseContext_19);
        }
#line 2115 "typecheck.m"
        {
#line 2115 "typecheck.m"
          check_hlds__typecheck__SpecAndMaybeActualExpected_20 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_19, check_hlds__typecheck__GoalContext_9, check_hlds__typecheck__Context_10, check_hlds__typecheck__Var_11, check_hlds__typecheck__Type_12, check_hlds__typecheck__TypeAssignSet0_13);
        }
#line 2117 "typecheck.m"
        check_hlds__typecheck__Spec_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_20, (MR_Integer) 0)));
#line 2117 "typecheck.m"
        check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_20, (MR_Integer) 1)));
#line 2118 "typecheck.m"
        {
#line 2118 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_21, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
#line 2118 "typecheck.m"
          return;
        }
#line 2113 "typecheck.m"
      }
#line 2119 "typecheck.m"
    else
#line 2120 "typecheck.m"
      {
#line 2120 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_14 = check_hlds__typecheck__TypeAssignSet1_16;
#line 2120 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 2120 "typecheck.m"
      }
#line 2107 "typecheck.m"
  }
#line 2101 "typecheck.m"
}

#line 2093 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(
#line 2093 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 2093 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_8,
#line 2093 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11,
#line 2093 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12,
#line 2093 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 2093 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14)
#line 2093 "typecheck.m"
{
#line 2097 "typecheck.m"
  {
#line 2097 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2097 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;
#line 2097 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet1_28;
#line 2111 "typecheck.m"
    MR_Word check_hlds__typecheck__V_29_29;
#line 2111 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;

#line 2099 "typecheck.m"
    {
#line 2099 "typecheck.m"
      check_hlds__typecheck__V_16_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
    }
#line 2108 "typecheck.m"
    {
#line 2108 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, check_hlds__typecheck__Var_8, check_hlds__typecheck__V_16_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_28);
    }
#line 2110 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2110 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2110 "typecheck.m"
      {
#line 2111 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11)) == (MR_mktag((MR_Integer) 1)));
#line 2111 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2111 "typecheck.m"
          {
#line 2111 "typecheck.m"
            check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, (MR_Integer) 0)));
#line 2111 "typecheck.m"
            check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, (MR_Integer) 1)));
#line 2111 "typecheck.m"
          }
#line 2110 "typecheck.m"
      }
#line 2119 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2113 "typecheck.m"
      {
#line 2113 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_31;
#line 2113 "typecheck.m"
        MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_32;
#line 2113 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_33;
#line 2117 "typecheck.m"
        MR_Word check_hlds__typecheck__V_34_34;

#line 2113 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11;
#line 2114 "typecheck.m"
        {
#line 2114 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_13, &check_hlds__typecheck__ClauseContext_31);
        }
#line 2115 "typecheck.m"
        {
#line 2115 "typecheck.m"
          check_hlds__typecheck__SpecAndMaybeActualExpected_32 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Context_7, check_hlds__typecheck__Var_8, check_hlds__typecheck__V_16_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11);
        }
#line 2117 "typecheck.m"
        check_hlds__typecheck__Spec_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_32, (MR_Integer) 0)));
#line 2117 "typecheck.m"
        check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_32, (MR_Integer) 1)));
#line 2118 "typecheck.m"
        {
#line 2118 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_33, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
#line 2118 "typecheck.m"
          return;
        }
#line 2113 "typecheck.m"
      }
#line 2119 "typecheck.m"
    else
#line 2120 "typecheck.m"
      {
#line 2120 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12 = check_hlds__typecheck__TypeAssignSet1_28;
#line 2120 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_14 = check_hlds__typecheck__STATE_VARIABLE_Info_0_13;
#line 2120 "typecheck.m"
      }
#line 2097 "typecheck.m"
  }
#line 2093 "typecheck.m"
}

#line 2048 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_13,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_14,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_15,
#line 2048 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_16,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_17,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_18,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_19,
#line 2048 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_20,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_35,
#line 2048 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_36,
#line 2048 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37,
#line 2048 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38)
#line 2048 "typecheck.m"
{
#line 2057 "typecheck.m"
  {
#line 2057 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2057 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet1_23;
#line 2061 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 2061 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;

#line 2058 "typecheck.m"
    {
#line 2058 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_19, check_hlds__typecheck__Var_17, check_hlds__typecheck__Type_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_23);
    }
#line 2060 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2060 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2060 "typecheck.m"
      {
#line 2061 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_19)) == (MR_mktag((MR_Integer) 1)));
#line 2061 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2061 "typecheck.m"
          {
#line 2061 "typecheck.m"
            check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_19, (MR_Integer) 0)));
#line 2061 "typecheck.m"
            check_hlds__typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_19, (MR_Integer) 1)));
#line 2061 "typecheck.m"
          }
#line 2060 "typecheck.m"
      }
#line 2088 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2063 "typecheck.m"
      {
#line 2063 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_26;
#line 2063 "typecheck.m"
        MR_Word check_hlds__typecheck__GoalContext_27;
#line 2063 "typecheck.m"
        MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_28;
#line 2063 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_29;
#line 2063 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeActualExpected_30;
#line 2063 "typecheck.m"
        MR_Word check_hlds__typecheck__V_40_40;

#line 2063 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_20 = check_hlds__typecheck__TypeAssignSet0_19;
#line 2064 "typecheck.m"
        {
#line 2064 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__Info_13, &check_hlds__typecheck__ClauseContext_26);
        }
#line 2066 "typecheck.m"
        {
#line 2066 "typecheck.m"
          check_hlds__typecheck__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2066 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_40_40, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorKind_15));
#line 2066 "typecheck.m"
        }
#line 2066 "typecheck.m"
        {
#line 2066 "typecheck.m"
          check_hlds__typecheck__GoalContext_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2066 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_27, 0) = ((MR_Box) (check_hlds__typecheck__V_40_40));
#line 2066 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_27, 1) = ((MR_Box) (check_hlds__typecheck__ArgNum_16));
#line 2066 "typecheck.m"
        }
#line 2067 "typecheck.m"
        {
#line 2067 "typecheck.m"
          check_hlds__typecheck__SpecAndMaybeActualExpected_28 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_26, check_hlds__typecheck__GoalContext_27, check_hlds__typecheck__Context_14, check_hlds__typecheck__Var_17, check_hlds__typecheck__Type_18, check_hlds__typecheck__TypeAssignSet0_19);
        }
#line 2069 "typecheck.m"
        check_hlds__typecheck__Spec_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_28, (MR_Integer) 0)));
#line 2069 "typecheck.m"
        check_hlds__typecheck__MaybeActualExpected_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_28, (MR_Integer) 1)));
#line 2071 "typecheck.m"
        {
#line 2071 "typecheck.m"
          MR_Word base;
#line 2071 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2071 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Specs_36 = base;
#line 2071 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Spec_29));
#line 2071 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Specs_0_35));
#line 2071 "typecheck.m"
        }
#line 2074 "typecheck.m"
        if ((check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2073 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37;
#line 2074 "typecheck.m"
        else
#line 2079 "typecheck.m"
          if ((check_hlds__typecheck__MaybeActualExpected_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2078 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2079 "typecheck.m"
          else
#line 2080 "typecheck.m"
            {
#line 2080 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgVectorTypeErrors0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37, (MR_Integer) 0)));
#line 2080 "typecheck.m"
              MR_Word check_hlds__typecheck__ActualExpected_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeActualExpected_30, (MR_Integer) 0)));
#line 2080 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgVectorTypeError_33;
#line 2080 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgVectorTypeErrors_34;

#line 2081 "typecheck.m"
              {
#line 2081 "typecheck.m"
                check_hlds__typecheck__ArgVectorTypeError_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2081 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 0) = ((MR_Box) (check_hlds__typecheck__ArgNum_16));
#line 2081 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 1) = ((MR_Box) (check_hlds__typecheck__Var_17));
#line 2081 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 2) = ((MR_Box) (check_hlds__typecheck__ActualExpected_32));
#line 2081 "typecheck.m"
              }
#line 2083 "typecheck.m"
              {
#line 2083 "typecheck.m"
                check_hlds__typecheck__ArgVectorTypeErrors_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_34, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeError_33));
#line 2083 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeErrors0_31));
#line 2083 "typecheck.m"
              }
#line 2085 "typecheck.m"
              {
#line 2085 "typecheck.m"
                MR_Word base;
#line 2085 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "typecheck.m"
                *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = base;
#line 2085 "typecheck.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeErrors_34));
#line 2085 "typecheck.m"
              }
#line 2080 "typecheck.m"
            }
#line 2063 "typecheck.m"
      }
#line 2088 "typecheck.m"
    else
#line 2089 "typecheck.m"
      {
#line 2089 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_20 = check_hlds__typecheck__TypeAssignSet1_23;
#line 2089 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37;
#line 2089 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Specs_36 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_35;
#line 2089 "typecheck.m"
      }
#line 2057 "typecheck.m"
  }
#line 2048 "typecheck.m"
}

#line 2023 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_2,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_3,
#line 2023 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_4,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__6_6,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2023 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_9,
#line 2023 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_10,
#line 2023 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
#line 2023 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12)
#line 2023 "typecheck.m"
{
#line 2031 "typecheck.m"
  while (MR_TRUE)
#line 2031 "typecheck.m"
    {
#line 2031 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2031 "typecheck.m"
      {
#line 2031 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2031 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2031 "typecheck.m"
          if ((check_hlds__typecheck__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2031 "typecheck.m"
            {
#line 2032 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
#line 2032 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Specs_10 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_9;
#line 2032 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 2031 "typecheck.m"
            }
#line 2031 "typecheck.m"
          else
#line 2034 "typecheck.m"
            {
#line 2035 "typecheck.m"
              {
#line 2035 "typecheck.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
#line 2035 "typecheck.m"
                return;
              }
#line 2034 "typecheck.m"
            }
#line 2031 "typecheck.m"
        else
#line 2031 "typecheck.m"
          if ((check_hlds__typecheck__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2037 "typecheck.m"
            {
#line 2038 "typecheck.m"
              {
#line 2038 "typecheck.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
#line 2038 "typecheck.m"
                return;
              }
#line 2037 "typecheck.m"
            }
#line 2031 "typecheck.m"
          else
#line 2041 "typecheck.m"
            {
#line 2041 "typecheck.m"
              MR_Word check_hlds__typecheck__Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__6_6, (MR_Integer) 0)));
#line 2041 "typecheck.m"
              MR_Word check_hlds__typecheck__Types_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__6_6, (MR_Integer) 1)));
#line 2041 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79;
#line 2041 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_80_80;
#line 2041 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81;
#line 2041 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_82_82;
#line 2041 "typecheck.m"
              MR_Word check_hlds__typecheck__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 1)));
#line 2041 "typecheck.m"
              MR_Word check_hlds__typecheck__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 0)));

#line 2042 "typecheck.m"
              {
#line 2042 "typecheck.m"
                check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(check_hlds__typecheck__Info_1, check_hlds__typecheck__Context_2, check_hlds__typecheck__ArgVectorKind_3, check_hlds__typecheck__ArgNum_4, check_hlds__typecheck__V_88_88, check_hlds__typecheck__Type_68, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79, check_hlds__typecheck__STATE_VARIABLE_Specs_0_9, &check_hlds__typecheck__STATE_VARIABLE_Specs_80_80, check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11, &check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81);
              }
#line 2045 "typecheck.m"
              check_hlds__typecheck__V_82_82 = (check_hlds__typecheck__ArgNum_4 + (MR_Integer) 1);
#line 2044 "typecheck.m"
              /* direct tailcall eliminated */
#line 2044 "typecheck.m"
              {
#line 2044 "typecheck.m"
                MR_Integer check_hlds__typecheck__ArgNum__tmp_copy_4 = check_hlds__typecheck__V_82_82;
#line 2044 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadVar__5__tmp_copy_5 = check_hlds__typecheck__V_87_87;
#line 2044 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadVar__6__tmp_copy_6 = check_hlds__typecheck__Types_69;
#line 2044 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79;
#line 2044 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_9 = check_hlds__typecheck__STATE_VARIABLE_Specs_80_80;
#line 2044 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0__tmp_copy_11 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81;

#line 2044 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0__tmp_copy_11;
#line 2044 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_Specs_0_9 = check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_9;
#line 2044 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7;
#line 2044 "typecheck.m"
                check_hlds__typecheck__HeadVar__6_6 = check_hlds__typecheck__HeadVar__6__tmp_copy_6;
#line 2044 "typecheck.m"
                check_hlds__typecheck__HeadVar__5_5 = check_hlds__typecheck__HeadVar__5__tmp_copy_5;
#line 2044 "typecheck.m"
                check_hlds__typecheck__ArgNum_4 = check_hlds__typecheck__ArgNum__tmp_copy_4;
#line 2044 "typecheck.m"
              }
#line 2044 "typecheck.m"
              continue;
#line 2041 "typecheck.m"
            }
#line 2031 "typecheck.m"
      }
#line 2031 "typecheck.m"
      break;
#line 2031 "typecheck.m"
    }
#line 2023 "typecheck.m"
}

#line 1923 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
#line 1923 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1923 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1923 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1923 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 1923 "typecheck.m"
{
#line 1926 "typecheck.m"
  while (MR_TRUE)
#line 1926 "typecheck.m"
    {
#line 1926 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1926 "typecheck.m"
      {
#line 1926 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1926 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1926 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__HeadVar__3_3;
#line 1926 "typecheck.m"
        else
#line 1928 "typecheck.m"
          {
#line 1928 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1928 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssignSets_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1928 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 0)));
#line 1928 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 1)));
#line 1928 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 2)));
#line 1928 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;
#line 1928 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_27;

#line 1941 "typecheck.m"
            {
#line 1941 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__VarTypes0_27);
            }
#line 1965 "typecheck.m"
            if ((check_hlds__typecheck__ArgTypes0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1966 "typecheck.m"
              {
#line 1967 "typecheck.m"
                {
#line 1967 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.arg_type_assign_var_has_type\'/6", (MR_String) "ArgTypes0 = []");
#line 1967 "typecheck.m"
                  return;
                }
#line 1966 "typecheck.m"
              }
#line 1965 "typecheck.m"
            else
#line 1943 "typecheck.m"
              {
#line 1943 "typecheck.m"
                MR_Word check_hlds__typecheck__Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 0)));
#line 1943 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 1)));
#line 1943 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeOldVarType_30;
#line 1943 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_31;

#line 1944 "typecheck.m"
                {
#line 1944 "typecheck.m"
                  parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_28, &check_hlds__typecheck__MaybeOldVarType_30, check_hlds__typecheck__VarTypes0_27, &check_hlds__typecheck__VarTypes_31);
                }
#line 1958 "typecheck.m"
                if ((check_hlds__typecheck__MaybeOldVarType_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1959 "typecheck.m"
                  {
#line 1959 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_35;
#line 1959 "typecheck.m"
                    MR_Word check_hlds__typecheck__NewTypeAssign_41;

#line 1960 "typecheck.m"
                    {
#line 1960 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_31, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign_35);
                    }
#line 1961 "typecheck.m"
                    {
#line 1961 "typecheck.m"
                      check_hlds__typecheck__NewTypeAssign_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1961 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_35));
#line 1961 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
#line 1961 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
#line 1961 "typecheck.m"
                    }
#line 1963 "typecheck.m"
                    {
#line 1963 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_41));
#line 1963 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
#line 1963 "typecheck.m"
                    }
#line 1959 "typecheck.m"
                  }
#line 1958 "typecheck.m"
                else
#line 1947 "typecheck.m"
                  {
#line 1947 "typecheck.m"
                    MR_Word check_hlds__typecheck__OldVarType_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_30, (MR_Integer) 0)));
#line 1955 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_33;
#line 2749 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_46;
#line 2749 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_47;
#line 2749 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_48;

#line 2750 "typecheck.m"
                    {
#line 2750 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__HeadTypeParams_46);
                    }
#line 2751 "typecheck.m"
                    {
#line 2751 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeBindings0_47);
                    }
#line 2752 "typecheck.m"
                    {
#line 2752 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_32, check_hlds__typecheck__Type_28, check_hlds__typecheck__HeadTypeParams_46, check_hlds__typecheck__TypeBindings0_47, &check_hlds__typecheck__TypeBindings_48);
                    }
#line 2749 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2749 "typecheck.m"
                      {
#line 2753 "typecheck.m"
                        {
#line 2753 "typecheck.m"
                          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_48, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign1_33);
                        }
#line 2753 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2749 "typecheck.m"
                      }
#line 1955 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 1953 "typecheck.m"
                      {
#line 1953 "typecheck.m"
                        MR_Word check_hlds__typecheck__NewTypeAssign_34;

#line 1952 "typecheck.m"
                        {
#line 1952 "typecheck.m"
                          check_hlds__typecheck__NewTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1952 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_33));
#line 1952 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
#line 1952 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
#line 1952 "typecheck.m"
                        }
#line 1954 "typecheck.m"
                        {
#line 1954 "typecheck.m"
                          check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_34));
#line 1954 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
#line 1954 "typecheck.m"
                        }
#line 1953 "typecheck.m"
                      }
#line 1955 "typecheck.m"
                    else
#line 1955 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = check_hlds__typecheck__HeadVar__3_3;
#line 1947 "typecheck.m"
                  }
#line 1943 "typecheck.m"
              }
#line 1932 "typecheck.m"
            /* direct tailcall eliminated */
#line 1932 "typecheck.m"
            {
#line 1932 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ArgsTypeAssignSets_10;
#line 1932 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;

#line 1932 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 1932 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1932 "typecheck.m"
            }
#line 1932 "typecheck.m"
            continue;
#line 1928 "typecheck.m"
          }
#line 1926 "typecheck.m"
      }
#line 1926 "typecheck.m"
      break;
#line 1926 "typecheck.m"
    }
#line 1923 "typecheck.m"
}

#line 1907 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__skip_arg_2_p_0(
#line 1907 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1907 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2)
#line 1907 "typecheck.m"
{
#line 1909 "typecheck.m"
  {
#line 1909 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1909 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1909 "typecheck.m"
      *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1909 "typecheck.m"
    else
#line 1911 "typecheck.m"
      {
#line 1911 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssign0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1911 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssigns0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1911 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssign_5;
#line 1911 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssigns_6;
#line 1911 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 0)));
#line 1911 "typecheck.m"
        MR_Word check_hlds__typecheck__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 1)));
#line 1911 "typecheck.m"
        MR_Word check_hlds__typecheck__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 2)));
#line 1911 "typecheck.m"
        MR_Word check_hlds__typecheck__Args_11;

#line 1915 "typecheck.m"
        if ((check_hlds__typecheck__Args0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1916 "typecheck.m"
          {
#line 1918 "typecheck.m"
            {
#line 1918 "typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.skip_arg\'/2", (MR_String) "skip_arg");
#line 1918 "typecheck.m"
              return;
            }
#line 1916 "typecheck.m"
          }
#line 1915 "typecheck.m"
        else
#line 1914 "typecheck.m"
          {
#line 1914 "typecheck.m"
            MR_Word check_hlds__typecheck__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 0)));

#line 1914 "typecheck.m"
            check_hlds__typecheck__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 1)));
#line 1914 "typecheck.m"
          }
#line 1920 "typecheck.m"
        {
#line 1920 "typecheck.m"
          check_hlds__typecheck__ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1920 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_7));
#line 1920 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 1) = ((MR_Box) (check_hlds__typecheck__Args_11));
#line 1920 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_9));
#line 1920 "typecheck.m"
        }
#line 1921 "typecheck.m"
        {
#line 1921 "typecheck.m"
          check_hlds__typecheck__skip_arg_2_p_0(check_hlds__typecheck__ArgTypeAssigns0_4, &check_hlds__typecheck__ArgTypeAssigns_6);
        }
#line 1911 "typecheck.m"
        {
#line 1911 "typecheck.m"
          MR_Word base;
#line 1911 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 1911 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_5));
#line 1911 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssigns_6));
#line 1911 "typecheck.m"
        }
#line 1911 "typecheck.m"
      }
#line 1909 "typecheck.m"
  }
#line 1907 "typecheck.m"
}

#line 1868 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(
#line 1868 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_1,
#line 1868 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_2,
#line 1868 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1868 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1868 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1868 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_6,
#line 1868 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1868 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8)
#line 1868 "typecheck.m"
{
#line 1874 "typecheck.m"
  while (MR_TRUE)
#line 1874 "typecheck.m"
    {
#line 1874 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1874 "typecheck.m"
      {
#line 1874 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1874 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1874 "typecheck.m"
          {
#line 1875 "typecheck.m"
            {
#line 1875 "typecheck.m"
              *check_hlds__typecheck__TypeAssignSet_6 = check_hlds__type_assign__convert_args_type_assign_set_check_empty_args_1_f_0(check_hlds__typecheck__HeadVar__5_5);
            }
#line 1874 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_8 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
#line 1874 "typecheck.m"
          }
#line 1874 "typecheck.m"
        else
#line 1878 "typecheck.m"
          {
#line 1878 "typecheck.m"
            MR_Word check_hlds__typecheck__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 1878 "typecheck.m"
            MR_Word check_hlds__typecheck__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
#line 1878 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssignSet1_26;
#line 1878 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_29_29;
#line 1878 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_30_30;
#line 1878 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssignSet1_41;
#line 1903 "typecheck.m"
            MR_Word check_hlds__typecheck__V_42_42;
#line 1903 "typecheck.m"
            MR_Word check_hlds__typecheck__V_43_43;

#line 1892 "typecheck.m"
            {
#line 1892 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(check_hlds__typecheck__HeadVar__5_5, check_hlds__typecheck__Var_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgTypeAssignSet1_41);
            }
#line 1895 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgTypeAssignSet1_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1895 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1895 "typecheck.m"
              {
#line 1896 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 1896 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1896 "typecheck.m"
                  {
#line 1896 "typecheck.m"
                    check_hlds__typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 0)));
#line 1896 "typecheck.m"
                    check_hlds__typecheck__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 1)));
#line 1896 "typecheck.m"
                  }
#line 1895 "typecheck.m"
              }
#line 1903 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1898 "typecheck.m"
              {
#line 1898 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalContext_25;
#line 1898 "typecheck.m"
                MR_Word check_hlds__typecheck__ClauseContext_44;
#line 1898 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_45;
#line 1898 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypeAssign_50;
#line 1898 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypeAssigns_51;
#line 1898 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_52;
#line 1898 "typecheck.m"
                MR_Word check_hlds__typecheck__Args0_53;
#line 1898 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_54;
#line 1898 "typecheck.m"
                MR_Word check_hlds__typecheck__Args_56;

#line 1879 "typecheck.m"
                {
#line 1879 "typecheck.m"
                  check_hlds__typecheck__GoalContext_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1879 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_25, 0) = ((MR_Box) (check_hlds__typecheck__VarVectorKind_1));
#line 1879 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_25, 1) = ((MR_Box) (check_hlds__typecheck__ArgNum_2));
#line 1879 "typecheck.m"
                }
#line 1912 "typecheck.m"
                check_hlds__typecheck__TypeAssign_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_42_42, (MR_Integer) 0)));
#line 1912 "typecheck.m"
                check_hlds__typecheck__Args0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_42_42, (MR_Integer) 1)));
#line 1912 "typecheck.m"
                check_hlds__typecheck__Constraints_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_42_42, (MR_Integer) 2)));
#line 1915 "typecheck.m"
                if ((check_hlds__typecheck__Args0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1916 "typecheck.m"
                  {
#line 1918 "typecheck.m"
                    {
#line 1918 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.skip_arg\'/2", (MR_String) "skip_arg");
#line 1918 "typecheck.m"
                      return;
                    }
#line 1916 "typecheck.m"
                  }
#line 1915 "typecheck.m"
                else
#line 1914 "typecheck.m"
                  {
#line 1914 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_53, (MR_Integer) 0)));

#line 1914 "typecheck.m"
                    check_hlds__typecheck__Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_53, (MR_Integer) 1)));
#line 1914 "typecheck.m"
                  }
#line 1920 "typecheck.m"
                {
#line 1920 "typecheck.m"
                  check_hlds__typecheck__ArgTypeAssign_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1920 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_52));
#line 1920 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 1) = ((MR_Box) (check_hlds__typecheck__Args_56));
#line 1920 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_54));
#line 1920 "typecheck.m"
                }
#line 1921 "typecheck.m"
                {
#line 1921 "typecheck.m"
                  check_hlds__typecheck__skip_arg_2_p_0(check_hlds__typecheck__V_43_43, &check_hlds__typecheck__ArgTypeAssigns_51);
                }
#line 1911 "typecheck.m"
                {
#line 1911 "typecheck.m"
                  check_hlds__typecheck__ArgTypeAssignSet1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_26, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_50));
#line 1911 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_26, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssigns_51));
#line 1911 "typecheck.m"
                }
#line 1899 "typecheck.m"
                {
#line 1899 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__ClauseContext_44);
                }
#line 1900 "typecheck.m"
                {
#line 1900 "typecheck.m"
                  check_hlds__typecheck__Spec_45 = check_hlds__typecheck_errors__report_error_arg_var_5_f_0(check_hlds__typecheck__ClauseContext_44, check_hlds__typecheck__GoalContext_25, check_hlds__typecheck__Context_3, check_hlds__typecheck__Var_20, check_hlds__typecheck__HeadVar__5_5);
                }
#line 1902 "typecheck.m"
                {
#line 1902 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_45, check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__STATE_VARIABLE_Info_29_29);
                }
#line 1898 "typecheck.m"
              }
#line 1903 "typecheck.m"
            else
#line 1904 "typecheck.m"
              {
#line 1904 "typecheck.m"
                check_hlds__typecheck__ArgTypeAssignSet1_26 = check_hlds__typecheck__ArgTypeAssignSet1_41;
#line 1904 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_Info_29_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
#line 1904 "typecheck.m"
              }
#line 1882 "typecheck.m"
            check_hlds__typecheck__V_30_30 = (check_hlds__typecheck__ArgNum_2 + (MR_Integer) 1);
#line 1882 "typecheck.m"
            /* direct tailcall eliminated */
#line 1882 "typecheck.m"
            {
#line 1882 "typecheck.m"
              MR_Integer check_hlds__typecheck__ArgNum__tmp_copy_2 = check_hlds__typecheck__V_30_30;
#line 1882 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__4__tmp_copy_4 = check_hlds__typecheck__Vars_21;
#line 1882 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__5__tmp_copy_5 = check_hlds__typecheck__ArgTypeAssignSet1_26;
#line 1882 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_Info_29_29;

#line 1882 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_0_7 = check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 1882 "typecheck.m"
              check_hlds__typecheck__HeadVar__5_5 = check_hlds__typecheck__HeadVar__5__tmp_copy_5;
#line 1882 "typecheck.m"
              check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__HeadVar__4__tmp_copy_4;
#line 1882 "typecheck.m"
              check_hlds__typecheck__ArgNum_2 = check_hlds__typecheck__ArgNum__tmp_copy_2;
#line 1882 "typecheck.m"
            }
#line 1882 "typecheck.m"
            continue;
#line 1878 "typecheck.m"
          }
#line 1874 "typecheck.m"
      }
#line 1874 "typecheck.m"
      break;
#line 1874 "typecheck.m"
    }
#line 1868 "typecheck.m"
}

#line 1825 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__PredExistQVars_3,
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__PredArgTypes_4,
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__PredConstraints_5,
#line 1825 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
#line 1825 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7)
#line 1825 "typecheck.m"
{
#line 1829 "typecheck.m"
  while (MR_TRUE)
#line 1829 "typecheck.m"
    {
#line 1829 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1829 "typecheck.m"
      {
#line 1829 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1829 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1829 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6;
#line 1829 "typecheck.m"
        else
#line 1831 "typecheck.m"
          {
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_22;
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentArgTypes_23;
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__Renaming_24;
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentExistQVars_25;
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentConstraints_26;
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypeParams0_27;
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypeParams_28;
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_29;
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__NewArgTypeAssign_30;
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet0_42;
#line 1831 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet_43;

#line 1860 "typecheck.m"
            {
#line 1860 "typecheck.m"
              check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeVarSet0_42);
            }
#line 1861 "typecheck.m"
            {
#line 1861 "typecheck.m"
              parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_42, check_hlds__typecheck__PredTypeVarSet_2, &check_hlds__typecheck__TypeVarSet_43, &check_hlds__typecheck__Renaming_24);
            }
#line 1862 "typecheck.m"
            {
#line 1862 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredArgTypes_4, &check_hlds__typecheck__ParentArgTypes_23);
            }
#line 1864 "typecheck.m"
            {
#line 1864 "typecheck.m"
              check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_43, check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeAssign1_22);
            }
#line 1835 "typecheck.m"
            {
#line 1835 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredExistQVars_3, &check_hlds__typecheck__ParentExistQVars_25);
            }
#line 1837 "typecheck.m"
            {
#line 1837 "typecheck.m"
              check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredConstraints_5, &check_hlds__typecheck__ParentConstraints_26);
            }
#line 1843 "typecheck.m"
            {
#line 1843 "typecheck.m"
              check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__HeadTypeParams0_27);
            }
#line 1844 "typecheck.m"
            {
#line 1844 "typecheck.m"
              mercury__list__append_3_p_1((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ParentExistQVars_25, check_hlds__typecheck__HeadTypeParams0_27, &check_hlds__typecheck__HeadTypeParams_28);
            }
#line 1845 "typecheck.m"
            {
#line 1845 "typecheck.m"
              check_hlds__type_assign__type_assign_set_head_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_28, check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__TypeAssign_29);
            }
#line 1848 "typecheck.m"
            {
#line 1848 "typecheck.m"
              check_hlds__typecheck__NewArgTypeAssign_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1848 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_29));
#line 1848 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 1) = ((MR_Box) (check_hlds__typecheck__ParentArgTypes_23));
#line 1848 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 2) = ((MR_Box) (check_hlds__typecheck__ParentConstraints_26));
#line 1848 "typecheck.m"
            }
#line 1850 "typecheck.m"
            {
#line 1850 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 0) = ((MR_Box) (check_hlds__typecheck__NewArgTypeAssign_30));
#line 1850 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6));
#line 1850 "typecheck.m"
            }
#line 1851 "typecheck.m"
            /* direct tailcall eliminated */
#line 1851 "typecheck.m"
            {
#line 1851 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_16;
#line 1851 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;

#line 1851 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0__tmp_copy_6;
#line 1851 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1851 "typecheck.m"
            }
#line 1851 "typecheck.m"
            continue;
#line 1831 "typecheck.m"
          }
#line 1829 "typecheck.m"
      }
#line 1829 "typecheck.m"
      break;
#line 1829 "typecheck.m"
    }
#line 1825 "typecheck.m"
}

#line 1781 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1781 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
#line 1781 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7)
#line 1781 "typecheck.m"
{
#line 1785 "typecheck.m"
  while (MR_TRUE)
#line 1785 "typecheck.m"
    {
#line 1785 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1785 "typecheck.m"
      {
#line 1785 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1785 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1786 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6;
#line 1785 "typecheck.m"
        else
#line 1788 "typecheck.m"
          {
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_22;
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_23;
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_24;
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__PredArgTypes_25;
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_26;
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__TVarSet_27;
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__PredConstraints_28;
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;
#line 1789 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_22;

#line 1789 "typecheck.m"
            {
#line 1789 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__HeadVar__2_2, ((MR_Box) (check_hlds__typecheck__PredId_15)), &check_hlds__typecheck__conv0_PredInfo_22);
            }
#line 1789 "typecheck.m"
            check_hlds__typecheck__PredInfo_22 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_22);
#line 1790 "typecheck.m"
            {
#line 1790 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredTypeVarSet_23, &check_hlds__typecheck__PredExistQVars_24, &check_hlds__typecheck__PredArgTypes_25);
            }
#line 1792 "typecheck.m"
            {
#line 1792 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredClassContext_26);
            }
#line 1793 "typecheck.m"
            {
#line 1793 "typecheck.m"
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__TVarSet_27);
            }
#line 1794 "typecheck.m"
            {
#line 1794 "typecheck.m"
              hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__TVarSet_27, check_hlds__typecheck__HeadVar__4_4, check_hlds__typecheck__PredClassContext_26, &check_hlds__typecheck__PredConstraints_28);
            }
#line 1796 "typecheck.m"
            {
#line 1796 "typecheck.m"
              check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__HeadVar__5_5, check_hlds__typecheck__PredTypeVarSet_23, check_hlds__typecheck__PredExistQVars_24, check_hlds__typecheck__PredArgTypes_25, check_hlds__typecheck__PredConstraints_28, check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6, &check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31);
            }
#line 1798 "typecheck.m"
            /* direct tailcall eliminated */
#line 1798 "typecheck.m"
            {
#line 1798 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__PredIds_16;
#line 1798 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;

#line 1798 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_6;
#line 1798 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1798 "typecheck.m"
            }
#line 1798 "typecheck.m"
            continue;
#line 1788 "typecheck.m"
          }
#line 1785 "typecheck.m"
      }
#line 1785 "typecheck.m"
      break;
#line 1785 "typecheck.m"
    }
#line 1781 "typecheck.m"
}

#line 2020 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1(
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2020 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2020 "typecheck.m"
{
#line 2020 "typecheck.m"
  {
#line 2020 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2020 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_HeadVar__3_3;

#line 2020 "typecheck.m"
    {
#line 2020 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv1_HeadVar__3_3);
    }
#line 2020 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv1_HeadVar__3_3));
#line 2020 "typecheck.m"
  }
#line 2020 "typecheck.m"
}

#line 1721 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0(
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_10,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_13,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27,
#line 1721 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28,
#line 1721 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_29,
#line 1721 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_30)
#line 1721 "typecheck.m"
{
#line 1727 "typecheck.m"
  {
#line 1727 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_17;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_18;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__Preds_19;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__PredInfo_20;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__PredTypeVarSet_21;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__PredExistQVars_22;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__PredArgTypes_23;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__PredClassContext_24;
#line 1731 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_PredInfo_20;
#line 1741 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 1741 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32;

#line 1728 "typecheck.m"
    {
#line 1728 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, &check_hlds__typecheck__ModuleInfo_17);
    }
#line 1729 "typecheck.m"
    {
#line 1729 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__PredicateTable_18);
    }
#line 1730 "typecheck.m"
    {
#line 1730 "typecheck.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_18, &check_hlds__typecheck__Preds_19);
    }
#line 1731 "typecheck.m"
    {
#line 1731 "typecheck.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_19, ((MR_Box) (check_hlds__typecheck__PredId_13)), &check_hlds__typecheck__conv0_PredInfo_20);
    }
#line 1731 "typecheck.m"
    check_hlds__typecheck__PredInfo_20 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_20);
#line 1732 "typecheck.m"
    {
#line 1732 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_20, &check_hlds__typecheck__PredTypeVarSet_21, &check_hlds__typecheck__PredExistQVars_22, &check_hlds__typecheck__PredArgTypes_23);
    }
#line 1734 "typecheck.m"
    {
#line 1734 "typecheck.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_20, &check_hlds__typecheck__PredClassContext_24);
    }
#line 1741 "typecheck.m"
    {
#line 1741 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__PredTypeVarSet_21);
    }
#line 1741 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1741 "typecheck.m"
      {
#line 1742 "typecheck.m"
        check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_24, (MR_Integer) 0)));
#line 1742 "typecheck.m"
        check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_24, (MR_Integer) 1)));
#line 1742 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1741 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1742 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1741 "typecheck.m"
      }
#line 1746 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2007 "typecheck.m"
      {
#line 2007 "typecheck.m"
        MR_Word check_hlds__typecheck__Specs_51;
#line 2007 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_52;
#line 2019 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgVectorTypeErrors_53;
#line 2012 "typecheck.m"
        MR_Word check_hlds__typecheck__V_64_64;
#line 2013 "typecheck.m"
        MR_Word check_hlds__typecheck__V_54_54;
#line 2013 "typecheck.m"
        MR_Word check_hlds__typecheck__V_55_55;
#line 2013 "typecheck.m"
        MR_Word check_hlds__typecheck__V_56_56;

#line 2008 "typecheck.m"
        {
#line 2008 "typecheck.m"
          check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__Context_11, check_hlds__typecheck__ArgVectorKind_10, (MR_Integer) 1, check_hlds__typecheck__Args_14, check_hlds__typecheck__PredArgTypes_23, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_51, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[1]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_52);
        }
#line 2012 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_52)) == (MR_mktag((MR_Integer) 1)));
#line 2012 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2012 "typecheck.m"
          {
#line 2012 "typecheck.m"
            check_hlds__typecheck__ArgVectorTypeErrors_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_52, (MR_Integer) 0)));
#line 2013 "typecheck.m"
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_53)) == (MR_mktag((MR_Integer) 1)));
#line 2013 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2013 "typecheck.m"
              {
#line 2013 "typecheck.m"
                check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_53, (MR_Integer) 0)));
#line 2013 "typecheck.m"
                check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_53, (MR_Integer) 1)));
#line 2013 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 2013 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2013 "typecheck.m"
                  {
#line 2013 "typecheck.m"
                    check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, (MR_Integer) 0)));
#line 2013 "typecheck.m"
                    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, (MR_Integer) 1)));
#line 2013 "typecheck.m"
                  }
#line 2013 "typecheck.m"
              }
#line 2012 "typecheck.m"
          }
#line 2019 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2015 "typecheck.m"
          {
#line 2015 "typecheck.m"
            MR_Word check_hlds__typecheck__ClauseContext_57;
#line 2015 "typecheck.m"
            MR_Word check_hlds__typecheck__AllArgsSpec_58;

#line 2015 "typecheck.m"
            {
#line 2015 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, &check_hlds__typecheck__ClauseContext_57);
            }
#line 2016 "typecheck.m"
            {
#line 2016 "typecheck.m"
              check_hlds__typecheck__AllArgsSpec_58 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_57, check_hlds__typecheck__Context_11, check_hlds__typecheck__ArgVectorKind_10, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, check_hlds__typecheck__ArgVectorTypeErrors_53);
            }
#line 2018 "typecheck.m"
            {
#line 2018 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_58, check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__STATE_VARIABLE_Info_30);
#line 2018 "typecheck.m"
              return;
            }
#line 2015 "typecheck.m"
          }
#line 2019 "typecheck.m"
        else
#line 2020 "typecheck.m"
          {
#line 2020 "typecheck.m"
            MR_Box check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30;

#line 2020 "typecheck.m"
            {
#line 2020 "typecheck.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[4], check_hlds__typecheck__Specs_51, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_29)), &check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30);
            }
#line 2020 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_30 = ((MR_Word) check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30);
#line 2020 "typecheck.m"
          }
#line 2007 "typecheck.m"
      }
#line 1746 "typecheck.m"
    else
#line 1747 "typecheck.m"
      {
#line 1747 "typecheck.m"
        MR_Word check_hlds__typecheck__ClassTable_25;
#line 1747 "typecheck.m"
        MR_Word check_hlds__typecheck__PredConstraints_26;
#line 1747 "typecheck.m"
        MR_Word check_hlds__typecheck__V_35_35;
#line 1747 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_85;

#line 1747 "typecheck.m"
        {
#line 1747 "typecheck.m"
          hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__ClassTable_25);
        }
#line 1748 "typecheck.m"
        {
#line 1748 "typecheck.m"
          hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_25, check_hlds__typecheck__PredTypeVarSet_21, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__PredClassContext_24, &check_hlds__typecheck__PredConstraints_26);
        }
#line 1750 "typecheck.m"
        {
#line 1750 "typecheck.m"
          check_hlds__typecheck__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1750 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_35_35, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorKind_10));
#line 1750 "typecheck.m"
        }
#line 1820 "typecheck.m"
        {
#line 1820 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27, check_hlds__typecheck__PredTypeVarSet_21, check_hlds__typecheck__PredExistQVars_22, check_hlds__typecheck__PredArgTypes_23, check_hlds__typecheck__PredConstraints_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_85);
        }
#line 1822 "typecheck.m"
        {
#line 1822 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__V_35_35, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__Args_14, check_hlds__typecheck__ArgsTypeAssignSet_85, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__STATE_VARIABLE_Info_30);
#line 1822 "typecheck.m"
          return;
        }
#line 1747 "typecheck.m"
      }
#line 1727 "typecheck.m"
  }
#line 1721 "typecheck.m"
}

#line 1667 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__SimpleCallId_10,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_13,
#line 1667 "typecheck.m"
  MR_Word * check_hlds__typecheck__PredId_14,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31,
#line 1667 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_33,
#line 1667 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_34)
#line 1667 "typecheck.m"
{
#line 1673 "typecheck.m"
  {
#line 1673 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1673 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_17;
#line 1673 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_18;
#line 1673 "typecheck.m"
    MR_Word check_hlds__typecheck__PorF_19;
#line 1673 "typecheck.m"
    MR_Word check_hlds__typecheck__SymName_20;
#line 1673 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity_21;
#line 1673 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFullyQualified_22;
#line 1673 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIds_23;

#line 1675 "typecheck.m"
    {
#line 1675 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__ModuleInfo_17);
    }
#line 1676 "typecheck.m"
    {
#line 1676 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__PredicateTable_18);
    }
#line 1677 "typecheck.m"
    check_hlds__typecheck__PorF_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 0)));
#line 1677 "typecheck.m"
    check_hlds__typecheck__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 1)));
#line 1677 "typecheck.m"
    check_hlds__typecheck__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 2)));
#line 1678 "typecheck.m"
    {
#line 1678 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__IsFullyQualified_22);
    }
#line 1679 "typecheck.m"
    {
#line 1679 "typecheck.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(check_hlds__typecheck__PredicateTable_18, check_hlds__typecheck__IsFullyQualified_22, check_hlds__typecheck__PorF_19, check_hlds__typecheck__SymName_20, check_hlds__typecheck__Arity_21, &check_hlds__typecheck__PredIds_23);
    }
#line 1687 "typecheck.m"
    if ((check_hlds__typecheck__PredIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1682 "typecheck.m"
      {
#line 1682 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_24;
#line 1682 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_25;

#line 1683 "typecheck.m"
        {
#line 1683 "typecheck.m"
          *check_hlds__typecheck__PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 1684 "typecheck.m"
        {
#line 1684 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__ClauseContext_24);
        }
#line 1685 "typecheck.m"
        {
#line 1685 "typecheck.m"
          check_hlds__typecheck__Spec_25 = check_hlds__typecheck_errors__report_pred_call_error_3_f_0(check_hlds__typecheck__ClauseContext_24, check_hlds__typecheck__Context_11, check_hlds__typecheck__SimpleCallId_10);
        }
#line 1686 "typecheck.m"
        {
#line 1686 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_25, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, check_hlds__typecheck__STATE_VARIABLE_Info_34);
        }
#line 1682 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31;
#line 1682 "typecheck.m"
      }
#line 1687 "typecheck.m"
    else
#line 1688 "typecheck.m"
      {
#line 1688 "typecheck.m"
        MR_Word check_hlds__typecheck__HeadPredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 0)));
#line 1688 "typecheck.m"
        MR_Word check_hlds__typecheck__TailPredIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 1)));
#line 1688 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37;
#line 1688 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_38_38;

#line 1698 "typecheck.m"
        if ((check_hlds__typecheck__TailPredIds_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1690 "typecheck.m"
          {
#line 1690 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorKind_28;

#line 1694 "typecheck.m"
            *check_hlds__typecheck__PredId_14 = check_hlds__typecheck__HeadPredId_26;
#line 1695 "typecheck.m"
            {
#line 1695 "typecheck.m"
              check_hlds__typecheck__ArgVectorKind_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorKind_28, 0) = ((MR_Box) (*check_hlds__typecheck__PredId_14));
#line 1695 "typecheck.m"
            }
#line 1696 "typecheck.m"
            {
#line 1696 "typecheck.m"
              check_hlds__typecheck__typecheck_call_pred_id_9_p_0(check_hlds__typecheck__ArgVectorKind_28, check_hlds__typecheck__Context_11, check_hlds__typecheck__GoalId_12, *check_hlds__typecheck__PredId_14, check_hlds__typecheck__Args_13, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
            }
#line 1690 "typecheck.m"
          }
#line 1698 "typecheck.m"
        else
#line 1699 "typecheck.m"
          {
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__Symbol_52;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__ModuleInfo_53;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassTable_54;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__PredicateTable_55;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__Preds_56;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssignSet_57;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__VarVectorKind_58;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_59;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__V_61_61;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_71;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_72;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_78;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_79;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_80;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__PredArgTypes_81;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_82;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__TVarSet_83;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__PredConstraints_84;
#line 1699 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87;
#line 1789 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_78;

#line 1762 "typecheck.m"
            {
#line 1762 "typecheck.m"
              check_hlds__typecheck__Symbol_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1762 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_52, 0) = ((MR_Box) (check_hlds__typecheck__SimpleCallId_10));
#line 1762 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_52, 1) = ((MR_Box) (check_hlds__typecheck__PredIds_23));
#line 1762 "typecheck.m"
            }
#line 1763 "typecheck.m"
            {
#line 1763 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_52, check_hlds__typecheck__Context_11, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__STATE_VARIABLE_Info_27_59);
            }
#line 1768 "typecheck.m"
            {
#line 1768 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_27_59, &check_hlds__typecheck__ModuleInfo_53);
            }
#line 1769 "typecheck.m"
            {
#line 1769 "typecheck.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_53, &check_hlds__typecheck__ClassTable_54);
            }
#line 1770 "typecheck.m"
            {
#line 1770 "typecheck.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_53, &check_hlds__typecheck__PredicateTable_55);
            }
#line 1771 "typecheck.m"
            {
#line 1771 "typecheck.m"
              hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_55, &check_hlds__typecheck__Preds_56);
            }
#line 1787 "typecheck.m"
            check_hlds__typecheck__PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 0)));
#line 1787 "typecheck.m"
            check_hlds__typecheck__PredIds_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 1)));
#line 1789 "typecheck.m"
            {
#line 1789 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_56, ((MR_Box) (check_hlds__typecheck__PredId_71)), &check_hlds__typecheck__conv0_PredInfo_78);
            }
#line 1789 "typecheck.m"
            check_hlds__typecheck__PredInfo_78 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_78);
#line 1790 "typecheck.m"
            {
#line 1790 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__PredTypeVarSet_79, &check_hlds__typecheck__PredExistQVars_80, &check_hlds__typecheck__PredArgTypes_81);
            }
#line 1792 "typecheck.m"
            {
#line 1792 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__PredClassContext_82);
            }
#line 1793 "typecheck.m"
            {
#line 1793 "typecheck.m"
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__TVarSet_83);
            }
#line 1794 "typecheck.m"
            {
#line 1794 "typecheck.m"
              hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_54, check_hlds__typecheck__TVarSet_83, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__PredClassContext_82, &check_hlds__typecheck__PredConstraints_84);
            }
#line 1796 "typecheck.m"
            {
#line 1796 "typecheck.m"
              check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, check_hlds__typecheck__PredTypeVarSet_79, check_hlds__typecheck__PredExistQVars_80, check_hlds__typecheck__PredArgTypes_81, check_hlds__typecheck__PredConstraints_84, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87);
            }
#line 1798 "typecheck.m"
            {
#line 1798 "typecheck.m"
              check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(check_hlds__typecheck__PredIds_72, check_hlds__typecheck__Preds_56, check_hlds__typecheck__ClassTable_54, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87, &check_hlds__typecheck__ArgsTypeAssignSet_57);
            }
#line 1777 "typecheck.m"
            {
#line 1777 "typecheck.m"
              check_hlds__typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1777 "typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck__SimpleCallId_10));
#line 1777 "typecheck.m"
            }
#line 1777 "typecheck.m"
            {
#line 1777 "typecheck.m"
              check_hlds__typecheck__VarVectorKind_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1777 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__VarVectorKind_58, 0) = ((MR_Box) (check_hlds__typecheck__V_61_61));
#line 1777 "typecheck.m"
            }
#line 1778 "typecheck.m"
            {
#line 1778 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_58, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__Args_13, check_hlds__typecheck__ArgsTypeAssignSet_57, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_Info_27_59, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
            }
#line 1709 "typecheck.m"
            {
#line 1709 "typecheck.m"
              *check_hlds__typecheck__PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 1699 "typecheck.m"
          }
#line 1716 "typecheck.m"
        {
#line 1716 "typecheck.m"
          check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_11, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32, check_hlds__typecheck__STATE_VARIABLE_Info_38_38, check_hlds__typecheck__STATE_VARIABLE_Info_34);
#line 1716 "typecheck.m"
          return;
        }
#line 1688 "typecheck.m"
      }
#line 1673 "typecheck.m"
  }
#line 1667 "typecheck.m"
}

#line 2020 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0_1(
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2020 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2020 "typecheck.m"
{
#line 2020 "typecheck.m"
  {
#line 2020 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2020 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__3_3;

#line 2020 "typecheck.m"
    {
#line 2020 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_HeadVar__3_3);
    }
#line 2020 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__3_3));
#line 2020 "typecheck.m"
  }
#line 2020 "typecheck.m"
}

#line 1640 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0(
#line 1640 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_8,
#line 1640 "typecheck.m"
  MR_String check_hlds__typecheck__EventName_9,
#line 1640 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_10,
#line 1640 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1640 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1640 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1640 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 1640 "typecheck.m"
{
#line 1644 "typecheck.m"
  {
#line 1644 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1644 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_13;
#line 1644 "typecheck.m"
    MR_Word check_hlds__typecheck__EventSet_14;
#line 1644 "typecheck.m"
    MR_Word check_hlds__typecheck__EventSpecMap_15;
#line 1647 "typecheck.m"
    MR_String check_hlds__typecheck__V_30_30;
#line 1660 "typecheck.m"
    MR_Word check_hlds__typecheck__EventArgTypes_16;

#line 1645 "typecheck.m"
    {
#line 1645 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ModuleInfo_13);
    }
#line 1646 "typecheck.m"
    {
#line 1646 "typecheck.m"
      hlds__hlds_module__module_info_get_event_set_2_p_0(check_hlds__typecheck__ModuleInfo_13, &check_hlds__typecheck__EventSet_14);
    }
#line 1647 "typecheck.m"
    check_hlds__typecheck__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_14, (MR_Integer) 0)));
#line 1647 "typecheck.m"
    check_hlds__typecheck__EventSpecMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_14, (MR_Integer) 1)));
#line 1648 "typecheck.m"
    {
#line 1648 "typecheck.m"
      check_hlds__typecheck__succeeded = parse_tree__prog_event__event_arg_types_3_p_0(check_hlds__typecheck__EventSpecMap_15, check_hlds__typecheck__EventName_9, &check_hlds__typecheck__EventArgTypes_16);
    }
#line 1660 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1649 "typecheck.m"
      {
#line 1649 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumArgs_17;
#line 1649 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumEventArgTypes_18;

#line 1649 "typecheck.m"
        {
#line 1649 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_10, &check_hlds__typecheck__NumArgs_17);
        }
#line 1650 "typecheck.m"
        {
#line 1650 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__EventArgTypes_16, &check_hlds__typecheck__NumEventArgTypes_18);
        }
#line 1651 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumArgs_17 == check_hlds__typecheck__NumEventArgTypes_18);
#line 1655 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1652 "typecheck.m"
          {
#line 1652 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorKind_19;
#line 1652 "typecheck.m"
            MR_Word check_hlds__typecheck__Specs_43;
#line 1652 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_44;
#line 2019 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorTypeErrors_45;
#line 2012 "typecheck.m"
            MR_Word check_hlds__typecheck__V_56_56;
#line 2013 "typecheck.m"
            MR_Word check_hlds__typecheck__V_46_46;
#line 2013 "typecheck.m"
            MR_Word check_hlds__typecheck__V_47_47;
#line 2013 "typecheck.m"
            MR_Word check_hlds__typecheck__V_48_48;

#line 1652 "typecheck.m"
            {
#line 1652 "typecheck.m"
              check_hlds__typecheck__ArgVectorKind_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1652 "typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1652 "typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_19, 1) = ((MR_Box) (check_hlds__typecheck__EventName_9));
#line 1652 "typecheck.m"
            }
#line 2008 "typecheck.m"
            {
#line 2008 "typecheck.m"
              check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__Context_8, check_hlds__typecheck__ArgVectorKind_19, (MR_Integer) 1, check_hlds__typecheck__Args_10, check_hlds__typecheck__EventArgTypes_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_43, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[1]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_44);
            }
#line 2012 "typecheck.m"
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_44)) == (MR_mktag((MR_Integer) 1)));
#line 2012 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2012 "typecheck.m"
              {
#line 2012 "typecheck.m"
                check_hlds__typecheck__ArgVectorTypeErrors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_44, (MR_Integer) 0)));
#line 2013 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_45)) == (MR_mktag((MR_Integer) 1)));
#line 2013 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2013 "typecheck.m"
                  {
#line 2013 "typecheck.m"
                    check_hlds__typecheck__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_45, (MR_Integer) 0)));
#line 2013 "typecheck.m"
                    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_45, (MR_Integer) 1)));
#line 2013 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 2013 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2013 "typecheck.m"
                      {
#line 2013 "typecheck.m"
                        check_hlds__typecheck__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_56_56, (MR_Integer) 0)));
#line 2013 "typecheck.m"
                        check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_56_56, (MR_Integer) 1)));
#line 2013 "typecheck.m"
                      }
#line 2013 "typecheck.m"
                  }
#line 2012 "typecheck.m"
              }
#line 2019 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2015 "typecheck.m"
              {
#line 2015 "typecheck.m"
                MR_Word check_hlds__typecheck__ClauseContext_49;
#line 2015 "typecheck.m"
                MR_Word check_hlds__typecheck__AllArgsSpec_50;

#line 2015 "typecheck.m"
                {
#line 2015 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ClauseContext_49);
                }
#line 2016 "typecheck.m"
                {
#line 2016 "typecheck.m"
                  check_hlds__typecheck__AllArgsSpec_50 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_49, check_hlds__typecheck__Context_8, check_hlds__typecheck__ArgVectorKind_19, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, check_hlds__typecheck__ArgVectorTypeErrors_45);
                }
#line 2018 "typecheck.m"
                {
#line 2018 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_50, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
#line 2018 "typecheck.m"
                  return;
                }
#line 2015 "typecheck.m"
              }
#line 2019 "typecheck.m"
            else
#line 2020 "typecheck.m"
              {
#line 2020 "typecheck.m"
                MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24;

#line 2020 "typecheck.m"
                {
#line 2020 "typecheck.m"
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[3], check_hlds__typecheck__Specs_43, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_23)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24);
                }
#line 2020 "typecheck.m"
                *check_hlds__typecheck__STATE_VARIABLE_Info_24 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24);
#line 2020 "typecheck.m"
              }
#line 1652 "typecheck.m"
          }
#line 1655 "typecheck.m"
        else
#line 1657 "typecheck.m"
          {
#line 1657 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_20;

#line 1656 "typecheck.m"
            {
#line 1656 "typecheck.m"
              check_hlds__typecheck__Spec_20 = check_hlds__typecheck_errors__report_event_args_mismatch_4_f_0(check_hlds__typecheck__Context_8, check_hlds__typecheck__EventName_9, check_hlds__typecheck__EventArgTypes_16, check_hlds__typecheck__Args_10);
            }
#line 1658 "typecheck.m"
            {
#line 1658 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_20, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
            }
#line 1657 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
#line 1657 "typecheck.m"
          }
#line 1649 "typecheck.m"
      }
#line 1660 "typecheck.m"
    else
#line 1661 "typecheck.m"
      {
#line 1661 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_29;

#line 1661 "typecheck.m"
        {
#line 1661 "typecheck.m"
          check_hlds__typecheck__Spec_29 = check_hlds__typecheck_errors__report_unknown_event_call_error_2_f_0(check_hlds__typecheck__Context_8, check_hlds__typecheck__EventName_9);
        }
#line 1662 "typecheck.m"
        {
#line 1662 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
        }
#line 1661 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
#line 1661 "typecheck.m"
      }
#line 1644 "typecheck.m"
  }
#line 1640 "typecheck.m"
}

#line 1578 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_9_p_0(
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__GenericCallId_10,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__PredVar_12,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_13,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1578 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1578 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1578 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27)
#line 1578 "typecheck.m"
{
#line 1584 "typecheck.m"
  {
#line 1584 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_45;
#line 1584 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity_17;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_18;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__PredVarType_19;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_20;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__VarVectorKind_21;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_22;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__V_29_29;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_41;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_42;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__V_43_43;
#line 1584 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgsTypeAssignSet_60;

#line 1585 "typecheck.m"
    {
#line 1585 "typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_14, &check_hlds__typecheck__Arity_17);
    }
#line 1586 "typecheck.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 12590 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_17_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1609 "typecheck.m"
    {
#line 1609 "typecheck.m"
      mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_17_45, &check_hlds__typecheck__TypeVarSet0_41);
    }
#line 1610 "typecheck.m"
    {
#line 1610 "typecheck.m"
      mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_17_45, check_hlds__typecheck__Arity_17, &check_hlds__typecheck__ArgTypeVars_42, check_hlds__typecheck__TypeVarSet0_41, &check_hlds__typecheck__TypeVarSet_18);
    }
#line 1612 "typecheck.m"
    {
#line 1612 "typecheck.m"
      check_hlds__typecheck__V_43_43 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 1612 "typecheck.m"
    {
#line 1612 "typecheck.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_43_43, check_hlds__typecheck__ArgTypeVars_42, &check_hlds__typecheck__ArgTypes_20);
    }
#line 1613 "typecheck.m"
    {
#line 1613 "typecheck.m"
      parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_13, (MR_Integer) 0, check_hlds__typecheck__ArgTypes_20, &check_hlds__typecheck__PredVarType_19);
    }
#line 1588 "typecheck.m"
    {
#line 1588 "typecheck.m"
      check_hlds__typecheck__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1588 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1588 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_29_29, 1) = ((MR_Box) (check_hlds__typecheck__GenericCallId_10));
#line 1588 "typecheck.m"
    }
#line 1588 "typecheck.m"
    {
#line 1588 "typecheck.m"
      check_hlds__typecheck__VarVectorKind_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1588 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__VarVectorKind_21, 0) = ((MR_Box) (check_hlds__typecheck__V_29_29));
#line 1588 "typecheck.m"
    }
#line 1591 "typecheck.m"
    {
#line 1591 "typecheck.m"
      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_22);
    }
#line 1594 "typecheck.m"
    {
#line 1594 "typecheck.m"
      check_hlds__typecheck__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1594 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_30_30, 0) = ((MR_Box) (check_hlds__typecheck__PredVar_12));
#line 1594 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_30_30, 1) = ((MR_Box) (check_hlds__typecheck__Args_14));
#line 1594 "typecheck.m"
    }
#line 1594 "typecheck.m"
    {
#line 1594 "typecheck.m"
      check_hlds__typecheck__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1594 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_31_31, 0) = ((MR_Box) (check_hlds__typecheck__PredVarType_19));
#line 1594 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_31_31, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_20));
#line 1594 "typecheck.m"
    }
#line 1820 "typecheck.m"
    {
#line 1820 "typecheck.m"
      check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24, check_hlds__typecheck__TypeVarSet_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__V_31_31, check_hlds__typecheck__EmptyConstraints_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_60);
    }
#line 1822 "typecheck.m"
    {
#line 1822 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_21, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__V_30_30, check_hlds__typecheck__ArgsTypeAssignSet_60, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__STATE_VARIABLE_Info_27);
#line 1822 "typecheck.m"
      return;
    }
#line 1584 "typecheck.m"
  }
#line 1578 "typecheck.m"
}

#line 1552 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0(
#line 1552 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1552 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1552 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1552 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22,
#line 1552 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23,
#line 1552 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_24,
#line 1552 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_25)
#line 1552 "typecheck.m"
{
#line 1559 "typecheck.m"
  {
#line 1559 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1559 "typecheck.m"
    if ((check_hlds__typecheck__Vars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1559 "typecheck.m"
      {
#line 1559 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22;
#line 1559 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_25 = check_hlds__typecheck__STATE_VARIABLE_Info_0_24;
#line 1559 "typecheck.m"
      }
#line 1559 "typecheck.m"
    else
#line 1561 "typecheck.m"
      {
#line 1561 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1561 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet0_15;
#line 1561 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVar_16;
#line 1561 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet_17;
#line 1561 "typecheck.m"
        MR_Word check_hlds__typecheck__Type_18;
#line 1561 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumVars_19;
#line 1561 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_20;
#line 1561 "typecheck.m"
        MR_Word check_hlds__typecheck__EmptyConstraints_21;
#line 1561 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_45;

#line 1565 "typecheck.m"
        {
#line 1565 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVarSet0_15);
        }
#line 1566 "typecheck.m"
        {
#line 1566 "typecheck.m"
          mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
        }
#line 1567 "typecheck.m"
        {
#line 1567 "typecheck.m"
          check_hlds__typecheck__Type_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1567 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
#line 1567 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1567 "typecheck.m"
        }
#line 1568 "typecheck.m"
        {
#line 1568 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_10, &check_hlds__typecheck__NumVars_19);
        }
#line 1569 "typecheck.m"
        {
#line 1569 "typecheck.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__NumVars_19, ((MR_Box) (check_hlds__typecheck__Type_18)), &check_hlds__typecheck__Types_20);
        }
#line 1570 "typecheck.m"
        {
#line 1570 "typecheck.m"
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_21);
        }
#line 1820 "typecheck.m"
        {
#line 1820 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22, check_hlds__typecheck__TypeVarSet_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_20, check_hlds__typecheck__EmptyConstraints_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_45);
        }
#line 1822 "typecheck.m"
        {
#line 1822 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_8, (MR_Integer) 1, check_hlds__typecheck__Context_9, check_hlds__typecheck__Vars_10, check_hlds__typecheck__ArgsTypeAssignSet_45, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23, check_hlds__typecheck__STATE_VARIABLE_Info_0_24, check_hlds__typecheck__STATE_VARIABLE_Info_25);
#line 1822 "typecheck.m"
          return;
        }
#line 1561 "typecheck.m"
      }
#line 1559 "typecheck.m"
  }
#line 1552 "typecheck.m"
}

#line 1528 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_7_p_0(
#line 1528 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1528 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1528 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1528 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1528 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1528 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1528 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 1528 "typecheck.m"
{
#line 1534 "typecheck.m"
  {
#line 1534 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1534 "typecheck.m"
    if ((check_hlds__typecheck__Vars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1534 "typecheck.m"
      {
#line 1534 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
#line 1534 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 1534 "typecheck.m"
      }
#line 1534 "typecheck.m"
    else
#line 1536 "typecheck.m"
      {
#line 1536 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_30_30;
#line 1536 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumVars_15;
#line 1536 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet0_16;
#line 1536 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVars_17;
#line 1536 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet_18;
#line 1536 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_19;
#line 1536 "typecheck.m"
        MR_Word check_hlds__typecheck__EmptyConstraints_20;
#line 1536 "typecheck.m"
        MR_Word check_hlds__typecheck__V_25_25;
#line 1536 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_45;

#line 1540 "typecheck.m"
        {
#line 1540 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_10, &check_hlds__typecheck__NumVars_15);
        }
#line 12850 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1541 "typecheck.m"
        {
#line 1541 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVarSet0_16);
        }
#line 1542 "typecheck.m"
        {
#line 1542 "typecheck.m"
          mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, check_hlds__typecheck__NumVars_15, &check_hlds__typecheck__TypeVars_17, check_hlds__typecheck__TypeVarSet0_16, &check_hlds__typecheck__TypeVarSet_18);
        }
#line 1543 "typecheck.m"
        {
#line 1543 "typecheck.m"
          check_hlds__typecheck__V_25_25 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 1543 "typecheck.m"
        {
#line 1543 "typecheck.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_25_25, check_hlds__typecheck__TypeVars_17, &check_hlds__typecheck__Types_19);
        }
#line 1544 "typecheck.m"
        {
#line 1544 "typecheck.m"
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_20);
        }
#line 1820 "typecheck.m"
        {
#line 1820 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21, check_hlds__typecheck__TypeVarSet_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_19, check_hlds__typecheck__EmptyConstraints_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_45);
        }
#line 1822 "typecheck.m"
        {
#line 1822 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_8, (MR_Integer) 1, check_hlds__typecheck__Context_9, check_hlds__typecheck__Vars_10, check_hlds__typecheck__ArgsTypeAssignSet_45, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
#line 1822 "typecheck.m"
          return;
        }
#line 1536 "typecheck.m"
      }
#line 1534 "typecheck.m"
  }
#line 1528 "typecheck.m"
}

#line 1514 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_7_p_0(
#line 1514 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1514 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 1514 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1514 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1514 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
#line 1514 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
#line 1514 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7)
#line 1514 "typecheck.m"
{
#line 1518 "typecheck.m"
  {
#line 1518 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1518 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1518 "typecheck.m"
      {
#line 1518 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1518 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_7 = check_hlds__typecheck__STATE_VARIABLE_Info_0_6;
#line 1518 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 1518 "typecheck.m"
      }
#line 1518 "typecheck.m"
    else
#line 1520 "typecheck.m"
      {
#line 1520 "typecheck.m"
        MR_Word check_hlds__typecheck__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1520 "typecheck.m"
        MR_Word check_hlds__typecheck__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1520 "typecheck.m"
        MR_Word check_hlds__typecheck__Goal_17;
#line 1520 "typecheck.m"
        MR_Word check_hlds__typecheck__Goals_18;
#line 1520 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26;
#line 1520 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_27;

#line 1521 "typecheck.m"
        {
#line 1521 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Goal0_15, &check_hlds__typecheck__Goal_17, check_hlds__typecheck__Context_3, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26, check_hlds__typecheck__STATE_VARIABLE_Info_0_6, &check_hlds__typecheck__STATE_VARIABLE_Info_27_27);
        }
#line 1522 "typecheck.m"
        {
#line 1522 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_list_7_p_0(check_hlds__typecheck__Goals0_16, &check_hlds__typecheck__Goals_18, check_hlds__typecheck__Context_3, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5, check_hlds__typecheck__STATE_VARIABLE_Info_27_27, check_hlds__typecheck__STATE_VARIABLE_Info_7);
        }
#line 1519 "typecheck.m"
        {
#line 1519 "typecheck.m"
          MR_Word base;
#line 1519 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1519 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 1519 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Goal_17));
#line 1519 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Goals_18));
#line 1519 "typecheck.m"
        }
#line 1520 "typecheck.m"
      }
#line 1518 "typecheck.m"
  }
#line 1514 "typecheck.m"
}

#line 1505 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
#line 1505 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1)
#line 1505 "typecheck.m"
{
#line 1508 "typecheck.m"
  {
#line 1508 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1508 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVar__2_2;

#line 1508 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1508 "typecheck.m"
      check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1508 "typecheck.m"
    else
#line 1509 "typecheck.m"
      {
#line 1509 "typecheck.m"
        MR_Word check_hlds__typecheck__I_3;
#line 1509 "typecheck.m"
        MR_Word check_hlds__typecheck__O_4;
#line 1509 "typecheck.m"
        MR_Word check_hlds__typecheck__Interfaces_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1509 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1509 "typecheck.m"
        MR_Word check_hlds__typecheck__V_7_7;
#line 1509 "typecheck.m"
        MR_Word check_hlds__typecheck__V_8_8;

#line 1509 "typecheck.m"
        check_hlds__typecheck__I_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 0)));
#line 1509 "typecheck.m"
        check_hlds__typecheck__O_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 1)));
#line 1510 "typecheck.m"
        {
#line 1510 "typecheck.m"
          check_hlds__typecheck__V_8_8 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(check_hlds__typecheck__Interfaces_5);
        }
#line 1510 "typecheck.m"
        {
#line 1510 "typecheck.m"
          check_hlds__typecheck__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1510 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck__O_4));
#line 1510 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck__V_8_8));
#line 1510 "typecheck.m"
        }
#line 1510 "typecheck.m"
        {
#line 1510 "typecheck.m"
          check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1510 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck__I_3));
#line 1510 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck__V_7_7));
#line 1510 "typecheck.m"
        }
#line 1509 "typecheck.m"
      }
#line 1508 "typecheck.m"
    return check_hlds__typecheck__HeadVar__2_2;
#line 1508 "typecheck.m"
  }
#line 1505 "typecheck.m"
}

#line 1473 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
#line 1473 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg)
#line 1473 "typecheck.m"
{
#line 1473 "typecheck.m"
  {
#line 1473 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1473 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 1473 "typecheck.m"
    {
#line 1473 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1473__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))));
    }
#line 1473 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 1473 "typecheck.m"
  }
#line 1473 "typecheck.m"
}

#line 1471 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_2(
#line 1471 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1471 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 1471 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 1471 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3,
#line 1471 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_4,
#line 1471 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_5)
#line 1471 "typecheck.m"
{
#line 1471 "typecheck.m"
  {
#line 1471 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 1471 "typecheck.m"
    MR_Word check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12;
#line 1471 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14;

#line 1471 "typecheck.m"
    {
#line 1471 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12, ((MR_Word) check_hlds__typecheck__wrapper_arg_4), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14);
    }
#line 1471 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12));
#line 1471 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14));
#line 1471 "typecheck.m"
  }
#line 1471 "typecheck.m"
}

#line 1420 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_1(
#line 1420 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1420 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 1420 "typecheck.m"
{
#line 1420 "typecheck.m"
  {
#line 1420 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 1420 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 1420 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__2_2;

#line 1420 "typecheck.m"
    {
#line 1420 "typecheck.m"
      check_hlds__typecheck__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 1420 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__2_2));
#line 1420 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 1420 "typecheck.m"
  }
#line 1420 "typecheck.m"
}

#line 1275 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0(
#line 1275 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalExpr0_8,
#line 1275 "typecheck.m"
  MR_Word * check_hlds__typecheck__GoalExpr_9,
#line 1275 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalInfo_10,
#line 1275 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115,
#line 1275 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116,
#line 1275 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_117,
#line 1275 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_118)
#line 1275 "typecheck.m"
{
#line 1279 "typecheck.m"
  {
#line 1279 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1279 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_16;
#line 1280 "typecheck.m"
    MR_Word check_hlds__typecheck__ClauseContext_13;

#line 1280 "typecheck.m"
    {
#line 1280 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__ClauseContext_13);
    }
#line 1283 "typecheck.m"
    {
#line 1283 "typecheck.m"
      check_hlds__typecheck__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo_10);
    }
#line 1291 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) == (MR_mktag((MR_Integer) 0))))
#line 1316 "typecheck.m"
      {
#line 1316 "typecheck.m"
        MR_Word check_hlds__typecheck__SubGoal0_28 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__GoalExpr0_8), (MR_Integer) 0);
#line 1316 "typecheck.m"
        MR_Word check_hlds__typecheck__SubGoal_29;

#line 1320 "typecheck.m"
        {
#line 1320 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_28, &check_hlds__typecheck__SubGoal_29, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
        }
#line 1321 "typecheck.m"
        *check_hlds__typecheck__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__SubGoal_29);
#line 1316 "typecheck.m"
      }
#line 1291 "typecheck.m"
    else
#line 1291 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) == (MR_mktag((MR_Integer) 2))))
#line 1359 "typecheck.m"
        {
#line 1359 "typecheck.m"
          MR_Integer check_hlds__typecheck__ProcId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1359 "typecheck.m"
          MR_Word check_hlds__typecheck__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1359 "typecheck.m"
          MR_Word check_hlds__typecheck__BI_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1359 "typecheck.m"
          MR_Word check_hlds__typecheck__UC_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1359 "typecheck.m"
          MR_Word check_hlds__typecheck__Name_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));
#line 1359 "typecheck.m"
          MR_Integer check_hlds__typecheck__Arity_56;
#line 1359 "typecheck.m"
          MR_Word check_hlds__typecheck__SimpleCallId_57;
#line 1359 "typecheck.m"
          MR_Word check_hlds__typecheck__GoalId_58;
#line 1359 "typecheck.m"
          MR_Word check_hlds__typecheck__PredId_59;
#line 1359 "typecheck.m"
          MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)));

#line 1363 "typecheck.m"
          {
#line 1363 "typecheck.m"
            mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_52, &check_hlds__typecheck__Arity_56);
          }
#line 1364 "typecheck.m"
          {
#line 1364 "typecheck.m"
            check_hlds__typecheck__SimpleCallId_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1364 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_57, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1364 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_57, 1) = ((MR_Box) (check_hlds__typecheck__Name_55));
#line 1364 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_57, 2) = ((MR_Box) (check_hlds__typecheck__Arity_56));
#line 1364 "typecheck.m"
          }
#line 1365 "typecheck.m"
          {
#line 1365 "typecheck.m"
            check_hlds__typecheck__GoalId_58 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
          }
#line 1366 "typecheck.m"
          {
#line 1366 "typecheck.m"
            check_hlds__typecheck__typecheck_call_pred_name_9_p_0(check_hlds__typecheck__SimpleCallId_57, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_58, check_hlds__typecheck__Args_52, &check_hlds__typecheck__PredId_59, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
          }
#line 1368 "typecheck.m"
          {
#line 1368 "typecheck.m"
            MR_Word base;
#line 1368 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "typecheck.m"
            *check_hlds__typecheck__GoalExpr_9 = base;
#line 1368 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__PredId_59));
#line 1368 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__typecheck__ProcId_51));
#line 1368 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__typecheck__Args_52));
#line 1368 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__typecheck__BI_53));
#line 1368 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__typecheck__UC_54));
#line 1368 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__typecheck__Name_55));
#line 1368 "typecheck.m"
          }
#line 1359 "typecheck.m"
        }
#line 1291 "typecheck.m"
      else
#line 1291 "typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) == (MR_mktag((MR_Integer) 1))))
#line 1400 "typecheck.m"
          {
#line 1400 "typecheck.m"
            MR_Word check_hlds__typecheck__LHS_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)));
#line 1400 "typecheck.m"
            MR_Word check_hlds__typecheck__RHS0_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1400 "typecheck.m"
            MR_Word check_hlds__typecheck__UnifyMode_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1400 "typecheck.m"
            MR_Word check_hlds__typecheck__Unification_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1400 "typecheck.m"
            MR_Word check_hlds__typecheck__UnifyContext_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1400 "typecheck.m"
            MR_Word check_hlds__typecheck__RHS_80;
#line 1400 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalId_250;

#line 1404 "typecheck.m"
            {
#line 1404 "typecheck.m"
              check_hlds__typecheck__GoalId_250 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
            }
#line 1405 "typecheck.m"
            {
#line 1405 "typecheck.m"
              check_hlds__typecheck__typecheck_unification_10_p_0(check_hlds__typecheck__UnifyContext_79, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_250, check_hlds__typecheck__LHS_75, check_hlds__typecheck__RHS0_76, &check_hlds__typecheck__RHS_80, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
            }
#line 1407 "typecheck.m"
            {
#line 1407 "typecheck.m"
              MR_Word base;
#line 1407 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1407 "typecheck.m"
              *check_hlds__typecheck__GoalExpr_9 = base;
#line 1407 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__LHS_75));
#line 1407 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__RHS_80));
#line 1407 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__typecheck__UnifyMode_77));
#line 1407 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__typecheck__Unification_78));
#line 1407 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__typecheck__UnifyContext_79));
#line 1407 "typecheck.m"
            }
#line 1400 "typecheck.m"
          }
#line 1291 "typecheck.m"
        else
#line 1291 "typecheck.m"
          if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1413 "typecheck.m"
            {
#line 1413 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgVectorKind_89;
#line 1413 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgVars_90;
#line 1413 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_169_169;
#line 1413 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_170_170;
#line 1413 "typecheck.m"
              MR_Word check_hlds__typecheck__Args_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1413 "typecheck.m"
              MR_Word check_hlds__typecheck__GoalId_252;
#line 1413 "typecheck.m"
              MR_Word check_hlds__typecheck__PredId_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1413 "typecheck.m"
              MR_Word check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1413 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1413 "typecheck.m"
              MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));
#line 1413 "typecheck.m"
              MR_Word check_hlds__typecheck__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 6)));
#line 1413 "typecheck.m"
              MR_Word check_hlds__typecheck__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 7)));

#line 1419 "typecheck.m"
              {
#line 1419 "typecheck.m"
                check_hlds__typecheck__ArgVectorKind_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1419 "typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_89, 1) = ((MR_Box) (check_hlds__typecheck__PredId_253));
#line 1419 "typecheck.m"
              }
#line 1420 "typecheck.m"
              {
#line 1420 "typecheck.m"
                check_hlds__typecheck__ArgVars_90 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_scalar_common_2[2], check_hlds__typecheck__Args_251);
              }
#line 1421 "typecheck.m"
              {
#line 1421 "typecheck.m"
                check_hlds__typecheck__GoalId_252 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
              }
#line 1422 "typecheck.m"
              {
#line 1422 "typecheck.m"
                check_hlds__typecheck__typecheck_call_pred_id_9_p_0(check_hlds__typecheck__ArgVectorKind_89, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_252, check_hlds__typecheck__PredId_253, check_hlds__typecheck__ArgVars_90, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_169_169, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_170_170);
              }
#line 1424 "typecheck.m"
              {
#line 1424 "typecheck.m"
                check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_169_169, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_170_170, check_hlds__typecheck__STATE_VARIABLE_Info_118);
              }
#line 1425 "typecheck.m"
              *check_hlds__typecheck__GoalExpr_9 = check_hlds__typecheck__GoalExpr0_8;
#line 1413 "typecheck.m"
            }
#line 1291 "typecheck.m"
          else
#line 1291 "typecheck.m"
            if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1285 "typecheck.m"
              {
#line 1285 "typecheck.m"
                MR_Word check_hlds__typecheck__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1285 "typecheck.m"
                MR_Word check_hlds__typecheck__List0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1285 "typecheck.m"
                MR_Word check_hlds__typecheck__List_20;

#line 1289 "typecheck.m"
                {
#line 1289 "typecheck.m"
                  check_hlds__typecheck__typecheck_goal_list_7_p_0(check_hlds__typecheck__List0_18, &check_hlds__typecheck__List_20, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                }
#line 1290 "typecheck.m"
                {
#line 1290 "typecheck.m"
                  MR_Word base;
#line 1290 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "typecheck.m"
                  *check_hlds__typecheck__GoalExpr_9 = base;
#line 1290 "typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1290 "typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ConjType_17));
#line 1290 "typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__List_20));
#line 1290 "typecheck.m"
                }
#line 1285 "typecheck.m"
              }
#line 1291 "typecheck.m"
            else
#line 1291 "typecheck.m"
              if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1292 "typecheck.m"
                {
#line 1292 "typecheck.m"
                  MR_Word check_hlds__typecheck__List0_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1292 "typecheck.m"
                  MR_Word check_hlds__typecheck__List_243;

#line 1296 "typecheck.m"
                  {
#line 1296 "typecheck.m"
                    check_hlds__typecheck__typecheck_goal_list_7_p_0(check_hlds__typecheck__List0_242, &check_hlds__typecheck__List_243, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                  }
#line 1297 "typecheck.m"
                  {
#line 1297 "typecheck.m"
                    MR_Word base;
#line 1297 "typecheck.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1297 "typecheck.m"
                    *check_hlds__typecheck__GoalExpr_9 = base;
#line 1297 "typecheck.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1297 "typecheck.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__List_243));
#line 1297 "typecheck.m"
                  }
#line 1292 "typecheck.m"
                }
#line 1291 "typecheck.m"
              else
#line 1291 "typecheck.m"
                if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1371 "typecheck.m"
                  {
#line 1371 "typecheck.m"
                    MR_Word check_hlds__typecheck__GenericCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1371 "typecheck.m"
                    MR_Word check_hlds__typecheck__Args_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1370 "typecheck.m"
                    MR_Word check_hlds__typecheck___Modes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1370 "typecheck.m"
                    MR_Word check_hlds__typecheck___MaybeArgRegs_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1370 "typecheck.m"
                    MR_Word check_hlds__typecheck___Detism_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));

#line 1382 "typecheck.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck__GenericCall_60)) == (MR_mktag((MR_Integer) 3))))
#line 1394 "typecheck.m"
                      {
#line 1394 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115;
#line 1394 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_0_117;
#line 1394 "typecheck.m"
                      }
#line 1382 "typecheck.m"
                    else
#line 1382 "typecheck.m"
                      if (((MR_tag((MR_Word) check_hlds__typecheck__GenericCall_60)) == (MR_mktag((MR_Integer) 1))))
#line 1383 "typecheck.m"
                        {
#line 1384 "typecheck.m"
                          {
#line 1384 "typecheck.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "unexpected class method call");
#line 1384 "typecheck.m"
                            return;
                          }
#line 1383 "typecheck.m"
                        }
#line 1382 "typecheck.m"
                      else
#line 1382 "typecheck.m"
                        if (((MR_tag((MR_Word) check_hlds__typecheck__GenericCall_60)) == (MR_mktag((MR_Integer) 2))))
#line 1386 "typecheck.m"
                          {
#line 1386 "typecheck.m"
                            MR_String check_hlds__typecheck__EventName_73 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GenericCall_60, (MR_Integer) 0)));

#line 1391 "typecheck.m"
                            {
#line 1391 "typecheck.m"
                              check_hlds__typecheck__typecheck_event_call_7_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__EventName_73, check_hlds__typecheck__Args_249, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                            }
#line 1386 "typecheck.m"
                          }
#line 1382 "typecheck.m"
                        else
#line 1373 "typecheck.m"
                          {
#line 1373 "typecheck.m"
                            MR_Word check_hlds__typecheck__PredVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 0)));
#line 1373 "typecheck.m"
                            MR_Word check_hlds__typecheck__Purity_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 1)));
#line 1373 "typecheck.m"
                            MR_Word check_hlds__typecheck__GenericCallId_68;
#line 1373 "typecheck.m"
                            MR_Word check_hlds__typecheck__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 2)));
#line 1373 "typecheck.m"
                            MR_Integer check_hlds__typecheck__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 3)));

#line 1379 "typecheck.m"
                            {
#line 1379 "typecheck.m"
                              hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__typecheck__GenericCall_60, &check_hlds__typecheck__GenericCallId_68);
                            }
#line 1380 "typecheck.m"
                            {
#line 1380 "typecheck.m"
                              check_hlds__typecheck__typecheck_higher_order_call_9_p_0(check_hlds__typecheck__GenericCallId_68, check_hlds__typecheck__Context_16, check_hlds__typecheck__PredVar_64, check_hlds__typecheck__Purity_65, check_hlds__typecheck__Args_249, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                            }
#line 1373 "typecheck.m"
                          }
#line 1398 "typecheck.m"
                    *check_hlds__typecheck__GoalExpr_9 = check_hlds__typecheck__GoalExpr0_8;
#line 1371 "typecheck.m"
                  }
#line 1291 "typecheck.m"
                else
#line 1291 "typecheck.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1299 "typecheck.m"
                    {
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__Cond0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__Then0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__Else0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__Cond_25;
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__Then_26;
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__Else_27;
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_217_217;
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_218_218;
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_222_222;
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_223_223;
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_227_227;
#line 1299 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_228_228;

#line 1303 "typecheck.m"
                      {
#line 1303 "typecheck.m"
                        check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Cond0_22, &check_hlds__typecheck__Cond_25, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_217_217, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_218_218);
                      }
#line 1307 "typecheck.m"
                      {
#line 1307 "typecheck.m"
                        check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Then0_23, &check_hlds__typecheck__Then_26, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_217_217, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_222_222, check_hlds__typecheck__STATE_VARIABLE_Info_218_218, &check_hlds__typecheck__STATE_VARIABLE_Info_223_223);
                      }
#line 1311 "typecheck.m"
                      {
#line 1311 "typecheck.m"
                        check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Else0_24, &check_hlds__typecheck__Else_27, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_222_222, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_227_227, check_hlds__typecheck__STATE_VARIABLE_Info_223_223, &check_hlds__typecheck__STATE_VARIABLE_Info_228_228);
                      }
#line 1312 "typecheck.m"
                      {
#line 1312 "typecheck.m"
                        check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_227_227, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_228_228, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                      }
#line 1314 "typecheck.m"
                      {
#line 1314 "typecheck.m"
                        MR_Word base;
#line 1314 "typecheck.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "typecheck.m"
                        *check_hlds__typecheck__GoalExpr_9 = base;
#line 1314 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1314 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Vars_21));
#line 1314 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__Cond_25));
#line 1314 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__typecheck__Then_26));
#line 1314 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__typecheck__Else_27));
#line 1314 "typecheck.m"
                      }
#line 1299 "typecheck.m"
                    }
#line 1291 "typecheck.m"
                  else
#line 1291 "typecheck.m"
                    if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1323 "typecheck.m"
                      {
#line 1323 "typecheck.m"
                        MR_Word check_hlds__typecheck__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1323 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1323 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1323 "typecheck.m"
                        MR_Word check_hlds__typecheck__SubGoal0_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1323 "typecheck.m"
                        MR_Word check_hlds__typecheck__SubGoal_248;

#line 1327 "typecheck.m"
                        {
#line 1327 "typecheck.m"
                          check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_247, &check_hlds__typecheck__SubGoal_248, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_204_204);
                        }
#line 1346 "typecheck.m"
                        if (((MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) == (MR_mktag((MR_Integer) 0))))
#line 1343 "typecheck.m"
                          {
#line 1343 "typecheck.m"
                            MR_Word check_hlds__typecheck__Vars_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Reason_30, (MR_Integer) 0)));

#line 1344 "typecheck.m"
                            {
#line 1344 "typecheck.m"
                              check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_244, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_204_204, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                            }
#line 1343 "typecheck.m"
                          }
#line 1346 "typecheck.m"
                        else
#line 1346 "typecheck.m"
                          if (((MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) == (MR_mktag((MR_Integer) 2))))
#line 1347 "typecheck.m"
                            {
#line 1347 "typecheck.m"
                              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1347 "typecheck.m"
                              *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1347 "typecheck.m"
                            }
#line 1346 "typecheck.m"
                          else
#line 1346 "typecheck.m"
                            if (((MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) == (MR_mktag((MR_Integer) 1))))
#line 1343 "typecheck.m"
                              {
#line 1343 "typecheck.m"
                                MR_Word check_hlds__typecheck__Vars_301 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Reason_30, (MR_Integer) 0)));
#line 1334 "typecheck.m"
                                MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Reason_30, (MR_Integer) 1)));

#line 1344 "typecheck.m"
                                {
#line 1344 "typecheck.m"
                                  check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_301, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_204_204, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                                }
#line 1343 "typecheck.m"
                              }
#line 1346 "typecheck.m"
                            else
#line 1346 "typecheck.m"
                              if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1352 "typecheck.m"
                                {
#line 1352 "typecheck.m"
                                  *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1352 "typecheck.m"
                                  *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1352 "typecheck.m"
                                }
#line 1346 "typecheck.m"
                              else
#line 1346 "typecheck.m"
                                if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1351 "typecheck.m"
                                  {
#line 1351 "typecheck.m"
                                    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1351 "typecheck.m"
                                    *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1351 "typecheck.m"
                                  }
#line 1346 "typecheck.m"
                                else
#line 1346 "typecheck.m"
                                  if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1353 "typecheck.m"
                                    {
#line 1353 "typecheck.m"
                                      *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1353 "typecheck.m"
                                      *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1353 "typecheck.m"
                                    }
#line 1346 "typecheck.m"
                                  else
#line 1346 "typecheck.m"
                                    if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1343 "typecheck.m"
                                      {
#line 1343 "typecheck.m"
                                        MR_Word check_hlds__typecheck__LCVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 1)));
#line 1343 "typecheck.m"
                                        MR_Word check_hlds__typecheck__LCSVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 2)));
#line 1343 "typecheck.m"
                                        MR_Word check_hlds__typecheck__V_205_205;
#line 1343 "typecheck.m"
                                        MR_Word check_hlds__typecheck__Vars_299;
#line 1340 "typecheck.m"
                                        MR_Word check_hlds__typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 3)));

#line 1341 "typecheck.m"
                                        {
#line 1341 "typecheck.m"
                                          check_hlds__typecheck__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_205_205, 0) = ((MR_Box) (check_hlds__typecheck__LCSVar_34));
#line 1341 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1341 "typecheck.m"
                                        }
#line 1341 "typecheck.m"
                                        {
#line 1341 "typecheck.m"
                                          check_hlds__typecheck__Vars_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_299, 0) = ((MR_Box) (check_hlds__typecheck__LCVar_33));
#line 1341 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_299, 1) = ((MR_Box) (check_hlds__typecheck__V_205_205));
#line 1341 "typecheck.m"
                                        }
#line 1344 "typecheck.m"
                                        {
#line 1344 "typecheck.m"
                                          check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_299, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_204_204, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                                        }
#line 1343 "typecheck.m"
                                      }
#line 1346 "typecheck.m"
                                    else
#line 1346 "typecheck.m"
                                      if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1349 "typecheck.m"
                                        {
#line 1349 "typecheck.m"
                                          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1349 "typecheck.m"
                                          *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1349 "typecheck.m"
                                        }
#line 1346 "typecheck.m"
                                      else
#line 1346 "typecheck.m"
                                        if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1348 "typecheck.m"
                                          {
#line 1348 "typecheck.m"
                                            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1348 "typecheck.m"
                                            *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1348 "typecheck.m"
                                          }
#line 1346 "typecheck.m"
                                        else
#line 1346 "typecheck.m"
                                          if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1350 "typecheck.m"
                                            {
#line 1350 "typecheck.m"
                                              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1350 "typecheck.m"
                                              *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1350 "typecheck.m"
                                            }
#line 1346 "typecheck.m"
                                          else
#line 1354 "typecheck.m"
                                            {
#line 1354 "typecheck.m"
                                              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1354 "typecheck.m"
                                              *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1354 "typecheck.m"
                                            }
#line 1357 "typecheck.m"
                        {
#line 1357 "typecheck.m"
                          MR_Word base;
#line 1357 "typecheck.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "typecheck.m"
                          *check_hlds__typecheck__GoalExpr_9 = base;
#line 1357 "typecheck.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1357 "typecheck.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Reason_30));
#line 1357 "typecheck.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_248));
#line 1357 "typecheck.m"
                        }
#line 1323 "typecheck.m"
                      }
#line 1291 "typecheck.m"
                    else
#line 1291 "typecheck.m"
                      if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1427 "typecheck.m"
                        {
#line 1427 "typecheck.m"
                          MR_Word check_hlds__typecheck__ShortHand0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1427 "typecheck.m"
                          MR_Word check_hlds__typecheck__ShortHand_93;

#line 1437 "typecheck.m"
                          if (((MR_tag((MR_Word) check_hlds__typecheck__ShortHand0_91)) == (MR_mktag((MR_Integer) 1))))
#line 1439 "typecheck.m"
                            {
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__GoalType_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 0)));
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__Outer_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 1)));
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__Inner_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 2)));
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__MaybeOutputVars_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 3)));
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__MainGoal0_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 4)));
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__OrElseGoals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 5)));
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__OrElseInners_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 6)));
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__MainGoal_103;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__OrElseGoals_104;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__OuterDI_106;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__OuterUO_107;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__InnerVars_108;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_142_142;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_144_144;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_146_146;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_147_147;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_148_148;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_149_149;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_150_150;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_152_152;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_153_153;
#line 1439 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_156_156;
#line 1471 "typecheck.m"
                              MR_Box check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_116;
#line 1471 "typecheck.m"
                              MR_Box check_hlds__typecheck__conv3_STATE_VARIABLE_Info_118;

#line 1449 "typecheck.m"
                              if ((check_hlds__typecheck__MaybeOutputVars_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1450 "typecheck.m"
                                {
#line 1450 "typecheck.m"
                                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115;
#line 1450 "typecheck.m"
                                  check_hlds__typecheck__STATE_VARIABLE_Info_142_142 = check_hlds__typecheck__STATE_VARIABLE_Info_0_117;
#line 1450 "typecheck.m"
                                }
#line 1449 "typecheck.m"
                              else
#line 1445 "typecheck.m"
                                {
#line 1445 "typecheck.m"
                                  MR_Word check_hlds__typecheck__OutputVars_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOutputVars_97, (MR_Integer) 0)));

#line 1447 "typecheck.m"
                                  {
#line 1447 "typecheck.m"
                                    check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), check_hlds__typecheck__Context_16, check_hlds__typecheck__OutputVars_101, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_142_142);
                                  }
#line 1445 "typecheck.m"
                                }
#line 1453 "typecheck.m"
                              {
#line 1453 "typecheck.m"
                                check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__MainGoal0_98, &check_hlds__typecheck__MainGoal_103, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143, check_hlds__typecheck__STATE_VARIABLE_Info_142_142, &check_hlds__typecheck__STATE_VARIABLE_Info_144_144);
                              }
#line 1455 "typecheck.m"
                              {
#line 1455 "typecheck.m"
                                check_hlds__typecheck__typecheck_goal_list_7_p_0(check_hlds__typecheck__OrElseGoals0_99, &check_hlds__typecheck__OrElseGoals_104, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145, check_hlds__typecheck__STATE_VARIABLE_Info_144_144, &check_hlds__typecheck__STATE_VARIABLE_Info_146_146);
                              }
#line 1459 "typecheck.m"
                              check_hlds__typecheck__OuterDI_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_95, (MR_Integer) 0)));
#line 1459 "typecheck.m"
                              check_hlds__typecheck__OuterUO_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_95, (MR_Integer) 1)));
#line 1461 "typecheck.m"
                              {
#line 1461 "typecheck.m"
                                check_hlds__typecheck__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_150_150, 0) = ((MR_Box) (check_hlds__typecheck__OuterUO_107));
#line 1461 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1461 "typecheck.m"
                              }
#line 1461 "typecheck.m"
                              {
#line 1461 "typecheck.m"
                                check_hlds__typecheck__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1461 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_147_147, 0) = ((MR_Box) (check_hlds__typecheck__OuterDI_106));
#line 1461 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_147_147, 1) = ((MR_Box) (check_hlds__typecheck__V_150_150));
#line 1461 "typecheck.m"
                              }
#line 1460 "typecheck.m"
                              {
#line 1460 "typecheck.m"
                                check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), check_hlds__typecheck__Context_16, check_hlds__typecheck__V_147_147, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_148_148, check_hlds__typecheck__STATE_VARIABLE_Info_146_146, &check_hlds__typecheck__STATE_VARIABLE_Info_149_149);
                              }
#line 1470 "typecheck.m"
                              {
#line 1470 "typecheck.m"
                                check_hlds__typecheck__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1470 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_152_152, 0) = ((MR_Box) (check_hlds__typecheck__Inner_96));
#line 1470 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_152_152, 1) = ((MR_Box) (check_hlds__typecheck__OrElseInners_100));
#line 1470 "typecheck.m"
                              }
#line 1470 "typecheck.m"
                              {
#line 1470 "typecheck.m"
                                check_hlds__typecheck__InnerVars_108 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(check_hlds__typecheck__V_152_152);
                              }
#line 1471 "typecheck.m"
                              {
#line 1471 "typecheck.m"
                                check_hlds__typecheck__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1471 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_7[1]));
#line 1471 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_2));
#line 1471 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1471 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 3) = ((MR_Box) (check_hlds__typecheck__Context_16));
#line 1471 "typecheck.m"
                              }
#line 1471 "typecheck.m"
                              {
#line 1471 "typecheck.m"
                                mercury__list__foldl2_6_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_scalar_common_1[3], (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__V_153_153, check_hlds__typecheck__InnerVars_108, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_148_148)), &check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_116, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_149_149)), &check_hlds__typecheck__conv3_STATE_VARIABLE_Info_118);
                              }
#line 1471 "typecheck.m"
                              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = ((MR_Word) check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_116);
#line 1471 "typecheck.m"
                              *check_hlds__typecheck__STATE_VARIABLE_Info_118 = ((MR_Word) check_hlds__typecheck__conv3_STATE_VARIABLE_Info_118);
#line 1473 "typecheck.m"
                              {
#line 1473 "typecheck.m"
                                check_hlds__typecheck__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1473 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[3]));
#line 1473 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_3));
#line 1473 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1473 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 3) = ((MR_Box) (check_hlds__typecheck__GoalType_94));
#line 1473 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1473 "typecheck.m"
                              }
#line 1473 "typecheck.m"
                              {
#line 1473 "typecheck.m"
                                mercury__require__expect_4_p_0(check_hlds__typecheck__V_156_156, (MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "GoalType != unknown_atomic_goal_type");
                              }
#line 1475 "typecheck.m"
                              {
#line 1475 "typecheck.m"
                                check_hlds__typecheck__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1475 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 0) = ((MR_Box) (check_hlds__typecheck__GoalType_94));
#line 1475 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 1) = ((MR_Box) (check_hlds__typecheck__Outer_95));
#line 1475 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 2) = ((MR_Box) (check_hlds__typecheck__Inner_96));
#line 1475 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 3) = ((MR_Box) (check_hlds__typecheck__MaybeOutputVars_97));
#line 1475 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 4) = ((MR_Box) (check_hlds__typecheck__MainGoal_103));
#line 1475 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 5) = ((MR_Box) (check_hlds__typecheck__OrElseGoals_104));
#line 1475 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 6) = ((MR_Box) (check_hlds__typecheck__OrElseInners_100));
#line 1475 "typecheck.m"
                              }
#line 1439 "typecheck.m"
                            }
#line 1437 "typecheck.m"
                          else
#line 1437 "typecheck.m"
                            if (((MR_tag((MR_Word) check_hlds__typecheck__ShortHand0_91)) == (MR_mktag((MR_Integer) 0))))
#line 1429 "typecheck.m"
                              {
#line 1429 "typecheck.m"
                                MR_Word check_hlds__typecheck__LHS0_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 0)));
#line 1429 "typecheck.m"
                                MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_164_164;
#line 1429 "typecheck.m"
                                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_165_165;
#line 1429 "typecheck.m"
                                MR_Word check_hlds__typecheck__LHS_254;
#line 1429 "typecheck.m"
                                MR_Word check_hlds__typecheck__RHS0_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 1)));
#line 1429 "typecheck.m"
                                MR_Word check_hlds__typecheck__RHS_256;

#line 1434 "typecheck.m"
                                {
#line 1434 "typecheck.m"
                                  check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__LHS0_92, &check_hlds__typecheck__LHS_254, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_164_164, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_165_165);
                                }
#line 1435 "typecheck.m"
                                {
#line 1435 "typecheck.m"
                                  check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__RHS0_255, &check_hlds__typecheck__RHS_256, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_164_164, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_165_165, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                                }
#line 1436 "typecheck.m"
                                {
#line 1436 "typecheck.m"
                                  check_hlds__typecheck__ShortHand_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1436 "typecheck.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_93, 0) = ((MR_Box) (check_hlds__typecheck__LHS_254));
#line 1436 "typecheck.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_93, 1) = ((MR_Box) (check_hlds__typecheck__RHS_256));
#line 1436 "typecheck.m"
                                }
#line 1429 "typecheck.m"
                              }
#line 1437 "typecheck.m"
                            else
#line 1478 "typecheck.m"
                              {
#line 1478 "typecheck.m"
                                MR_Word check_hlds__typecheck__MaybeIO_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 0)));
#line 1478 "typecheck.m"
                                MR_Word check_hlds__typecheck__ResultVar_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 1)));
#line 1478 "typecheck.m"
                                MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122;
#line 1478 "typecheck.m"
                                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_123_123;
#line 1478 "typecheck.m"
                                MR_Word check_hlds__typecheck__SubGoal0_259 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 2)));
#line 1478 "typecheck.m"
                                MR_Word check_hlds__typecheck__SubGoal_260;

#line 1483 "typecheck.m"
                                {
#line 1483 "typecheck.m"
                                  check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_259, &check_hlds__typecheck__SubGoal_260, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_123_123);
                                }
#line 1497 "typecheck.m"
                                if ((check_hlds__typecheck__MaybeIO_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1498 "typecheck.m"
                                  {
#line 1498 "typecheck.m"
                                    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122;
#line 1498 "typecheck.m"
                                    *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_123_123;
#line 1498 "typecheck.m"
                                  }
#line 1497 "typecheck.m"
                                else
#line 1485 "typecheck.m"
                                  {
#line 1485 "typecheck.m"
                                    MR_Word check_hlds__typecheck__InitialIO_111;
#line 1485 "typecheck.m"
                                    MR_Word check_hlds__typecheck__FinalIO_112;
#line 1485 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeIO_109, (MR_Integer) 0)));
#line 1485 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_125_125;
#line 1485 "typecheck.m"
                                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_126_126;
#line 1485 "typecheck.m"
                                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_127_127;
#line 1485 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_128_128;
#line 1485 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_132_132;
#line 1485 "typecheck.m"
                                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_133_133;
#line 1485 "typecheck.m"
                                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_134_134;
#line 1485 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_135_135;

#line 1485 "typecheck.m"
                                    check_hlds__typecheck__InitialIO_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_124_124, (MR_Integer) 0)));
#line 1485 "typecheck.m"
                                    check_hlds__typecheck__FinalIO_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_124_124, (MR_Integer) 1)));
#line 1488 "typecheck.m"
                                    {
#line 1488 "typecheck.m"
                                      check_hlds__typecheck__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_128_128, 0) = ((MR_Box) (check_hlds__typecheck__FinalIO_112));
#line 1488 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1488 "typecheck.m"
                                    }
#line 1488 "typecheck.m"
                                    {
#line 1488 "typecheck.m"
                                      check_hlds__typecheck__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_125_125, 0) = ((MR_Box) (check_hlds__typecheck__InitialIO_111));
#line 1488 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_125_125, 1) = ((MR_Box) (check_hlds__typecheck__V_128_128));
#line 1488 "typecheck.m"
                                    }
#line 1487 "typecheck.m"
                                    {
#line 1487 "typecheck.m"
                                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), check_hlds__typecheck__Context_16, check_hlds__typecheck__V_125_125, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_126_126, check_hlds__typecheck__STATE_VARIABLE_Info_123_123, &check_hlds__typecheck__STATE_VARIABLE_Info_127_127);
                                    }
#line 1494 "typecheck.m"
                                    {
#line 1494 "typecheck.m"
                                      check_hlds__typecheck__V_132_132 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                                    }
#line 1493 "typecheck.m"
                                    {
#line 1493 "typecheck.m"
                                      check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[21]), check_hlds__typecheck__Context_16, check_hlds__typecheck__InitialIO_111, check_hlds__typecheck__V_132_132, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_126_126, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_133_133, check_hlds__typecheck__STATE_VARIABLE_Info_127_127, &check_hlds__typecheck__STATE_VARIABLE_Info_134_134);
                                    }
#line 1496 "typecheck.m"
                                    {
#line 1496 "typecheck.m"
                                      check_hlds__typecheck__V_135_135 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                                    }
#line 1495 "typecheck.m"
                                    {
#line 1495 "typecheck.m"
                                      check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[22]), check_hlds__typecheck__Context_16, check_hlds__typecheck__FinalIO_112, check_hlds__typecheck__V_135_135, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_133_133, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_134_134, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                                    }
#line 1485 "typecheck.m"
                                  }
#line 1500 "typecheck.m"
                                {
#line 1500 "typecheck.m"
                                  check_hlds__typecheck__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1500 "typecheck.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_93, 0) = ((MR_Box) (check_hlds__typecheck__MaybeIO_109));
#line 1500 "typecheck.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_93, 1) = ((MR_Box) (check_hlds__typecheck__ResultVar_110));
#line 1500 "typecheck.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_93, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_260));
#line 1500 "typecheck.m"
                                }
#line 1478 "typecheck.m"
                              }
#line 1502 "typecheck.m"
                          {
#line 1502 "typecheck.m"
                            MR_Word base;
#line 1502 "typecheck.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1502 "typecheck.m"
                            *check_hlds__typecheck__GoalExpr_9 = base;
#line 1502 "typecheck.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1502 "typecheck.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ShortHand_93));
#line 1502 "typecheck.m"
                          }
#line 1427 "typecheck.m"
                        }
#line 1291 "typecheck.m"
                      else
#line 1409 "typecheck.m"
                        {
#line 1411 "typecheck.m"
                          {
#line 1411 "typecheck.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "switch");
#line 1411 "typecheck.m"
                            return;
                          }
#line 1409 "typecheck.m"
                        }
#line 1279 "typecheck.m"
  }
#line 1275 "typecheck.m"
}

#line 1212 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_7_p_0(
#line 1212 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_8,
#line 1212 "typecheck.m"
  MR_Word * check_hlds__typecheck__Goal_9,
#line 1212 "typecheck.m"
  MR_Word check_hlds__typecheck__EnclosingContext_10,
#line 1212 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
#line 1212 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
#line 1212 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
#line 1212 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31)
#line 1212 "typecheck.m"
{
#line 1216 "typecheck.m"
  {
#line 1216 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1216 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 0)));
#line 1216 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 1)));
#line 1216 "typecheck.m"
    MR_Word check_hlds__typecheck__Context0_15;
#line 1216 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_16;
#line 1216 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo_17;
#line 1216 "typecheck.m"
    MR_Integer check_hlds__typecheck__NumTypeAssignSets_18;
#line 1216 "typecheck.m"
    MR_Integer check_hlds__typecheck__WarnLimit_19;
#line 1216 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr_24;
#line 1222 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;

#line 1221 "typecheck.m"
    {
#line 1221 "typecheck.m"
      check_hlds__typecheck__Context0_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo0_14);
    }
#line 1222 "typecheck.m"
    {
#line 1222 "typecheck.m"
      check_hlds__typecheck__V_41_41 = mercury__term__context_init_0_f_0();
    }
#line 1222 "typecheck.m"
    {
#line 1222 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck__Context0_15, check_hlds__typecheck__V_41_41);
    }
#line 1225 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1223 "typecheck.m"
      {
#line 1223 "typecheck.m"
        check_hlds__typecheck__Context_16 = check_hlds__typecheck__EnclosingContext_10;
#line 1224 "typecheck.m"
        {
#line 1224 "typecheck.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalInfo0_14, &check_hlds__typecheck__GoalInfo_17);
        }
#line 1223 "typecheck.m"
      }
#line 1225 "typecheck.m"
    else
#line 1226 "typecheck.m"
      {
#line 1226 "typecheck.m"
        check_hlds__typecheck__Context_16 = check_hlds__typecheck__Context0_15;
#line 1227 "typecheck.m"
        check_hlds__typecheck__GoalInfo_17 = check_hlds__typecheck__GoalInfo0_14;
#line 1226 "typecheck.m"
      }
#line 1241 "typecheck.m"
    {
#line 1241 "typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, &check_hlds__typecheck__NumTypeAssignSets_18);
    }
#line 1242 "typecheck.m"
    {
#line 1242 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__WarnLimit_19);
    }
#line 1243 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__WarnLimit_19);
#line 1269 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1244 "typecheck.m"
      {
#line 1244 "typecheck.m"
        MR_Integer check_hlds__typecheck__ErrorLimit_20;
#line 1244 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_21;
#line 1244 "typecheck.m"
        MR_Word check_hlds__typecheck__OverloadedSymbolMap_22;

#line 1244 "typecheck.m"
        {
#line 1244 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ErrorLimit_20);
        }
#line 1245 "typecheck.m"
        {
#line 1245 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ClauseContext_21);
        }
#line 1246 "typecheck.m"
        {
#line 1246 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__OverloadedSymbolMap_22);
        }
#line 1247 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__ErrorLimit_20);
#line 1256 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1250 "typecheck.m"
          {
#line 1250 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorSpec_23;
#line 1250 "typecheck.m"
            MR_Word check_hlds__typecheck__V_32_32;

#line 1249 "typecheck.m"
            {
#line 1249 "typecheck.m"
              check_hlds__typecheck__ErrorSpec_23 = check_hlds__typecheck_errors__report_error_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
            }
#line 1251 "typecheck.m"
            {
#line 1251 "typecheck.m"
              check_hlds__typecheck__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_32_32, 0) = ((MR_Box) (check_hlds__typecheck__ErrorSpec_23));
#line 1251 "typecheck.m"
            }
#line 1251 "typecheck.m"
            {
#line 1251 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_32_32, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
            }
#line 1255 "typecheck.m"
            check_hlds__typecheck__GoalExpr_24 = check_hlds__typecheck__GoalExpr0_13;
#line 1250 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28;
#line 1250 "typecheck.m"
          }
#line 1256 "typecheck.m"
        else
#line 1257 "typecheck.m"
          {
#line 1257 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybePrevSpec_25;
#line 1257 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_35_35;

#line 1257 "typecheck.m"
            {
#line 1257 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__MaybePrevSpec_25);
            }
#line 1263 "typecheck.m"
            if ((check_hlds__typecheck__MaybePrevSpec_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1259 "typecheck.m"
              {
#line 1259 "typecheck.m"
                MR_Word check_hlds__typecheck__WarnSpec_26;
#line 1259 "typecheck.m"
                MR_Word check_hlds__typecheck__V_34_34;

#line 1260 "typecheck.m"
                {
#line 1260 "typecheck.m"
                  check_hlds__typecheck__WarnSpec_26 = check_hlds__typecheck_errors__report_warning_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
                }
#line 1262 "typecheck.m"
                {
#line 1262 "typecheck.m"
                  check_hlds__typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_34_34, 0) = ((MR_Box) (check_hlds__typecheck__WarnSpec_26));
#line 1262 "typecheck.m"
                }
#line 1262 "typecheck.m"
                {
#line 1262 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_34_34, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__STATE_VARIABLE_Info_35_35);
                }
#line 1259 "typecheck.m"
              }
#line 1263 "typecheck.m"
            else
#line 1264 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_35_35 = check_hlds__typecheck__STATE_VARIABLE_Info_0_30;
#line 1266 "typecheck.m"
            {
#line 1266 "typecheck.m"
              check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_35_35, check_hlds__typecheck__STATE_VARIABLE_Info_31);
            }
#line 1257 "typecheck.m"
          }
#line 1244 "typecheck.m"
      }
#line 1269 "typecheck.m"
    else
#line 1270 "typecheck.m"
      {
#line 1270 "typecheck.m"
        check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
      }
#line 1273 "typecheck.m"
    {
#line 1273 "typecheck.m"
      MR_Word base;
#line 1273 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "typecheck.m"
      *check_hlds__typecheck__Goal_9 = base;
#line 1273 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_24));
#line 1273 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_17));
#line 1273 "typecheck.m"
    }
#line 1216 "typecheck.m"
  }
#line 1212 "typecheck.m"
}

#line 1148 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(
#line 1148 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 1148 "typecheck.m"
  MR_Word check_hlds__typecheck__StuffToCheck_8,
#line 1148 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1148 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet_10,
#line 1148 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_28,
#line 1148 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_29)
#line 1148 "typecheck.m"
{
#line 1160 "typecheck.m"
  {
#line 1160 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1160 "typecheck.m"
    if ((check_hlds__typecheck__TypeAssignSet_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1160 "typecheck.m"
      {
#line 1161 "typecheck.m"
        {
#line 1161 "typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/6", (MR_String) "no type-assignment");
#line 1161 "typecheck.m"
          return;
        }
#line 1160 "typecheck.m"
      }
#line 1160 "typecheck.m"
    else
#line 1160 "typecheck.m"
      {
#line 1160 "typecheck.m"
        MR_Word check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_10, (MR_Integer) 1)));
#line 1160 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_10, (MR_Integer) 0)));

#line 1160 "typecheck.m"
        if ((check_hlds__typecheck__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1163 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_28;
#line 1160 "typecheck.m"
        else
#line 1165 "typecheck.m"
          {
#line 1165 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_36_36, (MR_Integer) 0)));
#line 1165 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorsSoFar_16;
#line 1165 "typecheck.m"
            MR_Word check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_36_36, (MR_Integer) 1)));

#line 1175 "typecheck.m"
            {
#line 1175 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__ErrorsSoFar_16);
            }
#line 1177 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ErrorsSoFar_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1177 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1180 "typecheck.m"
              {
#line 1180 "typecheck.m"
                if ((check_hlds__typecheck__StuffToCheck_8 == (MR_Integer) 0))
#line 1181 "typecheck.m"
                  {
#line 1181 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes1_17;
#line 1181 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes2_18;
#line 1181 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings1_19;
#line 1181 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings2_20;
#line 1181 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypes1_21;
#line 1181 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypes2_22;
#line 1181 "typecheck.m"
                    MR_Word check_hlds__typecheck__FinalHeadTypes1_23;
#line 1181 "typecheck.m"
                    MR_Word check_hlds__typecheck__FinalHeadTypes2_24;
#line 982 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_40_40;
#line 983 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_41_41;

#line 1186 "typecheck.m"
                    {
#line 1186 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__V_37_37, &check_hlds__typecheck__VarTypes1_17);
                    }
#line 1187 "typecheck.m"
                    {
#line 1187 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign2_14, &check_hlds__typecheck__VarTypes2_18);
                    }
#line 1188 "typecheck.m"
                    {
#line 1188 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__V_37_37, &check_hlds__typecheck__TypeBindings1_19);
                    }
#line 1189 "typecheck.m"
                    {
#line 1189 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign2_14, &check_hlds__typecheck__TypeBindings2_20);
                    }
#line 1190 "typecheck.m"
                    {
#line 1190 "typecheck.m"
                      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes1_17, check_hlds__typecheck__HeadVars_9, &check_hlds__typecheck__HeadTypes1_21);
                    }
#line 1191 "typecheck.m"
                    {
#line 1191 "typecheck.m"
                      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes2_18, check_hlds__typecheck__HeadVars_9, &check_hlds__typecheck__HeadTypes2_22);
                    }
#line 1192 "typecheck.m"
                    {
#line 1192 "typecheck.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings1_19, check_hlds__typecheck__HeadTypes1_21, &check_hlds__typecheck__FinalHeadTypes1_23);
                    }
#line 1194 "typecheck.m"
                    {
#line 1194 "typecheck.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings2_20, check_hlds__typecheck__HeadTypes2_22, &check_hlds__typecheck__FinalHeadTypes2_24);
                    }
#line 982 "typecheck.m"
                    {
#line 982 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes1_23, check_hlds__typecheck__FinalHeadTypes2_24, &check_hlds__typecheck__V_40_40);
                    }
#line 1181 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 983 "typecheck.m"
                      {
#line 983 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes2_24, check_hlds__typecheck__FinalHeadTypes1_23, &check_hlds__typecheck__V_41_41);
                      }
#line 1181 "typecheck.m"
                  }
#line 1180 "typecheck.m"
                else
#line 1179 "typecheck.m"
                  check_hlds__typecheck__succeeded = MR_TRUE;
#line 1180 "typecheck.m"
              }
#line 1205 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1199 "typecheck.m"
              {
#line 1199 "typecheck.m"
                MR_Word check_hlds__typecheck__ClauseContext_25;
#line 1199 "typecheck.m"
                MR_Word check_hlds__typecheck__OverloadedSymbolMap_26;
#line 1199 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_27;

#line 1199 "typecheck.m"
                {
#line 1199 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__ClauseContext_25);
                }
#line 1200 "typecheck.m"
                {
#line 1200 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__OverloadedSymbolMap_26);
                }
#line 1202 "typecheck.m"
                {
#line 1202 "typecheck.m"
                  check_hlds__typecheck__Spec_27 = check_hlds__typecheck_errors__report_ambiguity_error_5_f_0(check_hlds__typecheck__ClauseContext_25, check_hlds__typecheck__Context_7, check_hlds__typecheck__OverloadedSymbolMap_26, check_hlds__typecheck__V_37_37, check_hlds__typecheck__TypeAssign2_14);
                }
#line 1204 "typecheck.m"
                {
#line 1204 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_27, check_hlds__typecheck__STATE_VARIABLE_Info_0_28, check_hlds__typecheck__STATE_VARIABLE_Info_29);
#line 1204 "typecheck.m"
                  return;
                }
#line 1199 "typecheck.m"
              }
#line 1205 "typecheck.m"
            else
#line 1205 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_28;
#line 1165 "typecheck.m"
          }
#line 1160 "typecheck.m"
      }
#line 1160 "typecheck.m"
  }
#line 1148 "typecheck.m"
}

#line 2020 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_1(
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2020 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2020 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2020 "typecheck.m"
{
#line 2020 "typecheck.m"
  {
#line 2020 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2020 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__3_3;

#line 2020 "typecheck.m"
    {
#line 2020 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_HeadVar__3_3);
    }
#line 2020 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__3_3));
#line 2020 "typecheck.m"
  }
#line 2020 "typecheck.m"
}

#line 1107 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0(
#line 1107 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1107 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_10,
#line 1107 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_22,
#line 1107 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_23,
#line 1107 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1107 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1107 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1107 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27)
#line 1107 "typecheck.m"
{
#line 1111 "typecheck.m"
  {
#line 1111 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1111 "typecheck.m"
    MR_Word check_hlds__typecheck__Body0_14;
#line 1111 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_15;
#line 1111 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgVectorKind_16;
#line 1111 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_17;
#line 1111 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28;
#line 1111 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_29_29;
#line 1111 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_31_31;
#line 1111 "typecheck.m"
    MR_Word check_hlds__typecheck__Specs_67;
#line 1111 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_68;
#line 1113 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38;
#line 1113 "typecheck.m"
    MR_Word check_hlds__typecheck__V_39_39;
#line 1113 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 1113 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;
#line 2019 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgVectorTypeErrors_69;
#line 2012 "typecheck.m"
    MR_Word check_hlds__typecheck__V_80_80;
#line 2013 "typecheck.m"
    MR_Word check_hlds__typecheck__V_70_70;
#line 2013 "typecheck.m"
    MR_Word check_hlds__typecheck__V_71_71;
#line 2013 "typecheck.m"
    MR_Word check_hlds__typecheck__V_72_72;
#line 1127 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52;
#line 1127 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 1127 "typecheck.m"
    MR_Word check_hlds__typecheck__V_55_55;
#line 1127 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 1127 "typecheck.m"
    MR_Word check_hlds__typecheck__V_53_53;

#line 1112 "typecheck.m"
    {
#line 1112 "typecheck.m"
      check_hlds__typecheck__Body0_14 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__typecheck__STATE_VARIABLE_Clause_0_22);
    }
#line 1113 "typecheck.m"
    check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 0)));
#line 1113 "typecheck.m"
    check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 1)));
#line 1113 "typecheck.m"
    check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 2)));
#line 1113 "typecheck.m"
    check_hlds__typecheck__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 3)));
#line 1113 "typecheck.m"
    check_hlds__typecheck__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 4)));
#line 1116 "typecheck.m"
    check_hlds__typecheck__ArgVectorKind_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2008 "typecheck.m"
    {
#line 2008 "typecheck.m"
      check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__Context_15, check_hlds__typecheck__ArgVectorKind_16, (MR_Integer) 1, check_hlds__typecheck__HeadVars_9, check_hlds__typecheck__ArgTypes_10, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_67, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[1]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_68);
    }
#line 2012 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_68)) == (MR_mktag((MR_Integer) 1)));
#line 2012 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2012 "typecheck.m"
      {
#line 2012 "typecheck.m"
        check_hlds__typecheck__ArgVectorTypeErrors_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_68, (MR_Integer) 0)));
#line 2013 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_69)) == (MR_mktag((MR_Integer) 1)));
#line 2013 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2013 "typecheck.m"
          {
#line 2013 "typecheck.m"
            check_hlds__typecheck__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_69, (MR_Integer) 0)));
#line 2013 "typecheck.m"
            check_hlds__typecheck__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_69, (MR_Integer) 1)));
#line 2013 "typecheck.m"
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 2013 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2013 "typecheck.m"
              {
#line 2013 "typecheck.m"
                check_hlds__typecheck__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_80_80, (MR_Integer) 0)));
#line 2013 "typecheck.m"
                check_hlds__typecheck__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_80_80, (MR_Integer) 1)));
#line 2013 "typecheck.m"
              }
#line 2013 "typecheck.m"
          }
#line 2012 "typecheck.m"
      }
#line 2019 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2015 "typecheck.m"
      {
#line 2015 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_73;
#line 2015 "typecheck.m"
        MR_Word check_hlds__typecheck__AllArgsSpec_74;

#line 2015 "typecheck.m"
        {
#line 2015 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__ClauseContext_73);
        }
#line 2016 "typecheck.m"
        {
#line 2016 "typecheck.m"
          check_hlds__typecheck__AllArgsSpec_74 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_73, check_hlds__typecheck__Context_15, check_hlds__typecheck__ArgVectorKind_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, check_hlds__typecheck__ArgVectorTypeErrors_69);
        }
#line 2018 "typecheck.m"
        {
#line 2018 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_74, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__STATE_VARIABLE_Info_29_29);
        }
#line 2015 "typecheck.m"
      }
#line 2019 "typecheck.m"
    else
#line 2020 "typecheck.m"
      {
#line 2020 "typecheck.m"
        MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29;

#line 2020 "typecheck.m"
        {
#line 2020 "typecheck.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[1], check_hlds__typecheck__Specs_67, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_26)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29);
        }
#line 2020 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_Info_29_29 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29);
#line 2020 "typecheck.m"
      }
#line 1119 "typecheck.m"
    {
#line 1119 "typecheck.m"
      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Body0_14, &check_hlds__typecheck__Body_17, check_hlds__typecheck__Context_15, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_29_29, &check_hlds__typecheck__STATE_VARIABLE_Info_31_31);
    }
#line 1127 "typecheck.m"
    check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 0)));
#line 1127 "typecheck.m"
    check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 1)));
#line 1127 "typecheck.m"
    check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 2)));
#line 1127 "typecheck.m"
    check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 3)));
#line 1127 "typecheck.m"
    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 4)));
#line 1127 "typecheck.m"
    {
#line 1127 "typecheck.m"
      MR_Word base;
#line 1127 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Clause_23 = base;
#line 1127 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_52_52));
#line 1127 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Body_17));
#line 1127 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_54_54));
#line 1127 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_55_55));
#line 1127 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_56_56));
#line 1127 "typecheck.m"
    }
#line 1128 "typecheck.m"
    {
#line 1128 "typecheck.m"
      check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(check_hlds__typecheck__Context_15, (MR_Integer) 0, check_hlds__typecheck__HeadVars_9, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_31_31, check_hlds__typecheck__STATE_VARIABLE_Info_27);
#line 1128 "typecheck.m"
      return;
    }
#line 1111 "typecheck.m"
  }
#line 1107 "typecheck.m"
}

#line 1067 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_8_p_0(
#line 1067 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1067 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1067 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1067 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 1067 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1067 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
#line 1067 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1067 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8)
#line 1067 "typecheck.m"
{
#line 1072 "typecheck.m"
  {
#line 1072 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1072 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1072 "typecheck.m"
      {
#line 1072 "typecheck.m"
        *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1072 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_8 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
#line 1072 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
#line 1072 "typecheck.m"
      }
#line 1072 "typecheck.m"
    else
#line 1074 "typecheck.m"
      {
#line 1074 "typecheck.m"
        MR_Word check_hlds__typecheck__Clause0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 1074 "typecheck.m"
        MR_Word check_hlds__typecheck__Clauses0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 1074 "typecheck.m"
        MR_Word check_hlds__typecheck__Clause_21;
#line 1074 "typecheck.m"
        MR_Word check_hlds__typecheck__Clauses_22;
#line 1074 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29;
#line 1074 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_30_30;

#line 1075 "typecheck.m"
        {
#line 1075 "typecheck.m"
          check_hlds__typecheck__typecheck_clause_8_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clause0_19, &check_hlds__typecheck__Clause_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__STATE_VARIABLE_Info_30_30);
        }
#line 1077 "typecheck.m"
        {
#line 1077 "typecheck.m"
          check_hlds__typecheck__typecheck_clause_list_8_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clauses0_20, &check_hlds__typecheck__Clauses_22, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6, check_hlds__typecheck__STATE_VARIABLE_Info_30_30, check_hlds__typecheck__STATE_VARIABLE_Info_8);
        }
#line 1074 "typecheck.m"
        {
#line 1074 "typecheck.m"
          MR_Word base;
#line 1074 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 1074 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Clause_21));
#line 1074 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Clauses_22));
#line 1074 "typecheck.m"
        }
#line 1074 "typecheck.m"
      }
#line 1072 "typecheck.m"
  }
#line 1067 "typecheck.m"
}

#line 962 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
#line 962 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 962 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 962 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 962 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 962 "typecheck.m"
{
#line 965 "typecheck.m"
  {
#line 965 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 965 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 965 "typecheck.m"
      {
#line 965 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 965 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 965 "typecheck.m"
          {
#line 965 "typecheck.m"
            *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 965 "typecheck.m"
            *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 965 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 965 "typecheck.m"
          }
#line 965 "typecheck.m"
      }
#line 965 "typecheck.m"
    else
#line 967 "typecheck.m"
      {
#line 967 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_16_16;
#line 967 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 967 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintsA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 967 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintB_7;
#line 967 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintsB_8;
#line 967 "typecheck.m"
        MR_Word check_hlds__typecheck__ClassName_11;
#line 967 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypesA_12;
#line 967 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypesB_13;
#line 967 "typecheck.m"
        MR_Word check_hlds__typecheck__TypesA0_14;
#line 967 "typecheck.m"
        MR_Word check_hlds__typecheck__TypesB0_15;
#line 967 "typecheck.m"
        MR_Word check_hlds__typecheck__V_17_17;

#line 966 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 966 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 966 "typecheck.m"
          {
#line 966 "typecheck.m"
            check_hlds__typecheck__ConstraintB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 966 "typecheck.m"
            check_hlds__typecheck__ConstraintsB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 968 "typecheck.m"
            check_hlds__typecheck__ClassName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 0)));
#line 968 "typecheck.m"
            check_hlds__typecheck__ArgTypesA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 1)));
#line 969 "typecheck.m"
            check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 0)));
#line 969 "typecheck.m"
            check_hlds__typecheck__ArgTypesB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 1)));
#line 969 "typecheck.m"
            {
#line 969 "typecheck.m"
              check_hlds__typecheck__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__typecheck__ClassName_11, check_hlds__typecheck__V_17_17);
            }
#line 967 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 967 "typecheck.m"
              {
#line 15123 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 970 "typecheck.m"
                {
#line 970 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__ArgTypesB_13);
                }
#line 967 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 967 "typecheck.m"
                  {
#line 971 "typecheck.m"
                    {
#line 971 "typecheck.m"
                      check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ConstraintsA_6, check_hlds__typecheck__ConstraintsB_8, &check_hlds__typecheck__TypesA0_14, &check_hlds__typecheck__TypesB0_15);
                    }
#line 967 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 967 "typecheck.m"
                      {
#line 972 "typecheck.m"
                        {
#line 972 "typecheck.m"
                          *check_hlds__typecheck__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__TypesA0_14);
                        }
#line 973 "typecheck.m"
                        {
#line 973 "typecheck.m"
                          *check_hlds__typecheck__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesB_13, check_hlds__typecheck__TypesB0_15);
                        }
#line 973 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 967 "typecheck.m"
                      }
#line 967 "typecheck.m"
                  }
#line 967 "typecheck.m"
              }
#line 966 "typecheck.m"
          }
#line 967 "typecheck.m"
      }
#line 965 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 965 "typecheck.m"
  }
#line 962 "typecheck.m"
}

#line 928 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__KindMap_8,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesA_10,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesB_13,
#line 928 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsB_14)
#line 928 "typecheck.m"
{
#line 933 "typecheck.m"
  {
#line 933 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_29_29;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_18_43;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstrainedTypesA_15;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstrainedTypesB_16;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarTypesA_17;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarTypesB_18;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesListA_19;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesListB_20;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 0)));
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCsA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 1)));
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 0)));
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 1)));
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivTypesA_38;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivTypesB_39;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypesA_40;
#line 933 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypesB_41;
#line 982 "typecheck.m"
    MR_Word check_hlds__typecheck__V_46_46;
#line 983 "typecheck.m"
    MR_Word check_hlds__typecheck__V_47_47;

#line 955 "typecheck.m"
    {
#line 955 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36);
    }
#line 933 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 933 "typecheck.m"
      {
#line 956 "typecheck.m"
        {
#line 956 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37);
        }
#line 933 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 933 "typecheck.m"
          {
#line 957 "typecheck.m"
            {
#line 957 "typecheck.m"
              check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36, &check_hlds__typecheck__UnivTypesA_38, &check_hlds__typecheck__UnivTypesB_39);
            }
#line 933 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 933 "typecheck.m"
              {
#line 958 "typecheck.m"
                {
#line 958 "typecheck.m"
                  check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37, &check_hlds__typecheck__ExistTypesA_40, &check_hlds__typecheck__ExistTypesB_41);
                }
#line 933 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 933 "typecheck.m"
                  {
#line 15286 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_18_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 959 "typecheck.m"
                    {
#line 959 "typecheck.m"
                      check_hlds__typecheck__ConstrainedTypesA_15 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesA_40, check_hlds__typecheck__UnivTypesA_38);
                    }
#line 960 "typecheck.m"
                    {
#line 960 "typecheck.m"
                      check_hlds__typecheck__ConstrainedTypesB_16 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesB_41, check_hlds__typecheck__UnivTypesB_39);
                    }
#line 936 "typecheck.m"
                    {
#line 936 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsA_9, &check_hlds__typecheck__ExistQVarTypesA_17);
                    }
#line 937 "typecheck.m"
                    {
#line 937 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsB_12, &check_hlds__typecheck__ExistQVarTypesB_18);
                    }
#line 938 "typecheck.m"
                    check_hlds__typecheck__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15310 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 938 "typecheck.m"
                    {
#line 938 "typecheck.m"
                      check_hlds__typecheck__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesA_15));
#line 938 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__V_24_24));
#line 938 "typecheck.m"
                    }
#line 938 "typecheck.m"
                    {
#line 938 "typecheck.m"
                      check_hlds__typecheck__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesA_10));
#line 938 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__V_23_23));
#line 938 "typecheck.m"
                    }
#line 938 "typecheck.m"
                    {
#line 938 "typecheck.m"
                      check_hlds__typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesA_17));
#line 938 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__typecheck__V_22_22));
#line 938 "typecheck.m"
                    }
#line 938 "typecheck.m"
                    {
#line 938 "typecheck.m"
                      mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__V_21_21, &check_hlds__typecheck__TypesListA_19);
                    }
#line 939 "typecheck.m"
                    check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 939 "typecheck.m"
                    {
#line 939 "typecheck.m"
                      check_hlds__typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_27_27, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesB_16));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 939 "typecheck.m"
                    }
#line 939 "typecheck.m"
                    {
#line 939 "typecheck.m"
                      check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesB_13));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 1) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 939 "typecheck.m"
                    }
#line 939 "typecheck.m"
                    {
#line 939 "typecheck.m"
                      check_hlds__typecheck__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesB_18));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_25_25, 1) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 939 "typecheck.m"
                    }
#line 939 "typecheck.m"
                    {
#line 939 "typecheck.m"
                      mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__V_25_25, &check_hlds__typecheck__TypesListB_20);
                    }
#line 982 "typecheck.m"
                    {
#line 982 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListA_19, check_hlds__typecheck__TypesListB_20, &check_hlds__typecheck__V_46_46);
                    }
#line 933 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 983 "typecheck.m"
                      {
#line 983 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListB_20, check_hlds__typecheck__TypesListA_19, &check_hlds__typecheck__V_47_47);
                      }
#line 933 "typecheck.m"
                  }
#line 933 "typecheck.m"
              }
#line 933 "typecheck.m"
          }
#line 933 "typecheck.m"
      }
#line 933 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 933 "typecheck.m"
  }
#line 928 "typecheck.m"
}

#line 913 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
#line 913 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 913 "typecheck.m"
{
#line 913 "typecheck.m"
  {
#line 913 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 913 "typecheck.m"
    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0, 1);
#line 913 "typecheck.m"
  }
#line 913 "typecheck.m"
}

#line 913 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
#line 913 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 913 "typecheck.m"
{
#line 913 "typecheck.m"
  {
#line 913 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 913 "typecheck.m"
    {
#line 916 "typecheck.m"
      {
#line 916 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7)), (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3);
      }
#line 915 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
#line 915 "typecheck.m"
      if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded)
#line 915 "typecheck.m"
        {
#line 915 "typecheck.m"
          check_hlds__typecheck__is_head_class_constraint_2_p_0_1(check_hlds__typecheck__env_ptr);
#line 915 "typecheck.m"
          return;
        }
#line 913 "typecheck.m"
    }
#line 913 "typecheck.m"
  }
#line 913 "typecheck.m"
}

#line 913 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
#line 913 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 913 "typecheck.m"
{
#line 913 "typecheck.m"
  {
#line 913 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 913 "typecheck.m"
    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0) == 0)
#line 913 "typecheck.m"
      {
#line 914 "typecheck.m"
        {
#line 914 "typecheck.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7, check_hlds__typecheck__is_head_class_constraint_2_p_0_2, check_hlds__typecheck__env_ptr);
        }
#line 913 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_FALSE;
#line 913 "typecheck.m"
      }
#line 913 "typecheck.m"
    else
#line 913 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_TRUE;
#line 913 "typecheck.m"
  }
#line 913 "typecheck.m"
}

#line 908 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
#line 908 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
#line 908 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4)
#line 908 "typecheck.m"
{
#line 908 "typecheck.m"
  {
#line 908 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s check_hlds__typecheck__env;

#line 908 "typecheck.m"
    (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3 = check_hlds__typecheck__HeadTypeVars_3;
#line 911 "typecheck.m"
    {
#line 912 "typecheck.m"
      MR_Word check_hlds__typecheck___ClassName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 0)));

#line 912 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 1)));
#line 913 "typecheck.m"
      {
#line 913 "typecheck.m"
        check_hlds__typecheck__is_head_class_constraint_2_p_0_3(&check_hlds__typecheck__env);
      }
#line 913 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
#line 911 "typecheck.m"
      return (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
#line 911 "typecheck.m"
    }
#line 908 "typecheck.m"
  }
#line 908 "typecheck.m"
}

#line 905 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
#line 905 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 905 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 905 "typecheck.m"
{
#line 905 "typecheck.m"
  {
#line 905 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 905 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 905 "typecheck.m"
    {
#line 905 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__is_head_class_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 905 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 905 "typecheck.m"
  }
#line 905 "typecheck.m"
}

#line 892 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
#line 892 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 892 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVarTypes_7,
#line 892 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 892 "typecheck.m"
  MR_Word * check_hlds__typecheck__UnprovenCs_10)
#line 892 "typecheck.m"
{
#line 896 "typecheck.m"
  {
#line 896 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 896 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 896 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 896 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCs_8;
#line 896 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCs_9;
#line 896 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;
#line 905 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;

#line 905 "typecheck.m"
    {
#line 905 "typecheck.m"
      check_hlds__typecheck__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 905 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[1]));
#line 905 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 1) = ((MR_Box) (check_hlds__typecheck__restrict_to_head_vars_4_p_0_1));
#line 905 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 905 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 3) = ((MR_Box) (check_hlds__typecheck__ArgVarTypes_7));
#line 905 "typecheck.m"
    }
#line 905 "typecheck.m"
    {
#line 905 "typecheck.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__typecheck__V_16_16, check_hlds__typecheck__UnivCs0_5, &check_hlds__typecheck__UnivCs_8, check_hlds__typecheck__UnprovenCs_10);
    }
#line 905 "typecheck.m"
    {
#line 905 "typecheck.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__typecheck__V_16_16, check_hlds__typecheck__ExistCs0_6, &check_hlds__typecheck__ExistCs_9, &check_hlds__typecheck__V_11_11);
    }
#line 896 "typecheck.m"
    {
#line 896 "typecheck.m"
      MR_Word base;
#line 896 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "typecheck.m"
      *check_hlds__typecheck__HeadVar__3_3 = base;
#line 896 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__UnivCs_8));
#line 896 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__ExistCs_9));
#line 896 "typecheck.m"
    }
#line 896 "typecheck.m"
  }
#line 892 "typecheck.m"
}

#line 857 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
#line 857 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypeVars_5,
#line 857 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExistQVars_6,
#line 857 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeParams0_7,
#line 857 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadTypeParams_8)
#line 857 "typecheck.m"
{
#line 861 "typecheck.m"
  {
#line 861 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 861 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 861 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVarsSet_9;
#line 861 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadTypeParamsSet_10;
#line 861 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarsSet_11;
#line 861 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQVarsSet_12;
#line 861 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQVars_13;

#line 869 "typecheck.m"
    {
#line 869 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVars_5, &check_hlds__typecheck__ArgTypeVarsSet_9);
    }
#line 870 "typecheck.m"
    {
#line 870 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__HeadTypeParams0_7, &check_hlds__typecheck__HeadTypeParamsSet_10);
    }
#line 871 "typecheck.m"
    {
#line 871 "typecheck.m"
      mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVarsSet_9, check_hlds__typecheck__HeadTypeParamsSet_10, &check_hlds__typecheck__ExistQVarsSet_11);
    }
#line 872 "typecheck.m"
    {
#line 872 "typecheck.m"
      mercury__set__difference_3_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVarsSet_9, check_hlds__typecheck__ExistQVarsSet_11, &check_hlds__typecheck__UnivQVarsSet_12);
    }
#line 873 "typecheck.m"
    {
#line 873 "typecheck.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ExistQVarsSet_11, check_hlds__typecheck__ExistQVars_6);
    }
#line 874 "typecheck.m"
    {
#line 874 "typecheck.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__UnivQVarsSet_12, &check_hlds__typecheck__UnivQVars_13);
    }
#line 882 "typecheck.m"
    {
#line 882 "typecheck.m"
      mercury__list__append_3_p_1(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__UnivQVars_13, check_hlds__typecheck__HeadTypeParams0_7, check_hlds__typecheck__HeadTypeParams_8);
#line 882 "typecheck.m"
      return;
    }
#line 861 "typecheck.m"
  }
#line 857 "typecheck.m"
}

#line 835 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
#line 835 "typecheck.m"
  MR_Word check_hlds__typecheck__Renaming_4,
#line 835 "typecheck.m"
  MR_Word check_hlds__typecheck__Origin0_5,
#line 835 "typecheck.m"
  MR_Word * check_hlds__typecheck__Origin_6)
#line 835 "typecheck.m"
{
#line 851 "typecheck.m"
  {
#line 851 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin0_5)) == (MR_mktag((MR_Integer) 1)));
#line 851 "typecheck.m"
    MR_Word check_hlds__typecheck__MethodName_7;
#line 851 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints0_8;

#line 839 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 839 "typecheck.m"
      {
#line 839 "typecheck.m"
        check_hlds__typecheck__MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Origin0_5, (MR_Integer) 0)));
#line 839 "typecheck.m"
        check_hlds__typecheck__Constraints0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Origin0_5, (MR_Integer) 1)));
#line 841 "typecheck.m"
        {
#line 841 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 0)));
#line 841 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 1)));
#line 841 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceConstraints0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 2)));
#line 841 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassMethodClassContext0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 3)));
#line 841 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceTypes_13;
#line 841 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceConstraints_14;
#line 841 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassMethodClassContext_15;
#line 841 "typecheck.m"
          MR_Word check_hlds__typecheck__Constraints_16;

#line 842 "typecheck.m"
          {
#line 842 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__InstanceTypes0_10, &check_hlds__typecheck__InstanceTypes_13);
          }
#line 844 "typecheck.m"
          {
#line 844 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__InstanceConstraints0_11, &check_hlds__typecheck__InstanceConstraints_14);
          }
#line 846 "typecheck.m"
          {
#line 846 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__ClassMethodClassContext0_12, &check_hlds__typecheck__ClassMethodClassContext_15);
          }
#line 848 "typecheck.m"
          {
#line 848 "typecheck.m"
            check_hlds__typecheck__Constraints_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 848 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 0) = ((MR_Box) (check_hlds__typecheck__ClassId_9));
#line 848 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 1) = ((MR_Box) (check_hlds__typecheck__InstanceTypes_13));
#line 848 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 2) = ((MR_Box) (check_hlds__typecheck__InstanceConstraints_14));
#line 848 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 3) = ((MR_Box) (check_hlds__typecheck__ClassMethodClassContext_15));
#line 848 "typecheck.m"
          }
#line 850 "typecheck.m"
          {
#line 850 "typecheck.m"
            MR_Word base;
#line 850 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "typecheck.m"
            *check_hlds__typecheck__Origin_6 = base;
#line 850 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__MethodName_7));
#line 850 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Constraints_16));
#line 850 "typecheck.m"
          }
#line 841 "typecheck.m"
        }
#line 839 "typecheck.m"
      }
#line 839 "typecheck.m"
    else
#line 852 "typecheck.m"
      *check_hlds__typecheck__Origin_6 = check_hlds__typecheck__Origin0_5;
#line 851 "typecheck.m"
  }
#line 835 "typecheck.m"
}

#line 784 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
#line 784 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_5,
#line 784 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16,
#line 784 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_17,
#line 784 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7)
#line 784 "typecheck.m"
{
#line 789 "typecheck.m"
  {
#line 789 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__VarSet0_9;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__PredPieces_10;
#line 789 "typecheck.m"
    MR_String check_hlds__typecheck__PredName_11;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__StubClause_12;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__VarSet_13;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep_14;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers_15;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_35;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers_36;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__PredNameVar_37;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__UnifyGoal_38;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleName_39;
#line 789 "typecheck.m"
    MR_String check_hlds__typecheck__CalleeName_40;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_41;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__CallGoal_42;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo_43;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_44;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__V_49_49;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__V_58_58;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;
#line 789 "typecheck.m"
    MR_Word check_hlds__typecheck__V_61_61;

#line 789 "typecheck.m"
    {
#line 789 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18);
    }
#line 790 "typecheck.m"
    {
#line 790 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18, &check_hlds__typecheck__VarSet0_9);
    }
#line 791 "typecheck.m"
    {
#line 791 "typecheck.m"
      check_hlds__typecheck__PredPieces_10 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__typecheck__ModuleInfo_7, (MR_Integer) 0, check_hlds__typecheck__PredId_5);
    }
#line 793 "typecheck.m"
    {
#line 793 "typecheck.m"
      check_hlds__typecheck__PredName_11 = parse_tree__error_util__error_pieces_to_string_1_f_0(check_hlds__typecheck__PredPieces_10);
    }
#line 809 "typecheck.m"
    {
#line 809 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__Markers0_35);
    }
#line 810 "typecheck.m"
    {
#line 810 "typecheck.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, check_hlds__typecheck__Markers0_35, &check_hlds__typecheck__Markers_36);
    }
#line 811 "typecheck.m"
    {
#line 811 "typecheck.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_36, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
    }
#line 814 "typecheck.m"
    {
#line 814 "typecheck.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "PredName", &check_hlds__typecheck__PredNameVar_37, check_hlds__typecheck__VarSet0_9, &check_hlds__typecheck__VarSet_13);
    }
#line 815 "typecheck.m"
    {
#line 815 "typecheck.m"
      hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__typecheck__PredNameVar_37, check_hlds__typecheck__PredName_11, &check_hlds__typecheck__UnifyGoal_38);
    }
#line 819 "typecheck.m"
    {
#line 819 "typecheck.m"
      check_hlds__typecheck__ModuleName_39 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
    }
#line 820 "typecheck.m"
    {
#line 820 "typecheck.m"
      check_hlds__typecheck__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(check_hlds__typecheck__ModuleName_39);
    }
#line 822 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 821 "typecheck.m"
      check_hlds__typecheck__CalleeName_40 = (MR_String) "sorry";
#line 822 "typecheck.m"
    else
#line 823 "typecheck.m"
      check_hlds__typecheck__CalleeName_40 = (MR_String) "no_clauses";
#line 825 "typecheck.m"
    {
#line 825 "typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_41);
    }
#line 826 "typecheck.m"
    {
#line 826 "typecheck.m"
      check_hlds__typecheck__V_49_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 827 "typecheck.m"
    {
#line 827 "typecheck.m"
      check_hlds__typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 0) = ((MR_Box) (check_hlds__typecheck__PredNameVar_37));
#line 827 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 827 "typecheck.m"
    }
#line 828 "typecheck.m"
    {
#line 828 "typecheck.m"
      check_hlds__typecheck__V_56_56 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 826 "typecheck.m"
    {
#line 826 "typecheck.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__typecheck__V_49_49, check_hlds__typecheck__CalleeName_40, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__typecheck__V_54_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__V_56_56, check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__Context_41, &check_hlds__typecheck__CallGoal_42);
    }
#line 831 "typecheck.m"
    {
#line 831 "typecheck.m"
      hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__typecheck__Context_41, &check_hlds__typecheck__GoalInfo_43);
    }
#line 832 "typecheck.m"
    {
#line 832 "typecheck.m"
      check_hlds__typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck__CallGoal_42));
#line 832 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 832 "typecheck.m"
    }
#line 832 "typecheck.m"
    {
#line 832 "typecheck.m"
      check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__UnifyGoal_38));
#line 832 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 1) = ((MR_Box) (check_hlds__typecheck__V_61_61));
#line 832 "typecheck.m"
    }
#line 832 "typecheck.m"
    {
#line 832 "typecheck.m"
      check_hlds__typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 832 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 832 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 832 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 2) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 832 "typecheck.m"
    }
#line 832 "typecheck.m"
    {
#line 832 "typecheck.m"
      check_hlds__typecheck__Body_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 832 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Body_44, 0) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 832 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Body_44, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_43));
#line 832 "typecheck.m"
    }
#line 833 "typecheck.m"
    {
#line 833 "typecheck.m"
      check_hlds__typecheck__StubClause_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 1) = ((MR_Box) (check_hlds__typecheck__Body_44));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 3) = ((MR_Box) (check_hlds__typecheck__Context_41));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 833 "typecheck.m"
    }
#line 796 "typecheck.m"
    {
#line 796 "typecheck.m"
      check_hlds__typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 0) = ((MR_Box) (check_hlds__typecheck__StubClause_12));
#line 796 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 796 "typecheck.m"
    }
#line 796 "typecheck.m"
    {
#line 796 "typecheck.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__V_21_21, &check_hlds__typecheck__ClausesRep_14);
    }
#line 797 "typecheck.m"
    {
#line 797 "typecheck.m"
      check_hlds__typecheck__ItemNumbers_15 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 798 "typecheck.m"
    {
#line 798 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_14, check_hlds__typecheck__ItemNumbers_15, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23);
    }
#line 799 "typecheck.m"
    {
#line 799 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(check_hlds__typecheck__VarSet_13, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24);
    }
#line 800 "typecheck.m"
    {
#line 800 "typecheck.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, check_hlds__typecheck__STATE_VARIABLE_PredInfo_17);
#line 800 "typecheck.m"
      return;
    }
#line 789 "typecheck.m"
  }
#line 784 "typecheck.m"
}

#line 757 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_6_p_0(
#line 757 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 757 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_8,
#line 757 "typecheck.m"
  MR_Word check_hlds__typecheck__Impl_9,
#line 757 "typecheck.m"
  MR_Word check_hlds__typecheck__TVar_10,
#line 757 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
#line 757 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17)
#line 757 "typecheck.m"
{
#line 761 "typecheck.m"
  {
#line 761 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 761 "typecheck.m"
    MR_String check_hlds__typecheck__Name_12;
#line 761 "typecheck.m"
    MR_String check_hlds__typecheck__VarName_13;

#line 762 "typecheck.m"
    {
#line 762 "typecheck.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__TypeVarSet_8, check_hlds__typecheck__TVar_10, &check_hlds__typecheck__Name_12);
    }
#line 763 "typecheck.m"
    {
#line 763 "typecheck.m"
      check_hlds__typecheck__VarName_13 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", check_hlds__typecheck__Name_12);
    }
#line 764 "typecheck.m"
    {
#line 764 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(check_hlds__typecheck__Impl_9, check_hlds__typecheck__VarName_13);
    }
#line 766 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 766 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_17 = check_hlds__typecheck__STATE_VARIABLE_Info_0_16;
#line 766 "typecheck.m"
    else
#line 767 "typecheck.m"
      {
#line 767 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_14;
#line 767 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_15;

#line 767 "typecheck.m"
        {
#line 767 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_16, &check_hlds__typecheck__ClauseContext_14);
        }
#line 768 "typecheck.m"
        {
#line 768 "typecheck.m"
          check_hlds__typecheck__Spec_15 = check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_3_f_0(check_hlds__typecheck__ClauseContext_14, check_hlds__typecheck__Context_7, check_hlds__typecheck__VarName_13);
        }
#line 770 "typecheck.m"
        {
#line 770 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_15, check_hlds__typecheck__STATE_VARIABLE_Info_0_16, check_hlds__typecheck__STATE_VARIABLE_Info_17);
#line 770 "typecheck.m"
          return;
        }
#line 767 "typecheck.m"
      }
#line 761 "typecheck.m"
  }
#line 757 "typecheck.m"
}

#line 751 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
#line 751 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 751 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 751 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 751 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 751 "typecheck.m"
{
#line 751 "typecheck.m"
  {
#line 751 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 751 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17;

#line 751 "typecheck.m"
    {
#line 751 "typecheck.m"
      check_hlds__typecheck__check_mention_existq_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17);
    }
#line 751 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17));
#line 751 "typecheck.m"
  }
#line 751 "typecheck.m"
}

#line 744 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
#line 744 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_6,
#line 744 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVars_7,
#line 744 "typecheck.m"
  MR_Word check_hlds__typecheck__Clause_8,
#line 744 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 744 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21)
#line 744 "typecheck.m"
{
#line 747 "typecheck.m"
  {
#line 747 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 747 "typecheck.m"
    MR_Word check_hlds__typecheck__Goal_10;
#line 753 "typecheck.m"
    MR_Word check_hlds__typecheck__Impl_17;
#line 749 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 749 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;
#line 749 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;
#line 749 "typecheck.m"
    MR_Word check_hlds__typecheck__V_12_12;
#line 749 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_13_13;
#line 749 "typecheck.m"
    MR_Word check_hlds__typecheck__V_14_14;
#line 749 "typecheck.m"
    MR_Word check_hlds__typecheck__V_15_15;
#line 749 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;

#line 748 "typecheck.m"
    {
#line 748 "typecheck.m"
      check_hlds__typecheck__Goal_10 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__typecheck__Clause_8);
    }
#line 749 "typecheck.m"
    check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_10, (MR_Integer) 0)));
#line 749 "typecheck.m"
    check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_10, (MR_Integer) 1)));
#line 749 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 749 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 749 "typecheck.m"
      {
#line 749 "typecheck.m"
        check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 1)));
#line 749 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 2)));
#line 749 "typecheck.m"
        check_hlds__typecheck__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 3)));
#line 749 "typecheck.m"
        check_hlds__typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 4)));
#line 749 "typecheck.m"
        check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 5)));
#line 749 "typecheck.m"
        check_hlds__typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 6)));
#line 749 "typecheck.m"
        check_hlds__typecheck__Impl_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 7)));
#line 750 "typecheck.m"
        {
#line 750 "typecheck.m"
          MR_Word check_hlds__typecheck__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 3)));
#line 750 "typecheck.m"
          MR_Word check_hlds__typecheck__V_23_23;
#line 750 "typecheck.m"
          MR_Word check_hlds__typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 0)));
#line 750 "typecheck.m"
          MR_Word check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 1)));
#line 750 "typecheck.m"
          MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 2)));
#line 750 "typecheck.m"
          MR_Word check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 4)));
#line 751 "typecheck.m"
          MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21;

#line 751 "typecheck.m"
          {
#line 751 "typecheck.m"
            check_hlds__typecheck__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 751 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_7[0]));
#line 751 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__check_existq_clause_5_p_0_1));
#line 751 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 751 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 3) = ((MR_Box) (check_hlds__typecheck__Context_19));
#line 751 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 4) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_6));
#line 751 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 5) = ((MR_Box) (check_hlds__typecheck__Impl_17));
#line 751 "typecheck.m"
          }
#line 751 "typecheck.m"
          {
#line 751 "typecheck.m"
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__V_23_23, check_hlds__typecheck__ExistQVars_7, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_20)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21);
          }
#line 751 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_21 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21);
#line 750 "typecheck.m"
        }
#line 749 "typecheck.m"
      }
#line 749 "typecheck.m"
    else
#line 753 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_21 = check_hlds__typecheck__STATE_VARIABLE_Info_0_20;
#line 747 "typecheck.m"
  }
#line 744 "typecheck.m"
}

#line 695 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
#line 695 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 695 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 695 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 695 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 695 "typecheck.m"
{
#line 695 "typecheck.m"
  {
#line 695 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 695 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21;

#line 695 "typecheck.m"
    {
#line 695 "typecheck.m"
      check_hlds__typecheck__check_existq_clause_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21);
    }
#line 695 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21));
#line 695 "typecheck.m"
  }
#line 695 "typecheck.m"
}

#line 535 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_8,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_9,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_70,
#line 535 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_71,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_72,
#line 535 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_12)
#line 535 "typecheck.m"
{
#line 541 "typecheck.m"
  {
#line 541 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0_17;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers_18;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVars_19;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ClauseVarSet_20;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes0_21;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Status_22;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_23;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars0_25;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes0_26;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_27;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Inferring_28;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConstraints_30;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ClassTable_32;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints_33;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunction_34;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMarkers_35;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Clauses0_36;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Clauses_37;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_38;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_39;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredVarTypes0_40;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredTypeConstraints0_41;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstraintProofMap_42;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstraintMap_43;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarRenaming_44;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypeRenaming_45;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredVarTypes_46;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes1_47;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes_50;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep_51;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_52;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_53;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredTypeConstraints_54;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__UnprovenBodyConstraints_55;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_90_90;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_92_92;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_94_94;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105;
#line 541 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_108_108;
#line 548 "typecheck.m"
    MR_Word check_hlds__typecheck___ArgTypeVarSet_24;

#line 541 "typecheck.m"
    {
#line 541 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73);
    }
#line 542 "typecheck.m"
    {
#line 542 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ClausesRep0_17, &check_hlds__typecheck__ItemNumbers_18);
    }
#line 543 "typecheck.m"
    {
#line 543 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__HeadVars_19);
    }
#line 544 "typecheck.m"
    {
#line 544 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ClauseVarSet_20);
    }
#line 545 "typecheck.m"
    {
#line 545 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ExplicitVarTypes0_21);
    }
#line 546 "typecheck.m"
    {
#line 546 "typecheck.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__Status_22);
    }
#line 547 "typecheck.m"
    {
#line 547 "typecheck.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__TypeVarSet0_23);
    }
#line 548 "typecheck.m"
    {
#line 548 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck___ArgTypeVarSet_24, &check_hlds__typecheck__ExistQVars0_25, &check_hlds__typecheck__ArgTypes0_26);
    }
#line 550 "typecheck.m"
    {
#line 550 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__Markers0_27);
    }
#line 551 "typecheck.m"
    {
#line 551 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_27, (MR_Integer) 2);
    }
#line 563 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 556 "typecheck.m"
      {
#line 556 "typecheck.m"
        check_hlds__typecheck__Inferring_28 = (MR_Integer) 1;
#line 558 "typecheck.m"
        {
#line 558 "typecheck.m"
          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Inferring type of ", check_hlds__typecheck__PredId_9, check_hlds__typecheck__ModuleInfo_8);
        }
#line 561 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "typecheck.m"
        check_hlds__typecheck__PredConstraints_30 = (MR_Word) &check_hlds__typecheck_scalar_common_1[20];
#line 556 "typecheck.m"
      }
#line 563 "typecheck.m"
    else
#line 564 "typecheck.m"
      {
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_121_121;
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__UnivTVars_31;
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_84_84;
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__V_85_85;
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86;
#line 564 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_87_87;
#line 571 "typecheck.m"
        MR_Word check_hlds__typecheck__V_120_120;

#line 564 "typecheck.m"
        check_hlds__typecheck__Inferring_28 = (MR_Integer) 0;
#line 566 "typecheck.m"
        {
#line 566 "typecheck.m"
          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Type-checking ", check_hlds__typecheck__PredId_9, check_hlds__typecheck__ModuleInfo_8);
        }
#line 569 "typecheck.m"
        {
#line 569 "typecheck.m"
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes0_26, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_84_84);
        }
#line 570 "typecheck.m"
        {
#line 570 "typecheck.m"
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__PredConstraints_30);
        }
#line 571 "typecheck.m"
        check_hlds__typecheck__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredConstraints_30, (MR_Integer) 0)));
#line 571 "typecheck.m"
        check_hlds__typecheck__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredConstraints_30, (MR_Integer) 1)));
#line 571 "typecheck.m"
        {
#line 571 "typecheck.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__typecheck__V_85_85, &check_hlds__typecheck__UnivTVars_31);
        }
#line 16598 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeInfo_121_121 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 573 "typecheck.m"
        {
#line 573 "typecheck.m"
          check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__UnivTVars_31, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_84_84);
        }
#line 574 "typecheck.m"
        {
#line 574 "typecheck.m"
          mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_87_87);
        }
#line 575 "typecheck.m"
        {
#line 575 "typecheck.m"
          mercury__list__delete_elems_3_p_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_87_87, check_hlds__typecheck__ExistQVars0_25, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78);
        }
#line 564 "typecheck.m"
      }
#line 578 "typecheck.m"
    {
#line 578 "typecheck.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_8, &check_hlds__typecheck__ClassTable_32);
    }
#line 579 "typecheck.m"
    {
#line 579 "typecheck.m"
      hlds__hlds_data__make_head_hlds_constraints_4_p_0(check_hlds__typecheck__ClassTable_32, check_hlds__typecheck__TypeVarSet0_23, check_hlds__typecheck__PredConstraints_30, &check_hlds__typecheck__Constraints_33);
    }
#line 581 "typecheck.m"
    {
#line 581 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69);
    }
#line 583 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 582 "typecheck.m"
      check_hlds__typecheck__IsFieldAccessFunction_34 = (MR_Integer) 1;
#line 583 "typecheck.m"
    else
#line 584 "typecheck.m"
      check_hlds__typecheck__IsFieldAccessFunction_34 = (MR_Integer) 0;
#line 586 "typecheck.m"
    {
#line 586 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__PredMarkers_35);
    }
#line 587 "typecheck.m"
    {
#line 587 "typecheck.m"
      check_hlds__type_assign__type_assign_set_init_5_p_0(check_hlds__typecheck__TypeVarSet0_23, check_hlds__typecheck__ExplicitVarTypes0_21, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78, check_hlds__typecheck__Constraints_33, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89);
    }
#line 589 "typecheck.m"
    {
#line 589 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_init_8_p_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__PredId_9, check_hlds__typecheck__IsFieldAccessFunction_34, check_hlds__typecheck__ClauseVarSet_20, check_hlds__typecheck__Status_22, check_hlds__typecheck__PredMarkers_35, check_hlds__typecheck__STATE_VARIABLE_Specs_0_71, &check_hlds__typecheck__STATE_VARIABLE_Info_90_90);
    }
#line 591 "typecheck.m"
    {
#line 591 "typecheck.m"
      hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__typecheck__ClausesRep0_17, &check_hlds__typecheck__Clauses0_36);
    }
#line 592 "typecheck.m"
    {
#line 592 "typecheck.m"
      check_hlds__typecheck__typecheck_clause_list_8_p_0(check_hlds__typecheck__HeadVars_19, check_hlds__typecheck__ArgTypes0_26, check_hlds__typecheck__Clauses0_36, &check_hlds__typecheck__Clauses_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91, check_hlds__typecheck__STATE_VARIABLE_Info_90_90, &check_hlds__typecheck__STATE_VARIABLE_Info_92_92);
    }
#line 596 "typecheck.m"
    {
#line 596 "typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__Context_38);
    }
#line 597 "typecheck.m"
    {
#line 597 "typecheck.m"
      check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_38, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_Info_92_92, &check_hlds__typecheck__STATE_VARIABLE_Info_94_94);
    }
#line 598 "typecheck.m"
    {
#line 598 "typecheck.m"
      check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(check_hlds__typecheck__Context_38, (MR_Integer) 1, check_hlds__typecheck__HeadVars_19, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_Info_94_94, &check_hlds__typecheck__STATE_VARIABLE_Info_96_96);
    }
#line 600 "typecheck.m"
    {
#line 600 "typecheck.m"
      check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78, check_hlds__typecheck__ExistQVars0_25, check_hlds__typecheck__ExplicitVarTypes0_21, &check_hlds__typecheck__TypeVarSet_39, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97, &check_hlds__typecheck__InferredVarTypes0_40, &check_hlds__typecheck__InferredTypeConstraints0_41, &check_hlds__typecheck__ConstraintProofMap_42, &check_hlds__typecheck__ConstraintMap_43, &check_hlds__typecheck__TVarRenaming_44, &check_hlds__typecheck__ExistTypeRenaming_45);
    }
#line 605 "typecheck.m"
    {
#line 605 "typecheck.m"
      parse_tree__prog_data__vartypes_optimize_2_p_0(check_hlds__typecheck__InferredVarTypes0_40, &check_hlds__typecheck__InferredVarTypes_46);
    }
#line 606 "typecheck.m"
    {
#line 606 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__typecheck__InferredVarTypes_46, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98);
    }
#line 612 "typecheck.m"
    if ((check_hlds__typecheck__ExistQVars0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 611 "typecheck.m"
      check_hlds__typecheck__ExplicitVarTypes1_47 = check_hlds__typecheck__ExplicitVarTypes0_21;
#line 612 "typecheck.m"
    else
#line 614 "typecheck.m"
      {
#line 614 "typecheck.m"
        parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__ExplicitVarTypes0_21, &check_hlds__typecheck__ExplicitVarTypes1_47);
      }
#line 617 "typecheck.m"
    {
#line 617 "typecheck.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__ExplicitVarTypes1_47, &check_hlds__typecheck__ExplicitVarTypes_50);
    }
#line 620 "typecheck.m"
    {
#line 620 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(check_hlds__typecheck__ExplicitVarTypes_50, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99);
    }
#line 621 "typecheck.m"
    {
#line 621 "typecheck.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__Clauses_37, &check_hlds__typecheck__ClausesRep_51);
    }
#line 622 "typecheck.m"
    {
#line 622 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_51, check_hlds__typecheck__ItemNumbers_18, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100);
    }
#line 623 "typecheck.m"
    {
#line 623 "typecheck.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101);
    }
#line 624 "typecheck.m"
    {
#line 624 "typecheck.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102);
    }
#line 625 "typecheck.m"
    {
#line 625 "typecheck.m"
      hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(check_hlds__typecheck__ConstraintProofMap_42, check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103);
    }
#line 626 "typecheck.m"
    {
#line 626 "typecheck.m"
      hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(check_hlds__typecheck__ConstraintMap_43, check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104);
    }
#line 631 "typecheck.m"
    {
#line 631 "typecheck.m"
      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__InferredVarTypes_46, check_hlds__typecheck__HeadVars_19, &check_hlds__typecheck__ArgTypes_52);
    }
#line 632 "typecheck.m"
    {
#line 632 "typecheck.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes_52, &check_hlds__typecheck__ArgTypeVars_53);
    }
#line 633 "typecheck.m"
    {
#line 633 "typecheck.m"
      check_hlds__typecheck__restrict_to_head_vars_4_p_0(check_hlds__typecheck__InferredTypeConstraints0_41, check_hlds__typecheck__ArgTypeVars_53, &check_hlds__typecheck__InferredTypeConstraints_54, &check_hlds__typecheck__UnprovenBodyConstraints_55);
    }
#line 643 "typecheck.m"
    {
#line 643 "typecheck.m"
      hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_p_0(check_hlds__typecheck__UnprovenBodyConstraints_55, check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105);
    }
#line 672 "typecheck.m"
    if ((check_hlds__typecheck__Inferring_28 == (MR_Integer) 0))
#line 673 "typecheck.m"
      {
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__Origin0_59;
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__ExistQVars1_60;
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypes1_61;
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__PredConstraints1_62;
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__Origin1_63;
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__RenamedOldArgTypes_66;
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__RenamedOldConstraints_67;
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__Origin_68;
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106;
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109;
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110;
#line 673 "typecheck.m"
        MR_Word check_hlds__typecheck__ExistQVars_118;

#line 674 "typecheck.m"
        {
#line 674 "typecheck.m"
          hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97, check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106);
        }
#line 675 "typecheck.m"
        {
#line 675 "typecheck.m"
          hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106, &check_hlds__typecheck__Origin0_59);
        }
#line 692 "typecheck.m"
        if ((check_hlds__typecheck__ExistQVars0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 686 "typecheck.m"
          {
#line 688 "typecheck.m"
            check_hlds__typecheck__ExistQVars1_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "typecheck.m"
            check_hlds__typecheck__ArgTypes1_61 = check_hlds__typecheck__ArgTypes0_26;
#line 690 "typecheck.m"
            check_hlds__typecheck__PredConstraints1_62 = check_hlds__typecheck__PredConstraints_30;
#line 691 "typecheck.m"
            check_hlds__typecheck__Origin1_63 = check_hlds__typecheck__Origin0_59;
#line 686 "typecheck.m"
            check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
#line 686 "typecheck.m"
          }
#line 692 "typecheck.m"
        else
#line 693 "typecheck.m"
          {
#line 693 "typecheck.m"
            MR_Word check_hlds__typecheck__V_107_107;
#line 694 "typecheck.m"
            MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108;

#line 695 "typecheck.m"
            {
#line 695 "typecheck.m"
              check_hlds__typecheck__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 695 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[0]));
#line 695 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 1) = ((MR_Box) (check_hlds__typecheck__do_typecheck_pred_7_p_0_1));
#line 695 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 695 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 3) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_39));
#line 695 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 4) = ((MR_Box) (check_hlds__typecheck__ExistQVars0_25));
#line 695 "typecheck.m"
            }
#line 694 "typecheck.m"
            {
#line 694 "typecheck.m"
              mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__V_107_107, check_hlds__typecheck__Clauses_37, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_96_96)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108);
            }
#line 694 "typecheck.m"
            check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108);
#line 698 "typecheck.m"
            {
#line 698 "typecheck.m"
              check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ExistQVars0_25, check_hlds__typecheck__ExistTypeRenaming_45, &check_hlds__typecheck__ExistQVars1_60);
            }
#line 700 "typecheck.m"
            {
#line 700 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__ArgTypes0_26, &check_hlds__typecheck__ArgTypes1_61);
            }
#line 702 "typecheck.m"
            {
#line 702 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__PredConstraints_30, &check_hlds__typecheck__PredConstraints1_62);
            }
#line 704 "typecheck.m"
            {
#line 704 "typecheck.m"
              check_hlds__typecheck__rename_instance_method_constraints_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__Origin0_59, &check_hlds__typecheck__Origin1_63);
            }
#line 693 "typecheck.m"
          }
#line 709 "typecheck.m"
        {
#line 709 "typecheck.m"
          check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ExistQVars1_60, check_hlds__typecheck__TVarRenaming_44, &check_hlds__typecheck__ExistQVars_118);
        }
#line 711 "typecheck.m"
        {
#line 711 "typecheck.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__ArgTypes1_61, &check_hlds__typecheck__RenamedOldArgTypes_66);
        }
#line 713 "typecheck.m"
        {
#line 713 "typecheck.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__PredConstraints1_62, &check_hlds__typecheck__RenamedOldConstraints_67);
        }
#line 715 "typecheck.m"
        {
#line 715 "typecheck.m"
          check_hlds__typecheck__rename_instance_method_constraints_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__Origin1_63, &check_hlds__typecheck__Origin_68);
        }
#line 718 "typecheck.m"
        {
#line 718 "typecheck.m"
          hlds__hlds_pred__pred_info_set_arg_types_5_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__ExistQVars_118, check_hlds__typecheck__RenamedOldArgTypes_66, check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109);
        }
#line 720 "typecheck.m"
        {
#line 720 "typecheck.m"
          hlds__hlds_pred__pred_info_set_class_context_3_p_0(check_hlds__typecheck__RenamedOldConstraints_67, check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110);
        }
#line 721 "typecheck.m"
        {
#line 721 "typecheck.m"
          hlds__hlds_pred__pred_info_set_origin_3_p_0(check_hlds__typecheck__Origin_68, check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110, check_hlds__typecheck__STATE_VARIABLE_PredInfo_70);
        }
#line 723 "typecheck.m"
        *check_hlds__typecheck__Changed_12 = (MR_Integer) 0;
#line 673 "typecheck.m"
      }
#line 672 "typecheck.m"
    else
#line 647 "typecheck.m"
      {
#line 647 "typecheck.m"
        MR_Word check_hlds__typecheck__ExistQVars_56;
#line 647 "typecheck.m"
        MR_Word check_hlds__typecheck__OldTypeConstraints_57;
#line 647 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_112_112;
#line 647 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113;
#line 647 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114;
#line 663 "typecheck.m"
        MR_Word check_hlds__typecheck__TVarKindMap_58;

#line 650 "typecheck.m"
        {
#line 650 "typecheck.m"
          check_hlds__typecheck__infer_existential_types_4_p_0(check_hlds__typecheck__ArgTypeVars_53, &check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_112_112);
        }
#line 653 "typecheck.m"
        {
#line 653 "typecheck.m"
          hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_112_112, check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113);
        }
#line 654 "typecheck.m"
        {
#line 654 "typecheck.m"
          hlds__hlds_pred__pred_info_set_arg_types_5_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__ArgTypes_52, check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114);
        }
#line 656 "typecheck.m"
        {
#line 656 "typecheck.m"
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114, &check_hlds__typecheck__OldTypeConstraints_57);
        }
#line 657 "typecheck.m"
        {
#line 657 "typecheck.m"
          hlds__hlds_pred__pred_info_set_class_context_3_p_0(check_hlds__typecheck__InferredTypeConstraints_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114, check_hlds__typecheck__STATE_VARIABLE_PredInfo_70);
        }
#line 663 "typecheck.m"
        {
#line 663 "typecheck.m"
          hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(*check_hlds__typecheck__STATE_VARIABLE_PredInfo_70, &check_hlds__typecheck__TVarKindMap_58);
        }
#line 664 "typecheck.m"
        {
#line 664 "typecheck.m"
          check_hlds__typecheck__succeeded = check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(check_hlds__typecheck__TVarKindMap_58, check_hlds__typecheck__ExistQVars0_25, check_hlds__typecheck__ArgTypes0_26, check_hlds__typecheck__OldTypeConstraints_57, check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__ArgTypes_52, check_hlds__typecheck__InferredTypeConstraints_54);
        }
#line 669 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 668 "typecheck.m"
          *check_hlds__typecheck__Changed_12 = (MR_Integer) 0;
#line 669 "typecheck.m"
        else
#line 670 "typecheck.m"
          *check_hlds__typecheck__Changed_12 = (MR_Integer) 1;
#line 647 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
#line 647 "typecheck.m"
      }
#line 725 "typecheck.m"
    {
#line 725 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_108_108, check_hlds__typecheck__STATE_VARIABLE_Specs_72);
#line 725 "typecheck.m"
      return;
    }
#line 541 "typecheck.m"
  }
#line 535 "typecheck.m"
}

#line 505 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0_1(
#line 505 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg)
#line 505 "typecheck.m"
{
#line 505 "typecheck.m"
  {
#line 505 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 505 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 505 "typecheck.m"
    {
#line 505 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__505__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))));
    }
#line 505 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 505 "typecheck.m"
  }
#line 505 "typecheck.m"
}

#line 441 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0(
#line 441 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7,
#line 441 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_8,
#line 441 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 441 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_33,
#line 441 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_10,
#line 441 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_11)
#line 441 "typecheck.m"
{
#line 444 "typecheck.m"
  {
#line 444 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__Globals_12;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes0_15;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesInfo0_16;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0_17;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers0_18;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_19;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0IsEmpty_20;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__StartingSpecs_22;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep1_26;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVars_28;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep1IsEmpty_29;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42;
#line 444 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45;
#line 452 "typecheck.m"
    MR_Word check_hlds__typecheck___ArgTypeVarSet_13;
#line 452 "typecheck.m"
    MR_Word check_hlds__typecheck___ExistQVars0_14;
#line 500 "typecheck.m"
    MR_Word check_hlds__typecheck___ItemNumbers_27;

#line 451 "typecheck.m"
    {
#line 451 "typecheck.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_7, &check_hlds__typecheck__Globals_12);
    }
#line 452 "typecheck.m"
    {
#line 452 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck___ArgTypeVarSet_13, &check_hlds__typecheck___ExistQVars0_14, &check_hlds__typecheck__ArgTypes0_15);
    }
#line 454 "typecheck.m"
    {
#line 454 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__ClausesInfo0_16);
    }
#line 455 "typecheck.m"
    {
#line 455 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_16, &check_hlds__typecheck__ClausesRep0_17, &check_hlds__typecheck__ItemNumbers0_18);
    }
#line 456 "typecheck.m"
    {
#line 456 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__Markers0_19);
    }
#line 457 "typecheck.m"
    {
#line 457 "typecheck.m"
      check_hlds__typecheck__ClausesRep0IsEmpty_20 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_17);
    }
#line 475 "typecheck.m"
    if ((check_hlds__typecheck__ClausesRep0IsEmpty_20 == (MR_Integer) 0))
#line 476 "typecheck.m"
      {
#line 476 "typecheck.m"
        MR_Word check_hlds__typecheck__WarnNonContiguousForeignProcs_23;

#line 477 "typecheck.m"
        {
#line 477 "typecheck.m"
          libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_12, (MR_Integer) 16, &check_hlds__typecheck__WarnNonContiguousForeignProcs_23);
        }
#line 483 "typecheck.m"
        if ((check_hlds__typecheck__WarnNonContiguousForeignProcs_23 == (MR_Integer) 0))
#line 484 "typecheck.m"
          {
#line 484 "typecheck.m"
            MR_Word check_hlds__typecheck__WarnNonContiguousClauses_24;

#line 485 "typecheck.m"
            {
#line 485 "typecheck.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_12, (MR_Integer) 15, &check_hlds__typecheck__WarnNonContiguousClauses_24);
            }
#line 491 "typecheck.m"
            if ((check_hlds__typecheck__WarnNonContiguousClauses_24 == (MR_Integer) 0))
#line 493 "typecheck.m"
              check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 491 "typecheck.m"
            else
#line 488 "typecheck.m"
              {
#line 740 "typecheck.m"
                MR_Word check_hlds__typecheck__FirstRegion_69;
#line 740 "typecheck.m"
                MR_Word check_hlds__typecheck__SecondRegion_70;
#line 740 "typecheck.m"
                MR_Word check_hlds__typecheck__LaterRegions_71;

#line 734 "typecheck.m"
                {
#line 734 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(check_hlds__typecheck__ItemNumbers0_18, (MR_Integer) 0, &check_hlds__typecheck__FirstRegion_69, &check_hlds__typecheck__SecondRegion_70, &check_hlds__typecheck__LaterRegions_71);
                }
#line 740 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 738 "typecheck.m"
                  {
#line 738 "typecheck.m"
                    MR_Word check_hlds__typecheck__Spec_72;

#line 737 "typecheck.m"
                    {
#line 737 "typecheck.m"
                      check_hlds__typecheck__Spec_72 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__typecheck__FirstRegion_69, check_hlds__typecheck__SecondRegion_70, check_hlds__typecheck__LaterRegions_71);
                    }
#line 739 "typecheck.m"
                    {
#line 739 "typecheck.m"
                      check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 0) = ((MR_Box) (check_hlds__typecheck__Spec_72));
#line 739 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 739 "typecheck.m"
                    }
#line 738 "typecheck.m"
                  }
#line 740 "typecheck.m"
                else
#line 741 "typecheck.m"
                  check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 488 "typecheck.m"
              }
#line 484 "typecheck.m"
          }
#line 483 "typecheck.m"
        else
#line 480 "typecheck.m"
          {
#line 740 "typecheck.m"
            MR_Word check_hlds__typecheck__FirstRegion_80;
#line 740 "typecheck.m"
            MR_Word check_hlds__typecheck__SecondRegion_81;
#line 740 "typecheck.m"
            MR_Word check_hlds__typecheck__LaterRegions_82;

#line 734 "typecheck.m"
            {
#line 734 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(check_hlds__typecheck__ItemNumbers0_18, (MR_Integer) 1, &check_hlds__typecheck__FirstRegion_80, &check_hlds__typecheck__SecondRegion_81, &check_hlds__typecheck__LaterRegions_82);
            }
#line 740 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 738 "typecheck.m"
              {
#line 738 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_83;

#line 737 "typecheck.m"
                {
#line 737 "typecheck.m"
                  check_hlds__typecheck__Spec_83 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__typecheck__FirstRegion_80, check_hlds__typecheck__SecondRegion_81, check_hlds__typecheck__LaterRegions_82);
                }
#line 739 "typecheck.m"
                {
#line 739 "typecheck.m"
                  check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 0) = ((MR_Box) (check_hlds__typecheck__Spec_83));
#line 739 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 739 "typecheck.m"
                }
#line 738 "typecheck.m"
              }
#line 740 "typecheck.m"
            else
#line 741 "typecheck.m"
              check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 480 "typecheck.m"
          }
#line 476 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32;
#line 476 "typecheck.m"
      }
#line 475 "typecheck.m"
    else
#line 467 "typecheck.m"
      {
#line 462 "typecheck.m"
        MR_Word check_hlds__typecheck__V_40_40;

#line 461 "typecheck.m"
        {
#line 461 "typecheck.m"
          check_hlds__typecheck__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__typecheck__Globals_12, (MR_Integer) 165, (MR_Integer) 1);
        }
#line 461 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 461 "typecheck.m"
          {
#line 462 "typecheck.m"
            check_hlds__typecheck__V_40_40 = (MR_Integer) 9;
#line 462 "typecheck.m"
            {
#line 462 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_19, check_hlds__typecheck__V_40_40);
            }
#line 462 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 461 "typecheck.m"
          }
#line 467 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 464 "typecheck.m"
          {
#line 464 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_21;

#line 464 "typecheck.m"
            {
#line 464 "typecheck.m"
              check_hlds__typecheck__Spec_21 = check_hlds__typecheck_errors__report_no_clauses_stub_3_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32);
            }
#line 465 "typecheck.m"
            {
#line 465 "typecheck.m"
              check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 0) = ((MR_Box) (check_hlds__typecheck__Spec_21));
#line 465 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "typecheck.m"
            }
#line 466 "typecheck.m"
            {
#line 466 "typecheck.m"
              check_hlds__typecheck__generate_stub_clause_4_p_0(check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, check_hlds__typecheck__ModuleInfo_7);
            }
#line 464 "typecheck.m"
          }
#line 467 "typecheck.m"
        else
#line 472 "typecheck.m"
          {
#line 468 "typecheck.m"
            {
#line 468 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_19, (MR_Integer) 1);
            }
#line 472 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 470 "typecheck.m"
              {
#line 470 "typecheck.m"
                check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 471 "typecheck.m"
                {
#line 471 "typecheck.m"
                  check_hlds__typecheck__generate_stub_clause_4_p_0(check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, check_hlds__typecheck__ModuleInfo_7);
                }
#line 470 "typecheck.m"
              }
#line 472 "typecheck.m"
            else
#line 473 "typecheck.m"
              {
#line 473 "typecheck.m"
                check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 473 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32;
#line 473 "typecheck.m"
              }
#line 472 "typecheck.m"
          }
#line 467 "typecheck.m"
      }
#line 499 "typecheck.m"
    {
#line 499 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45);
    }
#line 500 "typecheck.m"
    {
#line 500 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45, &check_hlds__typecheck__ClausesRep1_26, &check_hlds__typecheck___ItemNumbers_27);
    }
#line 501 "typecheck.m"
    {
#line 501 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45, &check_hlds__typecheck__HeadVars_28);
    }
#line 502 "typecheck.m"
    {
#line 502 "typecheck.m"
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
#line 504 "typecheck.m"
      {
#line 504 "typecheck.m"
        MR_Word check_hlds__typecheck__V_47_47;

#line 505 "typecheck.m"
        {
#line 505 "typecheck.m"
          check_hlds__typecheck__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 505 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[0]));
#line 505 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_pred_6_p_0_1));
#line 505 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 505 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 3) = ((MR_Box) (check_hlds__typecheck__StartingSpecs_22));
#line 505 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "typecheck.m"
        }
#line 505 "typecheck.m"
        {
#line 505 "typecheck.m"
          mercury__require__expect_4_p_0(check_hlds__typecheck__V_47_47, (MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_pred\'/6", (MR_String) "StartingSpecs not empty");
        }
#line 510 "typecheck.m"
        {
#line 510 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_19, (MR_Integer) 9);
        }
#line 524 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 514 "typecheck.m"
          {
#line 514 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_30;
#line 514 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadVarsIncludingExistentials_31;
#line 514 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_53_53;
#line 514 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_54_54;

#line 513 "typecheck.m"
            {
#line 513 "typecheck.m"
              parse_tree__prog_data__vartypes_from_corresponding_lists_3_p_0(check_hlds__typecheck__HeadVars_28, check_hlds__typecheck__ArgTypes0_15, &check_hlds__typecheck__VarTypes_30);
            }
#line 515 "typecheck.m"
            {
#line 515 "typecheck.m"
              hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__typecheck__VarTypes_30, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_53_53);
            }
#line 516 "typecheck.m"
            {
#line 516 "typecheck.m"
              hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_53_53, check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_54_54);
            }
#line 520 "typecheck.m"
            {
#line 520 "typecheck.m"
              parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes0_15, &check_hlds__typecheck__HeadVarsIncludingExistentials_31);
            }
#line 521 "typecheck.m"
            {
#line 521 "typecheck.m"
              hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__HeadVarsIncludingExistentials_31, check_hlds__typecheck__STATE_VARIABLE_PredInfo_54_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_33);
            }
#line 523 "typecheck.m"
            *check_hlds__typecheck__Specs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 514 "typecheck.m"
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
#line 525 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_PredInfo_33 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42;
#line 525 "typecheck.m"
          }
#line 527 "typecheck.m"
        *check_hlds__typecheck__Changed_11 = (MR_Integer) 0;
#line 504 "typecheck.m"
      }
#line 444 "typecheck.m"
  }
#line 441 "typecheck.m"
}

#line 346 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 346 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
#line 346 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
#line 346 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
#line 346 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_9,
#line 346 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_10)
#line 346 "typecheck.m"
{
#line 352 "typecheck.m"
  {
#line 352 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 352 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 352 "typecheck.m"
      {
#line 352 "typecheck.m"
        *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 353 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Changed_10 = check_hlds__typecheck__STATE_VARIABLE_Changed_0_9;
#line 353 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Specs_8 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_7;
#line 353 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
#line 352 "typecheck.m"
      }
#line 352 "typecheck.m"
    else
#line 356 "typecheck.m"
      {
#line 356 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 356 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 356 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo_26;
#line 356 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_27;
#line 356 "typecheck.m"
        MR_Word check_hlds__typecheck__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_24, (MR_Integer) 0)));
#line 356 "typecheck.m"
        MR_Word check_hlds__typecheck__PredInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_24, (MR_Integer) 1)));

#line 360 "typecheck.m"
        {
#line 360 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__typecheck__PredInfo0_32);
        }
#line 361 "typecheck.m"
        if (!(check_hlds__typecheck__succeeded))
#line 362 "typecheck.m"
          {
#line 362 "typecheck.m"
            {
#line 362 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_31)));
            }
#line 362 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 362 "typecheck.m"
          }
#line 369 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 365 "typecheck.m"
          {
#line 365 "typecheck.m"
            check_hlds__typecheck__PredIdInfo_26 = check_hlds__typecheck__PredIdInfo0_24;
#line 366 "typecheck.m"
            {
#line 366 "typecheck.m"
              check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_25, &check_hlds__typecheck__PredIdsInfos_27, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7, check_hlds__typecheck__STATE_VARIABLE_Specs_8, check_hlds__typecheck__STATE_VARIABLE_Changed_0_9, check_hlds__typecheck__STATE_VARIABLE_Changed_10);
            }
#line 365 "typecheck.m"
          }
#line 369 "typecheck.m"
        else
#line 372 "typecheck.m"
          {
#line 372 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_33;
#line 372 "typecheck.m"
            MR_Word check_hlds__typecheck__PredSpecs_34;
#line 372 "typecheck.m"
            MR_Word check_hlds__typecheck__PredChanged_35;
#line 372 "typecheck.m"
            MR_Word check_hlds__typecheck__Globals_36;
#line 372 "typecheck.m"
            MR_Word check_hlds__typecheck__ContainsErrors_37;
#line 372 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47;
#line 372 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_48_48;
#line 372 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_49_49;

#line 418 "typecheck.m"
            {
#line 996 "typecheck.m"
              MR_Word check_hlds__typecheck__Origin_72;
#line 996 "typecheck.m"
              MR_Word check_hlds__typecheck__SpecialPredId_73;
#line 996 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeCtor_74;
#line 996 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeTable_75;
#line 996 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeDefn_76;
#line 996 "typecheck.m"
              MR_Word check_hlds__typecheck__Body_77;
#line 996 "typecheck.m"
              MR_Word check_hlds__typecheck__V_78_78;
#line 1004 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeCtorInfo_13_80;
#line 1004 "typecheck.m"
              MR_Word check_hlds__typecheck__V_79_79;

#line 418 "typecheck.m"
              {
#line 418 "typecheck.m"
                check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo0_32);
              }
#line 418 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 418 "typecheck.m"
                {
#line 999 "typecheck.m"
                  {
#line 999 "typecheck.m"
                    hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__Origin_72);
                  }
#line 1000 "typecheck.m"
                  check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin_72)) == (MR_mktag((MR_Integer) 0)));
#line 1000 "typecheck.m"
                  if (check_hlds__typecheck__succeeded)
#line 1000 "typecheck.m"
                    {
#line 1000 "typecheck.m"
                      check_hlds__typecheck__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Origin_72, (MR_Integer) 0)));
#line 1000 "typecheck.m"
                      check_hlds__typecheck__SpecialPredId_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_78_78, (MR_Integer) 0)));
#line 1000 "typecheck.m"
                      check_hlds__typecheck__TypeCtor_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_78_78, (MR_Integer) 1)));
#line 1004 "typecheck.m"
                      {
#line 1004 "typecheck.m"
                        check_hlds__typecheck__V_79_79 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
                      }
#line 17626 "check_hlds.typecheck.c"
                      check_hlds__typecheck__TypeCtorInfo_13_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1004 "typecheck.m"
                      {
#line 1004 "typecheck.m"
                        check_hlds__typecheck__succeeded = mercury__list__member_2_p_0(check_hlds__typecheck__TypeCtorInfo_13_80, ((MR_Box) (check_hlds__typecheck__TypeCtor_74)), check_hlds__typecheck__V_79_79);
                      }
#line 1004 "typecheck.m"
                      check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 996 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 996 "typecheck.m"
                        {
#line 1008 "typecheck.m"
                          {
#line 1008 "typecheck.m"
                            hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__TypeTable_75);
                          }
#line 1009 "typecheck.m"
                          {
#line 1009 "typecheck.m"
                            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_75, check_hlds__typecheck__TypeCtor_74, &check_hlds__typecheck__TypeDefn_76);
                          }
#line 1010 "typecheck.m"
                          {
#line 1010 "typecheck.m"
                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_76, &check_hlds__typecheck__Body_77);
                          }
#line 1011 "typecheck.m"
                          {
#line 1011 "typecheck.m"
                            check_hlds__typecheck__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__SpecialPredId_73, check_hlds__typecheck__Body_77);
                          }
#line 996 "typecheck.m"
                        }
#line 1000 "typecheck.m"
                    }
#line 419 "typecheck.m"
                  check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 418 "typecheck.m"
                }
#line 418 "typecheck.m"
            }
#line 420 "typecheck.m"
            if (!(check_hlds__typecheck__succeeded))
#line 421 "typecheck.m"
              {
#line 421 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers_62;
#line 423 "typecheck.m"
                MR_Word check_hlds__typecheck__V_67_67;

#line 421 "typecheck.m"
                {
#line 421 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(check_hlds__typecheck__PredInfo0_32);
                }
#line 421 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 421 "typecheck.m"
                  {
#line 422 "typecheck.m"
                    {
#line 422 "typecheck.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__Markers_62);
                    }
#line 423 "typecheck.m"
                    check_hlds__typecheck__V_67_67 = (MR_Integer) 1;
#line 423 "typecheck.m"
                    {
#line 423 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers_62, check_hlds__typecheck__V_67_67);
                    }
#line 423 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 421 "typecheck.m"
                  }
#line 421 "typecheck.m"
              }
#line 437 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 426 "typecheck.m"
              {
#line 426 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesInfo0_63;
#line 426 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesRep0_64;
#line 426 "typecheck.m"
                MR_Word check_hlds__typecheck__IsEmpty_66;
#line 427 "typecheck.m"
                MR_Word check_hlds__typecheck___ItemNumbers_65;

#line 426 "typecheck.m"
                {
#line 426 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__ClausesInfo0_63);
                }
#line 427 "typecheck.m"
                {
#line 427 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_63, &check_hlds__typecheck__ClausesRep0_64, &check_hlds__typecheck___ItemNumbers_65);
                }
#line 428 "typecheck.m"
                {
#line 428 "typecheck.m"
                  check_hlds__typecheck__IsEmpty_66 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_64);
                }
#line 432 "typecheck.m"
                if ((check_hlds__typecheck__IsEmpty_66 == (MR_Integer) 0))
#line 433 "typecheck.m"
                  check_hlds__typecheck__PredInfo_33 = check_hlds__typecheck__PredInfo0_32;
#line 432 "typecheck.m"
                else
#line 431 "typecheck.m"
                  {
#line 431 "typecheck.m"
                    hlds__hlds_pred__pred_info_mark_as_external_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__PredInfo_33);
                  }
#line 435 "typecheck.m"
                check_hlds__typecheck__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 436 "typecheck.m"
                check_hlds__typecheck__PredChanged_35 = (MR_Integer) 0;
#line 426 "typecheck.m"
              }
#line 437 "typecheck.m"
            else
#line 438 "typecheck.m"
              {
#line 438 "typecheck.m"
                check_hlds__typecheck__typecheck_pred_6_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_31, check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__PredInfo_33, &check_hlds__typecheck__PredSpecs_34, &check_hlds__typecheck__PredChanged_35);
              }
#line 374 "typecheck.m"
            {
#line 374 "typecheck.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__Globals_36);
            }
#line 375 "typecheck.m"
            {
#line 375 "typecheck.m"
              check_hlds__typecheck__ContainsErrors_37 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__typecheck__Globals_36, check_hlds__typecheck__PredSpecs_34);
            }
#line 378 "typecheck.m"
            if ((check_hlds__typecheck__ContainsErrors_37 == (MR_Integer) 0))
#line 377 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
#line 378 "typecheck.m"
            else
#line 394 "typecheck.m"
              {
#line 394 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, 0) = ((MR_Box) (check_hlds__typecheck__PredId_31));
#line 394 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5));
#line 394 "typecheck.m"
              }
#line 396 "typecheck.m"
            {
#line 396 "typecheck.m"
              check_hlds__typecheck__PredIdInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_26, 0) = ((MR_Box) (check_hlds__typecheck__PredId_31));
#line 396 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_26, 1) = ((MR_Box) (check_hlds__typecheck__PredInfo_33));
#line 396 "typecheck.m"
            }
#line 397 "typecheck.m"
            {
#line 397 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__PredSpecs_34, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7);
            }
#line 398 "typecheck.m"
            {
#line 398 "typecheck.m"
              mercury__bool__or_3_p_0(check_hlds__typecheck__PredChanged_35, check_hlds__typecheck__STATE_VARIABLE_Changed_0_9, &check_hlds__typecheck__STATE_VARIABLE_Changed_49_49);
            }
#line 399 "typecheck.m"
            {
#line 399 "typecheck.m"
              check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_25, &check_hlds__typecheck__PredIdsInfos_27, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6, check_hlds__typecheck__STATE_VARIABLE_Specs_48_48, check_hlds__typecheck__STATE_VARIABLE_Specs_8, check_hlds__typecheck__STATE_VARIABLE_Changed_49_49, check_hlds__typecheck__STATE_VARIABLE_Changed_10);
            }
#line 372 "typecheck.m"
          }
#line 355 "typecheck.m"
        {
#line 355 "typecheck.m"
          MR_Word base;
#line 355 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 355 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__PredIdInfo_26));
#line 355 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__PredIdsInfos_27));
#line 355 "typecheck.m"
        }
#line 356 "typecheck.m"
      }
#line 352 "typecheck.m"
  }
#line 346 "typecheck.m"
}

#line 273 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
#line 273 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 273 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 273 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 273 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_4,
#line 273 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_5)
#line 273 "typecheck.m"
{
#line 277 "typecheck.m"
  while (MR_TRUE)
#line 277 "typecheck.m"
    {
#line 277 "typecheck.m"
      /* tailcall optimized into a loop */
#line 277 "typecheck.m"
      {
#line 277 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 277 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Specs_5 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_4;
#line 277 "typecheck.m"
        else
#line 279 "typecheck.m"
          {
#line 279 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 279 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 279 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_16;
#line 279 "typecheck.m"
            MR_Word check_hlds__typecheck__Markers_17;
#line 279 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_23_23;
#line 283 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeCtorInfo_25_25;
#line 285 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18;

#line 280 "typecheck.m"
            {
#line 280 "typecheck.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_13, &check_hlds__typecheck__PredInfo_16);
            }
#line 281 "typecheck.m"
            {
#line 281 "typecheck.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Markers_17);
            }
#line 283 "typecheck.m"
            {
#line 283 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers_17, (MR_Integer) 2);
            }
#line 283 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 283 "typecheck.m"
              {
#line 17899 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 284 "typecheck.m"
                {
#line 284 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0(check_hlds__typecheck__TypeCtorInfo_25_25, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_13)));
                }
#line 283 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 283 "typecheck.m"
                  {
#line 285 "typecheck.m"
                    {
#line 285 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__V_18_18);
                    }
#line 285 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 283 "typecheck.m"
                  }
#line 283 "typecheck.m"
              }
#line 289 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 287 "typecheck.m"
              {
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_19;
#line 287 "typecheck.m"
                MR_String check_hlds__typecheck__PredName_28;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__PredOrFunc_29;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__Name_30;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__Context_31;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__VarSet_32;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVars_33;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__Types0_34;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__Types_35;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassContext_36;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__Purity_37;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeDet_38;
#line 287 "typecheck.m"
                MR_String check_hlds__typecheck__TypeStr_40;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__Pieces_43;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__Msg_44;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__V_57_57;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__V_58_58;
#line 287 "typecheck.m"
                MR_Word check_hlds__typecheck__V_66_66;

#line 301 "typecheck.m"
                {
#line 301 "typecheck.m"
                  check_hlds__typecheck__PredName_28 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__PredInfo_16);
                }
#line 302 "typecheck.m"
                {
#line 302 "typecheck.m"
                  check_hlds__typecheck__PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__typecheck__PredInfo_16);
                }
#line 303 "typecheck.m"
                {
#line 303 "typecheck.m"
                  check_hlds__typecheck__Name_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 303 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Name_30, 0) = ((MR_Box) (check_hlds__typecheck__PredName_28));
#line 303 "typecheck.m"
                }
#line 304 "typecheck.m"
                {
#line 304 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Context_31);
                }
#line 305 "typecheck.m"
                {
#line 305 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__VarSet_32, &check_hlds__typecheck__ExistQVars_33, &check_hlds__typecheck__Types0_34);
                }
#line 306 "typecheck.m"
                {
#line 306 "typecheck.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(check_hlds__typecheck__Types0_34, &check_hlds__typecheck__Types_35);
                }
#line 307 "typecheck.m"
                {
#line 307 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__ClassContext_36);
                }
#line 308 "typecheck.m"
                {
#line 308 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Purity_37);
                }
#line 309 "typecheck.m"
                check_hlds__typecheck__MaybeDet_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "typecheck.m"
                if ((check_hlds__typecheck__PredOrFunc_29 == (MR_Integer) 1))
#line 316 "typecheck.m"
                  {
#line 316 "typecheck.m"
                    MR_Word check_hlds__typecheck__ArgTypes_41;
#line 316 "typecheck.m"
                    MR_Word check_hlds__typecheck__RetType_42;
#line 317 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv0_RetType_42;

#line 317 "typecheck.m"
                    {
#line 317 "typecheck.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Types_35, &check_hlds__typecheck__ArgTypes_41, &check_hlds__typecheck__conv0_RetType_42);
                    }
#line 317 "typecheck.m"
                    check_hlds__typecheck__RetType_42 = ((MR_Word) check_hlds__typecheck__conv0_RetType_42);
#line 318 "typecheck.m"
                    {
#line 318 "typecheck.m"
                      check_hlds__typecheck__TypeStr_40 = parse_tree__mercury_to_mercury__mercury_func_type_to_string_10_f_0(check_hlds__typecheck__VarSet_32, check_hlds__typecheck__ExistQVars_33, check_hlds__typecheck__Name_30, check_hlds__typecheck__ArgTypes_41, check_hlds__typecheck__RetType_42, check_hlds__typecheck__MaybeDet_38, check_hlds__typecheck__Purity_37, check_hlds__typecheck__ClassContext_36, check_hlds__typecheck__Context_31, (MR_Integer) 0);
                    }
#line 316 "typecheck.m"
                  }
#line 315 "typecheck.m"
                else
#line 313 "typecheck.m"
                  {
#line 313 "typecheck.m"
                    check_hlds__typecheck__TypeStr_40 = parse_tree__mercury_to_mercury__mercury_pred_type_to_string_9_f_0(check_hlds__typecheck__VarSet_32, check_hlds__typecheck__ExistQVars_33, check_hlds__typecheck__Name_30, check_hlds__typecheck__Types_35, check_hlds__typecheck__MaybeDet_38, check_hlds__typecheck__Purity_37, check_hlds__typecheck__ClassContext_36, check_hlds__typecheck__Context_31, (MR_Integer) 0);
                  }
#line 322 "typecheck.m"
                {
#line 322 "typecheck.m"
                  check_hlds__typecheck__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 322 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_49_49, 1) = ((MR_Box) (check_hlds__typecheck__TypeStr_40));
#line 322 "typecheck.m"
                }
#line 322 "typecheck.m"
                {
#line 322 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__V_49_49));
#line 322 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[19])));
#line 322 "typecheck.m"
                }
#line 322 "typecheck.m"
                {
#line 322 "typecheck.m"
                  check_hlds__typecheck__Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[18])));
#line 322 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_43, 1) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 322 "typecheck.m"
                }
#line 324 "typecheck.m"
                {
#line 324 "typecheck.m"
                  check_hlds__typecheck__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 324 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (check_hlds__typecheck__Pieces_43));
#line 324 "typecheck.m"
                }
#line 324 "typecheck.m"
                {
#line 324 "typecheck.m"
                  check_hlds__typecheck__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_57_57, 0) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 324 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "typecheck.m"
                }
#line 324 "typecheck.m"
                {
#line 324 "typecheck.m"
                  check_hlds__typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 0) = ((MR_Box) (((MR_Integer) 43 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 324 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 1) = ((MR_Box) (check_hlds__typecheck__V_57_57));
#line 324 "typecheck.m"
                }
#line 324 "typecheck.m"
                {
#line 324 "typecheck.m"
                  check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_53_53, 0) = ((MR_Box) (check_hlds__typecheck__V_54_54));
#line 324 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "typecheck.m"
                }
#line 323 "typecheck.m"
                {
#line 323 "typecheck.m"
                  check_hlds__typecheck__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Msg_44, 0) = ((MR_Box) (check_hlds__typecheck__Context_31));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Msg_44, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 323 "typecheck.m"
                }
#line 327 "typecheck.m"
                {
#line 327 "typecheck.m"
                  check_hlds__typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 327 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__typecheck__Msg_44));
#line 327 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 327 "typecheck.m"
                }
#line 327 "typecheck.m"
                {
#line 327 "typecheck.m"
                  check_hlds__typecheck__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 327 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[0])));
#line 327 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 327 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 2) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 327 "typecheck.m"
                }
#line 288 "typecheck.m"
                {
#line 288 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Specs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_Specs_23_23, 0) = ((MR_Box) (check_hlds__typecheck__Spec_19));
#line 288 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_Specs_23_23, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Specs_0_4));
#line 288 "typecheck.m"
                }
#line 287 "typecheck.m"
              }
#line 289 "typecheck.m"
            else
#line 289 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_23_23 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_4;
#line 292 "typecheck.m"
            /* direct tailcall eliminated */
#line 292 "typecheck.m"
            {
#line 292 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__PredIds_14;
#line 292 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_Specs_23_23;

#line 292 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_0_4 = check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 292 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 292 "typecheck.m"
            }
#line 292 "typecheck.m"
            continue;
#line 279 "typecheck.m"
          }
#line 277 "typecheck.m"
      }
#line 277 "typecheck.m"
      break;
#line 277 "typecheck.m"
    }
#line 273 "typecheck.m"
}

#line 219 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_9_p_0(
#line 219 "typecheck.m"
  MR_Integer check_hlds__typecheck__Iteration_10,
#line 219 "typecheck.m"
  MR_Integer check_hlds__typecheck__MaxIterations_11,
#line 219 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32,
#line 219 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33,
#line 219 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIds_13,
#line 219 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_14,
#line 219 "typecheck.m"
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_15,
#line 219 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_16,
#line 219 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_17)
#line 219 "typecheck.m"
{
#line 226 "typecheck.m"
  while (MR_TRUE)
#line 226 "typecheck.m"
    {
#line 226 "typecheck.m"
      /* tailcall optimized into a loop */
#line 226 "typecheck.m"
      {
#line 226 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_51_51;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_52_52;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__PredMap0_18;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_19;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_20;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__NewlyInvalidPredIds_21;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__CurSpecs_22;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__Changed_23;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__PredMap_24;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__NewValidPredIdSet_25;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__Globals_26;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37;
#line 226 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;

#line 227 "typecheck.m"
        {
#line 227 "typecheck.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__typecheck__PredMap0_18);
        }
#line 18256 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_51_51 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 18258 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 228 "typecheck.m"
        {
#line 228 "typecheck.m"
          mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_51_51, check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__PredMap0_18, &check_hlds__typecheck__PredIdsInfos0_19);
        }
#line 229 "typecheck.m"
        {
#line 229 "typecheck.m"
          check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, check_hlds__typecheck__OrigValidPredIdSet_14, check_hlds__typecheck__PredIdsInfos0_19, &check_hlds__typecheck__PredIdsInfos_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__NewlyInvalidPredIds_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__CurSpecs_22, (MR_Integer) 0, &check_hlds__typecheck__Changed_23);
        }
#line 232 "typecheck.m"
        {
#line 232 "typecheck.m"
          mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_51_51, check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__PredIdsInfos_20, &check_hlds__typecheck__PredMap_24);
        }
#line 233 "typecheck.m"
        {
#line 233 "typecheck.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_24, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37);
        }
#line 235 "typecheck.m"
        {
#line 235 "typecheck.m"
          hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(check_hlds__typecheck__NewlyInvalidPredIds_21, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38);
        }
#line 236 "typecheck.m"
        {
#line 236 "typecheck.m"
          hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__typecheck__NewValidPredIdSet_25);
        }
#line 238 "typecheck.m"
        {
#line 238 "typecheck.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__typecheck__Globals_26);
        }
#line 240 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Changed_23 == (MR_Integer) 0);
#line 241 "typecheck.m"
        if (!(check_hlds__typecheck__succeeded))
#line 241 "typecheck.m"
          {
#line 241 "typecheck.m"
            MR_Word check_hlds__typecheck__V_39_39;

#line 241 "typecheck.m"
            {
#line 241 "typecheck.m"
              check_hlds__typecheck__V_39_39 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__typecheck__Globals_26, check_hlds__typecheck__CurSpecs_22);
            }
#line 241 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_39_39 == (MR_Integer) 1);
#line 241 "typecheck.m"
          }
#line 247 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 244 "typecheck.m"
          {
#line 244 "typecheck.m"
            *check_hlds__typecheck__FinalValidPredIdSet_15 = check_hlds__typecheck__NewValidPredIdSet_25;
#line 245 "typecheck.m"
            *check_hlds__typecheck__Specs_16 = check_hlds__typecheck__CurSpecs_22;
#line 246 "typecheck.m"
            *check_hlds__typecheck__ExceededIterationLimit_17 = (MR_Integer) 0;
#line 244 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;
#line 244 "typecheck.m"
          }
#line 247 "typecheck.m"
        else
#line 248 "typecheck.m"
          {
#line 248 "typecheck.m"
            MR_Word check_hlds__typecheck__DebugTypes_27;

#line 248 "typecheck.m"
            {
#line 248 "typecheck.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_26, (MR_Integer) 58, &check_hlds__typecheck__DebugTypes_27);
            }
#line 256 "typecheck.m"
            if ((check_hlds__typecheck__DebugTypes_27 == (MR_Integer) 0))
#line 257 "typecheck.m"
              {
#line 257 "typecheck.m"
              }
#line 256 "typecheck.m"
            else
#line 250 "typecheck.m"
              {
#line 250 "typecheck.m"
                MR_Word check_hlds__typecheck__ProgressSpecs_28;
#line 254 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_30_30;
#line 254 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_31_31;

#line 251 "typecheck.m"
                {
#line 251 "typecheck.m"
                  check_hlds__typecheck__construct_type_inference_messages_5_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__typecheck__NewValidPredIdSet_25, check_hlds__typecheck__OrigValidPredIds_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ProgressSpecs_28);
                }
#line 254 "typecheck.m"
                {
#line 254 "typecheck.m"
                  parse_tree__error_util__write_error_specs_8_p_0(check_hlds__typecheck__ProgressSpecs_28, check_hlds__typecheck__Globals_26, (MR_Integer) 0, &check_hlds__typecheck__V_30_30, (MR_Integer) 0, &check_hlds__typecheck__V_31_31);
                }
#line 250 "typecheck.m"
              }
#line 259 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Iteration_10 < check_hlds__typecheck__MaxIterations_11);
#line 263 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 260 "typecheck.m"
              {
#line 260 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_46_46 = (check_hlds__typecheck__Iteration_10 + (MR_Integer) 1);

#line 260 "typecheck.m"
                /* direct tailcall eliminated */
#line 260 "typecheck.m"
                {
#line 260 "typecheck.m"
                  MR_Integer check_hlds__typecheck__Iteration__tmp_copy_10 = check_hlds__typecheck__V_46_46;
#line 260 "typecheck.m"
                  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0__tmp_copy_32 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;

#line 260 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0__tmp_copy_32;
#line 260 "typecheck.m"
                  check_hlds__typecheck__Iteration_10 = check_hlds__typecheck__Iteration__tmp_copy_10;
#line 260 "typecheck.m"
                }
#line 260 "typecheck.m"
                continue;
#line 260 "typecheck.m"
              }
#line 263 "typecheck.m"
            else
#line 264 "typecheck.m"
              {
#line 264 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 264 "typecheck.m"
                MR_Word check_hlds__typecheck__Pieces_55;
#line 264 "typecheck.m"
                MR_Word check_hlds__typecheck__Msg_56;
#line 264 "typecheck.m"
                MR_Word check_hlds__typecheck__V_59_59;
#line 264 "typecheck.m"
                MR_Word check_hlds__typecheck__V_62_62;
#line 264 "typecheck.m"
                MR_Word check_hlds__typecheck__V_65_65;
#line 264 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 264 "typecheck.m"
                MR_Word check_hlds__typecheck__V_69_69;
#line 264 "typecheck.m"
                MR_Word check_hlds__typecheck__V_86_86;
#line 264 "typecheck.m"
                MR_Word check_hlds__typecheck__V_87_87;
#line 264 "typecheck.m"
                MR_Word check_hlds__typecheck__V_91_91;

#line 264 "typecheck.m"
                *check_hlds__typecheck__FinalValidPredIdSet_15 = check_hlds__typecheck__NewValidPredIdSet_25;
#line 335 "typecheck.m"
                {
#line 335 "typecheck.m"
                  check_hlds__typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 335 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_69_69, 1) = ((MR_Box) (check_hlds__typecheck__MaxIterations_11));
#line 335 "typecheck.m"
                }
#line 335 "typecheck.m"
                {
#line 335 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 335 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[13])));
#line 335 "typecheck.m"
                }
#line 335 "typecheck.m"
                {
#line 335 "typecheck.m"
                  check_hlds__typecheck__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[17])));
#line 335 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_65_65, 1) = ((MR_Box) (check_hlds__typecheck__V_68_68));
#line 335 "typecheck.m"
                }
#line 334 "typecheck.m"
                {
#line 334 "typecheck.m"
                  check_hlds__typecheck__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[16])));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_62_62, 1) = ((MR_Box) (check_hlds__typecheck__V_65_65));
#line 334 "typecheck.m"
                }
#line 333 "typecheck.m"
                {
#line 333 "typecheck.m"
                  check_hlds__typecheck__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[15])));
#line 333 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_59_59, 1) = ((MR_Box) (check_hlds__typecheck__V_62_62));
#line 333 "typecheck.m"
                }
#line 332 "typecheck.m"
                {
#line 332 "typecheck.m"
                  check_hlds__typecheck__Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[14])));
#line 332 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_55, 1) = ((MR_Box) (check_hlds__typecheck__V_59_59));
#line 332 "typecheck.m"
                }
#line 339 "typecheck.m"
                {
#line 339 "typecheck.m"
                  check_hlds__typecheck__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_87_87, 0) = ((MR_Box) (check_hlds__typecheck__Pieces_55));
#line 339 "typecheck.m"
                }
#line 339 "typecheck.m"
                {
#line 339 "typecheck.m"
                  check_hlds__typecheck__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_86_86, 0) = ((MR_Box) (check_hlds__typecheck__V_87_87));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "typecheck.m"
                }
#line 339 "typecheck.m"
                {
#line 339 "typecheck.m"
                  check_hlds__typecheck__Msg_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 1) = ((MR_Box) ((MR_Integer) 1));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 2) = ((MR_Box) ((MR_Integer) 0));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 3) = ((MR_Box) (check_hlds__typecheck__V_86_86));
#line 339 "typecheck.m"
                }
#line 340 "typecheck.m"
                {
#line 340 "typecheck.m"
                  check_hlds__typecheck__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_91_91, 0) = ((MR_Box) (check_hlds__typecheck__Msg_56));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "typecheck.m"
                }
#line 340 "typecheck.m"
                {
#line 340 "typecheck.m"
                  check_hlds__typecheck__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 2) = ((MR_Box) (check_hlds__typecheck__V_91_91));
#line 340 "typecheck.m"
                }
#line 265 "typecheck.m"
                {
#line 265 "typecheck.m"
                  MR_Word base;
#line 265 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "typecheck.m"
                  *check_hlds__typecheck__Specs_16 = base;
#line 265 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_49_49));
#line 265 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "typecheck.m"
                }
#line 266 "typecheck.m"
                *check_hlds__typecheck__ExceededIterationLimit_17 = (MR_Integer) 1;
#line 264 "typecheck.m"
                *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;
#line 264 "typecheck.m"
              }
#line 248 "typecheck.m"
          }
#line 226 "typecheck.m"
      }
#line 226 "typecheck.m"
      break;
#line 226 "typecheck.m"
    }
#line 219 "typecheck.m"
}

#line 188 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
#line 188 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 188 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 188 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 188 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 188 "typecheck.m"
{
#line 192 "typecheck.m"
  {
#line 192 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 192 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 192 "typecheck.m"
      *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 192 "typecheck.m"
    else
#line 194 "typecheck.m"
      {
#line 194 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 194 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 194 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo_11;
#line 194 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_12;
#line 194 "typecheck.m"
        MR_Word check_hlds__typecheck__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 0)));
#line 194 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 1)));

#line 197 "typecheck.m"
        {
#line 197 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_14)));
        }
#line 209 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 199 "typecheck.m"
          {
#line 199 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalIdClausesInfo0_15;
#line 199 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalIdClausesInfo_17;
#line 199 "typecheck.m"
            MR_Word check_hlds__typecheck__Globals_18;
#line 199 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 199 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21;
#line 199 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22;
#line 199 "typecheck.m"
            MR_Word check_hlds__typecheck__ImportStatus_30;
#line 199 "typecheck.m"
            MR_Word check_hlds__typecheck__ClausesInfo0_31;
#line 199 "typecheck.m"
            MR_Word check_hlds__typecheck__ClausesRep0_32;
#line 200 "typecheck.m"
            MR_Word check_hlds__typecheck___ContainingGoalMap_16;
#line 1027 "typecheck.m"
            MR_Word check_hlds__typecheck___ItemNumbers0_33;
#line 1029 "typecheck.m"
            MR_Word check_hlds__typecheck__V_57_57;
#line 1029 "typecheck.m"
            MR_Word check_hlds__typecheck__V_58_58;

#line 199 "typecheck.m"
            {
#line 199 "typecheck.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__GoalIdClausesInfo0_15);
            }
#line 200 "typecheck.m"
            {
#line 200 "typecheck.m"
              hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck___ContainingGoalMap_16, check_hlds__typecheck__GoalIdClausesInfo0_15, &check_hlds__typecheck__GoalIdClausesInfo_17);
            }
#line 202 "typecheck.m"
            {
#line 202 "typecheck.m"
              hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__GoalIdClausesInfo_17, check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 1025 "typecheck.m"
            {
#line 1025 "typecheck.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ImportStatus_30);
            }
#line 1026 "typecheck.m"
            {
#line 1026 "typecheck.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ClausesInfo0_31);
            }
#line 1027 "typecheck.m"
            {
#line 1027 "typecheck.m"
              hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesRep0_32, &check_hlds__typecheck___ItemNumbers0_33);
            }
#line 1029 "typecheck.m"
            {
#line 1029 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 1029 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1029 "typecheck.m"
              {
#line 1030 "typecheck.m"
                {
#line 1030 "typecheck.m"
                  check_hlds__typecheck__V_57_57 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_32);
                }
#line 1030 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_57_57 == (MR_Integer) 1);
#line 1029 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1029 "typecheck.m"
                  {
#line 1031 "typecheck.m"
                    {
#line 1031 "typecheck.m"
                      check_hlds__typecheck__V_58_58 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__typecheck__ImportStatus_30);
                    }
#line 1031 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_58_58 == (MR_Integer) 1);
#line 1029 "typecheck.m"
                  }
#line 1029 "typecheck.m"
              }
#line 1059 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1033 "typecheck.m"
              {
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeInfo_53_75;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadVars_34;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncArgs_35;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncRetVal_36;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__Context_37;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncModule_38;
#line 1033 "typecheck.m"
                MR_String check_hlds__typecheck__FuncName_39;
#line 1033 "typecheck.m"
                MR_Integer check_hlds__typecheck__PredArity_40;
#line 1033 "typecheck.m"
                MR_Integer check_hlds__typecheck__FuncArity_41;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncSymName_42;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncConsId_43;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncRHS_44;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__Goal0_45;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalExpr_46;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalInfo0_47;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__NonLocals_48;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalInfo_49;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__Goal_50;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__Clause_51;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesRep_52;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__ItemNumbers_53;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesInfo_54;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers0_55;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers_56;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__V_60_60;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__V_64_64;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71;
#line 1033 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72;
#line 1034 "typecheck.m"
                MR_Box check_hlds__typecheck__conv0_FuncRetVal_36;

#line 1033 "typecheck.m"
                {
#line 1033 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__HeadVars_34);
                }
#line 18776 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeInfo_53_75 = (MR_Word) &check_hlds__typecheck_scalar_common_1[2];
#line 1034 "typecheck.m"
                {
#line 1034 "typecheck.m"
                  hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34, &check_hlds__typecheck__FuncArgs_35, &check_hlds__typecheck__conv0_FuncRetVal_36);
                }
#line 1034 "typecheck.m"
                check_hlds__typecheck__FuncRetVal_36 = ((MR_Word) check_hlds__typecheck__conv0_FuncRetVal_36);
#line 1035 "typecheck.m"
                {
#line 1035 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_37);
                }
#line 1036 "typecheck.m"
                {
#line 1036 "typecheck.m"
                  check_hlds__typecheck__FuncModule_38 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1037 "typecheck.m"
                {
#line 1037 "typecheck.m"
                  check_hlds__typecheck__FuncName_39 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1038 "typecheck.m"
                {
#line 1038 "typecheck.m"
                  check_hlds__typecheck__PredArity_40 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1039 "typecheck.m"
                {
#line 1039 "typecheck.m"
                  parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &check_hlds__typecheck__FuncArity_41, check_hlds__typecheck__PredArity_40);
                }
#line 1040 "typecheck.m"
                {
#line 1040 "typecheck.m"
                  check_hlds__typecheck__FuncSymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 0) = ((MR_Box) (check_hlds__typecheck__FuncModule_38));
#line 1040 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 1) = ((MR_Box) (check_hlds__typecheck__FuncName_39));
#line 1040 "typecheck.m"
                }
#line 1041 "typecheck.m"
                {
#line 1041 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 1041 "typecheck.m"
                {
#line 1041 "typecheck.m"
                  check_hlds__typecheck__FuncConsId_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 1) = ((MR_Box) (check_hlds__typecheck__FuncSymName_42));
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 2) = ((MR_Box) (check_hlds__typecheck__FuncArity_41));
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 3) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 1041 "typecheck.m"
                }
#line 1042 "typecheck.m"
                {
#line 1042 "typecheck.m"
                  check_hlds__typecheck__FuncRHS_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 0) = ((MR_Box) (check_hlds__typecheck__FuncConsId_43));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 2) = ((MR_Box) (check_hlds__typecheck__FuncArgs_35));
#line 1042 "typecheck.m"
                }
#line 1043 "typecheck.m"
                {
#line 1043 "typecheck.m"
                  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__typecheck__FuncRetVal_36, check_hlds__typecheck__FuncRHS_44, check_hlds__typecheck__Context_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Goal0_45);
                }
#line 1045 "typecheck.m"
                check_hlds__typecheck__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 0)));
#line 1045 "typecheck.m"
                check_hlds__typecheck__GoalInfo0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 1)));
#line 1046 "typecheck.m"
                {
#line 1046 "typecheck.m"
                  check_hlds__typecheck__V_64_64 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34);
                }
#line 1046 "typecheck.m"
                {
#line 1046 "typecheck.m"
                  check_hlds__typecheck__NonLocals_48 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck__V_64_64);
                }
#line 1047 "typecheck.m"
                {
#line 1047 "typecheck.m"
                  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__typecheck__NonLocals_48, check_hlds__typecheck__GoalInfo0_47, &check_hlds__typecheck__GoalInfo_49);
                }
#line 1048 "typecheck.m"
                {
#line 1048 "typecheck.m"
                  check_hlds__typecheck__Goal_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1048 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_46));
#line 1048 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_49));
#line 1048 "typecheck.m"
                }
#line 1049 "typecheck.m"
                {
#line 1049 "typecheck.m"
                  check_hlds__typecheck__Clause_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 1) = ((MR_Box) (check_hlds__typecheck__Goal_50));
#line 1049 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 3) = ((MR_Box) (check_hlds__typecheck__Context_37));
#line 1049 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "typecheck.m"
                }
#line 1050 "typecheck.m"
                {
#line 1050 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__Clause_51));
#line 1050 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1050 "typecheck.m"
                }
#line 1050 "typecheck.m"
                {
#line 1050 "typecheck.m"
                  hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__V_68_68, &check_hlds__typecheck__ClausesRep_52);
                }
#line 1051 "typecheck.m"
                {
#line 1051 "typecheck.m"
                  check_hlds__typecheck__ItemNumbers_53 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
                }
#line 1052 "typecheck.m"
                {
#line 1052 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_52, check_hlds__typecheck__ItemNumbers_53, check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesInfo_54);
                }
#line 1054 "typecheck.m"
                {
#line 1054 "typecheck.m"
                  hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71);
                }
#line 1055 "typecheck.m"
                {
#line 1055 "typecheck.m"
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__ClausesInfo_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72);
                }
#line 1056 "typecheck.m"
                {
#line 1056 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__Markers0_55);
                }
#line 1057 "typecheck.m"
                {
#line 1057 "typecheck.m"
                  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, check_hlds__typecheck__Markers0_55, &check_hlds__typecheck__Markers_56);
                }
#line 1058 "typecheck.m"
                {
#line 1058 "typecheck.m"
                  hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_56, check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21);
                }
#line 1033 "typecheck.m"
              }
#line 1059 "typecheck.m"
            else
#line 1059 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 206 "typecheck.m"
            {
#line 206 "typecheck.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__Globals_18);
            }
#line 207 "typecheck.m"
            {
#line 207 "typecheck.m"
              hlds__headvar_names__maybe_improve_headvar_names_3_p_0(check_hlds__typecheck__Globals_18, check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22);
            }
#line 208 "typecheck.m"
            {
#line 208 "typecheck.m"
              check_hlds__typecheck__PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 0) = ((MR_Box) (check_hlds__typecheck__PredId_14));
#line 208 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22));
#line 208 "typecheck.m"
            }
#line 199 "typecheck.m"
          }
#line 209 "typecheck.m"
        else
#line 210 "typecheck.m"
          check_hlds__typecheck__PredIdInfo_11 = check_hlds__typecheck__PredIdInfo0_9;
#line 213 "typecheck.m"
        {
#line 213 "typecheck.m"
          check_hlds__typecheck__prepare_for_typecheck_4_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_10, &check_hlds__typecheck__PredIdsInfos_12);
        }
#line 194 "typecheck.m"
        {
#line 194 "typecheck.m"
          MR_Word base;
#line 194 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 194 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__PredIdInfo_11));
#line 194 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__PredIdsInfos_12));
#line 194 "typecheck.m"
        }
#line 194 "typecheck.m"
      }
#line 192 "typecheck.m"
  }
#line 188 "typecheck.m"
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
#line 152 "typecheck.m"
  {
#line 152 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_27_27;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__Globals_8;
#line 152 "typecheck.m"
    MR_Integer check_hlds__typecheck__MaxIterations_9;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigValidPredIdSet_10;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigValidPredIds_11;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMap0_12;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIdsInfos0_13;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIdsInfos_14;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMap_15;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__FinalValidPredIdSet_16;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__CheckSpecs_17;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__InferSpecs_18;
#line 152 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22;

#line 153 "typecheck.m"
    {
#line 153 "typecheck.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__Globals_8);
    }
#line 154 "typecheck.m"
    {
#line 154 "typecheck.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck__Globals_8, (MR_Integer) 170, &check_hlds__typecheck__MaxIterations_9);
    }
#line 157 "typecheck.m"
    {
#line 157 "typecheck.m"
      hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__OrigValidPredIdSet_10);
    }
#line 19070 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 158 "typecheck.m"
    {
#line 158 "typecheck.m"
      check_hlds__typecheck__OrigValidPredIds_11 = mercury__set_tree234__to_sorted_list_1_f_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__OrigValidPredIdSet_10);
    }
#line 160 "typecheck.m"
    {
#line 160 "typecheck.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__PredMap0_12);
    }
#line 19082 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 161 "typecheck.m"
    {
#line 161 "typecheck.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_27_27, check_hlds__typecheck__PredMap0_12, &check_hlds__typecheck__PredIdsInfos0_13);
    }
#line 174 "typecheck.m"
    {
#line 174 "typecheck.m"
      check_hlds__typecheck__prepare_for_typecheck_4_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__typecheck__OrigValidPredIdSet_10, check_hlds__typecheck__PredIdsInfos0_13, &check_hlds__typecheck__PredIdsInfos_14);
    }
#line 177 "typecheck.m"
    {
#line 177 "typecheck.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_27_27, check_hlds__typecheck__PredIdsInfos_14, &check_hlds__typecheck__PredMap_15);
    }
#line 178 "typecheck.m"
    {
#line 178 "typecheck.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_15, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 180 "typecheck.m"
    {
#line 180 "typecheck.m"
      check_hlds__typecheck__typecheck_to_fixpoint_9_p_0((MR_Integer) 1, check_hlds__typecheck__MaxIterations_9, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20, check_hlds__typecheck__OrigValidPredIds_11, check_hlds__typecheck__OrigValidPredIdSet_10, &check_hlds__typecheck__FinalValidPredIdSet_16, &check_hlds__typecheck__CheckSpecs_17, check_hlds__typecheck__ExceededIterationLimit_7);
    }
#line 184 "typecheck.m"
    {
#line 184 "typecheck.m"
      check_hlds__typecheck__construct_type_inference_messages_5_p_0(*check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20, check_hlds__typecheck__FinalValidPredIdSet_16, check_hlds__typecheck__OrigValidPredIds_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__InferSpecs_18);
    }
#line 186 "typecheck.m"
    {
#line 186 "typecheck.m"
      *check_hlds__typecheck__Specs_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__InferSpecs_18, check_hlds__typecheck__CheckSpecs_17);
    }
#line 152 "typecheck.m"
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
