/*
** Automatically generated from `typecheck.m'
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
#include "integer.mih"
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_event.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 3163 "typecheck.m"
struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s {
#line 3163 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4;
#line 3166 "typecheck.m"
  MR_bool check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
#line 3166 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9;
#line 3169 "typecheck.m"
  jmp_buf check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0;
#line 3169 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13;
#line 3169 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12;
#line 3163 "typecheck.m"
};

#line 909 "typecheck.m"
struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s {
#line 909 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3;
#line 912 "typecheck.m"
  MR_bool check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
#line 912 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6;
#line 914 "typecheck.m"
  jmp_buf check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0;
#line 914 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7;
#line 909 "typecheck.m"
};


#line 190 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 193 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 196 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 199 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 202 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 205 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 208 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0;

#line 211 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 214 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 217 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0;

#line 220 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1;

#line 223 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2;

#line 226 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3];

#line 229 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3];

#line 232 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3];

#line 235 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 238 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0[2];

#line 241 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0;

#line 244 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0[1];

#line 247 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0[1];

#line 250 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0[1];

#line 253 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0[1];

#line 256 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0;

#line 259 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0;

#line 262 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1];

#line 265 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0;

#line 268 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1];

#line 271 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1;

#line 274 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1];

#line 277 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1];

#line 280 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0[2];

#line 283 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2];

#line 286 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2];

#line 289 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0;

#line 292 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1;

#line 295 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2];

#line 298 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2];

#line 301 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2];

#line 304 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
#line 307 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 309 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 312 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
#line 315 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 317 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 319 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 322 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0_10001(
#line 325 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 327 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 330 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0_10001(
#line 333 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 335 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 337 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 340 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
#line 343 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 345 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 348 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
#line 351 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 353 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 355 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 358 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
#line 361 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 363 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 366 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
#line 369 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 371 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 373 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 376 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
#line 379 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 381 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 384 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
#line 387 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 389 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 391 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 2880 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
#line 2880 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_6,
#line 2880 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_7,
#line 2880 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8);

#line 2456 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(
#line 2456 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2456 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2456 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2456 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2419 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 2419 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2419 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_3,
#line 2419 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2419 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5);

#line 2403 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(
#line 2403 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2403 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsDefns_3,
#line 2403 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2403 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5);

#line 2184 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__Types_3,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 2184 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6);

#line 3395 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3395__2_1_f_0(
#line 3395 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_36);

#line 1474 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1474__1_2_p_0(
#line 1474 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalType_94,
#line 1474 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_160);

#line 506 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__506__1_2_p_0(
#line 506 "typecheck.m"
  MR_Word check_hlds__typecheck__StartingSpecs_22,
#line 506 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_51);

#line 1135 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
#line 1135 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 1135 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1135 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 1135 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
#line 1135 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 1135 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2999 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
#line 2999 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2999 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2999 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2999 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
#line 2999 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2999 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2388 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
#line 2388 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2388 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
#line 2388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2385 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0(
#line 2385 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2385 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2385 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2385 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0(
#line 2385 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2385 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3365 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
#line 3365 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3365 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3365 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 3365 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
#line 3365 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 3365 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3395 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
#line 3395 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3395 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 3383 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
#line 3383 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 3383 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 3383 "typecheck.m"
  MR_Word check_hlds__typecheck__Action_8,
#line 3383 "typecheck.m"
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
#line 3383 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10);

#line 3370 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
#line 3370 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3370 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3370 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3370 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3370 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__5_5);

#line 3347 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
#line 3347 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3347 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 3347 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3);

#line 3213 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3213 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3213 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3213 "typecheck.m"
  MR_Word * check_hlds__typecheck__DataConsErrors_12);

#line 2935 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
#line 2935 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2935 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2935 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 3184 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
#line 3184 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3184 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3184 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3184 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3184 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3184 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsErrors_12);

#line 3169 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
#line 3169 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 3169 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
#line 3169 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 3169 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
#line 3169 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 3163 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
#line 3163 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_4,
#line 3163 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint0_5,
#line 3163 "typecheck.m"
  MR_Word * check_hlds__typecheck__Constraint_6);

#line 3154 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
#line 3154 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_3,
#line 3154 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4);

#line 3147 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
#line 3147 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3147 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 3147 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 3146 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
#line 3146 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3146 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 3136 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
#line 3136 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_7,
#line 3136 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarSet_8,
#line 3136 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_9,
#line 3136 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_10,
#line 3136 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
#line 3136 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21);

#line 3003 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_8,
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_9,
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_10,
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_11,
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
#line 3003 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14);

#line 2939 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_9,
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__FuncName_11,
#line 2939 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_12,
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_13,
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_14,
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_15,
#line 2939 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16);

#line 2935 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
#line 2935 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2935 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2935 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 2919 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
#line 2919 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2919 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 2919 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2919 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 2919 "typecheck.m"
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10);

#line 2798 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__make_pred_cons_info_list_7_p_0(
#line 2798 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2798 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2798 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTable_3,
#line 2798 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_4,
#line 2798 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_5,
#line 2798 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
#line 2798 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7);

#line 2779 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
#line 2779 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2779 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_7,
#line 2779 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_8,
#line 2779 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 2779 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10);

#line 2695 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
#line 2695 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2695 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 2695 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2695 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);

#line 2680 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_2,
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__PredOrFunc_3,
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVars_6,
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2680 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8);

#line 2568 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
#line 2568 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsType_6,
#line 2568 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_7,
#line 2568 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_8,
#line 2568 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
#line 2568 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16);

#line 2470 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(
#line 2470 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2470 "typecheck.m"
  MR_Word check_hlds__typecheck__X_2,
#line 2470 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_3,
#line 2470 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2470 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2439 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_functor_type_4_p_0(
#line 2439 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2439 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2439 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
#line 2439 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4);

#line 2322 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2(
#line 2322 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2322 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 2278 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
#line 2278 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2278 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2278 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2278 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 2268 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_13,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_14,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_15,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_16,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_17,
#line 2268 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_18,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_54,
#line 2268 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_55);

#line 2249 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
#line 2249 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_4,
#line 2249 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsType_5,
#line 2249 "typecheck.m"
  MR_String * check_hlds__typecheck__BuiltinTypeName_6);

#line 2200 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unification_10_p_0(
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_13,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__X_14,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__RHS0_15,
#line 2200 "typecheck.m"
  MR_Word * check_hlds__typecheck__RHS_16,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33,
#line 2200 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_35,
#line 2200 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_36);

#line 2124 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
#line 2124 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2124 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2124 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_3,
#line 2124 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2124 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2102 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_8_p_0(
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalContext_9,
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_10,
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_11,
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_12,
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_13,
#line 2102 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_14,
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 2102 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 2094 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(
#line 2094 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 2094 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_8,
#line 2094 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11,
#line 2094 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12,
#line 2094 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 2094 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14);

#line 2049 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_13,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_14,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_15,
#line 2049 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_16,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_17,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_18,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_19,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_20,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_35,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_36,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38);

#line 2024 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_2,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_3,
#line 2024 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_4,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__6_6,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2024 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_9,
#line 2024 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_10,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
#line 2024 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12);

#line 1924 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
#line 1924 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1924 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1924 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1924 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

#line 1908 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__skip_arg_2_p_0(
#line 1908 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1908 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2);

#line 1869 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(
#line 1869 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_1,
#line 1869 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_2,
#line 1869 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1869 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1869 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1869 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_6,
#line 1869 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1869 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8);

#line 1826 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__PredExistQVars_3,
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__PredArgTypes_4,
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__PredConstraints_5,
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
#line 1826 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7);

#line 1782 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
#line 1782 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7);

#line 2021 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1(
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2021 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 1722 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0(
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_10,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_13,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27,
#line 1722 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_29,
#line 1722 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_30);

#line 1668 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__SimpleCallId_10,
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_13,
#line 1668 "typecheck.m"
  MR_Word * check_hlds__typecheck__PredId_14,
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31,
#line 1668 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32,
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_33,
#line 1668 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_34);

#line 2021 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0_1(
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2021 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 1641 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0(
#line 1641 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_8,
#line 1641 "typecheck.m"
  MR_String check_hlds__typecheck__EventName_9,
#line 1641 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_10,
#line 1641 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1641 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1641 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1641 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 1579 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_9_p_0(
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__GenericCallId_10,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__PredVar_12,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_13,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1579 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1579 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27);

#line 1553 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0(
#line 1553 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1553 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1553 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1553 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22,
#line 1553 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23,
#line 1553 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_24,
#line 1553 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_25);

#line 1529 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_7_p_0(
#line 1529 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1529 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1529 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1529 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1529 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1529 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1529 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 1515 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_7_p_0(
#line 1515 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1515 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 1515 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1515 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1515 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
#line 1515 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
#line 1515 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7);

#line 1506 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
#line 1506 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1);

#line 1474 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
#line 1474 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg);

#line 1472 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_2(
#line 1472 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1472 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 1472 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 1472 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3,
#line 1472 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_4,
#line 1472 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_5);

#line 1421 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_1(
#line 1421 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1421 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 1276 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0(
#line 1276 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalExpr0_8,
#line 1276 "typecheck.m"
  MR_Word * check_hlds__typecheck__GoalExpr_9,
#line 1276 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalInfo_10,
#line 1276 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115,
#line 1276 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116,
#line 1276 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_117,
#line 1276 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_118);

#line 1213 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_7_p_0(
#line 1213 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_8,
#line 1213 "typecheck.m"
  MR_Word * check_hlds__typecheck__Goal_9,
#line 1213 "typecheck.m"
  MR_Word check_hlds__typecheck__EnclosingContext_10,
#line 1213 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
#line 1213 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
#line 1213 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
#line 1213 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31);

#line 1149 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(
#line 1149 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 1149 "typecheck.m"
  MR_Word check_hlds__typecheck__StuffToCheck_8,
#line 1149 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1149 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet_10,
#line 1149 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_28,
#line 1149 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_29);

#line 2021 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_1(
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2021 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 1108 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0(
#line 1108 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1108 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_10,
#line 1108 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_22,
#line 1108 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_23,
#line 1108 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1108 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1108 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1108 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27);

#line 1068 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_8_p_0(
#line 1068 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1068 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1068 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1068 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 1068 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1068 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
#line 1068 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1068 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8);

#line 963 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
#line 963 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 963 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 963 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 963 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

#line 929 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__KindMap_8,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesA_10,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesB_13,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsB_14);

#line 914 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
#line 914 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 914 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
#line 914 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 914 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
#line 914 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 909 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
#line 909 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
#line 909 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4);

#line 906 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
#line 906 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 906 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 893 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
#line 893 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 893 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVarTypes_7,
#line 893 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 893 "typecheck.m"
  MR_Word * check_hlds__typecheck__UnprovenCs_10);

#line 858 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
#line 858 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypeVars_5,
#line 858 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExistQVars_6,
#line 858 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeParams0_7,
#line 858 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadTypeParams_8);

#line 836 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
#line 836 "typecheck.m"
  MR_Word check_hlds__typecheck__Renaming_4,
#line 836 "typecheck.m"
  MR_Word check_hlds__typecheck__Origin0_5,
#line 836 "typecheck.m"
  MR_Word * check_hlds__typecheck__Origin_6);

#line 785 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
#line 785 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_5,
#line 785 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16,
#line 785 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_17,
#line 785 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7);

#line 758 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_6_p_0(
#line 758 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 758 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_8,
#line 758 "typecheck.m"
  MR_Word check_hlds__typecheck__Impl_9,
#line 758 "typecheck.m"
  MR_Word check_hlds__typecheck__TVar_10,
#line 758 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
#line 758 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17);

#line 752 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
#line 752 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 752 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 752 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 752 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 745 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
#line 745 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_6,
#line 745 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVars_7,
#line 745 "typecheck.m"
  MR_Word check_hlds__typecheck__Clause_8,
#line 745 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 745 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21);

#line 696 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
#line 696 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 696 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 696 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 696 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 536 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
#line 536 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_8,
#line 536 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_9,
#line 536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69,
#line 536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_70,
#line 536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_71,
#line 536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_72,
#line 536 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_12);

#line 506 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0_1(
#line 506 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg);

#line 442 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0(
#line 442 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7,
#line 442 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_8,
#line 442 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 442 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_33,
#line 442 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_10,
#line 442 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_11);

#line 347 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_9,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_10);

#line 275 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_4,
#line 275 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_5);

#line 221 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_9_p_0(
#line 221 "typecheck.m"
  MR_Integer check_hlds__typecheck__Iteration_10,
#line 221 "typecheck.m"
  MR_Integer check_hlds__typecheck__MaxIterations_11,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIds_13,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_14,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_15,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_16,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_17);

#line 190 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 190 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);


static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[24][2];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_3[1][4];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[7][5];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[2][8];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[2][9];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[4][1];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_8[2][6];

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_9[1][11];


#line 2762 "typecheck.m"
/* sealed */ struct check_hlds__typecheck__vector_common_type_10_0_s {
#line 2762 "typecheck.m"
  const MR_String check_hlds__typecheck__vector_common_type_10_0__vct_10_f_0;
#line 2762 "typecheck.m"
  const MR_String check_hlds__typecheck__vector_common_type_10_0__vct_10_f_1;
#line 2762 "typecheck.m"
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_10_0_s check_hlds__typecheck_vector_common_10[5];

#line 2890 "typecheck.m"
/* sealed */ struct check_hlds__typecheck__vector_common_type_11_0_s {
#line 2890 "typecheck.m"
  const MR_String check_hlds__typecheck__vector_common_type_11_0__vct_11_f_0;
#line 2890 "typecheck.m"
  const MR_Integer check_hlds__typecheck__vector_common_type_11_0__vct_11_f_1;
#line 2890 "typecheck.m"
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_11_0_s check_hlds__typecheck_vector_common_11[4];



static /* final */ const MR_Box check_hlds__typecheck_scalar_common_1[24][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "option to increase the limit)."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "--type-inference-iteration-limit"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You can use the"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "iterations."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Type inference iteration limit exceeded."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "This probably indicates that your program has a type error."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "You should declare the types explicitly."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(The current limit is"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Inferred"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 23 */
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
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[2])),
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
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[4])),
    ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__typecheck_scalar_common_4[6])),
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

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_4[7][5] = {
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

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_5[2][8] = {
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

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_6[2][9] = {
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

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_7[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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

static /* final */ const MR_Box check_hlds__typecheck_scalar_common_9[1][11] = {
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


static /* final */ const struct check_hlds__typecheck__vector_common_type_10_0_s check_hlds__typecheck_vector_common_10[5] = {
  /* row 0 */
  {
    (MR_String) "file",
    (MR_String) "string"
  },
  /* row 1 */
  {
    (MR_String) "grade",
    (MR_String) "string"
  },
  /* row 2 */
  {
    (MR_String) "line",
    (MR_String) "int"
  },
  /* row 3 */
  {
    (MR_String) "module",
    (MR_String) "string"
  },
  /* row 4 */
  {
    (MR_String) "pred",
    (MR_String) "string"
  },
};

static /* final */ const struct check_hlds__typecheck__vector_common_type_11_0_s check_hlds__typecheck_vector_common_11[4] = {
  /* row 0 */
  {
    (MR_String) "",
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "apply",
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_String) "impure_apply",
    (MR_Integer) 2
  },
  /* row 3 */
  {
    (MR_String) "semipure_apply",
    (MR_Integer) 3
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2176 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 2184 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2192 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2200 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2208 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2216 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2224 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0
  }
};

#line 2232 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2240 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2249 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0 = {
  (MR_String) "flip_constraints_for_new",
  (MR_Integer) 0
};

#line 2255 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1 = {
  (MR_String) "flip_constraints_for_field_set",
  (MR_Integer) 1
};

#line 2261 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2 = {
  (MR_String) "do_not_flip_constraints",
  (MR_Integer) 2
};

#line 2267 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2
};

#line 2274 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0
};

#line 2281 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2288 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_constraints_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_constraints_action",
  {     check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0
};

#line 2305 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2313 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2319 "check_hlds.typecheck.c"
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

#line 2334 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0
};

#line 2339 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0
  }
};

#line 2348 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0
};

#line 2353 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0[1] = {
  (MR_Integer) 0
};

#line 2358 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type",
  {     check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0
};

#line 2375 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0,
    (MR_TypeInfo) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0
  }
};

#line 2384 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck__pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0
  }
};

#line 2392 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "cons_type_assign_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__type_assign__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2409 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0
};

#line 2414 "check_hlds.typecheck.c"
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

#line 2429 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0
};

#line 2434 "check_hlds.typecheck.c"
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

#line 2449 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

#line 2454 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1
};

#line 2459 "check_hlds.typecheck.c"
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

#line 2473 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

#line 2479 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2485 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "maybe_cons_type_info",
  {     check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0
};

#line 2502 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0 = {
  (MR_String) "clause_only",
  (MR_Integer) 0
};

#line 2508 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1 = {
  (MR_String) "whole_pred",
  (MR_Integer) 1
};

#line 2514 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

#line 2520 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

#line 2526 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2532 "check_hlds.typecheck.c"
const MR_TypeCtorInfo_Struct check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_stuff_to_check_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__typecheck____Unify____stuff_to_check_0_0_10001)),
  ((MR_Box) (check_hlds__typecheck____Compare____stuff_to_check_0_0_10001)),
  (MR_String) "check_hlds.typecheck",
  (MR_String) "stuff_to_check",
  {     check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0 },
  {     check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0
};

#line 2549 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
#line 2552 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2554 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2556 "check_hlds.typecheck.c"
{
#line 2558 "check_hlds.typecheck.c"
  {
#line 2560 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2563 "check_hlds.typecheck.c"
    {
#line 2565 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_constraints_action_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2568 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2570 "check_hlds.typecheck.c"
  }
#line 2572 "check_hlds.typecheck.c"
}

#line 2575 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
#line 2578 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2580 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2582 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2584 "check_hlds.typecheck.c"
{
#line 2586 "check_hlds.typecheck.c"
  {
#line 2588 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2591 "check_hlds.typecheck.c"
    {
#line 2593 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_constraints_action_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2596 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2598 "check_hlds.typecheck.c"
  }
#line 2600 "check_hlds.typecheck.c"
}

#line 2603 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0_10001(
#line 2606 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2608 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2610 "check_hlds.typecheck.c"
{
#line 2612 "check_hlds.typecheck.c"
  {
#line 2614 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2617 "check_hlds.typecheck.c"
    {
#line 2619 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2622 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2624 "check_hlds.typecheck.c"
  }
#line 2626 "check_hlds.typecheck.c"
}

#line 2629 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0_10001(
#line 2632 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2634 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2636 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2638 "check_hlds.typecheck.c"
{
#line 2640 "check_hlds.typecheck.c"
  {
#line 2642 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2645 "check_hlds.typecheck.c"
    {
#line 2647 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_type_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2650 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2652 "check_hlds.typecheck.c"
  }
#line 2654 "check_hlds.typecheck.c"
}

#line 2657 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
#line 2660 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2662 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2664 "check_hlds.typecheck.c"
{
#line 2666 "check_hlds.typecheck.c"
  {
#line 2668 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2671 "check_hlds.typecheck.c"
    {
#line 2673 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_assign_set_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2676 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2678 "check_hlds.typecheck.c"
  }
#line 2680 "check_hlds.typecheck.c"
}

#line 2683 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
#line 2686 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2688 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2690 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2692 "check_hlds.typecheck.c"
{
#line 2694 "check_hlds.typecheck.c"
  {
#line 2696 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2699 "check_hlds.typecheck.c"
    {
#line 2701 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_type_assign_set_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2704 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2706 "check_hlds.typecheck.c"
  }
#line 2708 "check_hlds.typecheck.c"
}

#line 2711 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
#line 2714 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2716 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2718 "check_hlds.typecheck.c"
{
#line 2720 "check_hlds.typecheck.c"
  {
#line 2722 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2725 "check_hlds.typecheck.c"
    {
#line 2727 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2730 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2732 "check_hlds.typecheck.c"
  }
#line 2734 "check_hlds.typecheck.c"
}

#line 2737 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
#line 2740 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2742 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2744 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2746 "check_hlds.typecheck.c"
{
#line 2748 "check_hlds.typecheck.c"
  {
#line 2750 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2753 "check_hlds.typecheck.c"
    {
#line 2755 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2758 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2760 "check_hlds.typecheck.c"
  }
#line 2762 "check_hlds.typecheck.c"
}

#line 2765 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
#line 2768 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2770 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2772 "check_hlds.typecheck.c"
{
#line 2774 "check_hlds.typecheck.c"
  {
#line 2776 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2779 "check_hlds.typecheck.c"
    {
#line 2781 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____stuff_to_check_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2784 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2786 "check_hlds.typecheck.c"
  }
#line 2788 "check_hlds.typecheck.c"
}

#line 2791 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
#line 2794 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2796 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2798 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2800 "check_hlds.typecheck.c"
{
#line 2802 "check_hlds.typecheck.c"
  {
#line 2804 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2807 "check_hlds.typecheck.c"
    {
#line 2809 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____stuff_to_check_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2812 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2814 "check_hlds.typecheck.c"
  }
#line 2816 "check_hlds.typecheck.c"
}

#line 2880 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
#line 2880 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_6,
#line 2880 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_7,
#line 2880 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8)
#line 2880 "typecheck.m"
{
#line 2883 "typecheck.m"
  {
#line 2883 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_21_42;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_22_43;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_23_44;
#line 2883 "typecheck.m"
    MR_String check_hlds__typecheck__ApplyName_9;
#line 2883 "typecheck.m"
    MR_String check_hlds__typecheck__ApplyNameToUse_12;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__Purity_13;
#line 2883 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity1_14;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_15;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__FuncType_16;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_17;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__RetType_18;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars_19;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_20;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 2883 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_22_22;
#line 2883 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_23_23;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_36;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_37;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet1_38;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__RetTypeVar_39;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 2883 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;
#line 2884 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_10_10;
#line 2884 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;
#line 2890 "typecheck.m"
    MR_Integer check_hlds__typecheck__lo_0;
#line 2890 "typecheck.m"
    MR_Integer check_hlds__typecheck__hi_1;
#line 2890 "typecheck.m"
    MR_Integer check_hlds__typecheck__mid_2;
#line 2890 "typecheck.m"
    MR_Integer check_hlds__typecheck__result_3;

#line 2884 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2884 "typecheck.m"
      {
#line 2884 "typecheck.m"
        check_hlds__typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 1)));
#line 2884 "typecheck.m"
        check_hlds__typecheck__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 2)));
#line 2884 "typecheck.m"
        check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 3)));
#line 2884 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 2884 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2884 "typecheck.m"
          {
#line 2884 "typecheck.m"
            check_hlds__typecheck__ApplyName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_21_21, (MR_Integer) 0)));
#line 2890 "typecheck.m"
            /* binary string jump switch */
#line 2890 "typecheck.m"
            check_hlds__typecheck__lo_0 = (MR_Integer) 0;
#line 2890 "typecheck.m"
            check_hlds__typecheck__hi_1 = (MR_Integer) 3;
#line 2890 "typecheck.m"
            do
#line 2890 "typecheck.m"
              {
#line 2890 "typecheck.m"
                check_hlds__typecheck__mid_2 = (((check_hlds__typecheck__lo_0 + check_hlds__typecheck__hi_1)) / (MR_Integer) 2);
#line 2890 "typecheck.m"
                check_hlds__typecheck__result_3 = MR_strcmp(check_hlds__typecheck__ApplyName_9, ((&check_hlds__typecheck_vector_common_11[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_11_0__vct_11_f_0);
#line 2890 "typecheck.m"
                if ((check_hlds__typecheck__result_3 == (MR_Integer) 0))
#line 2890 "typecheck.m"
                  {
#line 2890 "typecheck.m"
#line 2890 "typecheck.m"
                    switch (((&check_hlds__typecheck_vector_common_11[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_11_0__vct_11_f_1) {
#line 2890 "typecheck.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 2890 "typecheck.m"
                      case (MR_Integer) 0:
#line 2891 "typecheck.m"
                        {
#line 2891 "typecheck.m"
                          /* case "" */
#line 2892 "typecheck.m"
                          check_hlds__typecheck__ApplyNameToUse_12 = (MR_String) "apply";
#line 2893 "typecheck.m"
                          check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
#line 2891 "typecheck.m"
                          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2891 "typecheck.m"
                        }
#line 2890 "typecheck.m"
                        break;
#line 2890 "typecheck.m"
                      case (MR_Integer) 1:
#line 2887 "typecheck.m"
                        {
#line 2887 "typecheck.m"
                          /* case "apply" */
#line 2888 "typecheck.m"
                          check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2889 "typecheck.m"
                          check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
#line 2887 "typecheck.m"
                          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2887 "typecheck.m"
                        }
#line 2890 "typecheck.m"
                        break;
#line 2890 "typecheck.m"
                      case (MR_Integer) 2:
#line 2895 "typecheck.m"
                        {
#line 2895 "typecheck.m"
                          /* case "impure_apply" */
#line 2896 "typecheck.m"
                          check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2897 "typecheck.m"
                          check_hlds__typecheck__Purity_13 = (MR_Integer) 2;
#line 2895 "typecheck.m"
                          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2895 "typecheck.m"
                        }
#line 2890 "typecheck.m"
                        break;
#line 2890 "typecheck.m"
                      case (MR_Integer) 3:
#line 2899 "typecheck.m"
                        {
#line 2899 "typecheck.m"
                          /* case "semipure_apply" */
#line 2900 "typecheck.m"
                          check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2901 "typecheck.m"
                          check_hlds__typecheck__Purity_13 = (MR_Integer) 1;
#line 2899 "typecheck.m"
                          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2899 "typecheck.m"
                        }
#line 2890 "typecheck.m"
                        break;
#line 2890 "typecheck.m"
                    }
#line 2890 "typecheck.m"
                    /* jump out of search loop */
#line 2890 "typecheck.m"
                    goto label_0;
#line 2890 "typecheck.m"
                  }
#line 2890 "typecheck.m"
                else
#line 2890 "typecheck.m"
                if ((check_hlds__typecheck__result_3 < (MR_Integer) 0))
#line 2890 "typecheck.m"
                  check_hlds__typecheck__hi_1 = (check_hlds__typecheck__mid_2 - (MR_Integer) 1);
#line 2890 "typecheck.m"
                else
#line 2890 "typecheck.m"
                  check_hlds__typecheck__lo_0 = (check_hlds__typecheck__mid_2 + (MR_Integer) 1);
#line 2890 "typecheck.m"
              }
#line 2890 "typecheck.m"
            while ((check_hlds__typecheck__lo_0 <= check_hlds__typecheck__hi_1));
#line 2890 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_FALSE;
#line 2890 "typecheck.m"
          label_0:;
#line 2883 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2883 "typecheck.m"
              {
#line 2903 "typecheck.m"
                check_hlds__typecheck__V_22_22 = (MR_Integer) 1;
#line 2903 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_7 >= check_hlds__typecheck__V_22_22);
#line 2883 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2883 "typecheck.m"
                  {
#line 2904 "typecheck.m"
                    check_hlds__typecheck__V_23_23 = (MR_Integer) 1;
#line 2904 "typecheck.m"
                    check_hlds__typecheck__Arity1_14 = (check_hlds__typecheck__Arity_7 - check_hlds__typecheck__V_23_23);
#line 2905 "typecheck.m"
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 3048 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_21_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1630 "typecheck.m"
                    {
#line 1630 "typecheck.m"
                      mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__TypeVarSet0_36);
                    }
#line 1631 "typecheck.m"
                    {
#line 1631 "typecheck.m"
                      mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, check_hlds__typecheck__Arity1_14, &check_hlds__typecheck__ArgTypeVars_37, check_hlds__typecheck__TypeVarSet0_36, &check_hlds__typecheck__TypeVarSet1_38);
                    }
#line 1632 "typecheck.m"
                    {
#line 1632 "typecheck.m"
                      mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__RetTypeVar_39, check_hlds__typecheck__TypeVarSet1_38, &check_hlds__typecheck__TypeVarSet_15);
                    }
#line 3065 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeInfo_22_43 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 3067 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_23_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0;
#line 1634 "typecheck.m"
                    {
#line 1634 "typecheck.m"
                      check_hlds__typecheck__V_40_40 = mercury__map__init_0_f_0(check_hlds__typecheck__TypeInfo_22_43, check_hlds__typecheck__TypeCtorInfo_23_44);
                    }
#line 1634 "typecheck.m"
                    {
#line 1634 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_40_40, check_hlds__typecheck__ArgTypeVars_37, &check_hlds__typecheck__ArgTypes_17);
                    }
#line 1635 "typecheck.m"
                    check_hlds__typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1635 "typecheck.m"
                    {
#line 1635 "typecheck.m"
                      check_hlds__typecheck__RetType_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1635 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 0) = ((MR_Box) (check_hlds__typecheck__RetTypeVar_39));
#line 1635 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 1) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 1635 "typecheck.m"
                    }
#line 1636 "typecheck.m"
                    {
#line 1636 "typecheck.m"
                      parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_13, check_hlds__typecheck__ArgTypes_17, check_hlds__typecheck__RetType_18, &check_hlds__typecheck__FuncType_16);
                    }
#line 2907 "typecheck.m"
                    check_hlds__typecheck__ExistQVars_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2908 "typecheck.m"
                    {
#line 2908 "typecheck.m"
                      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_20);
                    }
#line 2911 "typecheck.m"
                    check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2910 "typecheck.m"
                    {
#line 2910 "typecheck.m"
                      check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2910 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__FuncType_16));
#line 2910 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_17));
#line 2910 "typecheck.m"
                    }
#line 2911 "typecheck.m"
                    {
#line 2911 "typecheck.m"
                      check_hlds__typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2911 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2911 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck__ApplyNameToUse_12));
#line 2911 "typecheck.m"
                    }
#line 2909 "typecheck.m"
                    {
#line 2909 "typecheck.m"
                      check_hlds__typecheck__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2909 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_15));
#line 2909 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_19));
#line 2909 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 2) = ((MR_Box) (check_hlds__typecheck__RetType_18));
#line 2909 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 3) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 2909 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_20));
#line 2909 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 5) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 2909 "typecheck.m"
                    }
#line 2911 "typecheck.m"
                    {
#line 2911 "typecheck.m"
                      MR_Word base;
#line 2911 "typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2911 "typecheck.m"
                      *check_hlds__typecheck__ConsTypeInfos_8 = base;
#line 2911 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_25_25));
#line 2911 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 2911 "typecheck.m"
                    }
#line 2911 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2883 "typecheck.m"
                  }
#line 2883 "typecheck.m"
              }
#line 2884 "typecheck.m"
          }
#line 2884 "typecheck.m"
      }
#line 2883 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2883 "typecheck.m"
  }
#line 2880 "typecheck.m"
}

#line 2456 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(
#line 2456 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2456 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2456 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2456 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2456 "typecheck.m"
{
#line 2460 "typecheck.m"
  while (MR_TRUE)
#line 2460 "typecheck.m"
    {
#line 2460 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2460 "typecheck.m"
      {
#line 2460 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2460 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2460 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2460 "typecheck.m"
        else
#line 2462 "typecheck.m"
          {
#line 2462 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssign_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2462 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssigns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2462 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 0)));
#line 2462 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 1)));
#line 2462 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;
#line 2463 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 2)));

#line 2165 "typecheck.m"
            if ((check_hlds__typecheck__Args_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2165 "typecheck.m"
              if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2170 "typecheck.m"
                {
#line 2170 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_16));
#line 2170 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2170 "typecheck.m"
                }
#line 2165 "typecheck.m"
              else
#line 2165 "typecheck.m"
                {
#line 2166 "typecheck.m"
                  {
#line 2166 "typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2166 "typecheck.m"
                    return;
                  }
#line 2165 "typecheck.m"
                }
#line 2165 "typecheck.m"
            else
#line 2165 "typecheck.m"
            if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2167 "typecheck.m"
              {
#line 2168 "typecheck.m"
                {
#line 2168 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2168 "typecheck.m"
                  return;
                }
#line 2167 "typecheck.m"
              }
#line 2165 "typecheck.m"
            else
#line 2172 "typecheck.m"
              {
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 0)));
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__Types_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 1)));
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet1_52;
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 1)));
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 0)));
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes0_62;
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeOldVarType_63;
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_64;

#line 2137 "typecheck.m"
                {
#line 2137 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__VarTypes0_62);
                }
#line 2138 "typecheck.m"
                {
#line 2138 "typecheck.m"
                  hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__V_55_55, check_hlds__typecheck__Type_46, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
                }
#line 2146 "typecheck.m"
                if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2147 "typecheck.m"
                  {
#line 2147 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_67;

#line 2148 "typecheck.m"
                    {
#line 2148 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign_67);
                    }
#line 2149 "typecheck.m"
                    {
#line 2149 "typecheck.m"
                      check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2149 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
#line 2149 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2149 "typecheck.m"
                    }
#line 2147 "typecheck.m"
                  }
#line 2146 "typecheck.m"
                else
#line 2140 "typecheck.m"
                  {
#line 2140 "typecheck.m"
                    MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
#line 2143 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_66;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_75;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_76;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_77;

#line 2727 "typecheck.m"
                    {
#line 2727 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__HeadTypeParams_75);
                    }
#line 2728 "typecheck.m"
                    {
#line 2728 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeBindings0_76);
                    }
#line 2729 "typecheck.m"
                    {
#line 2729 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_46, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
                    }
#line 2726 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2726 "typecheck.m"
                      {
#line 2730 "typecheck.m"
                        {
#line 2730 "typecheck.m"
                          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign1_66);
                        }
#line 2730 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2726 "typecheck.m"
                      }
#line 2143 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2142 "typecheck.m"
                      {
#line 2142 "typecheck.m"
                        check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
#line 2142 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2142 "typecheck.m"
                      }
#line 2143 "typecheck.m"
                    else
#line 2144 "typecheck.m"
                      check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__V_53_53;
#line 2140 "typecheck.m"
                  }
#line 2174 "typecheck.m"
                {
#line 2174 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__V_54_54, check_hlds__typecheck__Types_47, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
                }
#line 2172 "typecheck.m"
              }
#line 2466 "typecheck.m"
            /* direct tailcall eliminated */
#line 2466 "typecheck.m"
            {
#line 2466 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsTypeAssigns_12;
#line 2466 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2466 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2466 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2466 "typecheck.m"
            }
#line 2466 "typecheck.m"
            continue;
#line 2462 "typecheck.m"
          }
#line 2460 "typecheck.m"
      }
#line 2460 "typecheck.m"
      break;
#line 2460 "typecheck.m"
    }
#line 2456 "typecheck.m"
}

#line 2419 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 2419 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2419 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_3,
#line 2419 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2419 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5)
#line 2419 "typecheck.m"
{
#line 2423 "typecheck.m"
  while (MR_TRUE)
#line 2423 "typecheck.m"
    {
#line 2423 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2423 "typecheck.m"
      {
#line 2423 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2423 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2423 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4;
#line 2423 "typecheck.m"
        else
#line 2425 "typecheck.m"
          {
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType_16;
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_17;
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_18;
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssign_19;
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__V_22_22;
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23;
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeVarSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 0)));
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsExistQVars0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 1)));
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 2)));
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 3)));
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassConstraints0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 4)));
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_37;
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ConstraintsToAdd_38;
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__OldConstraints_46;
#line 2425 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassConstraints_47;
#line 2604 "typecheck.m"
            MR_Word check_hlds__typecheck___Source_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 5)));

#line 2611 "typecheck.m"
            {
#line 2611 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ConsTypeVarSet_31);
            }
#line 2617 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2613 "typecheck.m"
              {
#line 2613 "typecheck.m"
                check_hlds__typecheck__ConsType_16 = check_hlds__typecheck__ConsType0_33;
#line 2614 "typecheck.m"
                check_hlds__typecheck__ArgTypes_17 = check_hlds__typecheck__ArgTypes0_34;
#line 2615 "typecheck.m"
                check_hlds__typecheck__TypeAssign2_37 = check_hlds__typecheck__TypeAssign0_3;
#line 2616 "typecheck.m"
                check_hlds__typecheck__ConstraintsToAdd_38 = check_hlds__typecheck__ClassConstraints0_35;
#line 2613 "typecheck.m"
              }
#line 2617 "typecheck.m"
            else
#line 2633 "typecheck.m"
              {
#line 2633 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_39;
#line 2633 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsType1_40;
#line 2633 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes1_41;
#line 2633 "typecheck.m"
                MR_Word check_hlds__typecheck__Renaming_42;
#line 2618 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;
#line 2618 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 2618 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet0_61;
#line 2618 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet_62;

#line 2619 "typecheck.m"
                {
#line 2619 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2619 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__ConsType0_33));
#line 2619 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes0_34));
#line 2619 "typecheck.m"
                }
#line 1861 "typecheck.m"
                {
#line 1861 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_3, &check_hlds__typecheck__TypeVarSet0_61);
                }
#line 1862 "typecheck.m"
                {
#line 1862 "typecheck.m"
                  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_61, check_hlds__typecheck__ConsTypeVarSet_31, &check_hlds__typecheck__TypeVarSet_62, &check_hlds__typecheck__Renaming_42);
                }
#line 1863 "typecheck.m"
                {
#line 1863 "typecheck.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__V_48_48, &check_hlds__typecheck__V_49_49);
                }
#line 1865 "typecheck.m"
                {
#line 1865 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_62, check_hlds__typecheck__TypeAssign0_3, &check_hlds__typecheck__TypeAssign1_39);
                }
#line 2619 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 2619 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2619 "typecheck.m"
                  {
#line 2619 "typecheck.m"
                    check_hlds__typecheck__ConsType1_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_49_49, (MR_Integer) 0)));
#line 2619 "typecheck.m"
                    check_hlds__typecheck__ArgTypes1_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_49_49, (MR_Integer) 1)));
#line 2623 "typecheck.m"
                    {
#line 2623 "typecheck.m"
                      MR_Word check_hlds__typecheck__ConsExistQVars_43;
#line 2623 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams0_44;
#line 2623 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams_45;

#line 2622 "typecheck.m"
                      {
#line 2622 "typecheck.m"
                        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__ConsExistQVars0_32, &check_hlds__typecheck__ConsExistQVars_43);
                      }
#line 2624 "typecheck.m"
                      {
#line 2624 "typecheck.m"
                        check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__ClassConstraints0_35, &check_hlds__typecheck__ConstraintsToAdd_38);
                      }
#line 2626 "typecheck.m"
                      {
#line 2626 "typecheck.m"
                        check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_39, &check_hlds__typecheck__HeadTypeParams0_44);
                      }
#line 2627 "typecheck.m"
                      {
#line 2627 "typecheck.m"
                        check_hlds__typecheck__HeadTypeParams_45 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ConsExistQVars_43, check_hlds__typecheck__HeadTypeParams0_44);
                      }
#line 2628 "typecheck.m"
                      {
#line 2628 "typecheck.m"
                        check_hlds__type_assign__type_assign_set_head_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_45, check_hlds__typecheck__TypeAssign1_39, &check_hlds__typecheck__TypeAssign2_37);
                      }
#line 2631 "typecheck.m"
                      check_hlds__typecheck__ConsType_16 = check_hlds__typecheck__ConsType1_40;
#line 2632 "typecheck.m"
                      check_hlds__typecheck__ArgTypes_17 = check_hlds__typecheck__ArgTypes1_41;
#line 2623 "typecheck.m"
                    }
#line 2619 "typecheck.m"
                  }
#line 2619 "typecheck.m"
                else
#line 2634 "typecheck.m"
                  {
#line 2634 "typecheck.m"
                    {
#line 2634 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.get_cons_stuff\'/6", (MR_String) "type_assign_rename_apart failed");
#line 2634 "typecheck.m"
                      return;
                    }
#line 2634 "typecheck.m"
                  }
#line 2633 "typecheck.m"
              }
#line 2645 "typecheck.m"
            {
#line 2645 "typecheck.m"
              check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typecheck__TypeAssign2_37, &check_hlds__typecheck__OldConstraints_46);
            }
#line 2646 "typecheck.m"
            {
#line 2646 "typecheck.m"
              hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck__ConstraintsToAdd_38, check_hlds__typecheck__OldConstraints_46, &check_hlds__typecheck__ClassConstraints_47);
            }
#line 2647 "typecheck.m"
            {
#line 2647 "typecheck.m"
              check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(check_hlds__typecheck__ClassConstraints_47, check_hlds__typecheck__TypeAssign2_37, &check_hlds__typecheck__TypeAssign1_18);
            }
#line 2428 "typecheck.m"
            {
#line 2428 "typecheck.m"
              check_hlds__typecheck__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2428 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck__ConsType_16));
#line 2428 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_17));
#line 2428 "typecheck.m"
            }
#line 2428 "typecheck.m"
            {
#line 2428 "typecheck.m"
              check_hlds__typecheck__ConsTypeAssign_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2428 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_19, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_18));
#line 2428 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_19, 1) = ((MR_Box) (check_hlds__typecheck__V_22_22));
#line 2428 "typecheck.m"
            }
#line 2429 "typecheck.m"
            {
#line 2429 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2429 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeAssign_19));
#line 2429 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4));
#line 2429 "typecheck.m"
            }
#line 2430 "typecheck.m"
            /* direct tailcall eliminated */
#line 2430 "typecheck.m"
            {
#line 2430 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsDefns_12;
#line 2430 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23;

#line 2430 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4;
#line 2430 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2430 "typecheck.m"
            }
#line 2430 "typecheck.m"
            continue;
#line 2425 "typecheck.m"
          }
#line 2423 "typecheck.m"
      }
#line 2423 "typecheck.m"
      break;
#line 2423 "typecheck.m"
    }
#line 2419 "typecheck.m"
}

#line 2403 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(
#line 2403 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2403 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsDefns_3,
#line 2403 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2403 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5)
#line 2403 "typecheck.m"
{
#line 2409 "typecheck.m"
  while (MR_TRUE)
#line 2409 "typecheck.m"
    {
#line 2409 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2409 "typecheck.m"
      {
#line 2409 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2409 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2409 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4;
#line 2409 "typecheck.m"
        else
#line 2411 "typecheck.m"
          {
#line 2411 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2411 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2411 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18;

#line 2412 "typecheck.m"
            {
#line 2412 "typecheck.m"
              check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__ConsDefns_3, check_hlds__typecheck__TypeAssign_11, check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18);
            }
#line 2414 "typecheck.m"
            /* direct tailcall eliminated */
#line 2414 "typecheck.m"
            {
#line 2414 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns_12;
#line 2414 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18;

#line 2414 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4;
#line 2414 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2414 "typecheck.m"
            }
#line 2414 "typecheck.m"
            continue;
#line 2411 "typecheck.m"
          }
#line 2409 "typecheck.m"
      }
#line 2409 "typecheck.m"
      break;
#line 2409 "typecheck.m"
    }
#line 2403 "typecheck.m"
}

#line 2184 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__Types_3,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 2184 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6)
#line 2184 "typecheck.m"
{
#line 2188 "typecheck.m"
  while (MR_TRUE)
#line 2188 "typecheck.m"
    {
#line 2188 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2188 "typecheck.m"
      {
#line 2188 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2188 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2188 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
#line 2188 "typecheck.m"
        else
#line 2190 "typecheck.m"
          {
#line 2190 "typecheck.m"
            MR_Word check_hlds__typecheck__TA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2190 "typecheck.m"
            MR_Word check_hlds__typecheck__TAs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2190 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2165 "typecheck.m"
            if ((check_hlds__typecheck__Args_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2165 "typecheck.m"
              if ((check_hlds__typecheck__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2170 "typecheck.m"
                {
#line 2170 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TA_13));
#line 2170 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5));
#line 2170 "typecheck.m"
                }
#line 2165 "typecheck.m"
              else
#line 2165 "typecheck.m"
                {
#line 2166 "typecheck.m"
                  {
#line 2166 "typecheck.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2166 "typecheck.m"
                    return;
                  }
#line 2165 "typecheck.m"
                }
#line 2165 "typecheck.m"
            else
#line 2165 "typecheck.m"
            if ((check_hlds__typecheck__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2167 "typecheck.m"
              {
#line 2168 "typecheck.m"
                {
#line 2168 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 2168 "typecheck.m"
                  return;
                }
#line 2167 "typecheck.m"
              }
#line 2165 "typecheck.m"
            else
#line 2172 "typecheck.m"
              {
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_3, (MR_Integer) 0)));
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__Types_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_3, (MR_Integer) 1)));
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet1_52;
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 1)));
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 0)));
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes0_62;
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeOldVarType_63;
#line 2172 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_64;

#line 2137 "typecheck.m"
                {
#line 2137 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__VarTypes0_62);
                }
#line 2138 "typecheck.m"
                {
#line 2138 "typecheck.m"
                  hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__V_55_55, check_hlds__typecheck__Type_46, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
                }
#line 2146 "typecheck.m"
                if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2147 "typecheck.m"
                  {
#line 2147 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_67;

#line 2148 "typecheck.m"
                    {
#line 2148 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeAssign_67);
                    }
#line 2149 "typecheck.m"
                    {
#line 2149 "typecheck.m"
                      check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2149 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
#line 2149 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2149 "typecheck.m"
                    }
#line 2147 "typecheck.m"
                  }
#line 2146 "typecheck.m"
                else
#line 2140 "typecheck.m"
                  {
#line 2140 "typecheck.m"
                    MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
#line 2143 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_66;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_75;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_76;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_77;

#line 2727 "typecheck.m"
                    {
#line 2727 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__HeadTypeParams_75);
                    }
#line 2728 "typecheck.m"
                    {
#line 2728 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeBindings0_76);
                    }
#line 2729 "typecheck.m"
                    {
#line 2729 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_46, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
                    }
#line 2726 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2726 "typecheck.m"
                      {
#line 2730 "typecheck.m"
                        {
#line 2730 "typecheck.m"
                          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeAssign1_66);
                        }
#line 2730 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2726 "typecheck.m"
                      }
#line 2143 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2142 "typecheck.m"
                      {
#line 2142 "typecheck.m"
                        check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
#line 2142 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2142 "typecheck.m"
                      }
#line 2143 "typecheck.m"
                    else
#line 2144 "typecheck.m"
                      check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__V_53_53;
#line 2140 "typecheck.m"
                  }
#line 2174 "typecheck.m"
                {
#line 2174 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__V_54_54, check_hlds__typecheck__Types_47, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
                }
#line 2172 "typecheck.m"
              }
#line 2192 "typecheck.m"
            /* direct tailcall eliminated */
#line 2192 "typecheck.m"
            {
#line 2192 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TAs_14;
#line 2192 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2192 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5;
#line 2192 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2192 "typecheck.m"
            }
#line 2192 "typecheck.m"
            continue;
#line 2190 "typecheck.m"
          }
#line 2188 "typecheck.m"
      }
#line 2188 "typecheck.m"
      break;
#line 2188 "typecheck.m"
    }
#line 2184 "typecheck.m"
}

#line 3395 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3395__2_1_f_0(
#line 3395 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_36)
#line 3395 "typecheck.m"
{
#line 3395 "typecheck.m"
  {
#line 3395 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3395 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVar__2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 1)));
#line 3395 "typecheck.m"
    MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 0)));
#line 3395 "typecheck.m"
    MR_Word check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 2)));
#line 3395 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 3)));

#line 3395 "typecheck.m"
    return check_hlds__typecheck__HeadVar__2_37;
#line 3395 "typecheck.m"
  }
#line 3395 "typecheck.m"
}

#line 1474 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1474__1_2_p_0(
#line 1474 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalType_94,
#line 1474 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_160)
#line 1474 "typecheck.m"
{
#line 1474 "typecheck.m"
  {
#line 1474 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__GoalType_94 == check_hlds__typecheck__HeadVar__2_160);

#line 1474 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 1474 "typecheck.m"
  }
#line 1474 "typecheck.m"
}

#line 506 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__506__1_2_p_0(
#line 506 "typecheck.m"
  MR_Word check_hlds__typecheck__StartingSpecs_22,
#line 506 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_51)
#line 506 "typecheck.m"
{
#line 506 "typecheck.m"
  {
#line 506 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 506 "typecheck.m"
    {
#line 506 "typecheck.m"
      return check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[0], ((MR_Box) (check_hlds__typecheck__StartingSpecs_22)), ((MR_Box) (check_hlds__typecheck__HeadVar__2_51)));
    }
#line 506 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 506 "typecheck.m"
  }
#line 506 "typecheck.m"
}

#line 1135 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
#line 1135 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 1135 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1135 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 1135 "typecheck.m"
{
#line 1135 "typecheck.m"
  {
#line 1135 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1135 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 1135 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 1135 "typecheck.m"
    {
#line 1135 "typecheck.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
#line 1135 "typecheck.m"
      return;
    }
#line 1135 "typecheck.m"
  }
#line 1135 "typecheck.m"
}

#line 1135 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
#line 1135 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 1135 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 1135 "typecheck.m"
{
#line 4116 "check_hlds.typecheck.c"
  {
#line 4118 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

#line 4121 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 4123 "check_hlds.typecheck.c"
  }
#line 1135 "typecheck.m"
}

#line 2999 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
#line 2999 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2999 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2999 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2999 "typecheck.m"
{
#line 2999 "typecheck.m"
  {
#line 2999 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2999 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_12 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 2999 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_13 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 2999 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_12 == check_hlds__typecheck__CastY_13);
#line 2999 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 4152 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 2999 "typecheck.m"
    else
#line 2999 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 2999 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2999 "typecheck.m"
        {
#line 2999 "typecheck.m"
          MR_Word check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 2999 "typecheck.m"
          MR_Word check_hlds__typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));

#line 2999 "typecheck.m"
          {
#line 2999 "typecheck.m"
            check_hlds__typecheck_errors____Compare____cons_error_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__V_16_16, check_hlds__typecheck__V_11_11);
#line 2999 "typecheck.m"
            return;
          }
#line 2999 "typecheck.m"
        }
#line 2999 "typecheck.m"
      else
#line 4178 "check_hlds.typecheck.c"
        *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 2999 "typecheck.m"
    else
#line 2999 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4184 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 2999 "typecheck.m"
    else
#line 2999 "typecheck.m"
      {
#line 2999 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__3_3), (MR_Integer) 0);
#line 2999 "typecheck.m"
        MR_Word check_hlds__typecheck__V_17_17 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);

#line 2999 "typecheck.m"
        {
#line 2999 "typecheck.m"
          check_hlds__typecheck_info____Compare____cons_type_info_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__V_17_17, check_hlds__typecheck__V_5_5);
#line 2999 "typecheck.m"
          return;
        }
#line 2999 "typecheck.m"
      }
#line 2999 "typecheck.m"
  }
#line 2999 "typecheck.m"
}

#line 2999 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
#line 2999 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2999 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2999 "typecheck.m"
{
#line 2999 "typecheck.m"
  {
#line 2999 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2999 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_7 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
#line 2999 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_8 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

#line 2999 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_7 == check_hlds__typecheck__CastY_8);
#line 2999 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2999 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2999 "typecheck.m"
    else
#line 2999 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2999 "typecheck.m"
      {
#line 2999 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2999 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6;

#line 2999 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2999 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2999 "typecheck.m"
          {
#line 2999 "typecheck.m"
            check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 4252 "check_hlds.typecheck.c"
            {
#line 4254 "check_hlds.typecheck.c"
              return check_hlds__typecheck__succeeded = check_hlds__typecheck_errors____Unify____cons_error_0_0(check_hlds__typecheck__V_5_5, check_hlds__typecheck__V_6_6);
            }
#line 2999 "typecheck.m"
          }
#line 2999 "typecheck.m"
      }
#line 2999 "typecheck.m"
    else
#line 2999 "typecheck.m"
      {
#line 2999 "typecheck.m"
        MR_Word check_hlds__typecheck__V_3_3 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__1_1), (MR_Integer) 0);
#line 2999 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4;

#line 2999 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 2999 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2999 "typecheck.m"
          {
#line 2999 "typecheck.m"
            check_hlds__typecheck__V_4_4 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);
#line 4278 "check_hlds.typecheck.c"
            {
#line 4280 "check_hlds.typecheck.c"
              return check_hlds__typecheck__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(check_hlds__typecheck__V_3_3, check_hlds__typecheck__V_4_4);
            }
#line 2999 "typecheck.m"
          }
#line 2999 "typecheck.m"
      }
#line 2999 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2999 "typecheck.m"
  }
#line 2999 "typecheck.m"
}

#line 2388 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
#line 2388 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2388 "typecheck.m"
{
#line 2388 "typecheck.m"
  {
#line 2388 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2388 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar1_4 = check_hlds__typecheck__HeadVar__2_2;
#line 2388 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar2_5 = check_hlds__typecheck__HeadVar__3_3;

#line 2388 "typecheck.m"
    {
#line 2388 "typecheck.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_5)));
#line 2388 "typecheck.m"
      return;
    }
#line 2388 "typecheck.m"
  }
#line 2388 "typecheck.m"
}

#line 2388 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
#line 2388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2388 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2388 "typecheck.m"
{
#line 2388 "typecheck.m"
  {
#line 2388 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2388 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar1_3 = check_hlds__typecheck__HeadVar__1_1;
#line 2388 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar2_4 = check_hlds__typecheck__HeadVar__2_2;

#line 2388 "typecheck.m"
    {
#line 2388 "typecheck.m"
      return check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_4)));
    }
#line 2388 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2388 "typecheck.m"
  }
#line 2388 "typecheck.m"
}

#line 2385 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0(
#line 2385 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2385 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2385 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2385 "typecheck.m"
{
#line 2385 "typecheck.m"
  {
#line 2385 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2385 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_9 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 2385 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_10 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 2385 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_9 == check_hlds__typecheck__CastY_10);
#line 2385 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 4380 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 2385 "typecheck.m"
    else
#line 2385 "typecheck.m"
      {
#line 2385 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2385 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 2385 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 2385 "typecheck.m"
        MR_Word check_hlds__typecheck__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 2385 "typecheck.m"
        MR_Word check_hlds__typecheck__V_8_8;

#line 2385 "typecheck.m"
        {
#line 2385 "typecheck.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__typecheck__V_8_8, check_hlds__typecheck__V_4_4, check_hlds__typecheck__V_6_6);
        }
#line 4402 "check_hlds.typecheck.c"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_8_8 == (MR_Integer) 0);
#line 2385 "typecheck.m"
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 2385 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2385 "typecheck.m"
          *check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__V_8_8;
#line 2385 "typecheck.m"
        else
#line 2385 "typecheck.m"
          {
#line 2385 "typecheck.m"
            {
#line 2385 "typecheck.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[5], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__V_5_5)), ((MR_Box) (check_hlds__typecheck__V_7_7)));
#line 2385 "typecheck.m"
              return;
            }
#line 2385 "typecheck.m"
          }
#line 2385 "typecheck.m"
      }
#line 2385 "typecheck.m"
  }
#line 2385 "typecheck.m"
}

#line 2385 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0(
#line 2385 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2385 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2385 "typecheck.m"
{
#line 2385 "typecheck.m"
  {
#line 2385 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2385 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_7 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
#line 2385 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_8 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

#line 2385 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_7 == check_hlds__typecheck__CastY_8);
#line 2385 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2385 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2385 "typecheck.m"
    else
#line 2385 "typecheck.m"
      {
#line 2385 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_10_10;
#line 2385 "typecheck.m"
        MR_Word check_hlds__typecheck__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2385 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2385 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2385 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));

#line 4469 "check_hlds.typecheck.c"
        {
#line 4471 "check_hlds.typecheck.c"
          check_hlds__typecheck__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck__V_3_3, check_hlds__typecheck__V_5_5);
        }
#line 2385 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2385 "typecheck.m"
          {
#line 4478 "check_hlds.typecheck.c"
            check_hlds__typecheck__TypeInfo_10_10 = (MR_Word) &check_hlds__typecheck_scalar_common_1[5];
#line 4480 "check_hlds.typecheck.c"
            {
#line 4482 "check_hlds.typecheck.c"
              return check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck__TypeInfo_10_10, ((MR_Box) (check_hlds__typecheck__V_4_4)), ((MR_Box) (check_hlds__typecheck__V_6_6)));
            }
#line 2385 "typecheck.m"
          }
#line 2385 "typecheck.m"
      }
#line 2385 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2385 "typecheck.m"
  }
#line 2385 "typecheck.m"
}

#line 3365 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
#line 3365 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3365 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3365 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 3365 "typecheck.m"
{
#line 3365 "typecheck.m"
  {
#line 3365 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3365 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 3365 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 3365 "typecheck.m"
    {
#line 3365 "typecheck.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
#line 3365 "typecheck.m"
      return;
    }
#line 3365 "typecheck.m"
  }
#line 3365 "typecheck.m"
}

#line 3365 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
#line 3365 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 3365 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 3365 "typecheck.m"
{
#line 4537 "check_hlds.typecheck.c"
  {
#line 4539 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

#line 4542 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 4544 "check_hlds.typecheck.c"
  }
#line 3365 "typecheck.m"
}

#line 3395 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
#line 3395 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3395 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 3395 "typecheck.m"
{
#line 3395 "typecheck.m"
  {
#line 3395 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 3395 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 3395 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__2_37;

#line 3395 "typecheck.m"
    {
#line 3395 "typecheck.m"
      check_hlds__typecheck__conv0_HeadVar__2_37 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3395__2_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 3395 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__2_37));
#line 3395 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 3395 "typecheck.m"
  }
#line 3395 "typecheck.m"
}

#line 3383 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
#line 3383 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 3383 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 3383 "typecheck.m"
  MR_Word check_hlds__typecheck__Action_8,
#line 3383 "typecheck.m"
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
#line 3383 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10)
#line 3383 "typecheck.m"
{
#line 3385 "typecheck.m"
  {
#line 3385 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 0)));
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 1)));
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 2)));
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeKinds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 3)));
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 4)));
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistProgConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 5)));
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 6)));
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_19;
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeTable_21;
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeDefn_22;
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_23;
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__PredId_24;
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_25;
#line 3385 "typecheck.m"
    MR_Word check_hlds__typecheck__PredInfo_26;
#line 3393 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 7)));
#line 3424 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38;
#line 3424 "typecheck.m"
    MR_Word check_hlds__typecheck__V_53_53;
#line 3424 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 3424 "typecheck.m"
    MR_Word check_hlds__typecheck__V_55_55;
#line 3424 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 3424 "typecheck.m"
    MR_Word check_hlds__typecheck__V_57_57;
#line 3424 "typecheck.m"
    MR_Word check_hlds__typecheck__V_58_58;
#line 3424 "typecheck.m"
    MR_Word check_hlds__typecheck__V_59_59;
#line 3424 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;
#line 3424 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 3425 "typecheck.m"
    MR_Word check_hlds__typecheck__V_39_39;
#line 3425 "typecheck.m"
    MR_Word check_hlds__typecheck__V_63_63;
#line 3427 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 3427 "typecheck.m"
    MR_Word check_hlds__typecheck__V_64_64;

#line 3395 "typecheck.m"
    {
#line 3395 "typecheck.m"
      check_hlds__typecheck__ArgTypes_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[6], check_hlds__typecheck__Args_17);
    }
#line 3396 "typecheck.m"
    {
#line 3396 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__TypeTable_21);
    }
#line 3397 "typecheck.m"
    {
#line 3397 "typecheck.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_21, check_hlds__typecheck__TypeCtor_11, &check_hlds__typecheck__TypeDefn_22);
    }
#line 3398 "typecheck.m"
    {
#line 3398 "typecheck.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__Body_23);
    }
#line 3420 "typecheck.m"
    {
#line 3420 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_pred_id_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredId_24);
    }
#line 3421 "typecheck.m"
    {
#line 3421 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__ModuleInfo_25);
    }
#line 3422 "typecheck.m"
    {
#line 3422 "typecheck.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_25, check_hlds__typecheck__PredId_24, &check_hlds__typecheck__PredInfo_26);
    }
#line 3424 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Body_23)) == (MR_mktag((MR_Integer) 1)));
#line 3424 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3424 "typecheck.m"
      {
#line 3424 "typecheck.m"
        check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 0)));
#line 3424 "typecheck.m"
        check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 1)));
#line 3424 "typecheck.m"
        check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 2)));
#line 3424 "typecheck.m"
        check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 3)));
#line 3424 "typecheck.m"
        check_hlds__typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 4)));
#line 3424 "typecheck.m"
        check_hlds__typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 5)));
#line 3424 "typecheck.m"
        check_hlds__typecheck__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 3424 "typecheck.m"
        check_hlds__typecheck__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 3424 "typecheck.m"
        check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 7)));
#line 3424 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 3424 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3424 "typecheck.m"
          {
#line 3424 "typecheck.m"
            check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_38_38, (MR_Integer) 0)));
#line 3425 "typecheck.m"
            check_hlds__typecheck__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 3425 "typecheck.m"
            {
#line 3425 "typecheck.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__V_63_63);
            }
#line 3425 "typecheck.m"
            {
#line 3425 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(check_hlds__typecheck__V_39_39, check_hlds__typecheck__V_63_63);
            }
#line 3425 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3424 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3424 "typecheck.m"
              {
#line 3426 "typecheck.m"
                {
#line 3426 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_26);
                }
#line 3426 "typecheck.m"
                check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3424 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 3424 "typecheck.m"
                  {
#line 3427 "typecheck.m"
                    check_hlds__typecheck__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3427 "typecheck.m"
                    {
#line 3427 "typecheck.m"
                      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__V_64_64);
                    }
#line 3427 "typecheck.m"
                    {
#line 3427 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__status____Unify____import_status_0_0(check_hlds__typecheck__V_40_40, check_hlds__typecheck__V_64_64);
                    }
#line 3427 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3424 "typecheck.m"
                  }
#line 3424 "typecheck.m"
              }
#line 3424 "typecheck.m"
          }
#line 3424 "typecheck.m"
      }
#line 3430 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3429 "typecheck.m"
      {
#line 3429 "typecheck.m"
        MR_Word check_hlds__typecheck__V_41_41;

#line 3429 "typecheck.m"
        {
#line 3429 "typecheck.m"
          check_hlds__typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3429 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_41_41, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3429 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_41_41, 1) = ((MR_Box) (check_hlds__typecheck__TypeDefn_22));
#line 3429 "typecheck.m"
        }
#line 3429 "typecheck.m"
        {
#line 3429 "typecheck.m"
          MR_Word base;
#line 3429 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3429 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfo_10 = base;
#line 3429 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 3429 "typecheck.m"
        }
#line 3429 "typecheck.m"
      }
#line 3430 "typecheck.m"
    else
#line 3438 "typecheck.m"
      {
#line 3433 "typecheck.m"
        MR_Word check_hlds__typecheck__V_65_65;
#line 3435 "typecheck.m"
        MR_Word check_hlds__typecheck__V_43_43;
#line 3435 "typecheck.m"
        MR_Word check_hlds__typecheck__V_66_66;

#line 3433 "typecheck.m"
        {
#line 3433 "typecheck.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__V_65_65);
        }
#line 3433 "typecheck.m"
        {
#line 3433 "typecheck.m"
          check_hlds__typecheck__succeeded = parse_tree__status____Unify____import_status_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__typecheck__V_65_65);
        }
#line 3433 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3433 "typecheck.m"
          {
#line 3434 "typecheck.m"
            {
#line 3434 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_26);
            }
#line 3434 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3433 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3433 "typecheck.m"
              {
#line 3435 "typecheck.m"
                check_hlds__typecheck__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3435 "typecheck.m"
                {
#line 3435 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__PredInfo_26, &check_hlds__typecheck__V_66_66);
                }
#line 3435 "typecheck.m"
                {
#line 3435 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__status____Unify____import_status_0_0(check_hlds__typecheck__V_43_43, check_hlds__typecheck__V_66_66);
                }
#line 3435 "typecheck.m"
                check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3433 "typecheck.m"
              }
#line 3433 "typecheck.m"
          }
#line 3438 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3437 "typecheck.m"
          {
#line 3437 "typecheck.m"
            *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_7[3]);
#line 3437 "typecheck.m"
          }
#line 3438 "typecheck.m"
        else
#line 3444 "typecheck.m"
          {
#line 3439 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Action_8 == (MR_Integer) 0);
#line 3439 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3440 "typecheck.m"
              check_hlds__typecheck__succeeded = (check_hlds__typecheck__ExistQVars0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3444 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3443 "typecheck.m"
              {
#line 3443 "typecheck.m"
                MR_Word check_hlds__typecheck__V_45_45;

#line 3443 "typecheck.m"
                {
#line 3443 "typecheck.m"
                  check_hlds__typecheck__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3443 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_45_45, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3443 "typecheck.m"
                }
#line 3443 "typecheck.m"
                {
#line 3443 "typecheck.m"
                  MR_Word base;
#line 3443 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3443 "typecheck.m"
                  *check_hlds__typecheck__ConsTypeInfo_10 = base;
#line 3443 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_45_45));
#line 3443 "typecheck.m"
                }
#line 3443 "typecheck.m"
              }
#line 3444 "typecheck.m"
            else
#line 3446 "typecheck.m"
              {
#line 3446 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeArgs_28;
#line 3446 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsType_29;
#line 3446 "typecheck.m"
                MR_Word check_hlds__typecheck__UnivProgConstraints_30;
#line 3446 "typecheck.m"
                MR_Word check_hlds__typecheck__ProgConstraints_31;
#line 3446 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVars_32;
#line 3446 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassTable_33;
#line 3446 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_34;
#line 3446 "typecheck.m"
                MR_Word check_hlds__typecheck__V_47_47;
#line 3446 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;

#line 3445 "typecheck.m"
                {
#line 3445 "typecheck.m"
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__ConsTypeKinds_14, check_hlds__typecheck__ConsTypeParams_13, &check_hlds__typecheck__ConsTypeArgs_28);
                }
#line 3447 "typecheck.m"
                {
#line 3447 "typecheck.m"
                  parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_11, check_hlds__typecheck__ConsTypeArgs_28, &check_hlds__typecheck__ConsType_29);
                }
#line 3448 "typecheck.m"
                check_hlds__typecheck__UnivProgConstraints_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3454 "typecheck.m"
#line 3454 "typecheck.m"
                switch (check_hlds__typecheck__Action_8) {
#line 3454 "typecheck.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 3454 "typecheck.m"
                  case (MR_Integer) 2:
#line 3450 "typecheck.m"
                    {
#line 3451 "typecheck.m"
                      {
#line 3451 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3451 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 0) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_30));
#line 3451 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3451 "typecheck.m"
                      }
#line 3453 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_32 = check_hlds__typecheck__ExistQVars0_15;
#line 3450 "typecheck.m"
                    }
#line 3454 "typecheck.m"
                    break;
#line 3454 "typecheck.m"
                  case (MR_Integer) 1:
#line 3463 "typecheck.m"
                    {
#line 3469 "typecheck.m"
                      {
#line 3469 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3469 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3469 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3469 "typecheck.m"
                      }
#line 3471 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_32 = check_hlds__typecheck__ExistQVars0_15;
#line 3463 "typecheck.m"
                    }
#line 3454 "typecheck.m"
                    break;
#line 3454 "typecheck.m"
                  case (MR_Integer) 0:
#line 3455 "typecheck.m"
                    {
#line 3459 "typecheck.m"
                      {
#line 3459 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3459 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3459 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_31, 1) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_30));
#line 3459 "typecheck.m"
                      }
#line 3461 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3455 "typecheck.m"
                    }
#line 3454 "typecheck.m"
                    break;
#line 3454 "typecheck.m"
                }
#line 3473 "typecheck.m"
                {
#line 3473 "typecheck.m"
                  hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_25, &check_hlds__typecheck__ClassTable_33);
                }
#line 3474 "typecheck.m"
                {
#line 3474 "typecheck.m"
                  hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_33, check_hlds__typecheck__ConsTypeVarSet_12, check_hlds__typecheck__GoalId_7, check_hlds__typecheck__ProgConstraints_31, &check_hlds__typecheck__Constraints_34);
                }
#line 3477 "typecheck.m"
                {
#line 3477 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 3477 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3477 "typecheck.m"
                }
#line 3476 "typecheck.m"
                {
#line 3476 "typecheck.m"
                  check_hlds__typecheck__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3476 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_12));
#line 3476 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_32));
#line 3476 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_29));
#line 3476 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_19));
#line 3476 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_34));
#line 3476 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 5) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 3476 "typecheck.m"
                }
#line 3476 "typecheck.m"
                *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_47_47);
#line 3446 "typecheck.m"
              }
#line 3444 "typecheck.m"
          }
#line 3438 "typecheck.m"
      }
#line 3385 "typecheck.m"
  }
#line 3383 "typecheck.m"
}

#line 3370 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
#line 3370 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3370 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3370 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3370 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3370 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__5_5)
#line 3370 "typecheck.m"
{
#line 3374 "typecheck.m"
  {
#line 3374 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 3374 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3374 "typecheck.m"
      *check_hlds__typecheck__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3374 "typecheck.m"
    else
#line 3375 "typecheck.m"
      {
#line 3375 "typecheck.m"
        MR_Word check_hlds__typecheck__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 3375 "typecheck.m"
        MR_Word check_hlds__typecheck__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
#line 3375 "typecheck.m"
        MR_Word check_hlds__typecheck__Y_14;
#line 3375 "typecheck.m"
        MR_Word check_hlds__typecheck__Ys_15;

#line 3376 "typecheck.m"
        {
#line 3376 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__X_12, &check_hlds__typecheck__Y_14);
        }
#line 3377 "typecheck.m"
        {
#line 3377 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__Xs_13, &check_hlds__typecheck__Ys_15);
        }
#line 3375 "typecheck.m"
        {
#line 3375 "typecheck.m"
          MR_Word base;
#line 3375 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3375 "typecheck.m"
          *check_hlds__typecheck__HeadVar__5_5 = base;
#line 3375 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Y_14));
#line 3375 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Ys_15));
#line 3375 "typecheck.m"
        }
#line 3375 "typecheck.m"
      }
#line 3374 "typecheck.m"
  }
#line 3370 "typecheck.m"
}

#line 3347 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
#line 3347 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3347 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 3347 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3)
#line 3347 "typecheck.m"
{
#line 3350 "typecheck.m"
  {
#line 3350 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 3350 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3350 "typecheck.m"
      {
#line 3350 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3350 "typecheck.m"
        *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3350 "typecheck.m"
      }
#line 3350 "typecheck.m"
    else
#line 3351 "typecheck.m"
      {
#line 3351 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeConsInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 3351 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeConsInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 3351 "typecheck.m"
        MR_Word check_hlds__typecheck__InfosTail_8;
#line 3351 "typecheck.m"
        MR_Word check_hlds__typecheck__ErrorsTail_9;

#line 3352 "typecheck.m"
        {
#line 3352 "typecheck.m"
          check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__MaybeConsInfos_5, &check_hlds__typecheck__InfosTail_8, &check_hlds__typecheck__ErrorsTail_9);
        }
#line 3357 "typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeConsInfo_4)) == (MR_mktag((MR_Integer) 1))))
#line 3358 "typecheck.m"
          {
#line 3358 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeConsInfo_4, (MR_Integer) 0)));

#line 3359 "typecheck.m"
            *check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__InfosTail_8;
#line 3360 "typecheck.m"
            {
#line 3360 "typecheck.m"
              MR_Word base;
#line 3360 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3360 "typecheck.m"
              *check_hlds__typecheck__HeadVar__3_3 = base;
#line 3360 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsError_11));
#line 3360 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__ErrorsTail_9));
#line 3360 "typecheck.m"
            }
#line 3358 "typecheck.m"
          }
#line 3357 "typecheck.m"
        else
#line 3354 "typecheck.m"
          {
#line 3354 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsInfo_10 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeConsInfo_4), (MR_Integer) 0);

#line 3355 "typecheck.m"
            {
#line 3355 "typecheck.m"
              MR_Word base;
#line 3355 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3355 "typecheck.m"
              *check_hlds__typecheck__HeadVar__2_2 = base;
#line 3355 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_10));
#line 3355 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__InfosTail_8));
#line 3355 "typecheck.m"
            }
#line 3356 "typecheck.m"
            *check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__ErrorsTail_9;
#line 3354 "typecheck.m"
          }
#line 3351 "typecheck.m"
      }
#line 3350 "typecheck.m"
  }
#line 3347 "typecheck.m"
}

#line 3213 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3213 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3213 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3213 "typecheck.m"
  MR_Word * check_hlds__typecheck__DataConsErrors_12)
#line 3213 "typecheck.m"
{
#line 3218 "typecheck.m"
  {
#line 3218 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_72_72;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_77_77;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_13;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__Ctors_14;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__PlainMaybeConsInfos_19;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfos_27;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__DataMaybeConsInfos_28;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__DataConsInfos_29;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__BuiltinConsInfos_35;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__TupleConsInfos_46;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConsInfos_48;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__ApplyConsInfos_50;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__OtherConsInfos_51;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__V_70_70;
#line 3218 "typecheck.m"
    MR_Word check_hlds__typecheck__V_71_71;
#line 3231 "typecheck.m"
    MR_Word check_hlds__typecheck__HLDS_ConsDefns_18;
#line 3226 "typecheck.m"
    MR_Word check_hlds__typecheck__V_15_15;
#line 3226 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_16_16;
#line 3226 "typecheck.m"
    MR_Word check_hlds__typecheck__V_17_17;
#line 3259 "typecheck.m"
    MR_Word check_hlds__typecheck__HLDS_ExistQConsDefns_24;
#line 3252 "typecheck.m"
    MR_Word check_hlds__typecheck__Name_20;
#line 3252 "typecheck.m"
    MR_Word check_hlds__typecheck__FunctorTypeCtor_21;
#line 3252 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigName_22;
#line 3252 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigFunctor_23;
#line 3252 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_78_78;
#line 3270 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
#line 3291 "typecheck.m"
    MR_String check_hlds__typecheck__BuiltInTypeName_30;
#line 3320 "typecheck.m"
    MR_Integer check_hlds__typecheck__TupleArity_36;
#line 3329 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConsInfosPrime_47;
#line 3336 "typecheck.m"
    MR_Word check_hlds__typecheck__ApplyConsInfosPrime_49;

#line 3219 "typecheck.m"
    {
#line 3219 "typecheck.m"
      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_13);
    }
#line 3224 "typecheck.m"
    {
#line 3224 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__Ctors_14);
    }
#line 3226 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 3226 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3226 "typecheck.m"
      {
#line 3226 "typecheck.m"
        check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3226 "typecheck.m"
        check_hlds__typecheck__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3226 "typecheck.m"
        check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3227 "typecheck.m"
        {
#line 3227 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__Functor_8, &check_hlds__typecheck__HLDS_ConsDefns_18);
        }
#line 3226 "typecheck.m"
      }
#line 3231 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3229 "typecheck.m"
      {
#line 3229 "typecheck.m"
        {
#line 3229 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 2, check_hlds__typecheck__HLDS_ConsDefns_18, &check_hlds__typecheck__PlainMaybeConsInfos_19);
        }
#line 3229 "typecheck.m"
      }
#line 3231 "typecheck.m"
    else
#line 3232 "typecheck.m"
      check_hlds__typecheck__PlainMaybeConsInfos_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3252 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 3252 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3252 "typecheck.m"
      {
#line 3252 "typecheck.m"
        check_hlds__typecheck__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3252 "typecheck.m"
        check_hlds__typecheck__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3252 "typecheck.m"
        check_hlds__typecheck__FunctorTypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3252 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_78_78);
#line 3252 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3252 "typecheck.m"
          {
#line 3253 "typecheck.m"
            {
#line 3253 "typecheck.m"
              check_hlds__typecheck__succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(check_hlds__typecheck__Name_20, &check_hlds__typecheck__OrigName_22);
            }
#line 3252 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3252 "typecheck.m"
              {
#line 3254 "typecheck.m"
                {
#line 3254 "typecheck.m"
                  check_hlds__typecheck__OrigFunctor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 3254 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 3254 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 1) = ((MR_Box) (check_hlds__typecheck__OrigName_22));
#line 3254 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 2) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 3254 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 3) = ((MR_Box) (check_hlds__typecheck__FunctorTypeCtor_21));
#line 3254 "typecheck.m"
                }
#line 3255 "typecheck.m"
                {
#line 3255 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__OrigFunctor_23, &check_hlds__typecheck__HLDS_ExistQConsDefns_24);
                }
#line 3252 "typecheck.m"
              }
#line 3252 "typecheck.m"
          }
#line 3252 "typecheck.m"
      }
#line 3259 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3257 "typecheck.m"
      {
#line 3257 "typecheck.m"
        {
#line 3257 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 0, check_hlds__typecheck__HLDS_ExistQConsDefns_24, &check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25);
        }
#line 3257 "typecheck.m"
      }
#line 3259 "typecheck.m"
    else
#line 3260 "typecheck.m"
      check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3266 "typecheck.m"
    {
#line 3266 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_field_access_function_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26);
    }
#line 3270 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3269 "typecheck.m"
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
#line 3270 "typecheck.m"
    else
#line 3271 "typecheck.m"
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5439 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_72_72 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 3275 "typecheck.m"
    {
#line 3275 "typecheck.m"
      check_hlds__typecheck__V_54_54 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25, check_hlds__typecheck__FieldAccessMaybeConsInfos_27);
    }
#line 3274 "typecheck.m"
    {
#line 3274 "typecheck.m"
      check_hlds__typecheck__DataMaybeConsInfos_28 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__PlainMaybeConsInfos_19, check_hlds__typecheck__V_54_54);
    }
#line 3276 "typecheck.m"
    {
#line 3276 "typecheck.m"
      check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__DataMaybeConsInfos_28, &check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__DataConsErrors_12);
    }
#line 3282 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == (MR_Integer) 0);
#line 3282 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2742 "typecheck.m"
#line 2742 "typecheck.m"
      switch (MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) {
#line 2742 "typecheck.m"
        default:
#line 2742 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_FALSE;
#line 2742 "typecheck.m"
          break;
#line 2742 "typecheck.m"
        case (MR_Integer) 3:
#line 2742 "typecheck.m"
#line 2742 "typecheck.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) {
#line 2742 "typecheck.m"
            default:
#line 2742 "typecheck.m"
              check_hlds__typecheck__succeeded = MR_FALSE;
#line 2742 "typecheck.m"
              break;
#line 2742 "typecheck.m"
            case (MR_Integer) 2:
#line 2746 "typecheck.m"
              {
#line 2746 "typecheck.m"
                MR_String check_hlds__typecheck__String_83;
#line 2746 "typecheck.m"
                MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2746 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 2746 "typecheck.m"
                MR_Word check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 2753 "typecheck.m"
                MR_Char check_hlds__typecheck__V_85_85;

#line 2746 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_87_87 == (MR_Integer) 0);
#line 2746 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2746 "typecheck.m"
                  {
#line 2746 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_86_86)) == (MR_mktag((MR_Integer) 0)));
#line 2746 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2746 "typecheck.m"
                      {
#line 2746 "typecheck.m"
                        check_hlds__typecheck__String_83 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_86_86, (MR_Integer) 0)));
#line 2746 "typecheck.m"
                        check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
#line 2753 "typecheck.m"
                        {
#line 2753 "typecheck.m"
                          check_hlds__typecheck__succeeded = mercury__string__char_to_string_2_p_1(&check_hlds__typecheck__V_85_85, check_hlds__typecheck__String_83);
                        }
#line 2746 "typecheck.m"
                      }
#line 2746 "typecheck.m"
                  }
#line 2746 "typecheck.m"
              }
#line 2742 "typecheck.m"
              break;
#line 2742 "typecheck.m"
            case (MR_Integer) 5:
#line 2742 "typecheck.m"
              {
#line 2742 "typecheck.m"
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int";
#line 2742 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2742 "typecheck.m"
              }
#line 2742 "typecheck.m"
              break;
#line 2742 "typecheck.m"
            case (MR_Integer) 6:
#line 2743 "typecheck.m"
              {
#line 2743 "typecheck.m"
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "float";
#line 2743 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2743 "typecheck.m"
              }
#line 2742 "typecheck.m"
              break;
#line 2742 "typecheck.m"
            case (MR_Integer) 7:
#line 2744 "typecheck.m"
              {
#line 2744 "typecheck.m"
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
#line 2744 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2744 "typecheck.m"
              }
#line 2742 "typecheck.m"
              break;
#line 2742 "typecheck.m"
            case (MR_Integer) 8:
#line 2745 "typecheck.m"
              {
#line 2745 "typecheck.m"
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "string";
#line 2745 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2745 "typecheck.m"
              }
#line 2742 "typecheck.m"
              break;
#line 2742 "typecheck.m"
            case (MR_Integer) 9:
#line 2754 "typecheck.m"
              {
#line 2754 "typecheck.m"
                MR_String check_hlds__typecheck__Name_88 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2762 "typecheck.m"
                MR_Integer check_hlds__typecheck__lo_0;
#line 2762 "typecheck.m"
                MR_Integer check_hlds__typecheck__hi_1;
#line 2762 "typecheck.m"
                MR_Integer check_hlds__typecheck__mid_2;
#line 2762 "typecheck.m"
                MR_Integer check_hlds__typecheck__result_3;

#line 2762 "typecheck.m"
                /* binary string simple lookup switch */
#line 2762 "typecheck.m"
                check_hlds__typecheck__lo_0 = (MR_Integer) 0;
#line 2762 "typecheck.m"
                check_hlds__typecheck__hi_1 = (MR_Integer) 4;
#line 2762 "typecheck.m"
                do
#line 2762 "typecheck.m"
                  {
#line 2762 "typecheck.m"
                    check_hlds__typecheck__mid_2 = (((check_hlds__typecheck__lo_0 + check_hlds__typecheck__hi_1)) / (MR_Integer) 2);
#line 2762 "typecheck.m"
                    check_hlds__typecheck__result_3 = MR_strcmp(check_hlds__typecheck__Name_88, ((&check_hlds__typecheck_vector_common_10[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_10_0__vct_10_f_0);
#line 2762 "typecheck.m"
                    if ((check_hlds__typecheck__result_3 == (MR_Integer) 0))
#line 2762 "typecheck.m"
                      {
#line 2762 "typecheck.m"
                        check_hlds__typecheck__BuiltInTypeName_30 = ((&check_hlds__typecheck_vector_common_10[0 + check_hlds__typecheck__mid_2]))->check_hlds__typecheck__vector_common_type_10_0__vct_10_f_1;
#line 2762 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2762 "typecheck.m"
                        /* jump out of search loop */
#line 2762 "typecheck.m"
                        goto label_0;
#line 2762 "typecheck.m"
                      }
#line 2762 "typecheck.m"
                    else
#line 2762 "typecheck.m"
                    if ((check_hlds__typecheck__result_3 < (MR_Integer) 0))
#line 2762 "typecheck.m"
                      check_hlds__typecheck__hi_1 = (check_hlds__typecheck__mid_2 - (MR_Integer) 1);
#line 2762 "typecheck.m"
                    else
#line 2762 "typecheck.m"
                      check_hlds__typecheck__lo_0 = (check_hlds__typecheck__mid_2 + (MR_Integer) 1);
#line 2762 "typecheck.m"
                  }
#line 2762 "typecheck.m"
                while ((check_hlds__typecheck__lo_0 <= check_hlds__typecheck__hi_1));
#line 2762 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_FALSE;
#line 2762 "typecheck.m"
              label_0:;
#line 2754 "typecheck.m"
              }
#line 2742 "typecheck.m"
              break;
#line 2742 "typecheck.m"
          }
#line 2742 "typecheck.m"
          break;
#line 2742 "typecheck.m"
      }
#line 3291 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3285 "typecheck.m"
      {
#line 3285 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtor_31;
#line 3285 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsType_32;
#line 3285 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsTypeVarSet_33;
#line 3285 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsInfo_34;
#line 3285 "typecheck.m"
        MR_Word check_hlds__typecheck__V_55_55;
#line 3285 "typecheck.m"
        MR_Word check_hlds__typecheck__V_60_60;

#line 3285 "typecheck.m"
        {
#line 3285 "typecheck.m"
          check_hlds__typecheck__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 3285 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_55_55, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
#line 3285 "typecheck.m"
        }
#line 3285 "typecheck.m"
        {
#line 3285 "typecheck.m"
          check_hlds__typecheck__TypeCtor_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3285 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 0) = ((MR_Box) (check_hlds__typecheck__V_55_55));
#line 3285 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 3285 "typecheck.m"
        }
#line 3286 "typecheck.m"
        {
#line 3286 "typecheck.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsType_32);
        }
#line 3287 "typecheck.m"
        {
#line 3287 "typecheck.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_33);
        }
#line 3289 "typecheck.m"
        {
#line 3289 "typecheck.m"
          check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3289 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
#line 3289 "typecheck.m"
        }
#line 3288 "typecheck.m"
        {
#line 3288 "typecheck.m"
          check_hlds__typecheck__ConsInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3288 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_33));
#line 3288 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3288 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_32));
#line 3288 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3288 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
#line 3288 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 5) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 3288 "typecheck.m"
        }
#line 3290 "typecheck.m"
        {
#line 3290 "typecheck.m"
          check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3290 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_34));
#line 3290 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3290 "typecheck.m"
        }
#line 3285 "typecheck.m"
      }
#line 3291 "typecheck.m"
    else
#line 3292 "typecheck.m"
      check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3298 "typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3297 "typecheck.m"
      {
#line 3297 "typecheck.m"
        MR_Word check_hlds__typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3297 "typecheck.m"
        MR_String check_hlds__typecheck__V_63_63;
#line 3297 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37;

#line 3297 "typecheck.m"
        check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3297 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3297 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 3297 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3297 "typecheck.m"
          {
#line 3297 "typecheck.m"
            check_hlds__typecheck__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_62_62, (MR_Integer) 0)));
#line 3297 "typecheck.m"
            check_hlds__typecheck__succeeded = (strcmp(check_hlds__typecheck__V_63_63, (MR_String) "{}") == 0);
#line 3297 "typecheck.m"
          }
#line 3297 "typecheck.m"
      }
#line 3298 "typecheck.m"
    else
#line 3298 "typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 3298 "typecheck.m"
      {
#line 3298 "typecheck.m"
        check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3298 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 3298 "typecheck.m"
      }
#line 3298 "typecheck.m"
    else
#line 3298 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_FALSE;
#line 3320 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3305 "typecheck.m"
      {
#line 3305 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 3305 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsTypeVarSet0_38;
#line 3305 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleArgTVars_39;
#line 3305 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsTypeVarSet_40;
#line 3305 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleArgTypes_41;
#line 3305 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleTypeCtor_42;
#line 3305 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsType_43;
#line 3305 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsInfo_45;
#line 3305 "typecheck.m"
        MR_Word check_hlds__typecheck__V_64_64;

#line 3305 "typecheck.m"
        {
#line 3305 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, &check_hlds__typecheck__TupleConsTypeVarSet0_38);
        }
#line 3306 "typecheck.m"
        {
#line 3306 "typecheck.m"
          mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, check_hlds__typecheck__TupleArity_36, &check_hlds__typecheck__TupleArgTVars_39, check_hlds__typecheck__TupleConsTypeVarSet0_38, &check_hlds__typecheck__TupleConsTypeVarSet_40);
        }
#line 3308 "typecheck.m"
        {
#line 3308 "typecheck.m"
          check_hlds__typecheck__V_64_64 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 3308 "typecheck.m"
        {
#line 3308 "typecheck.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_64_64, check_hlds__typecheck__TupleArgTVars_39, &check_hlds__typecheck__TupleArgTypes_41);
        }
#line 3311 "typecheck.m"
        {
#line 3311 "typecheck.m"
          check_hlds__typecheck__TupleTypeCtor_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3311 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_7[1]));
#line 3311 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 1) = ((MR_Box) (check_hlds__typecheck__TupleArity_36));
#line 3311 "typecheck.m"
        }
#line 3312 "typecheck.m"
        {
#line 3312 "typecheck.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TupleTypeCtor_42, check_hlds__typecheck__TupleArgTypes_41, &check_hlds__typecheck__TupleConsType_43);
        }
#line 3316 "typecheck.m"
        {
#line 3316 "typecheck.m"
          check_hlds__typecheck__TupleConsInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3316 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsTypeVarSet_40));
#line 3316 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3316 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 2) = ((MR_Box) (check_hlds__typecheck__TupleConsType_43));
#line 3316 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 3) = ((MR_Box) (check_hlds__typecheck__TupleArgTypes_41));
#line 3316 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
#line 3316 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_7[2])));
#line 3316 "typecheck.m"
        }
#line 3319 "typecheck.m"
        {
#line 3319 "typecheck.m"
          check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3319 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsInfo_45));
#line 3319 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3319 "typecheck.m"
        }
#line 3305 "typecheck.m"
      }
#line 3320 "typecheck.m"
    else
#line 3321 "typecheck.m"
      check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3327 "typecheck.m"
    {
#line 3327 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_pred_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, &check_hlds__typecheck__PredConsInfosPrime_47);
    }
#line 3329 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3328 "typecheck.m"
      check_hlds__typecheck__PredConsInfos_48 = check_hlds__typecheck__PredConsInfosPrime_47;
#line 3329 "typecheck.m"
    else
#line 3330 "typecheck.m"
      check_hlds__typecheck__PredConsInfos_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3334 "typecheck.m"
    {
#line 3334 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__ApplyConsInfosPrime_49);
    }
#line 3336 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3335 "typecheck.m"
      check_hlds__typecheck__ApplyConsInfos_50 = check_hlds__typecheck__ApplyConsInfosPrime_49;
#line 3336 "typecheck.m"
    else
#line 3337 "typecheck.m"
      check_hlds__typecheck__ApplyConsInfos_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5893 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_77_77 = (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0;
#line 3341 "typecheck.m"
    {
#line 3341 "typecheck.m"
      check_hlds__typecheck__V_71_71 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__PredConsInfos_48, check_hlds__typecheck__ApplyConsInfos_50);
    }
#line 3341 "typecheck.m"
    {
#line 3341 "typecheck.m"
      check_hlds__typecheck__V_70_70 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__TupleConsInfos_46, check_hlds__typecheck__V_71_71);
    }
#line 3340 "typecheck.m"
    {
#line 3340 "typecheck.m"
      check_hlds__typecheck__OtherConsInfos_51 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__BuiltinConsInfos_35, check_hlds__typecheck__V_70_70);
    }
#line 3342 "typecheck.m"
    {
#line 3342 "typecheck.m"
      *check_hlds__typecheck__ConsInfos_11 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__OtherConsInfos_51);
    }
#line 3218 "typecheck.m"
  }
#line 3213 "typecheck.m"
}

#line 2935 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
#line 2935 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2935 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2935 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2935 "typecheck.m"
{
#line 2935 "typecheck.m"
  {
#line 2935 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2935 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2935 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

#line 2935 "typecheck.m"
    {
#line 2935 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    }
#line 2935 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2935 "typecheck.m"
      {
#line 2935 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
#line 2935 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2935 "typecheck.m"
      }
#line 2935 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2935 "typecheck.m"
  }
#line 2935 "typecheck.m"
}

#line 3184 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
#line 3184 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3184 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3184 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3184 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3184 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3184 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsErrors_12)
#line 3184 "typecheck.m"
{
#line 3188 "typecheck.m"
  {
#line 3188 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3188 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_13;
#line 3196 "typecheck.m"
    MR_Word check_hlds__typecheck__ImportStatus_14;

#line 3189 "typecheck.m"
    {
#line 3189 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__IsFieldAccessFunc_13);
    }
#line 3196 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__IsFieldAccessFunc_13)) == (MR_mktag((MR_Integer) 1)));
#line 3196 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3196 "typecheck.m"
      {
#line 3196 "typecheck.m"
        check_hlds__typecheck__ImportStatus_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__IsFieldAccessFunc_13, (MR_Integer) 0)));
#line 3197 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__ImportStatus_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3197 "typecheck.m"
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3196 "typecheck.m"
      }
#line 3208 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3204 "typecheck.m"
      {
#line 3204 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldAccessConsInfos_15;
#line 2923 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_19_29;
#line 2923 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_20_30;
#line 2923 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_23_33;
#line 2923 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_24_34;
#line 2923 "typecheck.m"
        MR_Word check_hlds__typecheck__Name_21;
#line 2923 "typecheck.m"
        MR_Word check_hlds__typecheck__ModuleInfo_23;
#line 2923 "typecheck.m"
        MR_Word check_hlds__typecheck__AccessType_24;
#line 2923 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldName_25;
#line 2923 "typecheck.m"
        MR_Word check_hlds__typecheck__CtorFieldTable_26;
#line 2923 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldDefns_27;
#line 2923 "typecheck.m"
        MR_Word check_hlds__typecheck__V_28_28;
#line 2923 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_35_35;
#line 2923 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_36_36;
#line 2926 "typecheck.m"
        MR_Word check_hlds__typecheck__V_22_22;
#line 2932 "typecheck.m"
        MR_Box check_hlds__typecheck__conv0_FieldDefns_27;

#line 2926 "typecheck.m"
        check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2926 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2926 "typecheck.m"
          {
#line 2926 "typecheck.m"
            check_hlds__typecheck__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2926 "typecheck.m"
            check_hlds__typecheck__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 2926 "typecheck.m"
            check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 2926 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_35_35);
#line 2923 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2923 "typecheck.m"
              {
#line 2927 "typecheck.m"
                {
#line 2927 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__ModuleInfo_23);
                }
#line 2928 "typecheck.m"
                {
#line 2928 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_23, check_hlds__typecheck__Name_21, &check_hlds__typecheck__V_36_36, &check_hlds__typecheck__AccessType_24, &check_hlds__typecheck__FieldName_25);
                }
#line 2923 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2923 "typecheck.m"
                  {
#line 2928 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_36_36);
#line 2923 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2923 "typecheck.m"
                      {
#line 2931 "typecheck.m"
                        {
#line 2931 "typecheck.m"
                          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_23, &check_hlds__typecheck__CtorFieldTable_26);
                        }
#line 6087 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_19_29 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 6089 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeInfo_20_30 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
#line 2932 "typecheck.m"
                        {
#line 2932 "typecheck.m"
                          check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_19_29, check_hlds__typecheck__TypeInfo_20_30, check_hlds__typecheck__CtorFieldTable_26, ((MR_Box) (check_hlds__typecheck__FieldName_25)), &check_hlds__typecheck__conv0_FieldDefns_27);
                        }
#line 2932 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2932 "typecheck.m"
                          {
#line 2932 "typecheck.m"
                            check_hlds__typecheck__FieldDefns_27 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_27);
#line 2932 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2932 "typecheck.m"
                          }
#line 2923 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2923 "typecheck.m"
                          {
#line 6110 "check_hlds.typecheck.c"
                            check_hlds__typecheck__TypeCtorInfo_23_33 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
#line 6112 "check_hlds.typecheck.c"
                            check_hlds__typecheck__TypeCtorInfo_24_34 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 2935 "typecheck.m"
                            {
#line 2935 "typecheck.m"
                              check_hlds__typecheck__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2935 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_9[0]));
#line 2935 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1));
#line 2935 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2935 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 3) = ((MR_Box) (check_hlds__typecheck__Info_7));
#line 2935 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_10));
#line 2935 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 5) = ((MR_Box) (check_hlds__typecheck__Name_21));
#line 2935 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 2935 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_24));
#line 2935 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_25));
#line 2935 "typecheck.m"
                            }
#line 2934 "typecheck.m"
                            {
#line 2934 "typecheck.m"
                              mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_23_33, check_hlds__typecheck__TypeCtorInfo_24_34, check_hlds__typecheck__V_28_28, check_hlds__typecheck__FieldDefns_27, &check_hlds__typecheck__FieldAccessConsInfos_15);
                            }
#line 2934 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2923 "typecheck.m"
                          }
#line 2923 "typecheck.m"
                      }
#line 2923 "typecheck.m"
                  }
#line 2923 "typecheck.m"
              }
#line 2926 "typecheck.m"
          }
#line 3204 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3203 "typecheck.m"
          {
#line 3203 "typecheck.m"
            check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__FieldAccessConsInfos_15, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
#line 3203 "typecheck.m"
            return;
          }
#line 3204 "typecheck.m"
        else
#line 3205 "typecheck.m"
          {
#line 3205 "typecheck.m"
            *check_hlds__typecheck__ConsInfos_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3206 "typecheck.m"
            *check_hlds__typecheck__ConsErrors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3205 "typecheck.m"
          }
#line 3204 "typecheck.m"
      }
#line 3208 "typecheck.m"
    else
#line 3209 "typecheck.m"
      {
#line 3209 "typecheck.m"
        check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
#line 3209 "typecheck.m"
        return;
      }
#line 3188 "typecheck.m"
  }
#line 3184 "typecheck.m"
}

#line 3169 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
#line 3169 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 3169 "typecheck.m"
{
#line 3169 "typecheck.m"
  {
#line 3169 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 3169 "typecheck.m"
    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0, 1);
#line 3169 "typecheck.m"
  }
#line 3169 "typecheck.m"
}

#line 3169 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
#line 3169 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 3169 "typecheck.m"
{
#line 3169 "typecheck.m"
  {
#line 3169 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 6221 "check_hlds.typecheck.c"
    (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 3170 "typecheck.m"
    {
#line 3170 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = mercury__map__contains_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12)));
    }
#line 3170 "typecheck.m"
    if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
#line 3170 "typecheck.m"
      {
#line 3170 "typecheck.m"
        check_hlds__typecheck__rename_constraint_3_p_0_1(check_hlds__typecheck__env_ptr);
#line 3170 "typecheck.m"
        return;
      }
#line 3169 "typecheck.m"
  }
#line 3169 "typecheck.m"
}

#line 3169 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
#line 3169 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 3169 "typecheck.m"
{
#line 3169 "typecheck.m"
  {
#line 3169 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 3169 "typecheck.m"
    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0) == 0)
#line 3169 "typecheck.m"
      {
#line 3169 "typecheck.m"
        {
#line 3169 "typecheck.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12, check_hlds__typecheck__rename_constraint_3_p_0_2, check_hlds__typecheck__env_ptr);
        }
#line 3169 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_FALSE;
#line 3169 "typecheck.m"
      }
#line 3169 "typecheck.m"
    else
#line 3169 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
#line 3169 "typecheck.m"
  }
#line 3169 "typecheck.m"
}

#line 3163 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
#line 3163 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_4,
#line 3163 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint0_5,
#line 3163 "typecheck.m"
  MR_Word * check_hlds__typecheck__Constraint_6)
#line 3163 "typecheck.m"
{
#line 3163 "typecheck.m"
  {
#line 3163 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s check_hlds__typecheck__env;

#line 3163 "typecheck.m"
    (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4 = check_hlds__typecheck__TVarRenaming_4;
#line 3166 "typecheck.m"
    {
#line 3166 "typecheck.m"
      MR_Word check_hlds__typecheck__Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 0)));
#line 3166 "typecheck.m"
      MR_Word check_hlds__typecheck__ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 1)));
#line 3166 "typecheck.m"
      MR_Word check_hlds__typecheck__ArgTypes_11;

#line 3167 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 2)));
#line 3169 "typecheck.m"
      {
#line 3169 "typecheck.m"
        check_hlds__typecheck__rename_constraint_3_p_0_3(&check_hlds__typecheck__env);
      }
#line 3166 "typecheck.m"
      if ((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
#line 3166 "typecheck.m"
        {
#line 3172 "typecheck.m"
          {
#line 3172 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &check_hlds__typecheck__ArgTypes_11);
          }
#line 3173 "typecheck.m"
          {
#line 3173 "typecheck.m"
            MR_Word base;
#line 3173 "typecheck.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3173 "typecheck.m"
            *check_hlds__typecheck__Constraint_6 = base;
#line 3173 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Ids_7));
#line 3173 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__ClassName_8));
#line 3173 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__ArgTypes_11));
#line 3173 "typecheck.m"
          }
#line 3173 "typecheck.m"
          (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
#line 3166 "typecheck.m"
        }
#line 3166 "typecheck.m"
      return (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
#line 3166 "typecheck.m"
    }
#line 3163 "typecheck.m"
  }
#line 3163 "typecheck.m"
}

#line 3154 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
#line 3154 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_3,
#line 3154 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4)
#line 3154 "typecheck.m"
{
#line 3156 "typecheck.m"
  {
#line 3156 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3156 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_11_11;
#line 3156 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesToCheck_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 2)));
#line 3156 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarsToCheck0_8;
#line 3156 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarsToCheck_9;
#line 3156 "typecheck.m"
    MR_Word check_hlds__typecheck__RelevantTVars_10;
#line 3157 "typecheck.m"
    MR_Word check_hlds__typecheck___Ids_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 0)));
#line 3157 "typecheck.m"
    MR_Word check_hlds__typecheck___ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 1)));

#line 3158 "typecheck.m"
    {
#line 3158 "typecheck.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__TypesToCheck_7, &check_hlds__typecheck__TVarsToCheck0_8);
    }
#line 6381 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeInfo_11_11 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 3159 "typecheck.m"
    {
#line 3159 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck0_8, &check_hlds__typecheck__TVarsToCheck_9);
    }
#line 3160 "typecheck.m"
    {
#line 3160 "typecheck.m"
      mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck_9, check_hlds__typecheck__CallTVars_3, &check_hlds__typecheck__RelevantTVars_10);
    }
#line 3161 "typecheck.m"
    {
#line 3161 "typecheck.m"
      return check_hlds__typecheck__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__RelevantTVars_10);
    }
#line 3156 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 3156 "typecheck.m"
  }
#line 3154 "typecheck.m"
}

#line 3147 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
#line 3147 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3147 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 3147 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 3147 "typecheck.m"
{
#line 3147 "typecheck.m"
  {
#line 3147 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3147 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 3147 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_Constraint_6;

#line 3147 "typecheck.m"
    {
#line 3147 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__rename_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv0_Constraint_6);
    }
#line 3147 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3147 "typecheck.m"
      {
#line 3147 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_Constraint_6));
#line 3147 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 3147 "typecheck.m"
      }
#line 3147 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 3147 "typecheck.m"
  }
#line 3147 "typecheck.m"
}

#line 3146 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
#line 3146 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3146 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 3146 "typecheck.m"
{
#line 3146 "typecheck.m"
  {
#line 3146 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3146 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 3146 "typecheck.m"
    {
#line 3146 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__project_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 3146 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 3146 "typecheck.m"
  }
#line 3146 "typecheck.m"
}

#line 3136 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
#line 3136 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_7,
#line 3136 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarSet_8,
#line 3136 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_9,
#line 3136 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_10,
#line 3136 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
#line 3136 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21)
#line 3136 "typecheck.m"
{
#line 3141 "typecheck.m"
  {
#line 3141 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3141 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
#line 3141 "typecheck.m"
    MR_Word check_hlds__typecheck__Unproven0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 0)));
#line 3141 "typecheck.m"
    MR_Word check_hlds__typecheck__Assumed_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 1)));
#line 3141 "typecheck.m"
    MR_Word check_hlds__typecheck__Redundant0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 2)));
#line 3141 "typecheck.m"
    MR_Word check_hlds__typecheck__Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 3)));
#line 3141 "typecheck.m"
    MR_Word check_hlds__typecheck__NewUnproven0_16;
#line 3141 "typecheck.m"
    MR_Word check_hlds__typecheck__NewUnproven_17;
#line 3141 "typecheck.m"
    MR_Word check_hlds__typecheck__Redundant_18;
#line 3141 "typecheck.m"
    MR_Word check_hlds__typecheck__Unproven_19;
#line 3141 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 3141 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;

#line 3146 "typecheck.m"
    {
#line 3146 "typecheck.m"
      check_hlds__typecheck__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3146 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[5]));
#line 3146 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_1));
#line 3146 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 3146 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 3) = ((MR_Box) (check_hlds__typecheck__CallTVars_9));
#line 3146 "typecheck.m"
    }
#line 6533 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 3146 "typecheck.m"
    {
#line 3146 "typecheck.m"
      mercury__list__filter_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__V_22_22, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__NewUnproven0_16);
    }
#line 3147 "typecheck.m"
    {
#line 3147 "typecheck.m"
      check_hlds__typecheck__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3147 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_8[1]));
#line 3147 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_2));
#line 3147 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 3147 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 3) = ((MR_Box) (check_hlds__typecheck__TVarRenaming_10));
#line 3147 "typecheck.m"
    }
#line 3147 "typecheck.m"
    {
#line 3147 "typecheck.m"
      mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__V_23_23, check_hlds__typecheck__NewUnproven0_16, &check_hlds__typecheck__NewUnproven_17);
    }
#line 3149 "typecheck.m"
    {
#line 3149 "typecheck.m"
      hlds__hlds_data__update_redundant_constraints_5_p_0(check_hlds__typecheck__ClassTable_7, check_hlds__typecheck__TVarSet_8, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Redundant0_14, &check_hlds__typecheck__Redundant_18);
    }
#line 3151 "typecheck.m"
    {
#line 3151 "typecheck.m"
      mercury__list__append_3_p_1(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__Unproven_19);
    }
#line 3152 "typecheck.m"
    {
#line 3152 "typecheck.m"
      MR_Word base;
#line 3152 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 3152 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Constraints_21 = base;
#line 3152 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Unproven_19));
#line 3152 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Assumed_13));
#line 3152 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__Redundant_18));
#line 3152 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__Ancestors_15));
#line 3152 "typecheck.m"
    }
#line 3141 "typecheck.m"
  }
#line 3136 "typecheck.m"
}

#line 3003 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_8,
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_9,
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_10,
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_11,
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
#line 3003 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
#line 3003 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14)
#line 3003 "typecheck.m"
{
#line 3008 "typecheck.m"
  {
#line 3008 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3008 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_100_100;
#line 3008 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 0)));
#line 3008 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 1)));
#line 3008 "typecheck.m"
    MR_Word check_hlds__typecheck__FunctorType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 2)));
#line 3008 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 3)));
#line 3008 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 4)));
#line 3008 "typecheck.m"
    MR_Word check_hlds__typecheck__Source0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 5)));
#line 3008 "typecheck.m"
    MR_Word check_hlds__typecheck__SourceType_22;
#line 3008 "typecheck.m"
    MR_Integer check_hlds__typecheck__FieldNumber_32;
#line 3008 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldType_33;
#line 3023 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 3023 "typecheck.m"
    MR_Word check_hlds__typecheck__V_29_29;
#line 3023 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;
#line 3023 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 3024 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_FieldType_33;

#line 3014 "typecheck.m"
#line 3014 "typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__typecheck__Source0_20)) {
#line 3014 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3014 "typecheck.m"
      case (MR_Integer) 0:
#line 3012 "typecheck.m"
        check_hlds__typecheck__SourceType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Source0_20, (MR_Integer) 0)));
#line 3014 "typecheck.m"
        break;
#line 3014 "typecheck.m"
      case (MR_Integer) 1:
#line 3014 "typecheck.m"
      case (MR_Integer) 2:
#line 3020 "typecheck.m"
        {
#line 3021 "typecheck.m"
          {
#line 3021 "typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
#line 3021 "typecheck.m"
            return;
          }
#line 3020 "typecheck.m"
        }
#line 3014 "typecheck.m"
        break;
#line 3014 "typecheck.m"
      case (MR_Integer) 3:
#line 3020 "typecheck.m"
        {
#line 3021 "typecheck.m"
          {
#line 3021 "typecheck.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
#line 3021 "typecheck.m"
            return;
          }
#line 3020 "typecheck.m"
        }
#line 3014 "typecheck.m"
        break;
#line 3014 "typecheck.m"
    }
#line 3023 "typecheck.m"
    check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 0)));
#line 3023 "typecheck.m"
    check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 1)));
#line 3023 "typecheck.m"
    check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 2)));
#line 3023 "typecheck.m"
    check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 3)));
#line 3023 "typecheck.m"
    check_hlds__typecheck__FieldNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 4)));
#line 6701 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 3024 "typecheck.m"
    {
#line 3024 "typecheck.m"
      mercury__list__det_index1_3_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, &check_hlds__typecheck__conv0_FieldType_33);
    }
#line 3024 "typecheck.m"
    check_hlds__typecheck__FieldType_33 = ((MR_Word) check_hlds__typecheck__conv0_FieldType_33);
#line 3034 "typecheck.m"
#line 3034 "typecheck.m"
    switch (check_hlds__typecheck__AccessType_9) {
#line 3034 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3034 "typecheck.m"
      case (MR_Integer) 0:
#line 3026 "typecheck.m"
        {
#line 3026 "typecheck.m"
          MR_Word check_hlds__typecheck__Source_34;
#line 3026 "typecheck.m"
          MR_Word check_hlds__typecheck__ArgTypes_36;
#line 3026 "typecheck.m"
          MR_Word check_hlds__typecheck__V_74_74;

#line 3027 "typecheck.m"
          {
#line 3027 "typecheck.m"
            check_hlds__typecheck__Source_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3027 "typecheck.m"
            MR_hl_field(MR_mktag(2), check_hlds__typecheck__Source_34, 0) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
#line 3027 "typecheck.m"
          }
#line 3029 "typecheck.m"
          {
#line 3029 "typecheck.m"
            check_hlds__typecheck__ArgTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3029 "typecheck.m"
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3029 "typecheck.m"
            MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3029 "typecheck.m"
          }
#line 3032 "typecheck.m"
          {
#line 3032 "typecheck.m"
            check_hlds__typecheck__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3032 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 3032 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 3032 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 2) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 3032 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_36));
#line 3032 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
#line 3032 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 5) = ((MR_Box) (check_hlds__typecheck__Source_34));
#line 3032 "typecheck.m"
          }
#line 3032 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_74_74);
#line 3026 "typecheck.m"
        }
#line 3034 "typecheck.m"
        break;
#line 3034 "typecheck.m"
      case (MR_Integer) 1:
#line 3035 "typecheck.m"
        {
#line 3035 "typecheck.m"
          MR_Word check_hlds__typecheck__TVarsInField_39;
#line 3035 "typecheck.m"
          MR_Word check_hlds__typecheck__Source_95;

#line 3036 "typecheck.m"
          {
#line 3036 "typecheck.m"
            check_hlds__typecheck__Source_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3036 "typecheck.m"
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 3036 "typecheck.m"
            MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 1) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
#line 3036 "typecheck.m"
          }
#line 3050 "typecheck.m"
          {
#line 3050 "typecheck.m"
            parse_tree__prog_type__type_vars_2_p_0(check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__TVarsInField_39);
          }
#line 3063 "typecheck.m"
          if ((check_hlds__typecheck__TVarsInField_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3052 "typecheck.m"
            {
#line 3052 "typecheck.m"
              MR_Word check_hlds__typecheck__V_70_70;
#line 3052 "typecheck.m"
              MR_Word check_hlds__typecheck__V_72_72;
#line 3052 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgTypes_76;

#line 3055 "typecheck.m"
              {
#line 3055 "typecheck.m"
                check_hlds__typecheck__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3055 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_70_70, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 3055 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3055 "typecheck.m"
              }
#line 3055 "typecheck.m"
              {
#line 3055 "typecheck.m"
                check_hlds__typecheck__ArgTypes_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3055 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3055 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 1) = ((MR_Box) (check_hlds__typecheck__V_70_70));
#line 3055 "typecheck.m"
              }
#line 3061 "typecheck.m"
              {
#line 3061 "typecheck.m"
                check_hlds__typecheck__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3061 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 3061 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 3061 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 2) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3061 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_76));
#line 3061 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
#line 3061 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
#line 3061 "typecheck.m"
              }
#line 3061 "typecheck.m"
              *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_72_72);
#line 3052 "typecheck.m"
            }
#line 3063 "typecheck.m"
          else
#line 3064 "typecheck.m"
            {
#line 3064 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeInfo_101_101;
#line 3064 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgTypesWithoutField_42;
#line 3064 "typecheck.m"
              MR_Word check_hlds__typecheck__TVarsInOtherArgs_43;
#line 3064 "typecheck.m"
              MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers_44;
#line 3064 "typecheck.m"
              MR_Word check_hlds__typecheck__V_58_58;
#line 3064 "typecheck.m"
              MR_Word check_hlds__typecheck__V_59_59;
#line 3064 "typecheck.m"
              MR_Word check_hlds__typecheck__V_60_60;
#line 3064 "typecheck.m"
              MR_Word check_hlds__typecheck__V_61_61;
#line 3064 "typecheck.m"
              MR_Word check_hlds__typecheck__V_62_62;

#line 3079 "typecheck.m"
              {
#line 3079 "typecheck.m"
                check_hlds__typecheck__V_58_58 = parse_tree__builtin_lib_types__int_type_0_f_0();
              }
#line 3079 "typecheck.m"
              {
#line 3079 "typecheck.m"
                mercury__list__det_replace_nth_4_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, ((MR_Box) (check_hlds__typecheck__V_58_58)), &check_hlds__typecheck__ArgTypesWithoutField_42);
              }
#line 3081 "typecheck.m"
              {
#line 3081 "typecheck.m"
                parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypesWithoutField_42, &check_hlds__typecheck__TVarsInOtherArgs_43);
              }
#line 6883 "check_hlds.typecheck.c"
              check_hlds__typecheck__TypeInfo_101_101 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 3083 "typecheck.m"
              {
#line 3083 "typecheck.m"
                check_hlds__typecheck__V_59_59 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39);
              }
#line 3085 "typecheck.m"
              {
#line 3085 "typecheck.m"
                check_hlds__typecheck__V_61_61 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInOtherArgs_43);
              }
#line 3086 "typecheck.m"
              {
#line 3086 "typecheck.m"
                check_hlds__typecheck__V_62_62 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__OrigExistTVars_13);
              }
#line 3084 "typecheck.m"
              {
#line 3084 "typecheck.m"
                check_hlds__typecheck__V_60_60 = mercury__set__intersect_2_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__V_61_61, check_hlds__typecheck__V_62_62);
              }
#line 3082 "typecheck.m"
              {
#line 3082 "typecheck.m"
                mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__V_59_59, check_hlds__typecheck__V_60_60, &check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
              }
#line 3089 "typecheck.m"
              {
#line 3089 "typecheck.m"
                check_hlds__typecheck__succeeded = mercury__set__is_empty_1_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
              }
#line 3118 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 3094 "typecheck.m"
                {
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__TVarsOnlyInField0_45;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__TVarsOnlyInField_46;
#line 3094 "typecheck.m"
                  MR_Integer check_hlds__typecheck__NumNewTVars_47;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__NewTVars_48;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__TVarRenaming_49;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__RenamedFieldType_50;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__CallTVars0_52;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__CallTVars_53;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_63_63;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_64_64;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_66_66;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_68_68;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__RetType_79;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__ArgTypes_80;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__TVarSet_81;
#line 3094 "typecheck.m"
                  MR_Word check_hlds__typecheck__Constraints_82;

#line 3093 "typecheck.m"
                  {
#line 3093 "typecheck.m"
                    mercury__list__delete_elems_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39, check_hlds__typecheck__TVarsInOtherArgs_43, &check_hlds__typecheck__TVarsOnlyInField0_45);
                  }
#line 3095 "typecheck.m"
                  {
#line 3095 "typecheck.m"
                    mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField0_45, &check_hlds__typecheck__TVarsOnlyInField_46);
                  }
#line 3096 "typecheck.m"
                  {
#line 3096 "typecheck.m"
                    mercury__list__length_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, &check_hlds__typecheck__NumNewTVars_47);
                  }
#line 3097 "typecheck.m"
                  {
#line 3097 "typecheck.m"
                    mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__NumNewTVars_47, &check_hlds__typecheck__NewTVars_48, check_hlds__typecheck__TVarSet0_15, &check_hlds__typecheck__TVarSet_81);
                  }
#line 3098 "typecheck.m"
                  {
#line 3098 "typecheck.m"
                    mercury__map__from_corresponding_lists_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, check_hlds__typecheck__NewTVars_48, &check_hlds__typecheck__TVarRenaming_49);
                  }
#line 3100 "typecheck.m"
                  {
#line 3100 "typecheck.m"
                    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__RenamedFieldType_50);
                  }
#line 3102 "typecheck.m"
                  {
#line 3102 "typecheck.m"
                    parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FunctorType_17, &check_hlds__typecheck__RetType_79);
                  }
#line 3109 "typecheck.m"
                  {
#line 3109 "typecheck.m"
                    check_hlds__typecheck__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3109 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 3109 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3109 "typecheck.m"
                  }
#line 3109 "typecheck.m"
                  {
#line 3109 "typecheck.m"
                    check_hlds__typecheck__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3109 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3109 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 1) = ((MR_Box) (check_hlds__typecheck__V_64_64));
#line 3109 "typecheck.m"
                  }
#line 3109 "typecheck.m"
                  {
#line 3109 "typecheck.m"
                    parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__V_63_63, &check_hlds__typecheck__CallTVars0_52);
                  }
#line 3110 "typecheck.m"
                  {
#line 3110 "typecheck.m"
                    mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__CallTVars0_52, &check_hlds__typecheck__CallTVars_53);
                  }
#line 3111 "typecheck.m"
                  {
#line 3111 "typecheck.m"
                    check_hlds__typecheck__project_and_rename_constraints_6_p_0(check_hlds__typecheck__ClassTable_8, check_hlds__typecheck__TVarSet_81, check_hlds__typecheck__CallTVars_53, check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__Constraints0_19, &check_hlds__typecheck__Constraints_82);
                  }
#line 3115 "typecheck.m"
                  {
#line 3115 "typecheck.m"
                    check_hlds__typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3115 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__typecheck__RenamedFieldType_50));
#line 3115 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3115 "typecheck.m"
                  }
#line 3115 "typecheck.m"
                  {
#line 3115 "typecheck.m"
                    check_hlds__typecheck__ArgTypes_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3115 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 3115 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 1) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 3115 "typecheck.m"
                  }
#line 3116 "typecheck.m"
                  {
#line 3116 "typecheck.m"
                    check_hlds__typecheck__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3116 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet_81));
#line 3116 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 3116 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 2) = ((MR_Box) (check_hlds__typecheck__RetType_79));
#line 3116 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_80));
#line 3116 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_82));
#line 3116 "typecheck.m"
                    MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
#line 3116 "typecheck.m"
                  }
#line 3116 "typecheck.m"
                  *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_68_68);
#line 3094 "typecheck.m"
                }
#line 3118 "typecheck.m"
              else
#line 3124 "typecheck.m"
                {
#line 3124 "typecheck.m"
                  MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54;
#line 3124 "typecheck.m"
                  MR_Word check_hlds__typecheck__V_69_69;

#line 3123 "typecheck.m"
                  {
#line 3123 "typecheck.m"
                    mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44, &check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54);
                  }
#line 3125 "typecheck.m"
                  {
#line 3125 "typecheck.m"
                    check_hlds__typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 3125 "typecheck.m"
                    MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 0) = ((MR_Box) (check_hlds__typecheck__FieldName_10));
#line 3125 "typecheck.m"
                    MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 1) = ((MR_Box) (check_hlds__typecheck__FieldDefn_11));
#line 3125 "typecheck.m"
                    MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 2) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 3125 "typecheck.m"
                    MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 3) = ((MR_Box) (check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54));
#line 3125 "typecheck.m"
                  }
#line 3125 "typecheck.m"
                  {
#line 3125 "typecheck.m"
                    MR_Word base;
#line 3125 "typecheck.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3125 "typecheck.m"
                    *check_hlds__typecheck__ConsTypeInfo_14 = base;
#line 3125 "typecheck.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 3125 "typecheck.m"
                  }
#line 3124 "typecheck.m"
                }
#line 3064 "typecheck.m"
            }
#line 3035 "typecheck.m"
        }
#line 3034 "typecheck.m"
        break;
#line 3034 "typecheck.m"
    }
#line 3008 "typecheck.m"
  }
#line 3003 "typecheck.m"
}

#line 2939 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_9,
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__FuncName_11,
#line 2939 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_12,
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_13,
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_14,
#line 2939 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_15,
#line 2939 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16)
#line 2939 "typecheck.m"
{
#line 2945 "typecheck.m"
  {
#line 2945 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2945 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
#line 2945 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtor_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 2)));
#line 2945 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 3)));
#line 2945 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeModule_36;
#line 2945 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_39;
#line 2945 "typecheck.m"
    MR_Word check_hlds__typecheck__PredTable_40;
#line 2945 "typecheck.m"
    MR_String check_hlds__typecheck__UnqualFuncName_41;
#line 2945 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_42;
#line 2945 "typecheck.m"
    MR_Word check_hlds__typecheck__Ctors_45;
#line 2945 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsDefn_46;
#line 2945 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsAction_47;
#line 2945 "typecheck.m"
    MR_Word check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_33, (MR_Integer) 0)));
#line 2967 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 0)));
#line 2967 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 1)));
#line 2967 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 4)));
#line 2968 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_33, (MR_Integer) 1)));
#line 2968 "typecheck.m"
    MR_String check_hlds__typecheck__V_37_37;

#line 2968 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_48_48)) == (MR_mktag((MR_Integer) 1)));
#line 2968 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2968 "typecheck.m"
      {
#line 2968 "typecheck.m"
        check_hlds__typecheck__TypeModule_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, (MR_Integer) 0)));
#line 2968 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, (MR_Integer) 1)));
#line 2975 "typecheck.m"
        {
#line 2975 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__ModuleInfo_39);
        }
#line 2976 "typecheck.m"
        {
#line 2976 "typecheck.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_39, &check_hlds__typecheck__PredTable_40);
        }
#line 2977 "typecheck.m"
        {
#line 2977 "typecheck.m"
          check_hlds__typecheck__UnqualFuncName_41 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__typecheck__FuncName_11);
        }
#line 2978 "typecheck.m"
        {
#line 2978 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__IsFieldAccessFunc_42);
        }
#line 2984 "typecheck.m"
        if ((check_hlds__typecheck__IsFieldAccessFunc_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2980 "typecheck.m"
          {
#line 2980 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_43;

#line 2981 "typecheck.m"
            {
#line 2981 "typecheck.m"
              hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(check_hlds__typecheck__PredTable_40, (MR_Integer) 0, check_hlds__typecheck__TypeModule_36, check_hlds__typecheck__UnqualFuncName_41, check_hlds__typecheck__Arity_12, &check_hlds__typecheck__PredIds_43);
            }
#line 2983 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredIds_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2980 "typecheck.m"
          }
#line 2984 "typecheck.m"
        else
#line 2985 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2945 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2945 "typecheck.m"
          {
#line 2987 "typecheck.m"
            {
#line 2987 "typecheck.m"
              hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck__ModuleInfo_39, &check_hlds__typecheck__Ctors_45);
            }
#line 2988 "typecheck.m"
            {
#line 2988 "typecheck.m"
              hlds__hlds_data__lookup_cons_table_of_type_ctor_4_p_0(check_hlds__typecheck__Ctors_45, check_hlds__typecheck__TypeCtor_33, check_hlds__typecheck__ConsId_34, &check_hlds__typecheck__ConsDefn_46);
            }
#line 2992 "typecheck.m"
#line 2992 "typecheck.m"
            switch (check_hlds__typecheck__AccessType_13) {
#line 2992 "typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2992 "typecheck.m"
              case (MR_Integer) 0:
#line 2991 "typecheck.m"
                check_hlds__typecheck__ConsAction_47 = (MR_Integer) 2;
#line 2992 "typecheck.m"
                break;
#line 2992 "typecheck.m"
              case (MR_Integer) 1:
#line 2994 "typecheck.m"
                check_hlds__typecheck__ConsAction_47 = (MR_Integer) 1;
#line 2992 "typecheck.m"
                break;
#line 2992 "typecheck.m"
            }
#line 2997 "typecheck.m"
            {
#line 2997 "typecheck.m"
              check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__Info_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsAction_47, check_hlds__typecheck__ConsDefn_46, &check_hlds__typecheck__MaybeFunctorConsTypeInfo_18);
            }
#line 2956 "typecheck.m"
            if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18)) == (MR_mktag((MR_Integer) 1))))
#line 2958 "typecheck.m"
              *check_hlds__typecheck__ConsTypeInfo_16 = check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
#line 2956 "typecheck.m"
            else
#line 2950 "typecheck.m"
              {
#line 2950 "typecheck.m"
                MR_Word check_hlds__typecheck__OrigExistTVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 4)));
#line 2950 "typecheck.m"
                MR_Word check_hlds__typecheck__FunctorConsTypeInfo_19 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18), (MR_Integer) 0);
#line 2950 "typecheck.m"
                MR_Word check_hlds__typecheck__ModuleInfo_20;
#line 2950 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassTable_21;
#line 2996 "typecheck.m"
                MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 0)));
#line 2996 "typecheck.m"
                MR_Word check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 1)));
#line 2996 "typecheck.m"
                MR_Word check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 2)));
#line 2996 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 3)));
#line 2996 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 5)));
#line 2996 "typecheck.m"
                MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 6)));
#line 2996 "typecheck.m"
                MR_Word check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_46, (MR_Integer) 7)));

#line 2951 "typecheck.m"
                {
#line 2951 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__ModuleInfo_20);
                }
#line 2952 "typecheck.m"
                {
#line 2952 "typecheck.m"
                  hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_20, &check_hlds__typecheck__ClassTable_21);
                }
#line 2953 "typecheck.m"
                {
#line 2953 "typecheck.m"
                  check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(check_hlds__typecheck__ClassTable_21, check_hlds__typecheck__AccessType_13, check_hlds__typecheck__FieldName_14, check_hlds__typecheck__FieldDefn_15, check_hlds__typecheck__FunctorConsTypeInfo_19, check_hlds__typecheck__OrigExistTVars_17, check_hlds__typecheck__ConsTypeInfo_16);
                }
#line 2950 "typecheck.m"
              }
#line 2956 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2945 "typecheck.m"
          }
#line 2968 "typecheck.m"
      }
#line 2945 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2945 "typecheck.m"
  }
#line 2939 "typecheck.m"
}

#line 2935 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
#line 2935 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2935 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2935 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2935 "typecheck.m"
{
#line 2935 "typecheck.m"
  {
#line 2935 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2935 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2935 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

#line 2935 "typecheck.m"
    {
#line 2935 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    }
#line 2935 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2935 "typecheck.m"
      {
#line 2935 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
#line 2935 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2935 "typecheck.m"
      }
#line 2935 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2935 "typecheck.m"
  }
#line 2935 "typecheck.m"
}

#line 2919 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
#line 2919 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2919 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 2919 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2919 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 2919 "typecheck.m"
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10)
#line 2919 "typecheck.m"
{
#line 2923 "typecheck.m"
  {
#line 2923 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2923 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_19_19;
#line 2923 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_20_20;
#line 2923 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_23_23;
#line 2923 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_24_24;
#line 2923 "typecheck.m"
    MR_Word check_hlds__typecheck__Name_11;
#line 2923 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_13;
#line 2923 "typecheck.m"
    MR_Word check_hlds__typecheck__AccessType_14;
#line 2923 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldName_15;
#line 2923 "typecheck.m"
    MR_Word check_hlds__typecheck__CtorFieldTable_16;
#line 2923 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldDefns_17;
#line 2923 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;
#line 2923 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_25_25;
#line 2923 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_26_26;
#line 2926 "typecheck.m"
    MR_Word check_hlds__typecheck__V_12_12;
#line 2932 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_FieldDefns_17;

#line 2926 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2926 "typecheck.m"
      {
#line 2926 "typecheck.m"
        check_hlds__typecheck__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 1)));
#line 2926 "typecheck.m"
        check_hlds__typecheck__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 2)));
#line 2926 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 3)));
#line 2926 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_25_25);
#line 2923 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2923 "typecheck.m"
          {
#line 2927 "typecheck.m"
            {
#line 2927 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__ModuleInfo_13);
            }
#line 2928 "typecheck.m"
            {
#line 2928 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_13, check_hlds__typecheck__Name_11, &check_hlds__typecheck__V_26_26, &check_hlds__typecheck__AccessType_14, &check_hlds__typecheck__FieldName_15);
            }
#line 2923 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2923 "typecheck.m"
              {
#line 2928 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_26_26);
#line 2923 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2923 "typecheck.m"
                  {
#line 2931 "typecheck.m"
                    {
#line 2931 "typecheck.m"
                      hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_13, &check_hlds__typecheck__CtorFieldTable_16);
                    }
#line 7461 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_19_19 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 7463 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeInfo_20_20 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
#line 2932 "typecheck.m"
                    {
#line 2932 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_19_19, check_hlds__typecheck__TypeInfo_20_20, check_hlds__typecheck__CtorFieldTable_16, ((MR_Box) (check_hlds__typecheck__FieldName_15)), &check_hlds__typecheck__conv0_FieldDefns_17);
                    }
#line 2932 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2932 "typecheck.m"
                      {
#line 2932 "typecheck.m"
                        check_hlds__typecheck__FieldDefns_17 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_17);
#line 2932 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2932 "typecheck.m"
                      }
#line 2923 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2923 "typecheck.m"
                      {
#line 7484 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_23_23 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
#line 7486 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_24_24 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 2935 "typecheck.m"
                        {
#line 2935 "typecheck.m"
                          check_hlds__typecheck__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2935 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_9[0]));
#line 2935 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 1) = ((MR_Box) (check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1));
#line 2935 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2935 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 3) = ((MR_Box) (check_hlds__typecheck__Info_6));
#line 2935 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_7));
#line 2935 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 5) = ((MR_Box) (check_hlds__typecheck__Name_11));
#line 2935 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 2935 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_14));
#line 2935 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_15));
#line 2935 "typecheck.m"
                        }
#line 2934 "typecheck.m"
                        {
#line 2934 "typecheck.m"
                          mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_23_23, check_hlds__typecheck__TypeCtorInfo_24_24, check_hlds__typecheck__V_18_18, check_hlds__typecheck__FieldDefns_17, check_hlds__typecheck__MaybeConsTypeInfos_10);
                        }
#line 2934 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2923 "typecheck.m"
                      }
#line 2923 "typecheck.m"
                  }
#line 2923 "typecheck.m"
              }
#line 2923 "typecheck.m"
          }
#line 2926 "typecheck.m"
      }
#line 2923 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2923 "typecheck.m"
  }
#line 2919 "typecheck.m"
}

#line 2798 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__make_pred_cons_info_list_7_p_0(
#line 2798 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2798 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2798 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTable_3,
#line 2798 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_4,
#line 2798 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_5,
#line 2798 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
#line 2798 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7)
#line 2798 "typecheck.m"
{
#line 2802 "typecheck.m"
  while (MR_TRUE)
#line 2802 "typecheck.m"
    {
#line 2802 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2802 "typecheck.m"
      {
#line 2802 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2802 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2802 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
#line 2802 "typecheck.m"
        else
#line 2804 "typecheck.m"
          {
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__ModuleInfo_34;
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassTable_35;
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_36;
#line 2804 "typecheck.m"
            MR_Integer check_hlds__typecheck__PredArity_37;
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__IsPredOrFunc_38;
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_39;
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_40;
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_41;
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__CompleteArgTypes_42;
#line 2804 "typecheck.m"
            MR_Word check_hlds__typecheck__Purity_43;
#line 2817 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_36;

#line 2815 "typecheck.m"
            {
#line 2815 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__Info_1, &check_hlds__typecheck__ModuleInfo_34);
            }
#line 2816 "typecheck.m"
            {
#line 2816 "typecheck.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_34, &check_hlds__typecheck__ClassTable_35);
            }
#line 2817 "typecheck.m"
            {
#line 2817 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__PredTable_3, ((MR_Box) (check_hlds__typecheck__PredId_16)), &check_hlds__typecheck__conv0_PredInfo_36);
            }
#line 2817 "typecheck.m"
            check_hlds__typecheck__PredInfo_36 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_36);
#line 2818 "typecheck.m"
            {
#line 2818 "typecheck.m"
              check_hlds__typecheck__PredArity_37 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__PredInfo_36);
            }
#line 2819 "typecheck.m"
            {
#line 2819 "typecheck.m"
              check_hlds__typecheck__IsPredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__typecheck__PredInfo_36);
            }
#line 2820 "typecheck.m"
            {
#line 2820 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredClassContext_39);
            }
#line 2821 "typecheck.m"
            {
#line 2821 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredTypeVarSet_40, &check_hlds__typecheck__PredExistQVars_41, &check_hlds__typecheck__CompleteArgTypes_42);
            }
#line 2823 "typecheck.m"
            {
#line 2823 "typecheck.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__Purity_43);
            }
#line 2825 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 0);
#line 2825 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2825 "typecheck.m"
              {
#line 2826 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredArity_37 >= check_hlds__typecheck__Arity_4);
#line 2825 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2829 "typecheck.m"
                  check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2825 "typecheck.m"
              }
#line 2840 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2832 "typecheck.m"
              {
#line 2832 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_44;
#line 2832 "typecheck.m"
                MR_Word check_hlds__typecheck__PredTypeParams_45;
#line 2832 "typecheck.m"
                MR_Word check_hlds__typecheck__PredType_46;
#line 2832 "typecheck.m"
                MR_Word check_hlds__typecheck__PredConstraints_47;
#line 2832 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsInfo_48;
#line 2832 "typecheck.m"
                MR_Word check_hlds__typecheck__V_58_58;

#line 2831 "typecheck.m"
                {
#line 2831 "typecheck.m"
                  mercury__list__det_split_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Arity_4, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__ArgTypes_44, &check_hlds__typecheck__PredTypeParams_45);
                }
#line 2833 "typecheck.m"
                mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2833 "typecheck.m"
                {
#line 2833 "typecheck.m"
                  parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__PredTypeParams_45, &check_hlds__typecheck__PredType_46);
                }
#line 2835 "typecheck.m"
                {
#line 2835 "typecheck.m"
                  hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_5, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_47);
                }
#line 2838 "typecheck.m"
                {
#line 2838 "typecheck.m"
                  check_hlds__typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2838 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2838 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 1) = ((MR_Box) (check_hlds__typecheck__PredId_16));
#line 2838 "typecheck.m"
                }
#line 2837 "typecheck.m"
                {
#line 2837 "typecheck.m"
                  check_hlds__typecheck__ConsInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2837 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
#line 2837 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
#line 2837 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 2) = ((MR_Box) (check_hlds__typecheck__PredType_46));
#line 2837 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_44));
#line 2837 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_47));
#line 2837 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 5) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 2837 "typecheck.m"
                }
#line 2839 "typecheck.m"
                {
#line 2839 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2839 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_48));
#line 2839 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
#line 2839 "typecheck.m"
                }
#line 2832 "typecheck.m"
              }
#line 2840 "typecheck.m"
            else
#line 2869 "typecheck.m"
              {
#line 2841 "typecheck.m"
                MR_Integer check_hlds__typecheck__PredAsFuncArity_49;
#line 2841 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_60_60;

#line 2841 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 1);
#line 2841 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2841 "typecheck.m"
                  {
#line 2842 "typecheck.m"
                    check_hlds__typecheck__V_60_60 = (MR_Integer) 1;
#line 2842 "typecheck.m"
                    check_hlds__typecheck__PredAsFuncArity_49 = (check_hlds__typecheck__PredArity_37 - check_hlds__typecheck__V_60_60);
#line 2843 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 >= check_hlds__typecheck__Arity_4);
#line 2841 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2841 "typecheck.m"
                      {
#line 2847 "typecheck.m"
                        check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2848 "typecheck.m"
                        if (!(check_hlds__typecheck__succeeded))
#line 2848 "typecheck.m"
                          check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 == check_hlds__typecheck__Arity_4);
#line 2841 "typecheck.m"
                      }
#line 2841 "typecheck.m"
                  }
#line 2869 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2852 "typecheck.m"
                  {
#line 2852 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeCtorInfo_53_71 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 2852 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncArgTypes_50;
#line 2852 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncTypeParams_51;
#line 2852 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncArgTypeParams_52;
#line 2852 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncReturnTypeParam_53;
#line 2852 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncType_54;
#line 2852 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_62_62;
#line 2852 "typecheck.m"
                    MR_Word check_hlds__typecheck__PredConstraints_64;
#line 2852 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsInfo_65;
#line 2853 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv1_FuncReturnTypeParam_53;

#line 2851 "typecheck.m"
                    {
#line 2851 "typecheck.m"
                      mercury__list__det_split_list_4_p_0(check_hlds__typecheck__TypeCtorInfo_53_71, check_hlds__typecheck__Arity_4, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__FuncArgTypes_50, &check_hlds__typecheck__FuncTypeParams_51);
                    }
#line 2853 "typecheck.m"
                    {
#line 2853 "typecheck.m"
                      parse_tree__prog_util__pred_args_to_func_args_3_p_0(check_hlds__typecheck__TypeCtorInfo_53_71, check_hlds__typecheck__FuncTypeParams_51, &check_hlds__typecheck__FuncArgTypeParams_52, &check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
                    }
#line 2853 "typecheck.m"
                    check_hlds__typecheck__FuncReturnTypeParam_53 = ((MR_Word) check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
#line 2858 "typecheck.m"
                    if ((check_hlds__typecheck__FuncArgTypeParams_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2857 "typecheck.m"
                      check_hlds__typecheck__FuncType_54 = check_hlds__typecheck__FuncReturnTypeParam_53;
#line 2858 "typecheck.m"
                    else
#line 2859 "typecheck.m"
                      {
#line 2860 "typecheck.m"
                        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2860 "typecheck.m"
                        {
#line 2860 "typecheck.m"
                          parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__FuncArgTypeParams_52, check_hlds__typecheck__FuncReturnTypeParam_53, &check_hlds__typecheck__FuncType_54);
                        }
#line 2859 "typecheck.m"
                      }
#line 2863 "typecheck.m"
                    {
#line 2863 "typecheck.m"
                      hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_5, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_64);
                    }
#line 2867 "typecheck.m"
                    {
#line 2867 "typecheck.m"
                      check_hlds__typecheck__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2867 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2867 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_62_62, 1) = ((MR_Box) (check_hlds__typecheck__PredId_16));
#line 2867 "typecheck.m"
                    }
#line 2865 "typecheck.m"
                    {
#line 2865 "typecheck.m"
                      check_hlds__typecheck__ConsInfo_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2865 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
#line 2865 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
#line 2865 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 2) = ((MR_Box) (check_hlds__typecheck__FuncType_54));
#line 2865 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 3) = ((MR_Box) (check_hlds__typecheck__FuncArgTypes_50));
#line 2865 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_64));
#line 2865 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_65, 5) = ((MR_Box) (check_hlds__typecheck__V_62_62));
#line 2865 "typecheck.m"
                    }
#line 2868 "typecheck.m"
                    {
#line 2868 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2868 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_65));
#line 2868 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
#line 2868 "typecheck.m"
                    }
#line 2852 "typecheck.m"
                  }
#line 2869 "typecheck.m"
                else
#line 2869 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
#line 2869 "typecheck.m"
              }
#line 2807 "typecheck.m"
            /* direct tailcall eliminated */
#line 2807 "typecheck.m"
            {
#line 2807 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__2__tmp_copy_2 = check_hlds__typecheck__PredIds_17;
#line 2807 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;

#line 2807 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0__tmp_copy_6;
#line 2807 "typecheck.m"
              check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__HeadVar__2__tmp_copy_2;
#line 2807 "typecheck.m"
            }
#line 2807 "typecheck.m"
            continue;
#line 2804 "typecheck.m"
          }
#line 2802 "typecheck.m"
      }
#line 2802 "typecheck.m"
      break;
#line 2802 "typecheck.m"
    }
#line 2798 "typecheck.m"
}

#line 2779 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
#line 2779 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2779 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_7,
#line 2779 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_8,
#line 2779 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 2779 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10)
#line 2779 "typecheck.m"
{
#line 2782 "typecheck.m"
  {
#line 2782 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2782 "typecheck.m"
    MR_Word check_hlds__typecheck__SymName_11;
#line 2782 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_14;
#line 2782 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFullyQualified_15;
#line 2782 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIds_16;
#line 2783 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_12_12;
#line 2783 "typecheck.m"
    MR_Word check_hlds__typecheck__V_13_13;

#line 2783 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2783 "typecheck.m"
      {
#line 2783 "typecheck.m"
        check_hlds__typecheck__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 1)));
#line 2783 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 2)));
#line 2783 "typecheck.m"
        check_hlds__typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 3)));
#line 2784 "typecheck.m"
        {
#line 2784 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_preds_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredicateTable_14);
        }
#line 2785 "typecheck.m"
        {
#line 2785 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__IsFullyQualified_15);
        }
#line 2786 "typecheck.m"
        {
#line 2786 "typecheck.m"
          hlds__pred_table__predicate_table_lookup_sym_4_p_0(check_hlds__typecheck__PredicateTable_14, check_hlds__typecheck__IsFullyQualified_15, check_hlds__typecheck__SymName_11, &check_hlds__typecheck__PredIds_16);
        }
#line 2793 "typecheck.m"
        if ((check_hlds__typecheck__PredIds_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2795 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfos_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2793 "typecheck.m"
        else
#line 2789 "typecheck.m"
          {
#line 2789 "typecheck.m"
            MR_Word check_hlds__typecheck__Preds_19;

#line 2790 "typecheck.m"
            {
#line 2790 "typecheck.m"
              hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_14, &check_hlds__typecheck__Preds_19);
            }
#line 2791 "typecheck.m"
            {
#line 2791 "typecheck.m"
              check_hlds__typecheck__make_pred_cons_info_list_7_p_0(check_hlds__typecheck__Info_6, check_hlds__typecheck__PredIds_16, check_hlds__typecheck__Preds_19, check_hlds__typecheck__Arity_8, check_hlds__typecheck__GoalId_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__ConsTypeInfos_10);
            }
#line 2789 "typecheck.m"
          }
#line 2793 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2783 "typecheck.m"
      }
#line 2782 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2782 "typecheck.m"
  }
#line 2779 "typecheck.m"
}

#line 2695 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
#line 2695 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2695 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 2695 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2695 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4)
#line 2695 "typecheck.m"
{
#line 2698 "typecheck.m"
  {
#line 2698 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 2698 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2698 "typecheck.m"
      {
#line 2698 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2698 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2698 "typecheck.m"
      }
#line 2698 "typecheck.m"
    else
#line 2699 "typecheck.m"
      {
#line 2699 "typecheck.m"
        MR_Word check_hlds__typecheck__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2699 "typecheck.m"
        MR_Word check_hlds__typecheck__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2699 "typecheck.m"
        MR_Word check_hlds__typecheck__Type_10;
#line 2699 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_11;
#line 2699 "typecheck.m"
        MR_Word check_hlds__typecheck__VarTypes0_13;
#line 2699 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23;
#line 2705 "typecheck.m"
        MR_Word check_hlds__typecheck__VarType_14;

#line 2701 "typecheck.m"
        {
#line 2701 "typecheck.m"
          check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__VarTypes0_13);
        }
#line 2702 "typecheck.m"
        {
#line 2702 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_13, check_hlds__typecheck__Var_8, &check_hlds__typecheck__VarType_14);
        }
#line 2705 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2704 "typecheck.m"
          {
#line 2704 "typecheck.m"
            check_hlds__typecheck__Type_10 = check_hlds__typecheck__VarType_14;
#line 2704 "typecheck.m"
            check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2704 "typecheck.m"
          }
#line 2705 "typecheck.m"
        else
#line 2708 "typecheck.m"
          {
#line 2708 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet0_15;
#line 2708 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVar_16;
#line 2708 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet_17;
#line 2708 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes1_18;
#line 2708 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21;

#line 2708 "typecheck.m"
            {
#line 2708 "typecheck.m"
              check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__TypeVarSet0_15);
            }
#line 2709 "typecheck.m"
            {
#line 2709 "typecheck.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
            }
#line 2710 "typecheck.m"
            {
#line 2710 "typecheck.m"
              check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21);
            }
#line 2711 "typecheck.m"
            {
#line 2711 "typecheck.m"
              check_hlds__typecheck__Type_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2711 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
#line 2711 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2711 "typecheck.m"
            }
#line 2712 "typecheck.m"
            {
#line 2712 "typecheck.m"
              hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__Var_8, check_hlds__typecheck__Type_10, check_hlds__typecheck__VarTypes0_13, &check_hlds__typecheck__VarTypes1_18);
            }
#line 2713 "typecheck.m"
            {
#line 2713 "typecheck.m"
              check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes1_18, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23);
            }
#line 2708 "typecheck.m"
          }
#line 2716 "typecheck.m"
        {
#line 2716 "typecheck.m"
          check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(check_hlds__typecheck__Vars_9, &check_hlds__typecheck__Types_11, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);
        }
#line 2699 "typecheck.m"
        {
#line 2699 "typecheck.m"
          MR_Word base;
#line 2699 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2699 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 2699 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Type_10));
#line 2699 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Types_11));
#line 2699 "typecheck.m"
        }
#line 2699 "typecheck.m"
      }
#line 2698 "typecheck.m"
  }
#line 2695 "typecheck.m"
}

#line 2680 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_2,
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__PredOrFunc_3,
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVars_6,
#line 2680 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2680 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8)
#line 2680 "typecheck.m"
{
#line 2684 "typecheck.m"
  while (MR_TRUE)
#line 2684 "typecheck.m"
    {
#line 2684 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2684 "typecheck.m"
      {
#line 2684 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2684 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2684 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 2684 "typecheck.m"
        else
#line 2686 "typecheck.m"
          {
#line 2686 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2686 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssignSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2686 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVarTypes_25;
#line 2686 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_26;
#line 2686 "typecheck.m"
            MR_Word check_hlds__typecheck__LambdaType_27;
#line 2686 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;
#line 2686 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_38;
#line 2686 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeOldVarType_39;
#line 2686 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_40;

#line 2687 "typecheck.m"
            {
#line 2687 "typecheck.m"
              check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(check_hlds__typecheck__ArgVars_6, &check_hlds__typecheck__ArgVarTypes_25, check_hlds__typecheck__TypeAssign0_17, &check_hlds__typecheck__TypeAssign1_26);
            }
#line 2689 "typecheck.m"
            {
#line 2689 "typecheck.m"
              parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_2, check_hlds__typecheck__PredOrFunc_3, check_hlds__typecheck__ArgVarTypes_25, &check_hlds__typecheck__LambdaType_27);
            }
#line 2137 "typecheck.m"
            {
#line 2137 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__VarTypes0_38);
            }
#line 2138 "typecheck.m"
            {
#line 2138 "typecheck.m"
              hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_5, check_hlds__typecheck__LambdaType_27, &check_hlds__typecheck__MaybeOldVarType_39, check_hlds__typecheck__VarTypes0_38, &check_hlds__typecheck__VarTypes_40);
            }
#line 2146 "typecheck.m"
            if ((check_hlds__typecheck__MaybeOldVarType_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2147 "typecheck.m"
              {
#line 2147 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_43;

#line 2148 "typecheck.m"
                {
#line 2148 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_40, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign_43);
                }
#line 2149 "typecheck.m"
                {
#line 2149 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2149 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_43));
#line 2149 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
#line 2149 "typecheck.m"
                }
#line 2147 "typecheck.m"
              }
#line 2146 "typecheck.m"
            else
#line 2140 "typecheck.m"
              {
#line 2140 "typecheck.m"
                MR_Word check_hlds__typecheck__OldVarType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_39, (MR_Integer) 0)));
#line 2143 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_42;
#line 2726 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_51;
#line 2726 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_52;
#line 2726 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_53;

#line 2727 "typecheck.m"
                {
#line 2727 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__HeadTypeParams_51);
                }
#line 2728 "typecheck.m"
                {
#line 2728 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeBindings0_52);
                }
#line 2729 "typecheck.m"
                {
#line 2729 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_41, check_hlds__typecheck__LambdaType_27, check_hlds__typecheck__HeadTypeParams_51, check_hlds__typecheck__TypeBindings0_52, &check_hlds__typecheck__TypeBindings_53);
                }
#line 2726 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2726 "typecheck.m"
                  {
#line 2730 "typecheck.m"
                    {
#line 2730 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_53, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign1_42);
                    }
#line 2730 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2726 "typecheck.m"
                  }
#line 2143 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2142 "typecheck.m"
                  {
#line 2142 "typecheck.m"
                    check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_42));
#line 2142 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
#line 2142 "typecheck.m"
                  }
#line 2143 "typecheck.m"
                else
#line 2144 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 2140 "typecheck.m"
              }
#line 2692 "typecheck.m"
            /* direct tailcall eliminated */
#line 2692 "typecheck.m"
            {
#line 2692 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssignSet0_18;
#line 2692 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;

#line 2692 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7;
#line 2692 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2692 "typecheck.m"
            }
#line 2692 "typecheck.m"
            continue;
#line 2686 "typecheck.m"
          }
#line 2684 "typecheck.m"
      }
#line 2684 "typecheck.m"
      break;
#line 2684 "typecheck.m"
    }
#line 2680 "typecheck.m"
}

#line 2568 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
#line 2568 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsType_6,
#line 2568 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_7,
#line 2568 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_8,
#line 2568 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
#line 2568 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16)
#line 2568 "typecheck.m"
{
#line 2573 "typecheck.m"
  {
#line 2573 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2573 "typecheck.m"
    MR_Word check_hlds__typecheck__VarTypes0_10;
#line 2573 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeTypeY_11;
#line 2573 "typecheck.m"
    MR_Word check_hlds__typecheck__VarTypes_12;

#line 2575 "typecheck.m"
    {
#line 2575 "typecheck.m"
      check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__VarTypes0_10);
    }
#line 2576 "typecheck.m"
    {
#line 2576 "typecheck.m"
      hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_7, check_hlds__typecheck__ConsType_6, &check_hlds__typecheck__MaybeTypeY_11, check_hlds__typecheck__VarTypes0_10, &check_hlds__typecheck__VarTypes_12);
    }
#line 2586 "typecheck.m"
    if ((check_hlds__typecheck__MaybeTypeY_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2587 "typecheck.m"
      {
#line 2587 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_19;

#line 2590 "typecheck.m"
        {
#line 2590 "typecheck.m"
          check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_12, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_19);
        }
#line 2591 "typecheck.m"
        {
#line 2591 "typecheck.m"
          MR_Word base;
#line 2591 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2591 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
#line 2591 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_19));
#line 2591 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
#line 2591 "typecheck.m"
        }
#line 2587 "typecheck.m"
      }
#line 2586 "typecheck.m"
    else
#line 2578 "typecheck.m"
      {
#line 2578 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeY_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_11, (MR_Integer) 0)));
#line 2583 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_14;
#line 2726 "typecheck.m"
        MR_Word check_hlds__typecheck__HeadTypeParams_24;
#line 2726 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeBindings0_25;
#line 2726 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeBindings_26;

#line 2727 "typecheck.m"
        {
#line 2727 "typecheck.m"
          check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__HeadTypeParams_24);
        }
#line 2728 "typecheck.m"
        {
#line 2728 "typecheck.m"
          check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeBindings0_25);
        }
#line 2729 "typecheck.m"
        {
#line 2729 "typecheck.m"
          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__ConsType_6, check_hlds__typecheck__TypeY_13, check_hlds__typecheck__HeadTypeParams_24, check_hlds__typecheck__TypeBindings0_25, &check_hlds__typecheck__TypeBindings_26);
        }
#line 2726 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2726 "typecheck.m"
          {
#line 2730 "typecheck.m"
            {
#line 2730 "typecheck.m"
              check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_26, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_14);
            }
#line 2730 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2726 "typecheck.m"
          }
#line 2583 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2582 "typecheck.m"
          {
#line 2582 "typecheck.m"
            MR_Word base;
#line 2582 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2582 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
#line 2582 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_14));
#line 2582 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
#line 2582 "typecheck.m"
          }
#line 2583 "typecheck.m"
        else
#line 2583 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15;
#line 2578 "typecheck.m"
      }
#line 2573 "typecheck.m"
  }
#line 2568 "typecheck.m"
}

#line 2470 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(
#line 2470 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2470 "typecheck.m"
  MR_Word check_hlds__typecheck__X_2,
#line 2470 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_3,
#line 2470 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2470 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2470 "typecheck.m"
{
#line 2474 "typecheck.m"
  while (MR_TRUE)
#line 2474 "typecheck.m"
    {
#line 2474 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2474 "typecheck.m"
      {
#line 2474 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2474 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2474 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2474 "typecheck.m"
        else
#line 2476 "typecheck.m"
          {
#line 2476 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2476 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2476 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
#line 2476 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_26;
#line 2510 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeX_27;

#line 2494 "typecheck.m"
            {
#line 2494 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__VarTypes0_26);
            }
#line 2495 "typecheck.m"
            {
#line 2495 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__X_2, &check_hlds__typecheck__TypeX_27);
            }
#line 2510 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2496 "typecheck.m"
              {
#line 2496 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeTypeY_28;
#line 2496 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_29;

#line 2496 "typecheck.m"
                {
#line 2496 "typecheck.m"
                  hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__TypeX_27, &check_hlds__typecheck__MaybeTypeY_28, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_29);
                }
#line 2505 "typecheck.m"
                if ((check_hlds__typecheck__MaybeTypeY_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2506 "typecheck.m"
                  {
#line 2506 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_32;

#line 2507 "typecheck.m"
                    {
#line 2507 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_29, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_32);
                    }
#line 2508 "typecheck.m"
                    {
#line 2508 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2508 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_32));
#line 2508 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2508 "typecheck.m"
                    }
#line 2506 "typecheck.m"
                  }
#line 2505 "typecheck.m"
                else
#line 2498 "typecheck.m"
                  {
#line 2498 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeY_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_28, (MR_Integer) 0)));
#line 2502 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign3_31;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_58;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_59;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_60;

#line 2727 "typecheck.m"
                    {
#line 2727 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__HeadTypeParams_58);
                    }
#line 2728 "typecheck.m"
                    {
#line 2728 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeBindings0_59);
                    }
#line 2729 "typecheck.m"
                    {
#line 2729 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__TypeX_27, check_hlds__typecheck__TypeY_30, check_hlds__typecheck__HeadTypeParams_58, check_hlds__typecheck__TypeBindings0_59, &check_hlds__typecheck__TypeBindings_60);
                    }
#line 2726 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2726 "typecheck.m"
                      {
#line 2730 "typecheck.m"
                        {
#line 2730 "typecheck.m"
                          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_60, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign3_31);
                        }
#line 2730 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2726 "typecheck.m"
                      }
#line 2502 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2501 "typecheck.m"
                      {
#line 2501 "typecheck.m"
                        check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2501 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign3_31));
#line 2501 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2501 "typecheck.m"
                      }
#line 2502 "typecheck.m"
                    else
#line 2503 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2498 "typecheck.m"
                  }
#line 2496 "typecheck.m"
              }
#line 2510 "typecheck.m"
            else
#line 2516 "typecheck.m"
              {
#line 2516 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeY_50;

#line 2511 "typecheck.m"
                {
#line 2511 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__Y_3, &check_hlds__typecheck__TypeY_50);
                }
#line 2516 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2513 "typecheck.m"
                  {
#line 2513 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_45;
#line 2513 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_46;

#line 2513 "typecheck.m"
                    {
#line 2513 "typecheck.m"
                      hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__TypeY_50, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_45);
                    }
#line 2514 "typecheck.m"
                    {
#line 2514 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_45, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_46);
                    }
#line 2515 "typecheck.m"
                    {
#line 2515 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2515 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_46));
#line 2515 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2515 "typecheck.m"
                    }
#line 2513 "typecheck.m"
                  }
#line 2516 "typecheck.m"
                else
#line 2519 "typecheck.m"
                  {
#line 2519 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVarSet0_33;
#line 2519 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVar_34;
#line 2519 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVarSet_35;
#line 2519 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_36;
#line 2519 "typecheck.m"
                    MR_Word check_hlds__typecheck__Type_37;
#line 2519 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes1_38;
#line 2519 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_47;
#line 2519 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_48;

#line 2519 "typecheck.m"
                    {
#line 2519 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeVarSet0_33);
                    }
#line 2520 "typecheck.m"
                    {
#line 2520 "typecheck.m"
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_34, check_hlds__typecheck__TypeVarSet0_33, &check_hlds__typecheck__TypeVarSet_35);
                    }
#line 2521 "typecheck.m"
                    {
#line 2521 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_35, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign1_36);
                    }
#line 2522 "typecheck.m"
                    {
#line 2522 "typecheck.m"
                      check_hlds__typecheck__Type_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2522 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_34));
#line 2522 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2522 "typecheck.m"
                    }
#line 2523 "typecheck.m"
                    {
#line 2523 "typecheck.m"
                      hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes1_38);
                    }
#line 2524 "typecheck.m"
                    {
#line 2524 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], ((MR_Box) (check_hlds__typecheck__X_2)), ((MR_Box) (check_hlds__typecheck__Y_3)));
                    }
#line 2524 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 2526 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2525 "typecheck.m"
                      {
#line 2525 "typecheck.m"
                        hlds__vartypes__add_var_type_4_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes1_38, &check_hlds__typecheck__VarTypes_47);
                      }
#line 2526 "typecheck.m"
                    else
#line 2527 "typecheck.m"
                      check_hlds__typecheck__VarTypes_47 = check_hlds__typecheck__VarTypes1_38;
#line 2529 "typecheck.m"
                    {
#line 2529 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_47, check_hlds__typecheck__TypeAssign1_36, &check_hlds__typecheck__TypeAssign_48);
                    }
#line 2530 "typecheck.m"
                    {
#line 2530 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2530 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_48));
#line 2530 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2530 "typecheck.m"
                    }
#line 2519 "typecheck.m"
                  }
#line 2516 "typecheck.m"
              }
#line 2478 "typecheck.m"
            /* direct tailcall eliminated */
#line 2478 "typecheck.m"
            {
#line 2478 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_12;
#line 2478 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

#line 2478 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2478 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2478 "typecheck.m"
            }
#line 2478 "typecheck.m"
            continue;
#line 2476 "typecheck.m"
          }
#line 2474 "typecheck.m"
      }
#line 2474 "typecheck.m"
      break;
#line 2474 "typecheck.m"
    }
#line 2470 "typecheck.m"
}

#line 2439 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_functor_type_4_p_0(
#line 2439 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2439 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2439 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
#line 2439 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4)
#line 2439 "typecheck.m"
{
#line 2442 "typecheck.m"
  while (MR_TRUE)
#line 2442 "typecheck.m"
    {
#line 2442 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2442 "typecheck.m"
      {
#line 2442 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2442 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2442 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
#line 2442 "typecheck.m"
        else
#line 2444 "typecheck.m"
          {
#line 2444 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_9;
#line 2444 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType_10;
#line 2444 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssigns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2444 "typecheck.m"
            MR_Word check_hlds__typecheck__Type_14;
#line 2444 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_15;
#line 2444 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2444 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19;
#line 2444 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_28;
#line 2444 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeTypeY_29;
#line 2444 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_30;

#line 2443 "typecheck.m"
            check_hlds__typecheck__TypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, (MR_Integer) 0)));
#line 2443 "typecheck.m"
            check_hlds__typecheck__ConsType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, (MR_Integer) 1)));
#line 2445 "typecheck.m"
            check_hlds__typecheck__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsType_10, (MR_Integer) 0)));
#line 2445 "typecheck.m"
            check_hlds__typecheck__ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsType_10, (MR_Integer) 1)));
#line 2543 "typecheck.m"
            {
#line 2543 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__VarTypes0_28);
            }
#line 2544 "typecheck.m"
            {
#line 2544 "typecheck.m"
              hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_14, &check_hlds__typecheck__MaybeTypeY_29, check_hlds__typecheck__VarTypes0_28, &check_hlds__typecheck__VarTypes_30);
            }
#line 2557 "typecheck.m"
            if ((check_hlds__typecheck__MaybeTypeY_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2558 "typecheck.m"
              {
#line 2558 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_37;
#line 2558 "typecheck.m"
                MR_Word check_hlds__typecheck__EmptyConstraints_38;
#line 2558 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssign_39;

#line 2561 "typecheck.m"
                {
#line 2561 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_30, check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeAssign_37);
                }
#line 2562 "typecheck.m"
                {
#line 2562 "typecheck.m"
                  hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_38);
                }
#line 2563 "typecheck.m"
                {
#line 2563 "typecheck.m"
                  check_hlds__typecheck__ArgsTypeAssign_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2563 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_37));
#line 2563 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_15));
#line 2563 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_38));
#line 2563 "typecheck.m"
                }
#line 2565 "typecheck.m"
                {
#line 2565 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2565 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_39));
#line 2565 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
#line 2565 "typecheck.m"
                }
#line 2558 "typecheck.m"
              }
#line 2557 "typecheck.m"
            else
#line 2546 "typecheck.m"
              {
#line 2546 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeY_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_29, (MR_Integer) 0)));
#line 2554 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_32;
#line 2726 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_44;
#line 2726 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_45;
#line 2726 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_46;

#line 2727 "typecheck.m"
                {
#line 2727 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__HeadTypeParams_44);
                }
#line 2728 "typecheck.m"
                {
#line 2728 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeBindings0_45);
                }
#line 2729 "typecheck.m"
                {
#line 2729 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__Type_14, check_hlds__typecheck__TypeY_31, check_hlds__typecheck__HeadTypeParams_44, check_hlds__typecheck__TypeBindings0_45, &check_hlds__typecheck__TypeBindings_46);
                }
#line 2726 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2726 "typecheck.m"
                  {
#line 2730 "typecheck.m"
                    {
#line 2730 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_46, check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeAssign_32);
                    }
#line 2730 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2726 "typecheck.m"
                  }
#line 2554 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2550 "typecheck.m"
                  {
#line 2550 "typecheck.m"
                    MR_Word check_hlds__typecheck__EmptyConstraints_33;
#line 2550 "typecheck.m"
                    MR_Word check_hlds__typecheck__ArgsTypeAssign_34;

#line 2550 "typecheck.m"
                    {
#line 2550 "typecheck.m"
                      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_33);
                    }
#line 2551 "typecheck.m"
                    {
#line 2551 "typecheck.m"
                      check_hlds__typecheck__ArgsTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2551 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_32));
#line 2551 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_15));
#line 2551 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_33));
#line 2551 "typecheck.m"
                    }
#line 2553 "typecheck.m"
                    {
#line 2553 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2553 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_34));
#line 2553 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
#line 2553 "typecheck.m"
                    }
#line 2550 "typecheck.m"
                  }
#line 2554 "typecheck.m"
                else
#line 2554 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
#line 2546 "typecheck.m"
              }
#line 2448 "typecheck.m"
            /* direct tailcall eliminated */
#line 2448 "typecheck.m"
            {
#line 2448 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsTypeAssigns_11;
#line 2448 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19;

#line 2448 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_3;
#line 2448 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2448 "typecheck.m"
            }
#line 2448 "typecheck.m"
            continue;
#line 2444 "typecheck.m"
          }
#line 2442 "typecheck.m"
      }
#line 2442 "typecheck.m"
      break;
#line 2442 "typecheck.m"
    }
#line 2439 "typecheck.m"
}

#line 2322 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_2(
#line 2322 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2322 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 2322 "typecheck.m"
{
#line 2322 "typecheck.m"
  {
#line 2322 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 2322 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2322 "typecheck.m"
    MR_Word check_hlds__typecheck__conv2_HeadVar__2_2;

#line 2322 "typecheck.m"
    {
#line 2322 "typecheck.m"
      check_hlds__typecheck__conv2_HeadVar__2_2 = check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 2322 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv2_HeadVar__2_2));
#line 2322 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 2322 "typecheck.m"
  }
#line 2322 "typecheck.m"
}

#line 2278 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1(
#line 2278 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2278 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2278 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2278 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2278 "typecheck.m"
{
#line 2278 "typecheck.m"
  {
#line 2278 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2278 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16;

#line 2278 "typecheck.m"
    {
#line 2278 "typecheck.m"
      check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16);
    }
#line 2278 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16));
#line 2278 "typecheck.m"
  }
#line 2278 "typecheck.m"
}

#line 2268 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_13,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_14,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_15,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_16,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_17,
#line 2268 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_18,
#line 2268 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_54,
#line 2268 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_55)
#line 2268 "typecheck.m"
{
#line 2274 "typecheck.m"
  {
#line 2274 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2274 "typecheck.m"
    MR_Word check_hlds__typecheck__ClauseContext_20;
#line 2304 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsType_21;
#line 2304 "typecheck.m"
    MR_String check_hlds__typecheck__BuiltinTypeName_22;

#line 2275 "typecheck.m"
    {
#line 2275 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__ClauseContext_20);
    }
#line 2276 "typecheck.m"
    {
#line 2276 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(check_hlds__typecheck__ConsId_14, &check_hlds__typecheck__ConsType_21, &check_hlds__typecheck__BuiltinTypeName_22);
    }
#line 2304 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2279 "typecheck.m"
      {
#line 2279 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet1_23;
#line 2279 "typecheck.m"
        MR_Word check_hlds__typecheck__V_56_56;
#line 2277 "typecheck.m"
        MR_Box check_hlds__typecheck__conv1_TypeAssignSet1_23;

#line 2278 "typecheck.m"
        {
#line 2278 "typecheck.m"
          check_hlds__typecheck__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2278 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[1]));
#line 2278 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_10_p_0_1));
#line 2278 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2278 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 3) = ((MR_Box) (check_hlds__typecheck__ConsType_21));
#line 2278 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_56_56, 4) = ((MR_Box) (check_hlds__typecheck__Var_13));
#line 2278 "typecheck.m"
        }
#line 2277 "typecheck.m"
        {
#line 2277 "typecheck.m"
          mercury__list__foldl_4_p_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[3], check_hlds__typecheck__V_56_56, check_hlds__typecheck__TypeAssignSet0_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typecheck__conv1_TypeAssignSet1_23);
        }
#line 2277 "typecheck.m"
        check_hlds__typecheck__TypeAssignSet1_23 = ((MR_Word) check_hlds__typecheck__conv1_TypeAssignSet1_23);
#line 2283 "typecheck.m"
        if ((check_hlds__typecheck__TypeAssignSet1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2284 "typecheck.m"
          {
#line 2287 "typecheck.m"
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2292 "typecheck.m"
            if ((check_hlds__typecheck__TypeAssignSet0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2289 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
#line 2292 "typecheck.m"
            else
#line 2293 "typecheck.m"
              {
#line 2293 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeVarSet_28;
#line 2293 "typecheck.m"
                MR_Word check_hlds__typecheck__EmptyConstraints_29;
#line 2293 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsDefn_30;
#line 2293 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsIdSpec_31;
#line 2293 "typecheck.m"
                MR_Word check_hlds__typecheck__V_60_60;
#line 2293 "typecheck.m"
                MR_Word check_hlds__typecheck__V_61_61;

#line 2294 "typecheck.m"
                {
#line 2294 "typecheck.m"
                  mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_28);
                }
#line 2295 "typecheck.m"
                {
#line 2295 "typecheck.m"
                  hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_29);
                }
#line 2297 "typecheck.m"
                {
#line 2297 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2297 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinTypeName_22));
#line 2297 "typecheck.m"
                }
#line 2296 "typecheck.m"
                {
#line 2296 "typecheck.m"
                  check_hlds__typecheck__ConsDefn_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2296 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_28));
#line 2296 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2296 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_21));
#line 2296 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2296 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_29));
#line 2296 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_30, 5) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 2296 "typecheck.m"
                }
#line 2299 "typecheck.m"
                {
#line 2299 "typecheck.m"
                  check_hlds__typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2299 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck__ConsDefn_30));
#line 2299 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2299 "typecheck.m"
                }
#line 2298 "typecheck.m"
                {
#line 2298 "typecheck.m"
                  check_hlds__typecheck__ConsIdSpec_31 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__V_61_61, check_hlds__typecheck__ConsId_14, (MR_Integer) 0, check_hlds__typecheck__TypeAssignSet0_17);
                }
#line 2301 "typecheck.m"
                {
#line 2301 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_31, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__STATE_VARIABLE_Info_55);
#line 2301 "typecheck.m"
                  return;
                }
#line 2293 "typecheck.m"
              }
#line 2284 "typecheck.m"
          }
#line 2283 "typecheck.m"
        else
#line 2281 "typecheck.m"
          {
#line 2282 "typecheck.m"
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_23;
#line 2281 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
#line 2281 "typecheck.m"
          }
#line 2279 "typecheck.m"
      }
#line 2304 "typecheck.m"
    else
#line 2307 "typecheck.m"
      {
#line 2307 "typecheck.m"
        MR_Integer check_hlds__typecheck__Arity_32;
#line 2307 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsDefns_33;
#line 2307 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsErrors_34;

#line 2307 "typecheck.m"
        {
#line 2307 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_15, &check_hlds__typecheck__Arity_32);
        }
#line 2308 "typecheck.m"
        {
#line 2308 "typecheck.m"
          check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__GoalId_16, &check_hlds__typecheck__ConsDefns_33, &check_hlds__typecheck__ConsErrors_34);
        }
#line 2317 "typecheck.m"
        if ((check_hlds__typecheck__ConsDefns_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2311 "typecheck.m"
          {
#line 2311 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalContext_35;
#line 2311 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_36;

#line 2312 "typecheck.m"
            *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2313 "typecheck.m"
            {
#line 2313 "typecheck.m"
              check_hlds__typecheck__GoalContext_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2313 "typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalContext_35, 0) = ((MR_Box) (check_hlds__typecheck__UnifyContext_11));
#line 2313 "typecheck.m"
            }
#line 2314 "typecheck.m"
            {
#line 2314 "typecheck.m"
              check_hlds__typecheck__Spec_36 = check_hlds__typecheck_errors__report_error_undef_cons_6_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__GoalContext_35, check_hlds__typecheck__Context_12, check_hlds__typecheck__ConsErrors_34, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32);
            }
#line 2316 "typecheck.m"
            {
#line 2316 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_36, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, check_hlds__typecheck__STATE_VARIABLE_Info_55);
#line 2316 "typecheck.m"
              return;
            }
#line 2311 "typecheck.m"
          }
#line 2317 "typecheck.m"
        else
#line 2317 "typecheck.m"
          {
#line 2317 "typecheck.m"
            MR_Word check_hlds__typecheck__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_33, (MR_Integer) 1)));
#line 2319 "typecheck.m"
            MR_Word check_hlds__typecheck__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_33, (MR_Integer) 0)));

#line 2317 "typecheck.m"
            if ((check_hlds__typecheck__V_158_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2325 "typecheck.m"
              {
#line 2325 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeAssignSet_43;
#line 2325 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_46;
#line 2325 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
#line 2325 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet1_80;
#line 2333 "typecheck.m"
                MR_Word check_hlds__typecheck__V_44_44;
#line 2333 "typecheck.m"
                MR_Word check_hlds__typecheck__V_45_45;
#line 2348 "typecheck.m"
                MR_Word check_hlds__typecheck__V_47_47;
#line 2348 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;

#line 2329 "typecheck.m"
                {
#line 2329 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__TypeAssignSet0_17, check_hlds__typecheck__ConsDefns_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsTypeAssignSet_43);
                }
#line 2332 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2332 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2332 "typecheck.m"
                  {
#line 2333 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_17)) == (MR_mktag((MR_Integer) 1)));
#line 2333 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2333 "typecheck.m"
                      {
#line 2333 "typecheck.m"
                        check_hlds__typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 0)));
#line 2333 "typecheck.m"
                        check_hlds__typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 1)));
#line 2333 "typecheck.m"
                      }
#line 2332 "typecheck.m"
                  }
#line 2338 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2337 "typecheck.m"
                  {
#line 2337 "typecheck.m"
                    {
#line 2337 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
#line 2337 "typecheck.m"
                      return;
                    }
#line 2337 "typecheck.m"
                  }
#line 2338 "typecheck.m"
                else
#line 2339 "typecheck.m"
                  {
#line 2339 "typecheck.m"
                  }
#line 2344 "typecheck.m"
                {
#line 2344 "typecheck.m"
                  check_hlds__typecheck__typecheck_functor_type_4_p_0(check_hlds__typecheck__ConsTypeAssignSet_43, check_hlds__typecheck__Var_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_46);
                }
#line 2347 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2347 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2347 "typecheck.m"
                  {
#line 2348 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_43)) == (MR_mktag((MR_Integer) 1)));
#line 2348 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2348 "typecheck.m"
                      {
#line 2348 "typecheck.m"
                        check_hlds__typecheck__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_43, (MR_Integer) 0)));
#line 2348 "typecheck.m"
                        check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_43, (MR_Integer) 1)));
#line 2348 "typecheck.m"
                      }
#line 2347 "typecheck.m"
                  }
#line 2354 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2352 "typecheck.m"
                  {
#line 2352 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsIdSpec_78;

#line 2350 "typecheck.m"
                    {
#line 2350 "typecheck.m"
                      check_hlds__typecheck__ConsIdSpec_78 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__TypeAssignSet0_17);
                    }
#line 2353 "typecheck.m"
                    {
#line 2353 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_78, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__STATE_VARIABLE_Info_74_74);
                    }
#line 2352 "typecheck.m"
                  }
#line 2354 "typecheck.m"
                else
#line 2354 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_74_74 = check_hlds__typecheck__STATE_VARIABLE_Info_0_54;
#line 2360 "typecheck.m"
                {
#line 2360 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(check_hlds__typecheck__ArgsTypeAssignSet_46, check_hlds__typecheck__Args_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_80);
                }
#line 2365 "typecheck.m"
                if ((check_hlds__typecheck__TypeAssignSet1_80 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2366 "typecheck.m"
                  {
#line 2369 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2374 "typecheck.m"
                    if ((check_hlds__typecheck__ArgsTypeAssignSet_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2371 "typecheck.m"
                      *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
#line 2374 "typecheck.m"
                    else
#line 2375 "typecheck.m"
                      {
#line 2375 "typecheck.m"
                        MR_Word check_hlds__typecheck__ArgSpec_53;

#line 2376 "typecheck.m"
                        {
#line 2376 "typecheck.m"
                          check_hlds__typecheck__ArgSpec_53 = check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Args_15, check_hlds__typecheck__ArgsTypeAssignSet_46);
                        }
#line 2379 "typecheck.m"
                        {
#line 2379 "typecheck.m"
                          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_53, check_hlds__typecheck__STATE_VARIABLE_Info_74_74, check_hlds__typecheck__STATE_VARIABLE_Info_55);
#line 2379 "typecheck.m"
                          return;
                        }
#line 2375 "typecheck.m"
                      }
#line 2366 "typecheck.m"
                  }
#line 2365 "typecheck.m"
                else
#line 2363 "typecheck.m"
                  {
#line 2364 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_80;
#line 2363 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_74;
#line 2363 "typecheck.m"
                  }
#line 2325 "typecheck.m"
              }
#line 2317 "typecheck.m"
            else
#line 2325 "typecheck.m"
              {
#line 2325 "typecheck.m"
                MR_Word check_hlds__typecheck__Sources_41;
#line 2325 "typecheck.m"
                MR_Word check_hlds__typecheck__Symbol_42;
#line 2325 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeAssignSet_137;
#line 2325 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_140;
#line 2325 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_67_148;
#line 2325 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
#line 2325 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet1_157;
#line 2333 "typecheck.m"
                MR_Word check_hlds__typecheck__V_97_97;
#line 2333 "typecheck.m"
                MR_Word check_hlds__typecheck__V_98_98;
#line 2348 "typecheck.m"
                MR_Word check_hlds__typecheck__V_109_109;
#line 2348 "typecheck.m"
                MR_Word check_hlds__typecheck__V_110_110;

#line 2322 "typecheck.m"
                {
#line 2322 "typecheck.m"
                  check_hlds__typecheck__Sources_41 = mercury__list__map_2_f_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[5], check_hlds__typecheck__ConsDefns_33);
                }
#line 2323 "typecheck.m"
                {
#line 2323 "typecheck.m"
                  check_hlds__typecheck__Symbol_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_42, 0) = ((MR_Box) (check_hlds__typecheck__ConsId_14));
#line 2323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_42, 1) = ((MR_Box) (check_hlds__typecheck__Sources_41));
#line 2323 "typecheck.m"
                }
#line 2324 "typecheck.m"
                {
#line 2324 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_42, check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_Info_0_54, &check_hlds__typecheck__STATE_VARIABLE_Info_67_148);
                }
#line 2329 "typecheck.m"
                {
#line 2329 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__TypeAssignSet0_17, check_hlds__typecheck__ConsDefns_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsTypeAssignSet_137);
                }
#line 2332 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_137 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2332 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2332 "typecheck.m"
                  {
#line 2333 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_17)) == (MR_mktag((MR_Integer) 1)));
#line 2333 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2333 "typecheck.m"
                      {
#line 2333 "typecheck.m"
                        check_hlds__typecheck__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 0)));
#line 2333 "typecheck.m"
                        check_hlds__typecheck__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_17, (MR_Integer) 1)));
#line 2333 "typecheck.m"
                      }
#line 2332 "typecheck.m"
                  }
#line 2338 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2337 "typecheck.m"
                  {
#line 2337 "typecheck.m"
                    {
#line 2337 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/10", (MR_String) "undefined cons\?");
#line 2337 "typecheck.m"
                      return;
                    }
#line 2337 "typecheck.m"
                  }
#line 2338 "typecheck.m"
                else
#line 2339 "typecheck.m"
                  {
#line 2339 "typecheck.m"
                  }
#line 2344 "typecheck.m"
                {
#line 2344 "typecheck.m"
                  check_hlds__typecheck__typecheck_functor_type_4_p_0(check_hlds__typecheck__ConsTypeAssignSet_137, check_hlds__typecheck__Var_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_140);
                }
#line 2347 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2347 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2347 "typecheck.m"
                  {
#line 2348 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_137)) == (MR_mktag((MR_Integer) 1)));
#line 2348 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2348 "typecheck.m"
                      {
#line 2348 "typecheck.m"
                        check_hlds__typecheck__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_137, (MR_Integer) 0)));
#line 2348 "typecheck.m"
                        check_hlds__typecheck__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_137, (MR_Integer) 1)));
#line 2348 "typecheck.m"
                      }
#line 2347 "typecheck.m"
                  }
#line 2354 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2352 "typecheck.m"
                  {
#line 2352 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsIdSpec_113;

#line 2350 "typecheck.m"
                    {
#line 2350 "typecheck.m"
                      check_hlds__typecheck__ConsIdSpec_113 = check_hlds__typecheck_errors__report_error_functor_type_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Arity_32, check_hlds__typecheck__TypeAssignSet0_17);
                    }
#line 2353 "typecheck.m"
                    {
#line 2353 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_113, check_hlds__typecheck__STATE_VARIABLE_Info_67_148, &check_hlds__typecheck__STATE_VARIABLE_Info_74_154);
                    }
#line 2352 "typecheck.m"
                  }
#line 2354 "typecheck.m"
                else
#line 2354 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_74_154 = check_hlds__typecheck__STATE_VARIABLE_Info_67_148;
#line 2360 "typecheck.m"
                {
#line 2360 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(check_hlds__typecheck__ArgsTypeAssignSet_140, check_hlds__typecheck__Args_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_157);
                }
#line 2365 "typecheck.m"
                if ((check_hlds__typecheck__TypeAssignSet1_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2366 "typecheck.m"
                  {
#line 2369 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet0_17;
#line 2374 "typecheck.m"
                    if ((check_hlds__typecheck__ArgsTypeAssignSet_140 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2371 "typecheck.m"
                      *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
#line 2374 "typecheck.m"
                    else
#line 2375 "typecheck.m"
                      {
#line 2375 "typecheck.m"
                        MR_Word check_hlds__typecheck__ArgSpec_121;

#line 2376 "typecheck.m"
                        {
#line 2376 "typecheck.m"
                          check_hlds__typecheck__ArgSpec_121 = check_hlds__typecheck_errors__report_error_functor_arg_types_8_f_0(check_hlds__typecheck__ClauseContext_20, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__Var_13, check_hlds__typecheck__ConsDefns_33, check_hlds__typecheck__ConsId_14, check_hlds__typecheck__Args_15, check_hlds__typecheck__ArgsTypeAssignSet_140);
                        }
#line 2379 "typecheck.m"
                        {
#line 2379 "typecheck.m"
                          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_121, check_hlds__typecheck__STATE_VARIABLE_Info_74_154, check_hlds__typecheck__STATE_VARIABLE_Info_55);
#line 2379 "typecheck.m"
                          return;
                        }
#line 2375 "typecheck.m"
                      }
#line 2366 "typecheck.m"
                  }
#line 2365 "typecheck.m"
                else
#line 2363 "typecheck.m"
                  {
#line 2364 "typecheck.m"
                    *check_hlds__typecheck__TypeAssignSet_18 = check_hlds__typecheck__TypeAssignSet1_157;
#line 2363 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_55 = check_hlds__typecheck__STATE_VARIABLE_Info_74_154;
#line 2363 "typecheck.m"
                  }
#line 2325 "typecheck.m"
              }
#line 2317 "typecheck.m"
          }
#line 2307 "typecheck.m"
      }
#line 2274 "typecheck.m"
  }
#line 2268 "typecheck.m"
}

#line 2249 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
#line 2249 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_4,
#line 2249 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsType_5,
#line 2249 "typecheck.m"
  MR_String * check_hlds__typecheck__BuiltinTypeName_6)
#line 2249 "typecheck.m"
{
#line 2252 "typecheck.m"
  {
#line 2252 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2252 "typecheck.m"
    MR_Word check_hlds__typecheck__BuiltinType_8;

#line 2257 "typecheck.m"
#line 2257 "typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) {
#line 2257 "typecheck.m"
      default:
#line 2257 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_FALSE;
#line 2257 "typecheck.m"
        break;
#line 2257 "typecheck.m"
      case (MR_Integer) 3:
#line 2257 "typecheck.m"
#line 2257 "typecheck.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) {
#line 2257 "typecheck.m"
          default:
#line 2257 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_FALSE;
#line 2257 "typecheck.m"
            break;
#line 2257 "typecheck.m"
          case (MR_Integer) 5:
#line 2254 "typecheck.m"
            {
#line 2255 "typecheck.m"
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "int";
#line 2256 "typecheck.m"
              check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 0;
#line 2254 "typecheck.m"
              check_hlds__typecheck__succeeded = MR_TRUE;
#line 2254 "typecheck.m"
            }
#line 2257 "typecheck.m"
            break;
#line 2257 "typecheck.m"
          case (MR_Integer) 6:
#line 2258 "typecheck.m"
            {
#line 2259 "typecheck.m"
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "float";
#line 2260 "typecheck.m"
              check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 1;
#line 2258 "typecheck.m"
              check_hlds__typecheck__succeeded = MR_TRUE;
#line 2258 "typecheck.m"
            }
#line 2257 "typecheck.m"
            break;
#line 2257 "typecheck.m"
          case (MR_Integer) 8:
#line 2262 "typecheck.m"
            {
#line 2263 "typecheck.m"
              *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "string";
#line 2264 "typecheck.m"
              check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 2;
#line 2262 "typecheck.m"
              check_hlds__typecheck__succeeded = MR_TRUE;
#line 2262 "typecheck.m"
            }
#line 2257 "typecheck.m"
            break;
#line 2257 "typecheck.m"
        }
#line 2257 "typecheck.m"
        break;
#line 2257 "typecheck.m"
    }
#line 2252 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2252 "typecheck.m"
      {
#line 2266 "typecheck.m"
        {
#line 2266 "typecheck.m"
          MR_Word base;
#line 2266 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2266 "typecheck.m"
          *check_hlds__typecheck__ConsType_5 = base;
#line 2266 "typecheck.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinType_8));
#line 2266 "typecheck.m"
        }
#line 2266 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2252 "typecheck.m"
      }
#line 2252 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2252 "typecheck.m"
  }
#line 2249 "typecheck.m"
}

#line 2200 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unification_10_p_0(
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__UnifyContext_11,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_12,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_13,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__X_14,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__RHS0_15,
#line 2200 "typecheck.m"
  MR_Word * check_hlds__typecheck__RHS_16,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33,
#line 2200 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34,
#line 2200 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_35,
#line 2200 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_36)
#line 2200 "typecheck.m"
{
#line 2208 "typecheck.m"
  {
#line 2208 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 2208 "typecheck.m"
#line 2208 "typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__typecheck__RHS0_15)) {
#line 2208 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2208 "typecheck.m"
      case (MR_Integer) 0:
#line 2208 "typecheck.m"
        {
#line 2208 "typecheck.m"
          MR_Word check_hlds__typecheck__Y_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)));
#line 2208 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet1_75;
#line 2238 "typecheck.m"
          MR_Word check_hlds__typecheck__V_76_76;
#line 2238 "typecheck.m"
          MR_Word check_hlds__typecheck__V_77_77;

#line 2235 "typecheck.m"
          {
#line 2235 "typecheck.m"
            check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, check_hlds__typecheck__X_14, check_hlds__typecheck__Y_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_75);
          }
#line 2237 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2237 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2237 "typecheck.m"
            {
#line 2238 "typecheck.m"
              check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33)) == (MR_mktag((MR_Integer) 1)));
#line 2238 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2238 "typecheck.m"
                {
#line 2238 "typecheck.m"
                  check_hlds__typecheck__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 0)));
#line 2238 "typecheck.m"
                  check_hlds__typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 1)));
#line 2238 "typecheck.m"
                }
#line 2237 "typecheck.m"
            }
#line 2245 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2240 "typecheck.m"
            {
#line 2240 "typecheck.m"
              MR_Word check_hlds__typecheck__ClauseContext_78;
#line 2240 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_79;

#line 2240 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33;
#line 2241 "typecheck.m"
              {
#line 2241 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__ClauseContext_78);
              }
#line 2242 "typecheck.m"
              {
#line 2242 "typecheck.m"
                check_hlds__typecheck__Spec_79 = check_hlds__typecheck_errors__report_error_unif_var_var_6_f_0(check_hlds__typecheck__ClauseContext_78, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__X_14, check_hlds__typecheck__Y_19, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33);
              }
#line 2244 "typecheck.m"
              {
#line 2244 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_79, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, check_hlds__typecheck__STATE_VARIABLE_Info_36);
              }
#line 2240 "typecheck.m"
            }
#line 2245 "typecheck.m"
          else
#line 2246 "typecheck.m"
            {
#line 2246 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34 = check_hlds__typecheck__TypeAssignSet1_75;
#line 2246 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_36 = check_hlds__typecheck__STATE_VARIABLE_Info_0_35;
#line 2246 "typecheck.m"
            }
#line 2211 "typecheck.m"
          *check_hlds__typecheck__RHS_16 = check_hlds__typecheck__RHS0_15;
#line 2208 "typecheck.m"
        }
#line 2208 "typecheck.m"
        break;
#line 2208 "typecheck.m"
      case (MR_Integer) 1:
#line 2213 "typecheck.m"
        {
#line 2213 "typecheck.m"
          MR_Word check_hlds__typecheck__Functor_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)));
#line 2213 "typecheck.m"
          MR_Word check_hlds__typecheck__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 2)));
#line 2213 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41;
#line 2213 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_42_42;
#line 2213 "typecheck.m"
          MR_Word check_hlds__typecheck___ExistConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_15, (MR_Integer) 1)));

#line 2214 "typecheck.m"
          {
#line 2214 "typecheck.m"
            check_hlds__typecheck__typecheck_unify_var_functor_10_p_0(check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__X_14, check_hlds__typecheck__Functor_20, check_hlds__typecheck__Args_22, check_hlds__typecheck__GoalId_13, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__STATE_VARIABLE_Info_42_42);
          }
#line 2216 "typecheck.m"
          {
#line 2216 "typecheck.m"
            check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_41_41, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34, check_hlds__typecheck__STATE_VARIABLE_Info_42_42, check_hlds__typecheck__STATE_VARIABLE_Info_36);
          }
#line 2217 "typecheck.m"
          *check_hlds__typecheck__RHS_16 = check_hlds__typecheck__RHS0_15;
#line 2213 "typecheck.m"
        }
#line 2208 "typecheck.m"
        break;
#line 2208 "typecheck.m"
      case (MR_Integer) 2:
#line 2220 "typecheck.m"
        {
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__Purity_23 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__Groundness_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__PredOrFunc_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__NonLocals_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 2)));
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__Vars_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 3)));
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__Modes_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 4)));
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__Det_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 5)));
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__Goal0_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_15, (MR_Integer) 6)));
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__Goal_32;
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37;
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_38_38;
#line 2220 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet1_59;
#line 2669 "typecheck.m"
          MR_Word check_hlds__typecheck__V_60_60;
#line 2669 "typecheck.m"
          MR_Word check_hlds__typecheck__V_61_61;

#line 2665 "typecheck.m"
          {
#line 2665 "typecheck.m"
            check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, check_hlds__typecheck__Purity_23, check_hlds__typecheck__PredOrFunc_25, check_hlds__typecheck__X_14, check_hlds__typecheck__Vars_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_59);
          }
#line 2668 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2668 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2668 "typecheck.m"
            {
#line 2669 "typecheck.m"
              check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33)) == (MR_mktag((MR_Integer) 1)));
#line 2669 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2669 "typecheck.m"
                {
#line 2669 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 0)));
#line 2669 "typecheck.m"
                  check_hlds__typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33, (MR_Integer) 1)));
#line 2669 "typecheck.m"
                }
#line 2668 "typecheck.m"
            }
#line 2676 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2671 "typecheck.m"
            {
#line 2671 "typecheck.m"
              MR_Word check_hlds__typecheck__ClauseContext_62;
#line 2671 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_63;

#line 2671 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33;
#line 2672 "typecheck.m"
              {
#line 2672 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__ClauseContext_62);
              }
#line 2673 "typecheck.m"
              {
#line 2673 "typecheck.m"
                check_hlds__typecheck__Spec_63 = check_hlds__typecheck_errors__report_error_lambda_var_8_f_0(check_hlds__typecheck__ClauseContext_62, check_hlds__typecheck__UnifyContext_11, check_hlds__typecheck__Context_12, check_hlds__typecheck__PredOrFunc_25, check_hlds__typecheck__X_14, check_hlds__typecheck__Vars_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_33);
              }
#line 2675 "typecheck.m"
              {
#line 2675 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_63, check_hlds__typecheck__STATE_VARIABLE_Info_0_35, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
              }
#line 2671 "typecheck.m"
            }
#line 2676 "typecheck.m"
          else
#line 2677 "typecheck.m"
            {
#line 2677 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37 = check_hlds__typecheck__TypeAssignSet1_59;
#line 2677 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_38_38 = check_hlds__typecheck__STATE_VARIABLE_Info_0_35;
#line 2677 "typecheck.m"
            }
#line 2223 "typecheck.m"
          {
#line 2223 "typecheck.m"
            check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Goal0_31, &check_hlds__typecheck__Goal_32, check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_34, check_hlds__typecheck__STATE_VARIABLE_Info_38_38, check_hlds__typecheck__STATE_VARIABLE_Info_36);
          }
#line 2224 "typecheck.m"
          {
#line 2224 "typecheck.m"
            MR_Word base;
#line 2224 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 2224 "typecheck.m"
            *check_hlds__typecheck__RHS_16 = base;
#line 2224 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((check_hlds__typecheck__Purity_23 | ((((check_hlds__typecheck__Groundness_24 << (MR_Integer) 2)) | ((check_hlds__typecheck__PredOrFunc_25 << (MR_Integer) 3)))))));
#line 2224 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
#line 2224 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__typecheck__NonLocals_27));
#line 2224 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__typecheck__Vars_28));
#line 2224 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__typecheck__Modes_29));
#line 2224 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__typecheck__Det_30));
#line 2224 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (check_hlds__typecheck__Goal_32));
#line 2224 "typecheck.m"
          }
#line 2220 "typecheck.m"
        }
#line 2208 "typecheck.m"
        break;
#line 2208 "typecheck.m"
    }
#line 2208 "typecheck.m"
  }
#line 2200 "typecheck.m"
}

#line 2124 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
#line 2124 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2124 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2124 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_3,
#line 2124 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2124 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2124 "typecheck.m"
{
#line 2127 "typecheck.m"
  while (MR_TRUE)
#line 2127 "typecheck.m"
    {
#line 2127 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2127 "typecheck.m"
      {
#line 2127 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2127 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2127 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2127 "typecheck.m"
        else
#line 2129 "typecheck.m"
          {
#line 2129 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2129 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2129 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
#line 2129 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_26;
#line 2129 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeOldVarType_27;
#line 2129 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_28;

#line 2137 "typecheck.m"
            {
#line 2137 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__VarTypes0_26);
            }
#line 2138 "typecheck.m"
            {
#line 2138 "typecheck.m"
              hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_3, &check_hlds__typecheck__MaybeOldVarType_27, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_28);
            }
#line 2146 "typecheck.m"
            if ((check_hlds__typecheck__MaybeOldVarType_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2147 "typecheck.m"
              {
#line 2147 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_31;

#line 2148 "typecheck.m"
                {
#line 2148 "typecheck.m"
                  check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_28, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_31);
                }
#line 2149 "typecheck.m"
                {
#line 2149 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2149 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_31));
#line 2149 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2149 "typecheck.m"
                }
#line 2147 "typecheck.m"
              }
#line 2146 "typecheck.m"
            else
#line 2140 "typecheck.m"
              {
#line 2140 "typecheck.m"
                MR_Word check_hlds__typecheck__OldVarType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_27, (MR_Integer) 0)));
#line 2143 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_30;
#line 2726 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_39;
#line 2726 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_40;
#line 2726 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_41;

#line 2727 "typecheck.m"
                {
#line 2727 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__HeadTypeParams_39);
                }
#line 2728 "typecheck.m"
                {
#line 2728 "typecheck.m"
                  check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeBindings0_40);
                }
#line 2729 "typecheck.m"
                {
#line 2729 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_29, check_hlds__typecheck__Type_3, check_hlds__typecheck__HeadTypeParams_39, check_hlds__typecheck__TypeBindings0_40, &check_hlds__typecheck__TypeBindings_41);
                }
#line 2726 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2726 "typecheck.m"
                  {
#line 2730 "typecheck.m"
                    {
#line 2730 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_41, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign1_30);
                    }
#line 2730 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2726 "typecheck.m"
                  }
#line 2143 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2142 "typecheck.m"
                  {
#line 2142 "typecheck.m"
                    check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_30));
#line 2142 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2142 "typecheck.m"
                  }
#line 2143 "typecheck.m"
                else
#line 2144 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2140 "typecheck.m"
              }
#line 2131 "typecheck.m"
            /* direct tailcall eliminated */
#line 2131 "typecheck.m"
            {
#line 2131 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_12;
#line 2131 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

#line 2131 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2131 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2131 "typecheck.m"
            }
#line 2131 "typecheck.m"
            continue;
#line 2129 "typecheck.m"
          }
#line 2127 "typecheck.m"
      }
#line 2127 "typecheck.m"
      break;
#line 2127 "typecheck.m"
    }
#line 2124 "typecheck.m"
}

#line 2102 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_8_p_0(
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalContext_9,
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_10,
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_11,
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_12,
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_13,
#line 2102 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_14,
#line 2102 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 2102 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 2102 "typecheck.m"
{
#line 2108 "typecheck.m"
  {
#line 2108 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2108 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet1_16;
#line 2112 "typecheck.m"
    MR_Word check_hlds__typecheck__V_17_17;
#line 2112 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;

#line 2109 "typecheck.m"
    {
#line 2109 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_13, check_hlds__typecheck__Var_11, check_hlds__typecheck__Type_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_16);
    }
#line 2111 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2111 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2111 "typecheck.m"
      {
#line 2112 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_13)) == (MR_mktag((MR_Integer) 1)));
#line 2112 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2112 "typecheck.m"
          {
#line 2112 "typecheck.m"
            check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_13, (MR_Integer) 0)));
#line 2112 "typecheck.m"
            check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_13, (MR_Integer) 1)));
#line 2112 "typecheck.m"
          }
#line 2111 "typecheck.m"
      }
#line 2120 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2114 "typecheck.m"
      {
#line 2114 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_19;
#line 2114 "typecheck.m"
        MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_20;
#line 2114 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_21;
#line 2118 "typecheck.m"
        MR_Word check_hlds__typecheck__V_22_22;

#line 2114 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_14 = check_hlds__typecheck__TypeAssignSet0_13;
#line 2115 "typecheck.m"
        {
#line 2115 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ClauseContext_19);
        }
#line 2116 "typecheck.m"
        {
#line 2116 "typecheck.m"
          check_hlds__typecheck__SpecAndMaybeActualExpected_20 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_19, check_hlds__typecheck__GoalContext_9, check_hlds__typecheck__Context_10, check_hlds__typecheck__Var_11, check_hlds__typecheck__Type_12, check_hlds__typecheck__TypeAssignSet0_13);
        }
#line 2118 "typecheck.m"
        check_hlds__typecheck__Spec_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_20, (MR_Integer) 0)));
#line 2118 "typecheck.m"
        check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_20, (MR_Integer) 1)));
#line 2119 "typecheck.m"
        {
#line 2119 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_21, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
#line 2119 "typecheck.m"
          return;
        }
#line 2114 "typecheck.m"
      }
#line 2120 "typecheck.m"
    else
#line 2121 "typecheck.m"
      {
#line 2121 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_14 = check_hlds__typecheck__TypeAssignSet1_16;
#line 2121 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 2121 "typecheck.m"
      }
#line 2108 "typecheck.m"
  }
#line 2102 "typecheck.m"
}

#line 2094 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(
#line 2094 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 2094 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_8,
#line 2094 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11,
#line 2094 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12,
#line 2094 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 2094 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14)
#line 2094 "typecheck.m"
{
#line 2098 "typecheck.m"
  {
#line 2098 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2098 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;
#line 2098 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet1_28;
#line 2112 "typecheck.m"
    MR_Word check_hlds__typecheck__V_29_29;
#line 2112 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;

#line 2100 "typecheck.m"
    {
#line 2100 "typecheck.m"
      check_hlds__typecheck__V_16_16 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
    }
#line 2109 "typecheck.m"
    {
#line 2109 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, check_hlds__typecheck__Var_8, check_hlds__typecheck__V_16_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_28);
    }
#line 2111 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2111 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2111 "typecheck.m"
      {
#line 2112 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11)) == (MR_mktag((MR_Integer) 1)));
#line 2112 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2112 "typecheck.m"
          {
#line 2112 "typecheck.m"
            check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, (MR_Integer) 0)));
#line 2112 "typecheck.m"
            check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11, (MR_Integer) 1)));
#line 2112 "typecheck.m"
          }
#line 2111 "typecheck.m"
      }
#line 2120 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2114 "typecheck.m"
      {
#line 2114 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_31;
#line 2114 "typecheck.m"
        MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_32;
#line 2114 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_33;
#line 2118 "typecheck.m"
        MR_Word check_hlds__typecheck__V_34_34;

#line 2114 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11;
#line 2115 "typecheck.m"
        {
#line 2115 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_13, &check_hlds__typecheck__ClauseContext_31);
        }
#line 2116 "typecheck.m"
        {
#line 2116 "typecheck.m"
          check_hlds__typecheck__SpecAndMaybeActualExpected_32 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Context_7, check_hlds__typecheck__Var_8, check_hlds__typecheck__V_16_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_11);
        }
#line 2118 "typecheck.m"
        check_hlds__typecheck__Spec_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_32, (MR_Integer) 0)));
#line 2118 "typecheck.m"
        check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_32, (MR_Integer) 1)));
#line 2119 "typecheck.m"
        {
#line 2119 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_33, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
#line 2119 "typecheck.m"
          return;
        }
#line 2114 "typecheck.m"
      }
#line 2120 "typecheck.m"
    else
#line 2121 "typecheck.m"
      {
#line 2121 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_12 = check_hlds__typecheck__TypeAssignSet1_28;
#line 2121 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_14 = check_hlds__typecheck__STATE_VARIABLE_Info_0_13;
#line 2121 "typecheck.m"
      }
#line 2098 "typecheck.m"
  }
#line 2094 "typecheck.m"
}

#line 2049 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_13,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_14,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_15,
#line 2049 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_16,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_17,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_18,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet0_19,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_20,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_35,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_36,
#line 2049 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37,
#line 2049 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38)
#line 2049 "typecheck.m"
{
#line 2058 "typecheck.m"
  {
#line 2058 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2058 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet1_23;
#line 2062 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 2062 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;

#line 2059 "typecheck.m"
    {
#line 2059 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_19, check_hlds__typecheck__Var_17, check_hlds__typecheck__Type_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet1_23);
    }
#line 2061 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet1_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2061 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2061 "typecheck.m"
      {
#line 2062 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_19)) == (MR_mktag((MR_Integer) 1)));
#line 2062 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2062 "typecheck.m"
          {
#line 2062 "typecheck.m"
            check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_19, (MR_Integer) 0)));
#line 2062 "typecheck.m"
            check_hlds__typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_19, (MR_Integer) 1)));
#line 2062 "typecheck.m"
          }
#line 2061 "typecheck.m"
      }
#line 2089 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2064 "typecheck.m"
      {
#line 2064 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_26;
#line 2064 "typecheck.m"
        MR_Word check_hlds__typecheck__GoalContext_27;
#line 2064 "typecheck.m"
        MR_Word check_hlds__typecheck__SpecAndMaybeActualExpected_28;
#line 2064 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_29;
#line 2064 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeActualExpected_30;
#line 2064 "typecheck.m"
        MR_Word check_hlds__typecheck__V_40_40;

#line 2064 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_20 = check_hlds__typecheck__TypeAssignSet0_19;
#line 2065 "typecheck.m"
        {
#line 2065 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__Info_13, &check_hlds__typecheck__ClauseContext_26);
        }
#line 2067 "typecheck.m"
        {
#line 2067 "typecheck.m"
          check_hlds__typecheck__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2067 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_40_40, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorKind_15));
#line 2067 "typecheck.m"
        }
#line 2067 "typecheck.m"
        {
#line 2067 "typecheck.m"
          check_hlds__typecheck__GoalContext_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2067 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_27, 0) = ((MR_Box) (check_hlds__typecheck__V_40_40));
#line 2067 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_27, 1) = ((MR_Box) (check_hlds__typecheck__ArgNum_16));
#line 2067 "typecheck.m"
        }
#line 2068 "typecheck.m"
        {
#line 2068 "typecheck.m"
          check_hlds__typecheck__SpecAndMaybeActualExpected_28 = check_hlds__typecheck_errors__report_error_var_6_f_0(check_hlds__typecheck__ClauseContext_26, check_hlds__typecheck__GoalContext_27, check_hlds__typecheck__Context_14, check_hlds__typecheck__Var_17, check_hlds__typecheck__Type_18, check_hlds__typecheck__TypeAssignSet0_19);
        }
#line 2070 "typecheck.m"
        check_hlds__typecheck__Spec_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_28, (MR_Integer) 0)));
#line 2070 "typecheck.m"
        check_hlds__typecheck__MaybeActualExpected_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SpecAndMaybeActualExpected_28, (MR_Integer) 1)));
#line 2072 "typecheck.m"
        {
#line 2072 "typecheck.m"
          MR_Word base;
#line 2072 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2072 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Specs_36 = base;
#line 2072 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Spec_29));
#line 2072 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Specs_0_35));
#line 2072 "typecheck.m"
        }
#line 2075 "typecheck.m"
        if ((check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2074 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37;
#line 2075 "typecheck.m"
        else
#line 2080 "typecheck.m"
        if ((check_hlds__typecheck__MaybeActualExpected_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2079 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2080 "typecheck.m"
        else
#line 2081 "typecheck.m"
          {
#line 2081 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorTypeErrors0_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37, (MR_Integer) 0)));
#line 2081 "typecheck.m"
            MR_Word check_hlds__typecheck__ActualExpected_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeActualExpected_30, (MR_Integer) 0)));
#line 2081 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorTypeError_33;
#line 2081 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorTypeErrors_34;

#line 2082 "typecheck.m"
            {
#line 2082 "typecheck.m"
              check_hlds__typecheck__ArgVectorTypeError_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2082 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 0) = ((MR_Box) (check_hlds__typecheck__ArgNum_16));
#line 2082 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 1) = ((MR_Box) (check_hlds__typecheck__Var_17));
#line 2082 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgVectorTypeError_33, 2) = ((MR_Box) (check_hlds__typecheck__ActualExpected_32));
#line 2082 "typecheck.m"
            }
#line 2084 "typecheck.m"
            {
#line 2084 "typecheck.m"
              check_hlds__typecheck__ArgVectorTypeErrors_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2084 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_34, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeError_33));
#line 2084 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeErrors0_31));
#line 2084 "typecheck.m"
            }
#line 2086 "typecheck.m"
            {
#line 2086 "typecheck.m"
              MR_Word base;
#line 2086 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2086 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = base;
#line 2086 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorTypeErrors_34));
#line 2086 "typecheck.m"
            }
#line 2081 "typecheck.m"
          }
#line 2064 "typecheck.m"
      }
#line 2089 "typecheck.m"
    else
#line 2090 "typecheck.m"
      {
#line 2090 "typecheck.m"
        *check_hlds__typecheck__TypeAssignSet_20 = check_hlds__typecheck__TypeAssignSet1_23;
#line 2090 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_38 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_37;
#line 2090 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Specs_36 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_35;
#line 2090 "typecheck.m"
      }
#line 2058 "typecheck.m"
  }
#line 2049 "typecheck.m"
}

#line 2024 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_2,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_3,
#line 2024 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_4,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__6_6,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2024 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_9,
#line 2024 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_10,
#line 2024 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11,
#line 2024 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12)
#line 2024 "typecheck.m"
{
#line 2032 "typecheck.m"
  while (MR_TRUE)
#line 2032 "typecheck.m"
    {
#line 2032 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2032 "typecheck.m"
      {
#line 2032 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2032 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2032 "typecheck.m"
          if ((check_hlds__typecheck__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2032 "typecheck.m"
            {
#line 2033 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_12 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11;
#line 2033 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Specs_10 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_9;
#line 2033 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 2032 "typecheck.m"
            }
#line 2032 "typecheck.m"
          else
#line 2035 "typecheck.m"
            {
#line 2036 "typecheck.m"
              {
#line 2036 "typecheck.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
#line 2036 "typecheck.m"
                return;
              }
#line 2035 "typecheck.m"
            }
#line 2032 "typecheck.m"
        else
#line 2032 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2038 "typecheck.m"
          {
#line 2039 "typecheck.m"
            {
#line 2039 "typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_vars_have_types_in_arg_vector\'/12", (MR_String) "length mismatch");
#line 2039 "typecheck.m"
              return;
            }
#line 2038 "typecheck.m"
          }
#line 2032 "typecheck.m"
        else
#line 2042 "typecheck.m"
          {
#line 2042 "typecheck.m"
            MR_Word check_hlds__typecheck__Type_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__6_6, (MR_Integer) 0)));
#line 2042 "typecheck.m"
            MR_Word check_hlds__typecheck__Types_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__6_6, (MR_Integer) 1)));
#line 2042 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79;
#line 2042 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_80_80;
#line 2042 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81;
#line 2042 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_82_82;
#line 2042 "typecheck.m"
            MR_Word check_hlds__typecheck__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 1)));
#line 2042 "typecheck.m"
            MR_Word check_hlds__typecheck__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 0)));

#line 2043 "typecheck.m"
            {
#line 2043 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_type_in_arg_vector_12_p_0(check_hlds__typecheck__Info_1, check_hlds__typecheck__Context_2, check_hlds__typecheck__ArgVectorKind_3, check_hlds__typecheck__ArgNum_4, check_hlds__typecheck__V_88_88, check_hlds__typecheck__Type_68, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79, check_hlds__typecheck__STATE_VARIABLE_Specs_0_9, &check_hlds__typecheck__STATE_VARIABLE_Specs_80_80, check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11, &check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81);
            }
#line 2046 "typecheck.m"
            check_hlds__typecheck__V_82_82 = (check_hlds__typecheck__ArgNum_4 + (MR_Integer) 1);
#line 2045 "typecheck.m"
            /* direct tailcall eliminated */
#line 2045 "typecheck.m"
            {
#line 2045 "typecheck.m"
              MR_Integer check_hlds__typecheck__ArgNum__tmp_copy_4 = check_hlds__typecheck__V_82_82;
#line 2045 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__5__tmp_copy_5 = check_hlds__typecheck__V_87_87;
#line 2045 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__6__tmp_copy_6 = check_hlds__typecheck__Types_69;
#line 2045 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_79_79;
#line 2045 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_9 = check_hlds__typecheck__STATE_VARIABLE_Specs_80_80;
#line 2045 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0__tmp_copy_11 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_81_81;

#line 2045 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0_11 = check_hlds__typecheck__STATE_VARIABLE_MaybeArgVectorTypeErrors_0__tmp_copy_11;
#line 2045 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_0_9 = check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_9;
#line 2045 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7;
#line 2045 "typecheck.m"
              check_hlds__typecheck__HeadVar__6_6 = check_hlds__typecheck__HeadVar__6__tmp_copy_6;
#line 2045 "typecheck.m"
              check_hlds__typecheck__HeadVar__5_5 = check_hlds__typecheck__HeadVar__5__tmp_copy_5;
#line 2045 "typecheck.m"
              check_hlds__typecheck__ArgNum_4 = check_hlds__typecheck__ArgNum__tmp_copy_4;
#line 2045 "typecheck.m"
            }
#line 2045 "typecheck.m"
            continue;
#line 2042 "typecheck.m"
          }
#line 2032 "typecheck.m"
      }
#line 2032 "typecheck.m"
      break;
#line 2032 "typecheck.m"
    }
#line 2024 "typecheck.m"
}

#line 1924 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
#line 1924 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1924 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1924 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1924 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 1924 "typecheck.m"
{
#line 1927 "typecheck.m"
  while (MR_TRUE)
#line 1927 "typecheck.m"
    {
#line 1927 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1927 "typecheck.m"
      {
#line 1927 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1927 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1927 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__HeadVar__3_3;
#line 1927 "typecheck.m"
        else
#line 1929 "typecheck.m"
          {
#line 1929 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1929 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssignSets_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1929 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 0)));
#line 1929 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 1)));
#line 1929 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 2)));
#line 1929 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;
#line 1929 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_27;

#line 1942 "typecheck.m"
            {
#line 1942 "typecheck.m"
              check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__VarTypes0_27);
            }
#line 1966 "typecheck.m"
            if ((check_hlds__typecheck__ArgTypes0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1967 "typecheck.m"
              {
#line 1968 "typecheck.m"
                {
#line 1968 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.arg_type_assign_var_has_type\'/6", (MR_String) "ArgTypes0 = []");
#line 1968 "typecheck.m"
                  return;
                }
#line 1967 "typecheck.m"
              }
#line 1966 "typecheck.m"
            else
#line 1944 "typecheck.m"
              {
#line 1944 "typecheck.m"
                MR_Word check_hlds__typecheck__Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 0)));
#line 1944 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 1)));
#line 1944 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeOldVarType_30;
#line 1944 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_31;

#line 1945 "typecheck.m"
                {
#line 1945 "typecheck.m"
                  hlds__vartypes__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_28, &check_hlds__typecheck__MaybeOldVarType_30, check_hlds__typecheck__VarTypes0_27, &check_hlds__typecheck__VarTypes_31);
                }
#line 1959 "typecheck.m"
                if ((check_hlds__typecheck__MaybeOldVarType_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1960 "typecheck.m"
                  {
#line 1960 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_35;
#line 1960 "typecheck.m"
                    MR_Word check_hlds__typecheck__NewTypeAssign_41;

#line 1961 "typecheck.m"
                    {
#line 1961 "typecheck.m"
                      check_hlds__type_assign__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_31, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign_35);
                    }
#line 1962 "typecheck.m"
                    {
#line 1962 "typecheck.m"
                      check_hlds__typecheck__NewTypeAssign_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1962 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_35));
#line 1962 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
#line 1962 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
#line 1962 "typecheck.m"
                    }
#line 1964 "typecheck.m"
                    {
#line 1964 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_41));
#line 1964 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
#line 1964 "typecheck.m"
                    }
#line 1960 "typecheck.m"
                  }
#line 1959 "typecheck.m"
                else
#line 1948 "typecheck.m"
                  {
#line 1948 "typecheck.m"
                    MR_Word check_hlds__typecheck__OldVarType_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_30, (MR_Integer) 0)));
#line 1956 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_33;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_46;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_47;
#line 2726 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_48;

#line 2727 "typecheck.m"
                    {
#line 2727 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__HeadTypeParams_46);
                    }
#line 2728 "typecheck.m"
                    {
#line 2728 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeBindings0_47);
                    }
#line 2729 "typecheck.m"
                    {
#line 2729 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_32, check_hlds__typecheck__Type_28, check_hlds__typecheck__HeadTypeParams_46, check_hlds__typecheck__TypeBindings0_47, &check_hlds__typecheck__TypeBindings_48);
                    }
#line 2726 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2726 "typecheck.m"
                      {
#line 2730 "typecheck.m"
                        {
#line 2730 "typecheck.m"
                          check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_48, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign1_33);
                        }
#line 2730 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2726 "typecheck.m"
                      }
#line 1956 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 1954 "typecheck.m"
                      {
#line 1954 "typecheck.m"
                        MR_Word check_hlds__typecheck__NewTypeAssign_34;

#line 1953 "typecheck.m"
                        {
#line 1953 "typecheck.m"
                          check_hlds__typecheck__NewTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1953 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_33));
#line 1953 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
#line 1953 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
#line 1953 "typecheck.m"
                        }
#line 1955 "typecheck.m"
                        {
#line 1955 "typecheck.m"
                          check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_34));
#line 1955 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
#line 1955 "typecheck.m"
                        }
#line 1954 "typecheck.m"
                      }
#line 1956 "typecheck.m"
                    else
#line 1956 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = check_hlds__typecheck__HeadVar__3_3;
#line 1948 "typecheck.m"
                  }
#line 1944 "typecheck.m"
              }
#line 1933 "typecheck.m"
            /* direct tailcall eliminated */
#line 1933 "typecheck.m"
            {
#line 1933 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ArgsTypeAssignSets_10;
#line 1933 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;

#line 1933 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 1933 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1933 "typecheck.m"
            }
#line 1933 "typecheck.m"
            continue;
#line 1929 "typecheck.m"
          }
#line 1927 "typecheck.m"
      }
#line 1927 "typecheck.m"
      break;
#line 1927 "typecheck.m"
    }
#line 1924 "typecheck.m"
}

#line 1908 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__skip_arg_2_p_0(
#line 1908 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1908 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2)
#line 1908 "typecheck.m"
{
#line 1910 "typecheck.m"
  {
#line 1910 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1910 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1910 "typecheck.m"
      *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1910 "typecheck.m"
    else
#line 1912 "typecheck.m"
      {
#line 1912 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssign0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1912 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssigns0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1912 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssign_5;
#line 1912 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssigns_6;
#line 1912 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 0)));
#line 1912 "typecheck.m"
        MR_Word check_hlds__typecheck__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 1)));
#line 1912 "typecheck.m"
        MR_Word check_hlds__typecheck__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 2)));
#line 1912 "typecheck.m"
        MR_Word check_hlds__typecheck__Args_11;

#line 1916 "typecheck.m"
        if ((check_hlds__typecheck__Args0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1917 "typecheck.m"
          {
#line 1919 "typecheck.m"
            {
#line 1919 "typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.skip_arg\'/2", (MR_String) "skip_arg");
#line 1919 "typecheck.m"
              return;
            }
#line 1917 "typecheck.m"
          }
#line 1916 "typecheck.m"
        else
#line 1915 "typecheck.m"
          {
#line 1915 "typecheck.m"
            MR_Word check_hlds__typecheck__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 0)));

#line 1915 "typecheck.m"
            check_hlds__typecheck__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 1)));
#line 1915 "typecheck.m"
          }
#line 1921 "typecheck.m"
        {
#line 1921 "typecheck.m"
          check_hlds__typecheck__ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1921 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_7));
#line 1921 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 1) = ((MR_Box) (check_hlds__typecheck__Args_11));
#line 1921 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_9));
#line 1921 "typecheck.m"
        }
#line 1922 "typecheck.m"
        {
#line 1922 "typecheck.m"
          check_hlds__typecheck__skip_arg_2_p_0(check_hlds__typecheck__ArgTypeAssigns0_4, &check_hlds__typecheck__ArgTypeAssigns_6);
        }
#line 1912 "typecheck.m"
        {
#line 1912 "typecheck.m"
          MR_Word base;
#line 1912 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1912 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 1912 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_5));
#line 1912 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssigns_6));
#line 1912 "typecheck.m"
        }
#line 1912 "typecheck.m"
      }
#line 1910 "typecheck.m"
  }
#line 1908 "typecheck.m"
}

#line 1869 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(
#line 1869 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_1,
#line 1869 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_2,
#line 1869 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1869 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1869 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1869 "typecheck.m"
  MR_Word * check_hlds__typecheck__TypeAssignSet_6,
#line 1869 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1869 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8)
#line 1869 "typecheck.m"
{
#line 1875 "typecheck.m"
  while (MR_TRUE)
#line 1875 "typecheck.m"
    {
#line 1875 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1875 "typecheck.m"
      {
#line 1875 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1875 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1875 "typecheck.m"
          {
#line 1876 "typecheck.m"
            {
#line 1876 "typecheck.m"
              *check_hlds__typecheck__TypeAssignSet_6 = check_hlds__type_assign__convert_args_type_assign_set_check_empty_args_1_f_0(check_hlds__typecheck__HeadVar__5_5);
            }
#line 1875 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_8 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
#line 1875 "typecheck.m"
          }
#line 1875 "typecheck.m"
        else
#line 1879 "typecheck.m"
          {
#line 1879 "typecheck.m"
            MR_Word check_hlds__typecheck__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 1879 "typecheck.m"
            MR_Word check_hlds__typecheck__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
#line 1879 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssignSet1_26;
#line 1879 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_29_29;
#line 1879 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_30_30;
#line 1879 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssignSet1_41;
#line 1904 "typecheck.m"
            MR_Word check_hlds__typecheck__V_42_42;
#line 1904 "typecheck.m"
            MR_Word check_hlds__typecheck__V_43_43;

#line 1893 "typecheck.m"
            {
#line 1893 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(check_hlds__typecheck__HeadVar__5_5, check_hlds__typecheck__Var_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgTypeAssignSet1_41);
            }
#line 1896 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgTypeAssignSet1_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1896 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1896 "typecheck.m"
              {
#line 1897 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__5_5)) == (MR_mktag((MR_Integer) 1)));
#line 1897 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1897 "typecheck.m"
                  {
#line 1897 "typecheck.m"
                    check_hlds__typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 0)));
#line 1897 "typecheck.m"
                    check_hlds__typecheck__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__5_5, (MR_Integer) 1)));
#line 1897 "typecheck.m"
                  }
#line 1896 "typecheck.m"
              }
#line 1904 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1899 "typecheck.m"
              {
#line 1899 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalContext_25;
#line 1899 "typecheck.m"
                MR_Word check_hlds__typecheck__ClauseContext_44;
#line 1899 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_45;
#line 1899 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypeAssign_50;
#line 1899 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypeAssigns_51;
#line 1899 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_52;
#line 1899 "typecheck.m"
                MR_Word check_hlds__typecheck__Args0_53;
#line 1899 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_54;
#line 1899 "typecheck.m"
                MR_Word check_hlds__typecheck__Args_56;

#line 1880 "typecheck.m"
                {
#line 1880 "typecheck.m"
                  check_hlds__typecheck__GoalContext_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1880 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_25, 0) = ((MR_Box) (check_hlds__typecheck__VarVectorKind_1));
#line 1880 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalContext_25, 1) = ((MR_Box) (check_hlds__typecheck__ArgNum_2));
#line 1880 "typecheck.m"
                }
#line 1913 "typecheck.m"
                check_hlds__typecheck__TypeAssign_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_42_42, (MR_Integer) 0)));
#line 1913 "typecheck.m"
                check_hlds__typecheck__Args0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_42_42, (MR_Integer) 1)));
#line 1913 "typecheck.m"
                check_hlds__typecheck__Constraints_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_42_42, (MR_Integer) 2)));
#line 1916 "typecheck.m"
                if ((check_hlds__typecheck__Args0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1917 "typecheck.m"
                  {
#line 1919 "typecheck.m"
                    {
#line 1919 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.skip_arg\'/2", (MR_String) "skip_arg");
#line 1919 "typecheck.m"
                      return;
                    }
#line 1917 "typecheck.m"
                  }
#line 1916 "typecheck.m"
                else
#line 1915 "typecheck.m"
                  {
#line 1915 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_53, (MR_Integer) 0)));

#line 1915 "typecheck.m"
                    check_hlds__typecheck__Args_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_53, (MR_Integer) 1)));
#line 1915 "typecheck.m"
                  }
#line 1921 "typecheck.m"
                {
#line 1921 "typecheck.m"
                  check_hlds__typecheck__ArgTypeAssign_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1921 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_52));
#line 1921 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 1) = ((MR_Box) (check_hlds__typecheck__Args_56));
#line 1921 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_50, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_54));
#line 1921 "typecheck.m"
                }
#line 1922 "typecheck.m"
                {
#line 1922 "typecheck.m"
                  check_hlds__typecheck__skip_arg_2_p_0(check_hlds__typecheck__V_43_43, &check_hlds__typecheck__ArgTypeAssigns_51);
                }
#line 1912 "typecheck.m"
                {
#line 1912 "typecheck.m"
                  check_hlds__typecheck__ArgTypeAssignSet1_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1912 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_26, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_50));
#line 1912 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_26, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssigns_51));
#line 1912 "typecheck.m"
                }
#line 1900 "typecheck.m"
                {
#line 1900 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__ClauseContext_44);
                }
#line 1901 "typecheck.m"
                {
#line 1901 "typecheck.m"
                  check_hlds__typecheck__Spec_45 = check_hlds__typecheck_errors__report_error_arg_var_5_f_0(check_hlds__typecheck__ClauseContext_44, check_hlds__typecheck__GoalContext_25, check_hlds__typecheck__Context_3, check_hlds__typecheck__Var_20, check_hlds__typecheck__HeadVar__5_5);
                }
#line 1903 "typecheck.m"
                {
#line 1903 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_45, check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__STATE_VARIABLE_Info_29_29);
                }
#line 1899 "typecheck.m"
              }
#line 1904 "typecheck.m"
            else
#line 1905 "typecheck.m"
              {
#line 1905 "typecheck.m"
                check_hlds__typecheck__ArgTypeAssignSet1_26 = check_hlds__typecheck__ArgTypeAssignSet1_41;
#line 1905 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_Info_29_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
#line 1905 "typecheck.m"
              }
#line 1883 "typecheck.m"
            check_hlds__typecheck__V_30_30 = (check_hlds__typecheck__ArgNum_2 + (MR_Integer) 1);
#line 1883 "typecheck.m"
            /* direct tailcall eliminated */
#line 1883 "typecheck.m"
            {
#line 1883 "typecheck.m"
              MR_Integer check_hlds__typecheck__ArgNum__tmp_copy_2 = check_hlds__typecheck__V_30_30;
#line 1883 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__4__tmp_copy_4 = check_hlds__typecheck__Vars_21;
#line 1883 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__5__tmp_copy_5 = check_hlds__typecheck__ArgTypeAssignSet1_26;
#line 1883 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_Info_29_29;

#line 1883 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_0_7 = check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 1883 "typecheck.m"
              check_hlds__typecheck__HeadVar__5_5 = check_hlds__typecheck__HeadVar__5__tmp_copy_5;
#line 1883 "typecheck.m"
              check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__HeadVar__4__tmp_copy_4;
#line 1883 "typecheck.m"
              check_hlds__typecheck__ArgNum_2 = check_hlds__typecheck__ArgNum__tmp_copy_2;
#line 1883 "typecheck.m"
            }
#line 1883 "typecheck.m"
            continue;
#line 1879 "typecheck.m"
          }
#line 1875 "typecheck.m"
      }
#line 1875 "typecheck.m"
      break;
#line 1875 "typecheck.m"
    }
#line 1869 "typecheck.m"
}

#line 1826 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__PredExistQVars_3,
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__PredArgTypes_4,
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__PredConstraints_5,
#line 1826 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
#line 1826 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7)
#line 1826 "typecheck.m"
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
          *check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6;
#line 1830 "typecheck.m"
        else
#line 1832 "typecheck.m"
          {
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_22;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentArgTypes_23;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__Renaming_24;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentExistQVars_25;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentConstraints_26;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypeParams0_27;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypeParams_28;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_29;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__NewArgTypeAssign_30;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet0_42;
#line 1832 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet_43;

#line 1861 "typecheck.m"
            {
#line 1861 "typecheck.m"
              check_hlds__type_assign__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeVarSet0_42);
            }
#line 1862 "typecheck.m"
            {
#line 1862 "typecheck.m"
              parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_42, check_hlds__typecheck__PredTypeVarSet_2, &check_hlds__typecheck__TypeVarSet_43, &check_hlds__typecheck__Renaming_24);
            }
#line 1863 "typecheck.m"
            {
#line 1863 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredArgTypes_4, &check_hlds__typecheck__ParentArgTypes_23);
            }
#line 1865 "typecheck.m"
            {
#line 1865 "typecheck.m"
              check_hlds__type_assign__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_43, check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeAssign1_22);
            }
#line 1836 "typecheck.m"
            {
#line 1836 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredExistQVars_3, &check_hlds__typecheck__ParentExistQVars_25);
            }
#line 1838 "typecheck.m"
            {
#line 1838 "typecheck.m"
              check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredConstraints_5, &check_hlds__typecheck__ParentConstraints_26);
            }
#line 1844 "typecheck.m"
            {
#line 1844 "typecheck.m"
              check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__HeadTypeParams0_27);
            }
#line 1845 "typecheck.m"
            {
#line 1845 "typecheck.m"
              mercury__list__append_3_p_1((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ParentExistQVars_25, check_hlds__typecheck__HeadTypeParams0_27, &check_hlds__typecheck__HeadTypeParams_28);
            }
#line 1846 "typecheck.m"
            {
#line 1846 "typecheck.m"
              check_hlds__type_assign__type_assign_set_head_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_28, check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__TypeAssign_29);
            }
#line 1849 "typecheck.m"
            {
#line 1849 "typecheck.m"
              check_hlds__typecheck__NewArgTypeAssign_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1849 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_29));
#line 1849 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 1) = ((MR_Box) (check_hlds__typecheck__ParentArgTypes_23));
#line 1849 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 2) = ((MR_Box) (check_hlds__typecheck__ParentConstraints_26));
#line 1849 "typecheck.m"
            }
#line 1851 "typecheck.m"
            {
#line 1851 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 0) = ((MR_Box) (check_hlds__typecheck__NewArgTypeAssign_30));
#line 1851 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6));
#line 1851 "typecheck.m"
            }
#line 1852 "typecheck.m"
            /* direct tailcall eliminated */
#line 1852 "typecheck.m"
            {
#line 1852 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_16;
#line 1852 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;

#line 1852 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0__tmp_copy_6;
#line 1852 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1852 "typecheck.m"
            }
#line 1852 "typecheck.m"
            continue;
#line 1832 "typecheck.m"
          }
#line 1830 "typecheck.m"
      }
#line 1830 "typecheck.m"
      break;
#line 1830 "typecheck.m"
    }
#line 1826 "typecheck.m"
}

#line 1782 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1782 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
#line 1782 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7)
#line 1782 "typecheck.m"
{
#line 1786 "typecheck.m"
  while (MR_TRUE)
#line 1786 "typecheck.m"
    {
#line 1786 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1786 "typecheck.m"
      {
#line 1786 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1786 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1787 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6;
#line 1786 "typecheck.m"
        else
#line 1789 "typecheck.m"
          {
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_22;
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_23;
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_24;
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__PredArgTypes_25;
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_26;
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__TVarSet_27;
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__PredConstraints_28;
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;
#line 1790 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_22;

#line 1790 "typecheck.m"
            {
#line 1790 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__HeadVar__2_2, ((MR_Box) (check_hlds__typecheck__PredId_15)), &check_hlds__typecheck__conv0_PredInfo_22);
            }
#line 1790 "typecheck.m"
            check_hlds__typecheck__PredInfo_22 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_22);
#line 1791 "typecheck.m"
            {
#line 1791 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredTypeVarSet_23, &check_hlds__typecheck__PredExistQVars_24, &check_hlds__typecheck__PredArgTypes_25);
            }
#line 1793 "typecheck.m"
            {
#line 1793 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredClassContext_26);
            }
#line 1794 "typecheck.m"
            {
#line 1794 "typecheck.m"
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__TVarSet_27);
            }
#line 1795 "typecheck.m"
            {
#line 1795 "typecheck.m"
              hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__TVarSet_27, check_hlds__typecheck__HeadVar__4_4, check_hlds__typecheck__PredClassContext_26, &check_hlds__typecheck__PredConstraints_28);
            }
#line 1797 "typecheck.m"
            {
#line 1797 "typecheck.m"
              check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__HeadVar__5_5, check_hlds__typecheck__PredTypeVarSet_23, check_hlds__typecheck__PredExistQVars_24, check_hlds__typecheck__PredArgTypes_25, check_hlds__typecheck__PredConstraints_28, check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6, &check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31);
            }
#line 1799 "typecheck.m"
            /* direct tailcall eliminated */
#line 1799 "typecheck.m"
            {
#line 1799 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__PredIds_16;
#line 1799 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;

#line 1799 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_6;
#line 1799 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1799 "typecheck.m"
            }
#line 1799 "typecheck.m"
            continue;
#line 1789 "typecheck.m"
          }
#line 1786 "typecheck.m"
      }
#line 1786 "typecheck.m"
      break;
#line 1786 "typecheck.m"
    }
#line 1782 "typecheck.m"
}

#line 2021 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0_1(
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2021 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2021 "typecheck.m"
{
#line 2021 "typecheck.m"
  {
#line 2021 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2021 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_HeadVar__3_3;

#line 2021 "typecheck.m"
    {
#line 2021 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv1_HeadVar__3_3);
    }
#line 2021 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv1_HeadVar__3_3));
#line 2021 "typecheck.m"
  }
#line 2021 "typecheck.m"
}

#line 1722 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_9_p_0(
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVectorKind_10,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_13,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27,
#line 1722 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28,
#line 1722 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_29,
#line 1722 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_30)
#line 1722 "typecheck.m"
{
#line 1728 "typecheck.m"
  {
#line 1728 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1728 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_17;
#line 1728 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_18;
#line 1728 "typecheck.m"
    MR_Word check_hlds__typecheck__Preds_19;
#line 1728 "typecheck.m"
    MR_Word check_hlds__typecheck__PredInfo_20;
#line 1728 "typecheck.m"
    MR_Word check_hlds__typecheck__PredTypeVarSet_21;
#line 1728 "typecheck.m"
    MR_Word check_hlds__typecheck__PredExistQVars_22;
#line 1728 "typecheck.m"
    MR_Word check_hlds__typecheck__PredArgTypes_23;
#line 1728 "typecheck.m"
    MR_Word check_hlds__typecheck__PredClassContext_24;
#line 1732 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_PredInfo_20;
#line 1742 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 1742 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32;

#line 1729 "typecheck.m"
    {
#line 1729 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, &check_hlds__typecheck__ModuleInfo_17);
    }
#line 1730 "typecheck.m"
    {
#line 1730 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__PredicateTable_18);
    }
#line 1731 "typecheck.m"
    {
#line 1731 "typecheck.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_18, &check_hlds__typecheck__Preds_19);
    }
#line 1732 "typecheck.m"
    {
#line 1732 "typecheck.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_19, ((MR_Box) (check_hlds__typecheck__PredId_13)), &check_hlds__typecheck__conv0_PredInfo_20);
    }
#line 1732 "typecheck.m"
    check_hlds__typecheck__PredInfo_20 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_20);
#line 1733 "typecheck.m"
    {
#line 1733 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_20, &check_hlds__typecheck__PredTypeVarSet_21, &check_hlds__typecheck__PredExistQVars_22, &check_hlds__typecheck__PredArgTypes_23);
    }
#line 1735 "typecheck.m"
    {
#line 1735 "typecheck.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_20, &check_hlds__typecheck__PredClassContext_24);
    }
#line 1742 "typecheck.m"
    {
#line 1742 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__PredTypeVarSet_21);
    }
#line 1742 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1742 "typecheck.m"
      {
#line 1743 "typecheck.m"
        check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_24, (MR_Integer) 0)));
#line 1743 "typecheck.m"
        check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_24, (MR_Integer) 1)));
#line 1743 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_31_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1742 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1743 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1742 "typecheck.m"
      }
#line 1747 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2008 "typecheck.m"
      {
#line 2008 "typecheck.m"
        MR_Word check_hlds__typecheck__Specs_51;
#line 2008 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_52;
#line 2020 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgVectorTypeErrors_53;
#line 2013 "typecheck.m"
        MR_Word check_hlds__typecheck__V_64_64;
#line 2014 "typecheck.m"
        MR_Word check_hlds__typecheck__V_54_54;
#line 2014 "typecheck.m"
        MR_Word check_hlds__typecheck__V_55_55;
#line 2014 "typecheck.m"
        MR_Word check_hlds__typecheck__V_56_56;

#line 2009 "typecheck.m"
        {
#line 2009 "typecheck.m"
          check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__Context_11, check_hlds__typecheck__ArgVectorKind_10, (MR_Integer) 1, check_hlds__typecheck__Args_14, check_hlds__typecheck__PredArgTypes_23, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_51, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_7[0]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_52);
        }
#line 2013 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_52)) == (MR_mktag((MR_Integer) 1)));
#line 2013 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2013 "typecheck.m"
          {
#line 2013 "typecheck.m"
            check_hlds__typecheck__ArgVectorTypeErrors_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_52, (MR_Integer) 0)));
#line 2014 "typecheck.m"
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_53)) == (MR_mktag((MR_Integer) 1)));
#line 2014 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2014 "typecheck.m"
              {
#line 2014 "typecheck.m"
                check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_53, (MR_Integer) 0)));
#line 2014 "typecheck.m"
                check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_53, (MR_Integer) 1)));
#line 2014 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 2014 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2014 "typecheck.m"
                  {
#line 2014 "typecheck.m"
                    check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, (MR_Integer) 0)));
#line 2014 "typecheck.m"
                    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, (MR_Integer) 1)));
#line 2014 "typecheck.m"
                  }
#line 2014 "typecheck.m"
              }
#line 2013 "typecheck.m"
          }
#line 2020 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2016 "typecheck.m"
          {
#line 2016 "typecheck.m"
            MR_Word check_hlds__typecheck__ClauseContext_57;
#line 2016 "typecheck.m"
            MR_Word check_hlds__typecheck__AllArgsSpec_58;

#line 2016 "typecheck.m"
            {
#line 2016 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_29, &check_hlds__typecheck__ClauseContext_57);
            }
#line 2017 "typecheck.m"
            {
#line 2017 "typecheck.m"
              check_hlds__typecheck__AllArgsSpec_58 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_57, check_hlds__typecheck__Context_11, check_hlds__typecheck__ArgVectorKind_10, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, check_hlds__typecheck__ArgVectorTypeErrors_53);
            }
#line 2019 "typecheck.m"
            {
#line 2019 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_58, check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__STATE_VARIABLE_Info_30);
#line 2019 "typecheck.m"
              return;
            }
#line 2016 "typecheck.m"
          }
#line 2020 "typecheck.m"
        else
#line 2021 "typecheck.m"
          {
#line 2021 "typecheck.m"
            MR_Box check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30;

#line 2021 "typecheck.m"
            {
#line 2021 "typecheck.m"
              mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[4], check_hlds__typecheck__Specs_51, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_29)), &check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30);
            }
#line 2021 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_30 = ((MR_Word) check_hlds__typecheck__conv2_STATE_VARIABLE_Info_30);
#line 2021 "typecheck.m"
          }
#line 2008 "typecheck.m"
      }
#line 1747 "typecheck.m"
    else
#line 1748 "typecheck.m"
      {
#line 1748 "typecheck.m"
        MR_Word check_hlds__typecheck__ClassTable_25;
#line 1748 "typecheck.m"
        MR_Word check_hlds__typecheck__PredConstraints_26;
#line 1748 "typecheck.m"
        MR_Word check_hlds__typecheck__V_35_35;
#line 1748 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_85;

#line 1748 "typecheck.m"
        {
#line 1748 "typecheck.m"
          hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__ClassTable_25);
        }
#line 1749 "typecheck.m"
        {
#line 1749 "typecheck.m"
          hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_25, check_hlds__typecheck__PredTypeVarSet_21, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__PredClassContext_24, &check_hlds__typecheck__PredConstraints_26);
        }
#line 1751 "typecheck.m"
        {
#line 1751 "typecheck.m"
          check_hlds__typecheck__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1751 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_35_35, 0) = ((MR_Box) (check_hlds__typecheck__ArgVectorKind_10));
#line 1751 "typecheck.m"
        }
#line 1821 "typecheck.m"
        {
#line 1821 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_27, check_hlds__typecheck__PredTypeVarSet_21, check_hlds__typecheck__PredExistQVars_22, check_hlds__typecheck__PredArgTypes_23, check_hlds__typecheck__PredConstraints_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_85);
        }
#line 1823 "typecheck.m"
        {
#line 1823 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__V_35_35, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__Args_14, check_hlds__typecheck__ArgsTypeAssignSet_85, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28, check_hlds__typecheck__STATE_VARIABLE_Info_0_29, check_hlds__typecheck__STATE_VARIABLE_Info_30);
#line 1823 "typecheck.m"
          return;
        }
#line 1748 "typecheck.m"
      }
#line 1728 "typecheck.m"
  }
#line 1722 "typecheck.m"
}

#line 1668 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_name_9_p_0(
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__SimpleCallId_10,
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_12,
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_13,
#line 1668 "typecheck.m"
  MR_Word * check_hlds__typecheck__PredId_14,
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31,
#line 1668 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32,
#line 1668 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_33,
#line 1668 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_34)
#line 1668 "typecheck.m"
{
#line 1674 "typecheck.m"
  {
#line 1674 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1674 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_17;
#line 1674 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_18;
#line 1674 "typecheck.m"
    MR_Word check_hlds__typecheck__PorF_19;
#line 1674 "typecheck.m"
    MR_Word check_hlds__typecheck__SymName_20;
#line 1674 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity_21;
#line 1674 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFullyQualified_22;
#line 1674 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIds_23;

#line 1676 "typecheck.m"
    {
#line 1676 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__ModuleInfo_17);
    }
#line 1677 "typecheck.m"
    {
#line 1677 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_17, &check_hlds__typecheck__PredicateTable_18);
    }
#line 1678 "typecheck.m"
    check_hlds__typecheck__PorF_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 0)));
#line 1678 "typecheck.m"
    check_hlds__typecheck__SymName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 1)));
#line 1678 "typecheck.m"
    check_hlds__typecheck__Arity_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_10, (MR_Integer) 2)));
#line 1679 "typecheck.m"
    {
#line 1679 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_calls_are_fully_qualified_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__IsFullyQualified_22);
    }
#line 1680 "typecheck.m"
    {
#line 1680 "typecheck.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(check_hlds__typecheck__PredicateTable_18, check_hlds__typecheck__IsFullyQualified_22, check_hlds__typecheck__PorF_19, check_hlds__typecheck__SymName_20, check_hlds__typecheck__Arity_21, &check_hlds__typecheck__PredIds_23);
    }
#line 1688 "typecheck.m"
    if ((check_hlds__typecheck__PredIds_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1683 "typecheck.m"
      {
#line 1683 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_24;
#line 1683 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_25;

#line 1684 "typecheck.m"
        {
#line 1684 "typecheck.m"
          *check_hlds__typecheck__PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 1685 "typecheck.m"
        {
#line 1685 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__ClauseContext_24);
        }
#line 1686 "typecheck.m"
        {
#line 1686 "typecheck.m"
          check_hlds__typecheck__Spec_25 = check_hlds__typecheck_errors__report_pred_call_error_3_f_0(check_hlds__typecheck__ClauseContext_24, check_hlds__typecheck__Context_11, check_hlds__typecheck__SimpleCallId_10);
        }
#line 1687 "typecheck.m"
        {
#line 1687 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_25, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, check_hlds__typecheck__STATE_VARIABLE_Info_34);
        }
#line 1683 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31;
#line 1683 "typecheck.m"
      }
#line 1688 "typecheck.m"
    else
#line 1689 "typecheck.m"
      {
#line 1689 "typecheck.m"
        MR_Word check_hlds__typecheck__HeadPredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 0)));
#line 1689 "typecheck.m"
        MR_Word check_hlds__typecheck__TailPredIds_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 1)));
#line 1689 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37;
#line 1689 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_38_38;

#line 1699 "typecheck.m"
        if ((check_hlds__typecheck__TailPredIds_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1691 "typecheck.m"
          {
#line 1691 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorKind_28;

#line 1695 "typecheck.m"
            *check_hlds__typecheck__PredId_14 = check_hlds__typecheck__HeadPredId_26;
#line 1696 "typecheck.m"
            {
#line 1696 "typecheck.m"
              check_hlds__typecheck__ArgVectorKind_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorKind_28, 0) = ((MR_Box) (*check_hlds__typecheck__PredId_14));
#line 1696 "typecheck.m"
            }
#line 1697 "typecheck.m"
            {
#line 1697 "typecheck.m"
              check_hlds__typecheck__typecheck_call_pred_id_9_p_0(check_hlds__typecheck__ArgVectorKind_28, check_hlds__typecheck__Context_11, check_hlds__typecheck__GoalId_12, *check_hlds__typecheck__PredId_14, check_hlds__typecheck__Args_13, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
            }
#line 1691 "typecheck.m"
          }
#line 1699 "typecheck.m"
        else
#line 1700 "typecheck.m"
          {
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__Symbol_52;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__ModuleInfo_53;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassTable_54;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__PredicateTable_55;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__Preds_56;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssignSet_57;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__VarVectorKind_58;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_59;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__V_61_61;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_71;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_72;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_78;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_79;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_80;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__PredArgTypes_81;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_82;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__TVarSet_83;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__PredConstraints_84;
#line 1700 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87;
#line 1790 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_78;

#line 1763 "typecheck.m"
            {
#line 1763 "typecheck.m"
              check_hlds__typecheck__Symbol_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1763 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_52, 0) = ((MR_Box) (check_hlds__typecheck__SimpleCallId_10));
#line 1763 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_52, 1) = ((MR_Box) (check_hlds__typecheck__PredIds_23));
#line 1763 "typecheck.m"
            }
#line 1764 "typecheck.m"
            {
#line 1764 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_52, check_hlds__typecheck__Context_11, check_hlds__typecheck__STATE_VARIABLE_Info_0_33, &check_hlds__typecheck__STATE_VARIABLE_Info_27_59);
            }
#line 1769 "typecheck.m"
            {
#line 1769 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_27_59, &check_hlds__typecheck__ModuleInfo_53);
            }
#line 1770 "typecheck.m"
            {
#line 1770 "typecheck.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_53, &check_hlds__typecheck__ClassTable_54);
            }
#line 1771 "typecheck.m"
            {
#line 1771 "typecheck.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_53, &check_hlds__typecheck__PredicateTable_55);
            }
#line 1772 "typecheck.m"
            {
#line 1772 "typecheck.m"
              hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_55, &check_hlds__typecheck__Preds_56);
            }
#line 1788 "typecheck.m"
            check_hlds__typecheck__PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 0)));
#line 1788 "typecheck.m"
            check_hlds__typecheck__PredIds_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_23, (MR_Integer) 1)));
#line 1790 "typecheck.m"
            {
#line 1790 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_56, ((MR_Box) (check_hlds__typecheck__PredId_71)), &check_hlds__typecheck__conv0_PredInfo_78);
            }
#line 1790 "typecheck.m"
            check_hlds__typecheck__PredInfo_78 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_78);
#line 1791 "typecheck.m"
            {
#line 1791 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__PredTypeVarSet_79, &check_hlds__typecheck__PredExistQVars_80, &check_hlds__typecheck__PredArgTypes_81);
            }
#line 1793 "typecheck.m"
            {
#line 1793 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__PredClassContext_82);
            }
#line 1794 "typecheck.m"
            {
#line 1794 "typecheck.m"
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__PredInfo_78, &check_hlds__typecheck__TVarSet_83);
            }
#line 1795 "typecheck.m"
            {
#line 1795 "typecheck.m"
              hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_54, check_hlds__typecheck__TVarSet_83, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__PredClassContext_82, &check_hlds__typecheck__PredConstraints_84);
            }
#line 1797 "typecheck.m"
            {
#line 1797 "typecheck.m"
              check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, check_hlds__typecheck__PredTypeVarSet_79, check_hlds__typecheck__PredExistQVars_80, check_hlds__typecheck__PredArgTypes_81, check_hlds__typecheck__PredConstraints_84, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87);
            }
#line 1799 "typecheck.m"
            {
#line 1799 "typecheck.m"
              check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(check_hlds__typecheck__PredIds_72, check_hlds__typecheck__Preds_56, check_hlds__typecheck__ClassTable_54, check_hlds__typecheck__GoalId_12, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_31, check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_87, &check_hlds__typecheck__ArgsTypeAssignSet_57);
            }
#line 1778 "typecheck.m"
            {
#line 1778 "typecheck.m"
              check_hlds__typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1778 "typecheck.m"
              MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck__SimpleCallId_10));
#line 1778 "typecheck.m"
            }
#line 1778 "typecheck.m"
            {
#line 1778 "typecheck.m"
              check_hlds__typecheck__VarVectorKind_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1778 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__VarVectorKind_58, 0) = ((MR_Box) (check_hlds__typecheck__V_61_61));
#line 1778 "typecheck.m"
            }
#line 1779 "typecheck.m"
            {
#line 1779 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_58, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__Args_13, check_hlds__typecheck__ArgsTypeAssignSet_57, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_Info_27_59, &check_hlds__typecheck__STATE_VARIABLE_Info_38_38);
            }
#line 1710 "typecheck.m"
            {
#line 1710 "typecheck.m"
              *check_hlds__typecheck__PredId_14 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 1700 "typecheck.m"
          }
#line 1717 "typecheck.m"
        {
#line 1717 "typecheck.m"
          check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_11, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_37_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_32, check_hlds__typecheck__STATE_VARIABLE_Info_38_38, check_hlds__typecheck__STATE_VARIABLE_Info_34);
#line 1717 "typecheck.m"
          return;
        }
#line 1689 "typecheck.m"
      }
#line 1674 "typecheck.m"
  }
#line 1668 "typecheck.m"
}

#line 2021 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0_1(
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2021 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2021 "typecheck.m"
{
#line 2021 "typecheck.m"
  {
#line 2021 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2021 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__3_3;

#line 2021 "typecheck.m"
    {
#line 2021 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_HeadVar__3_3);
    }
#line 2021 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__3_3));
#line 2021 "typecheck.m"
  }
#line 2021 "typecheck.m"
}

#line 1641 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_7_p_0(
#line 1641 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_8,
#line 1641 "typecheck.m"
  MR_String check_hlds__typecheck__EventName_9,
#line 1641 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_10,
#line 1641 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1641 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1641 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1641 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 1641 "typecheck.m"
{
#line 1645 "typecheck.m"
  {
#line 1645 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1645 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_13;
#line 1645 "typecheck.m"
    MR_Word check_hlds__typecheck__EventSet_14;
#line 1645 "typecheck.m"
    MR_Word check_hlds__typecheck__EventSpecMap_15;
#line 1648 "typecheck.m"
    MR_String check_hlds__typecheck__V_30_30;
#line 1661 "typecheck.m"
    MR_Word check_hlds__typecheck__EventArgTypes_16;

#line 1646 "typecheck.m"
    {
#line 1646 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_module_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ModuleInfo_13);
    }
#line 1647 "typecheck.m"
    {
#line 1647 "typecheck.m"
      hlds__hlds_module__module_info_get_event_set_2_p_0(check_hlds__typecheck__ModuleInfo_13, &check_hlds__typecheck__EventSet_14);
    }
#line 1648 "typecheck.m"
    check_hlds__typecheck__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_14, (MR_Integer) 0)));
#line 1648 "typecheck.m"
    check_hlds__typecheck__EventSpecMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_14, (MR_Integer) 1)));
#line 1649 "typecheck.m"
    {
#line 1649 "typecheck.m"
      check_hlds__typecheck__succeeded = parse_tree__prog_event__event_arg_types_3_p_0(check_hlds__typecheck__EventSpecMap_15, check_hlds__typecheck__EventName_9, &check_hlds__typecheck__EventArgTypes_16);
    }
#line 1661 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1650 "typecheck.m"
      {
#line 1650 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumArgs_17;
#line 1650 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumEventArgTypes_18;

#line 1650 "typecheck.m"
        {
#line 1650 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_10, &check_hlds__typecheck__NumArgs_17);
        }
#line 1651 "typecheck.m"
        {
#line 1651 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__EventArgTypes_16, &check_hlds__typecheck__NumEventArgTypes_18);
        }
#line 1652 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumArgs_17 == check_hlds__typecheck__NumEventArgTypes_18);
#line 1656 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1653 "typecheck.m"
          {
#line 1653 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorKind_19;
#line 1653 "typecheck.m"
            MR_Word check_hlds__typecheck__Specs_43;
#line 1653 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_44;
#line 2020 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVectorTypeErrors_45;
#line 2013 "typecheck.m"
            MR_Word check_hlds__typecheck__V_56_56;
#line 2014 "typecheck.m"
            MR_Word check_hlds__typecheck__V_46_46;
#line 2014 "typecheck.m"
            MR_Word check_hlds__typecheck__V_47_47;
#line 2014 "typecheck.m"
            MR_Word check_hlds__typecheck__V_48_48;

#line 1653 "typecheck.m"
            {
#line 1653 "typecheck.m"
              check_hlds__typecheck__ArgVectorKind_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1653 "typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1653 "typecheck.m"
              MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_19, 1) = ((MR_Box) (check_hlds__typecheck__EventName_9));
#line 1653 "typecheck.m"
            }
#line 2009 "typecheck.m"
            {
#line 2009 "typecheck.m"
              check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__Context_8, check_hlds__typecheck__ArgVectorKind_19, (MR_Integer) 1, check_hlds__typecheck__Args_10, check_hlds__typecheck__EventArgTypes_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_43, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_7[0]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_44);
            }
#line 2013 "typecheck.m"
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_44)) == (MR_mktag((MR_Integer) 1)));
#line 2013 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2013 "typecheck.m"
              {
#line 2013 "typecheck.m"
                check_hlds__typecheck__ArgVectorTypeErrors_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_44, (MR_Integer) 0)));
#line 2014 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_45)) == (MR_mktag((MR_Integer) 1)));
#line 2014 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2014 "typecheck.m"
                  {
#line 2014 "typecheck.m"
                    check_hlds__typecheck__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_45, (MR_Integer) 0)));
#line 2014 "typecheck.m"
                    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_45, (MR_Integer) 1)));
#line 2014 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_56_56)) == (MR_mktag((MR_Integer) 1)));
#line 2014 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2014 "typecheck.m"
                      {
#line 2014 "typecheck.m"
                        check_hlds__typecheck__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_56_56, (MR_Integer) 0)));
#line 2014 "typecheck.m"
                        check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_56_56, (MR_Integer) 1)));
#line 2014 "typecheck.m"
                      }
#line 2014 "typecheck.m"
                  }
#line 2013 "typecheck.m"
              }
#line 2020 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2016 "typecheck.m"
              {
#line 2016 "typecheck.m"
                MR_Word check_hlds__typecheck__ClauseContext_49;
#line 2016 "typecheck.m"
                MR_Word check_hlds__typecheck__AllArgsSpec_50;

#line 2016 "typecheck.m"
                {
#line 2016 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ClauseContext_49);
                }
#line 2017 "typecheck.m"
                {
#line 2017 "typecheck.m"
                  check_hlds__typecheck__AllArgsSpec_50 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_49, check_hlds__typecheck__Context_8, check_hlds__typecheck__ArgVectorKind_19, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, check_hlds__typecheck__ArgVectorTypeErrors_45);
                }
#line 2019 "typecheck.m"
                {
#line 2019 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_50, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
#line 2019 "typecheck.m"
                  return;
                }
#line 2016 "typecheck.m"
              }
#line 2020 "typecheck.m"
            else
#line 2021 "typecheck.m"
              {
#line 2021 "typecheck.m"
                MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24;

#line 2021 "typecheck.m"
                {
#line 2021 "typecheck.m"
                  mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[3], check_hlds__typecheck__Specs_43, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_23)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24);
                }
#line 2021 "typecheck.m"
                *check_hlds__typecheck__STATE_VARIABLE_Info_24 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_24);
#line 2021 "typecheck.m"
              }
#line 1653 "typecheck.m"
          }
#line 1656 "typecheck.m"
        else
#line 1658 "typecheck.m"
          {
#line 1658 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_20;

#line 1657 "typecheck.m"
            {
#line 1657 "typecheck.m"
              check_hlds__typecheck__Spec_20 = check_hlds__typecheck_errors__report_event_args_mismatch_4_f_0(check_hlds__typecheck__Context_8, check_hlds__typecheck__EventName_9, check_hlds__typecheck__EventArgTypes_16, check_hlds__typecheck__Args_10);
            }
#line 1659 "typecheck.m"
            {
#line 1659 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_20, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
            }
#line 1658 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
#line 1658 "typecheck.m"
          }
#line 1650 "typecheck.m"
      }
#line 1661 "typecheck.m"
    else
#line 1662 "typecheck.m"
      {
#line 1662 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_29;

#line 1662 "typecheck.m"
        {
#line 1662 "typecheck.m"
          check_hlds__typecheck__Spec_29 = check_hlds__typecheck_errors__report_unknown_event_call_error_2_f_0(check_hlds__typecheck__Context_8, check_hlds__typecheck__EventName_9);
        }
#line 1663 "typecheck.m"
        {
#line 1663 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
        }
#line 1662 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
#line 1662 "typecheck.m"
      }
#line 1645 "typecheck.m"
  }
#line 1641 "typecheck.m"
}

#line 1579 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_9_p_0(
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__GenericCallId_10,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_11,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__PredVar_12,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_13,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_14,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1579 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1579 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1579 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27)
#line 1579 "typecheck.m"
{
#line 1585 "typecheck.m"
  {
#line 1585 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_45;
#line 1585 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity_17;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_18;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__PredVarType_19;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_20;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__VarVectorKind_21;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_22;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__V_29_29;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_41;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_42;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__V_43_43;
#line 1585 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgsTypeAssignSet_60;

#line 1586 "typecheck.m"
    {
#line 1586 "typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_14, &check_hlds__typecheck__Arity_17);
    }
#line 1587 "typecheck.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 12613 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_17_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1610 "typecheck.m"
    {
#line 1610 "typecheck.m"
      mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_17_45, &check_hlds__typecheck__TypeVarSet0_41);
    }
#line 1611 "typecheck.m"
    {
#line 1611 "typecheck.m"
      mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_17_45, check_hlds__typecheck__Arity_17, &check_hlds__typecheck__ArgTypeVars_42, check_hlds__typecheck__TypeVarSet0_41, &check_hlds__typecheck__TypeVarSet_18);
    }
#line 1613 "typecheck.m"
    {
#line 1613 "typecheck.m"
      check_hlds__typecheck__V_43_43 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 1613 "typecheck.m"
    {
#line 1613 "typecheck.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_43_43, check_hlds__typecheck__ArgTypeVars_42, &check_hlds__typecheck__ArgTypes_20);
    }
#line 1614 "typecheck.m"
    {
#line 1614 "typecheck.m"
      parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_13, (MR_Integer) 0, check_hlds__typecheck__ArgTypes_20, &check_hlds__typecheck__PredVarType_19);
    }
#line 1589 "typecheck.m"
    {
#line 1589 "typecheck.m"
      check_hlds__typecheck__V_29_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_29_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1589 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_29_29, 1) = ((MR_Box) (check_hlds__typecheck__GenericCallId_10));
#line 1589 "typecheck.m"
    }
#line 1589 "typecheck.m"
    {
#line 1589 "typecheck.m"
      check_hlds__typecheck__VarVectorKind_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1589 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__VarVectorKind_21, 0) = ((MR_Box) (check_hlds__typecheck__V_29_29));
#line 1589 "typecheck.m"
    }
#line 1592 "typecheck.m"
    {
#line 1592 "typecheck.m"
      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_22);
    }
#line 1595 "typecheck.m"
    {
#line 1595 "typecheck.m"
      check_hlds__typecheck__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_30_30, 0) = ((MR_Box) (check_hlds__typecheck__PredVar_12));
#line 1595 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_30_30, 1) = ((MR_Box) (check_hlds__typecheck__Args_14));
#line 1595 "typecheck.m"
    }
#line 1595 "typecheck.m"
    {
#line 1595 "typecheck.m"
      check_hlds__typecheck__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_31_31, 0) = ((MR_Box) (check_hlds__typecheck__PredVarType_19));
#line 1595 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_31_31, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_20));
#line 1595 "typecheck.m"
    }
#line 1821 "typecheck.m"
    {
#line 1821 "typecheck.m"
      check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24, check_hlds__typecheck__TypeVarSet_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__V_31_31, check_hlds__typecheck__EmptyConstraints_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_60);
    }
#line 1823 "typecheck.m"
    {
#line 1823 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_21, (MR_Integer) 1, check_hlds__typecheck__Context_11, check_hlds__typecheck__V_30_30, check_hlds__typecheck__ArgsTypeAssignSet_60, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__STATE_VARIABLE_Info_27);
#line 1823 "typecheck.m"
      return;
    }
#line 1585 "typecheck.m"
  }
#line 1579 "typecheck.m"
}

#line 1553 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0(
#line 1553 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1553 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1553 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1553 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22,
#line 1553 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23,
#line 1553 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_24,
#line 1553 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_25)
#line 1553 "typecheck.m"
{
#line 1560 "typecheck.m"
  {
#line 1560 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1560 "typecheck.m"
    if ((check_hlds__typecheck__Vars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1560 "typecheck.m"
      {
#line 1560 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22;
#line 1560 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_25 = check_hlds__typecheck__STATE_VARIABLE_Info_0_24;
#line 1560 "typecheck.m"
      }
#line 1560 "typecheck.m"
    else
#line 1562 "typecheck.m"
      {
#line 1562 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1562 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet0_15;
#line 1562 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVar_16;
#line 1562 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet_17;
#line 1562 "typecheck.m"
        MR_Word check_hlds__typecheck__Type_18;
#line 1562 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumVars_19;
#line 1562 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_20;
#line 1562 "typecheck.m"
        MR_Word check_hlds__typecheck__EmptyConstraints_21;
#line 1562 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_45;

#line 1566 "typecheck.m"
        {
#line 1566 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVarSet0_15);
        }
#line 1567 "typecheck.m"
        {
#line 1567 "typecheck.m"
          mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
        }
#line 1568 "typecheck.m"
        {
#line 1568 "typecheck.m"
          check_hlds__typecheck__Type_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1568 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
#line 1568 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1568 "typecheck.m"
        }
#line 1569 "typecheck.m"
        {
#line 1569 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_10, &check_hlds__typecheck__NumVars_19);
        }
#line 1570 "typecheck.m"
        {
#line 1570 "typecheck.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__NumVars_19, ((MR_Box) (check_hlds__typecheck__Type_18)), &check_hlds__typecheck__Types_20);
        }
#line 1571 "typecheck.m"
        {
#line 1571 "typecheck.m"
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_21);
        }
#line 1821 "typecheck.m"
        {
#line 1821 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_22, check_hlds__typecheck__TypeVarSet_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_20, check_hlds__typecheck__EmptyConstraints_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_45);
        }
#line 1823 "typecheck.m"
        {
#line 1823 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_8, (MR_Integer) 1, check_hlds__typecheck__Context_9, check_hlds__typecheck__Vars_10, check_hlds__typecheck__ArgsTypeAssignSet_45, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_23, check_hlds__typecheck__STATE_VARIABLE_Info_0_24, check_hlds__typecheck__STATE_VARIABLE_Info_25);
#line 1823 "typecheck.m"
          return;
        }
#line 1562 "typecheck.m"
      }
#line 1560 "typecheck.m"
  }
#line 1553 "typecheck.m"
}

#line 1529 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_7_p_0(
#line 1529 "typecheck.m"
  MR_Word check_hlds__typecheck__VarVectorKind_8,
#line 1529 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_9,
#line 1529 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_10,
#line 1529 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21,
#line 1529 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22,
#line 1529 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1529 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 1529 "typecheck.m"
{
#line 1535 "typecheck.m"
  {
#line 1535 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1535 "typecheck.m"
    if ((check_hlds__typecheck__Vars_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1535 "typecheck.m"
      {
#line 1535 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21;
#line 1535 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 1535 "typecheck.m"
      }
#line 1535 "typecheck.m"
    else
#line 1537 "typecheck.m"
      {
#line 1537 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_30_30;
#line 1537 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumVars_15;
#line 1537 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet0_16;
#line 1537 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVars_17;
#line 1537 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet_18;
#line 1537 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_19;
#line 1537 "typecheck.m"
        MR_Word check_hlds__typecheck__EmptyConstraints_20;
#line 1537 "typecheck.m"
        MR_Word check_hlds__typecheck__V_25_25;
#line 1537 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_45;

#line 1541 "typecheck.m"
        {
#line 1541 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_10, &check_hlds__typecheck__NumVars_15);
        }
#line 12873 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1542 "typecheck.m"
        {
#line 1542 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, &check_hlds__typecheck__TypeVarSet0_16);
        }
#line 1543 "typecheck.m"
        {
#line 1543 "typecheck.m"
          mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, check_hlds__typecheck__NumVars_15, &check_hlds__typecheck__TypeVars_17, check_hlds__typecheck__TypeVarSet0_16, &check_hlds__typecheck__TypeVarSet_18);
        }
#line 1544 "typecheck.m"
        {
#line 1544 "typecheck.m"
          check_hlds__typecheck__V_25_25 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 1544 "typecheck.m"
        {
#line 1544 "typecheck.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_25_25, check_hlds__typecheck__TypeVars_17, &check_hlds__typecheck__Types_19);
        }
#line 1545 "typecheck.m"
        {
#line 1545 "typecheck.m"
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_20);
        }
#line 1821 "typecheck.m"
        {
#line 1821 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_21, check_hlds__typecheck__TypeVarSet_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_19, check_hlds__typecheck__EmptyConstraints_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_45);
        }
#line 1823 "typecheck.m"
        {
#line 1823 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_8_p_0(check_hlds__typecheck__VarVectorKind_8, (MR_Integer) 1, check_hlds__typecheck__Context_9, check_hlds__typecheck__Vars_10, check_hlds__typecheck__ArgsTypeAssignSet_45, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_22, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
#line 1823 "typecheck.m"
          return;
        }
#line 1537 "typecheck.m"
      }
#line 1535 "typecheck.m"
  }
#line 1529 "typecheck.m"
}

#line 1515 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_7_p_0(
#line 1515 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1515 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 1515 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_3,
#line 1515 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1515 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5,
#line 1515 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_6,
#line 1515 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_7)
#line 1515 "typecheck.m"
{
#line 1519 "typecheck.m"
  {
#line 1519 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1519 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1519 "typecheck.m"
      {
#line 1519 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1519 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_7 = check_hlds__typecheck__STATE_VARIABLE_Info_0_6;
#line 1519 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 1519 "typecheck.m"
      }
#line 1519 "typecheck.m"
    else
#line 1521 "typecheck.m"
      {
#line 1521 "typecheck.m"
        MR_Word check_hlds__typecheck__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1521 "typecheck.m"
        MR_Word check_hlds__typecheck__Goals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1521 "typecheck.m"
        MR_Word check_hlds__typecheck__Goal_17;
#line 1521 "typecheck.m"
        MR_Word check_hlds__typecheck__Goals_18;
#line 1521 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26;
#line 1521 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_27;

#line 1522 "typecheck.m"
        {
#line 1522 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Goal0_15, &check_hlds__typecheck__Goal_17, check_hlds__typecheck__Context_3, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26, check_hlds__typecheck__STATE_VARIABLE_Info_0_6, &check_hlds__typecheck__STATE_VARIABLE_Info_27_27);
        }
#line 1523 "typecheck.m"
        {
#line 1523 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_list_7_p_0(check_hlds__typecheck__Goals0_16, &check_hlds__typecheck__Goals_18, check_hlds__typecheck__Context_3, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_26_26, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5, check_hlds__typecheck__STATE_VARIABLE_Info_27_27, check_hlds__typecheck__STATE_VARIABLE_Info_7);
        }
#line 1520 "typecheck.m"
        {
#line 1520 "typecheck.m"
          MR_Word base;
#line 1520 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1520 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 1520 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Goal_17));
#line 1520 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Goals_18));
#line 1520 "typecheck.m"
        }
#line 1521 "typecheck.m"
      }
#line 1519 "typecheck.m"
  }
#line 1515 "typecheck.m"
}

#line 1506 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
#line 1506 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1)
#line 1506 "typecheck.m"
{
#line 1509 "typecheck.m"
  {
#line 1509 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1509 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVar__2_2;

#line 1509 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1509 "typecheck.m"
      check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1509 "typecheck.m"
    else
#line 1510 "typecheck.m"
      {
#line 1510 "typecheck.m"
        MR_Word check_hlds__typecheck__I_3;
#line 1510 "typecheck.m"
        MR_Word check_hlds__typecheck__O_4;
#line 1510 "typecheck.m"
        MR_Word check_hlds__typecheck__Interfaces_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1510 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1510 "typecheck.m"
        MR_Word check_hlds__typecheck__V_7_7;
#line 1510 "typecheck.m"
        MR_Word check_hlds__typecheck__V_8_8;

#line 1510 "typecheck.m"
        check_hlds__typecheck__I_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 0)));
#line 1510 "typecheck.m"
        check_hlds__typecheck__O_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 1)));
#line 1511 "typecheck.m"
        {
#line 1511 "typecheck.m"
          check_hlds__typecheck__V_8_8 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(check_hlds__typecheck__Interfaces_5);
        }
#line 1511 "typecheck.m"
        {
#line 1511 "typecheck.m"
          check_hlds__typecheck__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck__O_4));
#line 1511 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck__V_8_8));
#line 1511 "typecheck.m"
        }
#line 1511 "typecheck.m"
        {
#line 1511 "typecheck.m"
          check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1511 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck__I_3));
#line 1511 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck__V_7_7));
#line 1511 "typecheck.m"
        }
#line 1510 "typecheck.m"
      }
#line 1509 "typecheck.m"
    return check_hlds__typecheck__HeadVar__2_2;
#line 1509 "typecheck.m"
  }
#line 1506 "typecheck.m"
}

#line 1474 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_3(
#line 1474 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg)
#line 1474 "typecheck.m"
{
#line 1474 "typecheck.m"
  {
#line 1474 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1474 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 1474 "typecheck.m"
    {
#line 1474 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_expr__1474__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))));
    }
#line 1474 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 1474 "typecheck.m"
  }
#line 1474 "typecheck.m"
}

#line 1472 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_2(
#line 1472 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1472 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 1472 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 1472 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3,
#line 1472 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_4,
#line 1472 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_5)
#line 1472 "typecheck.m"
{
#line 1472 "typecheck.m"
  {
#line 1472 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 1472 "typecheck.m"
    MR_Word check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12;
#line 1472 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14;

#line 1472 "typecheck.m"
    {
#line 1472 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_stm_atomic_type_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12, ((MR_Word) check_hlds__typecheck__wrapper_arg_4), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14);
    }
#line 1472 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv2_STATE_VARIABLE_TypeAssignSet_12));
#line 1472 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_5 = ((MR_Box) (check_hlds__typecheck__conv1_STATE_VARIABLE_Info_14));
#line 1472 "typecheck.m"
  }
#line 1472 "typecheck.m"
}

#line 1421 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0_1(
#line 1421 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1421 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 1421 "typecheck.m"
{
#line 1421 "typecheck.m"
  {
#line 1421 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 1421 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 1421 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__2_2;

#line 1421 "typecheck.m"
    {
#line 1421 "typecheck.m"
      check_hlds__typecheck__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 1421 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__2_2));
#line 1421 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 1421 "typecheck.m"
  }
#line 1421 "typecheck.m"
}

#line 1276 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_expr_7_p_0(
#line 1276 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalExpr0_8,
#line 1276 "typecheck.m"
  MR_Word * check_hlds__typecheck__GoalExpr_9,
#line 1276 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalInfo_10,
#line 1276 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115,
#line 1276 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116,
#line 1276 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_117,
#line 1276 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_118)
#line 1276 "typecheck.m"
{
#line 1280 "typecheck.m"
  {
#line 1280 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1280 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_16;
#line 1281 "typecheck.m"
    MR_Word check_hlds__typecheck__ClauseContext_13;

#line 1281 "typecheck.m"
    {
#line 1281 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__ClauseContext_13);
    }
#line 1284 "typecheck.m"
    {
#line 1284 "typecheck.m"
      check_hlds__typecheck__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo_10);
    }
#line 1292 "typecheck.m"
#line 1292 "typecheck.m"
    switch (MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_8)) {
#line 1292 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1292 "typecheck.m"
      case (MR_Integer) 0:
#line 1317 "typecheck.m"
        {
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__SubGoal0_28 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__GoalExpr0_8), (MR_Integer) 0);
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__SubGoal_29;

#line 1321 "typecheck.m"
          {
#line 1321 "typecheck.m"
            check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_28, &check_hlds__typecheck__SubGoal_29, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
          }
#line 1322 "typecheck.m"
          *check_hlds__typecheck__GoalExpr_9 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__SubGoal_29);
#line 1317 "typecheck.m"
        }
#line 1292 "typecheck.m"
        break;
#line 1292 "typecheck.m"
      case (MR_Integer) 1:
#line 1401 "typecheck.m"
        {
#line 1401 "typecheck.m"
          MR_Word check_hlds__typecheck__LHS_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)));
#line 1401 "typecheck.m"
          MR_Word check_hlds__typecheck__RHS0_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1401 "typecheck.m"
          MR_Word check_hlds__typecheck__UnifyMode_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1401 "typecheck.m"
          MR_Word check_hlds__typecheck__Unification_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1401 "typecheck.m"
          MR_Word check_hlds__typecheck__UnifyContext_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1401 "typecheck.m"
          MR_Word check_hlds__typecheck__RHS_80;
#line 1401 "typecheck.m"
          MR_Word check_hlds__typecheck__GoalId_250;

#line 1405 "typecheck.m"
          {
#line 1405 "typecheck.m"
            check_hlds__typecheck__GoalId_250 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
          }
#line 1406 "typecheck.m"
          {
#line 1406 "typecheck.m"
            check_hlds__typecheck__typecheck_unification_10_p_0(check_hlds__typecheck__UnifyContext_79, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_250, check_hlds__typecheck__LHS_75, check_hlds__typecheck__RHS0_76, &check_hlds__typecheck__RHS_80, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
          }
#line 1408 "typecheck.m"
          {
#line 1408 "typecheck.m"
            MR_Word base;
#line 1408 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "typecheck.m"
            *check_hlds__typecheck__GoalExpr_9 = base;
#line 1408 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__LHS_75));
#line 1408 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__RHS_80));
#line 1408 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__typecheck__UnifyMode_77));
#line 1408 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__typecheck__Unification_78));
#line 1408 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__typecheck__UnifyContext_79));
#line 1408 "typecheck.m"
          }
#line 1401 "typecheck.m"
        }
#line 1292 "typecheck.m"
        break;
#line 1292 "typecheck.m"
      case (MR_Integer) 2:
#line 1360 "typecheck.m"
        {
#line 1360 "typecheck.m"
          MR_Integer check_hlds__typecheck__ProcId_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1360 "typecheck.m"
          MR_Word check_hlds__typecheck__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1360 "typecheck.m"
          MR_Word check_hlds__typecheck__BI_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1360 "typecheck.m"
          MR_Word check_hlds__typecheck__UC_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1360 "typecheck.m"
          MR_Word check_hlds__typecheck__Name_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));
#line 1360 "typecheck.m"
          MR_Integer check_hlds__typecheck__Arity_56;
#line 1360 "typecheck.m"
          MR_Word check_hlds__typecheck__SimpleCallId_57;
#line 1360 "typecheck.m"
          MR_Word check_hlds__typecheck__GoalId_58;
#line 1360 "typecheck.m"
          MR_Word check_hlds__typecheck__PredId_59;
#line 1360 "typecheck.m"
          MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)));

#line 1364 "typecheck.m"
          {
#line 1364 "typecheck.m"
            mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_52, &check_hlds__typecheck__Arity_56);
          }
#line 1365 "typecheck.m"
          {
#line 1365 "typecheck.m"
            check_hlds__typecheck__SimpleCallId_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_57, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1365 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_57, 1) = ((MR_Box) (check_hlds__typecheck__Name_55));
#line 1365 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__SimpleCallId_57, 2) = ((MR_Box) (check_hlds__typecheck__Arity_56));
#line 1365 "typecheck.m"
          }
#line 1366 "typecheck.m"
          {
#line 1366 "typecheck.m"
            check_hlds__typecheck__GoalId_58 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
          }
#line 1367 "typecheck.m"
          {
#line 1367 "typecheck.m"
            check_hlds__typecheck__typecheck_call_pred_name_9_p_0(check_hlds__typecheck__SimpleCallId_57, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_58, check_hlds__typecheck__Args_52, &check_hlds__typecheck__PredId_59, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
          }
#line 1369 "typecheck.m"
          {
#line 1369 "typecheck.m"
            MR_Word base;
#line 1369 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "typecheck.m"
            *check_hlds__typecheck__GoalExpr_9 = base;
#line 1369 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__PredId_59));
#line 1369 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__typecheck__ProcId_51));
#line 1369 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__typecheck__Args_52));
#line 1369 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__typecheck__BI_53));
#line 1369 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__typecheck__UC_54));
#line 1369 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__typecheck__Name_55));
#line 1369 "typecheck.m"
          }
#line 1360 "typecheck.m"
        }
#line 1292 "typecheck.m"
        break;
#line 1292 "typecheck.m"
      case (MR_Integer) 3:
#line 1292 "typecheck.m"
#line 1292 "typecheck.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 0)))) {
#line 1292 "typecheck.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1292 "typecheck.m"
          case (MR_Integer) 0:
#line 1372 "typecheck.m"
            {
#line 1372 "typecheck.m"
              MR_Word check_hlds__typecheck__GenericCall_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1372 "typecheck.m"
              MR_Word check_hlds__typecheck__Args_249 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1371 "typecheck.m"
              MR_Word check_hlds__typecheck___Modes_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1371 "typecheck.m"
              MR_Word check_hlds__typecheck___MaybeArgRegs_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1371 "typecheck.m"
              MR_Word check_hlds__typecheck___Detism_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));

#line 1383 "typecheck.m"
#line 1383 "typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__typecheck__GenericCall_60)) {
#line 1383 "typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1383 "typecheck.m"
                case (MR_Integer) 0:
#line 1374 "typecheck.m"
                  {
#line 1374 "typecheck.m"
                    MR_Word check_hlds__typecheck__PredVar_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 0)));
#line 1374 "typecheck.m"
                    MR_Word check_hlds__typecheck__Purity_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 1)));
#line 1374 "typecheck.m"
                    MR_Word check_hlds__typecheck__GenericCallId_68;
#line 1374 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 2)));
#line 1374 "typecheck.m"
                    MR_Integer check_hlds__typecheck__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall_60, (MR_Integer) 3)));

#line 1380 "typecheck.m"
                    {
#line 1380 "typecheck.m"
                      hlds__hlds_goal__generic_call_to_id_2_p_0(check_hlds__typecheck__GenericCall_60, &check_hlds__typecheck__GenericCallId_68);
                    }
#line 1381 "typecheck.m"
                    {
#line 1381 "typecheck.m"
                      check_hlds__typecheck__typecheck_higher_order_call_9_p_0(check_hlds__typecheck__GenericCallId_68, check_hlds__typecheck__Context_16, check_hlds__typecheck__PredVar_64, check_hlds__typecheck__Purity_65, check_hlds__typecheck__Args_249, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                    }
#line 1374 "typecheck.m"
                  }
#line 1383 "typecheck.m"
                  break;
#line 1383 "typecheck.m"
                case (MR_Integer) 1:
#line 1384 "typecheck.m"
                  {
#line 1385 "typecheck.m"
                    {
#line 1385 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "unexpected class method call");
#line 1385 "typecheck.m"
                      return;
                    }
#line 1384 "typecheck.m"
                  }
#line 1383 "typecheck.m"
                  break;
#line 1383 "typecheck.m"
                case (MR_Integer) 2:
#line 1387 "typecheck.m"
                  {
#line 1387 "typecheck.m"
                    MR_String check_hlds__typecheck__EventName_73 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GenericCall_60, (MR_Integer) 0)));

#line 1392 "typecheck.m"
                    {
#line 1392 "typecheck.m"
                      check_hlds__typecheck__typecheck_event_call_7_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__EventName_73, check_hlds__typecheck__Args_249, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                    }
#line 1387 "typecheck.m"
                  }
#line 1383 "typecheck.m"
                  break;
#line 1383 "typecheck.m"
                case (MR_Integer) 3:
#line 1395 "typecheck.m"
                  {
#line 1395 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115;
#line 1395 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_0_117;
#line 1395 "typecheck.m"
                  }
#line 1383 "typecheck.m"
                  break;
#line 1383 "typecheck.m"
              }
#line 1399 "typecheck.m"
              *check_hlds__typecheck__GoalExpr_9 = check_hlds__typecheck__GoalExpr0_8;
#line 1372 "typecheck.m"
            }
#line 1292 "typecheck.m"
            break;
#line 1292 "typecheck.m"
          case (MR_Integer) 1:
#line 1414 "typecheck.m"
            {
#line 1414 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgVectorKind_89;
#line 1414 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgVars_90;
#line 1414 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_169_169;
#line 1414 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_170_170;
#line 1414 "typecheck.m"
              MR_Word check_hlds__typecheck__Args_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1414 "typecheck.m"
              MR_Word check_hlds__typecheck__GoalId_252;
#line 1414 "typecheck.m"
              MR_Word check_hlds__typecheck__PredId_253 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1414 "typecheck.m"
              MR_Word check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1414 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1414 "typecheck.m"
              MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 5)));
#line 1414 "typecheck.m"
              MR_Word check_hlds__typecheck__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 6)));
#line 1414 "typecheck.m"
              MR_Word check_hlds__typecheck__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 7)));

#line 1420 "typecheck.m"
              {
#line 1420 "typecheck.m"
                check_hlds__typecheck__ArgVectorKind_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1420 "typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1420 "typecheck.m"
                MR_hl_field(MR_mktag(3), check_hlds__typecheck__ArgVectorKind_89, 1) = ((MR_Box) (check_hlds__typecheck__PredId_253));
#line 1420 "typecheck.m"
              }
#line 1421 "typecheck.m"
              {
#line 1421 "typecheck.m"
                check_hlds__typecheck__ArgVars_90 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_scalar_common_2[2], check_hlds__typecheck__Args_251);
              }
#line 1422 "typecheck.m"
              {
#line 1422 "typecheck.m"
                check_hlds__typecheck__GoalId_252 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_10);
              }
#line 1423 "typecheck.m"
              {
#line 1423 "typecheck.m"
                check_hlds__typecheck__typecheck_call_pred_id_9_p_0(check_hlds__typecheck__ArgVectorKind_89, check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalId_252, check_hlds__typecheck__PredId_253, check_hlds__typecheck__ArgVars_90, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_169_169, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_170_170);
              }
#line 1425 "typecheck.m"
              {
#line 1425 "typecheck.m"
                check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_169_169, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_170_170, check_hlds__typecheck__STATE_VARIABLE_Info_118);
              }
#line 1426 "typecheck.m"
              *check_hlds__typecheck__GoalExpr_9 = check_hlds__typecheck__GoalExpr0_8;
#line 1414 "typecheck.m"
            }
#line 1292 "typecheck.m"
            break;
#line 1292 "typecheck.m"
          case (MR_Integer) 2:
#line 1286 "typecheck.m"
            {
#line 1286 "typecheck.m"
              MR_Word check_hlds__typecheck__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1286 "typecheck.m"
              MR_Word check_hlds__typecheck__List0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1286 "typecheck.m"
              MR_Word check_hlds__typecheck__List_20;

#line 1290 "typecheck.m"
              {
#line 1290 "typecheck.m"
                check_hlds__typecheck__typecheck_goal_list_7_p_0(check_hlds__typecheck__List0_18, &check_hlds__typecheck__List_20, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
              }
#line 1291 "typecheck.m"
              {
#line 1291 "typecheck.m"
                MR_Word base;
#line 1291 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "typecheck.m"
                *check_hlds__typecheck__GoalExpr_9 = base;
#line 1291 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1291 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ConjType_17));
#line 1291 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__List_20));
#line 1291 "typecheck.m"
              }
#line 1286 "typecheck.m"
            }
#line 1292 "typecheck.m"
            break;
#line 1292 "typecheck.m"
          case (MR_Integer) 3:
#line 1293 "typecheck.m"
            {
#line 1293 "typecheck.m"
              MR_Word check_hlds__typecheck__List0_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1293 "typecheck.m"
              MR_Word check_hlds__typecheck__List_243;

#line 1297 "typecheck.m"
              {
#line 1297 "typecheck.m"
                check_hlds__typecheck__typecheck_goal_list_7_p_0(check_hlds__typecheck__List0_242, &check_hlds__typecheck__List_243, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, check_hlds__typecheck__STATE_VARIABLE_Info_118);
              }
#line 1298 "typecheck.m"
              {
#line 1298 "typecheck.m"
                MR_Word base;
#line 1298 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "typecheck.m"
                *check_hlds__typecheck__GoalExpr_9 = base;
#line 1298 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1298 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__List_243));
#line 1298 "typecheck.m"
              }
#line 1293 "typecheck.m"
            }
#line 1292 "typecheck.m"
            break;
#line 1292 "typecheck.m"
          case (MR_Integer) 4:
#line 1410 "typecheck.m"
            {
#line 1412 "typecheck.m"
              {
#line 1412 "typecheck.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "switch");
#line 1412 "typecheck.m"
                return;
              }
#line 1410 "typecheck.m"
            }
#line 1292 "typecheck.m"
            break;
#line 1292 "typecheck.m"
          case (MR_Integer) 5:
#line 1324 "typecheck.m"
            {
#line 1324 "typecheck.m"
              MR_Word check_hlds__typecheck__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1324 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1324 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1324 "typecheck.m"
              MR_Word check_hlds__typecheck__SubGoal0_247 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1324 "typecheck.m"
              MR_Word check_hlds__typecheck__SubGoal_248;

#line 1328 "typecheck.m"
              {
#line 1328 "typecheck.m"
                check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_247, &check_hlds__typecheck__SubGoal_248, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_204_204);
              }
#line 1347 "typecheck.m"
#line 1347 "typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__typecheck__Reason_30)) {
#line 1347 "typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1347 "typecheck.m"
                case (MR_Integer) 0:
#line 1344 "typecheck.m"
                  {
#line 1344 "typecheck.m"
                    MR_Word check_hlds__typecheck__Vars_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Reason_30, (MR_Integer) 0)));

#line 1345 "typecheck.m"
                    {
#line 1345 "typecheck.m"
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_244, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_204_204, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                    }
#line 1344 "typecheck.m"
                  }
#line 1347 "typecheck.m"
                  break;
#line 1347 "typecheck.m"
                case (MR_Integer) 1:
#line 1344 "typecheck.m"
                  {
#line 1344 "typecheck.m"
                    MR_Word check_hlds__typecheck__Vars_301 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Reason_30, (MR_Integer) 0)));
#line 1335 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Reason_30, (MR_Integer) 1)));

#line 1345 "typecheck.m"
                    {
#line 1345 "typecheck.m"
                      check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_301, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_204_204, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                    }
#line 1344 "typecheck.m"
                  }
#line 1347 "typecheck.m"
                  break;
#line 1347 "typecheck.m"
                case (MR_Integer) 2:
#line 1348 "typecheck.m"
                  {
#line 1348 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1348 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1348 "typecheck.m"
                  }
#line 1347 "typecheck.m"
                  break;
#line 1347 "typecheck.m"
                case (MR_Integer) 3:
#line 1347 "typecheck.m"
#line 1347 "typecheck.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 0)))) {
#line 1347 "typecheck.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1347 "typecheck.m"
                    case (MR_Integer) 0:
#line 1349 "typecheck.m"
                      {
#line 1349 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1349 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1349 "typecheck.m"
                      }
#line 1347 "typecheck.m"
                      break;
#line 1347 "typecheck.m"
                    case (MR_Integer) 1:
#line 1350 "typecheck.m"
                      {
#line 1350 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1350 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1350 "typecheck.m"
                      }
#line 1347 "typecheck.m"
                      break;
#line 1347 "typecheck.m"
                    case (MR_Integer) 2:
#line 1351 "typecheck.m"
                      {
#line 1351 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1351 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1351 "typecheck.m"
                      }
#line 1347 "typecheck.m"
                      break;
#line 1347 "typecheck.m"
                    case (MR_Integer) 3:
#line 1352 "typecheck.m"
                      {
#line 1352 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1352 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1352 "typecheck.m"
                      }
#line 1347 "typecheck.m"
                      break;
#line 1347 "typecheck.m"
                    case (MR_Integer) 4:
#line 1353 "typecheck.m"
                      {
#line 1353 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1353 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1353 "typecheck.m"
                      }
#line 1347 "typecheck.m"
                      break;
#line 1347 "typecheck.m"
                    case (MR_Integer) 5:
#line 1354 "typecheck.m"
                      {
#line 1354 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1354 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1354 "typecheck.m"
                      }
#line 1347 "typecheck.m"
                      break;
#line 1347 "typecheck.m"
                    case (MR_Integer) 6:
#line 1355 "typecheck.m"
                      {
#line 1355 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203;
#line 1355 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_204_204;
#line 1355 "typecheck.m"
                      }
#line 1347 "typecheck.m"
                      break;
#line 1347 "typecheck.m"
                    case (MR_Integer) 7:
#line 1344 "typecheck.m"
                      {
#line 1344 "typecheck.m"
                        MR_Word check_hlds__typecheck__LCVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 1)));
#line 1344 "typecheck.m"
                        MR_Word check_hlds__typecheck__LCSVar_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 2)));
#line 1344 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_205_205;
#line 1344 "typecheck.m"
                        MR_Word check_hlds__typecheck__Vars_299;
#line 1341 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_30, (MR_Integer) 3)));

#line 1342 "typecheck.m"
                        {
#line 1342 "typecheck.m"
                          check_hlds__typecheck__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_205_205, 0) = ((MR_Box) (check_hlds__typecheck__LCSVar_34));
#line 1342 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_205_205, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1342 "typecheck.m"
                        }
#line 1342 "typecheck.m"
                        {
#line 1342 "typecheck.m"
                          check_hlds__typecheck__Vars_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_299, 0) = ((MR_Box) (check_hlds__typecheck__LCVar_33));
#line 1342 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_299, 1) = ((MR_Box) (check_hlds__typecheck__V_205_205));
#line 1342 "typecheck.m"
                        }
#line 1345 "typecheck.m"
                        {
#line 1345 "typecheck.m"
                          check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_299, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_203_203, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_204_204, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                        }
#line 1344 "typecheck.m"
                      }
#line 1347 "typecheck.m"
                      break;
#line 1347 "typecheck.m"
                  }
#line 1347 "typecheck.m"
                  break;
#line 1347 "typecheck.m"
              }
#line 1358 "typecheck.m"
              {
#line 1358 "typecheck.m"
                MR_Word base;
#line 1358 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "typecheck.m"
                *check_hlds__typecheck__GoalExpr_9 = base;
#line 1358 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1358 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Reason_30));
#line 1358 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_248));
#line 1358 "typecheck.m"
              }
#line 1324 "typecheck.m"
            }
#line 1292 "typecheck.m"
            break;
#line 1292 "typecheck.m"
          case (MR_Integer) 6:
#line 1300 "typecheck.m"
            {
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__Cond0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 2)));
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__Then0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 3)));
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__Else0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 4)));
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__Cond_25;
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__Then_26;
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__Else_27;
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_217_217;
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_218_218;
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_222_222;
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_223_223;
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_227_227;
#line 1300 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_228_228;

#line 1304 "typecheck.m"
              {
#line 1304 "typecheck.m"
                check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Cond0_22, &check_hlds__typecheck__Cond_25, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_217_217, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_218_218);
              }
#line 1308 "typecheck.m"
              {
#line 1308 "typecheck.m"
                check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Then0_23, &check_hlds__typecheck__Then_26, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_217_217, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_222_222, check_hlds__typecheck__STATE_VARIABLE_Info_218_218, &check_hlds__typecheck__STATE_VARIABLE_Info_223_223);
              }
#line 1312 "typecheck.m"
              {
#line 1312 "typecheck.m"
                check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Else0_24, &check_hlds__typecheck__Else_27, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_222_222, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_227_227, check_hlds__typecheck__STATE_VARIABLE_Info_223_223, &check_hlds__typecheck__STATE_VARIABLE_Info_228_228);
              }
#line 1313 "typecheck.m"
              {
#line 1313 "typecheck.m"
                check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Context_16, check_hlds__typecheck__Vars_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_227_227, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_228_228, check_hlds__typecheck__STATE_VARIABLE_Info_118);
              }
#line 1315 "typecheck.m"
              {
#line 1315 "typecheck.m"
                MR_Word base;
#line 1315 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "typecheck.m"
                *check_hlds__typecheck__GoalExpr_9 = base;
#line 1315 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1315 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Vars_21));
#line 1315 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__Cond_25));
#line 1315 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__typecheck__Then_26));
#line 1315 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__typecheck__Else_27));
#line 1315 "typecheck.m"
              }
#line 1300 "typecheck.m"
            }
#line 1292 "typecheck.m"
            break;
#line 1292 "typecheck.m"
          case (MR_Integer) 7:
#line 1428 "typecheck.m"
            {
#line 1428 "typecheck.m"
              MR_Word check_hlds__typecheck__ShortHand0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_8, (MR_Integer) 1)));
#line 1428 "typecheck.m"
              MR_Word check_hlds__typecheck__ShortHand_93;

#line 1438 "typecheck.m"
#line 1438 "typecheck.m"
              switch (MR_tag((MR_Word) check_hlds__typecheck__ShortHand0_91)) {
#line 1438 "typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1438 "typecheck.m"
                case (MR_Integer) 0:
#line 1430 "typecheck.m"
                  {
#line 1430 "typecheck.m"
                    MR_Word check_hlds__typecheck__LHS0_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 0)));
#line 1430 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_164_164;
#line 1430 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_165_165;
#line 1430 "typecheck.m"
                    MR_Word check_hlds__typecheck__LHS_254;
#line 1430 "typecheck.m"
                    MR_Word check_hlds__typecheck__RHS0_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 1)));
#line 1430 "typecheck.m"
                    MR_Word check_hlds__typecheck__RHS_256;

#line 1435 "typecheck.m"
                    {
#line 1435 "typecheck.m"
                      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__LHS0_92, &check_hlds__typecheck__LHS_254, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_164_164, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_165_165);
                    }
#line 1436 "typecheck.m"
                    {
#line 1436 "typecheck.m"
                      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__RHS0_255, &check_hlds__typecheck__RHS_256, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_164_164, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_165_165, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                    }
#line 1437 "typecheck.m"
                    {
#line 1437 "typecheck.m"
                      check_hlds__typecheck__ShortHand_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1437 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_93, 0) = ((MR_Box) (check_hlds__typecheck__LHS_254));
#line 1437 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_93, 1) = ((MR_Box) (check_hlds__typecheck__RHS_256));
#line 1437 "typecheck.m"
                    }
#line 1430 "typecheck.m"
                  }
#line 1438 "typecheck.m"
                  break;
#line 1438 "typecheck.m"
                case (MR_Integer) 1:
#line 1440 "typecheck.m"
                  {
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__GoalType_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 0)));
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__Outer_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 1)));
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__Inner_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 2)));
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__MaybeOutputVars_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 3)));
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__MainGoal0_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 4)));
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__OrElseGoals0_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 5)));
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__OrElseInners_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 6)));
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__MainGoal_103;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__OrElseGoals_104;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__OuterDI_106;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__OuterUO_107;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__InnerVars_108;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_142_142;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_144_144;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_146_146;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_147_147;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_148_148;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_149_149;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_150_150;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_152_152;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_153_153;
#line 1440 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_156_156;
#line 1472 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_116;
#line 1472 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv3_STATE_VARIABLE_Info_118;

#line 1450 "typecheck.m"
                    if ((check_hlds__typecheck__MaybeOutputVars_97 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1451 "typecheck.m"
                      {
#line 1451 "typecheck.m"
                        check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115;
#line 1451 "typecheck.m"
                        check_hlds__typecheck__STATE_VARIABLE_Info_142_142 = check_hlds__typecheck__STATE_VARIABLE_Info_0_117;
#line 1451 "typecheck.m"
                      }
#line 1450 "typecheck.m"
                    else
#line 1446 "typecheck.m"
                      {
#line 1446 "typecheck.m"
                        MR_Word check_hlds__typecheck__OutputVars_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOutputVars_97, (MR_Integer) 0)));

#line 1448 "typecheck.m"
                        {
#line 1448 "typecheck.m"
                          check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), check_hlds__typecheck__Context_16, check_hlds__typecheck__OutputVars_101, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_142_142);
                        }
#line 1446 "typecheck.m"
                      }
#line 1454 "typecheck.m"
                    {
#line 1454 "typecheck.m"
                      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__MainGoal0_98, &check_hlds__typecheck__MainGoal_103, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_141_141, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143, check_hlds__typecheck__STATE_VARIABLE_Info_142_142, &check_hlds__typecheck__STATE_VARIABLE_Info_144_144);
                    }
#line 1456 "typecheck.m"
                    {
#line 1456 "typecheck.m"
                      check_hlds__typecheck__typecheck_goal_list_7_p_0(check_hlds__typecheck__OrElseGoals0_99, &check_hlds__typecheck__OrElseGoals_104, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_143_143, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145, check_hlds__typecheck__STATE_VARIABLE_Info_144_144, &check_hlds__typecheck__STATE_VARIABLE_Info_146_146);
                    }
#line 1460 "typecheck.m"
                    check_hlds__typecheck__OuterDI_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_95, (MR_Integer) 0)));
#line 1460 "typecheck.m"
                    check_hlds__typecheck__OuterUO_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_95, (MR_Integer) 1)));
#line 1462 "typecheck.m"
                    {
#line 1462 "typecheck.m"
                      check_hlds__typecheck__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_150_150, 0) = ((MR_Box) (check_hlds__typecheck__OuterUO_107));
#line 1462 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_150_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1462 "typecheck.m"
                    }
#line 1462 "typecheck.m"
                    {
#line 1462 "typecheck.m"
                      check_hlds__typecheck__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1462 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_147_147, 0) = ((MR_Box) (check_hlds__typecheck__OuterDI_106));
#line 1462 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_147_147, 1) = ((MR_Box) (check_hlds__typecheck__V_150_150));
#line 1462 "typecheck.m"
                    }
#line 1461 "typecheck.m"
                    {
#line 1461 "typecheck.m"
                      check_hlds__typecheck__ensure_vars_have_a_single_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), check_hlds__typecheck__Context_16, check_hlds__typecheck__V_147_147, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_145_145, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_148_148, check_hlds__typecheck__STATE_VARIABLE_Info_146_146, &check_hlds__typecheck__STATE_VARIABLE_Info_149_149);
                    }
#line 1471 "typecheck.m"
                    {
#line 1471 "typecheck.m"
                      check_hlds__typecheck__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_152_152, 0) = ((MR_Box) (check_hlds__typecheck__Inner_96));
#line 1471 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_152_152, 1) = ((MR_Box) (check_hlds__typecheck__OrElseInners_100));
#line 1471 "typecheck.m"
                    }
#line 1471 "typecheck.m"
                    {
#line 1471 "typecheck.m"
                      check_hlds__typecheck__InnerVars_108 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(check_hlds__typecheck__V_152_152);
                    }
#line 1472 "typecheck.m"
                    {
#line 1472 "typecheck.m"
                      check_hlds__typecheck__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1472 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[1]));
#line 1472 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_2));
#line 1472 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1472 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_153_153, 3) = ((MR_Box) (check_hlds__typecheck__Context_16));
#line 1472 "typecheck.m"
                    }
#line 1472 "typecheck.m"
                    {
#line 1472 "typecheck.m"
                      mercury__list__foldl2_6_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_scalar_common_1[3], (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__V_153_153, check_hlds__typecheck__InnerVars_108, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_148_148)), &check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_116, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_149_149)), &check_hlds__typecheck__conv3_STATE_VARIABLE_Info_118);
                    }
#line 1472 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = ((MR_Word) check_hlds__typecheck__conv4_STATE_VARIABLE_TypeAssignSet_116);
#line 1472 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_118 = ((MR_Word) check_hlds__typecheck__conv3_STATE_VARIABLE_Info_118);
#line 1474 "typecheck.m"
                    {
#line 1474 "typecheck.m"
                      check_hlds__typecheck__V_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1474 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[3]));
#line 1474 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_expr_7_p_0_3));
#line 1474 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1474 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 3) = ((MR_Box) (check_hlds__typecheck__GoalType_94));
#line 1474 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_156_156, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1474 "typecheck.m"
                    }
#line 1474 "typecheck.m"
                    {
#line 1474 "typecheck.m"
                      mercury__require__expect_4_p_0(check_hlds__typecheck__V_156_156, (MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_expr\'/7", (MR_String) "GoalType != unknown_atomic_goal_type");
                    }
#line 1476 "typecheck.m"
                    {
#line 1476 "typecheck.m"
                      check_hlds__typecheck__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 0) = ((MR_Box) (check_hlds__typecheck__GoalType_94));
#line 1476 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 1) = ((MR_Box) (check_hlds__typecheck__Outer_95));
#line 1476 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 2) = ((MR_Box) (check_hlds__typecheck__Inner_96));
#line 1476 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 3) = ((MR_Box) (check_hlds__typecheck__MaybeOutputVars_97));
#line 1476 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 4) = ((MR_Box) (check_hlds__typecheck__MainGoal_103));
#line 1476 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 5) = ((MR_Box) (check_hlds__typecheck__OrElseGoals_104));
#line 1476 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_93, 6) = ((MR_Box) (check_hlds__typecheck__OrElseInners_100));
#line 1476 "typecheck.m"
                    }
#line 1440 "typecheck.m"
                  }
#line 1438 "typecheck.m"
                  break;
#line 1438 "typecheck.m"
                case (MR_Integer) 2:
#line 1479 "typecheck.m"
                  {
#line 1479 "typecheck.m"
                    MR_Word check_hlds__typecheck__MaybeIO_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 0)));
#line 1479 "typecheck.m"
                    MR_Word check_hlds__typecheck__ResultVar_110 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 1)));
#line 1479 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122;
#line 1479 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_123_123;
#line 1479 "typecheck.m"
                    MR_Word check_hlds__typecheck__SubGoal0_259 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_91, (MR_Integer) 2)));
#line 1479 "typecheck.m"
                    MR_Word check_hlds__typecheck__SubGoal_260;

#line 1484 "typecheck.m"
                    {
#line 1484 "typecheck.m"
                      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__SubGoal0_259, &check_hlds__typecheck__SubGoal_260, check_hlds__typecheck__Context_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_115, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122, check_hlds__typecheck__STATE_VARIABLE_Info_0_117, &check_hlds__typecheck__STATE_VARIABLE_Info_123_123);
                    }
#line 1498 "typecheck.m"
                    if ((check_hlds__typecheck__MaybeIO_109 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1499 "typecheck.m"
                      {
#line 1499 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122;
#line 1499 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_118 = check_hlds__typecheck__STATE_VARIABLE_Info_123_123;
#line 1499 "typecheck.m"
                      }
#line 1498 "typecheck.m"
                    else
#line 1486 "typecheck.m"
                      {
#line 1486 "typecheck.m"
                        MR_Word check_hlds__typecheck__InitialIO_111;
#line 1486 "typecheck.m"
                        MR_Word check_hlds__typecheck__FinalIO_112;
#line 1486 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeIO_109, (MR_Integer) 0)));
#line 1486 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_125_125;
#line 1486 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_126_126;
#line 1486 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_127_127;
#line 1486 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_128_128;
#line 1486 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_132_132;
#line 1486 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_133_133;
#line 1486 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_134_134;
#line 1486 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_135_135;

#line 1486 "typecheck.m"
                        check_hlds__typecheck__InitialIO_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_124_124, (MR_Integer) 0)));
#line 1486 "typecheck.m"
                        check_hlds__typecheck__FinalIO_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_124_124, (MR_Integer) 1)));
#line 1489 "typecheck.m"
                        {
#line 1489 "typecheck.m"
                          check_hlds__typecheck__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_128_128, 0) = ((MR_Box) (check_hlds__typecheck__FinalIO_112));
#line 1489 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1489 "typecheck.m"
                        }
#line 1489 "typecheck.m"
                        {
#line 1489 "typecheck.m"
                          check_hlds__typecheck__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1489 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_125_125, 0) = ((MR_Box) (check_hlds__typecheck__InitialIO_111));
#line 1489 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_125_125, 1) = ((MR_Box) (check_hlds__typecheck__V_128_128));
#line 1489 "typecheck.m"
                        }
#line 1488 "typecheck.m"
                        {
#line 1488 "typecheck.m"
                          check_hlds__typecheck__ensure_vars_have_a_type_7_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), check_hlds__typecheck__Context_16, check_hlds__typecheck__V_125_125, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_122_122, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_126_126, check_hlds__typecheck__STATE_VARIABLE_Info_123_123, &check_hlds__typecheck__STATE_VARIABLE_Info_127_127);
                        }
#line 1495 "typecheck.m"
                        {
#line 1495 "typecheck.m"
                          check_hlds__typecheck__V_132_132 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                        }
#line 1494 "typecheck.m"
                        {
#line 1494 "typecheck.m"
                          check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[22]), check_hlds__typecheck__Context_16, check_hlds__typecheck__InitialIO_111, check_hlds__typecheck__V_132_132, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_126_126, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_133_133, check_hlds__typecheck__STATE_VARIABLE_Info_127_127, &check_hlds__typecheck__STATE_VARIABLE_Info_134_134);
                        }
#line 1497 "typecheck.m"
                        {
#line 1497 "typecheck.m"
                          check_hlds__typecheck__V_135_135 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                        }
#line 1496 "typecheck.m"
                        {
#line 1496 "typecheck.m"
                          check_hlds__typecheck__typecheck_var_has_type_8_p_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[23]), check_hlds__typecheck__Context_16, check_hlds__typecheck__FinalIO_112, check_hlds__typecheck__V_135_135, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_133_133, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_116, check_hlds__typecheck__STATE_VARIABLE_Info_134_134, check_hlds__typecheck__STATE_VARIABLE_Info_118);
                        }
#line 1486 "typecheck.m"
                      }
#line 1501 "typecheck.m"
                    {
#line 1501 "typecheck.m"
                      check_hlds__typecheck__ShortHand_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1501 "typecheck.m"
                      MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_93, 0) = ((MR_Box) (check_hlds__typecheck__MaybeIO_109));
#line 1501 "typecheck.m"
                      MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_93, 1) = ((MR_Box) (check_hlds__typecheck__ResultVar_110));
#line 1501 "typecheck.m"
                      MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_93, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_260));
#line 1501 "typecheck.m"
                    }
#line 1479 "typecheck.m"
                  }
#line 1438 "typecheck.m"
                  break;
#line 1438 "typecheck.m"
              }
#line 1503 "typecheck.m"
              {
#line 1503 "typecheck.m"
                MR_Word base;
#line 1503 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1503 "typecheck.m"
                *check_hlds__typecheck__GoalExpr_9 = base;
#line 1503 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1503 "typecheck.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ShortHand_93));
#line 1503 "typecheck.m"
              }
#line 1428 "typecheck.m"
            }
#line 1292 "typecheck.m"
            break;
#line 1292 "typecheck.m"
        }
#line 1292 "typecheck.m"
        break;
#line 1292 "typecheck.m"
    }
#line 1280 "typecheck.m"
  }
#line 1276 "typecheck.m"
}

#line 1213 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_7_p_0(
#line 1213 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_8,
#line 1213 "typecheck.m"
  MR_Word * check_hlds__typecheck__Goal_9,
#line 1213 "typecheck.m"
  MR_Word check_hlds__typecheck__EnclosingContext_10,
#line 1213 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28,
#line 1213 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29,
#line 1213 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_30,
#line 1213 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_31)
#line 1213 "typecheck.m"
{
#line 1217 "typecheck.m"
  {
#line 1217 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 0)));
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_8, (MR_Integer) 1)));
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__Context0_15;
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_16;
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo_17;
#line 1217 "typecheck.m"
    MR_Integer check_hlds__typecheck__NumTypeAssignSets_18;
#line 1217 "typecheck.m"
    MR_Integer check_hlds__typecheck__WarnLimit_19;
#line 1217 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr_24;
#line 1223 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;

#line 1222 "typecheck.m"
    {
#line 1222 "typecheck.m"
      check_hlds__typecheck__Context0_15 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo0_14);
    }
#line 1223 "typecheck.m"
    {
#line 1223 "typecheck.m"
      check_hlds__typecheck__V_41_41 = mercury__term__context_init_0_f_0();
    }
#line 1223 "typecheck.m"
    {
#line 1223 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck__Context0_15, check_hlds__typecheck__V_41_41);
    }
#line 1226 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1224 "typecheck.m"
      {
#line 1224 "typecheck.m"
        check_hlds__typecheck__Context_16 = check_hlds__typecheck__EnclosingContext_10;
#line 1225 "typecheck.m"
        {
#line 1225 "typecheck.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__typecheck__Context_16, check_hlds__typecheck__GoalInfo0_14, &check_hlds__typecheck__GoalInfo_17);
        }
#line 1224 "typecheck.m"
      }
#line 1226 "typecheck.m"
    else
#line 1227 "typecheck.m"
      {
#line 1227 "typecheck.m"
        check_hlds__typecheck__Context_16 = check_hlds__typecheck__Context0_15;
#line 1228 "typecheck.m"
        check_hlds__typecheck__GoalInfo_17 = check_hlds__typecheck__GoalInfo0_14;
#line 1227 "typecheck.m"
      }
#line 1242 "typecheck.m"
    {
#line 1242 "typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, &check_hlds__typecheck__NumTypeAssignSets_18);
    }
#line 1243 "typecheck.m"
    {
#line 1243 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_ambiguity_warn_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__WarnLimit_19);
    }
#line 1244 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__WarnLimit_19);
#line 1270 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1245 "typecheck.m"
      {
#line 1245 "typecheck.m"
        MR_Integer check_hlds__typecheck__ErrorLimit_20;
#line 1245 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_21;
#line 1245 "typecheck.m"
        MR_Word check_hlds__typecheck__OverloadedSymbolMap_22;

#line 1245 "typecheck.m"
        {
#line 1245 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ErrorLimit_20);
        }
#line 1246 "typecheck.m"
        {
#line 1246 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__ClauseContext_21);
        }
#line 1247 "typecheck.m"
        {
#line 1247 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__OverloadedSymbolMap_22);
        }
#line 1248 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__NumTypeAssignSets_18 > check_hlds__typecheck__ErrorLimit_20);
#line 1257 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1251 "typecheck.m"
          {
#line 1251 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorSpec_23;
#line 1251 "typecheck.m"
            MR_Word check_hlds__typecheck__V_32_32;

#line 1250 "typecheck.m"
            {
#line 1250 "typecheck.m"
              check_hlds__typecheck__ErrorSpec_23 = check_hlds__typecheck_errors__report_error_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
            }
#line 1252 "typecheck.m"
            {
#line 1252 "typecheck.m"
              check_hlds__typecheck__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_32_32, 0) = ((MR_Box) (check_hlds__typecheck__ErrorSpec_23));
#line 1252 "typecheck.m"
            }
#line 1252 "typecheck.m"
            {
#line 1252 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_32_32, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
            }
#line 1256 "typecheck.m"
            check_hlds__typecheck__GoalExpr_24 = check_hlds__typecheck__GoalExpr0_13;
#line 1251 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28;
#line 1251 "typecheck.m"
          }
#line 1257 "typecheck.m"
        else
#line 1258 "typecheck.m"
          {
#line 1258 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybePrevSpec_25;
#line 1258 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_35_35;

#line 1258 "typecheck.m"
            {
#line 1258 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__MaybePrevSpec_25);
            }
#line 1264 "typecheck.m"
            if ((check_hlds__typecheck__MaybePrevSpec_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1260 "typecheck.m"
              {
#line 1260 "typecheck.m"
                MR_Word check_hlds__typecheck__WarnSpec_26;
#line 1260 "typecheck.m"
                MR_Word check_hlds__typecheck__V_34_34;

#line 1261 "typecheck.m"
                {
#line 1261 "typecheck.m"
                  check_hlds__typecheck__WarnSpec_26 = check_hlds__typecheck_errors__report_warning_too_much_overloading_3_f_0(check_hlds__typecheck__ClauseContext_21, check_hlds__typecheck__Context_16, check_hlds__typecheck__OverloadedSymbolMap_22);
                }
#line 1263 "typecheck.m"
                {
#line 1263 "typecheck.m"
                  check_hlds__typecheck__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_34_34, 0) = ((MR_Box) (check_hlds__typecheck__WarnSpec_26));
#line 1263 "typecheck.m"
                }
#line 1263 "typecheck.m"
                {
#line 1263 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_34_34, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, &check_hlds__typecheck__STATE_VARIABLE_Info_35_35);
                }
#line 1260 "typecheck.m"
              }
#line 1264 "typecheck.m"
            else
#line 1265 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_35_35 = check_hlds__typecheck__STATE_VARIABLE_Info_0_30;
#line 1267 "typecheck.m"
            {
#line 1267 "typecheck.m"
              check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_35_35, check_hlds__typecheck__STATE_VARIABLE_Info_31);
            }
#line 1258 "typecheck.m"
          }
#line 1245 "typecheck.m"
      }
#line 1270 "typecheck.m"
    else
#line 1271 "typecheck.m"
      {
#line 1271 "typecheck.m"
        check_hlds__typecheck__typecheck_goal_expr_7_p_0(check_hlds__typecheck__GoalExpr0_13, &check_hlds__typecheck__GoalExpr_24, check_hlds__typecheck__GoalInfo_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_30, check_hlds__typecheck__STATE_VARIABLE_Info_31);
      }
#line 1274 "typecheck.m"
    {
#line 1274 "typecheck.m"
      MR_Word base;
#line 1274 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "typecheck.m"
      *check_hlds__typecheck__Goal_9 = base;
#line 1274 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_24));
#line 1274 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_17));
#line 1274 "typecheck.m"
    }
#line 1217 "typecheck.m"
  }
#line 1213 "typecheck.m"
}

#line 1149 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(
#line 1149 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 1149 "typecheck.m"
  MR_Word check_hlds__typecheck__StuffToCheck_8,
#line 1149 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1149 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssignSet_10,
#line 1149 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_28,
#line 1149 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_29)
#line 1149 "typecheck.m"
{
#line 1161 "typecheck.m"
  {
#line 1161 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1161 "typecheck.m"
    if ((check_hlds__typecheck__TypeAssignSet_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1161 "typecheck.m"
      {
#line 1162 "typecheck.m"
        {
#line 1162 "typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/6", (MR_String) "no type-assignment");
#line 1162 "typecheck.m"
          return;
        }
#line 1161 "typecheck.m"
      }
#line 1161 "typecheck.m"
    else
#line 1161 "typecheck.m"
      {
#line 1161 "typecheck.m"
        MR_Word check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_10, (MR_Integer) 1)));
#line 1161 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_10, (MR_Integer) 0)));

#line 1161 "typecheck.m"
        if ((check_hlds__typecheck__V_36_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1164 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_28;
#line 1161 "typecheck.m"
        else
#line 1166 "typecheck.m"
          {
#line 1166 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_36_36, (MR_Integer) 0)));
#line 1166 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorsSoFar_16;
#line 1166 "typecheck.m"
            MR_Word check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_36_36, (MR_Integer) 1)));

#line 1176 "typecheck.m"
            {
#line 1176 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__ErrorsSoFar_16);
            }
#line 1178 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ErrorsSoFar_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1178 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1181 "typecheck.m"
#line 1181 "typecheck.m"
              switch (check_hlds__typecheck__StuffToCheck_8) {
#line 1181 "typecheck.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1181 "typecheck.m"
                case (MR_Integer) 0:
#line 1182 "typecheck.m"
                  {
#line 1182 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes1_17;
#line 1182 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes2_18;
#line 1182 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings1_19;
#line 1182 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings2_20;
#line 1182 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypes1_21;
#line 1182 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypes2_22;
#line 1182 "typecheck.m"
                    MR_Word check_hlds__typecheck__FinalHeadTypes1_23;
#line 1182 "typecheck.m"
                    MR_Word check_hlds__typecheck__FinalHeadTypes2_24;
#line 983 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_40_40;
#line 984 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_41_41;

#line 1187 "typecheck.m"
                    {
#line 1187 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__V_37_37, &check_hlds__typecheck__VarTypes1_17);
                    }
#line 1188 "typecheck.m"
                    {
#line 1188 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign2_14, &check_hlds__typecheck__VarTypes2_18);
                    }
#line 1189 "typecheck.m"
                    {
#line 1189 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__V_37_37, &check_hlds__typecheck__TypeBindings1_19);
                    }
#line 1190 "typecheck.m"
                    {
#line 1190 "typecheck.m"
                      check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign2_14, &check_hlds__typecheck__TypeBindings2_20);
                    }
#line 1191 "typecheck.m"
                    {
#line 1191 "typecheck.m"
                      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes1_17, check_hlds__typecheck__HeadVars_9, &check_hlds__typecheck__HeadTypes1_21);
                    }
#line 1192 "typecheck.m"
                    {
#line 1192 "typecheck.m"
                      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes2_18, check_hlds__typecheck__HeadVars_9, &check_hlds__typecheck__HeadTypes2_22);
                    }
#line 1193 "typecheck.m"
                    {
#line 1193 "typecheck.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings1_19, check_hlds__typecheck__HeadTypes1_21, &check_hlds__typecheck__FinalHeadTypes1_23);
                    }
#line 1195 "typecheck.m"
                    {
#line 1195 "typecheck.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings2_20, check_hlds__typecheck__HeadTypes2_22, &check_hlds__typecheck__FinalHeadTypes2_24);
                    }
#line 983 "typecheck.m"
                    {
#line 983 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes1_23, check_hlds__typecheck__FinalHeadTypes2_24, &check_hlds__typecheck__V_40_40);
                    }
#line 1182 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 984 "typecheck.m"
                      {
#line 984 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes2_24, check_hlds__typecheck__FinalHeadTypes1_23, &check_hlds__typecheck__V_41_41);
                      }
#line 1182 "typecheck.m"
                  }
#line 1181 "typecheck.m"
                  break;
#line 1181 "typecheck.m"
                case (MR_Integer) 1:
#line 1180 "typecheck.m"
                  check_hlds__typecheck__succeeded = MR_TRUE;
#line 1181 "typecheck.m"
                  break;
#line 1181 "typecheck.m"
              }
#line 1206 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1200 "typecheck.m"
              {
#line 1200 "typecheck.m"
                MR_Word check_hlds__typecheck__ClauseContext_25;
#line 1200 "typecheck.m"
                MR_Word check_hlds__typecheck__OverloadedSymbolMap_26;
#line 1200 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_27;

#line 1200 "typecheck.m"
                {
#line 1200 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__ClauseContext_25);
                }
#line 1201 "typecheck.m"
                {
#line 1201 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_get_overloaded_symbol_map_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_28, &check_hlds__typecheck__OverloadedSymbolMap_26);
                }
#line 1203 "typecheck.m"
                {
#line 1203 "typecheck.m"
                  check_hlds__typecheck__Spec_27 = check_hlds__typecheck_errors__report_ambiguity_error_5_f_0(check_hlds__typecheck__ClauseContext_25, check_hlds__typecheck__Context_7, check_hlds__typecheck__OverloadedSymbolMap_26, check_hlds__typecheck__V_37_37, check_hlds__typecheck__TypeAssign2_14);
                }
#line 1205 "typecheck.m"
                {
#line 1205 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_27, check_hlds__typecheck__STATE_VARIABLE_Info_0_28, check_hlds__typecheck__STATE_VARIABLE_Info_29);
#line 1205 "typecheck.m"
                  return;
                }
#line 1200 "typecheck.m"
              }
#line 1206 "typecheck.m"
            else
#line 1206 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_29 = check_hlds__typecheck__STATE_VARIABLE_Info_0_28;
#line 1166 "typecheck.m"
          }
#line 1161 "typecheck.m"
      }
#line 1161 "typecheck.m"
  }
#line 1149 "typecheck.m"
}

#line 2021 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0_1(
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2021 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2021 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2021 "typecheck.m"
{
#line 2021 "typecheck.m"
  {
#line 2021 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2021 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__3_3;

#line 2021 "typecheck.m"
    {
#line 2021 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_HeadVar__3_3);
    }
#line 2021 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__3_3));
#line 2021 "typecheck.m"
  }
#line 2021 "typecheck.m"
}

#line 1108 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_8_p_0(
#line 1108 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_9,
#line 1108 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_10,
#line 1108 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_22,
#line 1108 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_23,
#line 1108 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24,
#line 1108 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25,
#line 1108 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 1108 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27)
#line 1108 "typecheck.m"
{
#line 1112 "typecheck.m"
  {
#line 1112 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1112 "typecheck.m"
    MR_Word check_hlds__typecheck__Body0_14;
#line 1112 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_15;
#line 1112 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgVectorKind_16;
#line 1112 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_17;
#line 1112 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28;
#line 1112 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_29_29;
#line 1112 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_31_31;
#line 1112 "typecheck.m"
    MR_Word check_hlds__typecheck__Specs_67;
#line 1112 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeArgVectorTypeErrors_68;
#line 1114 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38;
#line 1114 "typecheck.m"
    MR_Word check_hlds__typecheck__V_39_39;
#line 1114 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 1114 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;
#line 2020 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgVectorTypeErrors_69;
#line 2013 "typecheck.m"
    MR_Word check_hlds__typecheck__V_80_80;
#line 2014 "typecheck.m"
    MR_Word check_hlds__typecheck__V_70_70;
#line 2014 "typecheck.m"
    MR_Word check_hlds__typecheck__V_71_71;
#line 2014 "typecheck.m"
    MR_Word check_hlds__typecheck__V_72_72;
#line 1128 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52;
#line 1128 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 1128 "typecheck.m"
    MR_Word check_hlds__typecheck__V_55_55;
#line 1128 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 1128 "typecheck.m"
    MR_Word check_hlds__typecheck__V_53_53;

#line 1113 "typecheck.m"
    {
#line 1113 "typecheck.m"
      check_hlds__typecheck__Body0_14 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__typecheck__STATE_VARIABLE_Clause_0_22);
    }
#line 1114 "typecheck.m"
    check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 0)));
#line 1114 "typecheck.m"
    check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 1)));
#line 1114 "typecheck.m"
    check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 2)));
#line 1114 "typecheck.m"
    check_hlds__typecheck__Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 3)));
#line 1114 "typecheck.m"
    check_hlds__typecheck__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 4)));
#line 1117 "typecheck.m"
    check_hlds__typecheck__ArgVectorKind_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2009 "typecheck.m"
    {
#line 2009 "typecheck.m"
      check_hlds__typecheck__typecheck_vars_have_types_in_arg_vector_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__Context_15, check_hlds__typecheck__ArgVectorKind_16, (MR_Integer) 1, check_hlds__typecheck__HeadVars_9, check_hlds__typecheck__ArgTypes_10, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_24, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Specs_67, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_7[0]), &check_hlds__typecheck__MaybeArgVectorTypeErrors_68);
    }
#line 2013 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__MaybeArgVectorTypeErrors_68)) == (MR_mktag((MR_Integer) 1)));
#line 2013 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2013 "typecheck.m"
      {
#line 2013 "typecheck.m"
        check_hlds__typecheck__ArgVectorTypeErrors_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeArgVectorTypeErrors_68, (MR_Integer) 0)));
#line 2014 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ArgVectorTypeErrors_69)) == (MR_mktag((MR_Integer) 1)));
#line 2014 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2014 "typecheck.m"
          {
#line 2014 "typecheck.m"
            check_hlds__typecheck__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_69, (MR_Integer) 0)));
#line 2014 "typecheck.m"
            check_hlds__typecheck__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgVectorTypeErrors_69, (MR_Integer) 1)));
#line 2014 "typecheck.m"
            check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 2014 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2014 "typecheck.m"
              {
#line 2014 "typecheck.m"
                check_hlds__typecheck__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_80_80, (MR_Integer) 0)));
#line 2014 "typecheck.m"
                check_hlds__typecheck__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_80_80, (MR_Integer) 1)));
#line 2014 "typecheck.m"
              }
#line 2014 "typecheck.m"
          }
#line 2013 "typecheck.m"
      }
#line 2020 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2016 "typecheck.m"
      {
#line 2016 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_73;
#line 2016 "typecheck.m"
        MR_Word check_hlds__typecheck__AllArgsSpec_74;

#line 2016 "typecheck.m"
        {
#line 2016 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__ClauseContext_73);
        }
#line 2017 "typecheck.m"
        {
#line 2017 "typecheck.m"
          check_hlds__typecheck__AllArgsSpec_74 = check_hlds__typecheck_errors__report_arg_vector_type_errors_5_f_0(check_hlds__typecheck__ClauseContext_73, check_hlds__typecheck__Context_15, check_hlds__typecheck__ArgVectorKind_16, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, check_hlds__typecheck__ArgVectorTypeErrors_69);
        }
#line 2019 "typecheck.m"
        {
#line 2019 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__AllArgsSpec_74, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__STATE_VARIABLE_Info_29_29);
        }
#line 2016 "typecheck.m"
      }
#line 2020 "typecheck.m"
    else
#line 2021 "typecheck.m"
      {
#line 2021 "typecheck.m"
        MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29;

#line 2021 "typecheck.m"
        {
#line 2021 "typecheck.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[1], check_hlds__typecheck__Specs_67, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_26)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29);
        }
#line 2021 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_Info_29_29 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_29_29);
#line 2021 "typecheck.m"
      }
#line 1120 "typecheck.m"
    {
#line 1120 "typecheck.m"
      check_hlds__typecheck__typecheck_goal_7_p_0(check_hlds__typecheck__Body0_14, &check_hlds__typecheck__Body_17, check_hlds__typecheck__Context_15, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_28_28, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_29_29, &check_hlds__typecheck__STATE_VARIABLE_Info_31_31);
    }
#line 1128 "typecheck.m"
    check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 0)));
#line 1128 "typecheck.m"
    check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 1)));
#line 1128 "typecheck.m"
    check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 2)));
#line 1128 "typecheck.m"
    check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 3)));
#line 1128 "typecheck.m"
    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_22, (MR_Integer) 4)));
#line 1128 "typecheck.m"
    {
#line 1128 "typecheck.m"
      MR_Word base;
#line 1128 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1128 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Clause_23 = base;
#line 1128 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_52_52));
#line 1128 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Body_17));
#line 1128 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_54_54));
#line 1128 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_55_55));
#line 1128 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_56_56));
#line 1128 "typecheck.m"
    }
#line 1129 "typecheck.m"
    {
#line 1129 "typecheck.m"
      check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(check_hlds__typecheck__Context_15, (MR_Integer) 0, check_hlds__typecheck__HeadVars_9, *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_25, check_hlds__typecheck__STATE_VARIABLE_Info_31_31, check_hlds__typecheck__STATE_VARIABLE_Info_27);
#line 1129 "typecheck.m"
      return;
    }
#line 1112 "typecheck.m"
  }
#line 1108 "typecheck.m"
}

#line 1068 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_8_p_0(
#line 1068 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1068 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1068 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1068 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 1068 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1068 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6,
#line 1068 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_7,
#line 1068 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_8)
#line 1068 "typecheck.m"
{
#line 1073 "typecheck.m"
  {
#line 1073 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1073 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1073 "typecheck.m"
      {
#line 1073 "typecheck.m"
        *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1073 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_8 = check_hlds__typecheck__STATE_VARIABLE_Info_0_7;
#line 1073 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
#line 1073 "typecheck.m"
      }
#line 1073 "typecheck.m"
    else
#line 1075 "typecheck.m"
      {
#line 1075 "typecheck.m"
        MR_Word check_hlds__typecheck__Clause0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 1075 "typecheck.m"
        MR_Word check_hlds__typecheck__Clauses0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 1075 "typecheck.m"
        MR_Word check_hlds__typecheck__Clause_21;
#line 1075 "typecheck.m"
        MR_Word check_hlds__typecheck__Clauses_22;
#line 1075 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29;
#line 1075 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_30_30;

#line 1076 "typecheck.m"
        {
#line 1076 "typecheck.m"
          check_hlds__typecheck__typecheck_clause_8_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clause0_19, &check_hlds__typecheck__Clause_21, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29, check_hlds__typecheck__STATE_VARIABLE_Info_0_7, &check_hlds__typecheck__STATE_VARIABLE_Info_30_30);
        }
#line 1078 "typecheck.m"
        {
#line 1078 "typecheck.m"
          check_hlds__typecheck__typecheck_clause_list_8_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clauses0_20, &check_hlds__typecheck__Clauses_22, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_29_29, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6, check_hlds__typecheck__STATE_VARIABLE_Info_30_30, check_hlds__typecheck__STATE_VARIABLE_Info_8);
        }
#line 1075 "typecheck.m"
        {
#line 1075 "typecheck.m"
          MR_Word base;
#line 1075 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 1075 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Clause_21));
#line 1075 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Clauses_22));
#line 1075 "typecheck.m"
        }
#line 1075 "typecheck.m"
      }
#line 1073 "typecheck.m"
  }
#line 1068 "typecheck.m"
}

#line 963 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
#line 963 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 963 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 963 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 963 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 963 "typecheck.m"
{
#line 966 "typecheck.m"
  {
#line 966 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 966 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 966 "typecheck.m"
      {
#line 966 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 966 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 966 "typecheck.m"
          {
#line 966 "typecheck.m"
            *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 966 "typecheck.m"
            *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 966 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 966 "typecheck.m"
          }
#line 966 "typecheck.m"
      }
#line 966 "typecheck.m"
    else
#line 968 "typecheck.m"
      {
#line 968 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_16_16;
#line 968 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 968 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintsA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 968 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintB_7;
#line 968 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintsB_8;
#line 968 "typecheck.m"
        MR_Word check_hlds__typecheck__ClassName_11;
#line 968 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypesA_12;
#line 968 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypesB_13;
#line 968 "typecheck.m"
        MR_Word check_hlds__typecheck__TypesA0_14;
#line 968 "typecheck.m"
        MR_Word check_hlds__typecheck__TypesB0_15;
#line 968 "typecheck.m"
        MR_Word check_hlds__typecheck__V_17_17;

#line 967 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 967 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 967 "typecheck.m"
          {
#line 967 "typecheck.m"
            check_hlds__typecheck__ConstraintB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 967 "typecheck.m"
            check_hlds__typecheck__ConstraintsB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 969 "typecheck.m"
            check_hlds__typecheck__ClassName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 0)));
#line 969 "typecheck.m"
            check_hlds__typecheck__ArgTypesA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 1)));
#line 970 "typecheck.m"
            check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 0)));
#line 970 "typecheck.m"
            check_hlds__typecheck__ArgTypesB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 1)));
#line 970 "typecheck.m"
            {
#line 970 "typecheck.m"
              check_hlds__typecheck__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__typecheck__ClassName_11, check_hlds__typecheck__V_17_17);
            }
#line 968 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 968 "typecheck.m"
              {
#line 15219 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 971 "typecheck.m"
                {
#line 971 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__ArgTypesB_13);
                }
#line 968 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 968 "typecheck.m"
                  {
#line 972 "typecheck.m"
                    {
#line 972 "typecheck.m"
                      check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ConstraintsA_6, check_hlds__typecheck__ConstraintsB_8, &check_hlds__typecheck__TypesA0_14, &check_hlds__typecheck__TypesB0_15);
                    }
#line 968 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 968 "typecheck.m"
                      {
#line 973 "typecheck.m"
                        {
#line 973 "typecheck.m"
                          *check_hlds__typecheck__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__TypesA0_14);
                        }
#line 974 "typecheck.m"
                        {
#line 974 "typecheck.m"
                          *check_hlds__typecheck__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesB_13, check_hlds__typecheck__TypesB0_15);
                        }
#line 974 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 968 "typecheck.m"
                      }
#line 968 "typecheck.m"
                  }
#line 968 "typecheck.m"
              }
#line 967 "typecheck.m"
          }
#line 968 "typecheck.m"
      }
#line 966 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 966 "typecheck.m"
  }
#line 963 "typecheck.m"
}

#line 929 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__KindMap_8,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesA_10,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesB_13,
#line 929 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsB_14)
#line 929 "typecheck.m"
{
#line 934 "typecheck.m"
  {
#line 934 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_29_29;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_18_43;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstrainedTypesA_15;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstrainedTypesB_16;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarTypesA_17;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarTypesB_18;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesListA_19;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesListB_20;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 0)));
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCsA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 1)));
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 0)));
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 1)));
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivTypesA_38;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivTypesB_39;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypesA_40;
#line 934 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypesB_41;
#line 983 "typecheck.m"
    MR_Word check_hlds__typecheck__V_46_46;
#line 984 "typecheck.m"
    MR_Word check_hlds__typecheck__V_47_47;

#line 956 "typecheck.m"
    {
#line 956 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36);
    }
#line 934 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 934 "typecheck.m"
      {
#line 957 "typecheck.m"
        {
#line 957 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37);
        }
#line 934 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 934 "typecheck.m"
          {
#line 958 "typecheck.m"
            {
#line 958 "typecheck.m"
              check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36, &check_hlds__typecheck__UnivTypesA_38, &check_hlds__typecheck__UnivTypesB_39);
            }
#line 934 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 934 "typecheck.m"
              {
#line 959 "typecheck.m"
                {
#line 959 "typecheck.m"
                  check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37, &check_hlds__typecheck__ExistTypesA_40, &check_hlds__typecheck__ExistTypesB_41);
                }
#line 934 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 934 "typecheck.m"
                  {
#line 15382 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_18_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 960 "typecheck.m"
                    {
#line 960 "typecheck.m"
                      check_hlds__typecheck__ConstrainedTypesA_15 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesA_40, check_hlds__typecheck__UnivTypesA_38);
                    }
#line 961 "typecheck.m"
                    {
#line 961 "typecheck.m"
                      check_hlds__typecheck__ConstrainedTypesB_16 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesB_41, check_hlds__typecheck__UnivTypesB_39);
                    }
#line 937 "typecheck.m"
                    {
#line 937 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsA_9, &check_hlds__typecheck__ExistQVarTypesA_17);
                    }
#line 938 "typecheck.m"
                    {
#line 938 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsB_12, &check_hlds__typecheck__ExistQVarTypesB_18);
                    }
#line 939 "typecheck.m"
                    check_hlds__typecheck__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15406 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 939 "typecheck.m"
                    {
#line 939 "typecheck.m"
                      check_hlds__typecheck__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesA_15));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__V_24_24));
#line 939 "typecheck.m"
                    }
#line 939 "typecheck.m"
                    {
#line 939 "typecheck.m"
                      check_hlds__typecheck__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesA_10));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__V_23_23));
#line 939 "typecheck.m"
                    }
#line 939 "typecheck.m"
                    {
#line 939 "typecheck.m"
                      check_hlds__typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesA_17));
#line 939 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__typecheck__V_22_22));
#line 939 "typecheck.m"
                    }
#line 939 "typecheck.m"
                    {
#line 939 "typecheck.m"
                      mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__V_21_21, &check_hlds__typecheck__TypesListA_19);
                    }
#line 940 "typecheck.m"
                    check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 940 "typecheck.m"
                    {
#line 940 "typecheck.m"
                      check_hlds__typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_27_27, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesB_16));
#line 940 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 940 "typecheck.m"
                    }
#line 940 "typecheck.m"
                    {
#line 940 "typecheck.m"
                      check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesB_13));
#line 940 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 1) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 940 "typecheck.m"
                    }
#line 940 "typecheck.m"
                    {
#line 940 "typecheck.m"
                      check_hlds__typecheck__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 940 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesB_18));
#line 940 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_25_25, 1) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 940 "typecheck.m"
                    }
#line 940 "typecheck.m"
                    {
#line 940 "typecheck.m"
                      mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__V_25_25, &check_hlds__typecheck__TypesListB_20);
                    }
#line 983 "typecheck.m"
                    {
#line 983 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListA_19, check_hlds__typecheck__TypesListB_20, &check_hlds__typecheck__V_46_46);
                    }
#line 934 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 984 "typecheck.m"
                      {
#line 984 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListB_20, check_hlds__typecheck__TypesListA_19, &check_hlds__typecheck__V_47_47);
                      }
#line 934 "typecheck.m"
                  }
#line 934 "typecheck.m"
              }
#line 934 "typecheck.m"
          }
#line 934 "typecheck.m"
      }
#line 934 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 934 "typecheck.m"
  }
#line 929 "typecheck.m"
}

#line 914 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
#line 914 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 914 "typecheck.m"
{
#line 914 "typecheck.m"
  {
#line 914 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 914 "typecheck.m"
    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0, 1);
#line 914 "typecheck.m"
  }
#line 914 "typecheck.m"
}

#line 914 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
#line 914 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 914 "typecheck.m"
{
#line 914 "typecheck.m"
  {
#line 914 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 914 "typecheck.m"
    {
#line 917 "typecheck.m"
      {
#line 917 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7)), (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3);
      }
#line 916 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
#line 916 "typecheck.m"
      if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded)
#line 916 "typecheck.m"
        {
#line 916 "typecheck.m"
          check_hlds__typecheck__is_head_class_constraint_2_p_0_1(check_hlds__typecheck__env_ptr);
#line 916 "typecheck.m"
          return;
        }
#line 914 "typecheck.m"
    }
#line 914 "typecheck.m"
  }
#line 914 "typecheck.m"
}

#line 914 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
#line 914 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 914 "typecheck.m"
{
#line 914 "typecheck.m"
  {
#line 914 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 914 "typecheck.m"
    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0) == 0)
#line 914 "typecheck.m"
      {
#line 915 "typecheck.m"
        {
#line 915 "typecheck.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7, check_hlds__typecheck__is_head_class_constraint_2_p_0_2, check_hlds__typecheck__env_ptr);
        }
#line 914 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_FALSE;
#line 914 "typecheck.m"
      }
#line 914 "typecheck.m"
    else
#line 914 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_TRUE;
#line 914 "typecheck.m"
  }
#line 914 "typecheck.m"
}

#line 909 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
#line 909 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
#line 909 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4)
#line 909 "typecheck.m"
{
#line 909 "typecheck.m"
  {
#line 909 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s check_hlds__typecheck__env;

#line 909 "typecheck.m"
    (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3 = check_hlds__typecheck__HeadTypeVars_3;
#line 912 "typecheck.m"
    {
#line 913 "typecheck.m"
      MR_Word check_hlds__typecheck___ClassName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 0)));

#line 913 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 1)));
#line 914 "typecheck.m"
      {
#line 914 "typecheck.m"
        check_hlds__typecheck__is_head_class_constraint_2_p_0_3(&check_hlds__typecheck__env);
      }
#line 914 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
#line 912 "typecheck.m"
      return (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
#line 912 "typecheck.m"
    }
#line 909 "typecheck.m"
  }
#line 909 "typecheck.m"
}

#line 906 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0_1(
#line 906 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 906 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 906 "typecheck.m"
{
#line 906 "typecheck.m"
  {
#line 906 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 906 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 906 "typecheck.m"
    {
#line 906 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__is_head_class_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 906 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 906 "typecheck.m"
  }
#line 906 "typecheck.m"
}

#line 893 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__restrict_to_head_vars_4_p_0(
#line 893 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 893 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVarTypes_7,
#line 893 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 893 "typecheck.m"
  MR_Word * check_hlds__typecheck__UnprovenCs_10)
#line 893 "typecheck.m"
{
#line 897 "typecheck.m"
  {
#line 897 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 897 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCs0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 897 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 897 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCs_8;
#line 897 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCs_9;
#line 897 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;
#line 906 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;

#line 906 "typecheck.m"
    {
#line 906 "typecheck.m"
      check_hlds__typecheck__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 906 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[1]));
#line 906 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 1) = ((MR_Box) (check_hlds__typecheck__restrict_to_head_vars_4_p_0_1));
#line 906 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 906 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_16_16, 3) = ((MR_Box) (check_hlds__typecheck__ArgVarTypes_7));
#line 906 "typecheck.m"
    }
#line 906 "typecheck.m"
    {
#line 906 "typecheck.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__typecheck__V_16_16, check_hlds__typecheck__UnivCs0_5, &check_hlds__typecheck__UnivCs_8, check_hlds__typecheck__UnprovenCs_10);
    }
#line 906 "typecheck.m"
    {
#line 906 "typecheck.m"
      mercury__list__filter_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__typecheck__V_16_16, check_hlds__typecheck__ExistCs0_6, &check_hlds__typecheck__ExistCs_9, &check_hlds__typecheck__V_11_11);
    }
#line 897 "typecheck.m"
    {
#line 897 "typecheck.m"
      MR_Word base;
#line 897 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 897 "typecheck.m"
      *check_hlds__typecheck__HeadVar__3_3 = base;
#line 897 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__UnivCs_8));
#line 897 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__ExistCs_9));
#line 897 "typecheck.m"
    }
#line 897 "typecheck.m"
  }
#line 893 "typecheck.m"
}

#line 858 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__infer_existential_types_4_p_0(
#line 858 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypeVars_5,
#line 858 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExistQVars_6,
#line 858 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeParams0_7,
#line 858 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadTypeParams_8)
#line 858 "typecheck.m"
{
#line 862 "typecheck.m"
  {
#line 862 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 862 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_14_14 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 862 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVarsSet_9;
#line 862 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadTypeParamsSet_10;
#line 862 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarsSet_11;
#line 862 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQVarsSet_12;
#line 862 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQVars_13;

#line 870 "typecheck.m"
    {
#line 870 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVars_5, &check_hlds__typecheck__ArgTypeVarsSet_9);
    }
#line 871 "typecheck.m"
    {
#line 871 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__HeadTypeParams0_7, &check_hlds__typecheck__HeadTypeParamsSet_10);
    }
#line 872 "typecheck.m"
    {
#line 872 "typecheck.m"
      mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVarsSet_9, check_hlds__typecheck__HeadTypeParamsSet_10, &check_hlds__typecheck__ExistQVarsSet_11);
    }
#line 873 "typecheck.m"
    {
#line 873 "typecheck.m"
      mercury__set__difference_3_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ArgTypeVarsSet_9, check_hlds__typecheck__ExistQVarsSet_11, &check_hlds__typecheck__UnivQVarsSet_12);
    }
#line 874 "typecheck.m"
    {
#line 874 "typecheck.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__ExistQVarsSet_11, check_hlds__typecheck__ExistQVars_6);
    }
#line 875 "typecheck.m"
    {
#line 875 "typecheck.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__UnivQVarsSet_12, &check_hlds__typecheck__UnivQVars_13);
    }
#line 883 "typecheck.m"
    {
#line 883 "typecheck.m"
      mercury__list__append_3_p_1(check_hlds__typecheck__TypeInfo_14_14, check_hlds__typecheck__UnivQVars_13, check_hlds__typecheck__HeadTypeParams0_7, check_hlds__typecheck__HeadTypeParams_8);
#line 883 "typecheck.m"
      return;
    }
#line 862 "typecheck.m"
  }
#line 858 "typecheck.m"
}

#line 836 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_instance_method_constraints_3_p_0(
#line 836 "typecheck.m"
  MR_Word check_hlds__typecheck__Renaming_4,
#line 836 "typecheck.m"
  MR_Word check_hlds__typecheck__Origin0_5,
#line 836 "typecheck.m"
  MR_Word * check_hlds__typecheck__Origin_6)
#line 836 "typecheck.m"
{
#line 852 "typecheck.m"
  {
#line 852 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin0_5)) == (MR_mktag((MR_Integer) 1)));
#line 852 "typecheck.m"
    MR_Word check_hlds__typecheck__MethodName_7;
#line 852 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints0_8;

#line 840 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 840 "typecheck.m"
      {
#line 840 "typecheck.m"
        check_hlds__typecheck__MethodName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Origin0_5, (MR_Integer) 0)));
#line 840 "typecheck.m"
        check_hlds__typecheck__Constraints0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Origin0_5, (MR_Integer) 1)));
#line 842 "typecheck.m"
        {
#line 842 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassId_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 0)));
#line 842 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceTypes0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 1)));
#line 842 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceConstraints0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 2)));
#line 842 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassMethodClassContext0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints0_8, (MR_Integer) 3)));
#line 842 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceTypes_13;
#line 842 "typecheck.m"
          MR_Word check_hlds__typecheck__InstanceConstraints_14;
#line 842 "typecheck.m"
          MR_Word check_hlds__typecheck__ClassMethodClassContext_15;
#line 842 "typecheck.m"
          MR_Word check_hlds__typecheck__Constraints_16;

#line 843 "typecheck.m"
          {
#line 843 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__InstanceTypes0_10, &check_hlds__typecheck__InstanceTypes_13);
          }
#line 845 "typecheck.m"
          {
#line 845 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__InstanceConstraints0_11, &check_hlds__typecheck__InstanceConstraints_14);
          }
#line 847 "typecheck.m"
          {
#line 847 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__Renaming_4, check_hlds__typecheck__ClassMethodClassContext0_12, &check_hlds__typecheck__ClassMethodClassContext_15);
          }
#line 849 "typecheck.m"
          {
#line 849 "typecheck.m"
            check_hlds__typecheck__Constraints_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 849 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 0) = ((MR_Box) (check_hlds__typecheck__ClassId_9));
#line 849 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 1) = ((MR_Box) (check_hlds__typecheck__InstanceTypes_13));
#line 849 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 2) = ((MR_Box) (check_hlds__typecheck__InstanceConstraints_14));
#line 849 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraints_16, 3) = ((MR_Box) (check_hlds__typecheck__ClassMethodClassContext_15));
#line 849 "typecheck.m"
          }
#line 851 "typecheck.m"
          {
#line 851 "typecheck.m"
            MR_Word base;
#line 851 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "typecheck.m"
            *check_hlds__typecheck__Origin_6 = base;
#line 851 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__MethodName_7));
#line 851 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Constraints_16));
#line 851 "typecheck.m"
          }
#line 842 "typecheck.m"
        }
#line 840 "typecheck.m"
      }
#line 840 "typecheck.m"
    else
#line 853 "typecheck.m"
      *check_hlds__typecheck__Origin_6 = check_hlds__typecheck__Origin0_5;
#line 852 "typecheck.m"
  }
#line 836 "typecheck.m"
}

#line 785 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__generate_stub_clause_4_p_0(
#line 785 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_5,
#line 785 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16,
#line 785 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_17,
#line 785 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7)
#line 785 "typecheck.m"
{
#line 790 "typecheck.m"
  {
#line 790 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__VarSet0_9;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__PredPieces_10;
#line 790 "typecheck.m"
    MR_String check_hlds__typecheck__PredName_11;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__StubClause_12;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__VarSet_13;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep_14;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers_15;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_35;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers_36;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__PredNameVar_37;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__UnifyGoal_38;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleName_39;
#line 790 "typecheck.m"
    MR_String check_hlds__typecheck__CalleeName_40;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_41;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__CallGoal_42;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo_43;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_44;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__V_49_49;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__V_58_58;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;
#line 790 "typecheck.m"
    MR_Word check_hlds__typecheck__V_61_61;

#line 790 "typecheck.m"
    {
#line 790 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18);
    }
#line 791 "typecheck.m"
    {
#line 791 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18, &check_hlds__typecheck__VarSet0_9);
    }
#line 792 "typecheck.m"
    {
#line 792 "typecheck.m"
      check_hlds__typecheck__PredPieces_10 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(check_hlds__typecheck__ModuleInfo_7, (MR_Integer) 0, check_hlds__typecheck__PredId_5);
    }
#line 794 "typecheck.m"
    {
#line 794 "typecheck.m"
      check_hlds__typecheck__PredName_11 = parse_tree__error_util__error_pieces_to_string_1_f_0(check_hlds__typecheck__PredPieces_10);
    }
#line 810 "typecheck.m"
    {
#line 810 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__Markers0_35);
    }
#line 811 "typecheck.m"
    {
#line 811 "typecheck.m"
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 0, check_hlds__typecheck__Markers0_35, &check_hlds__typecheck__Markers_36);
    }
#line 812 "typecheck.m"
    {
#line 812 "typecheck.m"
      hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_36, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_16, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
    }
#line 815 "typecheck.m"
    {
#line 815 "typecheck.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "PredName", &check_hlds__typecheck__PredNameVar_37, check_hlds__typecheck__VarSet0_9, &check_hlds__typecheck__VarSet_13);
    }
#line 816 "typecheck.m"
    {
#line 816 "typecheck.m"
      hlds__make_goal__make_string_const_construction_3_p_0(check_hlds__typecheck__PredNameVar_37, check_hlds__typecheck__PredName_11, &check_hlds__typecheck__UnifyGoal_38);
    }
#line 820 "typecheck.m"
    {
#line 820 "typecheck.m"
      check_hlds__typecheck__ModuleName_39 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
    }
#line 821 "typecheck.m"
    {
#line 821 "typecheck.m"
      check_hlds__typecheck__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(check_hlds__typecheck__ModuleName_39);
    }
#line 823 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 822 "typecheck.m"
      check_hlds__typecheck__CalleeName_40 = (MR_String) "sorry";
#line 823 "typecheck.m"
    else
#line 824 "typecheck.m"
      check_hlds__typecheck__CalleeName_40 = (MR_String) "no_clauses";
#line 826 "typecheck.m"
    {
#line 826 "typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_41);
    }
#line 827 "typecheck.m"
    {
#line 827 "typecheck.m"
      check_hlds__typecheck__V_49_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
#line 828 "typecheck.m"
    {
#line 828 "typecheck.m"
      check_hlds__typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 0) = ((MR_Box) (check_hlds__typecheck__PredNameVar_37));
#line 828 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 828 "typecheck.m"
    }
#line 829 "typecheck.m"
    {
#line 829 "typecheck.m"
      check_hlds__typecheck__V_56_56 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    }
#line 827 "typecheck.m"
    {
#line 827 "typecheck.m"
      hlds__goal_util__generate_simple_call_12_p_0(check_hlds__typecheck__V_49_49, check_hlds__typecheck__CalleeName_40, (MR_Integer) 0, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__typecheck__V_54_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__V_56_56, check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__Context_41, &check_hlds__typecheck__CallGoal_42);
    }
#line 832 "typecheck.m"
    {
#line 832 "typecheck.m"
      hlds__hlds_goal__goal_info_init_2_p_0(check_hlds__typecheck__Context_41, &check_hlds__typecheck__GoalInfo_43);
    }
#line 833 "typecheck.m"
    {
#line 833 "typecheck.m"
      check_hlds__typecheck__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 0) = ((MR_Box) (check_hlds__typecheck__CallGoal_42));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 833 "typecheck.m"
    }
#line 833 "typecheck.m"
    {
#line 833 "typecheck.m"
      check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__UnifyGoal_38));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 1) = ((MR_Box) (check_hlds__typecheck__V_61_61));
#line 833 "typecheck.m"
    }
#line 833 "typecheck.m"
    {
#line 833 "typecheck.m"
      check_hlds__typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 2) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 833 "typecheck.m"
    }
#line 833 "typecheck.m"
    {
#line 833 "typecheck.m"
      check_hlds__typecheck__Body_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Body_44, 0) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 833 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Body_44, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_43));
#line 833 "typecheck.m"
    }
#line 834 "typecheck.m"
    {
#line 834 "typecheck.m"
      check_hlds__typecheck__StubClause_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 834 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 1) = ((MR_Box) (check_hlds__typecheck__Body_44));
#line 834 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 3) = ((MR_Box) (check_hlds__typecheck__Context_41));
#line 834 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__StubClause_12, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 834 "typecheck.m"
    }
#line 797 "typecheck.m"
    {
#line 797 "typecheck.m"
      check_hlds__typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 0) = ((MR_Box) (check_hlds__typecheck__StubClause_12));
#line 797 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 797 "typecheck.m"
    }
#line 797 "typecheck.m"
    {
#line 797 "typecheck.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__V_21_21, &check_hlds__typecheck__ClausesRep_14);
    }
#line 798 "typecheck.m"
    {
#line 798 "typecheck.m"
      check_hlds__typecheck__ItemNumbers_15 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
    }
#line 799 "typecheck.m"
    {
#line 799 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_14, check_hlds__typecheck__ItemNumbers_15, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_18_18, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23);
    }
#line 800 "typecheck.m"
    {
#line 800 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_varset_3_p_0(check_hlds__typecheck__VarSet_13, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_23_23, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24);
    }
#line 801 "typecheck.m"
    {
#line 801 "typecheck.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_24_24, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, check_hlds__typecheck__STATE_VARIABLE_PredInfo_17);
#line 801 "typecheck.m"
      return;
    }
#line 790 "typecheck.m"
  }
#line 785 "typecheck.m"
}

#line 758 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_mention_existq_var_6_p_0(
#line 758 "typecheck.m"
  MR_Word check_hlds__typecheck__Context_7,
#line 758 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_8,
#line 758 "typecheck.m"
  MR_Word check_hlds__typecheck__Impl_9,
#line 758 "typecheck.m"
  MR_Word check_hlds__typecheck__TVar_10,
#line 758 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
#line 758 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17)
#line 758 "typecheck.m"
{
#line 762 "typecheck.m"
  {
#line 762 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 762 "typecheck.m"
    MR_String check_hlds__typecheck__Name_12;
#line 762 "typecheck.m"
    MR_String check_hlds__typecheck__VarName_13;

#line 763 "typecheck.m"
    {
#line 763 "typecheck.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__TypeVarSet_8, check_hlds__typecheck__TVar_10, &check_hlds__typecheck__Name_12);
    }
#line 764 "typecheck.m"
    {
#line 764 "typecheck.m"
      check_hlds__typecheck__VarName_13 = mercury__string__f_43_43_2_f_0((MR_String) "TypeInfo_for_", check_hlds__typecheck__Name_12);
    }
#line 765 "typecheck.m"
    {
#line 765 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__goal_util__foreign_proc_uses_variable_2_p_0(check_hlds__typecheck__Impl_9, check_hlds__typecheck__VarName_13);
    }
#line 767 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 767 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_17 = check_hlds__typecheck__STATE_VARIABLE_Info_0_16;
#line 767 "typecheck.m"
    else
#line 768 "typecheck.m"
      {
#line 768 "typecheck.m"
        MR_Word check_hlds__typecheck__ClauseContext_14;
#line 768 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_15;

#line 768 "typecheck.m"
        {
#line 768 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_error_clause_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_16, &check_hlds__typecheck__ClauseContext_14);
        }
#line 769 "typecheck.m"
        {
#line 769 "typecheck.m"
          check_hlds__typecheck__Spec_15 = check_hlds__typecheck_errors__report_missing_tvar_in_foreign_code_3_f_0(check_hlds__typecheck__ClauseContext_14, check_hlds__typecheck__Context_7, check_hlds__typecheck__VarName_13);
        }
#line 771 "typecheck.m"
        {
#line 771 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_15, check_hlds__typecheck__STATE_VARIABLE_Info_0_16, check_hlds__typecheck__STATE_VARIABLE_Info_17);
#line 771 "typecheck.m"
          return;
        }
#line 768 "typecheck.m"
      }
#line 762 "typecheck.m"
  }
#line 758 "typecheck.m"
}

#line 752 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0_1(
#line 752 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 752 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 752 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 752 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 752 "typecheck.m"
{
#line 752 "typecheck.m"
  {
#line 752 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 752 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17;

#line 752 "typecheck.m"
    {
#line 752 "typecheck.m"
      check_hlds__typecheck__check_mention_existq_var_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17);
    }
#line 752 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_Info_17));
#line 752 "typecheck.m"
  }
#line 752 "typecheck.m"
}

#line 745 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__check_existq_clause_5_p_0(
#line 745 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeVarSet_6,
#line 745 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVars_7,
#line 745 "typecheck.m"
  MR_Word check_hlds__typecheck__Clause_8,
#line 745 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 745 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21)
#line 745 "typecheck.m"
{
#line 748 "typecheck.m"
  {
#line 748 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 748 "typecheck.m"
    MR_Word check_hlds__typecheck__Goal_10;
#line 754 "typecheck.m"
    MR_Word check_hlds__typecheck__Impl_17;
#line 750 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 750 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;
#line 750 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;
#line 750 "typecheck.m"
    MR_Word check_hlds__typecheck__V_12_12;
#line 750 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_13_13;
#line 750 "typecheck.m"
    MR_Word check_hlds__typecheck__V_14_14;
#line 750 "typecheck.m"
    MR_Word check_hlds__typecheck__V_15_15;
#line 750 "typecheck.m"
    MR_Word check_hlds__typecheck__V_16_16;

#line 749 "typecheck.m"
    {
#line 749 "typecheck.m"
      check_hlds__typecheck__Goal_10 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__typecheck__Clause_8);
    }
#line 750 "typecheck.m"
    check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_10, (MR_Integer) 0)));
#line 750 "typecheck.m"
    check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_10, (MR_Integer) 1)));
#line 750 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__V_22_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 750 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 750 "typecheck.m"
      {
#line 750 "typecheck.m"
        check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 1)));
#line 750 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 2)));
#line 750 "typecheck.m"
        check_hlds__typecheck__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 3)));
#line 750 "typecheck.m"
        check_hlds__typecheck__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 4)));
#line 750 "typecheck.m"
        check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 5)));
#line 750 "typecheck.m"
        check_hlds__typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 6)));
#line 750 "typecheck.m"
        check_hlds__typecheck__Impl_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_22_22, (MR_Integer) 7)));
#line 751 "typecheck.m"
        {
#line 751 "typecheck.m"
          MR_Word check_hlds__typecheck__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 3)));
#line 751 "typecheck.m"
          MR_Word check_hlds__typecheck__V_23_23;
#line 751 "typecheck.m"
          MR_Word check_hlds__typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 0)));
#line 751 "typecheck.m"
          MR_Word check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 1)));
#line 751 "typecheck.m"
          MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 2)));
#line 751 "typecheck.m"
          MR_Word check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_8, (MR_Integer) 4)));
#line 752 "typecheck.m"
          MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21;

#line 752 "typecheck.m"
          {
#line 752 "typecheck.m"
            check_hlds__typecheck__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 752 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[0]));
#line 752 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__check_existq_clause_5_p_0_1));
#line 752 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 752 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 3) = ((MR_Box) (check_hlds__typecheck__Context_19));
#line 752 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 4) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_6));
#line 752 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 5) = ((MR_Box) (check_hlds__typecheck__Impl_17));
#line 752 "typecheck.m"
          }
#line 752 "typecheck.m"
          {
#line 752 "typecheck.m"
            mercury__list__foldl_4_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__V_23_23, check_hlds__typecheck__ExistQVars_7, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_0_20)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21);
          }
#line 752 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_21 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_21);
#line 751 "typecheck.m"
        }
#line 750 "typecheck.m"
      }
#line 750 "typecheck.m"
    else
#line 754 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_21 = check_hlds__typecheck__STATE_VARIABLE_Info_0_20;
#line 748 "typecheck.m"
  }
#line 745 "typecheck.m"
}

#line 696 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0_1(
#line 696 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 696 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 696 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 696 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 696 "typecheck.m"
{
#line 696 "typecheck.m"
  {
#line 696 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 696 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21;

#line 696 "typecheck.m"
    {
#line 696 "typecheck.m"
      check_hlds__typecheck__check_existq_clause_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21);
    }
#line 696 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_Info_21));
#line 696 "typecheck.m"
  }
#line 696 "typecheck.m"
}

#line 536 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__do_typecheck_pred_7_p_0(
#line 536 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_8,
#line 536 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_9,
#line 536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69,
#line 536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_70,
#line 536 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_71,
#line 536 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_72,
#line 536 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_12)
#line 536 "typecheck.m"
{
#line 542 "typecheck.m"
  {
#line 542 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0_17;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers_18;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVars_19;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ClauseVarSet_20;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes0_21;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__Status_22;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_23;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars0_25;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes0_26;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_27;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__Inferring_28;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConstraints_30;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ClassTable_32;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints_33;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunction_34;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMarkers_35;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__Clauses0_36;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__Clauses_37;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_38;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_39;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredVarTypes0_40;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredTypeConstraints0_41;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstraintProofMap_42;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstraintMap_43;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarRenaming_44;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypeRenaming_45;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredVarTypes_46;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes1_47;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ExplicitVarTypes_50;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep_51;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_52;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_53;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__InferredTypeConstraints_54;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__UnprovenBodyConstraints_55;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_90_90;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_92_92;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_94_94;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105;
#line 542 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_108_108;
#line 549 "typecheck.m"
    MR_Word check_hlds__typecheck___ArgTypeVarSet_24;

#line 542 "typecheck.m"
    {
#line 542 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73);
    }
#line 543 "typecheck.m"
    {
#line 543 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ClausesRep0_17, &check_hlds__typecheck__ItemNumbers_18);
    }
#line 544 "typecheck.m"
    {
#line 544 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__HeadVars_19);
    }
#line 545 "typecheck.m"
    {
#line 545 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_varset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ClauseVarSet_20);
    }
#line 546 "typecheck.m"
    {
#line 546 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__ExplicitVarTypes0_21);
    }
#line 547 "typecheck.m"
    {
#line 547 "typecheck.m"
      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__Status_22);
    }
#line 548 "typecheck.m"
    {
#line 548 "typecheck.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__TypeVarSet0_23);
    }
#line 549 "typecheck.m"
    {
#line 549 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck___ArgTypeVarSet_24, &check_hlds__typecheck__ExistQVars0_25, &check_hlds__typecheck__ArgTypes0_26);
    }
#line 551 "typecheck.m"
    {
#line 551 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__Markers0_27);
    }
#line 552 "typecheck.m"
    {
#line 552 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_27, (MR_Integer) 2);
    }
#line 564 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 557 "typecheck.m"
      {
#line 557 "typecheck.m"
        check_hlds__typecheck__Inferring_28 = (MR_Integer) 1;
#line 559 "typecheck.m"
        {
#line 559 "typecheck.m"
          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Inferring type of ", check_hlds__typecheck__PredId_9, check_hlds__typecheck__ModuleInfo_8);
        }
#line 562 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "typecheck.m"
        check_hlds__typecheck__PredConstraints_30 = (MR_Word) &check_hlds__typecheck_scalar_common_1[21];
#line 557 "typecheck.m"
      }
#line 564 "typecheck.m"
    else
#line 565 "typecheck.m"
      {
#line 565 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_121_121;
#line 565 "typecheck.m"
        MR_Word check_hlds__typecheck__UnivTVars_31;
#line 565 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_84_84;
#line 565 "typecheck.m"
        MR_Word check_hlds__typecheck__V_85_85;
#line 565 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86;
#line 565 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_87_87;
#line 572 "typecheck.m"
        MR_Word check_hlds__typecheck__V_120_120;

#line 565 "typecheck.m"
        check_hlds__typecheck__Inferring_28 = (MR_Integer) 0;
#line 567 "typecheck.m"
        {
#line 567 "typecheck.m"
          hlds__passes_aux__write_pred_progress_message_5_p_0((MR_String) "% Type-checking ", check_hlds__typecheck__PredId_9, check_hlds__typecheck__ModuleInfo_8);
        }
#line 570 "typecheck.m"
        {
#line 570 "typecheck.m"
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes0_26, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_84_84);
        }
#line 571 "typecheck.m"
        {
#line 571 "typecheck.m"
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__PredConstraints_30);
        }
#line 572 "typecheck.m"
        check_hlds__typecheck__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredConstraints_30, (MR_Integer) 0)));
#line 572 "typecheck.m"
        check_hlds__typecheck__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredConstraints_30, (MR_Integer) 1)));
#line 572 "typecheck.m"
        {
#line 572 "typecheck.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__typecheck__V_85_85, &check_hlds__typecheck__UnivTVars_31);
        }
#line 16694 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeInfo_121_121 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 574 "typecheck.m"
        {
#line 574 "typecheck.m"
          check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__UnivTVars_31, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_84_84);
        }
#line 575 "typecheck.m"
        {
#line 575 "typecheck.m"
          mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_86_86, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_87_87);
        }
#line 576 "typecheck.m"
        {
#line 576 "typecheck.m"
          mercury__list__delete_elems_3_p_0(check_hlds__typecheck__TypeInfo_121_121, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_87_87, check_hlds__typecheck__ExistQVars0_25, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78);
        }
#line 565 "typecheck.m"
      }
#line 579 "typecheck.m"
    {
#line 579 "typecheck.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_8, &check_hlds__typecheck__ClassTable_32);
    }
#line 580 "typecheck.m"
    {
#line 580 "typecheck.m"
      hlds__hlds_data__make_head_hlds_constraints_4_p_0(check_hlds__typecheck__ClassTable_32, check_hlds__typecheck__TypeVarSet0_23, check_hlds__typecheck__PredConstraints_30, &check_hlds__typecheck__Constraints_33);
    }
#line 582 "typecheck.m"
    {
#line 582 "typecheck.m"
      check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69);
    }
#line 584 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 583 "typecheck.m"
      check_hlds__typecheck__IsFieldAccessFunction_34 = (MR_Integer) 1;
#line 584 "typecheck.m"
    else
#line 585 "typecheck.m"
      check_hlds__typecheck__IsFieldAccessFunction_34 = (MR_Integer) 0;
#line 587 "typecheck.m"
    {
#line 587 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__PredMarkers_35);
    }
#line 588 "typecheck.m"
    {
#line 588 "typecheck.m"
      check_hlds__type_assign__type_assign_set_init_5_p_0(check_hlds__typecheck__TypeVarSet0_23, check_hlds__typecheck__ExplicitVarTypes0_21, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78, check_hlds__typecheck__Constraints_33, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89);
    }
#line 590 "typecheck.m"
    {
#line 590 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_init_8_p_0(check_hlds__typecheck__ModuleInfo_8, check_hlds__typecheck__PredId_9, check_hlds__typecheck__IsFieldAccessFunction_34, check_hlds__typecheck__ClauseVarSet_20, check_hlds__typecheck__Status_22, check_hlds__typecheck__PredMarkers_35, check_hlds__typecheck__STATE_VARIABLE_Specs_0_71, &check_hlds__typecheck__STATE_VARIABLE_Info_90_90);
    }
#line 592 "typecheck.m"
    {
#line 592 "typecheck.m"
      hlds__hlds_clauses__get_clause_list_2_p_0(check_hlds__typecheck__ClausesRep0_17, &check_hlds__typecheck__Clauses0_36);
    }
#line 593 "typecheck.m"
    {
#line 593 "typecheck.m"
      check_hlds__typecheck__typecheck_clause_list_8_p_0(check_hlds__typecheck__HeadVars_19, check_hlds__typecheck__ArgTypes0_26, check_hlds__typecheck__Clauses0_36, &check_hlds__typecheck__Clauses_37, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_89_89, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91, check_hlds__typecheck__STATE_VARIABLE_Info_90_90, &check_hlds__typecheck__STATE_VARIABLE_Info_92_92);
    }
#line 597 "typecheck.m"
    {
#line 597 "typecheck.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__Context_38);
    }
#line 598 "typecheck.m"
    {
#line 598 "typecheck.m"
      check_hlds__typeclasses__perform_context_reduction_5_p_0(check_hlds__typecheck__Context_38, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_91_91, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_Info_92_92, &check_hlds__typecheck__STATE_VARIABLE_Info_94_94);
    }
#line 599 "typecheck.m"
    {
#line 599 "typecheck.m"
      check_hlds__typecheck__typecheck_check_for_ambiguity_6_p_0(check_hlds__typecheck__Context_38, (MR_Integer) 1, check_hlds__typecheck__HeadVars_19, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_Info_94_94, &check_hlds__typecheck__STATE_VARIABLE_Info_96_96);
    }
#line 601 "typecheck.m"
    {
#line 601 "typecheck.m"
      check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_93_93, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_78_78, check_hlds__typecheck__ExistQVars0_25, check_hlds__typecheck__ExplicitVarTypes0_21, &check_hlds__typecheck__TypeVarSet_39, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97, &check_hlds__typecheck__InferredVarTypes0_40, &check_hlds__typecheck__InferredTypeConstraints0_41, &check_hlds__typecheck__ConstraintProofMap_42, &check_hlds__typecheck__ConstraintMap_43, &check_hlds__typecheck__TVarRenaming_44, &check_hlds__typecheck__ExistTypeRenaming_45);
    }
#line 606 "typecheck.m"
    {
#line 606 "typecheck.m"
      hlds__vartypes__vartypes_optimize_2_p_0(check_hlds__typecheck__InferredVarTypes0_40, &check_hlds__typecheck__InferredVarTypes_46);
    }
#line 607 "typecheck.m"
    {
#line 607 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__typecheck__InferredVarTypes_46, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_73_73, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98);
    }
#line 613 "typecheck.m"
    if ((check_hlds__typecheck__ExistQVars0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 612 "typecheck.m"
      check_hlds__typecheck__ExplicitVarTypes1_47 = check_hlds__typecheck__ExplicitVarTypes0_21;
#line 613 "typecheck.m"
    else
#line 615 "typecheck.m"
      {
#line 615 "typecheck.m"
        hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__ExplicitVarTypes0_21, &check_hlds__typecheck__ExplicitVarTypes1_47);
      }
#line 618 "typecheck.m"
    {
#line 618 "typecheck.m"
      hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__ExplicitVarTypes1_47, &check_hlds__typecheck__ExplicitVarTypes_50);
    }
#line 621 "typecheck.m"
    {
#line 621 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_explicit_vartypes_3_p_0(check_hlds__typecheck__ExplicitVarTypes_50, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_98_98, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99);
    }
#line 622 "typecheck.m"
    {
#line 622 "typecheck.m"
      hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__Clauses_37, &check_hlds__typecheck__ClausesRep_51);
    }
#line 623 "typecheck.m"
    {
#line 623 "typecheck.m"
      hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_51, check_hlds__typecheck__ItemNumbers_18, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_99_99, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100);
    }
#line 624 "typecheck.m"
    {
#line 624 "typecheck.m"
      hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_100_100, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_69, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101);
    }
#line 625 "typecheck.m"
    {
#line 625 "typecheck.m"
      hlds__hlds_pred__pred_info_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__STATE_VARIABLE_PredInfo_101_101, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102);
    }
#line 626 "typecheck.m"
    {
#line 626 "typecheck.m"
      hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(check_hlds__typecheck__ConstraintProofMap_42, check_hlds__typecheck__STATE_VARIABLE_PredInfo_102_102, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103);
    }
#line 627 "typecheck.m"
    {
#line 627 "typecheck.m"
      hlds__hlds_pred__pred_info_set_constraint_map_3_p_0(check_hlds__typecheck__ConstraintMap_43, check_hlds__typecheck__STATE_VARIABLE_PredInfo_103_103, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104);
    }
#line 632 "typecheck.m"
    {
#line 632 "typecheck.m"
      hlds__vartypes__lookup_var_types_3_p_0(check_hlds__typecheck__InferredVarTypes_46, check_hlds__typecheck__HeadVars_19, &check_hlds__typecheck__ArgTypes_52);
    }
#line 633 "typecheck.m"
    {
#line 633 "typecheck.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes_52, &check_hlds__typecheck__ArgTypeVars_53);
    }
#line 634 "typecheck.m"
    {
#line 634 "typecheck.m"
      check_hlds__typecheck__restrict_to_head_vars_4_p_0(check_hlds__typecheck__InferredTypeConstraints0_41, check_hlds__typecheck__ArgTypeVars_53, &check_hlds__typecheck__InferredTypeConstraints_54, &check_hlds__typecheck__UnprovenBodyConstraints_55);
    }
#line 644 "typecheck.m"
    {
#line 644 "typecheck.m"
      hlds__hlds_pred__pred_info_set_unproven_body_constraints_3_p_0(check_hlds__typecheck__UnprovenBodyConstraints_55, check_hlds__typecheck__STATE_VARIABLE_PredInfo_104_104, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105);
    }
#line 673 "typecheck.m"
#line 673 "typecheck.m"
    switch (check_hlds__typecheck__Inferring_28) {
#line 673 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 673 "typecheck.m"
      case (MR_Integer) 0:
#line 674 "typecheck.m"
        {
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__Origin0_59;
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__ExistQVars1_60;
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__ArgTypes1_61;
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__PredConstraints1_62;
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__Origin1_63;
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__RenamedOldArgTypes_66;
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__RenamedOldConstraints_67;
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__Origin_68;
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106;
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109;
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110;
#line 674 "typecheck.m"
          MR_Word check_hlds__typecheck__ExistQVars_118;

#line 675 "typecheck.m"
          {
#line 675 "typecheck.m"
            hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97, check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106);
          }
#line 676 "typecheck.m"
          {
#line 676 "typecheck.m"
            hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106, &check_hlds__typecheck__Origin0_59);
          }
#line 693 "typecheck.m"
          if ((check_hlds__typecheck__ExistQVars0_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 687 "typecheck.m"
            {
#line 689 "typecheck.m"
              check_hlds__typecheck__ExistQVars1_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 690 "typecheck.m"
              check_hlds__typecheck__ArgTypes1_61 = check_hlds__typecheck__ArgTypes0_26;
#line 691 "typecheck.m"
              check_hlds__typecheck__PredConstraints1_62 = check_hlds__typecheck__PredConstraints_30;
#line 692 "typecheck.m"
              check_hlds__typecheck__Origin1_63 = check_hlds__typecheck__Origin0_59;
#line 687 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
#line 687 "typecheck.m"
            }
#line 693 "typecheck.m"
          else
#line 694 "typecheck.m"
            {
#line 694 "typecheck.m"
              MR_Word check_hlds__typecheck__V_107_107;
#line 695 "typecheck.m"
              MR_Box check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108;

#line 696 "typecheck.m"
              {
#line 696 "typecheck.m"
                check_hlds__typecheck__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 696 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[0]));
#line 696 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 1) = ((MR_Box) (check_hlds__typecheck__do_typecheck_pred_7_p_0_1));
#line 696 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 696 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 3) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_39));
#line 696 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_107_107, 4) = ((MR_Box) (check_hlds__typecheck__ExistQVars0_25));
#line 696 "typecheck.m"
              }
#line 695 "typecheck.m"
              {
#line 695 "typecheck.m"
                mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, check_hlds__typecheck__V_107_107, check_hlds__typecheck__Clauses_37, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_96_96)), &check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108);
              }
#line 695 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = ((MR_Word) check_hlds__typecheck__conv1_STATE_VARIABLE_Info_108_108);
#line 699 "typecheck.m"
              {
#line 699 "typecheck.m"
                mercury__term__apply_renaming_in_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__ExistQVars0_25, &check_hlds__typecheck__ExistQVars1_60);
              }
#line 701 "typecheck.m"
              {
#line 701 "typecheck.m"
                parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__ArgTypes0_26, &check_hlds__typecheck__ArgTypes1_61);
              }
#line 703 "typecheck.m"
              {
#line 703 "typecheck.m"
                parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__PredConstraints_30, &check_hlds__typecheck__PredConstraints1_62);
              }
#line 705 "typecheck.m"
              {
#line 705 "typecheck.m"
                check_hlds__typecheck__rename_instance_method_constraints_3_p_0(check_hlds__typecheck__ExistTypeRenaming_45, check_hlds__typecheck__Origin0_59, &check_hlds__typecheck__Origin1_63);
              }
#line 694 "typecheck.m"
            }
#line 710 "typecheck.m"
          {
#line 710 "typecheck.m"
            mercury__term__apply_renaming_in_vars_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__ExistQVars1_60, &check_hlds__typecheck__ExistQVars_118);
          }
#line 712 "typecheck.m"
          {
#line 712 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__ArgTypes1_61, &check_hlds__typecheck__RenamedOldArgTypes_66);
          }
#line 714 "typecheck.m"
          {
#line 714 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__PredConstraints1_62, &check_hlds__typecheck__RenamedOldConstraints_67);
          }
#line 716 "typecheck.m"
          {
#line 716 "typecheck.m"
            check_hlds__typecheck__rename_instance_method_constraints_3_p_0(check_hlds__typecheck__TVarRenaming_44, check_hlds__typecheck__Origin1_63, &check_hlds__typecheck__Origin_68);
          }
#line 719 "typecheck.m"
          {
#line 719 "typecheck.m"
            hlds__hlds_pred__pred_info_set_arg_types_5_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__ExistQVars_118, check_hlds__typecheck__RenamedOldArgTypes_66, check_hlds__typecheck__STATE_VARIABLE_PredInfo_106_106, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109);
          }
#line 721 "typecheck.m"
          {
#line 721 "typecheck.m"
            hlds__hlds_pred__pred_info_set_class_context_3_p_0(check_hlds__typecheck__RenamedOldConstraints_67, check_hlds__typecheck__STATE_VARIABLE_PredInfo_109_109, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110);
          }
#line 722 "typecheck.m"
          {
#line 722 "typecheck.m"
            hlds__hlds_pred__pred_info_set_origin_3_p_0(check_hlds__typecheck__Origin_68, check_hlds__typecheck__STATE_VARIABLE_PredInfo_110_110, check_hlds__typecheck__STATE_VARIABLE_PredInfo_70);
          }
#line 724 "typecheck.m"
          *check_hlds__typecheck__Changed_12 = (MR_Integer) 0;
#line 674 "typecheck.m"
        }
#line 673 "typecheck.m"
        break;
#line 673 "typecheck.m"
      case (MR_Integer) 1:
#line 648 "typecheck.m"
        {
#line 648 "typecheck.m"
          MR_Word check_hlds__typecheck__ExistQVars_56;
#line 648 "typecheck.m"
          MR_Word check_hlds__typecheck__OldTypeConstraints_57;
#line 648 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_112_112;
#line 648 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113;
#line 648 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114;
#line 664 "typecheck.m"
          MR_Word check_hlds__typecheck__TVarKindMap_58;

#line 651 "typecheck.m"
          {
#line 651 "typecheck.m"
            check_hlds__typecheck__infer_existential_types_4_p_0(check_hlds__typecheck__ArgTypeVars_53, &check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_97_97, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_112_112);
          }
#line 654 "typecheck.m"
          {
#line 654 "typecheck.m"
            hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_112_112, check_hlds__typecheck__STATE_VARIABLE_PredInfo_105_105, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113);
          }
#line 655 "typecheck.m"
          {
#line 655 "typecheck.m"
            hlds__hlds_pred__pred_info_set_arg_types_5_p_0(check_hlds__typecheck__TypeVarSet_39, check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__ArgTypes_52, check_hlds__typecheck__STATE_VARIABLE_PredInfo_113_113, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114);
          }
#line 657 "typecheck.m"
          {
#line 657 "typecheck.m"
            hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114, &check_hlds__typecheck__OldTypeConstraints_57);
          }
#line 658 "typecheck.m"
          {
#line 658 "typecheck.m"
            hlds__hlds_pred__pred_info_set_class_context_3_p_0(check_hlds__typecheck__InferredTypeConstraints_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_114_114, check_hlds__typecheck__STATE_VARIABLE_PredInfo_70);
          }
#line 664 "typecheck.m"
          {
#line 664 "typecheck.m"
            hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(*check_hlds__typecheck__STATE_VARIABLE_PredInfo_70, &check_hlds__typecheck__TVarKindMap_58);
          }
#line 665 "typecheck.m"
          {
#line 665 "typecheck.m"
            check_hlds__typecheck__succeeded = check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(check_hlds__typecheck__TVarKindMap_58, check_hlds__typecheck__ExistQVars0_25, check_hlds__typecheck__ArgTypes0_26, check_hlds__typecheck__OldTypeConstraints_57, check_hlds__typecheck__ExistQVars_56, check_hlds__typecheck__ArgTypes_52, check_hlds__typecheck__InferredTypeConstraints_54);
          }
#line 670 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 669 "typecheck.m"
            *check_hlds__typecheck__Changed_12 = (MR_Integer) 0;
#line 670 "typecheck.m"
          else
#line 671 "typecheck.m"
            *check_hlds__typecheck__Changed_12 = (MR_Integer) 1;
#line 648 "typecheck.m"
          check_hlds__typecheck__STATE_VARIABLE_Info_108_108 = check_hlds__typecheck__STATE_VARIABLE_Info_96_96;
#line 648 "typecheck.m"
        }
#line 673 "typecheck.m"
        break;
#line 673 "typecheck.m"
    }
#line 726 "typecheck.m"
    {
#line 726 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_108_108, check_hlds__typecheck__STATE_VARIABLE_Specs_72);
#line 726 "typecheck.m"
      return;
    }
#line 542 "typecheck.m"
  }
#line 536 "typecheck.m"
}

#line 506 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0_1(
#line 506 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg)
#line 506 "typecheck.m"
{
#line 506 "typecheck.m"
  {
#line 506 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 506 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 506 "typecheck.m"
    {
#line 506 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__506__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))));
    }
#line 506 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 506 "typecheck.m"
  }
#line 506 "typecheck.m"
}

#line 442 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_pred_6_p_0(
#line 442 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_7,
#line 442 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_8,
#line 442 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32,
#line 442 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_PredInfo_33,
#line 442 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_10,
#line 442 "typecheck.m"
  MR_Word * check_hlds__typecheck__Changed_11)
#line 442 "typecheck.m"
{
#line 445 "typecheck.m"
  {
#line 445 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__Globals_12;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes0_15;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesInfo0_16;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0_17;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__ItemNumbers0_18;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__Markers0_19;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep0IsEmpty_20;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__StartingSpecs_22;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep1_26;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVars_28;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__ClausesRep1IsEmpty_29;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42;
#line 445 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45;
#line 453 "typecheck.m"
    MR_Word check_hlds__typecheck___ArgTypeVarSet_13;
#line 453 "typecheck.m"
    MR_Word check_hlds__typecheck___ExistQVars0_14;
#line 501 "typecheck.m"
    MR_Word check_hlds__typecheck___ItemNumbers_27;

#line 452 "typecheck.m"
    {
#line 452 "typecheck.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_7, &check_hlds__typecheck__Globals_12);
    }
#line 453 "typecheck.m"
    {
#line 453 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck___ArgTypeVarSet_13, &check_hlds__typecheck___ExistQVars0_14, &check_hlds__typecheck__ArgTypes0_15);
    }
#line 455 "typecheck.m"
    {
#line 455 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__ClausesInfo0_16);
    }
#line 456 "typecheck.m"
    {
#line 456 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_16, &check_hlds__typecheck__ClausesRep0_17, &check_hlds__typecheck__ItemNumbers0_18);
    }
#line 457 "typecheck.m"
    {
#line 457 "typecheck.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__Markers0_19);
    }
#line 458 "typecheck.m"
    {
#line 458 "typecheck.m"
      check_hlds__typecheck__ClausesRep0IsEmpty_20 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_17);
    }
#line 476 "typecheck.m"
#line 476 "typecheck.m"
    switch (check_hlds__typecheck__ClausesRep0IsEmpty_20) {
#line 476 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 476 "typecheck.m"
      case (MR_Integer) 0:
#line 477 "typecheck.m"
        {
#line 477 "typecheck.m"
          MR_Word check_hlds__typecheck__WarnNonContiguousForeignProcs_23;

#line 478 "typecheck.m"
          {
#line 478 "typecheck.m"
            libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_12, (MR_Integer) 16, &check_hlds__typecheck__WarnNonContiguousForeignProcs_23);
          }
#line 484 "typecheck.m"
#line 484 "typecheck.m"
          switch (check_hlds__typecheck__WarnNonContiguousForeignProcs_23) {
#line 484 "typecheck.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 484 "typecheck.m"
            case (MR_Integer) 0:
#line 485 "typecheck.m"
              {
#line 485 "typecheck.m"
                MR_Word check_hlds__typecheck__WarnNonContiguousClauses_24;

#line 486 "typecheck.m"
                {
#line 486 "typecheck.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_12, (MR_Integer) 15, &check_hlds__typecheck__WarnNonContiguousClauses_24);
                }
#line 492 "typecheck.m"
#line 492 "typecheck.m"
                switch (check_hlds__typecheck__WarnNonContiguousClauses_24) {
#line 492 "typecheck.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 492 "typecheck.m"
                  case (MR_Integer) 0:
#line 494 "typecheck.m"
                    check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 492 "typecheck.m"
                    break;
#line 492 "typecheck.m"
                  case (MR_Integer) 1:
#line 489 "typecheck.m"
                    {
#line 741 "typecheck.m"
                      MR_Word check_hlds__typecheck__FirstRegion_69;
#line 741 "typecheck.m"
                      MR_Word check_hlds__typecheck__SecondRegion_70;
#line 741 "typecheck.m"
                      MR_Word check_hlds__typecheck__LaterRegions_71;

#line 735 "typecheck.m"
                      {
#line 735 "typecheck.m"
                        check_hlds__typecheck__succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(check_hlds__typecheck__ItemNumbers0_18, (MR_Integer) 0, &check_hlds__typecheck__FirstRegion_69, &check_hlds__typecheck__SecondRegion_70, &check_hlds__typecheck__LaterRegions_71);
                      }
#line 741 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 739 "typecheck.m"
                        {
#line 739 "typecheck.m"
                          MR_Word check_hlds__typecheck__Spec_72;

#line 738 "typecheck.m"
                          {
#line 738 "typecheck.m"
                            check_hlds__typecheck__Spec_72 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__typecheck__FirstRegion_69, check_hlds__typecheck__SecondRegion_70, check_hlds__typecheck__LaterRegions_71);
                          }
#line 740 "typecheck.m"
                          {
#line 740 "typecheck.m"
                            check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 0) = ((MR_Box) (check_hlds__typecheck__Spec_72));
#line 740 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "typecheck.m"
                          }
#line 739 "typecheck.m"
                        }
#line 741 "typecheck.m"
                      else
#line 742 "typecheck.m"
                        check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 489 "typecheck.m"
                    }
#line 492 "typecheck.m"
                    break;
#line 492 "typecheck.m"
                }
#line 485 "typecheck.m"
              }
#line 484 "typecheck.m"
              break;
#line 484 "typecheck.m"
            case (MR_Integer) 1:
#line 481 "typecheck.m"
              {
#line 741 "typecheck.m"
                MR_Word check_hlds__typecheck__FirstRegion_80;
#line 741 "typecheck.m"
                MR_Word check_hlds__typecheck__SecondRegion_81;
#line 741 "typecheck.m"
                MR_Word check_hlds__typecheck__LaterRegions_82;

#line 735 "typecheck.m"
                {
#line 735 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_clauses__clauses_are_non_contiguous_5_p_0(check_hlds__typecheck__ItemNumbers0_18, (MR_Integer) 1, &check_hlds__typecheck__FirstRegion_80, &check_hlds__typecheck__SecondRegion_81, &check_hlds__typecheck__LaterRegions_82);
                }
#line 741 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 739 "typecheck.m"
                  {
#line 739 "typecheck.m"
                    MR_Word check_hlds__typecheck__Spec_83;

#line 738 "typecheck.m"
                    {
#line 738 "typecheck.m"
                      check_hlds__typecheck__Spec_83 = check_hlds__typecheck_errors__report_non_contiguous_clauses_6_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, check_hlds__typecheck__FirstRegion_80, check_hlds__typecheck__SecondRegion_81, check_hlds__typecheck__LaterRegions_82);
                    }
#line 740 "typecheck.m"
                    {
#line 740 "typecheck.m"
                      check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 0) = ((MR_Box) (check_hlds__typecheck__Spec_83));
#line 740 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 740 "typecheck.m"
                    }
#line 739 "typecheck.m"
                  }
#line 741 "typecheck.m"
                else
#line 742 "typecheck.m"
                  check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 481 "typecheck.m"
              }
#line 484 "typecheck.m"
              break;
#line 484 "typecheck.m"
          }
#line 477 "typecheck.m"
          check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32;
#line 477 "typecheck.m"
        }
#line 476 "typecheck.m"
        break;
#line 476 "typecheck.m"
      case (MR_Integer) 1:
#line 468 "typecheck.m"
        {
#line 463 "typecheck.m"
          MR_Word check_hlds__typecheck__V_40_40;

#line 462 "typecheck.m"
          {
#line 462 "typecheck.m"
            check_hlds__typecheck__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__typecheck__Globals_12, (MR_Integer) 168, (MR_Integer) 1);
          }
#line 462 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 462 "typecheck.m"
            {
#line 463 "typecheck.m"
              check_hlds__typecheck__V_40_40 = (MR_Integer) 9;
#line 463 "typecheck.m"
              {
#line 463 "typecheck.m"
                check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_19, check_hlds__typecheck__V_40_40);
              }
#line 463 "typecheck.m"
              check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 462 "typecheck.m"
            }
#line 468 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 465 "typecheck.m"
            {
#line 465 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_21;

#line 465 "typecheck.m"
              {
#line 465 "typecheck.m"
                check_hlds__typecheck__Spec_21 = check_hlds__typecheck_errors__report_no_clauses_stub_3_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32);
              }
#line 466 "typecheck.m"
              {
#line 466 "typecheck.m"
                check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 0) = ((MR_Box) (check_hlds__typecheck__Spec_21));
#line 466 "typecheck.m"
                MR_hl_field(MR_mktag(1), check_hlds__typecheck__StartingSpecs_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 466 "typecheck.m"
              }
#line 467 "typecheck.m"
              {
#line 467 "typecheck.m"
                check_hlds__typecheck__generate_stub_clause_4_p_0(check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, check_hlds__typecheck__ModuleInfo_7);
              }
#line 465 "typecheck.m"
            }
#line 468 "typecheck.m"
          else
#line 473 "typecheck.m"
            {
#line 469 "typecheck.m"
              {
#line 469 "typecheck.m"
                check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_19, (MR_Integer) 1);
              }
#line 473 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 471 "typecheck.m"
                {
#line 471 "typecheck.m"
                  check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 472 "typecheck.m"
                  {
#line 472 "typecheck.m"
                    check_hlds__typecheck__generate_stub_clause_4_p_0(check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, check_hlds__typecheck__ModuleInfo_7);
                  }
#line 471 "typecheck.m"
                }
#line 473 "typecheck.m"
              else
#line 474 "typecheck.m"
                {
#line 474 "typecheck.m"
                  check_hlds__typecheck__StartingSpecs_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 474 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_0_32;
#line 474 "typecheck.m"
                }
#line 473 "typecheck.m"
            }
#line 468 "typecheck.m"
        }
#line 476 "typecheck.m"
        break;
#line 476 "typecheck.m"
    }
#line 500 "typecheck.m"
    {
#line 500 "typecheck.m"
      hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45);
    }
#line 501 "typecheck.m"
    {
#line 501 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45, &check_hlds__typecheck__ClausesRep1_26, &check_hlds__typecheck___ItemNumbers_27);
    }
#line 502 "typecheck.m"
    {
#line 502 "typecheck.m"
      hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45, &check_hlds__typecheck__HeadVars_28);
    }
#line 503 "typecheck.m"
    {
#line 503 "typecheck.m"
      check_hlds__typecheck__ClausesRep1IsEmpty_29 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep1_26);
    }
#line 529 "typecheck.m"
#line 529 "typecheck.m"
    switch (check_hlds__typecheck__ClausesRep1IsEmpty_29) {
#line 529 "typecheck.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 529 "typecheck.m"
      case (MR_Integer) 0:
#line 531 "typecheck.m"
        {
#line 531 "typecheck.m"
          check_hlds__typecheck__do_typecheck_pred_7_p_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, check_hlds__typecheck__STATE_VARIABLE_PredInfo_33, check_hlds__typecheck__StartingSpecs_22, check_hlds__typecheck__Specs_10, check_hlds__typecheck__Changed_11);
#line 531 "typecheck.m"
          return;
        }
#line 529 "typecheck.m"
        break;
#line 529 "typecheck.m"
      case (MR_Integer) 1:
#line 505 "typecheck.m"
        {
#line 505 "typecheck.m"
          MR_Word check_hlds__typecheck__V_47_47;

#line 506 "typecheck.m"
          {
#line 506 "typecheck.m"
            check_hlds__typecheck__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 506 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[0]));
#line 506 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_pred_6_p_0_1));
#line 506 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 506 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 3) = ((MR_Box) (check_hlds__typecheck__StartingSpecs_22));
#line 506 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 506 "typecheck.m"
          }
#line 506 "typecheck.m"
          {
#line 506 "typecheck.m"
            mercury__require__expect_4_p_0(check_hlds__typecheck__V_47_47, (MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_pred\'/6", (MR_String) "StartingSpecs not empty");
          }
#line 511 "typecheck.m"
          {
#line 511 "typecheck.m"
            check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers0_19, (MR_Integer) 9);
          }
#line 525 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 515 "typecheck.m"
            {
#line 515 "typecheck.m"
              MR_Word check_hlds__typecheck__VarTypes_30;
#line 515 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVarsIncludingExistentials_31;
#line 515 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_53_53;
#line 515 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_54_54;

#line 514 "typecheck.m"
              {
#line 514 "typecheck.m"
                hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(check_hlds__typecheck__HeadVars_28, check_hlds__typecheck__ArgTypes0_15, &check_hlds__typecheck__VarTypes_30);
              }
#line 516 "typecheck.m"
              {
#line 516 "typecheck.m"
                hlds__hlds_clauses__clauses_info_set_vartypes_3_p_0(check_hlds__typecheck__VarTypes_30, check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_45_45, &check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_53_53);
              }
#line 517 "typecheck.m"
              {
#line 517 "typecheck.m"
                hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__STATE_VARIABLE_ClausesInfo_53_53, check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_54_54);
              }
#line 521 "typecheck.m"
              {
#line 521 "typecheck.m"
                parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypes0_15, &check_hlds__typecheck__HeadVarsIncludingExistentials_31);
              }
#line 522 "typecheck.m"
              {
#line 522 "typecheck.m"
                hlds__hlds_pred__pred_info_set_head_type_params_3_p_0(check_hlds__typecheck__HeadVarsIncludingExistentials_31, check_hlds__typecheck__STATE_VARIABLE_PredInfo_54_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_33);
              }
#line 524 "typecheck.m"
              *check_hlds__typecheck__Specs_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "typecheck.m"
            }
#line 525 "typecheck.m"
          else
#line 526 "typecheck.m"
            {
#line 526 "typecheck.m"
              MR_Word check_hlds__typecheck__V_56_56;

#line 526 "typecheck.m"
              {
#line 526 "typecheck.m"
                check_hlds__typecheck__V_56_56 = check_hlds__typecheck_errors__report_no_clauses_3_f_0(check_hlds__typecheck__ModuleInfo_7, check_hlds__typecheck__PredId_8, check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42);
              }
#line 526 "typecheck.m"
              {
#line 526 "typecheck.m"
                MR_Word base;
#line 526 "typecheck.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "typecheck.m"
                *check_hlds__typecheck__Specs_10 = base;
#line 526 "typecheck.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_56_56));
#line 526 "typecheck.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "typecheck.m"
              }
#line 526 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_PredInfo_33 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_42_42;
#line 526 "typecheck.m"
            }
#line 528 "typecheck.m"
          *check_hlds__typecheck__Changed_11 = (MR_Integer) 0;
#line 505 "typecheck.m"
        }
#line 529 "typecheck.m"
        break;
#line 529 "typecheck.m"
    }
#line 445 "typecheck.m"
  }
#line 442 "typecheck.m"
}

#line 347 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_7,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_8,
#line 347 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_0_9,
#line 347 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Changed_10)
#line 347 "typecheck.m"
{
#line 353 "typecheck.m"
  {
#line 353 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 353 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 353 "typecheck.m"
      {
#line 353 "typecheck.m"
        *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Changed_10 = check_hlds__typecheck__STATE_VARIABLE_Changed_0_9;
#line 354 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Specs_8 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_7;
#line 354 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
#line 353 "typecheck.m"
      }
#line 353 "typecheck.m"
    else
#line 357 "typecheck.m"
      {
#line 357 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 357 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 357 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo_26;
#line 357 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_27;
#line 357 "typecheck.m"
        MR_Word check_hlds__typecheck__PredId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_24, (MR_Integer) 0)));
#line 357 "typecheck.m"
        MR_Word check_hlds__typecheck__PredInfo0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_24, (MR_Integer) 1)));

#line 361 "typecheck.m"
        {
#line 361 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(check_hlds__typecheck__PredInfo0_32);
        }
#line 362 "typecheck.m"
        if (!(check_hlds__typecheck__succeeded))
#line 363 "typecheck.m"
          {
#line 363 "typecheck.m"
            {
#line 363 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_31)));
            }
#line 363 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 363 "typecheck.m"
          }
#line 370 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 366 "typecheck.m"
          {
#line 366 "typecheck.m"
            check_hlds__typecheck__PredIdInfo_26 = check_hlds__typecheck__PredIdInfo0_24;
#line 367 "typecheck.m"
            {
#line 367 "typecheck.m"
              check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_25, &check_hlds__typecheck__PredIdsInfos_27, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7, check_hlds__typecheck__STATE_VARIABLE_Specs_8, check_hlds__typecheck__STATE_VARIABLE_Changed_0_9, check_hlds__typecheck__STATE_VARIABLE_Changed_10);
            }
#line 366 "typecheck.m"
          }
#line 370 "typecheck.m"
        else
#line 373 "typecheck.m"
          {
#line 373 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_33;
#line 373 "typecheck.m"
            MR_Word check_hlds__typecheck__PredSpecs_34;
#line 373 "typecheck.m"
            MR_Word check_hlds__typecheck__PredChanged_35;
#line 373 "typecheck.m"
            MR_Word check_hlds__typecheck__Globals_36;
#line 373 "typecheck.m"
            MR_Word check_hlds__typecheck__ContainsErrors_37;
#line 373 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47;
#line 373 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_48_48;
#line 373 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Changed_49_49;

#line 419 "typecheck.m"
            {
#line 997 "typecheck.m"
              MR_Word check_hlds__typecheck__Origin_72;
#line 997 "typecheck.m"
              MR_Word check_hlds__typecheck__SpecialPredId_73;
#line 997 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeCtor_74;
#line 997 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeTable_75;
#line 997 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeDefn_76;
#line 997 "typecheck.m"
              MR_Word check_hlds__typecheck__Body_77;
#line 997 "typecheck.m"
              MR_Word check_hlds__typecheck__V_78_78;
#line 1005 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeCtorInfo_13_80;
#line 1005 "typecheck.m"
              MR_Word check_hlds__typecheck__V_79_79;

#line 419 "typecheck.m"
              {
#line 419 "typecheck.m"
                check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo0_32);
              }
#line 419 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 419 "typecheck.m"
                {
#line 1000 "typecheck.m"
                  {
#line 1000 "typecheck.m"
                    hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__Origin_72);
                  }
#line 1001 "typecheck.m"
                  check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin_72)) == (MR_mktag((MR_Integer) 0)));
#line 1001 "typecheck.m"
                  if (check_hlds__typecheck__succeeded)
#line 1001 "typecheck.m"
                    {
#line 1001 "typecheck.m"
                      check_hlds__typecheck__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Origin_72, (MR_Integer) 0)));
#line 1001 "typecheck.m"
                      check_hlds__typecheck__SpecialPredId_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_78_78, (MR_Integer) 0)));
#line 1001 "typecheck.m"
                      check_hlds__typecheck__TypeCtor_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_78_78, (MR_Integer) 1)));
#line 1005 "typecheck.m"
                      {
#line 1005 "typecheck.m"
                        check_hlds__typecheck__V_79_79 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
                      }
#line 17777 "check_hlds.typecheck.c"
                      check_hlds__typecheck__TypeCtorInfo_13_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 1005 "typecheck.m"
                      {
#line 1005 "typecheck.m"
                        check_hlds__typecheck__succeeded = mercury__list__member_2_p_0(check_hlds__typecheck__TypeCtorInfo_13_80, ((MR_Box) (check_hlds__typecheck__TypeCtor_74)), check_hlds__typecheck__V_79_79);
                      }
#line 1005 "typecheck.m"
                      check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 997 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 997 "typecheck.m"
                        {
#line 1009 "typecheck.m"
                          {
#line 1009 "typecheck.m"
                            hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__TypeTable_75);
                          }
#line 1010 "typecheck.m"
                          {
#line 1010 "typecheck.m"
                            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_75, check_hlds__typecheck__TypeCtor_74, &check_hlds__typecheck__TypeDefn_76);
                          }
#line 1011 "typecheck.m"
                          {
#line 1011 "typecheck.m"
                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_76, &check_hlds__typecheck__Body_77);
                          }
#line 1012 "typecheck.m"
                          {
#line 1012 "typecheck.m"
                            check_hlds__typecheck__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__SpecialPredId_73, check_hlds__typecheck__Body_77);
                          }
#line 997 "typecheck.m"
                        }
#line 1001 "typecheck.m"
                    }
#line 420 "typecheck.m"
                  check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 419 "typecheck.m"
                }
#line 419 "typecheck.m"
            }
#line 421 "typecheck.m"
            if (!(check_hlds__typecheck__succeeded))
#line 422 "typecheck.m"
              {
#line 422 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers_62;
#line 424 "typecheck.m"
                MR_Word check_hlds__typecheck__V_67_67;

#line 422 "typecheck.m"
                {
#line 422 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(check_hlds__typecheck__PredInfo0_32);
                }
#line 422 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 422 "typecheck.m"
                  {
#line 423 "typecheck.m"
                    {
#line 423 "typecheck.m"
                      hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__Markers_62);
                    }
#line 424 "typecheck.m"
                    check_hlds__typecheck__V_67_67 = (MR_Integer) 1;
#line 424 "typecheck.m"
                    {
#line 424 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers_62, check_hlds__typecheck__V_67_67);
                    }
#line 424 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 422 "typecheck.m"
                  }
#line 422 "typecheck.m"
              }
#line 438 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 427 "typecheck.m"
              {
#line 427 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesInfo0_63;
#line 427 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesRep0_64;
#line 427 "typecheck.m"
                MR_Word check_hlds__typecheck__IsEmpty_66;
#line 428 "typecheck.m"
                MR_Word check_hlds__typecheck___ItemNumbers_65;

#line 427 "typecheck.m"
                {
#line 427 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__ClausesInfo0_63);
                }
#line 428 "typecheck.m"
                {
#line 428 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_63, &check_hlds__typecheck__ClausesRep0_64, &check_hlds__typecheck___ItemNumbers_65);
                }
#line 429 "typecheck.m"
                {
#line 429 "typecheck.m"
                  check_hlds__typecheck__IsEmpty_66 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_64);
                }
#line 433 "typecheck.m"
#line 433 "typecheck.m"
                switch (check_hlds__typecheck__IsEmpty_66) {
#line 433 "typecheck.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 433 "typecheck.m"
                  case (MR_Integer) 0:
#line 434 "typecheck.m"
                    check_hlds__typecheck__PredInfo_33 = check_hlds__typecheck__PredInfo0_32;
#line 433 "typecheck.m"
                    break;
#line 433 "typecheck.m"
                  case (MR_Integer) 1:
#line 432 "typecheck.m"
                    {
#line 432 "typecheck.m"
                      hlds__hlds_pred__pred_info_mark_as_external_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__PredInfo_33);
                    }
#line 433 "typecheck.m"
                    break;
#line 433 "typecheck.m"
                }
#line 436 "typecheck.m"
                check_hlds__typecheck__PredSpecs_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 437 "typecheck.m"
                check_hlds__typecheck__PredChanged_35 = (MR_Integer) 0;
#line 427 "typecheck.m"
              }
#line 438 "typecheck.m"
            else
#line 439 "typecheck.m"
              {
#line 439 "typecheck.m"
                check_hlds__typecheck__typecheck_pred_6_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_31, check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__PredInfo_33, &check_hlds__typecheck__PredSpecs_34, &check_hlds__typecheck__PredChanged_35);
              }
#line 375 "typecheck.m"
            {
#line 375 "typecheck.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__Globals_36);
            }
#line 376 "typecheck.m"
            {
#line 376 "typecheck.m"
              check_hlds__typecheck__ContainsErrors_37 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__typecheck__Globals_36, check_hlds__typecheck__PredSpecs_34);
            }
#line 379 "typecheck.m"
#line 379 "typecheck.m"
            switch (check_hlds__typecheck__ContainsErrors_37) {
#line 379 "typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 379 "typecheck.m"
              case (MR_Integer) 0:
#line 378 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47 = check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5;
#line 379 "typecheck.m"
                break;
#line 379 "typecheck.m"
              case (MR_Integer) 1:
#line 395 "typecheck.m"
                {
#line 395 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, 0) = ((MR_Box) (check_hlds__typecheck__PredId_31));
#line 395 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_0_5));
#line 395 "typecheck.m"
                }
#line 379 "typecheck.m"
                break;
#line 379 "typecheck.m"
            }
#line 397 "typecheck.m"
            {
#line 397 "typecheck.m"
              check_hlds__typecheck__PredIdInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 397 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_26, 0) = ((MR_Box) (check_hlds__typecheck__PredId_31));
#line 397 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_26, 1) = ((MR_Box) (check_hlds__typecheck__PredInfo_33));
#line 397 "typecheck.m"
            }
#line 398 "typecheck.m"
            {
#line 398 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__PredSpecs_34, check_hlds__typecheck__STATE_VARIABLE_Specs_0_7);
            }
#line 399 "typecheck.m"
            {
#line 399 "typecheck.m"
              mercury__bool__or_3_p_0(check_hlds__typecheck__PredChanged_35, check_hlds__typecheck__STATE_VARIABLE_Changed_0_9, &check_hlds__typecheck__STATE_VARIABLE_Changed_49_49);
            }
#line 400 "typecheck.m"
            {
#line 400 "typecheck.m"
              check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_25, &check_hlds__typecheck__PredIdsInfos_27, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_47_47, check_hlds__typecheck__STATE_VARIABLE_NewlyInvalidPredIds_6, check_hlds__typecheck__STATE_VARIABLE_Specs_48_48, check_hlds__typecheck__STATE_VARIABLE_Specs_8, check_hlds__typecheck__STATE_VARIABLE_Changed_49_49, check_hlds__typecheck__STATE_VARIABLE_Changed_10);
            }
#line 373 "typecheck.m"
          }
#line 356 "typecheck.m"
        {
#line 356 "typecheck.m"
          MR_Word base;
#line 356 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 356 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__PredIdInfo_26));
#line 356 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__PredIdsInfos_27));
#line 356 "typecheck.m"
        }
#line 357 "typecheck.m"
      }
#line 353 "typecheck.m"
  }
#line 347 "typecheck.m"
}

#line 275 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__construct_type_inference_messages_5_p_0(
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 275 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0_4,
#line 275 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Specs_5)
#line 275 "typecheck.m"
{
#line 279 "typecheck.m"
  while (MR_TRUE)
#line 279 "typecheck.m"
    {
#line 279 "typecheck.m"
      /* tailcall optimized into a loop */
#line 279 "typecheck.m"
      {
#line 279 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 279 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Specs_5 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_4;
#line 279 "typecheck.m"
        else
#line 281 "typecheck.m"
          {
#line 281 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 281 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 281 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_16;
#line 281 "typecheck.m"
            MR_Word check_hlds__typecheck__Markers_17;
#line 281 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_23_23;
#line 285 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeCtorInfo_25_25;
#line 287 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18;

#line 282 "typecheck.m"
            {
#line 282 "typecheck.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__PredId_13, &check_hlds__typecheck__PredInfo_16);
            }
#line 283 "typecheck.m"
            {
#line 283 "typecheck.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Markers_17);
            }
#line 285 "typecheck.m"
            {
#line 285 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__check_marker_2_p_0(check_hlds__typecheck__Markers_17, (MR_Integer) 2);
            }
#line 285 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 285 "typecheck.m"
              {
#line 18072 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 286 "typecheck.m"
                {
#line 286 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0(check_hlds__typecheck__TypeCtorInfo_25_25, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_13)));
                }
#line 285 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 285 "typecheck.m"
                  {
#line 287 "typecheck.m"
                    {
#line 287 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__V_18_18);
                    }
#line 287 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 285 "typecheck.m"
                  }
#line 285 "typecheck.m"
              }
#line 291 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 289 "typecheck.m"
              {
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_19;
#line 289 "typecheck.m"
                MR_String check_hlds__typecheck__PredName_28;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__PredOrFunc_29;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Name_30;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Context_31;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__VarSet_32;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVars_33;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Types0_34;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Types_35;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassContext_36;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Purity_37;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeDet_38;
#line 289 "typecheck.m"
                MR_String check_hlds__typecheck__TypeStr_40;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Pieces_43;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__Msg_44;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_57_57;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_58_58;
#line 289 "typecheck.m"
                MR_Word check_hlds__typecheck__V_66_66;

#line 303 "typecheck.m"
                {
#line 303 "typecheck.m"
                  check_hlds__typecheck__PredName_28 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__PredInfo_16);
                }
#line 304 "typecheck.m"
                {
#line 304 "typecheck.m"
                  check_hlds__typecheck__PredOrFunc_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__typecheck__PredInfo_16);
                }
#line 305 "typecheck.m"
                {
#line 305 "typecheck.m"
                  check_hlds__typecheck__Name_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 305 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Name_30, 0) = ((MR_Box) (check_hlds__typecheck__PredName_28));
#line 305 "typecheck.m"
                }
#line 306 "typecheck.m"
                {
#line 306 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Context_31);
                }
#line 307 "typecheck.m"
                {
#line 307 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__VarSet_32, &check_hlds__typecheck__ExistQVars_33, &check_hlds__typecheck__Types0_34);
                }
#line 308 "typecheck.m"
                {
#line 308 "typecheck.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_list_2_p_0(check_hlds__typecheck__Types0_34, &check_hlds__typecheck__Types_35);
                }
#line 309 "typecheck.m"
                {
#line 309 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__ClassContext_36);
                }
#line 310 "typecheck.m"
                {
#line 310 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__typecheck__PredInfo_16, &check_hlds__typecheck__Purity_37);
                }
#line 311 "typecheck.m"
                check_hlds__typecheck__MaybeDet_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 317 "typecheck.m"
#line 317 "typecheck.m"
                switch (check_hlds__typecheck__PredOrFunc_29) {
#line 317 "typecheck.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 317 "typecheck.m"
                  case (MR_Integer) 1:
#line 318 "typecheck.m"
                    {
#line 318 "typecheck.m"
                      MR_Word check_hlds__typecheck__ArgTypes_41;
#line 318 "typecheck.m"
                      MR_Word check_hlds__typecheck__RetType_42;
#line 319 "typecheck.m"
                      MR_Box check_hlds__typecheck__conv0_RetType_42;

#line 319 "typecheck.m"
                      {
#line 319 "typecheck.m"
                        parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Types_35, &check_hlds__typecheck__ArgTypes_41, &check_hlds__typecheck__conv0_RetType_42);
                      }
#line 319 "typecheck.m"
                      check_hlds__typecheck__RetType_42 = ((MR_Word) check_hlds__typecheck__conv0_RetType_42);
#line 320 "typecheck.m"
                      {
#line 320 "typecheck.m"
                        check_hlds__typecheck__TypeStr_40 = parse_tree__mercury_to_mercury__mercury_func_type_to_string_10_f_0(check_hlds__typecheck__VarSet_32, (MR_Integer) 0, check_hlds__typecheck__ExistQVars_33, check_hlds__typecheck__Name_30, check_hlds__typecheck__ArgTypes_41, check_hlds__typecheck__RetType_42, check_hlds__typecheck__MaybeDet_38, check_hlds__typecheck__Purity_37, check_hlds__typecheck__ClassContext_36, check_hlds__typecheck__Context_31);
                      }
#line 318 "typecheck.m"
                    }
#line 317 "typecheck.m"
                    break;
#line 317 "typecheck.m"
                  case (MR_Integer) 0:
#line 315 "typecheck.m"
                    {
#line 315 "typecheck.m"
                      check_hlds__typecheck__TypeStr_40 = parse_tree__mercury_to_mercury__mercury_pred_type_to_string_9_f_0(check_hlds__typecheck__VarSet_32, (MR_Integer) 0, check_hlds__typecheck__ExistQVars_33, check_hlds__typecheck__Name_30, check_hlds__typecheck__Types_35, check_hlds__typecheck__MaybeDet_38, check_hlds__typecheck__Purity_37, check_hlds__typecheck__ClassContext_36, check_hlds__typecheck__Context_31);
                    }
#line 317 "typecheck.m"
                    break;
#line 317 "typecheck.m"
                }
#line 323 "typecheck.m"
                {
#line 323 "typecheck.m"
                  check_hlds__typecheck__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_49_49, 1) = ((MR_Box) (check_hlds__typecheck__TypeStr_40));
#line 323 "typecheck.m"
                }
#line 323 "typecheck.m"
                {
#line 323 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__V_49_49));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[20])));
#line 323 "typecheck.m"
                }
#line 323 "typecheck.m"
                {
#line 323 "typecheck.m"
                  check_hlds__typecheck__Pieces_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[19])));
#line 323 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_43, 1) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 323 "typecheck.m"
                }
#line 325 "typecheck.m"
                {
#line 325 "typecheck.m"
                  check_hlds__typecheck__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (check_hlds__typecheck__Pieces_43));
#line 325 "typecheck.m"
                }
#line 325 "typecheck.m"
                {
#line 325 "typecheck.m"
                  check_hlds__typecheck__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_57_57, 0) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "typecheck.m"
                }
#line 325 "typecheck.m"
                {
#line 325 "typecheck.m"
                  check_hlds__typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 0) = ((MR_Box) (((MR_Integer) 43 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 1) = ((MR_Box) (check_hlds__typecheck__V_57_57));
#line 325 "typecheck.m"
                }
#line 325 "typecheck.m"
                {
#line 325 "typecheck.m"
                  check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_53_53, 0) = ((MR_Box) (check_hlds__typecheck__V_54_54));
#line 325 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "typecheck.m"
                }
#line 324 "typecheck.m"
                {
#line 324 "typecheck.m"
                  check_hlds__typecheck__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 324 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Msg_44, 0) = ((MR_Box) (check_hlds__typecheck__Context_31));
#line 324 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Msg_44, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 324 "typecheck.m"
                }
#line 328 "typecheck.m"
                {
#line 328 "typecheck.m"
                  check_hlds__typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__typecheck__Msg_44));
#line 328 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 328 "typecheck.m"
                }
#line 328 "typecheck.m"
                {
#line 328 "typecheck.m"
                  check_hlds__typecheck__Spec_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 328 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_3[0])));
#line 328 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 328 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Spec_19, 2) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 328 "typecheck.m"
                }
#line 290 "typecheck.m"
                {
#line 290 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Specs_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_Specs_23_23, 0) = ((MR_Box) (check_hlds__typecheck__Spec_19));
#line 290 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_Specs_23_23, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Specs_0_4));
#line 290 "typecheck.m"
                }
#line 289 "typecheck.m"
              }
#line 291 "typecheck.m"
            else
#line 291 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_23_23 = check_hlds__typecheck__STATE_VARIABLE_Specs_0_4;
#line 294 "typecheck.m"
            /* direct tailcall eliminated */
#line 294 "typecheck.m"
            {
#line 294 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__PredIds_14;
#line 294 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_Specs_23_23;

#line 294 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Specs_0_4 = check_hlds__typecheck__STATE_VARIABLE_Specs_0__tmp_copy_4;
#line 294 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 294 "typecheck.m"
            }
#line 294 "typecheck.m"
            continue;
#line 281 "typecheck.m"
          }
#line 279 "typecheck.m"
      }
#line 279 "typecheck.m"
      break;
#line 279 "typecheck.m"
    }
#line 275 "typecheck.m"
}

#line 221 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_9_p_0(
#line 221 "typecheck.m"
  MR_Integer check_hlds__typecheck__Iteration_10,
#line 221 "typecheck.m"
  MR_Integer check_hlds__typecheck__MaxIterations_11,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIds_13,
#line 221 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_14,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_15,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_16,
#line 221 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_17)
#line 221 "typecheck.m"
{
#line 228 "typecheck.m"
  while (MR_TRUE)
#line 228 "typecheck.m"
    {
#line 228 "typecheck.m"
      /* tailcall optimized into a loop */
#line 228 "typecheck.m"
      {
#line 228 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_51_51;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_52_52;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__PredMap0_18;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_19;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_20;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__NewlyInvalidPredIds_21;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__CurSpecs_22;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__Changed_23;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__PredMap_24;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__NewValidPredIdSet_25;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__Globals_26;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37;
#line 228 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;

#line 229 "typecheck.m"
        {
#line 229 "typecheck.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__typecheck__PredMap0_18);
        }
#line 18440 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_51_51 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 18442 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 230 "typecheck.m"
        {
#line 230 "typecheck.m"
          mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_51_51, check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__PredMap0_18, &check_hlds__typecheck__PredIdsInfos0_19);
        }
#line 231 "typecheck.m"
        {
#line 231 "typecheck.m"
          check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, check_hlds__typecheck__OrigValidPredIdSet_14, check_hlds__typecheck__PredIdsInfos0_19, &check_hlds__typecheck__PredIdsInfos_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__NewlyInvalidPredIds_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__CurSpecs_22, (MR_Integer) 0, &check_hlds__typecheck__Changed_23);
        }
#line 234 "typecheck.m"
        {
#line 234 "typecheck.m"
          mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_51_51, check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__PredIdsInfos_20, &check_hlds__typecheck__PredMap_24);
        }
#line 235 "typecheck.m"
        {
#line 235 "typecheck.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_24, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37);
        }
#line 237 "typecheck.m"
        {
#line 237 "typecheck.m"
          hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(check_hlds__typecheck__NewlyInvalidPredIds_21, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38);
        }
#line 238 "typecheck.m"
        {
#line 238 "typecheck.m"
          hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__typecheck__NewValidPredIdSet_25);
        }
#line 240 "typecheck.m"
        {
#line 240 "typecheck.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__typecheck__Globals_26);
        }
#line 242 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Changed_23 == (MR_Integer) 0);
#line 243 "typecheck.m"
        if (!(check_hlds__typecheck__succeeded))
#line 243 "typecheck.m"
          {
#line 243 "typecheck.m"
            MR_Word check_hlds__typecheck__V_39_39;

#line 243 "typecheck.m"
            {
#line 243 "typecheck.m"
              check_hlds__typecheck__V_39_39 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__typecheck__Globals_26, check_hlds__typecheck__CurSpecs_22);
            }
#line 243 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_39_39 == (MR_Integer) 1);
#line 243 "typecheck.m"
          }
#line 249 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 246 "typecheck.m"
          {
#line 246 "typecheck.m"
            *check_hlds__typecheck__FinalValidPredIdSet_15 = check_hlds__typecheck__NewValidPredIdSet_25;
#line 247 "typecheck.m"
            *check_hlds__typecheck__Specs_16 = check_hlds__typecheck__CurSpecs_22;
#line 248 "typecheck.m"
            *check_hlds__typecheck__ExceededIterationLimit_17 = (MR_Integer) 0;
#line 246 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;
#line 246 "typecheck.m"
          }
#line 249 "typecheck.m"
        else
#line 250 "typecheck.m"
          {
#line 250 "typecheck.m"
            MR_Word check_hlds__typecheck__DebugTypes_27;

#line 250 "typecheck.m"
            {
#line 250 "typecheck.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_26, (MR_Integer) 59, &check_hlds__typecheck__DebugTypes_27);
            }
#line 258 "typecheck.m"
#line 258 "typecheck.m"
            switch (check_hlds__typecheck__DebugTypes_27) {
#line 258 "typecheck.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 258 "typecheck.m"
              case (MR_Integer) 0:
#line 259 "typecheck.m"
                {
#line 259 "typecheck.m"
                }
#line 258 "typecheck.m"
                break;
#line 258 "typecheck.m"
              case (MR_Integer) 1:
#line 252 "typecheck.m"
                {
#line 252 "typecheck.m"
                  MR_Word check_hlds__typecheck__ProgressSpecs_28;
#line 256 "typecheck.m"
                  MR_Integer check_hlds__typecheck__V_30_30;
#line 256 "typecheck.m"
                  MR_Integer check_hlds__typecheck__V_31_31;

#line 253 "typecheck.m"
                  {
#line 253 "typecheck.m"
                    check_hlds__typecheck__construct_type_inference_messages_5_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__typecheck__NewValidPredIdSet_25, check_hlds__typecheck__OrigValidPredIds_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ProgressSpecs_28);
                  }
#line 256 "typecheck.m"
                  {
#line 256 "typecheck.m"
                    parse_tree__error_util__write_error_specs_8_p_0(check_hlds__typecheck__ProgressSpecs_28, check_hlds__typecheck__Globals_26, (MR_Integer) 0, &check_hlds__typecheck__V_30_30, (MR_Integer) 0, &check_hlds__typecheck__V_31_31);
                  }
#line 252 "typecheck.m"
                }
#line 258 "typecheck.m"
                break;
#line 258 "typecheck.m"
            }
#line 261 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Iteration_10 < check_hlds__typecheck__MaxIterations_11);
#line 265 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 262 "typecheck.m"
              {
#line 262 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_46_46 = (check_hlds__typecheck__Iteration_10 + (MR_Integer) 1);

#line 262 "typecheck.m"
                /* direct tailcall eliminated */
#line 262 "typecheck.m"
                {
#line 262 "typecheck.m"
                  MR_Integer check_hlds__typecheck__Iteration__tmp_copy_10 = check_hlds__typecheck__V_46_46;
#line 262 "typecheck.m"
                  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0__tmp_copy_32 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;

#line 262 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0__tmp_copy_32;
#line 262 "typecheck.m"
                  check_hlds__typecheck__Iteration_10 = check_hlds__typecheck__Iteration__tmp_copy_10;
#line 262 "typecheck.m"
                }
#line 262 "typecheck.m"
                continue;
#line 262 "typecheck.m"
              }
#line 265 "typecheck.m"
            else
#line 266 "typecheck.m"
              {
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__Pieces_55;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__Msg_56;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_59_59;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_62_62;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_65_65;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_69_69;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_86_86;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_87_87;
#line 266 "typecheck.m"
                MR_Word check_hlds__typecheck__V_91_91;

#line 266 "typecheck.m"
                *check_hlds__typecheck__FinalValidPredIdSet_15 = check_hlds__typecheck__NewValidPredIdSet_25;
#line 336 "typecheck.m"
                {
#line 336 "typecheck.m"
                  check_hlds__typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_69_69, 1) = ((MR_Box) (check_hlds__typecheck__MaxIterations_11));
#line 336 "typecheck.m"
                }
#line 336 "typecheck.m"
                {
#line 336 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[14])));
#line 336 "typecheck.m"
                }
#line 336 "typecheck.m"
                {
#line 336 "typecheck.m"
                  check_hlds__typecheck__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[18])));
#line 336 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_65_65, 1) = ((MR_Box) (check_hlds__typecheck__V_68_68));
#line 336 "typecheck.m"
                }
#line 335 "typecheck.m"
                {
#line 335 "typecheck.m"
                  check_hlds__typecheck__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[17])));
#line 335 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_62_62, 1) = ((MR_Box) (check_hlds__typecheck__V_65_65));
#line 335 "typecheck.m"
                }
#line 334 "typecheck.m"
                {
#line 334 "typecheck.m"
                  check_hlds__typecheck__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[16])));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_59_59, 1) = ((MR_Box) (check_hlds__typecheck__V_62_62));
#line 334 "typecheck.m"
                }
#line 333 "typecheck.m"
                {
#line 333 "typecheck.m"
                  check_hlds__typecheck__Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[15])));
#line 333 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_55, 1) = ((MR_Box) (check_hlds__typecheck__V_59_59));
#line 333 "typecheck.m"
                }
#line 340 "typecheck.m"
                {
#line 340 "typecheck.m"
                  check_hlds__typecheck__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_87_87, 0) = ((MR_Box) (check_hlds__typecheck__Pieces_55));
#line 340 "typecheck.m"
                }
#line 340 "typecheck.m"
                {
#line 340 "typecheck.m"
                  check_hlds__typecheck__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_86_86, 0) = ((MR_Box) (check_hlds__typecheck__V_87_87));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "typecheck.m"
                }
#line 340 "typecheck.m"
                {
#line 340 "typecheck.m"
                  check_hlds__typecheck__Msg_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 1) = ((MR_Box) ((MR_Integer) 1));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 2) = ((MR_Box) ((MR_Integer) 0));
#line 340 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 3) = ((MR_Box) (check_hlds__typecheck__V_86_86));
#line 340 "typecheck.m"
                }
#line 341 "typecheck.m"
                {
#line 341 "typecheck.m"
                  check_hlds__typecheck__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_91_91, 0) = ((MR_Box) (check_hlds__typecheck__Msg_56));
#line 341 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 341 "typecheck.m"
                }
#line 341 "typecheck.m"
                {
#line 341 "typecheck.m"
                  check_hlds__typecheck__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 341 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 341 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 341 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 2) = ((MR_Box) (check_hlds__typecheck__V_91_91));
#line 341 "typecheck.m"
                }
#line 267 "typecheck.m"
                {
#line 267 "typecheck.m"
                  MR_Word base;
#line 267 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "typecheck.m"
                  *check_hlds__typecheck__Specs_16 = base;
#line 267 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_49_49));
#line 267 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "typecheck.m"
                }
#line 268 "typecheck.m"
                *check_hlds__typecheck__ExceededIterationLimit_17 = (MR_Integer) 1;
#line 266 "typecheck.m"
                *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;
#line 266 "typecheck.m"
              }
#line 250 "typecheck.m"
          }
#line 228 "typecheck.m"
      }
#line 228 "typecheck.m"
      break;
#line 228 "typecheck.m"
    }
#line 221 "typecheck.m"
}

#line 190 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 190 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 190 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 190 "typecheck.m"
{
#line 194 "typecheck.m"
  {
#line 194 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 194 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "typecheck.m"
      *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 194 "typecheck.m"
    else
#line 196 "typecheck.m"
      {
#line 196 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 196 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 196 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo_11;
#line 196 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_12;
#line 196 "typecheck.m"
        MR_Word check_hlds__typecheck__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 0)));
#line 196 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 1)));

#line 199 "typecheck.m"
        {
#line 199 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_14)));
        }
#line 211 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 201 "typecheck.m"
          {
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalIdClausesInfo0_15;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalIdClausesInfo_17;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__Globals_18;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__ImportStatus_30;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__ClausesInfo0_31;
#line 201 "typecheck.m"
            MR_Word check_hlds__typecheck__ClausesRep0_32;
#line 202 "typecheck.m"
            MR_Word check_hlds__typecheck___ContainingGoalMap_16;
#line 1028 "typecheck.m"
            MR_Word check_hlds__typecheck___ItemNumbers0_33;
#line 1030 "typecheck.m"
            MR_Word check_hlds__typecheck__V_57_57;
#line 1030 "typecheck.m"
            MR_Word check_hlds__typecheck__V_58_58;

#line 201 "typecheck.m"
            {
#line 201 "typecheck.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__GoalIdClausesInfo0_15);
            }
#line 202 "typecheck.m"
            {
#line 202 "typecheck.m"
              hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck___ContainingGoalMap_16, check_hlds__typecheck__GoalIdClausesInfo0_15, &check_hlds__typecheck__GoalIdClausesInfo_17);
            }
#line 204 "typecheck.m"
            {
#line 204 "typecheck.m"
              hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__GoalIdClausesInfo_17, check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 1026 "typecheck.m"
            {
#line 1026 "typecheck.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ImportStatus_30);
            }
#line 1027 "typecheck.m"
            {
#line 1027 "typecheck.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ClausesInfo0_31);
            }
#line 1028 "typecheck.m"
            {
#line 1028 "typecheck.m"
              hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesRep0_32, &check_hlds__typecheck___ItemNumbers0_33);
            }
#line 1030 "typecheck.m"
            {
#line 1030 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 1030 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1030 "typecheck.m"
              {
#line 1031 "typecheck.m"
                {
#line 1031 "typecheck.m"
                  check_hlds__typecheck__V_57_57 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_32);
                }
#line 1031 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_57_57 == (MR_Integer) 1);
#line 1030 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1030 "typecheck.m"
                  {
#line 1032 "typecheck.m"
                    {
#line 1032 "typecheck.m"
                      check_hlds__typecheck__V_58_58 = parse_tree__status__status_defined_in_this_module_1_f_0(check_hlds__typecheck__ImportStatus_30);
                    }
#line 1032 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_58_58 == (MR_Integer) 1);
#line 1030 "typecheck.m"
                  }
#line 1030 "typecheck.m"
              }
#line 1060 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1034 "typecheck.m"
              {
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeInfo_53_75;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadVars_34;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncArgs_35;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncRetVal_36;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__Context_37;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncModule_38;
#line 1034 "typecheck.m"
                MR_String check_hlds__typecheck__FuncName_39;
#line 1034 "typecheck.m"
                MR_Integer check_hlds__typecheck__PredArity_40;
#line 1034 "typecheck.m"
                MR_Integer check_hlds__typecheck__FuncArity_41;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncSymName_42;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncConsId_43;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncRHS_44;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__Goal0_45;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalExpr_46;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalInfo0_47;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__NonLocals_48;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalInfo_49;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__Goal_50;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__Clause_51;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesRep_52;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__ItemNumbers_53;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesInfo_54;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers0_55;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers_56;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__V_60_60;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__V_64_64;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71;
#line 1034 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72;
#line 1035 "typecheck.m"
                MR_Box check_hlds__typecheck__conv0_FuncRetVal_36;

#line 1034 "typecheck.m"
                {
#line 1034 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__HeadVars_34);
                }
#line 18971 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeInfo_53_75 = (MR_Word) &check_hlds__typecheck_scalar_common_1[2];
#line 1035 "typecheck.m"
                {
#line 1035 "typecheck.m"
                  hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34, &check_hlds__typecheck__FuncArgs_35, &check_hlds__typecheck__conv0_FuncRetVal_36);
                }
#line 1035 "typecheck.m"
                check_hlds__typecheck__FuncRetVal_36 = ((MR_Word) check_hlds__typecheck__conv0_FuncRetVal_36);
#line 1036 "typecheck.m"
                {
#line 1036 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_37);
                }
#line 1037 "typecheck.m"
                {
#line 1037 "typecheck.m"
                  check_hlds__typecheck__FuncModule_38 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1038 "typecheck.m"
                {
#line 1038 "typecheck.m"
                  check_hlds__typecheck__FuncName_39 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1039 "typecheck.m"
                {
#line 1039 "typecheck.m"
                  check_hlds__typecheck__PredArity_40 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1040 "typecheck.m"
                {
#line 1040 "typecheck.m"
                  parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &check_hlds__typecheck__FuncArity_41, check_hlds__typecheck__PredArity_40);
                }
#line 1041 "typecheck.m"
                {
#line 1041 "typecheck.m"
                  check_hlds__typecheck__FuncSymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 0) = ((MR_Box) (check_hlds__typecheck__FuncModule_38));
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 1) = ((MR_Box) (check_hlds__typecheck__FuncName_39));
#line 1041 "typecheck.m"
                }
#line 1042 "typecheck.m"
                {
#line 1042 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 1042 "typecheck.m"
                {
#line 1042 "typecheck.m"
                  check_hlds__typecheck__FuncConsId_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 1) = ((MR_Box) (check_hlds__typecheck__FuncSymName_42));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 2) = ((MR_Box) (check_hlds__typecheck__FuncArity_41));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 3) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 1042 "typecheck.m"
                }
#line 1043 "typecheck.m"
                {
#line 1043 "typecheck.m"
                  check_hlds__typecheck__FuncRHS_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 0) = ((MR_Box) (check_hlds__typecheck__FuncConsId_43));
#line 1043 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1043 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 2) = ((MR_Box) (check_hlds__typecheck__FuncArgs_35));
#line 1043 "typecheck.m"
                }
#line 1044 "typecheck.m"
                {
#line 1044 "typecheck.m"
                  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__typecheck__FuncRetVal_36, check_hlds__typecheck__FuncRHS_44, check_hlds__typecheck__Context_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Goal0_45);
                }
#line 1046 "typecheck.m"
                check_hlds__typecheck__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 0)));
#line 1046 "typecheck.m"
                check_hlds__typecheck__GoalInfo0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 1)));
#line 1047 "typecheck.m"
                {
#line 1047 "typecheck.m"
                  check_hlds__typecheck__V_64_64 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34);
                }
#line 1047 "typecheck.m"
                {
#line 1047 "typecheck.m"
                  check_hlds__typecheck__NonLocals_48 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck__V_64_64);
                }
#line 1048 "typecheck.m"
                {
#line 1048 "typecheck.m"
                  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__typecheck__NonLocals_48, check_hlds__typecheck__GoalInfo0_47, &check_hlds__typecheck__GoalInfo_49);
                }
#line 1049 "typecheck.m"
                {
#line 1049 "typecheck.m"
                  check_hlds__typecheck__Goal_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_46));
#line 1049 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_49));
#line 1049 "typecheck.m"
                }
#line 1050 "typecheck.m"
                {
#line 1050 "typecheck.m"
                  check_hlds__typecheck__Clause_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1050 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1050 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 1) = ((MR_Box) (check_hlds__typecheck__Goal_50));
#line 1050 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1050 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 3) = ((MR_Box) (check_hlds__typecheck__Context_37));
#line 1050 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1050 "typecheck.m"
                }
#line 1051 "typecheck.m"
                {
#line 1051 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__Clause_51));
#line 1051 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1051 "typecheck.m"
                }
#line 1051 "typecheck.m"
                {
#line 1051 "typecheck.m"
                  hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__V_68_68, &check_hlds__typecheck__ClausesRep_52);
                }
#line 1052 "typecheck.m"
                {
#line 1052 "typecheck.m"
                  check_hlds__typecheck__ItemNumbers_53 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
                }
#line 1053 "typecheck.m"
                {
#line 1053 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_52, check_hlds__typecheck__ItemNumbers_53, check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesInfo_54);
                }
#line 1055 "typecheck.m"
                {
#line 1055 "typecheck.m"
                  hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71);
                }
#line 1056 "typecheck.m"
                {
#line 1056 "typecheck.m"
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__ClausesInfo_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72);
                }
#line 1057 "typecheck.m"
                {
#line 1057 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__Markers0_55);
                }
#line 1058 "typecheck.m"
                {
#line 1058 "typecheck.m"
                  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, check_hlds__typecheck__Markers0_55, &check_hlds__typecheck__Markers_56);
                }
#line 1059 "typecheck.m"
                {
#line 1059 "typecheck.m"
                  hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_56, check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21);
                }
#line 1034 "typecheck.m"
              }
#line 1060 "typecheck.m"
            else
#line 1060 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 208 "typecheck.m"
            {
#line 208 "typecheck.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__Globals_18);
            }
#line 209 "typecheck.m"
            {
#line 209 "typecheck.m"
              hlds__headvar_names__maybe_improve_headvar_names_3_p_0(check_hlds__typecheck__Globals_18, check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22);
            }
#line 210 "typecheck.m"
            {
#line 210 "typecheck.m"
              check_hlds__typecheck__PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 210 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 0) = ((MR_Box) (check_hlds__typecheck__PredId_14));
#line 210 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22));
#line 210 "typecheck.m"
            }
#line 201 "typecheck.m"
          }
#line 211 "typecheck.m"
        else
#line 212 "typecheck.m"
          check_hlds__typecheck__PredIdInfo_11 = check_hlds__typecheck__PredIdInfo0_9;
#line 215 "typecheck.m"
        {
#line 215 "typecheck.m"
          check_hlds__typecheck__prepare_for_typecheck_4_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_10, &check_hlds__typecheck__PredIdsInfos_12);
        }
#line 196 "typecheck.m"
        {
#line 196 "typecheck.m"
          MR_Word base;
#line 196 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 196 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__PredIdInfo_11));
#line 196 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__PredIdsInfos_12));
#line 196 "typecheck.m"
        }
#line 196 "typecheck.m"
      }
#line 194 "typecheck.m"
  }
#line 190 "typecheck.m"
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
#line 154 "typecheck.m"
  {
#line 154 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_27_27;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__Globals_8;
#line 154 "typecheck.m"
    MR_Integer check_hlds__typecheck__MaxIterations_9;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigValidPredIdSet_10;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigValidPredIds_11;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMap0_12;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIdsInfos0_13;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIdsInfos_14;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMap_15;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__FinalValidPredIdSet_16;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__CheckSpecs_17;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__InferSpecs_18;
#line 154 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22;

#line 155 "typecheck.m"
    {
#line 155 "typecheck.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__Globals_8);
    }
#line 156 "typecheck.m"
    {
#line 156 "typecheck.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck__Globals_8, (MR_Integer) 173, &check_hlds__typecheck__MaxIterations_9);
    }
#line 159 "typecheck.m"
    {
#line 159 "typecheck.m"
      hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__OrigValidPredIdSet_10);
    }
#line 19265 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 160 "typecheck.m"
    {
#line 160 "typecheck.m"
      check_hlds__typecheck__OrigValidPredIds_11 = mercury__set_tree234__to_sorted_list_1_f_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__OrigValidPredIdSet_10);
    }
#line 162 "typecheck.m"
    {
#line 162 "typecheck.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__PredMap0_12);
    }
#line 19277 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 163 "typecheck.m"
    {
#line 163 "typecheck.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_27_27, check_hlds__typecheck__PredMap0_12, &check_hlds__typecheck__PredIdsInfos0_13);
    }
#line 176 "typecheck.m"
    {
#line 176 "typecheck.m"
      check_hlds__typecheck__prepare_for_typecheck_4_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__typecheck__OrigValidPredIdSet_10, check_hlds__typecheck__PredIdsInfos0_13, &check_hlds__typecheck__PredIdsInfos_14);
    }
#line 179 "typecheck.m"
    {
#line 179 "typecheck.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_27_27, check_hlds__typecheck__PredIdsInfos_14, &check_hlds__typecheck__PredMap_15);
    }
#line 180 "typecheck.m"
    {
#line 180 "typecheck.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_15, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 182 "typecheck.m"
    {
#line 182 "typecheck.m"
      check_hlds__typecheck__typecheck_to_fixpoint_9_p_0((MR_Integer) 1, check_hlds__typecheck__MaxIterations_9, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20, check_hlds__typecheck__OrigValidPredIds_11, check_hlds__typecheck__OrigValidPredIdSet_10, &check_hlds__typecheck__FinalValidPredIdSet_16, &check_hlds__typecheck__CheckSpecs_17, check_hlds__typecheck__ExceededIterationLimit_7);
    }
#line 186 "typecheck.m"
    {
#line 186 "typecheck.m"
      check_hlds__typecheck__construct_type_inference_messages_5_p_0(*check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20, check_hlds__typecheck__FinalValidPredIdSet_16, check_hlds__typecheck__OrigValidPredIds_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__InferSpecs_18);
    }
#line 188 "typecheck.m"
    {
#line 188 "typecheck.m"
      *check_hlds__typecheck__Specs_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__InferSpecs_18, check_hlds__typecheck__CheckSpecs_17);
    }
#line 154 "typecheck.m"
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
