/*
** Automatically generated from `typecheck.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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



#line 2992 "typecheck.m"
struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s {
#line 2992 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4;
#line 2995 "typecheck.m"
  MR_bool check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
#line 2995 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9;
#line 2998 "typecheck.m"
  jmp_buf check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0;
#line 2998 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13;
#line 2998 "typecheck.m"
  MR_Word check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12;
#line 2992 "typecheck.m"
};

#line 901 "typecheck.m"
struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s {
#line 901 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3;
#line 904 "typecheck.m"
  MR_bool check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded;
#line 904 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6;
#line 906 "typecheck.m"
  jmp_buf check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0;
#line 906 "typecheck.m"
  MR_Word check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7;
#line 901 "typecheck.m"
};


#line 185 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 188 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 191 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 194 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 197 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 200 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 203 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0;

#line 206 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__pseudo_1;

#line 209 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1;

#line 212 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 215 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 218 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0;

#line 221 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1;

#line 224 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2;

#line 227 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3];

#line 230 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3];

#line 233 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3];

#line 236 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 239 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0[2];

#line 242 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0;

#line 245 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0[1];

#line 248 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0[1];

#line 251 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0[1];

#line 254 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0[1];

#line 257 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0;

#line 260 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0;

#line 263 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1];

#line 266 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0;

#line 269 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1];

#line 272 "check_hlds.typecheck.c"
static const MR_DuFunctorDesc check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1;

#line 275 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1];

#line 278 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1];

#line 281 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_maybe_cons_type_info_0[2];

#line 284 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2];

#line 287 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2];

#line 290 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0;

#line 293 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1;

#line 296 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2];

#line 299 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2];

#line 302 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2];

#line 305 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
#line 308 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 310 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 313 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
#line 316 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 318 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 320 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 323 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0_10001(
#line 326 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 328 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 331 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0_10001(
#line 334 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 336 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 338 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 341 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
#line 344 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 346 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 349 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
#line 352 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 354 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 356 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 359 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
#line 362 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 364 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 367 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
#line 370 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 372 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 374 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 377 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
#line 380 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 382 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2);

#line 385 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
#line 388 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 390 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 392 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3);

#line 2709 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
#line 2709 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_6,
#line 2709 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_7,
#line 2709 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8);

#line 2252 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(
#line 2252 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2252 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2252 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2252 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2215 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 2215 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2215 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_3,
#line 2215 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2215 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5);

#line 2199 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsDefns_3,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2199 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5);

#line 1996 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(
#line 1996 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1996 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 1996 "typecheck.m"
  MR_Word check_hlds__typecheck__Types_3,
#line 1996 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1996 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6);

#line 3225 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3225__2_1_f_0(
#line 3225 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_36);

#line 1421 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1421__1_2_p_0(
#line 1421 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalType_86,
#line 1421 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_141);

#line 1418 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1418__1_3_p_0(
#line 1418 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_133,
#line 1418 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_134,
#line 1418 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_135);

#line 504 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_pred__504__1_2_p_0(
#line 504 "typecheck.m"
  MR_Word check_hlds__typecheck__StartingSpecs_22,
#line 504 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_51);

#line 1121 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
#line 1121 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 1121 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1121 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 1121 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
#line 1121 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 1121 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2828 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
#line 2828 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2828 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2828 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2828 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
#line 2828 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2828 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2184 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
#line 2184 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2184 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 2181 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0(
#line 2181 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2181 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2181 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 2181 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0(
#line 2181 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2181 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3195 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
#line 3195 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3);

#line 3195 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2);

#line 3225 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
#line 3225 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3225 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 3213 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__Action_8,
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
#line 3213 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10);

#line 3200 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
#line 3200 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3200 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3200 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3200 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3200 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__5_5);

#line 3177 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
#line 3177 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3177 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 3177 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3);

#line 3043 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
#line 3043 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3043 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3043 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3043 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3043 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3043 "typecheck.m"
  MR_Word * check_hlds__typecheck__DataConsErrors_12);

#line 2764 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
#line 2764 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2764 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2764 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 3013 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
#line 3013 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3013 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3013 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3013 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3013 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3013 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsErrors_12);

#line 2998 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
#line 2998 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 2998 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
#line 2998 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 2998 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
#line 2998 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 2992 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
#line 2992 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_4,
#line 2992 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint0_5,
#line 2992 "typecheck.m"
  MR_Word * check_hlds__typecheck__Constraint_6);

#line 2983 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
#line 2983 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_3,
#line 2983 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4);

#line 2976 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
#line 2976 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2976 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2976 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 2975 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
#line 2975 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2975 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 2965 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
#line 2965 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_7,
#line 2965 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarSet_8,
#line 2965 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_9,
#line 2965 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_10,
#line 2965 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
#line 2965 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21);

#line 2832 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_8,
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_9,
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_10,
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_11,
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
#line 2832 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14);

#line 2768 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_9,
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__FuncName_11,
#line 2768 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_12,
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_13,
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_14,
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_15,
#line 2768 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16);

#line 2764 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
#line 2764 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2764 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2764 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 2748 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
#line 2748 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2748 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 2748 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2748 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 2748 "typecheck.m"
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10);

#line 2617 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__make_pred_cons_info_list_7_p_0(
#line 2617 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2617 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2617 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTable_3,
#line 2617 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_4,
#line 2617 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_5,
#line 2617 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
#line 2617 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7);

#line 2596 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
#line 2596 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2596 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_7,
#line 2596 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_8,
#line 2596 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 2596 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10);

#line 2512 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
#line 2512 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2512 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 2512 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2512 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);

#line 2497 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_2,
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__PredOrFunc_3,
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVars_6,
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2497 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8);

#line 2460 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_3_p_0(
#line 2460 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2460 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_4,
#line 2460 "typecheck.m"
  MR_Word check_hlds__typecheck__Var0_5,
#line 2460 "typecheck.m"
  MR_Word * check_hlds__typecheck__Var_6);

#line 2458 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0_1(
#line 2458 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2458 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2458 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2);

#line 2454 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0(
#line 2454 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2454 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars0_4,
#line 2454 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_5,
#line 2454 "typecheck.m"
  MR_Word * check_hlds__typecheck__Vars_6);

#line 2364 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
#line 2364 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsType_6,
#line 2364 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_7,
#line 2364 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_8,
#line 2364 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
#line 2364 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16);

#line 2266 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(
#line 2266 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2266 "typecheck.m"
  MR_Word check_hlds__typecheck__X_2,
#line 2266 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_3,
#line 2266 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2266 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 2235 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_functor_type_4_p_0(
#line 2235 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2235 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2235 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
#line 2235 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4);

#line 2119 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0_2(
#line 2119 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2119 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 2078 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0_1(
#line 2078 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2078 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2078 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2078 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 2070 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0(
#line 2070 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_7,
#line 2070 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2070 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_9,
#line 2070 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2070 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_46,
#line 2070 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_47);

#line 2051 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
#line 2051 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_4,
#line 2051 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsType_5,
#line 2051 "typecheck.m"
  MR_String * check_hlds__typecheck__BuiltinTypeName_6);

#line 2012 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unification_6_p_0(
#line 2012 "typecheck.m"
  MR_Word check_hlds__typecheck__X_7,
#line 2012 "typecheck.m"
  MR_Word check_hlds__typecheck__RHS0_8,
#line 2012 "typecheck.m"
  MR_Word * check_hlds__typecheck__RHS_9,
#line 2012 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2012 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 2012 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27);

#line 1936 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
#line 1936 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1936 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1936 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_3,
#line 1936 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1936 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5);

#line 1920 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_4_p_0(
#line 1920 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 1920 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_6,
#line 1920 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 1920 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14);

#line 1907 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(
#line 1907 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1907 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1907 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_3,
#line 1907 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_4,
#line 1907 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_5);

#line 1829 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
#line 1829 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1829 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1829 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1829 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

#line 1813 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__skip_arg_2_p_0(
#line 1813 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1813 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2);

#line 1778 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(
#line 1778 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1778 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_2,
#line 1778 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1778 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_4,
#line 1778 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_5);

#line 1732 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__PredExistQVars_3,
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__PredArgTypes_4,
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__PredConstraints_5,
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
#line 1732 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7);

#line 1691 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
#line 1691 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7);

#line 1667 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_overloaded_pred_6_p_0(
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__CallId_7,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__PredIdList_8,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_9,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 1667 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21);

#line 1638 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_5_p_0(
#line 1638 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_6,
#line 1638 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_7,
#line 1638 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_8,
#line 1638 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 1638 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21);

#line 1589 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_6_p_0(
#line 1589 "typecheck.m"
  MR_Word check_hlds__typecheck__CallId_7,
#line 1589 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_8,
#line 1589 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 1589 "typecheck.m"
  MR_Word * check_hlds__typecheck__PredId_10,
#line 1589 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_25,
#line 1589 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_26);

#line 1567 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_4_p_0(
#line 1567 "typecheck.m"
  MR_String check_hlds__typecheck__EventName_5,
#line 1567 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_6,
#line 1567 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 1567 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14);

#line 1510 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_5_p_0(
#line 1510 "typecheck.m"
  MR_Word check_hlds__typecheck__PredVar_6,
#line 1510 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_7,
#line 1510 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_8,
#line 1510 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
#line 1510 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17);

#line 1487 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_3_p_0(
#line 1487 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_4,
#line 1487 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_15,
#line 1487 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_16);

#line 1465 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(
#line 1465 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_4,
#line 1465 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_14,
#line 1465 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_15);

#line 1453 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_4_p_0(
#line 1453 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1453 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 1453 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_3,
#line 1453 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_4);

#line 1444 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
#line 1444 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1);

#line 1421 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_3(
#line 1421 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg);

#line 1418 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_2(
#line 1418 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1418 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 1418 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 1418 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3);

#line 1376 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_1(
#line 1376 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1376 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1);

#line 1245 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0(
#line 1245 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalExpr0_6,
#line 1245 "typecheck.m"
  MR_Word * check_hlds__typecheck__GoalExpr_7,
#line 1245 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalInfo_8,
#line 1245 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_105,
#line 1245 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_106);

#line 1190 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_4_p_0(
#line 1190 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_5,
#line 1190 "typecheck.m"
  MR_Word * check_hlds__typecheck__Goal_6,
#line 1190 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1190 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 1125 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_4_p_0(
#line 1125 "typecheck.m"
  MR_Word check_hlds__typecheck__StuffToCheck_5,
#line 1125 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_6,
#line 1125 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1125 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24);

#line 1088 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_6_p_0(
#line 1088 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_7,
#line 1088 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_8,
#line 1088 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_15,
#line 1088 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_16,
#line 1088 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_17,
#line 1088 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_18);

#line 1060 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_6_p_0(
#line 1060 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1060 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1060 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1060 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 1060 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_5,
#line 1060 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_6);

#line 955 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
#line 955 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 955 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 955 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 955 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4);

#line 921 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__KindMap_8,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesA_10,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesB_13,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsB_14);

#line 906 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
#line 906 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 906 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
#line 906 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 906 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
#line 906 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg);

#line 901 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
#line 901 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
#line 901 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4);

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

#line 218 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_9_p_0(
#line 218 "typecheck.m"
  MR_Integer check_hlds__typecheck__Iteration_10,
#line 218 "typecheck.m"
  MR_Integer check_hlds__typecheck__MaxIterations_11,
#line 218 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32,
#line 218 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33,
#line 218 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIds_13,
#line 218 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_14,
#line 218 "typecheck.m"
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_15,
#line 218 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_16,
#line 218 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_17);

#line 187 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
#line 187 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 187 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 187 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 187 "typecheck.m"
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
    ((MR_Box) ((MR_Integer) 43)),
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



#line 1950 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1958 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1966 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1974 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1982 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1990 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1998 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__list__pti_list_1__plain_check_hlds__typecheck_info__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0
  }
};

#line 2006 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__term__pti_var_1__pseudo_1 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2014 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__pseudo_term__pti_var_1__pseudo_1__pseudo_term__pti_var_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__pti_var_1__pseudo_1,
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__pti_var_1__pseudo_1
  }
};

#line 2023 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__typecheck__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2031 "check_hlds.typecheck.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__typecheck__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__typecheck__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2040 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0 = {
  (MR_String) "flip_constraints_for_new",
  (MR_Integer) 0
};

#line 2046 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1 = {
  (MR_String) "flip_constraints_for_field_set",
  (MR_Integer) 1
};

#line 2052 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2 = {
  (MR_String) "do_not_flip_constraints",
  (MR_Integer) 2
};

#line 2058 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2
};

#line 2065 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_cons_constraints_action_0[3] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_2,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_cons_constraints_action_0_0
};

#line 2072 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_constraints_action_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2079 "check_hlds.typecheck.c"
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

#line 2100 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2108 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_cons_type_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__typecheck__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2114 "check_hlds.typecheck.c"
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

#line 2129 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0
};

#line 2134 "check_hlds.typecheck.c"
static const MR_DuPtagLayout check_hlds__typecheck__check_hlds__typecheck__du_ptag_ordered_cons_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_cons_type_0_0
  }
};

#line 2143 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_cons_type_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_cons_type_0_0
};

#line 2148 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_cons_type_0[1] = {
  (MR_Integer) 0
};

#line 2153 "check_hlds.typecheck.c"
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

#line 2174 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__typecheck__pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0,
    (MR_TypeInfo) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_cons_type_0
  }
};

#line 2183 "check_hlds.typecheck.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__typecheck__list__ti_list_1pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__typecheck__pair__ti_pair_2check_hlds__typecheck_info__type_ctor_info_type_assign_0check_hlds__typecheck__type_ctor_info_cons_type_0
  }
};

#line 2191 "check_hlds.typecheck.c"
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

#line 2212 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0
};

#line 2217 "check_hlds.typecheck.c"
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

#line 2232 "check_hlds.typecheck.c"
static const MR_PseudoTypeInfo check_hlds__typecheck__check_hlds__typecheck__field_types_maybe_cons_type_info_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__typecheck_errors__check_hlds__typecheck_errors__type_ctor_info_cons_error_0
};

#line 2237 "check_hlds.typecheck.c"
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

#line 2252 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_0[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

#line 2257 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_stag_ordered_maybe_cons_type_info_0_1[1] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1
};

#line 2262 "check_hlds.typecheck.c"
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

#line 2276 "check_hlds.typecheck.c"
static const MR_DuFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__du_name_ordered_maybe_cons_type_info_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_1,
  &check_hlds__typecheck__check_hlds__typecheck__du_functor_desc_maybe_cons_type_info_0_0
};

#line 2282 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_maybe_cons_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2288 "check_hlds.typecheck.c"
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

#line 2309 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0 = {
  (MR_String) "clause_only",
  (MR_Integer) 0
};

#line 2315 "check_hlds.typecheck.c"
static const MR_EnumFunctorDesc check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1 = {
  (MR_String) "whole_pred",
  (MR_Integer) 1
};

#line 2321 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_value_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

#line 2327 "check_hlds.typecheck.c"
static const MR_EnumFunctorDescPtr check_hlds__typecheck__check_hlds__typecheck__enum_name_ordered_stuff_to_check_0[2] = {
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_0,
  &check_hlds__typecheck__check_hlds__typecheck__enum_functor_desc_stuff_to_check_0_1
};

#line 2333 "check_hlds.typecheck.c"
static const MR_Integer check_hlds__typecheck__check_hlds__typecheck__functor_number_map_stuff_to_check_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2339 "check_hlds.typecheck.c"
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

#line 2360 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0_10001(
#line 2363 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2365 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2367 "check_hlds.typecheck.c"
{
#line 2369 "check_hlds.typecheck.c"
  {
#line 2371 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2374 "check_hlds.typecheck.c"
    {
#line 2376 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_constraints_action_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2379 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2381 "check_hlds.typecheck.c"
  }
#line 2383 "check_hlds.typecheck.c"
}

#line 2386 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0_10001(
#line 2389 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2391 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2393 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2395 "check_hlds.typecheck.c"
{
#line 2397 "check_hlds.typecheck.c"
  {
#line 2399 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2402 "check_hlds.typecheck.c"
    {
#line 2404 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_constraints_action_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2407 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2409 "check_hlds.typecheck.c"
  }
#line 2411 "check_hlds.typecheck.c"
}

#line 2414 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0_10001(
#line 2417 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2419 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2421 "check_hlds.typecheck.c"
{
#line 2423 "check_hlds.typecheck.c"
  {
#line 2425 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2428 "check_hlds.typecheck.c"
    {
#line 2430 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2433 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2435 "check_hlds.typecheck.c"
  }
#line 2437 "check_hlds.typecheck.c"
}

#line 2440 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0_10001(
#line 2443 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2445 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2447 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2449 "check_hlds.typecheck.c"
{
#line 2451 "check_hlds.typecheck.c"
  {
#line 2453 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2456 "check_hlds.typecheck.c"
    {
#line 2458 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_type_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2461 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2463 "check_hlds.typecheck.c"
  }
#line 2465 "check_hlds.typecheck.c"
}

#line 2468 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0_10001(
#line 2471 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2473 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2475 "check_hlds.typecheck.c"
{
#line 2477 "check_hlds.typecheck.c"
  {
#line 2479 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2482 "check_hlds.typecheck.c"
    {
#line 2484 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____cons_type_assign_set_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2487 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2489 "check_hlds.typecheck.c"
  }
#line 2491 "check_hlds.typecheck.c"
}

#line 2494 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0_10001(
#line 2497 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2499 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2501 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2503 "check_hlds.typecheck.c"
{
#line 2505 "check_hlds.typecheck.c"
  {
#line 2507 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2510 "check_hlds.typecheck.c"
    {
#line 2512 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____cons_type_assign_set_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2515 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2517 "check_hlds.typecheck.c"
  }
#line 2519 "check_hlds.typecheck.c"
}

#line 2522 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0_10001(
#line 2525 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2527 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2529 "check_hlds.typecheck.c"
{
#line 2531 "check_hlds.typecheck.c"
  {
#line 2533 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2536 "check_hlds.typecheck.c"
    {
#line 2538 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2541 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2543 "check_hlds.typecheck.c"
  }
#line 2545 "check_hlds.typecheck.c"
}

#line 2548 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0_10001(
#line 2551 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2553 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2555 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2557 "check_hlds.typecheck.c"
{
#line 2559 "check_hlds.typecheck.c"
  {
#line 2561 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2564 "check_hlds.typecheck.c"
    {
#line 2566 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2569 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2571 "check_hlds.typecheck.c"
  }
#line 2573 "check_hlds.typecheck.c"
}

#line 2576 "check_hlds.typecheck.c"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0_10001(
#line 2579 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2581 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2)
#line 2583 "check_hlds.typecheck.c"
{
#line 2585 "check_hlds.typecheck.c"
  {
#line 2587 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded;

#line 2590 "check_hlds.typecheck.c"
    {
#line 2592 "check_hlds.typecheck.c"
      check_hlds__typecheck__succeeded = check_hlds__typecheck____Unify____stuff_to_check_0_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2));
    }
#line 2595 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 2597 "check_hlds.typecheck.c"
  }
#line 2599 "check_hlds.typecheck.c"
}

#line 2602 "check_hlds.typecheck.c"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0_10001(
#line 2605 "check_hlds.typecheck.c"
  MR_Box * check_hlds__typecheck__wrapper_arg_1,
#line 2607 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2609 "check_hlds.typecheck.c"
  MR_Box check_hlds__typecheck__wrapper_arg_3)
#line 2611 "check_hlds.typecheck.c"
{
#line 2613 "check_hlds.typecheck.c"
  {
#line 2615 "check_hlds.typecheck.c"
    MR_Word check_hlds__typecheck__conv0_HeadVar__1_1;

#line 2618 "check_hlds.typecheck.c"
    {
#line 2620 "check_hlds.typecheck.c"
      check_hlds__typecheck____Compare____stuff_to_check_0_0(&check_hlds__typecheck__conv0_HeadVar__1_1, ((MR_Word) check_hlds__typecheck__wrapper_arg_2), ((MR_Word) check_hlds__typecheck__wrapper_arg_3));
    }
#line 2623 "check_hlds.typecheck.c"
    *check_hlds__typecheck__wrapper_arg_1 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__1_1));
#line 2625 "check_hlds.typecheck.c"
  }
#line 2627 "check_hlds.typecheck.c"
}

#line 2709 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(
#line 2709 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_6,
#line 2709 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_7,
#line 2709 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_8)
#line 2709 "typecheck.m"
{
#line 2712 "typecheck.m"
  {
#line 2712 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_21_42;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_22_43;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_23_44;
#line 2712 "typecheck.m"
    MR_String check_hlds__typecheck__ApplyName_9;
#line 2712 "typecheck.m"
    MR_String check_hlds__typecheck__ApplyNameToUse_12;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__Purity_13;
#line 2712 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity1_14;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_15;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__FuncType_16;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_17;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__RetType_18;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars_19;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_20;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 2712 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_22_22;
#line 2712 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_23_23;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_36;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_37;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet1_38;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__RetTypeVar_39;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 2712 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;
#line 2713 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_10_10;
#line 2713 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;

#line 2713 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2713 "typecheck.m"
      {
#line 2713 "typecheck.m"
        check_hlds__typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 1)));
#line 2713 "typecheck.m"
        check_hlds__typecheck__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 2)));
#line 2713 "typecheck.m"
        check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_6, (MR_Integer) 3)));
#line 2713 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_21_21)) == (MR_mktag((MR_Integer) 0)));
#line 2713 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2713 "typecheck.m"
          {
#line 2713 "typecheck.m"
            check_hlds__typecheck__ApplyName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_21_21, (MR_Integer) 0)));
#line 2719 "typecheck.m"
            if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "") == 0))
#line 2720 "typecheck.m"
              {
#line 2721 "typecheck.m"
                check_hlds__typecheck__ApplyNameToUse_12 = (MR_String) "apply";
#line 2722 "typecheck.m"
                check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
#line 2720 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2720 "typecheck.m"
              }
#line 2719 "typecheck.m"
            else
#line 2719 "typecheck.m"
              if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "apply") == 0))
#line 2716 "typecheck.m"
                {
#line 2717 "typecheck.m"
                  check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2718 "typecheck.m"
                  check_hlds__typecheck__Purity_13 = (MR_Integer) 0;
#line 2716 "typecheck.m"
                  check_hlds__typecheck__succeeded = MR_TRUE;
#line 2716 "typecheck.m"
                }
#line 2719 "typecheck.m"
              else
#line 2719 "typecheck.m"
                if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "impure_apply") == 0))
#line 2724 "typecheck.m"
                  {
#line 2725 "typecheck.m"
                    check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2726 "typecheck.m"
                    check_hlds__typecheck__Purity_13 = (MR_Integer) 2;
#line 2724 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2724 "typecheck.m"
                  }
#line 2719 "typecheck.m"
                else
#line 2719 "typecheck.m"
                  if ((strcmp(check_hlds__typecheck__ApplyName_9, (MR_String) "semipure_apply") == 0))
#line 2728 "typecheck.m"
                    {
#line 2729 "typecheck.m"
                      check_hlds__typecheck__ApplyNameToUse_12 = check_hlds__typecheck__ApplyName_9;
#line 2730 "typecheck.m"
                      check_hlds__typecheck__Purity_13 = (MR_Integer) 1;
#line 2728 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2728 "typecheck.m"
                    }
#line 2719 "typecheck.m"
                  else
#line 2719 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_FALSE;
#line 2712 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2712 "typecheck.m"
              {
#line 2732 "typecheck.m"
                check_hlds__typecheck__V_22_22 = (MR_Integer) 1;
#line 2732 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_7 >= check_hlds__typecheck__V_22_22);
#line 2712 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2712 "typecheck.m"
                  {
#line 2733 "typecheck.m"
                    check_hlds__typecheck__V_23_23 = (MR_Integer) 1;
#line 2733 "typecheck.m"
                    check_hlds__typecheck__Arity1_14 = (check_hlds__typecheck__Arity_7 - check_hlds__typecheck__V_23_23);
#line 2734 "typecheck.m"
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2796 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_21_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1556 "typecheck.m"
                    {
#line 1556 "typecheck.m"
                      mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__TypeVarSet0_36);
                    }
#line 1557 "typecheck.m"
                    {
#line 1557 "typecheck.m"
                      mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, check_hlds__typecheck__Arity1_14, &check_hlds__typecheck__ArgTypeVars_37, check_hlds__typecheck__TypeVarSet0_36, &check_hlds__typecheck__TypeVarSet1_38);
                    }
#line 1558 "typecheck.m"
                    {
#line 1558 "typecheck.m"
                      mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_21_42, &check_hlds__typecheck__RetTypeVar_39, check_hlds__typecheck__TypeVarSet1_38, &check_hlds__typecheck__TypeVarSet_15);
                    }
#line 2813 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeInfo_22_43 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 2815 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_23_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0;
#line 1560 "typecheck.m"
                    {
#line 1560 "typecheck.m"
                      check_hlds__typecheck__V_40_40 = mercury__map__init_0_f_0(check_hlds__typecheck__TypeInfo_22_43, check_hlds__typecheck__TypeCtorInfo_23_44);
                    }
#line 1560 "typecheck.m"
                    {
#line 1560 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_40_40, check_hlds__typecheck__ArgTypeVars_37, &check_hlds__typecheck__ArgTypes_17);
                    }
#line 1561 "typecheck.m"
                    check_hlds__typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1561 "typecheck.m"
                    {
#line 1561 "typecheck.m"
                      check_hlds__typecheck__RetType_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 0) = ((MR_Box) (check_hlds__typecheck__RetTypeVar_39));
#line 1561 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__RetType_18, 1) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 1561 "typecheck.m"
                    }
#line 1562 "typecheck.m"
                    {
#line 1562 "typecheck.m"
                      parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_13, check_hlds__typecheck__ArgTypes_17, check_hlds__typecheck__RetType_18, &check_hlds__typecheck__FuncType_16);
                    }
#line 2736 "typecheck.m"
                    check_hlds__typecheck__ExistQVars_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2737 "typecheck.m"
                    {
#line 2737 "typecheck.m"
                      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_20);
                    }
#line 2740 "typecheck.m"
                    check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2739 "typecheck.m"
                    {
#line 2739 "typecheck.m"
                      check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2739 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__FuncType_16));
#line 2739 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_17));
#line 2739 "typecheck.m"
                    }
#line 2740 "typecheck.m"
                    {
#line 2740 "typecheck.m"
                      check_hlds__typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2740 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2740 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck__ApplyNameToUse_12));
#line 2740 "typecheck.m"
                    }
#line 2738 "typecheck.m"
                    {
#line 2738 "typecheck.m"
                      check_hlds__typecheck__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2738 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck__TypeVarSet_15));
#line 2738 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_19));
#line 2738 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 2) = ((MR_Box) (check_hlds__typecheck__RetType_18));
#line 2738 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 3) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 2738 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_20));
#line 2738 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_25_25, 5) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 2738 "typecheck.m"
                    }
#line 2740 "typecheck.m"
                    {
#line 2740 "typecheck.m"
                      MR_Word base;
#line 2740 "typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2740 "typecheck.m"
                      *check_hlds__typecheck__ConsTypeInfos_8 = base;
#line 2740 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_25_25));
#line 2740 "typecheck.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 2740 "typecheck.m"
                    }
#line 2740 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2712 "typecheck.m"
                  }
#line 2712 "typecheck.m"
              }
#line 2713 "typecheck.m"
          }
#line 2713 "typecheck.m"
      }
#line 2712 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2712 "typecheck.m"
  }
#line 2709 "typecheck.m"
}

#line 2252 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(
#line 2252 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2252 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 2252 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2252 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2252 "typecheck.m"
{
#line 2256 "typecheck.m"
  while (MR_TRUE)
#line 2256 "typecheck.m"
    {
#line 2256 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2256 "typecheck.m"
      {
#line 2256 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2256 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2256 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2256 "typecheck.m"
        else
#line 2258 "typecheck.m"
          {
#line 2258 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssign_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2258 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssigns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2258 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 0)));
#line 2258 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 1)));
#line 2258 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;
#line 2259 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_11, (MR_Integer) 2)));

#line 1977 "typecheck.m"
            if ((check_hlds__typecheck__Args_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1977 "typecheck.m"
              if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1982 "typecheck.m"
                {
#line 1982 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_16));
#line 1982 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 1982 "typecheck.m"
                }
#line 1977 "typecheck.m"
              else
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
#line 1977 "typecheck.m"
            else
#line 1977 "typecheck.m"
              {
#line 1977 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 1)));
#line 1977 "typecheck.m"
                MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 0)));

#line 1977 "typecheck.m"
                if ((check_hlds__typecheck__ArgTypes_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1979 "typecheck.m"
                  {
#line 1980 "typecheck.m"
                    {
#line 1980 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 1980 "typecheck.m"
                      return;
                    }
#line 1979 "typecheck.m"
                  }
#line 1977 "typecheck.m"
                else
#line 1984 "typecheck.m"
                  {
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 0)));
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__Types_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_17, (MR_Integer) 1)));
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssignSet1_52;
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes0_62;
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__MaybeOldVarType_63;
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_64;

#line 1949 "typecheck.m"
                    {
#line 1949 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__VarTypes0_62);
                    }
#line 1950 "typecheck.m"
                    {
#line 1950 "typecheck.m"
                      parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__V_55_55, check_hlds__typecheck__Type_46, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
                    }
#line 1958 "typecheck.m"
                    if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1959 "typecheck.m"
                      {
#line 1959 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeAssign_67;

#line 1960 "typecheck.m"
                        {
#line 1960 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign_67);
                        }
#line 1961 "typecheck.m"
                        {
#line 1961 "typecheck.m"
                          check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
#line 1961 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 1961 "typecheck.m"
                        }
#line 1959 "typecheck.m"
                      }
#line 1958 "typecheck.m"
                    else
#line 1952 "typecheck.m"
                      {
#line 1952 "typecheck.m"
                        MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
#line 1955 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeAssign1_66;
#line 2543 "typecheck.m"
                        MR_Word check_hlds__typecheck__HeadTypeParams_75;
#line 2543 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeBindings0_76;
#line 2543 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeBindings_77;

#line 2544 "typecheck.m"
                        {
#line 2544 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__HeadTypeParams_75);
                        }
#line 2545 "typecheck.m"
                        {
#line 2545 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeBindings0_76);
                        }
#line 2546 "typecheck.m"
                        {
#line 2546 "typecheck.m"
                          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_46, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
                        }
#line 2543 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2543 "typecheck.m"
                          {
#line 2547 "typecheck.m"
                            {
#line 2547 "typecheck.m"
                              check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TypeAssign_16, &check_hlds__typecheck__TypeAssign1_66);
                            }
#line 2547 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2543 "typecheck.m"
                          }
#line 1955 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 1954 "typecheck.m"
                          {
#line 1954 "typecheck.m"
                            check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
#line 1954 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 1954 "typecheck.m"
                          }
#line 1955 "typecheck.m"
                        else
#line 1956 "typecheck.m"
                          check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__V_53_53;
#line 1952 "typecheck.m"
                      }
#line 1986 "typecheck.m"
                    {
#line 1986 "typecheck.m"
                      check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__V_54_54, check_hlds__typecheck__Types_47, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
                    }
#line 1984 "typecheck.m"
                  }
#line 1977 "typecheck.m"
              }
#line 2262 "typecheck.m"
            /* direct tailcall eliminated */
#line 2262 "typecheck.m"
            {
#line 2262 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsTypeAssigns_12;
#line 2262 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2262 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2262 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2262 "typecheck.m"
            }
#line 2262 "typecheck.m"
            continue;
#line 2258 "typecheck.m"
          }
#line 2256 "typecheck.m"
      }
#line 2256 "typecheck.m"
      break;
#line 2256 "typecheck.m"
    }
#line 2252 "typecheck.m"
}

#line 2215 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(
#line 2215 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2215 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_3,
#line 2215 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2215 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5)
#line 2215 "typecheck.m"
{
#line 2219 "typecheck.m"
  while (MR_TRUE)
#line 2219 "typecheck.m"
    {
#line 2219 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2219 "typecheck.m"
      {
#line 2219 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2219 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2219 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4;
#line 2219 "typecheck.m"
        else
#line 2221 "typecheck.m"
          {
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsDefn_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType_16;
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_17;
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_18;
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssign_19;
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__V_22_22;
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23;
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeVarSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 0)));
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsExistQVars0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 1)));
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 2)));
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 3)));
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassConstraints0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 4)));
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_37;
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ConstraintsToAdd_38;
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__OldConstraints_46;
#line 2221 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassConstraints_47;
#line 2400 "typecheck.m"
            MR_Word check_hlds__typecheck___Source_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_11, (MR_Integer) 5)));

#line 2407 "typecheck.m"
            {
#line 2407 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__ConsTypeVarSet_31);
            }
#line 2413 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2409 "typecheck.m"
              {
#line 2409 "typecheck.m"
                check_hlds__typecheck__ConsType_16 = check_hlds__typecheck__ConsType0_33;
#line 2410 "typecheck.m"
                check_hlds__typecheck__ArgTypes_17 = check_hlds__typecheck__ArgTypes0_34;
#line 2411 "typecheck.m"
                check_hlds__typecheck__TypeAssign2_37 = check_hlds__typecheck__TypeAssign0_3;
#line 2412 "typecheck.m"
                check_hlds__typecheck__ConstraintsToAdd_38 = check_hlds__typecheck__ClassConstraints0_35;
#line 2409 "typecheck.m"
              }
#line 2413 "typecheck.m"
            else
#line 2429 "typecheck.m"
              {
#line 2429 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_39;
#line 2429 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsType1_40;
#line 2429 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes1_41;
#line 2429 "typecheck.m"
                MR_Word check_hlds__typecheck__Renaming_42;
#line 2414 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;
#line 2414 "typecheck.m"
                MR_Word check_hlds__typecheck__V_49_49;
#line 2414 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet0_61;
#line 2414 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeVarSet_62;

#line 2415 "typecheck.m"
                {
#line 2415 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2415 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__ConsType0_33));
#line 2415 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_48_48, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes0_34));
#line 2415 "typecheck.m"
                }
#line 1767 "typecheck.m"
                {
#line 1767 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_3, &check_hlds__typecheck__TypeVarSet0_61);
                }
#line 1768 "typecheck.m"
                {
#line 1768 "typecheck.m"
                  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_61, check_hlds__typecheck__ConsTypeVarSet_31, &check_hlds__typecheck__TypeVarSet_62, &check_hlds__typecheck__Renaming_42);
                }
#line 1769 "typecheck.m"
                {
#line 1769 "typecheck.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__V_48_48, &check_hlds__typecheck__V_49_49);
                }
#line 1771 "typecheck.m"
                {
#line 1771 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_62, check_hlds__typecheck__TypeAssign0_3, &check_hlds__typecheck__TypeAssign1_39);
                }
#line 2415 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_49_49)) == (MR_mktag((MR_Integer) 1)));
#line 2415 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2415 "typecheck.m"
                  {
#line 2415 "typecheck.m"
                    check_hlds__typecheck__ConsType1_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_49_49, (MR_Integer) 0)));
#line 2415 "typecheck.m"
                    check_hlds__typecheck__ArgTypes1_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_49_49, (MR_Integer) 1)));
#line 2419 "typecheck.m"
                    {
#line 2419 "typecheck.m"
                      MR_Word check_hlds__typecheck__ConsExistQVars_43;
#line 2419 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams0_44;
#line 2419 "typecheck.m"
                      MR_Word check_hlds__typecheck__HeadTypeParams_45;

#line 2418 "typecheck.m"
                      {
#line 2418 "typecheck.m"
                        parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__ConsExistQVars0_32, &check_hlds__typecheck__ConsExistQVars_43);
                      }
#line 2420 "typecheck.m"
                      {
#line 2420 "typecheck.m"
                        check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_42, check_hlds__typecheck__ClassConstraints0_35, &check_hlds__typecheck__ConstraintsToAdd_38);
                      }
#line 2422 "typecheck.m"
                      {
#line 2422 "typecheck.m"
                        check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_39, &check_hlds__typecheck__HeadTypeParams0_44);
                      }
#line 2423 "typecheck.m"
                      {
#line 2423 "typecheck.m"
                        check_hlds__typecheck__HeadTypeParams_45 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ConsExistQVars_43, check_hlds__typecheck__HeadTypeParams0_44);
                      }
#line 2424 "typecheck.m"
                      {
#line 2424 "typecheck.m"
                        check_hlds__typecheck_info__type_assign_set_head_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_45, check_hlds__typecheck__TypeAssign1_39, &check_hlds__typecheck__TypeAssign2_37);
                      }
#line 2427 "typecheck.m"
                      check_hlds__typecheck__ConsType_16 = check_hlds__typecheck__ConsType1_40;
#line 2428 "typecheck.m"
                      check_hlds__typecheck__ArgTypes_17 = check_hlds__typecheck__ArgTypes1_41;
#line 2419 "typecheck.m"
                    }
#line 2415 "typecheck.m"
                  }
#line 2415 "typecheck.m"
                else
#line 2430 "typecheck.m"
                  {
#line 2430 "typecheck.m"
                    {
#line 2430 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.get_cons_stuff\'/6", (MR_String) "type_assign_rename_apart failed");
#line 2430 "typecheck.m"
                      return;
                    }
#line 2430 "typecheck.m"
                  }
#line 2429 "typecheck.m"
              }
#line 2441 "typecheck.m"
            {
#line 2441 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_typeclass_constraints_2_p_0(check_hlds__typecheck__TypeAssign2_37, &check_hlds__typecheck__OldConstraints_46);
            }
#line 2442 "typecheck.m"
            {
#line 2442 "typecheck.m"
              hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__typecheck__ConstraintsToAdd_38, check_hlds__typecheck__OldConstraints_46, &check_hlds__typecheck__ClassConstraints_47);
            }
#line 2443 "typecheck.m"
            {
#line 2443 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_typeclass_constraints_3_p_0(check_hlds__typecheck__ClassConstraints_47, check_hlds__typecheck__TypeAssign2_37, &check_hlds__typecheck__TypeAssign1_18);
            }
#line 2224 "typecheck.m"
            {
#line 2224 "typecheck.m"
              check_hlds__typecheck__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2224 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck__ConsType_16));
#line 2224 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_17));
#line 2224 "typecheck.m"
            }
#line 2224 "typecheck.m"
            {
#line 2224 "typecheck.m"
              check_hlds__typecheck__ConsTypeAssign_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2224 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_19, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_18));
#line 2224 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsTypeAssign_19, 1) = ((MR_Box) (check_hlds__typecheck__V_22_22));
#line 2224 "typecheck.m"
            }
#line 2225 "typecheck.m"
            {
#line 2225 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeAssign_19));
#line 2225 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4));
#line 2225 "typecheck.m"
            }
#line 2226 "typecheck.m"
            /* direct tailcall eliminated */
#line 2226 "typecheck.m"
            {
#line 2226 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsDefns_12;
#line 2226 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_23_23;

#line 2226 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4;
#line 2226 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2226 "typecheck.m"
            }
#line 2226 "typecheck.m"
            continue;
#line 2221 "typecheck.m"
          }
#line 2219 "typecheck.m"
      }
#line 2219 "typecheck.m"
      break;
#line 2219 "typecheck.m"
    }
#line 2215 "typecheck.m"
}

#line 2199 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsDefns_3,
#line 2199 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4,
#line 2199 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5)
#line 2199 "typecheck.m"
{
#line 2205 "typecheck.m"
  while (MR_TRUE)
#line 2205 "typecheck.m"
    {
#line 2205 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2205 "typecheck.m"
      {
#line 2205 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2205 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2205 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4;
#line 2205 "typecheck.m"
        else
#line 2207 "typecheck.m"
          {
#line 2207 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2207 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2207 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18;

#line 2208 "typecheck.m"
            {
#line 2208 "typecheck.m"
              check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_50_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__ConsDefns_3, check_hlds__typecheck__TypeAssign_11, check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4, &check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18);
            }
#line 2210 "typecheck.m"
            /* direct tailcall eliminated */
#line 2210 "typecheck.m"
            {
#line 2210 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns_12;
#line 2210 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_18_18;

#line 2210 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeAssignSet_0__tmp_copy_4;
#line 2210 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2210 "typecheck.m"
            }
#line 2210 "typecheck.m"
            continue;
#line 2207 "typecheck.m"
          }
#line 2205 "typecheck.m"
      }
#line 2205 "typecheck.m"
      break;
#line 2205 "typecheck.m"
    }
#line 2199 "typecheck.m"
}

#line 1996 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(
#line 1996 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1996 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_2,
#line 1996 "typecheck.m"
  MR_Word check_hlds__typecheck__Types_3,
#line 1996 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5,
#line 1996 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6)
#line 1996 "typecheck.m"
{
#line 2000 "typecheck.m"
  while (MR_TRUE)
#line 2000 "typecheck.m"
    {
#line 2000 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2000 "typecheck.m"
      {
#line 2000 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2000 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2000 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_6 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5;
#line 2000 "typecheck.m"
        else
#line 2002 "typecheck.m"
          {
#line 2002 "typecheck.m"
            MR_Word check_hlds__typecheck__TA_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2002 "typecheck.m"
            MR_Word check_hlds__typecheck__TAs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2002 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 1977 "typecheck.m"
            if ((check_hlds__typecheck__Args_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1977 "typecheck.m"
              if ((check_hlds__typecheck__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1982 "typecheck.m"
                {
#line 1982 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 0) = ((MR_Box) (check_hlds__typecheck__TA_13));
#line 1982 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5));
#line 1982 "typecheck.m"
                }
#line 1977 "typecheck.m"
              else
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
#line 1977 "typecheck.m"
            else
#line 1977 "typecheck.m"
              {
#line 1977 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 1)));
#line 1977 "typecheck.m"
                MR_Word check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args_2, (MR_Integer) 0)));

#line 1977 "typecheck.m"
                if ((check_hlds__typecheck__Types_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1979 "typecheck.m"
                  {
#line 1980 "typecheck.m"
                    {
#line 1980 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.type_assign_var_has_type_list\'/6", (MR_String) "length mismatch");
#line 1980 "typecheck.m"
                      return;
                    }
#line 1979 "typecheck.m"
                  }
#line 1977 "typecheck.m"
                else
#line 1984 "typecheck.m"
                  {
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_3, (MR_Integer) 0)));
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__Types_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Types_3, (MR_Integer) 1)));
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssignSet1_52;
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes0_62;
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__MaybeOldVarType_63;
#line 1984 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_64;

#line 1949 "typecheck.m"
                    {
#line 1949 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__VarTypes0_62);
                    }
#line 1950 "typecheck.m"
                    {
#line 1950 "typecheck.m"
                      parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__V_55_55, check_hlds__typecheck__Type_46, &check_hlds__typecheck__MaybeOldVarType_63, check_hlds__typecheck__VarTypes0_62, &check_hlds__typecheck__VarTypes_64);
                    }
#line 1958 "typecheck.m"
                    if ((check_hlds__typecheck__MaybeOldVarType_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1959 "typecheck.m"
                      {
#line 1959 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeAssign_67;

#line 1960 "typecheck.m"
                        {
#line 1960 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_64, check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeAssign_67);
                        }
#line 1961 "typecheck.m"
                        {
#line 1961 "typecheck.m"
                          check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_67));
#line 1961 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 1961 "typecheck.m"
                        }
#line 1959 "typecheck.m"
                      }
#line 1958 "typecheck.m"
                    else
#line 1952 "typecheck.m"
                      {
#line 1952 "typecheck.m"
                        MR_Word check_hlds__typecheck__OldVarType_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_63, (MR_Integer) 0)));
#line 1955 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeAssign1_66;
#line 2543 "typecheck.m"
                        MR_Word check_hlds__typecheck__HeadTypeParams_75;
#line 2543 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeBindings0_76;
#line 2543 "typecheck.m"
                        MR_Word check_hlds__typecheck__TypeBindings_77;

#line 2544 "typecheck.m"
                        {
#line 2544 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__HeadTypeParams_75);
                        }
#line 2545 "typecheck.m"
                        {
#line 2545 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeBindings0_76);
                        }
#line 2546 "typecheck.m"
                        {
#line 2546 "typecheck.m"
                          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_65, check_hlds__typecheck__Type_46, check_hlds__typecheck__HeadTypeParams_75, check_hlds__typecheck__TypeBindings0_76, &check_hlds__typecheck__TypeBindings_77);
                        }
#line 2543 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2543 "typecheck.m"
                          {
#line 2547 "typecheck.m"
                            {
#line 2547 "typecheck.m"
                              check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_77, check_hlds__typecheck__TA_13, &check_hlds__typecheck__TypeAssign1_66);
                            }
#line 2547 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2543 "typecheck.m"
                          }
#line 1955 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 1954 "typecheck.m"
                          {
#line 1954 "typecheck.m"
                            check_hlds__typecheck__TypeAssignSet1_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_66));
#line 1954 "typecheck.m"
                            MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet1_52, 1) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 1954 "typecheck.m"
                          }
#line 1955 "typecheck.m"
                        else
#line 1956 "typecheck.m"
                          check_hlds__typecheck__TypeAssignSet1_52 = check_hlds__typecheck__V_53_53;
#line 1952 "typecheck.m"
                      }
#line 1986 "typecheck.m"
                    {
#line 1986 "typecheck.m"
                      check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_95_97_115_115_105_103_110_95_108_105_115_116_95_118_97_114_95_104_97_115_95_116_121_112_101_95_108_105_115_116_95_95_91_52_93_95_48_6_p_0(check_hlds__typecheck__TypeAssignSet1_52, check_hlds__typecheck__V_54_54, check_hlds__typecheck__Types_47, check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5, &check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21);
                    }
#line 1984 "typecheck.m"
                  }
#line 1977 "typecheck.m"
              }
#line 2004 "typecheck.m"
            /* direct tailcall eliminated */
#line 2004 "typecheck.m"
            {
#line 2004 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TAs_14;
#line 2004 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_21_21;

#line 2004 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_5;
#line 2004 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2004 "typecheck.m"
            }
#line 2004 "typecheck.m"
            continue;
#line 2002 "typecheck.m"
          }
#line 2000 "typecheck.m"
      }
#line 2000 "typecheck.m"
      break;
#line 2000 "typecheck.m"
    }
#line 1996 "typecheck.m"
}

#line 3225 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3225__2_1_f_0(
#line 3225 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_36)
#line 3225 "typecheck.m"
{
#line 3225 "typecheck.m"
  {
#line 3225 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3225 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVar__2_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 1)));
#line 3225 "typecheck.m"
    MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 0)));
#line 3225 "typecheck.m"
    MR_Word check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 2)));
#line 3225 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_36, (MR_Integer) 3)));

#line 3225 "typecheck.m"
    return check_hlds__typecheck__HeadVar__2_37;
#line 3225 "typecheck.m"
  }
#line 3225 "typecheck.m"
}

#line 1421 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1421__1_2_p_0(
#line 1421 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalType_86,
#line 1421 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_141)
#line 1421 "typecheck.m"
{
#line 1421 "typecheck.m"
  {
#line 1421 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__GoalType_86 == check_hlds__typecheck__HeadVar__2_141);

#line 1421 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 1421 "typecheck.m"
  }
#line 1421 "typecheck.m"
}

#line 1418 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1418__1_3_p_0(
#line 1418 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_133,
#line 1418 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_134,
#line 1418 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_135)
#line 1418 "typecheck.m"
{
#line 1418 "typecheck.m"
  {
#line 1418 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1418 "typecheck.m"
    MR_Word check_hlds__typecheck__V_136_136;

#line 1419 "typecheck.m"
    {
#line 1419 "typecheck.m"
      check_hlds__typecheck__V_136_136 = parse_tree__builtin_lib_types__stm_atomic_type_0_f_0();
    }
#line 1419 "typecheck.m"
    {
#line 1419 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_4_p_0(check_hlds__typecheck__HeadVar__1_133, check_hlds__typecheck__V_136_136, check_hlds__typecheck__HeadVar__2_134, check_hlds__typecheck__HeadVar__3_135);
#line 1419 "typecheck.m"
      return;
    }
#line 1418 "typecheck.m"
  }
#line 1418 "typecheck.m"
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

#line 1121 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____stuff_to_check_0_0(
#line 1121 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 1121 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1121 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 1121 "typecheck.m"
{
#line 1121 "typecheck.m"
  {
#line 1121 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1121 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 1121 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 1121 "typecheck.m"
    {
#line 1121 "typecheck.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
#line 1121 "typecheck.m"
      return;
    }
#line 1121 "typecheck.m"
  }
#line 1121 "typecheck.m"
}

#line 1121 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____stuff_to_check_0_0(
#line 1121 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 1121 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 1121 "typecheck.m"
{
#line 3909 "check_hlds.typecheck.c"
  {
#line 3911 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

#line 3914 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 3916 "check_hlds.typecheck.c"
  }
#line 1121 "typecheck.m"
}

#line 2828 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____maybe_cons_type_info_0_0(
#line 2828 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2828 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2828 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2828 "typecheck.m"
{
#line 2828 "typecheck.m"
  {
#line 2828 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2828 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_12 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 2828 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_13 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 2828 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_12 == check_hlds__typecheck__CastY_13);
#line 2828 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3945 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 2828 "typecheck.m"
    else
#line 2828 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 2828 "typecheck.m"
        {
#line 2828 "typecheck.m"
          MR_Word check_hlds__typecheck__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));

#line 2828 "typecheck.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2828 "typecheck.m"
            {
#line 2828 "typecheck.m"
              MR_Word check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));

#line 2828 "typecheck.m"
              {
#line 2828 "typecheck.m"
                check_hlds__typecheck_errors____Compare____cons_error_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__V_16_16, check_hlds__typecheck__V_11_11);
#line 2828 "typecheck.m"
                return;
              }
#line 2828 "typecheck.m"
            }
#line 2828 "typecheck.m"
          else
#line 3974 "check_hlds.typecheck.c"
            *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 2;
#line 2828 "typecheck.m"
        }
#line 2828 "typecheck.m"
      else
#line 2828 "typecheck.m"
        {
#line 2828 "typecheck.m"
          MR_Word check_hlds__typecheck__V_17_17 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);

#line 2828 "typecheck.m"
          if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3987 "check_hlds.typecheck.c"
            *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 1;
#line 2828 "typecheck.m"
          else
#line 2828 "typecheck.m"
            {
#line 2828 "typecheck.m"
              MR_Word check_hlds__typecheck__V_5_5 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__3_3), (MR_Integer) 0);

#line 2828 "typecheck.m"
              {
#line 2828 "typecheck.m"
                check_hlds__typecheck_info____Compare____cons_type_info_0_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__V_17_17, check_hlds__typecheck__V_5_5);
#line 2828 "typecheck.m"
                return;
              }
#line 2828 "typecheck.m"
            }
#line 2828 "typecheck.m"
        }
#line 2828 "typecheck.m"
  }
#line 2828 "typecheck.m"
}

#line 2828 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____maybe_cons_type_info_0_0(
#line 2828 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2828 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2828 "typecheck.m"
{
#line 2828 "typecheck.m"
  {
#line 2828 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2828 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_7 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
#line 2828 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_8 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

#line 2828 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_7 == check_hlds__typecheck__CastY_8);
#line 2828 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2828 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2828 "typecheck.m"
    else
#line 2828 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2828 "typecheck.m"
        {
#line 2828 "typecheck.m"
          MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2828 "typecheck.m"
          MR_Word check_hlds__typecheck__V_6_6;

#line 2828 "typecheck.m"
          check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 2828 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2828 "typecheck.m"
            {
#line 2828 "typecheck.m"
              check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 4055 "check_hlds.typecheck.c"
              {
#line 4057 "check_hlds.typecheck.c"
                return check_hlds__typecheck__succeeded = check_hlds__typecheck_errors____Unify____cons_error_0_0(check_hlds__typecheck__V_5_5, check_hlds__typecheck__V_6_6);
              }
#line 2828 "typecheck.m"
            }
#line 2828 "typecheck.m"
        }
#line 2828 "typecheck.m"
      else
#line 2828 "typecheck.m"
        {
#line 2828 "typecheck.m"
          MR_Word check_hlds__typecheck__V_3_3 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__1_1), (MR_Integer) 0);
#line 2828 "typecheck.m"
          MR_Word check_hlds__typecheck__V_4_4;

#line 2828 "typecheck.m"
          check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 2828 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2828 "typecheck.m"
            {
#line 2828 "typecheck.m"
              check_hlds__typecheck__V_4_4 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__HeadVar__2_2), (MR_Integer) 0);
#line 4081 "check_hlds.typecheck.c"
              {
#line 4083 "check_hlds.typecheck.c"
                return check_hlds__typecheck__succeeded = check_hlds__typecheck_info____Unify____cons_type_info_0_0(check_hlds__typecheck__V_3_3, check_hlds__typecheck__V_4_4);
              }
#line 2828 "typecheck.m"
            }
#line 2828 "typecheck.m"
        }
#line 2828 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2828 "typecheck.m"
  }
#line 2828 "typecheck.m"
}

#line 2184 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_assign_set_0_0(
#line 2184 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2184 "typecheck.m"
{
#line 2184 "typecheck.m"
  {
#line 2184 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2184 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar1_4 = check_hlds__typecheck__HeadVar__2_2;
#line 2184 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar2_5 = check_hlds__typecheck__HeadVar__3_3;

#line 2184 "typecheck.m"
    {
#line 2184 "typecheck.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_5)));
#line 2184 "typecheck.m"
      return;
    }
#line 2184 "typecheck.m"
  }
#line 2184 "typecheck.m"
}

#line 2184 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_assign_set_0_0(
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2184 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2184 "typecheck.m"
{
#line 2184 "typecheck.m"
  {
#line 2184 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2184 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar1_3 = check_hlds__typecheck__HeadVar__1_1;
#line 2184 "typecheck.m"
    MR_Word check_hlds__typecheck__Cast_HeadVar2_4 = check_hlds__typecheck__HeadVar__2_2;

#line 2184 "typecheck.m"
    {
#line 2184 "typecheck.m"
      return check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[6], ((MR_Box) (check_hlds__typecheck__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__typecheck__Cast_HeadVar2_4)));
    }
#line 2184 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2184 "typecheck.m"
  }
#line 2184 "typecheck.m"
}

#line 2181 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_type_0_0(
#line 2181 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 2181 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2181 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 2181 "typecheck.m"
{
#line 2181 "typecheck.m"
  {
#line 2181 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2181 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_9 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 2181 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_10 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 2181 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_9 == check_hlds__typecheck__CastY_10);
#line 2181 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 4183 "check_hlds.typecheck.c"
      *check_hlds__typecheck__HeadVar__1_1 = (MR_Integer) 0;
#line 2181 "typecheck.m"
    else
#line 2181 "typecheck.m"
      {
#line 2181 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2181 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 2181 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 2181 "typecheck.m"
        MR_Word check_hlds__typecheck__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 2181 "typecheck.m"
        MR_Word check_hlds__typecheck__V_8_8;

#line 2181 "typecheck.m"
        {
#line 2181 "typecheck.m"
          parse_tree__prog_data____Compare____mer_type_0_0(&check_hlds__typecheck__V_8_8, check_hlds__typecheck__V_4_4, check_hlds__typecheck__V_6_6);
        }
#line 4205 "check_hlds.typecheck.c"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_8_8 == (MR_Integer) 0);
#line 2181 "typecheck.m"
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 2181 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2181 "typecheck.m"
          *check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__V_8_8;
#line 2181 "typecheck.m"
        else
#line 2181 "typecheck.m"
          {
#line 2181 "typecheck.m"
            {
#line 2181 "typecheck.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[5], check_hlds__typecheck__HeadVar__1_1, ((MR_Box) (check_hlds__typecheck__V_5_5)), ((MR_Box) (check_hlds__typecheck__V_7_7)));
#line 2181 "typecheck.m"
              return;
            }
#line 2181 "typecheck.m"
          }
#line 2181 "typecheck.m"
      }
#line 2181 "typecheck.m"
  }
#line 2181 "typecheck.m"
}

#line 2181 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_type_0_0(
#line 2181 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2181 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 2181 "typecheck.m"
{
#line 2181 "typecheck.m"
  {
#line 2181 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2181 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastX_7 = (MR_Integer) check_hlds__typecheck__HeadVar__1_1;
#line 2181 "typecheck.m"
    MR_Integer check_hlds__typecheck__CastY_8 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;

#line 2181 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__CastX_7 == check_hlds__typecheck__CastY_8);
#line 2181 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2181 "typecheck.m"
      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2181 "typecheck.m"
    else
#line 2181 "typecheck.m"
      {
#line 2181 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_10_10;
#line 2181 "typecheck.m"
        MR_Word check_hlds__typecheck__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2181 "typecheck.m"
        MR_Word check_hlds__typecheck__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2181 "typecheck.m"
        MR_Word check_hlds__typecheck__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2181 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));

#line 4272 "check_hlds.typecheck.c"
        {
#line 4274 "check_hlds.typecheck.c"
          check_hlds__typecheck__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__typecheck__V_3_3, check_hlds__typecheck__V_5_5);
        }
#line 2181 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2181 "typecheck.m"
          {
#line 4281 "check_hlds.typecheck.c"
            check_hlds__typecheck__TypeInfo_10_10 = (MR_Word) &check_hlds__typecheck_scalar_common_1[5];
#line 4283 "check_hlds.typecheck.c"
            {
#line 4285 "check_hlds.typecheck.c"
              return check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0(check_hlds__typecheck__TypeInfo_10_10, ((MR_Box) (check_hlds__typecheck__V_4_4)), ((MR_Box) (check_hlds__typecheck__V_6_6)));
            }
#line 2181 "typecheck.m"
          }
#line 2181 "typecheck.m"
      }
#line 2181 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2181 "typecheck.m"
  }
#line 2181 "typecheck.m"
}

#line 3195 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck____Compare____cons_constraints_action_0_0(
#line 3195 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__1_1,
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3)
#line 3195 "typecheck.m"
{
#line 3195 "typecheck.m"
  {
#line 3195 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3195 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar1_4 = (MR_Integer) check_hlds__typecheck__HeadVar__2_2;
#line 3195 "typecheck.m"
    MR_Integer check_hlds__typecheck__Cast_HeadVar2_5 = (MR_Integer) check_hlds__typecheck__HeadVar__3_3;

#line 3195 "typecheck.m"
    {
#line 3195 "typecheck.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__Cast_HeadVar1_4, check_hlds__typecheck__Cast_HeadVar2_5);
#line 3195 "typecheck.m"
      return;
    }
#line 3195 "typecheck.m"
  }
#line 3195 "typecheck.m"
}

#line 3195 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck____Unify____cons_constraints_action_0_0(
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_1,
#line 3195 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2)
#line 3195 "typecheck.m"
{
#line 4340 "check_hlds.typecheck.c"
  {
#line 4342 "check_hlds.typecheck.c"
    MR_bool check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_1 == check_hlds__typecheck__HeadVar__2_2);

#line 4345 "check_hlds.typecheck.c"
    return check_hlds__typecheck__succeeded;
#line 4347 "check_hlds.typecheck.c"
  }
#line 3195 "typecheck.m"
}

#line 3225 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1_1(
#line 3225 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 3225 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 3225 "typecheck.m"
{
#line 3225 "typecheck.m"
  {
#line 3225 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 3225 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 3225 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__2_37;

#line 3225 "typecheck.m"
    {
#line 3225 "typecheck.m"
      check_hlds__typecheck__conv0_HeadVar__2_37 = check_hlds__typecheck__IntroducedFrom__func__convert_cons_defn__3225__2_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 3225 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__2_37));
#line 3225 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 3225 "typecheck.m"
  }
#line 3225 "typecheck.m"
}

#line 3213 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_5_p_1(
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__Action_8,
#line 3213 "typecheck.m"
  MR_Word check_hlds__typecheck__HLDS_ConsDefn_9,
#line 3213 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_10)
#line 3213 "typecheck.m"
{
#line 3215 "typecheck.m"
  {
#line 3215 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 0)));
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 1)));
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 2)));
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsTypeKinds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 3)));
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 4)));
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistProgConstraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 5)));
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 6)));
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_19;
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeTable_21;
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeDefn_22;
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_23;
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__PredId_24;
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_25;
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__ClassTable_26;
#line 3215 "typecheck.m"
    MR_Word check_hlds__typecheck__PredInfo_27;
#line 3223 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__HLDS_ConsDefn_9, (MR_Integer) 7)));
#line 3252 "typecheck.m"
    MR_Word check_hlds__typecheck__V_53_53;
#line 3252 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 3252 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_55_55;
#line 3252 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 3252 "typecheck.m"
    MR_Word check_hlds__typecheck__V_57_57;
#line 3252 "typecheck.m"
    MR_Word check_hlds__typecheck__V_58_58;
#line 3252 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_59_59;
#line 3256 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38;
#line 3256 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;
#line 3256 "typecheck.m"
    MR_Word check_hlds__typecheck__V_61_61;
#line 3256 "typecheck.m"
    MR_Word check_hlds__typecheck__V_62_62;
#line 3256 "typecheck.m"
    MR_Word check_hlds__typecheck__V_63_63;
#line 3256 "typecheck.m"
    MR_Word check_hlds__typecheck__V_64_64;
#line 3256 "typecheck.m"
    MR_Word check_hlds__typecheck__V_65_65;
#line 3256 "typecheck.m"
    MR_Word check_hlds__typecheck__V_66_66;
#line 3256 "typecheck.m"
    MR_Word check_hlds__typecheck__V_67_67;
#line 3256 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 3257 "typecheck.m"
    MR_Word check_hlds__typecheck__V_39_39;
#line 3257 "typecheck.m"
    MR_Word check_hlds__typecheck__V_70_70;
#line 3259 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 3259 "typecheck.m"
    MR_Word check_hlds__typecheck__V_71_71;

#line 3225 "typecheck.m"
    {
#line 3225 "typecheck.m"
      check_hlds__typecheck__ArgTypes_19 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[4], check_hlds__typecheck__Args_17);
    }
#line 3226 "typecheck.m"
    {
#line 3226 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_types_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__TypeTable_21);
    }
#line 3227 "typecheck.m"
    {
#line 3227 "typecheck.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_21, check_hlds__typecheck__TypeCtor_11, &check_hlds__typecheck__TypeDefn_22);
    }
#line 3228 "typecheck.m"
    {
#line 3228 "typecheck.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__Body_23);
    }
#line 3251 "typecheck.m"
    {
#line 3251 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_predid_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredId_24);
    }
#line 3252 "typecheck.m"
    check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 0)));
#line 3252 "typecheck.m"
    check_hlds__typecheck__ModuleInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 1)));
#line 3252 "typecheck.m"
    check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 2)));
#line 3252 "typecheck.m"
    check_hlds__typecheck__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 3)));
#line 3252 "typecheck.m"
    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 4)));
#line 3252 "typecheck.m"
    check_hlds__typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 5)));
#line 3252 "typecheck.m"
    check_hlds__typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 6)));
#line 3252 "typecheck.m"
    check_hlds__typecheck__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 7)));
#line 3253 "typecheck.m"
    {
#line 3253 "typecheck.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_25, &check_hlds__typecheck__ClassTable_26);
    }
#line 3254 "typecheck.m"
    {
#line 3254 "typecheck.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__typecheck__ModuleInfo_25, check_hlds__typecheck__PredId_24, &check_hlds__typecheck__PredInfo_27);
    }
#line 3256 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Body_23)) == (MR_mktag((MR_Integer) 1)));
#line 3256 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3256 "typecheck.m"
      {
#line 3256 "typecheck.m"
        check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 0)));
#line 3256 "typecheck.m"
        check_hlds__typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 1)));
#line 3256 "typecheck.m"
        check_hlds__typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 2)));
#line 3256 "typecheck.m"
        check_hlds__typecheck__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 3)));
#line 3256 "typecheck.m"
        check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 4)));
#line 3256 "typecheck.m"
        check_hlds__typecheck__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 5)));
#line 3256 "typecheck.m"
        check_hlds__typecheck__V_66_66 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 3256 "typecheck.m"
        check_hlds__typecheck__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 3256 "typecheck.m"
        check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Body_23, (MR_Integer) 7)));
#line 3256 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 3256 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3256 "typecheck.m"
          {
#line 3256 "typecheck.m"
            check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_38_38, (MR_Integer) 0)));
#line 3257 "typecheck.m"
            check_hlds__typecheck__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 3257 "typecheck.m"
            {
#line 3257 "typecheck.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(check_hlds__typecheck__PredInfo_27, &check_hlds__typecheck__V_70_70);
            }
#line 3257 "typecheck.m"
            {
#line 3257 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____goal_type_0_0(check_hlds__typecheck__V_39_39, check_hlds__typecheck__V_70_70);
            }
#line 3257 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3256 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3256 "typecheck.m"
              {
#line 3258 "typecheck.m"
                {
#line 3258 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_27);
                }
#line 3258 "typecheck.m"
                check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3256 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 3256 "typecheck.m"
                  {
#line 3259 "typecheck.m"
                    check_hlds__typecheck__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3259 "typecheck.m"
                    {
#line 3259 "typecheck.m"
                      hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__PredInfo_27, &check_hlds__typecheck__V_71_71);
                    }
#line 3259 "typecheck.m"
                    {
#line 3259 "typecheck.m"
                      check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____import_status_0_0(check_hlds__typecheck__V_40_40, check_hlds__typecheck__V_71_71);
                    }
#line 3259 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3256 "typecheck.m"
                  }
#line 3256 "typecheck.m"
              }
#line 3256 "typecheck.m"
          }
#line 3256 "typecheck.m"
      }
#line 3262 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3261 "typecheck.m"
      {
#line 3261 "typecheck.m"
        MR_Word check_hlds__typecheck__V_41_41;

#line 3261 "typecheck.m"
        {
#line 3261 "typecheck.m"
          check_hlds__typecheck__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3261 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_41_41, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3261 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_41_41, 1) = ((MR_Box) (check_hlds__typecheck__TypeDefn_22));
#line 3261 "typecheck.m"
        }
#line 3261 "typecheck.m"
        {
#line 3261 "typecheck.m"
          MR_Word base;
#line 3261 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3261 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfo_10 = base;
#line 3261 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 3261 "typecheck.m"
        }
#line 3261 "typecheck.m"
      }
#line 3262 "typecheck.m"
    else
#line 3270 "typecheck.m"
      {
#line 3265 "typecheck.m"
        MR_Word check_hlds__typecheck__V_72_72;
#line 3267 "typecheck.m"
        MR_Word check_hlds__typecheck__V_43_43;
#line 3267 "typecheck.m"
        MR_Word check_hlds__typecheck__V_73_73;

#line 3265 "typecheck.m"
        {
#line 3265 "typecheck.m"
          hlds__hlds_data__get_type_defn_status_2_p_0(check_hlds__typecheck__TypeDefn_22, &check_hlds__typecheck__V_72_72);
        }
#line 3265 "typecheck.m"
        {
#line 3265 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____import_status_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__typecheck__V_72_72);
        }
#line 3265 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3265 "typecheck.m"
          {
#line 3266 "typecheck.m"
            {
#line 3266 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(check_hlds__typecheck__PredInfo_27);
            }
#line 3266 "typecheck.m"
            check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3265 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3265 "typecheck.m"
              {
#line 3267 "typecheck.m"
                check_hlds__typecheck__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3267 "typecheck.m"
                {
#line 3267 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__PredInfo_27, &check_hlds__typecheck__V_73_73);
                }
#line 3267 "typecheck.m"
                {
#line 3267 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred____Unify____import_status_0_0(check_hlds__typecheck__V_43_43, check_hlds__typecheck__V_73_73);
                }
#line 3267 "typecheck.m"
                check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3265 "typecheck.m"
              }
#line 3265 "typecheck.m"
          }
#line 3270 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3269 "typecheck.m"
          {
#line 3269 "typecheck.m"
            *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[3]);
#line 3269 "typecheck.m"
          }
#line 3270 "typecheck.m"
        else
#line 3276 "typecheck.m"
          {
#line 3271 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Action_8 == (MR_Integer) 0);
#line 3271 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3272 "typecheck.m"
              check_hlds__typecheck__succeeded = (check_hlds__typecheck__ExistQVars0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3276 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3275 "typecheck.m"
              {
#line 3275 "typecheck.m"
                MR_Word check_hlds__typecheck__V_45_45;

#line 3275 "typecheck.m"
                {
#line 3275 "typecheck.m"
                  check_hlds__typecheck__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3275 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_45_45, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3275 "typecheck.m"
                }
#line 3275 "typecheck.m"
                {
#line 3275 "typecheck.m"
                  MR_Word base;
#line 3275 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3275 "typecheck.m"
                  *check_hlds__typecheck__ConsTypeInfo_10 = base;
#line 3275 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_45_45));
#line 3275 "typecheck.m"
                }
#line 3275 "typecheck.m"
              }
#line 3276 "typecheck.m"
            else
#line 3278 "typecheck.m"
              {
#line 3278 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeArgs_29;
#line 3278 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsType_30;
#line 3278 "typecheck.m"
                MR_Word check_hlds__typecheck__UnivProgConstraints_31;
#line 3278 "typecheck.m"
                MR_Word check_hlds__typecheck__ProgConstraints_32;
#line 3278 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVars_33;
#line 3278 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_34;
#line 3278 "typecheck.m"
                MR_Word check_hlds__typecheck__V_47_47;
#line 3278 "typecheck.m"
                MR_Word check_hlds__typecheck__V_48_48;

#line 3277 "typecheck.m"
                {
#line 3277 "typecheck.m"
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__ConsTypeKinds_14, check_hlds__typecheck__ConsTypeParams_13, &check_hlds__typecheck__ConsTypeArgs_29);
                }
#line 3279 "typecheck.m"
                {
#line 3279 "typecheck.m"
                  parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_11, check_hlds__typecheck__ConsTypeArgs_29, &check_hlds__typecheck__ConsType_30);
                }
#line 3280 "typecheck.m"
                check_hlds__typecheck__UnivProgConstraints_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3286 "typecheck.m"
                if ((check_hlds__typecheck__Action_8 == (MR_Integer) 2))
#line 3282 "typecheck.m"
                  {
#line 3283 "typecheck.m"
                    {
#line 3283 "typecheck.m"
                      check_hlds__typecheck__ProgConstraints_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3283 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 0) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_31));
#line 3283 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3283 "typecheck.m"
                    }
#line 3285 "typecheck.m"
                    check_hlds__typecheck__ExistQVars_33 = check_hlds__typecheck__ExistQVars0_15;
#line 3282 "typecheck.m"
                  }
#line 3286 "typecheck.m"
                else
#line 3286 "typecheck.m"
                  if ((check_hlds__typecheck__Action_8 == (MR_Integer) 1))
#line 3295 "typecheck.m"
                    {
#line 3301 "typecheck.m"
                      {
#line 3301 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3301 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3301 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 1) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3301 "typecheck.m"
                      }
#line 3303 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_33 = check_hlds__typecheck__ExistQVars0_15;
#line 3295 "typecheck.m"
                    }
#line 3286 "typecheck.m"
                  else
#line 3287 "typecheck.m"
                    {
#line 3291 "typecheck.m"
                      {
#line 3291 "typecheck.m"
                        check_hlds__typecheck__ProgConstraints_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3291 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 0) = ((MR_Box) (check_hlds__typecheck__ExistProgConstraints_16));
#line 3291 "typecheck.m"
                        MR_hl_field(MR_mktag(0), check_hlds__typecheck__ProgConstraints_32, 1) = ((MR_Box) (check_hlds__typecheck__UnivProgConstraints_31));
#line 3291 "typecheck.m"
                      }
#line 3293 "typecheck.m"
                      check_hlds__typecheck__ExistQVars_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3287 "typecheck.m"
                    }
#line 3305 "typecheck.m"
                {
#line 3305 "typecheck.m"
                  hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_26, check_hlds__typecheck__ConsTypeVarSet_12, check_hlds__typecheck__GoalId_7, check_hlds__typecheck__ProgConstraints_32, &check_hlds__typecheck__Constraints_34);
                }
#line 3308 "typecheck.m"
                {
#line 3308 "typecheck.m"
                  check_hlds__typecheck__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 3308 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (check_hlds__typecheck__TypeCtor_11));
#line 3308 "typecheck.m"
                }
#line 3307 "typecheck.m"
                {
#line 3307 "typecheck.m"
                  check_hlds__typecheck__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3307 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_12));
#line 3307 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_33));
#line 3307 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_30));
#line 3307 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_19));
#line 3307 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_34));
#line 3307 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_47_47, 5) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 3307 "typecheck.m"
                }
#line 3307 "typecheck.m"
                *check_hlds__typecheck__ConsTypeInfo_10 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_47_47);
#line 3278 "typecheck.m"
              }
#line 3276 "typecheck.m"
          }
#line 3270 "typecheck.m"
      }
#line 3215 "typecheck.m"
  }
#line 3213 "typecheck.m"
}

#line 3200 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_cons_defn_list_5_p_0(
#line 3200 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3200 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 3200 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 3200 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 3200 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__5_5)
#line 3200 "typecheck.m"
{
#line 3204 "typecheck.m"
  {
#line 3204 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 3204 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3204 "typecheck.m"
      *check_hlds__typecheck__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3204 "typecheck.m"
    else
#line 3205 "typecheck.m"
      {
#line 3205 "typecheck.m"
        MR_Word check_hlds__typecheck__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 0)));
#line 3205 "typecheck.m"
        MR_Word check_hlds__typecheck__Xs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__4_4, (MR_Integer) 1)));
#line 3205 "typecheck.m"
        MR_Word check_hlds__typecheck__Y_14;
#line 3205 "typecheck.m"
        MR_Word check_hlds__typecheck__Ys_15;

#line 3206 "typecheck.m"
        {
#line 3206 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__X_12, &check_hlds__typecheck__Y_14);
        }
#line 3207 "typecheck.m"
        {
#line 3207 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__HeadVar__1_1, check_hlds__typecheck__HeadVar__2_2, check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__Xs_13, &check_hlds__typecheck__Ys_15);
        }
#line 3205 "typecheck.m"
        {
#line 3205 "typecheck.m"
          MR_Word base;
#line 3205 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3205 "typecheck.m"
          *check_hlds__typecheck__HeadVar__5_5 = base;
#line 3205 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Y_14));
#line 3205 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Ys_15));
#line 3205 "typecheck.m"
        }
#line 3205 "typecheck.m"
      }
#line 3204 "typecheck.m"
  }
#line 3200 "typecheck.m"
}

#line 3177 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__split_cons_errors_3_p_0(
#line 3177 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 3177 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 3177 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3)
#line 3177 "typecheck.m"
{
#line 3180 "typecheck.m"
  {
#line 3180 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 3180 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3180 "typecheck.m"
      {
#line 3180 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3180 "typecheck.m"
        *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3180 "typecheck.m"
      }
#line 3180 "typecheck.m"
    else
#line 3181 "typecheck.m"
      {
#line 3181 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeConsInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 3181 "typecheck.m"
        MR_Word check_hlds__typecheck__MaybeConsInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 3181 "typecheck.m"
        MR_Word check_hlds__typecheck__InfosTail_8;
#line 3181 "typecheck.m"
        MR_Word check_hlds__typecheck__ErrorsTail_9;

#line 3182 "typecheck.m"
        {
#line 3182 "typecheck.m"
          check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__MaybeConsInfos_5, &check_hlds__typecheck__InfosTail_8, &check_hlds__typecheck__ErrorsTail_9);
        }
#line 3187 "typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeConsInfo_4)) == (MR_mktag((MR_Integer) 1))))
#line 3188 "typecheck.m"
          {
#line 3188 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsError_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeConsInfo_4, (MR_Integer) 0)));

#line 3189 "typecheck.m"
            *check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__InfosTail_8;
#line 3190 "typecheck.m"
            {
#line 3190 "typecheck.m"
              MR_Word base;
#line 3190 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3190 "typecheck.m"
              *check_hlds__typecheck__HeadVar__3_3 = base;
#line 3190 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsError_11));
#line 3190 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__ErrorsTail_9));
#line 3190 "typecheck.m"
            }
#line 3188 "typecheck.m"
          }
#line 3187 "typecheck.m"
        else
#line 3184 "typecheck.m"
          {
#line 3184 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsInfo_10 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeConsInfo_4), (MR_Integer) 0);

#line 3185 "typecheck.m"
            {
#line 3185 "typecheck.m"
              MR_Word base;
#line 3185 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3185 "typecheck.m"
              *check_hlds__typecheck__HeadVar__2_2 = base;
#line 3185 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_10));
#line 3185 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__InfosTail_8));
#line 3185 "typecheck.m"
            }
#line 3186 "typecheck.m"
            *check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__ErrorsTail_9;
#line 3184 "typecheck.m"
          }
#line 3181 "typecheck.m"
      }
#line 3180 "typecheck.m"
  }
#line 3177 "typecheck.m"
}

#line 3043 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(
#line 3043 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3043 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3043 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3043 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3043 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3043 "typecheck.m"
  MR_Word * check_hlds__typecheck__DataConsErrors_12)
#line 3043 "typecheck.m"
{
#line 3048 "typecheck.m"
  {
#line 3048 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_72_72;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_77_77;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_13;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__Ctors_14;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__PlainMaybeConsInfos_19;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfos_27;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__DataMaybeConsInfos_28;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__DataConsInfos_29;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__BuiltinConsInfos_35;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__TupleConsInfos_46;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConsInfos_48;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__ApplyConsInfos_50;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__OtherConsInfos_51;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__V_70_70;
#line 3048 "typecheck.m"
    MR_Word check_hlds__typecheck__V_71_71;
#line 3061 "typecheck.m"
    MR_Word check_hlds__typecheck__HLDS_ConsDefns_18;
#line 3056 "typecheck.m"
    MR_Word check_hlds__typecheck__V_15_15;
#line 3056 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_16_16;
#line 3056 "typecheck.m"
    MR_Word check_hlds__typecheck__V_17_17;
#line 3089 "typecheck.m"
    MR_Word check_hlds__typecheck__HLDS_ExistQConsDefns_24;
#line 3082 "typecheck.m"
    MR_Word check_hlds__typecheck__Name_20;
#line 3082 "typecheck.m"
    MR_Word check_hlds__typecheck__FunctorTypeCtor_21;
#line 3082 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigName_22;
#line 3082 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigFunctor_23;
#line 3082 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_78_78;
#line 3100 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
#line 3121 "typecheck.m"
    MR_String check_hlds__typecheck__BuiltInTypeName_30;
#line 3150 "typecheck.m"
    MR_Integer check_hlds__typecheck__TupleArity_36;
#line 3159 "typecheck.m"
    MR_Word check_hlds__typecheck__PredConsInfosPrime_47;
#line 3166 "typecheck.m"
    MR_Word check_hlds__typecheck__ApplyConsInfosPrime_49;

#line 3049 "typecheck.m"
    {
#line 3049 "typecheck.m"
      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_13);
    }
#line 3054 "typecheck.m"
    {
#line 3054 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_ctors_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__Ctors_14);
    }
#line 3056 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 3056 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3056 "typecheck.m"
      {
#line 3056 "typecheck.m"
        check_hlds__typecheck__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3056 "typecheck.m"
        check_hlds__typecheck__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3056 "typecheck.m"
        check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3057 "typecheck.m"
        {
#line 3057 "typecheck.m"
          check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__Functor_8, &check_hlds__typecheck__HLDS_ConsDefns_18);
        }
#line 3056 "typecheck.m"
      }
#line 3061 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3059 "typecheck.m"
      {
#line 3059 "typecheck.m"
        {
#line 3059 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 2, check_hlds__typecheck__HLDS_ConsDefns_18, &check_hlds__typecheck__PlainMaybeConsInfos_19);
        }
#line 3059 "typecheck.m"
      }
#line 3061 "typecheck.m"
    else
#line 3062 "typecheck.m"
      check_hlds__typecheck__PlainMaybeConsInfos_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3082 "typecheck.m"
    check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 3082 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3082 "typecheck.m"
      {
#line 3082 "typecheck.m"
        check_hlds__typecheck__Name_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3082 "typecheck.m"
        check_hlds__typecheck__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3082 "typecheck.m"
        check_hlds__typecheck__FunctorTypeCtor_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3082 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_78_78);
#line 3082 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3082 "typecheck.m"
          {
#line 3083 "typecheck.m"
            {
#line 3083 "typecheck.m"
              check_hlds__typecheck__succeeded = parse_tree__prog_type__remove_new_prefix_2_p_0(check_hlds__typecheck__Name_20, &check_hlds__typecheck__OrigName_22);
            }
#line 3082 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 3082 "typecheck.m"
              {
#line 3084 "typecheck.m"
                {
#line 3084 "typecheck.m"
                  check_hlds__typecheck__OrigFunctor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 3084 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 3084 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 1) = ((MR_Box) (check_hlds__typecheck__OrigName_22));
#line 3084 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 2) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 3084 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__OrigFunctor_23, 3) = ((MR_Box) (check_hlds__typecheck__FunctorTypeCtor_21));
#line 3084 "typecheck.m"
                }
#line 3085 "typecheck.m"
                {
#line 3085 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_data__search_cons_table_3_p_0(check_hlds__typecheck__Ctors_14, check_hlds__typecheck__OrigFunctor_23, &check_hlds__typecheck__HLDS_ExistQConsDefns_24);
                }
#line 3082 "typecheck.m"
              }
#line 3082 "typecheck.m"
          }
#line 3082 "typecheck.m"
      }
#line 3089 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3087 "typecheck.m"
      {
#line 3087 "typecheck.m"
        {
#line 3087 "typecheck.m"
          check_hlds__typecheck__convert_cons_defn_list_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, (MR_Integer) 0, check_hlds__typecheck__HLDS_ExistQConsDefns_24, &check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25);
        }
#line 3087 "typecheck.m"
      }
#line 3089 "typecheck.m"
    else
#line 3090 "typecheck.m"
      check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3096 "typecheck.m"
    {
#line 3096 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_field_access_function_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26);
    }
#line 3100 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3099 "typecheck.m"
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = check_hlds__typecheck__FieldAccessMaybeConsInfosPrime_26;
#line 3100 "typecheck.m"
    else
#line 3101 "typecheck.m"
      check_hlds__typecheck__FieldAccessMaybeConsInfos_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5256 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_72_72 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 3105 "typecheck.m"
    {
#line 3105 "typecheck.m"
      check_hlds__typecheck__V_54_54 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__UnivQuantifiedMaybeConsInfos_25, check_hlds__typecheck__FieldAccessMaybeConsInfos_27);
    }
#line 3104 "typecheck.m"
    {
#line 3104 "typecheck.m"
      check_hlds__typecheck__DataMaybeConsInfos_28 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_72_72, check_hlds__typecheck__PlainMaybeConsInfos_19, check_hlds__typecheck__V_54_54);
    }
#line 3106 "typecheck.m"
    {
#line 3106 "typecheck.m"
      check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__DataMaybeConsInfos_28, &check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__DataConsErrors_12);
    }
#line 3112 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == (MR_Integer) 0);
#line 3112 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2559 "typecheck.m"
      {
#line 2559 "typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2561 "typecheck.m"
          {
#line 2561 "typecheck.m"
            check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
#line 2561 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2561 "typecheck.m"
          }
#line 2559 "typecheck.m"
        else
#line 2559 "typecheck.m"
          if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2563 "typecheck.m"
            {
#line 2563 "typecheck.m"
              MR_String check_hlds__typecheck__String_83;
#line 2563 "typecheck.m"
              MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2563 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 2563 "typecheck.m"
              MR_Word check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 2570 "typecheck.m"
              MR_Char check_hlds__typecheck__V_85_85;

#line 2563 "typecheck.m"
              check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_87_87 == (MR_Integer) 0);
#line 2563 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2563 "typecheck.m"
                {
#line 2563 "typecheck.m"
                  check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_86_86)) == (MR_mktag((MR_Integer) 0)));
#line 2563 "typecheck.m"
                  if (check_hlds__typecheck__succeeded)
#line 2563 "typecheck.m"
                    {
#line 2563 "typecheck.m"
                      check_hlds__typecheck__String_83 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_86_86, (MR_Integer) 0)));
#line 2563 "typecheck.m"
                      check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "character";
#line 2570 "typecheck.m"
                      {
#line 2570 "typecheck.m"
                        check_hlds__typecheck__succeeded = mercury__string__char_to_string_2_p_1(&check_hlds__typecheck__V_85_85, check_hlds__typecheck__String_83);
                      }
#line 2563 "typecheck.m"
                    }
#line 2563 "typecheck.m"
                }
#line 2563 "typecheck.m"
            }
#line 2559 "typecheck.m"
          else
#line 2559 "typecheck.m"
            if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2560 "typecheck.m"
              {
#line 2560 "typecheck.m"
                check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "float";
#line 2560 "typecheck.m"
                check_hlds__typecheck__succeeded = MR_TRUE;
#line 2560 "typecheck.m"
              }
#line 2559 "typecheck.m"
            else
#line 2559 "typecheck.m"
              if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 2571 "typecheck.m"
                {
#line 2571 "typecheck.m"
                  MR_String check_hlds__typecheck__Name_88 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));

#line 2579 "typecheck.m"
                  if ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "line") == 0))
#line 2581 "typecheck.m"
                    {
#line 2581 "typecheck.m"
                      check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int";
#line 2581 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2581 "typecheck.m"
                    }
#line 2579 "typecheck.m"
                  else
#line 2579 "typecheck.m"
                    if ((((((((strcmp(check_hlds__typecheck__Name_88, (MR_String) "file") == 0)) || ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "grade") == 0)))) || ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "module") == 0)))) || ((strcmp(check_hlds__typecheck__Name_88, (MR_String) "pred") == 0))))
#line 2578 "typecheck.m"
                      {
#line 2578 "typecheck.m"
                        check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "string";
#line 2578 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2578 "typecheck.m"
                      }
#line 2579 "typecheck.m"
                    else
#line 2579 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_FALSE;
#line 2571 "typecheck.m"
                }
#line 2559 "typecheck.m"
              else
#line 2559 "typecheck.m"
                if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2559 "typecheck.m"
                  {
#line 2559 "typecheck.m"
                    check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "int";
#line 2559 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2559 "typecheck.m"
                  }
#line 2559 "typecheck.m"
                else
#line 2559 "typecheck.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 2562 "typecheck.m"
                    {
#line 2562 "typecheck.m"
                      check_hlds__typecheck__BuiltInTypeName_30 = (MR_String) "string";
#line 2562 "typecheck.m"
                      check_hlds__typecheck__succeeded = MR_TRUE;
#line 2562 "typecheck.m"
                    }
#line 2559 "typecheck.m"
                  else
#line 2559 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_FALSE;
#line 2559 "typecheck.m"
      }
#line 3121 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3115 "typecheck.m"
      {
#line 3115 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtor_31;
#line 3115 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsType_32;
#line 3115 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsTypeVarSet_33;
#line 3115 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsInfo_34;
#line 3115 "typecheck.m"
        MR_Word check_hlds__typecheck__V_55_55;
#line 3115 "typecheck.m"
        MR_Word check_hlds__typecheck__V_60_60;

#line 3115 "typecheck.m"
        {
#line 3115 "typecheck.m"
          check_hlds__typecheck__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 3115 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_55_55, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
#line 3115 "typecheck.m"
        }
#line 3115 "typecheck.m"
        {
#line 3115 "typecheck.m"
          check_hlds__typecheck__TypeCtor_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3115 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 0) = ((MR_Box) (check_hlds__typecheck__V_55_55));
#line 3115 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 3115 "typecheck.m"
        }
#line 3116 "typecheck.m"
        {
#line 3116 "typecheck.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TypeCtor_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsType_32);
        }
#line 3117 "typecheck.m"
        {
#line 3117 "typecheck.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_33);
        }
#line 3119 "typecheck.m"
        {
#line 3119 "typecheck.m"
          check_hlds__typecheck__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 3119 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_60_60, 0) = ((MR_Box) (check_hlds__typecheck__BuiltInTypeName_30));
#line 3119 "typecheck.m"
        }
#line 3118 "typecheck.m"
        {
#line 3118 "typecheck.m"
          check_hlds__typecheck__ConsInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3118 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_33));
#line 3118 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3118 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_32));
#line 3118 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3118 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
#line 3118 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_34, 5) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 3118 "typecheck.m"
        }
#line 3120 "typecheck.m"
        {
#line 3120 "typecheck.m"
          check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3120 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_34));
#line 3120 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__BuiltinConsInfos_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3120 "typecheck.m"
        }
#line 3115 "typecheck.m"
      }
#line 3121 "typecheck.m"
    else
#line 3122 "typecheck.m"
      check_hlds__typecheck__BuiltinConsInfos_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3128 "typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3127 "typecheck.m"
      {
#line 3127 "typecheck.m"
        MR_Word check_hlds__typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3127 "typecheck.m"
        MR_String check_hlds__typecheck__V_63_63;
#line 3127 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37;

#line 3127 "typecheck.m"
        check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 3127 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 3127 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_62_62)) == (MR_mktag((MR_Integer) 0)));
#line 3127 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3127 "typecheck.m"
          {
#line 3127 "typecheck.m"
            check_hlds__typecheck__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_62_62, (MR_Integer) 0)));
#line 3127 "typecheck.m"
            check_hlds__typecheck__succeeded = (strcmp(check_hlds__typecheck__V_63_63, (MR_String) "{}") == 0);
#line 3127 "typecheck.m"
          }
#line 3127 "typecheck.m"
      }
#line 3128 "typecheck.m"
    else
#line 3128 "typecheck.m"
      if (((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 3128 "typecheck.m"
        {
#line 3128 "typecheck.m"
          check_hlds__typecheck__TupleArity_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 3128 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_TRUE;
#line 3128 "typecheck.m"
        }
#line 3128 "typecheck.m"
      else
#line 3128 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_FALSE;
#line 3150 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3135 "typecheck.m"
      {
#line 3135 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_74_74 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 3135 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsTypeVarSet0_38;
#line 3135 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleArgTVars_39;
#line 3135 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsTypeVarSet_40;
#line 3135 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleArgTypes_41;
#line 3135 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleTypeCtor_42;
#line 3135 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsType_43;
#line 3135 "typecheck.m"
        MR_Word check_hlds__typecheck__TupleConsInfo_45;
#line 3135 "typecheck.m"
        MR_Word check_hlds__typecheck__V_64_64;

#line 3135 "typecheck.m"
        {
#line 3135 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, &check_hlds__typecheck__TupleConsTypeVarSet0_38);
        }
#line 3136 "typecheck.m"
        {
#line 3136 "typecheck.m"
          mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_74_74, check_hlds__typecheck__TupleArity_36, &check_hlds__typecheck__TupleArgTVars_39, check_hlds__typecheck__TupleConsTypeVarSet0_38, &check_hlds__typecheck__TupleConsTypeVarSet_40);
        }
#line 3138 "typecheck.m"
        {
#line 3138 "typecheck.m"
          check_hlds__typecheck__V_64_64 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 3138 "typecheck.m"
        {
#line 3138 "typecheck.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_64_64, check_hlds__typecheck__TupleArgTVars_39, &check_hlds__typecheck__TupleArgTypes_41);
        }
#line 3141 "typecheck.m"
        {
#line 3141 "typecheck.m"
          check_hlds__typecheck__TupleTypeCtor_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3141 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_4[1]));
#line 3141 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleTypeCtor_42, 1) = ((MR_Box) (check_hlds__typecheck__TupleArity_36));
#line 3141 "typecheck.m"
        }
#line 3142 "typecheck.m"
        {
#line 3142 "typecheck.m"
          parse_tree__prog_type__construct_type_3_p_0(check_hlds__typecheck__TupleTypeCtor_42, check_hlds__typecheck__TupleArgTypes_41, &check_hlds__typecheck__TupleConsType_43);
        }
#line 3146 "typecheck.m"
        {
#line 3146 "typecheck.m"
          check_hlds__typecheck__TupleConsInfo_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 3146 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsTypeVarSet_40));
#line 3146 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3146 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 2) = ((MR_Box) (check_hlds__typecheck__TupleConsType_43));
#line 3146 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 3) = ((MR_Box) (check_hlds__typecheck__TupleArgTypes_41));
#line 3146 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_13));
#line 3146 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__TupleConsInfo_45, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_4[2])));
#line 3146 "typecheck.m"
        }
#line 3149 "typecheck.m"
        {
#line 3149 "typecheck.m"
          check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3149 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 0) = ((MR_Box) (check_hlds__typecheck__TupleConsInfo_45));
#line 3149 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__TupleConsInfos_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3149 "typecheck.m"
        }
#line 3135 "typecheck.m"
      }
#line 3150 "typecheck.m"
    else
#line 3151 "typecheck.m"
      check_hlds__typecheck__TupleConsInfos_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3157 "typecheck.m"
    {
#line 3157 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__builtin_pred_type_5_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, &check_hlds__typecheck__PredConsInfosPrime_47);
    }
#line 3159 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3158 "typecheck.m"
      check_hlds__typecheck__PredConsInfos_48 = check_hlds__typecheck__PredConsInfosPrime_47;
#line 3159 "typecheck.m"
    else
#line 3160 "typecheck.m"
      check_hlds__typecheck__PredConsInfos_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3164 "typecheck.m"
    {
#line 3164 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_97_112_112_108_121_95_116_121_112_101_95_95_91_49_93_95_48_4_p_0(check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, &check_hlds__typecheck__ApplyConsInfosPrime_49);
    }
#line 3166 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3165 "typecheck.m"
      check_hlds__typecheck__ApplyConsInfos_50 = check_hlds__typecheck__ApplyConsInfosPrime_49;
#line 3166 "typecheck.m"
    else
#line 3167 "typecheck.m"
      check_hlds__typecheck__ApplyConsInfos_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5662 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_77_77 = (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0;
#line 3171 "typecheck.m"
    {
#line 3171 "typecheck.m"
      check_hlds__typecheck__V_71_71 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__PredConsInfos_48, check_hlds__typecheck__ApplyConsInfos_50);
    }
#line 3171 "typecheck.m"
    {
#line 3171 "typecheck.m"
      check_hlds__typecheck__V_70_70 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__TupleConsInfos_46, check_hlds__typecheck__V_71_71);
    }
#line 3170 "typecheck.m"
    {
#line 3170 "typecheck.m"
      check_hlds__typecheck__OtherConsInfos_51 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__BuiltinConsInfos_35, check_hlds__typecheck__V_70_70);
    }
#line 3172 "typecheck.m"
    {
#line 3172 "typecheck.m"
      *check_hlds__typecheck__ConsInfos_11 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_77_77, check_hlds__typecheck__DataConsInfos_29, check_hlds__typecheck__OtherConsInfos_51);
    }
#line 3048 "typecheck.m"
  }
#line 3043 "typecheck.m"
}

#line 2764 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1(
#line 2764 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2764 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2764 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2764 "typecheck.m"
{
#line 2764 "typecheck.m"
  {
#line 2764 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2764 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2764 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

#line 2764 "typecheck.m"
    {
#line 2764 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    }
#line 2764 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2764 "typecheck.m"
      {
#line 2764 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
#line 2764 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2764 "typecheck.m"
      }
#line 2764 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2764 "typecheck.m"
  }
#line 2764 "typecheck.m"
}

#line 3013 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(
#line 3013 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_7,
#line 3013 "typecheck.m"
  MR_Word check_hlds__typecheck__Functor_8,
#line 3013 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 3013 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 3013 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsInfos_11,
#line 3013 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsErrors_12)
#line 3013 "typecheck.m"
{
#line 3017 "typecheck.m"
  {
#line 3017 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 3017 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_13;
#line 3025 "typecheck.m"
    MR_Word check_hlds__typecheck__ImportStatus_14;

#line 3018 "typecheck.m"
    {
#line 3018 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__IsFieldAccessFunc_13);
    }
#line 3025 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsFieldAccessFunc_13 == (MR_Integer) 1);
#line 3025 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3025 "typecheck.m"
      {
#line 3026 "typecheck.m"
        {
#line 3026 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_pred_import_status_2_p_0(check_hlds__typecheck__Info_7, &check_hlds__typecheck__ImportStatus_14);
        }
#line 3027 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__ImportStatus_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 3027 "typecheck.m"
        check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 3025 "typecheck.m"
      }
#line 3038 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 3034 "typecheck.m"
      {
#line 3034 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldAccessConsInfos_15;
#line 2752 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_26_36;
#line 2752 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeInfo_27_37;
#line 2752 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_30_40;
#line 2752 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_31_41;
#line 2752 "typecheck.m"
        MR_Word check_hlds__typecheck__Name_21;
#line 2752 "typecheck.m"
        MR_Word check_hlds__typecheck__ModuleInfo_23;
#line 2752 "typecheck.m"
        MR_Word check_hlds__typecheck__AccessType_24;
#line 2752 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldName_25;
#line 2752 "typecheck.m"
        MR_Word check_hlds__typecheck__CtorFieldTable_26;
#line 2752 "typecheck.m"
        MR_Word check_hlds__typecheck__FieldDefns_27;
#line 2752 "typecheck.m"
        MR_Word check_hlds__typecheck__V_28_28;
#line 2752 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_42_42;
#line 2752 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_43_43;
#line 2755 "typecheck.m"
        MR_Word check_hlds__typecheck__V_22_22;
#line 2756 "typecheck.m"
        MR_Word check_hlds__typecheck__V_29_29;
#line 2756 "typecheck.m"
        MR_Word check_hlds__typecheck__V_30_30;
#line 2756 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_31_31;
#line 2756 "typecheck.m"
        MR_Word check_hlds__typecheck__V_32_32;
#line 2756 "typecheck.m"
        MR_Word check_hlds__typecheck__V_33_33;
#line 2756 "typecheck.m"
        MR_Word check_hlds__typecheck__V_34_34;
#line 2756 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_35_35;
#line 2761 "typecheck.m"
        MR_Box check_hlds__typecheck__conv0_FieldDefns_27;

#line 2755 "typecheck.m"
        check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__Functor_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2755 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2755 "typecheck.m"
          {
#line 2755 "typecheck.m"
            check_hlds__typecheck__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 1)));
#line 2755 "typecheck.m"
            check_hlds__typecheck__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 2)));
#line 2755 "typecheck.m"
            check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Functor_8, (MR_Integer) 3)));
#line 2755 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_42_42);
#line 2752 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2752 "typecheck.m"
              {
#line 2756 "typecheck.m"
                check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 0)));
#line 2756 "typecheck.m"
                check_hlds__typecheck__ModuleInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 1)));
#line 2756 "typecheck.m"
                check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 2)));
#line 2756 "typecheck.m"
                check_hlds__typecheck__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 3)));
#line 2756 "typecheck.m"
                check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 4)));
#line 2756 "typecheck.m"
                check_hlds__typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 5)));
#line 2756 "typecheck.m"
                check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 6)));
#line 2756 "typecheck.m"
                check_hlds__typecheck__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_7, (MR_Integer) 7)));
#line 2757 "typecheck.m"
                {
#line 2757 "typecheck.m"
                  check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_23, check_hlds__typecheck__Name_21, &check_hlds__typecheck__V_43_43, &check_hlds__typecheck__AccessType_24, &check_hlds__typecheck__FieldName_25);
                }
#line 2752 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2752 "typecheck.m"
                  {
#line 2757 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_43_43);
#line 2752 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2752 "typecheck.m"
                      {
#line 2760 "typecheck.m"
                        {
#line 2760 "typecheck.m"
                          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_23, &check_hlds__typecheck__CtorFieldTable_26);
                        }
#line 5884 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_26_36 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 5886 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeInfo_27_37 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
#line 2761 "typecheck.m"
                        {
#line 2761 "typecheck.m"
                          check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_36, check_hlds__typecheck__TypeInfo_27_37, check_hlds__typecheck__CtorFieldTable_26, ((MR_Box) (check_hlds__typecheck__FieldName_25)), &check_hlds__typecheck__conv0_FieldDefns_27);
                        }
#line 2761 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2761 "typecheck.m"
                          {
#line 2761 "typecheck.m"
                            check_hlds__typecheck__FieldDefns_27 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_27);
#line 2761 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2761 "typecheck.m"
                          }
#line 2752 "typecheck.m"
                        if (check_hlds__typecheck__succeeded)
#line 2752 "typecheck.m"
                          {
#line 5907 "check_hlds.typecheck.c"
                            check_hlds__typecheck__TypeCtorInfo_30_40 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
#line 5909 "check_hlds.typecheck.c"
                            check_hlds__typecheck__TypeCtorInfo_31_41 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 2764 "typecheck.m"
                            {
#line 2764 "typecheck.m"
                              check_hlds__typecheck__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2764 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[0]));
#line 2764 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0_1));
#line 2764 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2764 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 3) = ((MR_Box) (check_hlds__typecheck__Info_7));
#line 2764 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_10));
#line 2764 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 5) = ((MR_Box) (check_hlds__typecheck__Name_21));
#line 2764 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 2764 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_24));
#line 2764 "typecheck.m"
                              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_28_28, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_25));
#line 2764 "typecheck.m"
                            }
#line 2763 "typecheck.m"
                            {
#line 2763 "typecheck.m"
                              mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_30_40, check_hlds__typecheck__TypeCtorInfo_31_41, check_hlds__typecheck__V_28_28, check_hlds__typecheck__FieldDefns_27, &check_hlds__typecheck__FieldAccessConsInfos_15);
                            }
#line 2763 "typecheck.m"
                            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2752 "typecheck.m"
                          }
#line 2752 "typecheck.m"
                      }
#line 2752 "typecheck.m"
                  }
#line 2752 "typecheck.m"
              }
#line 2755 "typecheck.m"
          }
#line 3034 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 3033 "typecheck.m"
          {
#line 3033 "typecheck.m"
            check_hlds__typecheck__split_cons_errors_3_p_0(check_hlds__typecheck__FieldAccessConsInfos_15, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
#line 3033 "typecheck.m"
            return;
          }
#line 3034 "typecheck.m"
        else
#line 3035 "typecheck.m"
          {
#line 3035 "typecheck.m"
            *check_hlds__typecheck__ConsInfos_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3036 "typecheck.m"
            *check_hlds__typecheck__ConsErrors_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3035 "typecheck.m"
          }
#line 3034 "typecheck.m"
      }
#line 3038 "typecheck.m"
    else
#line 3039 "typecheck.m"
      {
#line 3039 "typecheck.m"
        check_hlds__typecheck__typecheck_info_get_ctor_list_2_6_p_0(check_hlds__typecheck__Info_7, check_hlds__typecheck__Functor_8, check_hlds__typecheck__Arity_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsInfos_11, check_hlds__typecheck__ConsErrors_12);
#line 3039 "typecheck.m"
        return;
      }
#line 3017 "typecheck.m"
  }
#line 3013 "typecheck.m"
}

#line 2998 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_1(
#line 2998 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 2998 "typecheck.m"
{
#line 2998 "typecheck.m"
  {
#line 2998 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 2998 "typecheck.m"
    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0, 1);
#line 2998 "typecheck.m"
  }
#line 2998 "typecheck.m"
}

#line 2998 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_2(
#line 2998 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 2998 "typecheck.m"
{
#line 2998 "typecheck.m"
  {
#line 2998 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 6018 "check_hlds.typecheck.c"
    (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 2999 "typecheck.m"
    {
#line 2999 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = mercury__map__contains_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TypeInfo_13_13, (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12)));
    }
#line 2999 "typecheck.m"
    if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
#line 2999 "typecheck.m"
      {
#line 2999 "typecheck.m"
        check_hlds__typecheck__rename_constraint_3_p_0_1(check_hlds__typecheck__env_ptr);
#line 2999 "typecheck.m"
        return;
      }
#line 2998 "typecheck.m"
  }
#line 2998 "typecheck.m"
}

#line 2998 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0_3(
#line 2998 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 2998 "typecheck.m"
{
#line 2998 "typecheck.m"
  {
#line 2998 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 2998 "typecheck.m"
    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__commit_0) == 0)
#line 2998 "typecheck.m"
      {
#line 2998 "typecheck.m"
        {
#line 2998 "typecheck.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__Var_12, check_hlds__typecheck__rename_constraint_3_p_0_2, check_hlds__typecheck__env_ptr);
        }
#line 2998 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_FALSE;
#line 2998 "typecheck.m"
      }
#line 2998 "typecheck.m"
    else
#line 2998 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
#line 2998 "typecheck.m"
  }
#line 2998 "typecheck.m"
}

#line 2992 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__rename_constraint_3_p_0(
#line 2992 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_4,
#line 2992 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint0_5,
#line 2992 "typecheck.m"
  MR_Word * check_hlds__typecheck__Constraint_6)
#line 2992 "typecheck.m"
{
#line 2992 "typecheck.m"
  {
#line 2992 "typecheck.m"
    struct check_hlds__typecheck__rename_constraint_3_p_0_env_0_s check_hlds__typecheck__env;

#line 2992 "typecheck.m"
    (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4 = check_hlds__typecheck__TVarRenaming_4;
#line 2995 "typecheck.m"
    {
#line 2995 "typecheck.m"
      MR_Word check_hlds__typecheck__Ids_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 0)));
#line 2995 "typecheck.m"
      MR_Word check_hlds__typecheck__ClassName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 1)));
#line 2995 "typecheck.m"
      MR_Word check_hlds__typecheck__ArgTypes_11;

#line 2996 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint0_5, (MR_Integer) 2)));
#line 2998 "typecheck.m"
      {
#line 2998 "typecheck.m"
        check_hlds__typecheck__rename_constraint_3_p_0_3(&check_hlds__typecheck__env);
      }
#line 2995 "typecheck.m"
      if ((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded)
#line 2995 "typecheck.m"
        {
#line 3001 "typecheck.m"
          {
#line 3001 "typecheck.m"
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__TVarRenaming_4, (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__ArgTypes0_9, &check_hlds__typecheck__ArgTypes_11);
          }
#line 3002 "typecheck.m"
          {
#line 3002 "typecheck.m"
            MR_Word base;
#line 3002 "typecheck.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 3002 "typecheck.m"
            *check_hlds__typecheck__Constraint_6 = base;
#line 3002 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Ids_7));
#line 3002 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__ClassName_8));
#line 3002 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__ArgTypes_11));
#line 3002 "typecheck.m"
          }
#line 3002 "typecheck.m"
          (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded = MR_TRUE;
#line 2995 "typecheck.m"
        }
#line 2995 "typecheck.m"
      return (check_hlds__typecheck__env).check_hlds__typecheck__rename_constraint_3_p_0_env_0__succeeded;
#line 2995 "typecheck.m"
    }
#line 2992 "typecheck.m"
  }
#line 2992 "typecheck.m"
}

#line 2983 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_constraint_2_p_0(
#line 2983 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_3,
#line 2983 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4)
#line 2983 "typecheck.m"
{
#line 2985 "typecheck.m"
  {
#line 2985 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2985 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_11_11;
#line 2985 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesToCheck_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 2)));
#line 2985 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarsToCheck0_8;
#line 2985 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarsToCheck_9;
#line 2985 "typecheck.m"
    MR_Word check_hlds__typecheck__RelevantTVars_10;
#line 2986 "typecheck.m"
    MR_Word check_hlds__typecheck___Ids_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 0)));
#line 2986 "typecheck.m"
    MR_Word check_hlds__typecheck___ClassName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 1)));

#line 2987 "typecheck.m"
    {
#line 2987 "typecheck.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__TypesToCheck_7, &check_hlds__typecheck__TVarsToCheck0_8);
    }
#line 6178 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeInfo_11_11 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 2988 "typecheck.m"
    {
#line 2988 "typecheck.m"
      mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck0_8, &check_hlds__typecheck__TVarsToCheck_9);
    }
#line 2989 "typecheck.m"
    {
#line 2989 "typecheck.m"
      mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__TVarsToCheck_9, check_hlds__typecheck__CallTVars_3, &check_hlds__typecheck__RelevantTVars_10);
    }
#line 2990 "typecheck.m"
    {
#line 2990 "typecheck.m"
      return check_hlds__typecheck__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__typecheck__TypeInfo_11_11, check_hlds__typecheck__RelevantTVars_10);
    }
#line 2985 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2985 "typecheck.m"
  }
#line 2983 "typecheck.m"
}

#line 2976 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_2(
#line 2976 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2976 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2976 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2976 "typecheck.m"
{
#line 2976 "typecheck.m"
  {
#line 2976 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2976 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2976 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_Constraint_6;

#line 2976 "typecheck.m"
    {
#line 2976 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__rename_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv0_Constraint_6);
    }
#line 2976 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2976 "typecheck.m"
      {
#line 2976 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_Constraint_6));
#line 2976 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2976 "typecheck.m"
      }
#line 2976 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2976 "typecheck.m"
  }
#line 2976 "typecheck.m"
}

#line 2975 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0_1(
#line 2975 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2975 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 2975 "typecheck.m"
{
#line 2975 "typecheck.m"
  {
#line 2975 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2975 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 2975 "typecheck.m"
    {
#line 2975 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__project_constraint_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 2975 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2975 "typecheck.m"
  }
#line 2975 "typecheck.m"
}

#line 2965 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__project_and_rename_constraints_6_p_0(
#line 2965 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_7,
#line 2965 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarSet_8,
#line 2965 "typecheck.m"
  MR_Word check_hlds__typecheck__CallTVars_9,
#line 2965 "typecheck.m"
  MR_Word check_hlds__typecheck__TVarRenaming_10,
#line 2965 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20,
#line 2965 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Constraints_21)
#line 2965 "typecheck.m"
{
#line 2970 "typecheck.m"
  {
#line 2970 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2970 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
#line 2970 "typecheck.m"
    MR_Word check_hlds__typecheck__Unproven0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 0)));
#line 2970 "typecheck.m"
    MR_Word check_hlds__typecheck__Assumed_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 1)));
#line 2970 "typecheck.m"
    MR_Word check_hlds__typecheck__Redundant0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 2)));
#line 2970 "typecheck.m"
    MR_Word check_hlds__typecheck__Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Constraints_0_20, (MR_Integer) 3)));
#line 2970 "typecheck.m"
    MR_Word check_hlds__typecheck__NewUnproven0_16;
#line 2970 "typecheck.m"
    MR_Word check_hlds__typecheck__NewUnproven_17;
#line 2970 "typecheck.m"
    MR_Word check_hlds__typecheck__Redundant_18;
#line 2970 "typecheck.m"
    MR_Word check_hlds__typecheck__Unproven_19;
#line 2970 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 2970 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;

#line 2975 "typecheck.m"
    {
#line 2975 "typecheck.m"
      check_hlds__typecheck__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2975 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[5]));
#line 2975 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_1));
#line 2975 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2975 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_22_22, 3) = ((MR_Box) (check_hlds__typecheck__CallTVars_9));
#line 2975 "typecheck.m"
    }
#line 6330 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 2975 "typecheck.m"
    {
#line 2975 "typecheck.m"
      mercury__list__filter_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__V_22_22, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__NewUnproven0_16);
    }
#line 2976 "typecheck.m"
    {
#line 2976 "typecheck.m"
      check_hlds__typecheck__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2976 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_7[1]));
#line 2976 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__project_and_rename_constraints_6_p_0_2));
#line 2976 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2976 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_23_23, 3) = ((MR_Box) (check_hlds__typecheck__TVarRenaming_10));
#line 2976 "typecheck.m"
    }
#line 2976 "typecheck.m"
    {
#line 2976 "typecheck.m"
      mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__V_23_23, check_hlds__typecheck__NewUnproven0_16, &check_hlds__typecheck__NewUnproven_17);
    }
#line 2978 "typecheck.m"
    {
#line 2978 "typecheck.m"
      hlds__hlds_data__update_redundant_constraints_5_p_0(check_hlds__typecheck__ClassTable_7, check_hlds__typecheck__TVarSet_8, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Redundant0_14, &check_hlds__typecheck__Redundant_18);
    }
#line 2980 "typecheck.m"
    {
#line 2980 "typecheck.m"
      mercury__list__append_3_p_1(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__NewUnproven_17, check_hlds__typecheck__Unproven0_12, &check_hlds__typecheck__Unproven_19);
    }
#line 2981 "typecheck.m"
    {
#line 2981 "typecheck.m"
      MR_Word base;
#line 2981 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2981 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Constraints_21 = base;
#line 2981 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__Unproven_19));
#line 2981 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Assumed_13));
#line 2981 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__Redundant_18));
#line 2981 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__Ancestors_15));
#line 2981 "typecheck.m"
    }
#line 2970 "typecheck.m"
  }
#line 2965 "typecheck.m"
}

#line 2832 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__ClassTable_8,
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_9,
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_10,
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_11,
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__FunctorConsTypeInfo_12,
#line 2832 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigExistTVars_13,
#line 2832 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_14)
#line 2832 "typecheck.m"
{
#line 2837 "typecheck.m"
  {
#line 2837 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2837 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_100_100;
#line 2837 "typecheck.m"
    MR_Word check_hlds__typecheck__TVarSet0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 0)));
#line 2837 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 1)));
#line 2837 "typecheck.m"
    MR_Word check_hlds__typecheck__FunctorType_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 2)));
#line 2837 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsArgTypes_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 3)));
#line 2837 "typecheck.m"
    MR_Word check_hlds__typecheck__Constraints0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 4)));
#line 2837 "typecheck.m"
    MR_Word check_hlds__typecheck__Source0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FunctorConsTypeInfo_12, (MR_Integer) 5)));
#line 2837 "typecheck.m"
    MR_Word check_hlds__typecheck__SourceType_22;
#line 2837 "typecheck.m"
    MR_Integer check_hlds__typecheck__FieldNumber_32;
#line 2837 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldType_33;
#line 2852 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 2852 "typecheck.m"
    MR_Word check_hlds__typecheck__V_29_29;
#line 2852 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;
#line 2852 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 2853 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_FieldType_33;

#line 2843 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__Source0_20)) == (MR_mktag((MR_Integer) 0))))
#line 2841 "typecheck.m"
      check_hlds__typecheck__SourceType_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Source0_20, (MR_Integer) 0)));
#line 2843 "typecheck.m"
    else
#line 2849 "typecheck.m"
      {
#line 2850 "typecheck.m"
        {
#line 2850 "typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.convert_field_access_cons_type_info\'/7", (MR_String) "not type");
#line 2850 "typecheck.m"
          return;
        }
#line 2849 "typecheck.m"
      }
#line 2852 "typecheck.m"
    check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 0)));
#line 2852 "typecheck.m"
    check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 1)));
#line 2852 "typecheck.m"
    check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 2)));
#line 2852 "typecheck.m"
    check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 3)));
#line 2852 "typecheck.m"
    check_hlds__typecheck__FieldNumber_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_11, (MR_Integer) 4)));
#line 6470 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 2853 "typecheck.m"
    {
#line 2853 "typecheck.m"
      mercury__list__det_index1_3_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, &check_hlds__typecheck__conv0_FieldType_33);
    }
#line 2853 "typecheck.m"
    check_hlds__typecheck__FieldType_33 = ((MR_Word) check_hlds__typecheck__conv0_FieldType_33);
#line 2863 "typecheck.m"
    if ((check_hlds__typecheck__AccessType_9 == (MR_Integer) 0))
#line 2855 "typecheck.m"
      {
#line 2855 "typecheck.m"
        MR_Word check_hlds__typecheck__Source_34;
#line 2855 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypes_36;
#line 2855 "typecheck.m"
        MR_Word check_hlds__typecheck__V_74_74;

#line 2856 "typecheck.m"
        {
#line 2856 "typecheck.m"
          check_hlds__typecheck__Source_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2856 "typecheck.m"
          MR_hl_field(MR_mktag(2), check_hlds__typecheck__Source_34, 0) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
#line 2856 "typecheck.m"
        }
#line 2858 "typecheck.m"
        {
#line 2858 "typecheck.m"
          check_hlds__typecheck__ArgTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2858 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 2858 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2858 "typecheck.m"
        }
#line 2861 "typecheck.m"
        {
#line 2861 "typecheck.m"
          check_hlds__typecheck__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2861 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 2861 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 2861 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 2) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 2861 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_36));
#line 2861 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
#line 2861 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_74_74, 5) = ((MR_Box) (check_hlds__typecheck__Source_34));
#line 2861 "typecheck.m"
        }
#line 2861 "typecheck.m"
        *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_74_74);
#line 2855 "typecheck.m"
      }
#line 2863 "typecheck.m"
    else
#line 2864 "typecheck.m"
      {
#line 2864 "typecheck.m"
        MR_Word check_hlds__typecheck__TVarsInField_39;
#line 2864 "typecheck.m"
        MR_Word check_hlds__typecheck__Source_95;

#line 2865 "typecheck.m"
        {
#line 2865 "typecheck.m"
          check_hlds__typecheck__Source_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2865 "typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2865 "typecheck.m"
          MR_hl_field(MR_mktag(3), check_hlds__typecheck__Source_95, 1) = ((MR_Box) (check_hlds__typecheck__SourceType_22));
#line 2865 "typecheck.m"
        }
#line 2879 "typecheck.m"
        {
#line 2879 "typecheck.m"
          parse_tree__prog_type__type_vars_2_p_0(check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__TVarsInField_39);
        }
#line 2892 "typecheck.m"
        if ((check_hlds__typecheck__TVarsInField_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2881 "typecheck.m"
          {
#line 2881 "typecheck.m"
            MR_Word check_hlds__typecheck__V_70_70;
#line 2881 "typecheck.m"
            MR_Word check_hlds__typecheck__V_72_72;
#line 2881 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_76;

#line 2884 "typecheck.m"
            {
#line 2884 "typecheck.m"
              check_hlds__typecheck__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2884 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_70_70, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 2884 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2884 "typecheck.m"
            }
#line 2884 "typecheck.m"
            {
#line 2884 "typecheck.m"
              check_hlds__typecheck__ArgTypes_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2884 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 2884 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_76, 1) = ((MR_Box) (check_hlds__typecheck__V_70_70));
#line 2884 "typecheck.m"
            }
#line 2890 "typecheck.m"
            {
#line 2890 "typecheck.m"
              check_hlds__typecheck__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2890 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 2890 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 2890 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 2) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 2890 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_76));
#line 2890 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 4) = ((MR_Box) (check_hlds__typecheck__Constraints0_19));
#line 2890 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_72_72, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
#line 2890 "typecheck.m"
            }
#line 2890 "typecheck.m"
            *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_72_72);
#line 2881 "typecheck.m"
          }
#line 2892 "typecheck.m"
        else
#line 2893 "typecheck.m"
          {
#line 2893 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeInfo_101_101;
#line 2893 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypesWithoutField_42;
#line 2893 "typecheck.m"
            MR_Word check_hlds__typecheck__TVarsInOtherArgs_43;
#line 2893 "typecheck.m"
            MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers_44;
#line 2893 "typecheck.m"
            MR_Word check_hlds__typecheck__V_58_58;
#line 2893 "typecheck.m"
            MR_Word check_hlds__typecheck__V_59_59;
#line 2893 "typecheck.m"
            MR_Word check_hlds__typecheck__V_60_60;
#line 2893 "typecheck.m"
            MR_Word check_hlds__typecheck__V_61_61;
#line 2893 "typecheck.m"
            MR_Word check_hlds__typecheck__V_62_62;

#line 2908 "typecheck.m"
            {
#line 2908 "typecheck.m"
              check_hlds__typecheck__V_58_58 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
#line 2908 "typecheck.m"
            {
#line 2908 "typecheck.m"
              mercury__list__det_replace_nth_4_p_0(check_hlds__typecheck__TypeCtorInfo_100_100, check_hlds__typecheck__ConsArgTypes_18, check_hlds__typecheck__FieldNumber_32, ((MR_Box) (check_hlds__typecheck__V_58_58)), &check_hlds__typecheck__ArgTypesWithoutField_42);
            }
#line 2910 "typecheck.m"
            {
#line 2910 "typecheck.m"
              parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__ArgTypesWithoutField_42, &check_hlds__typecheck__TVarsInOtherArgs_43);
            }
#line 6645 "check_hlds.typecheck.c"
            check_hlds__typecheck__TypeInfo_101_101 = (MR_Word) &check_hlds__typecheck_scalar_common_1[1];
#line 2912 "typecheck.m"
            {
#line 2912 "typecheck.m"
              check_hlds__typecheck__V_59_59 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39);
            }
#line 2914 "typecheck.m"
            {
#line 2914 "typecheck.m"
              check_hlds__typecheck__V_61_61 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInOtherArgs_43);
            }
#line 2915 "typecheck.m"
            {
#line 2915 "typecheck.m"
              check_hlds__typecheck__V_62_62 = mercury__set__list_to_set_1_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__OrigExistTVars_13);
            }
#line 2913 "typecheck.m"
            {
#line 2913 "typecheck.m"
              check_hlds__typecheck__V_60_60 = mercury__set__intersect_2_f_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__V_61_61, check_hlds__typecheck__V_62_62);
            }
#line 2911 "typecheck.m"
            {
#line 2911 "typecheck.m"
              mercury__set__intersect_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__V_59_59, check_hlds__typecheck__V_60_60, &check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
            }
#line 2918 "typecheck.m"
            {
#line 2918 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__set__is_empty_1_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44);
            }
#line 2947 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2923 "typecheck.m"
              {
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarsOnlyInField0_45;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarsOnlyInField_46;
#line 2923 "typecheck.m"
                MR_Integer check_hlds__typecheck__NumNewTVars_47;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__NewTVars_48;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarRenaming_49;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__RenamedFieldType_50;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__CallTVars0_52;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__CallTVars_53;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__V_63_63;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__V_64_64;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__V_66_66;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__RetType_79;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_80;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__TVarSet_81;
#line 2923 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_82;

#line 2922 "typecheck.m"
                {
#line 2922 "typecheck.m"
                  mercury__list__delete_elems_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsInField_39, check_hlds__typecheck__TVarsInOtherArgs_43, &check_hlds__typecheck__TVarsOnlyInField0_45);
                }
#line 2924 "typecheck.m"
                {
#line 2924 "typecheck.m"
                  mercury__list__sort_and_remove_dups_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField0_45, &check_hlds__typecheck__TVarsOnlyInField_46);
                }
#line 2925 "typecheck.m"
                {
#line 2925 "typecheck.m"
                  mercury__list__length_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, &check_hlds__typecheck__NumNewTVars_47);
                }
#line 2926 "typecheck.m"
                {
#line 2926 "typecheck.m"
                  mercury__varset__new_vars_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__NumNewTVars_47, &check_hlds__typecheck__NewTVars_48, check_hlds__typecheck__TVarSet0_15, &check_hlds__typecheck__TVarSet_81);
                }
#line 2927 "typecheck.m"
                {
#line 2927 "typecheck.m"
                  mercury__map__from_corresponding_lists_3_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__TVarsOnlyInField_46, check_hlds__typecheck__NewTVars_48, &check_hlds__typecheck__TVarRenaming_49);
                }
#line 2929 "typecheck.m"
                {
#line 2929 "typecheck.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FieldType_33, &check_hlds__typecheck__RenamedFieldType_50);
                }
#line 2931 "typecheck.m"
                {
#line 2931 "typecheck.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_p_0(check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__FunctorType_17, &check_hlds__typecheck__RetType_79);
                }
#line 2938 "typecheck.m"
                {
#line 2938 "typecheck.m"
                  check_hlds__typecheck__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2938 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, 0) = ((MR_Box) (check_hlds__typecheck__FieldType_33));
#line 2938 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2938 "typecheck.m"
                }
#line 2938 "typecheck.m"
                {
#line 2938 "typecheck.m"
                  check_hlds__typecheck__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2938 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 2938 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_63_63, 1) = ((MR_Box) (check_hlds__typecheck__V_64_64));
#line 2938 "typecheck.m"
                }
#line 2938 "typecheck.m"
                {
#line 2938 "typecheck.m"
                  parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__typecheck__V_63_63, &check_hlds__typecheck__CallTVars0_52);
                }
#line 2939 "typecheck.m"
                {
#line 2939 "typecheck.m"
                  mercury__set__list_to_set_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__CallTVars0_52, &check_hlds__typecheck__CallTVars_53);
                }
#line 2940 "typecheck.m"
                {
#line 2940 "typecheck.m"
                  check_hlds__typecheck__project_and_rename_constraints_6_p_0(check_hlds__typecheck__ClassTable_8, check_hlds__typecheck__TVarSet_81, check_hlds__typecheck__CallTVars_53, check_hlds__typecheck__TVarRenaming_49, check_hlds__typecheck__Constraints0_19, &check_hlds__typecheck__Constraints_82);
                }
#line 2944 "typecheck.m"
                {
#line 2944 "typecheck.m"
                  check_hlds__typecheck__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2944 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 0) = ((MR_Box) (check_hlds__typecheck__RenamedFieldType_50));
#line 2944 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2944 "typecheck.m"
                }
#line 2944 "typecheck.m"
                {
#line 2944 "typecheck.m"
                  check_hlds__typecheck__ArgTypes_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2944 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 0) = ((MR_Box) (check_hlds__typecheck__FunctorType_17));
#line 2944 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes_80, 1) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 2944 "typecheck.m"
                }
#line 2945 "typecheck.m"
                {
#line 2945 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2945 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__TVarSet_81));
#line 2945 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (check_hlds__typecheck__ExistQVars_16));
#line 2945 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 2) = ((MR_Box) (check_hlds__typecheck__RetType_79));
#line 2945 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_80));
#line 2945 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 4) = ((MR_Box) (check_hlds__typecheck__Constraints_82));
#line 2945 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_68_68, 5) = ((MR_Box) (check_hlds__typecheck__Source_95));
#line 2945 "typecheck.m"
                }
#line 2945 "typecheck.m"
                *check_hlds__typecheck__ConsTypeInfo_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__V_68_68);
#line 2923 "typecheck.m"
              }
#line 2947 "typecheck.m"
            else
#line 2953 "typecheck.m"
              {
#line 2953 "typecheck.m"
                MR_Word check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54;
#line 2953 "typecheck.m"
                MR_Word check_hlds__typecheck__V_69_69;

#line 2952 "typecheck.m"
                {
#line 2952 "typecheck.m"
                  mercury__set__to_sorted_list_2_p_0(check_hlds__typecheck__TypeInfo_101_101, check_hlds__typecheck__ExistQVarsInFieldAndOthers_44, &check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54);
                }
#line 2954 "typecheck.m"
                {
#line 2954 "typecheck.m"
                  check_hlds__typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2954 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 0) = ((MR_Box) (check_hlds__typecheck__FieldName_10));
#line 2954 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 1) = ((MR_Box) (check_hlds__typecheck__FieldDefn_11));
#line 2954 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 2) = ((MR_Box) (check_hlds__typecheck__TVarSet0_15));
#line 2954 "typecheck.m"
                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__V_69_69, 3) = ((MR_Box) (check_hlds__typecheck__ExistQVarsInFieldAndOthers1_54));
#line 2954 "typecheck.m"
                }
#line 2954 "typecheck.m"
                {
#line 2954 "typecheck.m"
                  MR_Word base;
#line 2954 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2954 "typecheck.m"
                  *check_hlds__typecheck__ConsTypeInfo_14 = base;
#line 2954 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 2954 "typecheck.m"
                }
#line 2953 "typecheck.m"
              }
#line 2893 "typecheck.m"
          }
#line 2864 "typecheck.m"
      }
#line 2837 "typecheck.m"
  }
#line 2832 "typecheck.m"
}

#line 2768 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_9,
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__FuncName_11,
#line 2768 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_12,
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__AccessType_13,
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldName_14,
#line 2768 "typecheck.m"
  MR_Word check_hlds__typecheck__FieldDefn_15,
#line 2768 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfo_16)
#line 2768 "typecheck.m"
{
#line 2774 "typecheck.m"
  {
#line 2774 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigExistTVars_17;
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtor_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 2)));
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsId_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 3)));
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeModule_43;
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_46;
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__PredTable_47;
#line 2774 "typecheck.m"
    MR_String check_hlds__typecheck__UnqualFuncName_48;
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFieldAccessFunc_49;
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__Ctors_51;
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsDefn_52;
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsAction_53;
#line 2774 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_40, (MR_Integer) 0)));
#line 2796 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 0)));
#line 2796 "typecheck.m"
    MR_Word check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 1)));
#line 2796 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__FieldDefn_15, (MR_Integer) 4)));
#line 2797 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeCtor_40, (MR_Integer) 1)));
#line 2797 "typecheck.m"
    MR_String check_hlds__typecheck__V_44_44;
#line 2804 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 2804 "typecheck.m"
    MR_Word check_hlds__typecheck__V_57_57;
#line 2804 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_58_58;
#line 2804 "typecheck.m"
    MR_Word check_hlds__typecheck__V_59_59;
#line 2804 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;
#line 2804 "typecheck.m"
    MR_Word check_hlds__typecheck__V_61_61;
#line 2804 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_62_62;
#line 2825 "typecheck.m"
    MR_Word check_hlds__typecheck__V_63_63;
#line 2825 "typecheck.m"
    MR_Word check_hlds__typecheck__V_64_64;
#line 2825 "typecheck.m"
    MR_Word check_hlds__typecheck__V_65_65;
#line 2825 "typecheck.m"
    MR_Word check_hlds__typecheck__V_66_66;
#line 2825 "typecheck.m"
    MR_Word check_hlds__typecheck__V_67_67;
#line 2825 "typecheck.m"
    MR_Word check_hlds__typecheck__V_68_68;
#line 2825 "typecheck.m"
    MR_Word check_hlds__typecheck__V_69_69;

#line 2797 "typecheck.m"
    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 2797 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2797 "typecheck.m"
      {
#line 2797 "typecheck.m"
        check_hlds__typecheck__TypeModule_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, (MR_Integer) 0)));
#line 2797 "typecheck.m"
        check_hlds__typecheck__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, (MR_Integer) 1)));
#line 2804 "typecheck.m"
        check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 0)));
#line 2804 "typecheck.m"
        check_hlds__typecheck__ModuleInfo_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 1)));
#line 2804 "typecheck.m"
        check_hlds__typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 2)));
#line 2804 "typecheck.m"
        check_hlds__typecheck__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 3)));
#line 2804 "typecheck.m"
        check_hlds__typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 4)));
#line 2804 "typecheck.m"
        check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 5)));
#line 2804 "typecheck.m"
        check_hlds__typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 6)));
#line 2804 "typecheck.m"
        check_hlds__typecheck__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 7)));
#line 2805 "typecheck.m"
        {
#line 2805 "typecheck.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_46, &check_hlds__typecheck__PredTable_47);
        }
#line 2806 "typecheck.m"
        {
#line 2806 "typecheck.m"
          check_hlds__typecheck__UnqualFuncName_48 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__typecheck__FuncName_11);
        }
#line 2807 "typecheck.m"
        {
#line 2807 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_is_field_access_function_2_p_0(check_hlds__typecheck__Info_9, &check_hlds__typecheck__IsFieldAccessFunc_49);
        }
#line 2813 "typecheck.m"
        if ((check_hlds__typecheck__IsFieldAccessFunc_49 == (MR_Integer) 0))
#line 2809 "typecheck.m"
          {
#line 2809 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_50;

#line 2810 "typecheck.m"
            {
#line 2810 "typecheck.m"
              hlds__pred_table__predicate_table_lookup_func_m_n_a_6_p_0(check_hlds__typecheck__PredTable_47, (MR_Integer) 0, check_hlds__typecheck__TypeModule_43, check_hlds__typecheck__UnqualFuncName_48, check_hlds__typecheck__Arity_12, &check_hlds__typecheck__PredIds_50);
            }
#line 2812 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredIds_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2809 "typecheck.m"
          }
#line 2813 "typecheck.m"
        else
#line 2814 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2774 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2774 "typecheck.m"
          {
#line 2816 "typecheck.m"
            {
#line 2816 "typecheck.m"
              hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__typecheck__ModuleInfo_46, &check_hlds__typecheck__Ctors_51);
            }
#line 2817 "typecheck.m"
            {
#line 2817 "typecheck.m"
              hlds__hlds_data__lookup_cons_table_of_type_ctor_4_p_0(check_hlds__typecheck__Ctors_51, check_hlds__typecheck__TypeCtor_40, check_hlds__typecheck__ConsId_41, &check_hlds__typecheck__ConsDefn_52);
            }
#line 2821 "typecheck.m"
            if ((check_hlds__typecheck__AccessType_13 == (MR_Integer) 0))
#line 2820 "typecheck.m"
              check_hlds__typecheck__ConsAction_53 = (MR_Integer) 2;
#line 2821 "typecheck.m"
            else
#line 2823 "typecheck.m"
              check_hlds__typecheck__ConsAction_53 = (MR_Integer) 1;
#line 2825 "typecheck.m"
            check_hlds__typecheck__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 0)));
#line 2825 "typecheck.m"
            check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 1)));
#line 2825 "typecheck.m"
            check_hlds__typecheck__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 2)));
#line 2825 "typecheck.m"
            check_hlds__typecheck__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 3)));
#line 2825 "typecheck.m"
            check_hlds__typecheck__OrigExistTVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 4)));
#line 2825 "typecheck.m"
            check_hlds__typecheck__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 5)));
#line 2825 "typecheck.m"
            check_hlds__typecheck__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 6)));
#line 2825 "typecheck.m"
            check_hlds__typecheck__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_52, (MR_Integer) 7)));
#line 2826 "typecheck.m"
            {
#line 2826 "typecheck.m"
              check_hlds__typecheck__convert_cons_defn_5_p_1(check_hlds__typecheck__Info_9, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__ConsAction_53, check_hlds__typecheck__ConsDefn_52, &check_hlds__typecheck__MaybeFunctorConsTypeInfo_18);
            }
#line 2785 "typecheck.m"
            if (((MR_tag((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18)) == (MR_mktag((MR_Integer) 1))))
#line 2787 "typecheck.m"
              *check_hlds__typecheck__ConsTypeInfo_16 = check_hlds__typecheck__MaybeFunctorConsTypeInfo_18;
#line 2785 "typecheck.m"
            else
#line 2779 "typecheck.m"
              {
#line 2779 "typecheck.m"
                MR_Word check_hlds__typecheck__FunctorConsTypeInfo_19 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__MaybeFunctorConsTypeInfo_18), (MR_Integer) 0);
#line 2779 "typecheck.m"
                MR_Word check_hlds__typecheck__ModuleInfo_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 1)));
#line 2779 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassTable_21;
#line 2780 "typecheck.m"
                MR_Word check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 0)));
#line 2780 "typecheck.m"
                MR_Word check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 2)));
#line 2780 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 3)));
#line 2780 "typecheck.m"
                MR_Word check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 4)));
#line 2780 "typecheck.m"
                MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 5)));
#line 2780 "typecheck.m"
                MR_Word check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 6)));
#line 2780 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_9, (MR_Integer) 7)));

#line 2781 "typecheck.m"
                {
#line 2781 "typecheck.m"
                  hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_20, &check_hlds__typecheck__ClassTable_21);
                }
#line 2782 "typecheck.m"
                {
#line 2782 "typecheck.m"
                  check_hlds__typecheck__convert_field_access_cons_type_info_7_p_0(check_hlds__typecheck__ClassTable_21, check_hlds__typecheck__AccessType_13, check_hlds__typecheck__FieldName_14, check_hlds__typecheck__FieldDefn_15, check_hlds__typecheck__FunctorConsTypeInfo_19, check_hlds__typecheck__OrigExistTVars_17, check_hlds__typecheck__ConsTypeInfo_16);
                }
#line 2779 "typecheck.m"
              }
#line 2785 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2774 "typecheck.m"
          }
#line 2797 "typecheck.m"
      }
#line 2774 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2774 "typecheck.m"
  }
#line 2768 "typecheck.m"
}

#line 2764 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1(
#line 2764 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2764 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2764 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2764 "typecheck.m"
{
#line 2764 "typecheck.m"
  {
#line 2764 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2764 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2764 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_ConsTypeInfo_16;

#line 2764 "typecheck.m"
    {
#line 2764 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__make_field_access_function_cons_type_info_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 5))), ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 8))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv1_ConsTypeInfo_16);
    }
#line 2764 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2764 "typecheck.m"
      {
#line 2764 "typecheck.m"
        *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv1_ConsTypeInfo_16));
#line 2764 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2764 "typecheck.m"
      }
#line 2764 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2764 "typecheck.m"
  }
#line 2764 "typecheck.m"
}

#line 2748 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_field_access_function_type_5_p_0(
#line 2748 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2748 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_7,
#line 2748 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2748 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_9,
#line 2748 "typecheck.m"
  MR_Word * check_hlds__typecheck__MaybeConsTypeInfos_10)
#line 2748 "typecheck.m"
{
#line 2752 "typecheck.m"
  {
#line 2752 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2752 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
#line 2752 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_27_27;
#line 2752 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_30_30;
#line 2752 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_31_31;
#line 2752 "typecheck.m"
    MR_Word check_hlds__typecheck__Name_11;
#line 2752 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_13;
#line 2752 "typecheck.m"
    MR_Word check_hlds__typecheck__AccessType_14;
#line 2752 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldName_15;
#line 2752 "typecheck.m"
    MR_Word check_hlds__typecheck__CtorFieldTable_16;
#line 2752 "typecheck.m"
    MR_Word check_hlds__typecheck__FieldDefns_17;
#line 2752 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18;
#line 2752 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_32_32;
#line 2752 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_33_33;
#line 2755 "typecheck.m"
    MR_Word check_hlds__typecheck__V_12_12;
#line 2756 "typecheck.m"
    MR_Word check_hlds__typecheck__V_19_19;
#line 2756 "typecheck.m"
    MR_Word check_hlds__typecheck__V_20_20;
#line 2756 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_21_21;
#line 2756 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 2756 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;
#line 2756 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 2756 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_25_25;
#line 2761 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_FieldDefns_17;

#line 2755 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2755 "typecheck.m"
      {
#line 2755 "typecheck.m"
        check_hlds__typecheck__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 1)));
#line 2755 "typecheck.m"
        check_hlds__typecheck__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 2)));
#line 2755 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_8, (MR_Integer) 3)));
#line 2755 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_32_32);
#line 2752 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2752 "typecheck.m"
          {
#line 2756 "typecheck.m"
            check_hlds__typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 0)));
#line 2756 "typecheck.m"
            check_hlds__typecheck__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 1)));
#line 2756 "typecheck.m"
            check_hlds__typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 2)));
#line 2756 "typecheck.m"
            check_hlds__typecheck__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 3)));
#line 2756 "typecheck.m"
            check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 4)));
#line 2756 "typecheck.m"
            check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 5)));
#line 2756 "typecheck.m"
            check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 6)));
#line 2756 "typecheck.m"
            check_hlds__typecheck__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 7)));
#line 2757 "typecheck.m"
            {
#line 2757 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(check_hlds__typecheck__ModuleInfo_13, check_hlds__typecheck__Name_11, &check_hlds__typecheck__V_33_33, &check_hlds__typecheck__AccessType_14, &check_hlds__typecheck__FieldName_15);
            }
#line 2752 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2752 "typecheck.m"
              {
#line 2757 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__Arity_9 == check_hlds__typecheck__V_33_33);
#line 2752 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2752 "typecheck.m"
                  {
#line 2760 "typecheck.m"
                    {
#line 2760 "typecheck.m"
                      hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(check_hlds__typecheck__ModuleInfo_13, &check_hlds__typecheck__CtorFieldTable_16);
                    }
#line 7283 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 7285 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeInfo_27_27 = (MR_Word) &check_hlds__typecheck_scalar_common_1[4];
#line 2761 "typecheck.m"
                    {
#line 2761 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__map__search_3_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeInfo_27_27, check_hlds__typecheck__CtorFieldTable_16, ((MR_Box) (check_hlds__typecheck__FieldName_15)), &check_hlds__typecheck__conv0_FieldDefns_17);
                    }
#line 2761 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2761 "typecheck.m"
                      {
#line 2761 "typecheck.m"
                        check_hlds__typecheck__FieldDefns_17 = ((MR_Word) check_hlds__typecheck__conv0_FieldDefns_17);
#line 2761 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2761 "typecheck.m"
                      }
#line 2752 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2752 "typecheck.m"
                      {
#line 7306 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;
#line 7308 "check_hlds.typecheck.c"
                        check_hlds__typecheck__TypeCtorInfo_31_31 = (MR_Word) &check_hlds__typecheck__check_hlds__typecheck__type_ctor_info_maybe_cons_type_info_0;
#line 2764 "typecheck.m"
                        {
#line 2764 "typecheck.m"
                          check_hlds__typecheck__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2764 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_10[0]));
#line 2764 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 1) = ((MR_Box) (check_hlds__typecheck__builtin_field_access_function_type_5_p_0_1));
#line 2764 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 2764 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 3) = ((MR_Box) (check_hlds__typecheck__Info_6));
#line 2764 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 4) = ((MR_Box) (check_hlds__typecheck__GoalId_7));
#line 2764 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 5) = ((MR_Box) (check_hlds__typecheck__Name_11));
#line 2764 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 6) = ((MR_Box) (check_hlds__typecheck__Arity_9));
#line 2764 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 7) = ((MR_Box) (check_hlds__typecheck__AccessType_14));
#line 2764 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, 8) = ((MR_Box) (check_hlds__typecheck__FieldName_15));
#line 2764 "typecheck.m"
                        }
#line 2763 "typecheck.m"
                        {
#line 2763 "typecheck.m"
                          mercury__list__filter_map_3_p_0(check_hlds__typecheck__TypeCtorInfo_30_30, check_hlds__typecheck__TypeCtorInfo_31_31, check_hlds__typecheck__V_18_18, check_hlds__typecheck__FieldDefns_17, check_hlds__typecheck__MaybeConsTypeInfos_10);
                        }
#line 2763 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2752 "typecheck.m"
                      }
#line 2752 "typecheck.m"
                  }
#line 2752 "typecheck.m"
              }
#line 2752 "typecheck.m"
          }
#line 2755 "typecheck.m"
      }
#line 2752 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2752 "typecheck.m"
  }
#line 2748 "typecheck.m"
}

#line 2617 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__make_pred_cons_info_list_7_p_0(
#line 2617 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_1,
#line 2617 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 2617 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTable_3,
#line 2617 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_4,
#line 2617 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_5,
#line 2617 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6,
#line 2617 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7)
#line 2617 "typecheck.m"
{
#line 2621 "typecheck.m"
  while (MR_TRUE)
#line 2621 "typecheck.m"
    {
#line 2621 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2621 "typecheck.m"
      {
#line 2621 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2621 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2621 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_7 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
#line 2621 "typecheck.m"
        else
#line 2623 "typecheck.m"
          {
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__ModuleInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 1)));
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassTable_35;
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_36;
#line 2623 "typecheck.m"
            MR_Integer check_hlds__typecheck__PredArity_37;
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__IsPredOrFunc_38;
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_39;
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_40;
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_41;
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__CompleteArgTypes_42;
#line 2623 "typecheck.m"
            MR_Word check_hlds__typecheck__Purity_43;
#line 2634 "typecheck.m"
            MR_Word check_hlds__typecheck__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 0)));
#line 2634 "typecheck.m"
            MR_Word check_hlds__typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 2)));
#line 2634 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 3)));
#line 2634 "typecheck.m"
            MR_Word check_hlds__typecheck__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 4)));
#line 2634 "typecheck.m"
            MR_Word check_hlds__typecheck__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 5)));
#line 2634 "typecheck.m"
            MR_Word check_hlds__typecheck__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 6)));
#line 2634 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_1, (MR_Integer) 7)));
#line 2636 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_36;

#line 2635 "typecheck.m"
            {
#line 2635 "typecheck.m"
              hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_34, &check_hlds__typecheck__ClassTable_35);
            }
#line 2636 "typecheck.m"
            {
#line 2636 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__PredTable_3, ((MR_Box) (check_hlds__typecheck__PredId_16)), &check_hlds__typecheck__conv0_PredInfo_36);
            }
#line 2636 "typecheck.m"
            check_hlds__typecheck__PredInfo_36 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_36);
#line 2637 "typecheck.m"
            {
#line 2637 "typecheck.m"
              check_hlds__typecheck__PredArity_37 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__PredInfo_36);
            }
#line 2638 "typecheck.m"
            {
#line 2638 "typecheck.m"
              check_hlds__typecheck__IsPredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(check_hlds__typecheck__PredInfo_36);
            }
#line 2639 "typecheck.m"
            {
#line 2639 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredClassContext_39);
            }
#line 2640 "typecheck.m"
            {
#line 2640 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__PredTypeVarSet_40, &check_hlds__typecheck__PredExistQVars_41, &check_hlds__typecheck__CompleteArgTypes_42);
            }
#line 2642 "typecheck.m"
            {
#line 2642 "typecheck.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(check_hlds__typecheck__PredInfo_36, &check_hlds__typecheck__Purity_43);
            }
#line 2644 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 0);
#line 2644 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2644 "typecheck.m"
              {
#line 2645 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredArity_37 >= check_hlds__typecheck__Arity_4);
#line 2644 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2648 "typecheck.m"
                  check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2644 "typecheck.m"
              }
#line 2664 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2661 "typecheck.m"
              {
#line 2661 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_44;
#line 2661 "typecheck.m"
                MR_Word check_hlds__typecheck__PredTypeParams_45;

#line 2651 "typecheck.m"
                {
#line 2651 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__list__split_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Arity_4, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__ArgTypes_44, &check_hlds__typecheck__PredTypeParams_45);
                }
#line 2661 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2655 "typecheck.m"
                  {
#line 2655 "typecheck.m"
                    MR_Word check_hlds__typecheck__PredType_46;
#line 2655 "typecheck.m"
                    MR_Word check_hlds__typecheck__PredConstraints_47;
#line 2655 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsInfo_48;
#line 2655 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_58_58;

#line 2654 "typecheck.m"
                    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2654 "typecheck.m"
                    {
#line 2654 "typecheck.m"
                      parse_tree__prog_type__construct_higher_order_pred_type_4_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__PredTypeParams_45, &check_hlds__typecheck__PredType_46);
                    }
#line 2656 "typecheck.m"
                    {
#line 2656 "typecheck.m"
                      hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_5, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_47);
                    }
#line 2659 "typecheck.m"
                    {
#line 2659 "typecheck.m"
                      check_hlds__typecheck__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2659 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2659 "typecheck.m"
                      MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_58_58, 1) = ((MR_Box) (check_hlds__typecheck__PredId_16));
#line 2659 "typecheck.m"
                    }
#line 2658 "typecheck.m"
                    {
#line 2658 "typecheck.m"
                      check_hlds__typecheck__ConsInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2658 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
#line 2658 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
#line 2658 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 2) = ((MR_Box) (check_hlds__typecheck__PredType_46));
#line 2658 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 3) = ((MR_Box) (check_hlds__typecheck__ArgTypes_44));
#line 2658 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_47));
#line 2658 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_48, 5) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 2658 "typecheck.m"
                    }
#line 2660 "typecheck.m"
                    {
#line 2660 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2660 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_48));
#line 2660 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
#line 2660 "typecheck.m"
                    }
#line 2655 "typecheck.m"
                  }
#line 2661 "typecheck.m"
                else
#line 2662 "typecheck.m"
                  {
#line 2662 "typecheck.m"
                    {
#line 2662 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.make_pred_cons_info\'/7", (MR_String) "split_list failed");
#line 2662 "typecheck.m"
                      return;
                    }
#line 2662 "typecheck.m"
                  }
#line 2661 "typecheck.m"
              }
#line 2664 "typecheck.m"
            else
#line 2698 "typecheck.m"
              {
#line 2665 "typecheck.m"
                MR_Integer check_hlds__typecheck__PredAsFuncArity_49;
#line 2665 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_63_63;

#line 2665 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__IsPredOrFunc_38 == (MR_Integer) 1);
#line 2665 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2665 "typecheck.m"
                  {
#line 2666 "typecheck.m"
                    check_hlds__typecheck__V_63_63 = (MR_Integer) 1;
#line 2666 "typecheck.m"
                    check_hlds__typecheck__PredAsFuncArity_49 = (check_hlds__typecheck__PredArity_37 - check_hlds__typecheck__V_63_63);
#line 2667 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 >= check_hlds__typecheck__Arity_4);
#line 2665 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2665 "typecheck.m"
                      {
#line 2671 "typecheck.m"
                        check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredExistQVars_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2672 "typecheck.m"
                        if (!(check_hlds__typecheck__succeeded))
#line 2672 "typecheck.m"
                          check_hlds__typecheck__succeeded = (check_hlds__typecheck__PredAsFuncArity_49 == check_hlds__typecheck__Arity_4);
#line 2665 "typecheck.m"
                      }
#line 2665 "typecheck.m"
                  }
#line 2698 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2695 "typecheck.m"
                  {
#line 2695 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncArgTypes_50;
#line 2695 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncArgTypeParams_52;
#line 2695 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncReturnTypeParam_53;
#line 2677 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeCtorInfo_68_86 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 2677 "typecheck.m"
                    MR_Word check_hlds__typecheck__FuncTypeParams_51;
#line 2678 "typecheck.m"
                    MR_Box check_hlds__typecheck__conv1_FuncReturnTypeParam_53;

#line 2676 "typecheck.m"
                    {
#line 2676 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__list__split_list_4_p_0(check_hlds__typecheck__TypeCtorInfo_68_86, check_hlds__typecheck__Arity_4, check_hlds__typecheck__CompleteArgTypes_42, &check_hlds__typecheck__FuncArgTypes_50, &check_hlds__typecheck__FuncTypeParams_51);
                    }
#line 2677 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2677 "typecheck.m"
                      {
#line 2678 "typecheck.m"
                        {
#line 2678 "typecheck.m"
                          parse_tree__prog_util__pred_args_to_func_args_3_p_0(check_hlds__typecheck__TypeCtorInfo_68_86, check_hlds__typecheck__FuncTypeParams_51, &check_hlds__typecheck__FuncArgTypeParams_52, &check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
                        }
#line 2678 "typecheck.m"
                        check_hlds__typecheck__FuncReturnTypeParam_53 = ((MR_Word) check_hlds__typecheck__conv1_FuncReturnTypeParam_53);
#line 2678 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2677 "typecheck.m"
                      }
#line 2695 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2688 "typecheck.m"
                      {
#line 2688 "typecheck.m"
                        MR_Word check_hlds__typecheck__FuncType_54;
#line 2688 "typecheck.m"
                        MR_Word check_hlds__typecheck__V_65_65;
#line 2688 "typecheck.m"
                        MR_Word check_hlds__typecheck__PredConstraints_70;
#line 2688 "typecheck.m"
                        MR_Word check_hlds__typecheck__ConsInfo_71;

#line 2684 "typecheck.m"
                        if ((check_hlds__typecheck__FuncArgTypeParams_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2683 "typecheck.m"
                          check_hlds__typecheck__FuncType_54 = check_hlds__typecheck__FuncReturnTypeParam_53;
#line 2684 "typecheck.m"
                        else
#line 2685 "typecheck.m"
                          {
#line 2686 "typecheck.m"
                            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 2686 "typecheck.m"
                            {
#line 2686 "typecheck.m"
                              parse_tree__prog_type__construct_higher_order_func_type_5_p_0(check_hlds__typecheck__Purity_43, check_hlds__typecheck__FuncArgTypeParams_52, check_hlds__typecheck__FuncReturnTypeParam_53, &check_hlds__typecheck__FuncType_54);
                            }
#line 2685 "typecheck.m"
                          }
#line 2689 "typecheck.m"
                        {
#line 2689 "typecheck.m"
                          hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_35, check_hlds__typecheck__PredTypeVarSet_40, check_hlds__typecheck__GoalId_5, check_hlds__typecheck__PredClassContext_39, &check_hlds__typecheck__PredConstraints_70);
                        }
#line 2693 "typecheck.m"
                        {
#line 2693 "typecheck.m"
                          check_hlds__typecheck__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2693 "typecheck.m"
                          MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2693 "typecheck.m"
                          MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_65_65, 1) = ((MR_Box) (check_hlds__typecheck__PredId_16));
#line 2693 "typecheck.m"
                        }
#line 2691 "typecheck.m"
                        {
#line 2691 "typecheck.m"
                          check_hlds__typecheck__ConsInfo_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2691 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 0) = ((MR_Box) (check_hlds__typecheck__PredTypeVarSet_40));
#line 2691 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 1) = ((MR_Box) (check_hlds__typecheck__PredExistQVars_41));
#line 2691 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 2) = ((MR_Box) (check_hlds__typecheck__FuncType_54));
#line 2691 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 3) = ((MR_Box) (check_hlds__typecheck__FuncArgTypes_50));
#line 2691 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 4) = ((MR_Box) (check_hlds__typecheck__PredConstraints_70));
#line 2691 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsInfo_71, 5) = ((MR_Box) (check_hlds__typecheck__V_65_65));
#line 2691 "typecheck.m"
                        }
#line 2694 "typecheck.m"
                        {
#line 2694 "typecheck.m"
                          check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2694 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 0) = ((MR_Box) (check_hlds__typecheck__ConsInfo_71));
#line 2694 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6));
#line 2694 "typecheck.m"
                        }
#line 2688 "typecheck.m"
                      }
#line 2695 "typecheck.m"
                    else
#line 2696 "typecheck.m"
                      {
#line 2696 "typecheck.m"
                        {
#line 2696 "typecheck.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.make_pred_cons_info\'/7", (MR_String) "split_list failed");
#line 2696 "typecheck.m"
                          return;
                        }
#line 2696 "typecheck.m"
                      }
#line 2695 "typecheck.m"
                  }
#line 2698 "typecheck.m"
                else
#line 2696 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6;
#line 2698 "typecheck.m"
              }
#line 2626 "typecheck.m"
            /* direct tailcall eliminated */
#line 2626 "typecheck.m"
            {
#line 2626 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__2__tmp_copy_2 = check_hlds__typecheck__PredIds_17;
#line 2626 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_24_24;

#line 2626 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0_6 = check_hlds__typecheck__STATE_VARIABLE_ConsTypeInfos_0__tmp_copy_6;
#line 2626 "typecheck.m"
              check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__HeadVar__2__tmp_copy_2;
#line 2626 "typecheck.m"
            }
#line 2626 "typecheck.m"
            continue;
#line 2623 "typecheck.m"
          }
#line 2621 "typecheck.m"
      }
#line 2621 "typecheck.m"
      break;
#line 2621 "typecheck.m"
    }
#line 2617 "typecheck.m"
}

#line 2596 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__builtin_pred_type_5_p_0(
#line 2596 "typecheck.m"
  MR_Word check_hlds__typecheck__Info_6,
#line 2596 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_7,
#line 2596 "typecheck.m"
  MR_Integer check_hlds__typecheck__Arity_8,
#line 2596 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 2596 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsTypeInfos_10)
#line 2596 "typecheck.m"
{
#line 2599 "typecheck.m"
  {
#line 2599 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded = ((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 2599 "typecheck.m"
    MR_Word check_hlds__typecheck__SymName_11;
#line 2599 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_14;
#line 2599 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_15;
#line 2599 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMarkers_16;
#line 2599 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFullyQualified_17;
#line 2599 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIds_18;
#line 2600 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_12_12;
#line 2600 "typecheck.m"
    MR_Word check_hlds__typecheck__V_13_13;
#line 2601 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;
#line 2601 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 2601 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_25_25;
#line 2601 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 2601 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 2601 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 2601 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_29_29;

#line 2600 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2600 "typecheck.m"
      {
#line 2600 "typecheck.m"
        check_hlds__typecheck__SymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 1)));
#line 2600 "typecheck.m"
        check_hlds__typecheck__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 2)));
#line 2600 "typecheck.m"
        check_hlds__typecheck__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_7, (MR_Integer) 3)));
#line 2601 "typecheck.m"
        check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 0)));
#line 2601 "typecheck.m"
        check_hlds__typecheck__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 1)));
#line 2601 "typecheck.m"
        check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 2)));
#line 2601 "typecheck.m"
        check_hlds__typecheck__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 3)));
#line 2601 "typecheck.m"
        check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 4)));
#line 2601 "typecheck.m"
        check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 5)));
#line 2601 "typecheck.m"
        check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 6)));
#line 2601 "typecheck.m"
        check_hlds__typecheck__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Info_6, (MR_Integer) 7)));
#line 2602 "typecheck.m"
        {
#line 2602 "typecheck.m"
          hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_14, &check_hlds__typecheck__PredicateTable_15);
        }
#line 2603 "typecheck.m"
        {
#line 2603 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_p_0(check_hlds__typecheck__Info_6, &check_hlds__typecheck__PredMarkers_16);
        }
#line 2604 "typecheck.m"
        {
#line 2604 "typecheck.m"
          check_hlds__typecheck__IsFullyQualified_17 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__typecheck__PredMarkers_16);
        }
#line 2605 "typecheck.m"
        {
#line 2605 "typecheck.m"
          hlds__pred_table__predicate_table_lookup_sym_4_p_0(check_hlds__typecheck__PredicateTable_15, check_hlds__typecheck__IsFullyQualified_17, check_hlds__typecheck__SymName_11, &check_hlds__typecheck__PredIds_18);
        }
#line 2612 "typecheck.m"
        if ((check_hlds__typecheck__PredIds_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2614 "typecheck.m"
          *check_hlds__typecheck__ConsTypeInfos_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2612 "typecheck.m"
        else
#line 2608 "typecheck.m"
          {
#line 2608 "typecheck.m"
            MR_Word check_hlds__typecheck__Preds_21;

#line 2609 "typecheck.m"
            {
#line 2609 "typecheck.m"
              hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_15, &check_hlds__typecheck__Preds_21);
            }
#line 2610 "typecheck.m"
            {
#line 2610 "typecheck.m"
              check_hlds__typecheck__make_pred_cons_info_list_7_p_0(check_hlds__typecheck__Info_6, check_hlds__typecheck__PredIds_18, check_hlds__typecheck__Preds_21, check_hlds__typecheck__Arity_8, check_hlds__typecheck__GoalId_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__ConsTypeInfos_10);
            }
#line 2608 "typecheck.m"
          }
#line 2612 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2600 "typecheck.m"
      }
#line 2599 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2599 "typecheck.m"
  }
#line 2596 "typecheck.m"
}

#line 2512 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(
#line 2512 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2512 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 2512 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3,
#line 2512 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4)
#line 2512 "typecheck.m"
{
#line 2515 "typecheck.m"
  {
#line 2515 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 2515 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2515 "typecheck.m"
      {
#line 2515 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2515 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2515 "typecheck.m"
      }
#line 2515 "typecheck.m"
    else
#line 2516 "typecheck.m"
      {
#line 2516 "typecheck.m"
        MR_Word check_hlds__typecheck__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2516 "typecheck.m"
        MR_Word check_hlds__typecheck__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2516 "typecheck.m"
        MR_Word check_hlds__typecheck__Type_10;
#line 2516 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_11;
#line 2516 "typecheck.m"
        MR_Word check_hlds__typecheck__VarTypes0_13;
#line 2516 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23;
#line 2522 "typecheck.m"
        MR_Word check_hlds__typecheck__VarType_14;

#line 2518 "typecheck.m"
        {
#line 2518 "typecheck.m"
          check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__VarTypes0_13);
        }
#line 2519 "typecheck.m"
        {
#line 2519 "typecheck.m"
          check_hlds__typecheck__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_13, check_hlds__typecheck__Var_8, &check_hlds__typecheck__VarType_14);
        }
#line 2522 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2521 "typecheck.m"
          {
#line 2521 "typecheck.m"
            check_hlds__typecheck__Type_10 = check_hlds__typecheck__VarType_14;
#line 2521 "typecheck.m"
            check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23 = check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3;
#line 2521 "typecheck.m"
          }
#line 2522 "typecheck.m"
        else
#line 2525 "typecheck.m"
          {
#line 2525 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet0_15;
#line 2525 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVar_16;
#line 2525 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet_17;
#line 2525 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes1_18;
#line 2525 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21;

#line 2525 "typecheck.m"
            {
#line 2525 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__TypeVarSet0_15);
            }
#line 2526 "typecheck.m"
            {
#line 2526 "typecheck.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_16, check_hlds__typecheck__TypeVarSet0_15, &check_hlds__typecheck__TypeVarSet_17);
            }
#line 2527 "typecheck.m"
            {
#line 2527 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_17, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_0_3, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21);
            }
#line 2528 "typecheck.m"
            {
#line 2528 "typecheck.m"
              check_hlds__typecheck__Type_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2528 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_16));
#line 2528 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2528 "typecheck.m"
            }
#line 2529 "typecheck.m"
            {
#line 2529 "typecheck.m"
              parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__Var_8, check_hlds__typecheck__Type_10, check_hlds__typecheck__VarTypes0_13, &check_hlds__typecheck__VarTypes1_18);
            }
#line 2530 "typecheck.m"
            {
#line 2530 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes1_18, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_21_21, &check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23);
            }
#line 2525 "typecheck.m"
          }
#line 2533 "typecheck.m"
        {
#line 2533 "typecheck.m"
          check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(check_hlds__typecheck__Vars_9, &check_hlds__typecheck__Types_11, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_23_23, check_hlds__typecheck__STATE_VARIABLE_TypeAssign_4);
        }
#line 2516 "typecheck.m"
        {
#line 2516 "typecheck.m"
          MR_Word base;
#line 2516 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2516 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 2516 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Type_10));
#line 2516 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Types_11));
#line 2516 "typecheck.m"
        }
#line 2516 "typecheck.m"
      }
#line 2515 "typecheck.m"
  }
#line 2512 "typecheck.m"
}

#line 2497 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_2,
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__PredOrFunc_3,
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgVars_6,
#line 2497 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7,
#line 2497 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8)
#line 2497 "typecheck.m"
{
#line 2501 "typecheck.m"
  while (MR_TRUE)
#line 2501 "typecheck.m"
    {
#line 2501 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2501 "typecheck.m"
      {
#line 2501 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2501 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2501 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_8 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 2501 "typecheck.m"
        else
#line 2503 "typecheck.m"
          {
#line 2503 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2503 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssignSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2503 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgVarTypes_25;
#line 2503 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_26;
#line 2503 "typecheck.m"
            MR_Word check_hlds__typecheck__LambdaType_27;
#line 2503 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;
#line 2503 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_38;
#line 2503 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeOldVarType_39;
#line 2503 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_40;

#line 2504 "typecheck.m"
            {
#line 2504 "typecheck.m"
              check_hlds__typecheck__type_assign_get_types_of_vars_4_p_0(check_hlds__typecheck__ArgVars_6, &check_hlds__typecheck__ArgVarTypes_25, check_hlds__typecheck__TypeAssign0_17, &check_hlds__typecheck__TypeAssign1_26);
            }
#line 2506 "typecheck.m"
            {
#line 2506 "typecheck.m"
              parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_2, check_hlds__typecheck__PredOrFunc_3, check_hlds__typecheck__ArgVarTypes_25, &check_hlds__typecheck__LambdaType_27);
            }
#line 1949 "typecheck.m"
            {
#line 1949 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__VarTypes0_38);
            }
#line 1950 "typecheck.m"
            {
#line 1950 "typecheck.m"
              parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_5, check_hlds__typecheck__LambdaType_27, &check_hlds__typecheck__MaybeOldVarType_39, check_hlds__typecheck__VarTypes0_38, &check_hlds__typecheck__VarTypes_40);
            }
#line 1958 "typecheck.m"
            if ((check_hlds__typecheck__MaybeOldVarType_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1959 "typecheck.m"
              {
#line 1959 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_43;

#line 1960 "typecheck.m"
                {
#line 1960 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_40, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign_43);
                }
#line 1961 "typecheck.m"
                {
#line 1961 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_43));
#line 1961 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
#line 1961 "typecheck.m"
                }
#line 1959 "typecheck.m"
              }
#line 1958 "typecheck.m"
            else
#line 1952 "typecheck.m"
              {
#line 1952 "typecheck.m"
                MR_Word check_hlds__typecheck__OldVarType_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_39, (MR_Integer) 0)));
#line 1955 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_42;
#line 2543 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_51;
#line 2543 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_52;
#line 2543 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_53;

#line 2544 "typecheck.m"
                {
#line 2544 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__HeadTypeParams_51);
                }
#line 2545 "typecheck.m"
                {
#line 2545 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeBindings0_52);
                }
#line 2546 "typecheck.m"
                {
#line 2546 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_41, check_hlds__typecheck__LambdaType_27, check_hlds__typecheck__HeadTypeParams_51, check_hlds__typecheck__TypeBindings0_52, &check_hlds__typecheck__TypeBindings_53);
                }
#line 2543 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2543 "typecheck.m"
                  {
#line 2547 "typecheck.m"
                    {
#line 2547 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_53, check_hlds__typecheck__TypeAssign1_26, &check_hlds__typecheck__TypeAssign1_42);
                    }
#line 2547 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2543 "typecheck.m"
                  }
#line 1955 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1954 "typecheck.m"
                  {
#line 1954 "typecheck.m"
                    check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_42));
#line 1954 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7));
#line 1954 "typecheck.m"
                  }
#line 1955 "typecheck.m"
                else
#line 1956 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7;
#line 1952 "typecheck.m"
              }
#line 2509 "typecheck.m"
            /* direct tailcall eliminated */
#line 2509 "typecheck.m"
            {
#line 2509 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssignSet0_18;
#line 2509 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_30_30;

#line 2509 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_7 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_7;
#line 2509 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2509 "typecheck.m"
            }
#line 2509 "typecheck.m"
            continue;
#line 2503 "typecheck.m"
          }
#line 2501 "typecheck.m"
      }
#line 2501 "typecheck.m"
      break;
#line 2501 "typecheck.m"
    }
#line 2497 "typecheck.m"
}

#line 2460 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_3_p_0(
#line 2460 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2460 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_4,
#line 2460 "typecheck.m"
  MR_Word check_hlds__typecheck__Var0_5,
#line 2460 "typecheck.m"
  MR_Word * check_hlds__typecheck__Var_6)
#line 2460 "typecheck.m"
{
#line 2466 "typecheck.m"
  {
#line 2466 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2466 "typecheck.m"
    MR_Word check_hlds__typecheck__Var1_7;
#line 2464 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_10_10;
#line 2464 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_Var1_7;

#line 8269 "check_hlds.typecheck.c"
    {
#line 8271 "check_hlds.typecheck.c"
      check_hlds__typecheck__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8273 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 8275 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_10_10, 1) = ((MR_Box) (check_hlds__typecheck__TypeInfo_for_T_8));
#line 8277 "check_hlds.typecheck.c"
    }
#line 2464 "typecheck.m"
    {
#line 2464 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(check_hlds__typecheck__TypeInfo_for_T_8, check_hlds__typecheck__TypeInfo_10_10, check_hlds__typecheck__TypeInfo_10_10, (MR_Word) check_hlds__typecheck__RenameSubst_4, check_hlds__typecheck__Var0_5, &check_hlds__typecheck__conv0_Var1_7);
    }
#line 2464 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2464 "typecheck.m"
      {
#line 2464 "typecheck.m"
        check_hlds__typecheck__Var1_7 = ((MR_Word) check_hlds__typecheck__conv0_Var1_7);
#line 2464 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2464 "typecheck.m"
      }
#line 2466 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2465 "typecheck.m"
      *check_hlds__typecheck__Var_6 = check_hlds__typecheck__Var1_7;
#line 2466 "typecheck.m"
    else
#line 2467 "typecheck.m"
      *check_hlds__typecheck__Var_6 = check_hlds__typecheck__Var0_5;
#line 2466 "typecheck.m"
  }
#line 2460 "typecheck.m"
}

#line 2458 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0_1(
#line 2458 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2458 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2458 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_2)
#line 2458 "typecheck.m"
{
#line 2458 "typecheck.m"
  {
#line 2458 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2458 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_Var_6;

#line 2458 "typecheck.m"
    {
#line 2458 "typecheck.m"
      check_hlds__typecheck__apply_var_renaming_to_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), &check_hlds__typecheck__conv0_Var_6);
    }
#line 2458 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_Var_6));
#line 2458 "typecheck.m"
  }
#line 2458 "typecheck.m"
}

#line 2454 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0(
#line 2454 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeInfo_for_T_8,
#line 2454 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars0_4,
#line 2454 "typecheck.m"
  MR_Word check_hlds__typecheck__RenameSubst_5,
#line 2454 "typecheck.m"
  MR_Word * check_hlds__typecheck__Vars_6)
#line 2454 "typecheck.m"
{
#line 2457 "typecheck.m"
  {
#line 2457 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2457 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeInfo_12_12;
#line 2457 "typecheck.m"
    MR_Word check_hlds__typecheck__V_7_7;

#line 2458 "typecheck.m"
    {
#line 2458 "typecheck.m"
      check_hlds__typecheck__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2458 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_9[0]));
#line 2458 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck__apply_var_renaming_to_var_list_3_p_0_1));
#line 2458 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2458 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 3) = ((MR_Box) (check_hlds__typecheck__TypeInfo_for_T_8));
#line 2458 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_7_7, 4) = ((MR_Box) (check_hlds__typecheck__RenameSubst_5));
#line 2458 "typecheck.m"
    }
#line 8375 "check_hlds.typecheck.c"
    {
#line 8377 "check_hlds.typecheck.c"
      check_hlds__typecheck__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8379 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__term__term__type_ctor_info_var_1));
#line 8381 "check_hlds.typecheck.c"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeInfo_12_12, 1) = ((MR_Box) (check_hlds__typecheck__TypeInfo_for_T_8));
#line 8383 "check_hlds.typecheck.c"
    }
#line 2458 "typecheck.m"
    {
#line 2458 "typecheck.m"
      mercury__list__map_3_p_0(check_hlds__typecheck__TypeInfo_12_12, check_hlds__typecheck__TypeInfo_12_12, (MR_Word) check_hlds__typecheck__V_7_7, (MR_Word) check_hlds__typecheck__Vars0_4, check_hlds__typecheck__Vars_6);
#line 2458 "typecheck.m"
      return;
    }
#line 2457 "typecheck.m"
  }
#line 2454 "typecheck.m"
}

#line 2364 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(
#line 2364 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsType_6,
#line 2364 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_7,
#line 2364 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeAssign0_8,
#line 2364 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15,
#line 2364 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16)
#line 2364 "typecheck.m"
{
#line 2369 "typecheck.m"
  {
#line 2369 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2369 "typecheck.m"
    MR_Word check_hlds__typecheck__VarTypes0_10;
#line 2369 "typecheck.m"
    MR_Word check_hlds__typecheck__MaybeTypeY_11;
#line 2369 "typecheck.m"
    MR_Word check_hlds__typecheck__VarTypes_12;

#line 2371 "typecheck.m"
    {
#line 2371 "typecheck.m"
      check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__VarTypes0_10);
    }
#line 2372 "typecheck.m"
    {
#line 2372 "typecheck.m"
      parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_7, check_hlds__typecheck__ConsType_6, &check_hlds__typecheck__MaybeTypeY_11, check_hlds__typecheck__VarTypes0_10, &check_hlds__typecheck__VarTypes_12);
    }
#line 2382 "typecheck.m"
    if ((check_hlds__typecheck__MaybeTypeY_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2383 "typecheck.m"
      {
#line 2383 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_19;

#line 2386 "typecheck.m"
        {
#line 2386 "typecheck.m"
          check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_12, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_19);
        }
#line 2387 "typecheck.m"
        {
#line 2387 "typecheck.m"
          MR_Word base;
#line 2387 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2387 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
#line 2387 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_19));
#line 2387 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
#line 2387 "typecheck.m"
        }
#line 2383 "typecheck.m"
      }
#line 2382 "typecheck.m"
    else
#line 2374 "typecheck.m"
      {
#line 2374 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeY_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_11, (MR_Integer) 0)));
#line 2379 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_14;
#line 2543 "typecheck.m"
        MR_Word check_hlds__typecheck__HeadTypeParams_24;
#line 2543 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeBindings0_25;
#line 2543 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeBindings_26;

#line 2544 "typecheck.m"
        {
#line 2544 "typecheck.m"
          check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__HeadTypeParams_24);
        }
#line 2545 "typecheck.m"
        {
#line 2545 "typecheck.m"
          check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeBindings0_25);
        }
#line 2546 "typecheck.m"
        {
#line 2546 "typecheck.m"
          check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__ConsType_6, check_hlds__typecheck__TypeY_13, check_hlds__typecheck__HeadTypeParams_24, check_hlds__typecheck__TypeBindings0_25, &check_hlds__typecheck__TypeBindings_26);
        }
#line 2543 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2543 "typecheck.m"
          {
#line 2547 "typecheck.m"
            {
#line 2547 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_26, check_hlds__typecheck__TypeAssign0_8, &check_hlds__typecheck__TypeAssign_14);
            }
#line 2547 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2543 "typecheck.m"
          }
#line 2379 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 2378 "typecheck.m"
          {
#line 2378 "typecheck.m"
            MR_Word base;
#line 2378 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2378 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = base;
#line 2378 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_14));
#line 2378 "typecheck.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15));
#line 2378 "typecheck.m"
          }
#line 2379 "typecheck.m"
        else
#line 2378 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_16 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_15;
#line 2374 "typecheck.m"
      }
#line 2369 "typecheck.m"
  }
#line 2364 "typecheck.m"
}

#line 2266 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(
#line 2266 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2266 "typecheck.m"
  MR_Word check_hlds__typecheck__X_2,
#line 2266 "typecheck.m"
  MR_Word check_hlds__typecheck__Y_3,
#line 2266 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 2266 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 2266 "typecheck.m"
{
#line 2270 "typecheck.m"
  while (MR_TRUE)
#line 2270 "typecheck.m"
    {
#line 2270 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2270 "typecheck.m"
      {
#line 2270 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2270 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2270 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2270 "typecheck.m"
        else
#line 2272 "typecheck.m"
          {
#line 2272 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2272 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2272 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
#line 2272 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_26;
#line 2306 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeX_27;

#line 2290 "typecheck.m"
            {
#line 2290 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__VarTypes0_26);
            }
#line 2291 "typecheck.m"
            {
#line 2291 "typecheck.m"
              check_hlds__typecheck__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__X_2, &check_hlds__typecheck__TypeX_27);
            }
#line 2306 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 2292 "typecheck.m"
              {
#line 2292 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeTypeY_28;
#line 2292 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_29;

#line 2292 "typecheck.m"
                {
#line 2292 "typecheck.m"
                  parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__TypeX_27, &check_hlds__typecheck__MaybeTypeY_28, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_29);
                }
#line 2301 "typecheck.m"
                if ((check_hlds__typecheck__MaybeTypeY_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2302 "typecheck.m"
                  {
#line 2302 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_32;

#line 2303 "typecheck.m"
                    {
#line 2303 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_29, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_32);
                    }
#line 2304 "typecheck.m"
                    {
#line 2304 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2304 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_32));
#line 2304 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2304 "typecheck.m"
                    }
#line 2302 "typecheck.m"
                  }
#line 2301 "typecheck.m"
                else
#line 2294 "typecheck.m"
                  {
#line 2294 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeY_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_28, (MR_Integer) 0)));
#line 2298 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign3_31;
#line 2543 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_58;
#line 2543 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_59;
#line 2543 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_60;

#line 2544 "typecheck.m"
                    {
#line 2544 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__HeadTypeParams_58);
                    }
#line 2545 "typecheck.m"
                    {
#line 2545 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeBindings0_59);
                    }
#line 2546 "typecheck.m"
                    {
#line 2546 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__TypeX_27, check_hlds__typecheck__TypeY_30, check_hlds__typecheck__HeadTypeParams_58, check_hlds__typecheck__TypeBindings0_59, &check_hlds__typecheck__TypeBindings_60);
                    }
#line 2543 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2543 "typecheck.m"
                      {
#line 2547 "typecheck.m"
                        {
#line 2547 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_60, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign3_31);
                        }
#line 2547 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2543 "typecheck.m"
                      }
#line 2298 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2297 "typecheck.m"
                      {
#line 2297 "typecheck.m"
                        check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2297 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign3_31));
#line 2297 "typecheck.m"
                        MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2297 "typecheck.m"
                      }
#line 2298 "typecheck.m"
                    else
#line 2299 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 2294 "typecheck.m"
                  }
#line 2292 "typecheck.m"
              }
#line 2306 "typecheck.m"
            else
#line 2312 "typecheck.m"
              {
#line 2312 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeY_50;

#line 2307 "typecheck.m"
                {
#line 2307 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_data__search_var_type_3_p_0(check_hlds__typecheck__VarTypes0_26, check_hlds__typecheck__Y_3, &check_hlds__typecheck__TypeY_50);
                }
#line 2312 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2309 "typecheck.m"
                  {
#line 2309 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_45;
#line 2309 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_46;

#line 2309 "typecheck.m"
                    {
#line 2309 "typecheck.m"
                      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__TypeY_50, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_45);
                    }
#line 2310 "typecheck.m"
                    {
#line 2310 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_45, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_46);
                    }
#line 2311 "typecheck.m"
                    {
#line 2311 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2311 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_46));
#line 2311 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2311 "typecheck.m"
                    }
#line 2309 "typecheck.m"
                  }
#line 2312 "typecheck.m"
                else
#line 2315 "typecheck.m"
                  {
#line 2315 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVarSet0_33;
#line 2315 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVar_34;
#line 2315 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeVarSet_35;
#line 2315 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_36;
#line 2315 "typecheck.m"
                    MR_Word check_hlds__typecheck__Type_37;
#line 2315 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes1_38;
#line 2315 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes_47;
#line 2315 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_48;

#line 2315 "typecheck.m"
                    {
#line 2315 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeVarSet0_33);
                    }
#line 2316 "typecheck.m"
                    {
#line 2316 "typecheck.m"
                      mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__TypeVar_34, check_hlds__typecheck__TypeVarSet0_33, &check_hlds__typecheck__TypeVarSet_35);
                    }
#line 2317 "typecheck.m"
                    {
#line 2317 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_35, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign1_36);
                    }
#line 2318 "typecheck.m"
                    {
#line 2318 "typecheck.m"
                      check_hlds__typecheck__Type_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2318 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_34));
#line 2318 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2318 "typecheck.m"
                    }
#line 2319 "typecheck.m"
                    {
#line 2319 "typecheck.m"
                      parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__X_2, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes1_38);
                    }
#line 2320 "typecheck.m"
                    {
#line 2320 "typecheck.m"
                      check_hlds__typecheck__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], ((MR_Box) (check_hlds__typecheck__X_2)), ((MR_Box) (check_hlds__typecheck__Y_3)));
                    }
#line 2320 "typecheck.m"
                    check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 2322 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2321 "typecheck.m"
                      {
#line 2321 "typecheck.m"
                        parse_tree__prog_data__add_var_type_4_p_0(check_hlds__typecheck__Y_3, check_hlds__typecheck__Type_37, check_hlds__typecheck__VarTypes1_38, &check_hlds__typecheck__VarTypes_47);
                      }
#line 2322 "typecheck.m"
                    else
#line 2323 "typecheck.m"
                      check_hlds__typecheck__VarTypes_47 = check_hlds__typecheck__VarTypes1_38;
#line 2325 "typecheck.m"
                    {
#line 2325 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_47, check_hlds__typecheck__TypeAssign1_36, &check_hlds__typecheck__TypeAssign_48);
                    }
#line 2326 "typecheck.m"
                    {
#line 2326 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2326 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_48));
#line 2326 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 2326 "typecheck.m"
                    }
#line 2315 "typecheck.m"
                  }
#line 2312 "typecheck.m"
              }
#line 2274 "typecheck.m"
            /* direct tailcall eliminated */
#line 2274 "typecheck.m"
            {
#line 2274 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_12;
#line 2274 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

#line 2274 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 2274 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2274 "typecheck.m"
            }
#line 2274 "typecheck.m"
            continue;
#line 2272 "typecheck.m"
          }
#line 2270 "typecheck.m"
      }
#line 2270 "typecheck.m"
      break;
#line 2270 "typecheck.m"
    }
#line 2266 "typecheck.m"
}

#line 2235 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_functor_type_4_p_0(
#line 2235 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 2235 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 2235 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3,
#line 2235 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4)
#line 2235 "typecheck.m"
{
#line 2238 "typecheck.m"
  while (MR_TRUE)
#line 2238 "typecheck.m"
    {
#line 2238 "typecheck.m"
      /* tailcall optimized into a loop */
#line 2238 "typecheck.m"
      {
#line 2238 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 2238 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2238 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_4 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
#line 2238 "typecheck.m"
        else
#line 2240 "typecheck.m"
          {
#line 2240 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_9;
#line 2240 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsType_10;
#line 2240 "typecheck.m"
            MR_Word check_hlds__typecheck__ConsTypeAssigns_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 2240 "typecheck.m"
            MR_Word check_hlds__typecheck__Type_14;
#line 2240 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes_15;
#line 2240 "typecheck.m"
            MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 2240 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19;
#line 2240 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_28;
#line 2240 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeTypeY_29;
#line 2240 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_30;

#line 2239 "typecheck.m"
            check_hlds__typecheck__TypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, (MR_Integer) 0)));
#line 2239 "typecheck.m"
            check_hlds__typecheck__ConsType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_18_18, (MR_Integer) 1)));
#line 2241 "typecheck.m"
            check_hlds__typecheck__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsType_10, (MR_Integer) 0)));
#line 2241 "typecheck.m"
            check_hlds__typecheck__ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsType_10, (MR_Integer) 1)));
#line 2339 "typecheck.m"
            {
#line 2339 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__VarTypes0_28);
            }
#line 2340 "typecheck.m"
            {
#line 2340 "typecheck.m"
              parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_14, &check_hlds__typecheck__MaybeTypeY_29, check_hlds__typecheck__VarTypes0_28, &check_hlds__typecheck__VarTypes_30);
            }
#line 2353 "typecheck.m"
            if ((check_hlds__typecheck__MaybeTypeY_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2354 "typecheck.m"
              {
#line 2354 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_37;
#line 2354 "typecheck.m"
                MR_Word check_hlds__typecheck__EmptyConstraints_38;
#line 2354 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssign_39;

#line 2357 "typecheck.m"
                {
#line 2357 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_30, check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeAssign_37);
                }
#line 2358 "typecheck.m"
                {
#line 2358 "typecheck.m"
                  hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_38);
                }
#line 2359 "typecheck.m"
                {
#line 2359 "typecheck.m"
                  check_hlds__typecheck__ArgsTypeAssign_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2359 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_37));
#line 2359 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_15));
#line 2359 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_39, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_38));
#line 2359 "typecheck.m"
                }
#line 2361 "typecheck.m"
                {
#line 2361 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2361 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_39));
#line 2361 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
#line 2361 "typecheck.m"
                }
#line 2354 "typecheck.m"
              }
#line 2353 "typecheck.m"
            else
#line 2342 "typecheck.m"
              {
#line 2342 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeY_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeTypeY_29, (MR_Integer) 0)));
#line 2350 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_32;
#line 2543 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_44;
#line 2543 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_45;
#line 2543 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_46;

#line 2544 "typecheck.m"
                {
#line 2544 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__HeadTypeParams_44);
                }
#line 2545 "typecheck.m"
                {
#line 2545 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeBindings0_45);
                }
#line 2546 "typecheck.m"
                {
#line 2546 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__Type_14, check_hlds__typecheck__TypeY_31, check_hlds__typecheck__HeadTypeParams_44, check_hlds__typecheck__TypeBindings0_45, &check_hlds__typecheck__TypeBindings_46);
                }
#line 2543 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2543 "typecheck.m"
                  {
#line 2547 "typecheck.m"
                    {
#line 2547 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_46, check_hlds__typecheck__TypeAssign_9, &check_hlds__typecheck__TypeAssign_32);
                    }
#line 2547 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2543 "typecheck.m"
                  }
#line 2350 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2346 "typecheck.m"
                  {
#line 2346 "typecheck.m"
                    MR_Word check_hlds__typecheck__EmptyConstraints_33;
#line 2346 "typecheck.m"
                    MR_Word check_hlds__typecheck__ArgsTypeAssign_34;

#line 2346 "typecheck.m"
                    {
#line 2346 "typecheck.m"
                      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_33);
                    }
#line 2347 "typecheck.m"
                    {
#line 2347 "typecheck.m"
                      check_hlds__typecheck__ArgsTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2347 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_32));
#line 2347 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_15));
#line 2347 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_34, 2) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_33));
#line 2347 "typecheck.m"
                    }
#line 2349 "typecheck.m"
                    {
#line 2349 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2349 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 0) = ((MR_Box) (check_hlds__typecheck__ArgsTypeAssign_34));
#line 2349 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3));
#line 2349 "typecheck.m"
                    }
#line 2346 "typecheck.m"
                  }
#line 2350 "typecheck.m"
                else
#line 2349 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3;
#line 2342 "typecheck.m"
              }
#line 2244 "typecheck.m"
            /* direct tailcall eliminated */
#line 2244 "typecheck.m"
            {
#line 2244 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ConsTypeAssigns_11;
#line 2244 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_19_19;

#line 2244 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_3;
#line 2244 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 2244 "typecheck.m"
            }
#line 2244 "typecheck.m"
            continue;
#line 2240 "typecheck.m"
          }
#line 2238 "typecheck.m"
      }
#line 2238 "typecheck.m"
      break;
#line 2238 "typecheck.m"
    }
#line 2235 "typecheck.m"
}

#line 2119 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0_2(
#line 2119 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2119 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 2119 "typecheck.m"
{
#line 2119 "typecheck.m"
  {
#line 2119 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 2119 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2119 "typecheck.m"
    MR_Word check_hlds__typecheck__conv2_HeadVar__2_2;

#line 2119 "typecheck.m"
    {
#line 2119 "typecheck.m"
      check_hlds__typecheck__conv2_HeadVar__2_2 = check_hlds__typecheck_info__project_cons_type_info_source_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 2119 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv2_HeadVar__2_2));
#line 2119 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 2119 "typecheck.m"
  }
#line 2119 "typecheck.m"
}

#line 2078 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0_1(
#line 2078 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 2078 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 2078 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 2078 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 2078 "typecheck.m"
{
#line 2078 "typecheck.m"
  {
#line 2078 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 2078 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16;

#line 2078 "typecheck.m"
    {
#line 2078 "typecheck.m"
      check_hlds__typecheck__type_assign_check_functor_type_builtin_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16);
    }
#line 2078 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv0_STATE_VARIABLE_TypeAssignSet_16));
#line 2078 "typecheck.m"
  }
#line 2078 "typecheck.m"
}

#line 2070 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unify_var_functor_6_p_0(
#line 2070 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_7,
#line 2070 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_8,
#line 2070 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_9,
#line 2070 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2070 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_46,
#line 2070 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_47)
#line 2070 "typecheck.m"
{
#line 2103 "typecheck.m"
  {
#line 2103 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2103 "typecheck.m"
    MR_Word check_hlds__typecheck__ConsType_12;
#line 2103 "typecheck.m"
    MR_String check_hlds__typecheck__BuiltinTypeName_13;

#line 2075 "typecheck.m"
    {
#line 2075 "typecheck.m"
      check_hlds__typecheck__succeeded = check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(check_hlds__typecheck__ConsId_8, &check_hlds__typecheck__ConsType_12, &check_hlds__typecheck__BuiltinTypeName_13);
    }
#line 2103 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2076 "typecheck.m"
      {
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 6)));
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet_15;
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__V_48_48;
#line 2076 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_310_310;
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__V_312_312;
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__V_313_313;
#line 2076 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_314_314;
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__V_315_315;
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__V_316_316;
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__V_317_317;
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 0)));
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 1)));
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 2)));
#line 2076 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 3)));
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 4)));
#line 2076 "typecheck.m"
        MR_Word check_hlds__typecheck__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 5)));
#line 2076 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 7)));
#line 2077 "typecheck.m"
        MR_Box check_hlds__typecheck__conv1_TypeAssignSet_15;
#line 2087 "typecheck.m"
        MR_Word check_hlds__typecheck__V_311_311;

#line 2078 "typecheck.m"
        {
#line 2078 "typecheck.m"
          check_hlds__typecheck__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2078 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_6[2]));
#line 2078 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_unify_var_functor_6_p_0_1));
#line 2078 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2078 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 3) = ((MR_Box) (check_hlds__typecheck__ConsType_12));
#line 2078 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_48_48, 4) = ((MR_Box) (check_hlds__typecheck__Var_7));
#line 2078 "typecheck.m"
        }
#line 2077 "typecheck.m"
        {
#line 2077 "typecheck.m"
          mercury__list__foldl_4_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[3], check_hlds__typecheck__V_48_48, check_hlds__typecheck__TypeAssignSet0_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__typecheck__conv1_TypeAssignSet_15);
        }
#line 2077 "typecheck.m"
        check_hlds__typecheck__TypeAssignSet_15 = ((MR_Word) check_hlds__typecheck__conv1_TypeAssignSet_15);
#line 2087 "typecheck.m"
        check_hlds__typecheck__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 0)));
#line 2087 "typecheck.m"
        check_hlds__typecheck__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 1)));
#line 2087 "typecheck.m"
        check_hlds__typecheck__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 2)));
#line 2087 "typecheck.m"
        check_hlds__typecheck__V_314_314 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 3)));
#line 2087 "typecheck.m"
        check_hlds__typecheck__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 4)));
#line 2087 "typecheck.m"
        check_hlds__typecheck__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 5)));
#line 2087 "typecheck.m"
        check_hlds__typecheck__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 6)));
#line 2087 "typecheck.m"
        check_hlds__typecheck__V_310_310 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 7)));
#line 2083 "typecheck.m"
        if ((check_hlds__typecheck__TypeAssignSet_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2084 "typecheck.m"
          {
#line 2084 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_50_50;

#line 2087 "typecheck.m"
            {
#line 2087 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2087 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 0) = ((MR_Box) (check_hlds__typecheck__V_317_317));
#line 2087 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 1) = ((MR_Box) (check_hlds__typecheck__V_316_316));
#line 2087 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 2) = ((MR_Box) (check_hlds__typecheck__V_315_315));
#line 2087 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 3) = ((MR_Box) (check_hlds__typecheck__V_314_314));
#line 2087 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 4) = ((MR_Box) (check_hlds__typecheck__V_313_313));
#line 2087 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 5) = ((MR_Box) (check_hlds__typecheck__V_312_312));
#line 2087 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet0_14));
#line 2087 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_50_50, 7) = ((MR_Box) (check_hlds__typecheck__V_310_310));
#line 2087 "typecheck.m"
            }
#line 2092 "typecheck.m"
            if ((check_hlds__typecheck__TypeAssignSet0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2089 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_47 = check_hlds__typecheck__STATE_VARIABLE_Info_50_50;
#line 2092 "typecheck.m"
            else
#line 2093 "typecheck.m"
              {
#line 2093 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeVarSet_20;
#line 2093 "typecheck.m"
                MR_Word check_hlds__typecheck__EmptyConstraints_21;
#line 2093 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsDefn_22;
#line 2093 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsIdSpec_23;
#line 2093 "typecheck.m"
                MR_Word check_hlds__typecheck__V_53_53;
#line 2093 "typecheck.m"
                MR_Word check_hlds__typecheck__V_54_54;

#line 2094 "typecheck.m"
                {
#line 2094 "typecheck.m"
                  mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &check_hlds__typecheck__ConsTypeVarSet_20);
                }
#line 2095 "typecheck.m"
                {
#line 2095 "typecheck.m"
                  hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_21);
                }
#line 2097 "typecheck.m"
                {
#line 2097 "typecheck.m"
                  check_hlds__typecheck__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2097 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_53_53, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinTypeName_13));
#line 2097 "typecheck.m"
                }
#line 2096 "typecheck.m"
                {
#line 2096 "typecheck.m"
                  check_hlds__typecheck__ConsDefn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 2096 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 0) = ((MR_Box) (check_hlds__typecheck__ConsTypeVarSet_20));
#line 2096 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2096 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 2) = ((MR_Box) (check_hlds__typecheck__ConsType_12));
#line 2096 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2096 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 4) = ((MR_Box) (check_hlds__typecheck__EmptyConstraints_21));
#line 2096 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConsDefn_22, 5) = ((MR_Box) (check_hlds__typecheck__V_53_53));
#line 2096 "typecheck.m"
                }
#line 2098 "typecheck.m"
                {
#line 2098 "typecheck.m"
                  check_hlds__typecheck__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2098 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 0) = ((MR_Box) (check_hlds__typecheck__ConsDefn_22));
#line 2098 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2098 "typecheck.m"
                }
#line 2098 "typecheck.m"
                {
#line 2098 "typecheck.m"
                  check_hlds__typecheck__ConsIdSpec_23 = check_hlds__typecheck_errors__report_error_functor_type_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_50_50, check_hlds__typecheck__Var_7, check_hlds__typecheck__V_54_54, check_hlds__typecheck__ConsId_8, (MR_Integer) 0, check_hlds__typecheck__TypeAssignSet0_14);
                }
#line 2100 "typecheck.m"
                {
#line 2100 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_23, check_hlds__typecheck__STATE_VARIABLE_Info_50_50, check_hlds__typecheck__STATE_VARIABLE_Info_47);
#line 2100 "typecheck.m"
                  return;
                }
#line 2093 "typecheck.m"
              }
#line 2084 "typecheck.m"
          }
#line 2083 "typecheck.m"
        else
#line 2082 "typecheck.m"
          {
#line 2082 "typecheck.m"
            MR_Word base;
#line 2082 "typecheck.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2082 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_47 = base;
#line 2082 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_317_317));
#line 2082 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_316_316));
#line 2082 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_315_315));
#line 2082 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_314_314));
#line 2082 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_313_313));
#line 2082 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_312_312));
#line 2082 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_15));
#line 2082 "typecheck.m"
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_310_310));
#line 2082 "typecheck.m"
          }
#line 2076 "typecheck.m"
      }
#line 2103 "typecheck.m"
    else
#line 2106 "typecheck.m"
      {
#line 2106 "typecheck.m"
        MR_Integer check_hlds__typecheck__Arity_24;
#line 2106 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsDefns_25;
#line 2106 "typecheck.m"
        MR_Word check_hlds__typecheck__ConsErrors_26;

#line 2106 "typecheck.m"
        {
#line 2106 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_9, &check_hlds__typecheck__Arity_24);
        }
#line 2107 "typecheck.m"
        {
#line 2107 "typecheck.m"
          check_hlds__typecheck__typecheck_info_get_ctor_list_6_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_46, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Arity_24, check_hlds__typecheck__GoalId_10, &check_hlds__typecheck__ConsDefns_25, &check_hlds__typecheck__ConsErrors_26);
        }
#line 2113 "typecheck.m"
        if ((check_hlds__typecheck__ConsDefns_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2110 "typecheck.m"
          {
#line 2110 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_27;

#line 2111 "typecheck.m"
            {
#line 2111 "typecheck.m"
              check_hlds__typecheck__Spec_27 = check_hlds__typecheck_errors__report_error_undef_cons_4_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_46, check_hlds__typecheck__ConsErrors_26, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Arity_24);
            }
#line 2112 "typecheck.m"
            {
#line 2112 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_27, check_hlds__typecheck__STATE_VARIABLE_Info_0_46, check_hlds__typecheck__STATE_VARIABLE_Info_47);
#line 2112 "typecheck.m"
              return;
            }
#line 2110 "typecheck.m"
          }
#line 2113 "typecheck.m"
        else
#line 2113 "typecheck.m"
          {
#line 2113 "typecheck.m"
            MR_Word check_hlds__typecheck__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_25, (MR_Integer) 1)));
#line 2113 "typecheck.m"
            MR_Word check_hlds__typecheck__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 6)));
#line 2113 "typecheck.m"
            MR_Word check_hlds__typecheck__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 4)));
#line 2115 "typecheck.m"
            MR_Word check_hlds__typecheck__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsDefns_25, (MR_Integer) 0)));
#line 2126 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_320_320 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 7)));
#line 2126 "typecheck.m"
            MR_Word check_hlds__typecheck__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 5)));
#line 2126 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_324_324 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 3)));
#line 2126 "typecheck.m"
            MR_Word check_hlds__typecheck__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 2)));
#line 2126 "typecheck.m"
            MR_Word check_hlds__typecheck__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 1)));
#line 2126 "typecheck.m"
            MR_Word check_hlds__typecheck__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_46, (MR_Integer) 0)));

#line 2113 "typecheck.m"
            if ((check_hlds__typecheck__V_318_318 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2122 "typecheck.m"
              {
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeAssignSet_35;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_38;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_68_68;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet_77;
#line 2122 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_328_328;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__V_330_330;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__V_331_331;
#line 2122 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_332_332;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__V_333_333;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__V_334_334;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__V_335_335;
#line 2131 "typecheck.m"
                MR_Word check_hlds__typecheck__V_36_36;
#line 2131 "typecheck.m"
                MR_Word check_hlds__typecheck__V_37_37;
#line 2146 "typecheck.m"
                MR_Word check_hlds__typecheck__V_39_39;
#line 2146 "typecheck.m"
                MR_Word check_hlds__typecheck__V_40_40;
#line 2161 "typecheck.m"
                MR_Word check_hlds__typecheck__V_329_329;

#line 2127 "typecheck.m"
                {
#line 2127 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__V_321_321, check_hlds__typecheck__ConsDefns_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsTypeAssignSet_35);
                }
#line 2130 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2130 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2130 "typecheck.m"
                  {
#line 2131 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__V_321_321)) == (MR_mktag((MR_Integer) 1)));
#line 2131 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2131 "typecheck.m"
                      {
#line 2131 "typecheck.m"
                        check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_321_321, (MR_Integer) 0)));
#line 2131 "typecheck.m"
                        check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_321_321, (MR_Integer) 1)));
#line 2131 "typecheck.m"
                      }
#line 2130 "typecheck.m"
                  }
#line 2136 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2135 "typecheck.m"
                  {
#line 2135 "typecheck.m"
                    {
#line 2135 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/6", (MR_String) "undefined cons\?");
#line 2135 "typecheck.m"
                      return;
                    }
#line 2135 "typecheck.m"
                  }
#line 2136 "typecheck.m"
                else
#line 2137 "typecheck.m"
                  {
#line 2137 "typecheck.m"
                  }
#line 2142 "typecheck.m"
                {
#line 2142 "typecheck.m"
                  check_hlds__typecheck__typecheck_functor_type_4_p_0(check_hlds__typecheck__ConsTypeAssignSet_35, check_hlds__typecheck__Var_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_38);
                }
#line 2145 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2145 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2145 "typecheck.m"
                  {
#line 2146 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_35)) == (MR_mktag((MR_Integer) 1)));
#line 2146 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2146 "typecheck.m"
                      {
#line 2146 "typecheck.m"
                        check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_35, (MR_Integer) 0)));
#line 2146 "typecheck.m"
                        check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_35, (MR_Integer) 1)));
#line 2146 "typecheck.m"
                      }
#line 2145 "typecheck.m"
                  }
#line 2151 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2149 "typecheck.m"
                  {
#line 2149 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsIdSpec_74;

#line 2148 "typecheck.m"
                    {
#line 2148 "typecheck.m"
                      check_hlds__typecheck__ConsIdSpec_74 = check_hlds__typecheck_errors__report_error_functor_type_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_46, check_hlds__typecheck__Var_7, check_hlds__typecheck__ConsDefns_25, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Arity_24, check_hlds__typecheck__V_321_321);
                    }
#line 2150 "typecheck.m"
                    {
#line 2150 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_74, check_hlds__typecheck__STATE_VARIABLE_Info_0_46, &check_hlds__typecheck__STATE_VARIABLE_Info_68_68);
                    }
#line 2149 "typecheck.m"
                  }
#line 2151 "typecheck.m"
                else
#line 2150 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_68_68 = check_hlds__typecheck__STATE_VARIABLE_Info_0_46;
#line 2157 "typecheck.m"
                {
#line 2157 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(check_hlds__typecheck__ArgsTypeAssignSet_38, check_hlds__typecheck__Args_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_77);
                }
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 0)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 1)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 2)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_332_332 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 3)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 4)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 5)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 6)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_328_328 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_68, (MR_Integer) 7)));
#line 2162 "typecheck.m"
                if ((check_hlds__typecheck__TypeAssignSet_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2163 "typecheck.m"
                  {
#line 2163 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_70_70;

#line 2166 "typecheck.m"
                    {
#line 2166 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_Info_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 0) = ((MR_Box) (check_hlds__typecheck__V_335_335));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 1) = ((MR_Box) (check_hlds__typecheck__V_334_334));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 2) = ((MR_Box) (check_hlds__typecheck__V_333_333));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 3) = ((MR_Box) (check_hlds__typecheck__V_332_332));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 4) = ((MR_Box) (check_hlds__typecheck__V_331_331));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 5) = ((MR_Box) (check_hlds__typecheck__V_330_330));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 6) = ((MR_Box) (check_hlds__typecheck__V_321_321));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_70, 7) = ((MR_Box) (check_hlds__typecheck__V_328_328));
#line 2166 "typecheck.m"
                    }
#line 2171 "typecheck.m"
                    if ((check_hlds__typecheck__ArgsTypeAssignSet_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2168 "typecheck.m"
                      *check_hlds__typecheck__STATE_VARIABLE_Info_47 = check_hlds__typecheck__STATE_VARIABLE_Info_70_70;
#line 2171 "typecheck.m"
                    else
#line 2172 "typecheck.m"
                      {
#line 2172 "typecheck.m"
                        MR_Word check_hlds__typecheck__ArgSpec_45;

#line 2173 "typecheck.m"
                        {
#line 2173 "typecheck.m"
                          check_hlds__typecheck__ArgSpec_45 = check_hlds__typecheck_errors__report_error_functor_arg_types_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_70_70, check_hlds__typecheck__Var_7, check_hlds__typecheck__ConsDefns_25, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Args_9, check_hlds__typecheck__ArgsTypeAssignSet_38);
                        }
#line 2175 "typecheck.m"
                        {
#line 2175 "typecheck.m"
                          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_45, check_hlds__typecheck__STATE_VARIABLE_Info_70_70, check_hlds__typecheck__STATE_VARIABLE_Info_47);
#line 2175 "typecheck.m"
                          return;
                        }
#line 2172 "typecheck.m"
                      }
#line 2163 "typecheck.m"
                  }
#line 2162 "typecheck.m"
                else
#line 2161 "typecheck.m"
                  {
#line 2161 "typecheck.m"
                    MR_Word base;
#line 2161 "typecheck.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2161 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_47 = base;
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_335_335));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_334_334));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_333_333));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_332_332));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_331_331));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_330_330));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_77));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_328_328));
#line 2161 "typecheck.m"
                  }
#line 2122 "typecheck.m"
              }
#line 2113 "typecheck.m"
            else
#line 2122 "typecheck.m"
              {
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__Sources_33;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__Symbol_34;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__ConsTypeAssignSet_264;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_267;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_61_275;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_68_281;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet0_285;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet_286;
#line 2122 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_336_336;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__V_338_338;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__V_339_339;
#line 2122 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_340_340;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__V_341_341;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__V_342_342;
#line 2122 "typecheck.m"
                MR_Word check_hlds__typecheck__V_343_343;
#line 2126 "typecheck.m"
                MR_Word check_hlds__typecheck__V_149_149;
#line 2126 "typecheck.m"
                MR_Word check_hlds__typecheck__V_150_150;
#line 2126 "typecheck.m"
                MR_Word check_hlds__typecheck__V_151_151;
#line 2126 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_152_152;
#line 2126 "typecheck.m"
                MR_Word check_hlds__typecheck__V_153_153;
#line 2126 "typecheck.m"
                MR_Word check_hlds__typecheck__V_154_154;
#line 2126 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_155_155;
#line 2131 "typecheck.m"
                MR_Word check_hlds__typecheck__V_156_156;
#line 2131 "typecheck.m"
                MR_Word check_hlds__typecheck__V_157_157;
#line 2146 "typecheck.m"
                MR_Word check_hlds__typecheck__V_168_168;
#line 2146 "typecheck.m"
                MR_Word check_hlds__typecheck__V_169_169;
#line 2161 "typecheck.m"
                MR_Word check_hlds__typecheck__V_337_337;

#line 2119 "typecheck.m"
                {
#line 2119 "typecheck.m"
                  check_hlds__typecheck__Sources_33 = mercury__list__map_2_f_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_0, (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_cons_type_info_source_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[3], check_hlds__typecheck__ConsDefns_25);
                }
#line 2120 "typecheck.m"
                {
#line 2120 "typecheck.m"
                  check_hlds__typecheck__Symbol_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2120 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_34, 0) = ((MR_Box) (check_hlds__typecheck__ConsId_8));
#line 2120 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Symbol_34, 1) = ((MR_Box) (check_hlds__typecheck__Sources_33));
#line 2120 "typecheck.m"
                }
#line 2121 "typecheck.m"
                {
#line 2121 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_34, check_hlds__typecheck__V_323_323, check_hlds__typecheck__STATE_VARIABLE_Info_0_46, &check_hlds__typecheck__STATE_VARIABLE_Info_61_275);
                }
#line 2126 "typecheck.m"
                check_hlds__typecheck__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 0)));
#line 2126 "typecheck.m"
                check_hlds__typecheck__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 1)));
#line 2126 "typecheck.m"
                check_hlds__typecheck__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 2)));
#line 2126 "typecheck.m"
                check_hlds__typecheck__V_152_152 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 3)));
#line 2126 "typecheck.m"
                check_hlds__typecheck__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 4)));
#line 2126 "typecheck.m"
                check_hlds__typecheck__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 5)));
#line 2126 "typecheck.m"
                check_hlds__typecheck__TypeAssignSet0_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 6)));
#line 2126 "typecheck.m"
                check_hlds__typecheck__V_155_155 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_61_275, (MR_Integer) 7)));
#line 2127 "typecheck.m"
                {
#line 2127 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_117_110_105_102_121_95_118_97_114_95_102_117_110_99_116_111_114_95_103_101_116_95_99_116_111_114_115_95_95_91_50_93_95_48_5_p_0(check_hlds__typecheck__TypeAssignSet0_285, check_hlds__typecheck__ConsDefns_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ConsTypeAssignSet_264);
                }
#line 2130 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ConsTypeAssignSet_264 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2130 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2130 "typecheck.m"
                  {
#line 2131 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_285)) == (MR_mktag((MR_Integer) 1)));
#line 2131 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2131 "typecheck.m"
                      {
#line 2131 "typecheck.m"
                        check_hlds__typecheck__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_285, (MR_Integer) 0)));
#line 2131 "typecheck.m"
                        check_hlds__typecheck__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_285, (MR_Integer) 1)));
#line 2131 "typecheck.m"
                      }
#line 2130 "typecheck.m"
                  }
#line 2136 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2135 "typecheck.m"
                  {
#line 2135 "typecheck.m"
                    {
#line 2135 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_unify_var_functor\'/6", (MR_String) "undefined cons\?");
#line 2135 "typecheck.m"
                      return;
                    }
#line 2135 "typecheck.m"
                  }
#line 2136 "typecheck.m"
                else
#line 2137 "typecheck.m"
                  {
#line 2137 "typecheck.m"
                  }
#line 2142 "typecheck.m"
                {
#line 2142 "typecheck.m"
                  check_hlds__typecheck__typecheck_functor_type_4_p_0(check_hlds__typecheck__ConsTypeAssignSet_264, check_hlds__typecheck__Var_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_267);
                }
#line 2145 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgsTypeAssignSet_267 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2145 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2145 "typecheck.m"
                  {
#line 2146 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__ConsTypeAssignSet_264)) == (MR_mktag((MR_Integer) 1)));
#line 2146 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2146 "typecheck.m"
                      {
#line 2146 "typecheck.m"
                        check_hlds__typecheck__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_264, (MR_Integer) 0)));
#line 2146 "typecheck.m"
                        check_hlds__typecheck__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ConsTypeAssignSet_264, (MR_Integer) 1)));
#line 2146 "typecheck.m"
                      }
#line 2145 "typecheck.m"
                  }
#line 2151 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2149 "typecheck.m"
                  {
#line 2149 "typecheck.m"
                    MR_Word check_hlds__typecheck__ConsIdSpec_172;

#line 2148 "typecheck.m"
                    {
#line 2148 "typecheck.m"
                      check_hlds__typecheck__ConsIdSpec_172 = check_hlds__typecheck_errors__report_error_functor_type_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_61_275, check_hlds__typecheck__Var_7, check_hlds__typecheck__ConsDefns_25, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Arity_24, check_hlds__typecheck__TypeAssignSet0_285);
                    }
#line 2150 "typecheck.m"
                    {
#line 2150 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ConsIdSpec_172, check_hlds__typecheck__STATE_VARIABLE_Info_61_275, &check_hlds__typecheck__STATE_VARIABLE_Info_68_281);
                    }
#line 2149 "typecheck.m"
                  }
#line 2151 "typecheck.m"
                else
#line 2150 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_68_281 = check_hlds__typecheck__STATE_VARIABLE_Info_61_275;
#line 2157 "typecheck.m"
                {
#line 2157 "typecheck.m"
                  check_hlds__typecheck__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_121_112_101_99_104_101_99_107_95_102_117_110_99_116_111_114_95_97_114_103_95_116_121_112_101_115_95_95_91_51_93_95_48_5_p_0(check_hlds__typecheck__ArgsTypeAssignSet_267, check_hlds__typecheck__Args_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_286);
                }
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 0)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 1)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 2)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_340_340 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 3)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 4)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 5)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 6)));
#line 2161 "typecheck.m"
                check_hlds__typecheck__V_336_336 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_68_281, (MR_Integer) 7)));
#line 2162 "typecheck.m"
                if ((check_hlds__typecheck__TypeAssignSet_286 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2163 "typecheck.m"
                  {
#line 2163 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_70_233;

#line 2166 "typecheck.m"
                    {
#line 2166 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_Info_70_233 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 0) = ((MR_Box) (check_hlds__typecheck__V_343_343));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 1) = ((MR_Box) (check_hlds__typecheck__V_342_342));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 2) = ((MR_Box) (check_hlds__typecheck__V_341_341));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 3) = ((MR_Box) (check_hlds__typecheck__V_340_340));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 4) = ((MR_Box) (check_hlds__typecheck__V_339_339));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 5) = ((MR_Box) (check_hlds__typecheck__V_338_338));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet0_285));
#line 2166 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_70_233, 7) = ((MR_Box) (check_hlds__typecheck__V_336_336));
#line 2166 "typecheck.m"
                    }
#line 2171 "typecheck.m"
                    if ((check_hlds__typecheck__ArgsTypeAssignSet_267 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2168 "typecheck.m"
                      *check_hlds__typecheck__STATE_VARIABLE_Info_47 = check_hlds__typecheck__STATE_VARIABLE_Info_70_233;
#line 2171 "typecheck.m"
                    else
#line 2172 "typecheck.m"
                      {
#line 2172 "typecheck.m"
                        MR_Word check_hlds__typecheck__ArgSpec_226;

#line 2173 "typecheck.m"
                        {
#line 2173 "typecheck.m"
                          check_hlds__typecheck__ArgSpec_226 = check_hlds__typecheck_errors__report_error_functor_arg_types_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_70_233, check_hlds__typecheck__Var_7, check_hlds__typecheck__ConsDefns_25, check_hlds__typecheck__ConsId_8, check_hlds__typecheck__Args_9, check_hlds__typecheck__ArgsTypeAssignSet_267);
                        }
#line 2175 "typecheck.m"
                        {
#line 2175 "typecheck.m"
                          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__ArgSpec_226, check_hlds__typecheck__STATE_VARIABLE_Info_70_233, check_hlds__typecheck__STATE_VARIABLE_Info_47);
#line 2175 "typecheck.m"
                          return;
                        }
#line 2172 "typecheck.m"
                      }
#line 2163 "typecheck.m"
                  }
#line 2162 "typecheck.m"
                else
#line 2161 "typecheck.m"
                  {
#line 2161 "typecheck.m"
                    MR_Word base;
#line 2161 "typecheck.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2161 "typecheck.m"
                    *check_hlds__typecheck__STATE_VARIABLE_Info_47 = base;
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_343_343));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_342_342));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_341_341));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_340_340));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_339_339));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_338_338));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_286));
#line 2161 "typecheck.m"
                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_336_336));
#line 2161 "typecheck.m"
                  }
#line 2122 "typecheck.m"
              }
#line 2113 "typecheck.m"
          }
#line 2106 "typecheck.m"
      }
#line 2103 "typecheck.m"
  }
#line 2070 "typecheck.m"
}

#line 2051 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__cons_id_must_be_builtin_type_3_p_0(
#line 2051 "typecheck.m"
  MR_Word check_hlds__typecheck__ConsId_4,
#line 2051 "typecheck.m"
  MR_Word * check_hlds__typecheck__ConsType_5,
#line 2051 "typecheck.m"
  MR_String * check_hlds__typecheck__BuiltinTypeName_6)
#line 2051 "typecheck.m"
{
#line 2054 "typecheck.m"
  {
#line 2054 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 2054 "typecheck.m"
    MR_Word check_hlds__typecheck__BuiltinType_8;

#line 2059 "typecheck.m"
    if (((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2060 "typecheck.m"
      {
#line 2061 "typecheck.m"
        *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "float";
#line 2062 "typecheck.m"
        check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 1;
#line 2060 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2060 "typecheck.m"
      }
#line 2059 "typecheck.m"
    else
#line 2059 "typecheck.m"
      if (((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2056 "typecheck.m"
        {
#line 2057 "typecheck.m"
          *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "int";
#line 2058 "typecheck.m"
          check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 0;
#line 2056 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_TRUE;
#line 2056 "typecheck.m"
        }
#line 2059 "typecheck.m"
      else
#line 2059 "typecheck.m"
        if (((((MR_tag((MR_Word) check_hlds__typecheck__ConsId_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__ConsId_4, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 2064 "typecheck.m"
          {
#line 2065 "typecheck.m"
            *check_hlds__typecheck__BuiltinTypeName_6 = (MR_String) "string";
#line 2066 "typecheck.m"
            check_hlds__typecheck__BuiltinType_8 = (MR_Integer) 2;
#line 2064 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 2064 "typecheck.m"
          }
#line 2059 "typecheck.m"
        else
#line 2059 "typecheck.m"
          check_hlds__typecheck__succeeded = MR_FALSE;
#line 2054 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 2054 "typecheck.m"
      {
#line 2068 "typecheck.m"
        {
#line 2068 "typecheck.m"
          MR_Word base;
#line 2068 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2068 "typecheck.m"
          *check_hlds__typecheck__ConsType_5 = base;
#line 2068 "typecheck.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__BuiltinType_8));
#line 2068 "typecheck.m"
        }
#line 2068 "typecheck.m"
        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2054 "typecheck.m"
      }
#line 2054 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 2054 "typecheck.m"
  }
#line 2051 "typecheck.m"
}

#line 2012 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_unification_6_p_0(
#line 2012 "typecheck.m"
  MR_Word check_hlds__typecheck__X_7,
#line 2012 "typecheck.m"
  MR_Word check_hlds__typecheck__RHS0_8,
#line 2012 "typecheck.m"
  MR_Word * check_hlds__typecheck__RHS_9,
#line 2012 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 2012 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_26,
#line 2012 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_27)
#line 2012 "typecheck.m"
{
#line 2017 "typecheck.m"
  {
#line 2017 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 2017 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__RHS0_8)) == (MR_mktag((MR_Integer) 1))))
#line 2021 "typecheck.m"
      {
#line 2021 "typecheck.m"
        MR_Word check_hlds__typecheck__Functor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_8, (MR_Integer) 0)));
#line 2021 "typecheck.m"
        MR_Word check_hlds__typecheck__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_8, (MR_Integer) 2)));
#line 2021 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_30_30;
#line 2021 "typecheck.m"
        MR_Word check_hlds__typecheck___ExistConstraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__RHS0_8, (MR_Integer) 1)));

#line 2022 "typecheck.m"
        {
#line 2022 "typecheck.m"
          check_hlds__typecheck__typecheck_unify_var_functor_6_p_0(check_hlds__typecheck__X_7, check_hlds__typecheck__Functor_13, check_hlds__typecheck__Args_15, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__STATE_VARIABLE_Info_30_30);
        }
#line 2023 "typecheck.m"
        {
#line 2023 "typecheck.m"
          check_hlds__typeclasses__perform_context_reduction_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_30_30, check_hlds__typecheck__STATE_VARIABLE_Info_27);
        }
#line 2024 "typecheck.m"
        *check_hlds__typecheck__RHS_9 = check_hlds__typecheck__RHS0_8;
#line 2021 "typecheck.m"
      }
#line 2017 "typecheck.m"
    else
#line 2017 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__RHS0_8)) == (MR_mktag((MR_Integer) 2))))
#line 2027 "typecheck.m"
        {
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__Purity_16 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__Groundness_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__PredOrFunc_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__NonLocals_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 2)));
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__Vars_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 3)));
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__Modes_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 4)));
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__Det_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 5)));
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__RHS0_8, (MR_Integer) 6)));
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__Goal_25;
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_28_28;
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));
#line 2027 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet_42;
#line 2483 "typecheck.m"
          MR_Word check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 2483 "typecheck.m"
          MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 2483 "typecheck.m"
          MR_Word check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 2483 "typecheck.m"
          MR_Integer check_hlds__typecheck__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 2483 "typecheck.m"
          MR_Word check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
#line 2483 "typecheck.m"
          MR_Word check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 2483 "typecheck.m"
          MR_Integer check_hlds__typecheck__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
#line 2488 "typecheck.m"
          MR_Word check_hlds__typecheck__V_43_43;
#line 2488 "typecheck.m"
          MR_Word check_hlds__typecheck__V_44_44;

#line 2484 "typecheck.m"
          {
#line 2484 "typecheck.m"
            check_hlds__typecheck__typecheck_lambda_var_has_type_2_8_p_0(check_hlds__typecheck__TypeAssignSet0_41, check_hlds__typecheck__Purity_16, check_hlds__typecheck__PredOrFunc_18, check_hlds__typecheck__X_7, check_hlds__typecheck__Vars_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_42);
          }
#line 2487 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2487 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2487 "typecheck.m"
            {
#line 2488 "typecheck.m"
              check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_41)) == (MR_mktag((MR_Integer) 1)));
#line 2488 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2488 "typecheck.m"
                {
#line 2488 "typecheck.m"
                  check_hlds__typecheck__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_41, (MR_Integer) 0)));
#line 2488 "typecheck.m"
                  check_hlds__typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_41, (MR_Integer) 1)));
#line 2488 "typecheck.m"
                }
#line 2487 "typecheck.m"
            }
#line 2493 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2491 "typecheck.m"
            {
#line 2491 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_45;

#line 2490 "typecheck.m"
              {
#line 2490 "typecheck.m"
                check_hlds__typecheck__Spec_45 = check_hlds__typecheck_errors__report_error_lambda_var_6_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__PredOrFunc_18, check_hlds__typecheck__X_7, check_hlds__typecheck__Vars_21, check_hlds__typecheck__TypeAssignSet0_41);
              }
#line 2492 "typecheck.m"
              {
#line 2492 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_45, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, &check_hlds__typecheck__STATE_VARIABLE_Info_28_28);
              }
#line 2491 "typecheck.m"
            }
#line 2493 "typecheck.m"
          else
#line 2494 "typecheck.m"
            {
#line 2494 "typecheck.m"
              MR_Word check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 2494 "typecheck.m"
              MR_Word check_hlds__typecheck__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 2494 "typecheck.m"
              MR_Word check_hlds__typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 2494 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 2494 "typecheck.m"
              MR_Word check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
#line 2494 "typecheck.m"
              MR_Word check_hlds__typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 2494 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
#line 2494 "typecheck.m"
              MR_Word check_hlds__typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));

#line 2494 "typecheck.m"
              {
#line 2494 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_Info_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2494 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 0) = ((MR_Box) (check_hlds__typecheck__V_56_56));
#line 2494 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 1) = ((MR_Box) (check_hlds__typecheck__V_57_57));
#line 2494 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 2) = ((MR_Box) (check_hlds__typecheck__V_58_58));
#line 2494 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 3) = ((MR_Box) (check_hlds__typecheck__V_59_59));
#line 2494 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 4) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 2494 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 5) = ((MR_Box) (check_hlds__typecheck__V_61_61));
#line 2494 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_42));
#line 2494 "typecheck.m"
                MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_28_28, 7) = ((MR_Box) (check_hlds__typecheck__V_63_63));
#line 2494 "typecheck.m"
              }
#line 2494 "typecheck.m"
            }
#line 2030 "typecheck.m"
          {
#line 2030 "typecheck.m"
            check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Goal0_24, &check_hlds__typecheck__Goal_25, check_hlds__typecheck__STATE_VARIABLE_Info_28_28, check_hlds__typecheck__STATE_VARIABLE_Info_27);
          }
#line 2031 "typecheck.m"
          {
#line 2031 "typecheck.m"
            MR_Word base;
#line 2031 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 2031 "typecheck.m"
            *check_hlds__typecheck__RHS_9 = base;
#line 2031 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((check_hlds__typecheck__Purity_16 | ((((check_hlds__typecheck__Groundness_17 << (MR_Integer) 2)) | ((check_hlds__typecheck__PredOrFunc_18 << (MR_Integer) 3)))))));
#line 2031 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
#line 2031 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__typecheck__NonLocals_20));
#line 2031 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__typecheck__Vars_21));
#line 2031 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__typecheck__Modes_22));
#line 2031 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__typecheck__Det_23));
#line 2031 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (check_hlds__typecheck__Goal_25));
#line 2031 "typecheck.m"
          }
#line 2027 "typecheck.m"
        }
#line 2017 "typecheck.m"
      else
#line 2017 "typecheck.m"
        {
#line 2017 "typecheck.m"
          MR_Word check_hlds__typecheck__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__RHS0_8, (MR_Integer) 0)));
#line 2017 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet0_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));
#line 2017 "typecheck.m"
          MR_Word check_hlds__typecheck__TypeAssignSet_70;
#line 2039 "typecheck.m"
          MR_Word check_hlds__typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 2039 "typecheck.m"
          MR_Word check_hlds__typecheck__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 2039 "typecheck.m"
          MR_Word check_hlds__typecheck__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 2039 "typecheck.m"
          MR_Integer check_hlds__typecheck__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 2039 "typecheck.m"
          MR_Word check_hlds__typecheck__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
#line 2039 "typecheck.m"
          MR_Word check_hlds__typecheck__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 2039 "typecheck.m"
          MR_Integer check_hlds__typecheck__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
#line 2043 "typecheck.m"
          MR_Word check_hlds__typecheck__V_71_71;
#line 2043 "typecheck.m"
          MR_Word check_hlds__typecheck__V_72_72;

#line 2040 "typecheck.m"
          {
#line 2040 "typecheck.m"
            check_hlds__typecheck__typecheck_unify_var_var_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_69, check_hlds__typecheck__X_7, check_hlds__typecheck__Y_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_70);
          }
#line 2042 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2042 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2042 "typecheck.m"
            {
#line 2043 "typecheck.m"
              check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_69)) == (MR_mktag((MR_Integer) 1)));
#line 2043 "typecheck.m"
              if (check_hlds__typecheck__succeeded)
#line 2043 "typecheck.m"
                {
#line 2043 "typecheck.m"
                  check_hlds__typecheck__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_69, (MR_Integer) 0)));
#line 2043 "typecheck.m"
                  check_hlds__typecheck__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_69, (MR_Integer) 1)));
#line 2043 "typecheck.m"
                }
#line 2042 "typecheck.m"
            }
#line 2047 "typecheck.m"
          if (check_hlds__typecheck__succeeded)
#line 2045 "typecheck.m"
            {
#line 2045 "typecheck.m"
              MR_Word check_hlds__typecheck__Spec_73;

#line 2045 "typecheck.m"
              {
#line 2045 "typecheck.m"
                check_hlds__typecheck__Spec_73 = check_hlds__typecheck_errors__report_error_unif_var_var_4_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__X_7, check_hlds__typecheck__Y_12, check_hlds__typecheck__TypeAssignSet0_69);
              }
#line 2046 "typecheck.m"
              {
#line 2046 "typecheck.m"
                check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_73, check_hlds__typecheck__STATE_VARIABLE_Info_0_26, check_hlds__typecheck__STATE_VARIABLE_Info_27);
              }
#line 2045 "typecheck.m"
            }
#line 2047 "typecheck.m"
          else
#line 2048 "typecheck.m"
            {
#line 2048 "typecheck.m"
              MR_Word check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 0)));
#line 2048 "typecheck.m"
              MR_Word check_hlds__typecheck__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 1)));
#line 2048 "typecheck.m"
              MR_Word check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 2)));
#line 2048 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_87_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 3)));
#line 2048 "typecheck.m"
              MR_Word check_hlds__typecheck__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 4)));
#line 2048 "typecheck.m"
              MR_Word check_hlds__typecheck__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 5)));
#line 2048 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 7)));
#line 2048 "typecheck.m"
              MR_Word check_hlds__typecheck__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_26, (MR_Integer) 6)));

#line 2048 "typecheck.m"
              {
#line 2048 "typecheck.m"
                MR_Word base;
#line 2048 "typecheck.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 2048 "typecheck.m"
                *check_hlds__typecheck__STATE_VARIABLE_Info_27 = base;
#line 2048 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_84_84));
#line 2048 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_85_85));
#line 2048 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_86_86));
#line 2048 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_87_87));
#line 2048 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_88_88));
#line 2048 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_89_89));
#line 2048 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_70));
#line 2048 "typecheck.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_91_91));
#line 2048 "typecheck.m"
              }
#line 2048 "typecheck.m"
            }
#line 2019 "typecheck.m"
          *check_hlds__typecheck__RHS_9 = check_hlds__typecheck__RHS0_8;
#line 2017 "typecheck.m"
        }
#line 2017 "typecheck.m"
  }
#line 2012 "typecheck.m"
}

#line 1936 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(
#line 1936 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1936 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1936 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_3,
#line 1936 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4,
#line 1936 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5)
#line 1936 "typecheck.m"
{
#line 1939 "typecheck.m"
  while (MR_TRUE)
#line 1939 "typecheck.m"
    {
#line 1939 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1939 "typecheck.m"
      {
#line 1939 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1939 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1939 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_5 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 1939 "typecheck.m"
        else
#line 1941 "typecheck.m"
          {
#line 1941 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1941 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1941 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;
#line 1941 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_26;
#line 1941 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybeOldVarType_27;
#line 1941 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes_28;

#line 1949 "typecheck.m"
            {
#line 1949 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__VarTypes0_26);
            }
#line 1950 "typecheck.m"
            {
#line 1950 "typecheck.m"
              parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_3, &check_hlds__typecheck__MaybeOldVarType_27, check_hlds__typecheck__VarTypes0_26, &check_hlds__typecheck__VarTypes_28);
            }
#line 1958 "typecheck.m"
            if ((check_hlds__typecheck__MaybeOldVarType_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1959 "typecheck.m"
              {
#line 1959 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_31;

#line 1960 "typecheck.m"
                {
#line 1960 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_28, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign_31);
                }
#line 1961 "typecheck.m"
                {
#line 1961 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_31));
#line 1961 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 1961 "typecheck.m"
                }
#line 1959 "typecheck.m"
              }
#line 1958 "typecheck.m"
            else
#line 1952 "typecheck.m"
              {
#line 1952 "typecheck.m"
                MR_Word check_hlds__typecheck__OldVarType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_27, (MR_Integer) 0)));
#line 1955 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign1_30;
#line 2543 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadTypeParams_39;
#line 2543 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings0_40;
#line 2543 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeBindings_41;

#line 2544 "typecheck.m"
                {
#line 2544 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__HeadTypeParams_39);
                }
#line 2545 "typecheck.m"
                {
#line 2545 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeBindings0_40);
                }
#line 2546 "typecheck.m"
                {
#line 2546 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_29, check_hlds__typecheck__Type_3, check_hlds__typecheck__HeadTypeParams_39, check_hlds__typecheck__TypeBindings0_40, &check_hlds__typecheck__TypeBindings_41);
                }
#line 2543 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 2543 "typecheck.m"
                  {
#line 2547 "typecheck.m"
                    {
#line 2547 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_41, check_hlds__typecheck__TypeAssign0_11, &check_hlds__typecheck__TypeAssign1_30);
                    }
#line 2547 "typecheck.m"
                    check_hlds__typecheck__succeeded = MR_TRUE;
#line 2543 "typecheck.m"
                  }
#line 1955 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1954 "typecheck.m"
                  {
#line 1954 "typecheck.m"
                    check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_30));
#line 1954 "typecheck.m"
                    MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4));
#line 1954 "typecheck.m"
                  }
#line 1955 "typecheck.m"
                else
#line 1956 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4;
#line 1952 "typecheck.m"
              }
#line 1943 "typecheck.m"
            /* direct tailcall eliminated */
#line 1943 "typecheck.m"
            {
#line 1943 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_12;
#line 1943 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_18_18;

#line 1943 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0_4 = check_hlds__typecheck__STATE_VARIABLE_TypeAssignSet_0__tmp_copy_4;
#line 1943 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1943 "typecheck.m"
            }
#line 1943 "typecheck.m"
            continue;
#line 1941 "typecheck.m"
          }
#line 1939 "typecheck.m"
      }
#line 1939 "typecheck.m"
      break;
#line 1939 "typecheck.m"
    }
#line 1936 "typecheck.m"
}

#line 1920 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_4_p_0(
#line 1920 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_5,
#line 1920 "typecheck.m"
  MR_Word check_hlds__typecheck__Type_6,
#line 1920 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 1920 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14)
#line 1920 "typecheck.m"
{
#line 1923 "typecheck.m"
  {
#line 1923 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1923 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1923 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet_9;
#line 1924 "typecheck.m"
    MR_Word check_hlds__typecheck__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1924 "typecheck.m"
    MR_Word check_hlds__typecheck__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1924 "typecheck.m"
    MR_Word check_hlds__typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1924 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1924 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1924 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1924 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1928 "typecheck.m"
    MR_Word check_hlds__typecheck__V_10_10;
#line 1928 "typecheck.m"
    MR_Word check_hlds__typecheck__V_11_11;

#line 1925 "typecheck.m"
    {
#line 1925 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_8, check_hlds__typecheck__Var_5, check_hlds__typecheck__Type_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_9);
    }
#line 1927 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1927 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1927 "typecheck.m"
      {
#line 1928 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_8)) == (MR_mktag((MR_Integer) 1)));
#line 1928 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1928 "typecheck.m"
          {
#line 1928 "typecheck.m"
            check_hlds__typecheck__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_8, (MR_Integer) 0)));
#line 1928 "typecheck.m"
            check_hlds__typecheck__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_8, (MR_Integer) 1)));
#line 1928 "typecheck.m"
          }
#line 1927 "typecheck.m"
      }
#line 1932 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1930 "typecheck.m"
      {
#line 1930 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_12;

#line 1930 "typecheck.m"
        {
#line 1930 "typecheck.m"
          check_hlds__typecheck__Spec_12 = check_hlds__typecheck_errors__report_error_var_4_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__Var_5, check_hlds__typecheck__Type_6, check_hlds__typecheck__TypeAssignSet0_8);
        }
#line 1931 "typecheck.m"
        {
#line 1931 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_12, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
#line 1931 "typecheck.m"
          return;
        }
#line 1930 "typecheck.m"
      }
#line 1932 "typecheck.m"
    else
#line 1933 "typecheck.m"
      {
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1933 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1933 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1933 "typecheck.m"
        MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));

#line 1933 "typecheck.m"
        {
#line 1933 "typecheck.m"
          MR_Word base;
#line 1933 "typecheck.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1933 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_14 = base;
#line 1933 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_25_25));
#line 1933 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 1933 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 1933 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 1933 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_29_29));
#line 1933 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_30_30));
#line 1933 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_9));
#line 1933 "typecheck.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_32_32));
#line 1933 "typecheck.m"
        }
#line 1933 "typecheck.m"
      }
#line 1923 "typecheck.m"
  }
#line 1920 "typecheck.m"
}

#line 1907 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(
#line 1907 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1907 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1907 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_3,
#line 1907 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_4,
#line 1907 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_5)
#line 1907 "typecheck.m"
{
#line 1910 "typecheck.m"
  while (MR_TRUE)
#line 1910 "typecheck.m"
    {
#line 1910 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1910 "typecheck.m"
      {
#line 1910 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1910 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1910 "typecheck.m"
          if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1914 "typecheck.m"
            *check_hlds__typecheck__STATE_VARIABLE_Info_5 = check_hlds__typecheck__STATE_VARIABLE_Info_0_4;
#line 1910 "typecheck.m"
          else
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
#line 1910 "typecheck.m"
        else
#line 1910 "typecheck.m"
          {
#line 1910 "typecheck.m"
            MR_Word check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1910 "typecheck.m"
            MR_Word check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));

#line 1910 "typecheck.m"
            if ((check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1912 "typecheck.m"
              {
#line 1913 "typecheck.m"
                {
#line 1913 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_var_has_type_list\'/5", (MR_String) "length mismatch");
#line 1913 "typecheck.m"
                  return;
                }
#line 1912 "typecheck.m"
              }
#line 1910 "typecheck.m"
            else
#line 1915 "typecheck.m"
              {
#line 1915 "typecheck.m"
                MR_Word check_hlds__typecheck__Type_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 1915 "typecheck.m"
                MR_Word check_hlds__typecheck__Types_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 1915 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_36_36;
#line 1915 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_37_37;
#line 1915 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_38_38;
#line 1915 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 1915 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet_57;
#line 1916 "typecheck.m"
                MR_Word check_hlds__typecheck__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1916 "typecheck.m"
                MR_Word check_hlds__typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1916 "typecheck.m"
                MR_Word check_hlds__typecheck__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1916 "typecheck.m"
                MR_Word check_hlds__typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 1916 "typecheck.m"
                MR_Word check_hlds__typecheck__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 1916 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 7)));
#line 1916 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 1928 "typecheck.m"
                MR_Word check_hlds__typecheck__V_58_58;
#line 1928 "typecheck.m"
                MR_Word check_hlds__typecheck__V_59_59;

#line 1916 "typecheck.m"
                {
#line 1916 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1916 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 0) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 1916 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 1) = ((MR_Box) (check_hlds__typecheck__V_42_42));
#line 1916 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 2) = ((MR_Box) (check_hlds__typecheck__V_43_43));
#line 1916 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 3) = ((MR_Box) (check_hlds__typecheck__ArgNum_3));
#line 1916 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 4) = ((MR_Box) (check_hlds__typecheck__V_45_45));
#line 1916 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 5) = ((MR_Box) (check_hlds__typecheck__V_46_46));
#line 1916 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet0_56));
#line 1916 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, 7) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 1916 "typecheck.m"
                }
#line 1925 "typecheck.m"
                {
#line 1925 "typecheck.m"
                  check_hlds__typecheck__typecheck_var_has_type_2_5_p_0(check_hlds__typecheck__TypeAssignSet0_56, check_hlds__typecheck__V_50_50, check_hlds__typecheck__Type_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__TypeAssignSet_57);
                }
#line 1927 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__TypeAssignSet_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1927 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1927 "typecheck.m"
                  {
#line 1928 "typecheck.m"
                    check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__TypeAssignSet0_56)) == (MR_mktag((MR_Integer) 1)));
#line 1928 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 1928 "typecheck.m"
                      {
#line 1928 "typecheck.m"
                        check_hlds__typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_56, (MR_Integer) 0)));
#line 1928 "typecheck.m"
                        check_hlds__typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet0_56, (MR_Integer) 1)));
#line 1928 "typecheck.m"
                      }
#line 1927 "typecheck.m"
                  }
#line 1932 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1930 "typecheck.m"
                  {
#line 1930 "typecheck.m"
                    MR_Word check_hlds__typecheck__Spec_60;

#line 1930 "typecheck.m"
                    {
#line 1930 "typecheck.m"
                      check_hlds__typecheck__Spec_60 = check_hlds__typecheck_errors__report_error_var_4_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_36_36, check_hlds__typecheck__V_50_50, check_hlds__typecheck__Type_30, check_hlds__typecheck__TypeAssignSet0_56);
                    }
#line 1931 "typecheck.m"
                    {
#line 1931 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_60, check_hlds__typecheck__STATE_VARIABLE_Info_36_36, &check_hlds__typecheck__STATE_VARIABLE_Info_37_37);
                    }
#line 1930 "typecheck.m"
                  }
#line 1932 "typecheck.m"
                else
#line 1933 "typecheck.m"
                  {
#line 1933 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 0)));
#line 1933 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 1)));
#line 1933 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 2)));
#line 1933 "typecheck.m"
                    MR_Integer check_hlds__typecheck__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 3)));
#line 1933 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 4)));
#line 1933 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 5)));
#line 1933 "typecheck.m"
                    MR_Integer check_hlds__typecheck__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 7)));
#line 1933 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_36_36, (MR_Integer) 6)));

#line 1933 "typecheck.m"
                    {
#line 1933 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1933 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (check_hlds__typecheck__V_71_71));
#line 1933 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (check_hlds__typecheck__V_72_72));
#line 1933 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (check_hlds__typecheck__V_73_73));
#line 1933 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (check_hlds__typecheck__V_74_74));
#line 1933 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (check_hlds__typecheck__V_75_75));
#line 1933 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (check_hlds__typecheck__V_76_76));
#line 1933 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_57));
#line 1933 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_37_37, 7) = ((MR_Box) (check_hlds__typecheck__V_78_78));
#line 1933 "typecheck.m"
                    }
#line 1933 "typecheck.m"
                  }
#line 1918 "typecheck.m"
                check_hlds__typecheck__V_38_38 = (check_hlds__typecheck__ArgNum_3 + (MR_Integer) 1);
#line 1918 "typecheck.m"
                /* direct tailcall eliminated */
#line 1918 "typecheck.m"
                {
#line 1918 "typecheck.m"
                  MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__V_49_49;
#line 1918 "typecheck.m"
                  MR_Word check_hlds__typecheck__HeadVar__2__tmp_copy_2 = check_hlds__typecheck__Types_31;
#line 1918 "typecheck.m"
                  MR_Integer check_hlds__typecheck__ArgNum__tmp_copy_3 = check_hlds__typecheck__V_38_38;
#line 1918 "typecheck.m"
                  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_Info_37_37;

#line 1918 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_Info_0_4 = check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1918 "typecheck.m"
                  check_hlds__typecheck__ArgNum_3 = check_hlds__typecheck__ArgNum__tmp_copy_3;
#line 1918 "typecheck.m"
                  check_hlds__typecheck__HeadVar__2_2 = check_hlds__typecheck__HeadVar__2__tmp_copy_2;
#line 1918 "typecheck.m"
                  check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1918 "typecheck.m"
                }
#line 1918 "typecheck.m"
                continue;
#line 1915 "typecheck.m"
              }
#line 1910 "typecheck.m"
          }
#line 1910 "typecheck.m"
      }
#line 1910 "typecheck.m"
      break;
#line 1910 "typecheck.m"
    }
#line 1907 "typecheck.m"
}

#line 1829 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(
#line 1829 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1829 "typecheck.m"
  MR_Word check_hlds__typecheck__Var_2,
#line 1829 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1829 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 1829 "typecheck.m"
{
#line 1832 "typecheck.m"
  while (MR_TRUE)
#line 1832 "typecheck.m"
    {
#line 1832 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1832 "typecheck.m"
      {
#line 1832 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1832 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1832 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = check_hlds__typecheck__HeadVar__3_3;
#line 1832 "typecheck.m"
        else
#line 1834 "typecheck.m"
          {
#line 1834 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1834 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgsTypeAssignSets_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1834 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 0)));
#line 1834 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypes0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 1)));
#line 1834 "typecheck.m"
            MR_Word check_hlds__typecheck__ClassContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgsTypeAssign_9, (MR_Integer) 2)));
#line 1834 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;
#line 1834 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes0_27;

#line 1847 "typecheck.m"
            {
#line 1847 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__VarTypes0_27);
            }
#line 1871 "typecheck.m"
            if ((check_hlds__typecheck__ArgTypes0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1872 "typecheck.m"
              {
#line 1873 "typecheck.m"
                {
#line 1873 "typecheck.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.arg_type_assign_var_has_type\'/6", (MR_String) "ArgTypes0 = []");
#line 1873 "typecheck.m"
                  return;
                }
#line 1872 "typecheck.m"
              }
#line 1871 "typecheck.m"
            else
#line 1849 "typecheck.m"
              {
#line 1849 "typecheck.m"
                MR_Word check_hlds__typecheck__Type_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 0)));
#line 1849 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypes0_14, (MR_Integer) 1)));
#line 1849 "typecheck.m"
                MR_Word check_hlds__typecheck__MaybeOldVarType_30;
#line 1849 "typecheck.m"
                MR_Word check_hlds__typecheck__VarTypes_31;

#line 1850 "typecheck.m"
                {
#line 1850 "typecheck.m"
                  parse_tree__prog_data__search_insert_var_type_5_p_0(check_hlds__typecheck__Var_2, check_hlds__typecheck__Type_28, &check_hlds__typecheck__MaybeOldVarType_30, check_hlds__typecheck__VarTypes0_27, &check_hlds__typecheck__VarTypes_31);
                }
#line 1864 "typecheck.m"
                if ((check_hlds__typecheck__MaybeOldVarType_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1865 "typecheck.m"
                  {
#line 1865 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign_35;
#line 1865 "typecheck.m"
                    MR_Word check_hlds__typecheck__NewTypeAssign_41;

#line 1866 "typecheck.m"
                    {
#line 1866 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_set_var_types_3_p_0(check_hlds__typecheck__VarTypes_31, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign_35);
                    }
#line 1867 "typecheck.m"
                    {
#line 1867 "typecheck.m"
                      check_hlds__typecheck__NewTypeAssign_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1867 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_35));
#line 1867 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
#line 1867 "typecheck.m"
                      MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_41, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
#line 1867 "typecheck.m"
                    }
#line 1869 "typecheck.m"
                    {
#line 1869 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1869 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_41));
#line 1869 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
#line 1869 "typecheck.m"
                    }
#line 1865 "typecheck.m"
                  }
#line 1864 "typecheck.m"
                else
#line 1853 "typecheck.m"
                  {
#line 1853 "typecheck.m"
                    MR_Word check_hlds__typecheck__OldVarType_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOldVarType_30, (MR_Integer) 0)));
#line 1861 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeAssign1_33;
#line 2543 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypeParams_46;
#line 2543 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings0_47;
#line 2543 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings_48;

#line 2544 "typecheck.m"
                    {
#line 2544 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__HeadTypeParams_46);
                    }
#line 2545 "typecheck.m"
                    {
#line 2545 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeBindings0_47);
                    }
#line 2546 "typecheck.m"
                    {
#line 2546 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_unify_5_p_0(check_hlds__typecheck__OldVarType_32, check_hlds__typecheck__Type_28, check_hlds__typecheck__HeadTypeParams_46, check_hlds__typecheck__TypeBindings0_47, &check_hlds__typecheck__TypeBindings_48);
                    }
#line 2543 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 2543 "typecheck.m"
                      {
#line 2547 "typecheck.m"
                        {
#line 2547 "typecheck.m"
                          check_hlds__typecheck_info__type_assign_set_type_bindings_3_p_0(check_hlds__typecheck__TypeBindings_48, check_hlds__typecheck__TypeAssign0_13, &check_hlds__typecheck__TypeAssign1_33);
                        }
#line 2547 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 2543 "typecheck.m"
                      }
#line 1861 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 1859 "typecheck.m"
                      {
#line 1859 "typecheck.m"
                        MR_Word check_hlds__typecheck__NewTypeAssign_34;

#line 1858 "typecheck.m"
                        {
#line 1858 "typecheck.m"
                          check_hlds__typecheck__NewTypeAssign_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1858 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign1_33));
#line 1858 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_29));
#line 1858 "typecheck.m"
                          MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewTypeAssign_34, 2) = ((MR_Box) (check_hlds__typecheck__ClassContext_15));
#line 1858 "typecheck.m"
                        }
#line 1860 "typecheck.m"
                        {
#line 1860 "typecheck.m"
                          check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1860 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 0) = ((MR_Box) (check_hlds__typecheck__NewTypeAssign_34));
#line 1860 "typecheck.m"
                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18, 1) = ((MR_Box) (check_hlds__typecheck__HeadVar__3_3));
#line 1860 "typecheck.m"
                        }
#line 1859 "typecheck.m"
                      }
#line 1861 "typecheck.m"
                    else
#line 1860 "typecheck.m"
                      check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18 = check_hlds__typecheck__HeadVar__3_3;
#line 1853 "typecheck.m"
                  }
#line 1849 "typecheck.m"
              }
#line 1838 "typecheck.m"
            /* direct tailcall eliminated */
#line 1838 "typecheck.m"
            {
#line 1838 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__ArgsTypeAssignSets_10;
#line 1838 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_18_18;

#line 1838 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 1838 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1838 "typecheck.m"
            }
#line 1838 "typecheck.m"
            continue;
#line 1834 "typecheck.m"
          }
#line 1832 "typecheck.m"
      }
#line 1832 "typecheck.m"
      break;
#line 1832 "typecheck.m"
    }
#line 1829 "typecheck.m"
}

#line 1813 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__skip_arg_2_p_0(
#line 1813 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1813 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2)
#line 1813 "typecheck.m"
{
#line 1815 "typecheck.m"
  {
#line 1815 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1815 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1815 "typecheck.m"
      *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1815 "typecheck.m"
    else
#line 1817 "typecheck.m"
      {
#line 1817 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssign0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1817 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssigns0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1817 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssign_5;
#line 1817 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypeAssigns_6;
#line 1817 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 0)));
#line 1817 "typecheck.m"
        MR_Word check_hlds__typecheck__Args0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 1)));
#line 1817 "typecheck.m"
        MR_Word check_hlds__typecheck__Constraints_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign0_3, (MR_Integer) 2)));
#line 1817 "typecheck.m"
        MR_Word check_hlds__typecheck__Args_11;

#line 1821 "typecheck.m"
        if ((check_hlds__typecheck__Args0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1822 "typecheck.m"
          {
#line 1824 "typecheck.m"
            {
#line 1824 "typecheck.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.skip_arg\'/2", (MR_String) "skip_arg");
#line 1824 "typecheck.m"
              return;
            }
#line 1822 "typecheck.m"
          }
#line 1821 "typecheck.m"
        else
#line 1820 "typecheck.m"
          {
#line 1820 "typecheck.m"
            MR_Word check_hlds__typecheck__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 0)));

#line 1820 "typecheck.m"
            check_hlds__typecheck__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_8, (MR_Integer) 1)));
#line 1820 "typecheck.m"
          }
#line 1826 "typecheck.m"
        {
#line 1826 "typecheck.m"
          check_hlds__typecheck__ArgTypeAssign_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1826 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_7));
#line 1826 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 1) = ((MR_Box) (check_hlds__typecheck__Args_11));
#line 1826 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_5, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_9));
#line 1826 "typecheck.m"
        }
#line 1827 "typecheck.m"
        {
#line 1827 "typecheck.m"
          check_hlds__typecheck__skip_arg_2_p_0(check_hlds__typecheck__ArgTypeAssigns0_4, &check_hlds__typecheck__ArgTypeAssigns_6);
        }
#line 1817 "typecheck.m"
        {
#line 1817 "typecheck.m"
          MR_Word base;
#line 1817 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 1817 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_5));
#line 1817 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssigns_6));
#line 1817 "typecheck.m"
        }
#line 1817 "typecheck.m"
      }
#line 1815 "typecheck.m"
  }
#line 1813 "typecheck.m"
}

#line 1778 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(
#line 1778 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1778 "typecheck.m"
  MR_Integer check_hlds__typecheck__ArgNum_2,
#line 1778 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1778 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_4,
#line 1778 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_5)
#line 1778 "typecheck.m"
{
#line 1782 "typecheck.m"
  while (MR_TRUE)
#line 1782 "typecheck.m"
    {
#line 1782 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1782 "typecheck.m"
      {
#line 1782 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1782 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1782 "typecheck.m"
          {
#line 1782 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssignSet_9;
#line 1785 "typecheck.m"
            MR_Word check_hlds__typecheck__V_26_26;
#line 1785 "typecheck.m"
            MR_Word check_hlds__typecheck__V_27_27;
#line 1785 "typecheck.m"
            MR_Word check_hlds__typecheck__V_28_28;
#line 1785 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_29_29;
#line 1785 "typecheck.m"
            MR_Word check_hlds__typecheck__V_30_30;
#line 1785 "typecheck.m"
            MR_Word check_hlds__typecheck__V_31_31;
#line 1785 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_33_33;
#line 1785 "typecheck.m"
            MR_Word check_hlds__typecheck__V_32_32;

#line 1783 "typecheck.m"
            {
#line 1783 "typecheck.m"
              check_hlds__typecheck__TypeAssignSet_9 = check_hlds__typecheck_info__convert_args_type_assign_set_check_empty_args_1_f_0(check_hlds__typecheck__HeadVar__3_3);
            }
#line 1785 "typecheck.m"
            check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1785 "typecheck.m"
            check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1785 "typecheck.m"
            check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1785 "typecheck.m"
            check_hlds__typecheck__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 1785 "typecheck.m"
            check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 1785 "typecheck.m"
            check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 1785 "typecheck.m"
            check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 1785 "typecheck.m"
            check_hlds__typecheck__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 7)));
#line 1785 "typecheck.m"
            {
#line 1785 "typecheck.m"
              MR_Word base;
#line 1785 "typecheck.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1785 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_5 = base;
#line 1785 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 1785 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 1785 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 1785 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_29_29));
#line 1785 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_30_30));
#line 1785 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__typecheck__V_31_31));
#line 1785 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_9));
#line 1785 "typecheck.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (check_hlds__typecheck__V_33_33));
#line 1785 "typecheck.m"
            }
#line 1782 "typecheck.m"
          }
#line 1782 "typecheck.m"
        else
#line 1788 "typecheck.m"
          {
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssignSet1_18;
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_21_21;
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_22_22;
#line 1788 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_23_23;
#line 1788 "typecheck.m"
            MR_Word check_hlds__typecheck__ArgTypeAssignSet1_48;
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 0)));
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 1)));
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 2)));
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 4)));
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 5)));
#line 1789 "typecheck.m"
            MR_Word check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 6)));
#line 1789 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 7)));
#line 1789 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_4, (MR_Integer) 3)));
#line 1809 "typecheck.m"
            MR_Word check_hlds__typecheck__V_49_49;
#line 1809 "typecheck.m"
            MR_Word check_hlds__typecheck__V_50_50;

#line 1789 "typecheck.m"
            {
#line 1789 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1789 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (check_hlds__typecheck__V_34_34));
#line 1789 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (check_hlds__typecheck__V_35_35));
#line 1789 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (check_hlds__typecheck__V_36_36));
#line 1789 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (check_hlds__typecheck__ArgNum_2));
#line 1789 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (check_hlds__typecheck__V_38_38));
#line 1789 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (check_hlds__typecheck__V_39_39));
#line 1789 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) (check_hlds__typecheck__V_40_40));
#line 1789 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 1789 "typecheck.m"
            }
#line 1800 "typecheck.m"
            {
#line 1800 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_arg_type_2_4_p_0(check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__Var_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgTypeAssignSet1_48);
            }
#line 1803 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ArgTypeAssignSet1_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1803 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1803 "typecheck.m"
              {
#line 1804 "typecheck.m"
                check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1804 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1804 "typecheck.m"
                  {
#line 1804 "typecheck.m"
                    check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 1804 "typecheck.m"
                    check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 1804 "typecheck.m"
                  }
#line 1803 "typecheck.m"
              }
#line 1809 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1806 "typecheck.m"
              {
#line 1806 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_51;
#line 1806 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypeAssign_56;
#line 1806 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgTypeAssigns_57;
#line 1806 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssign_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, (MR_Integer) 0)));
#line 1806 "typecheck.m"
                MR_Word check_hlds__typecheck__Args0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, (MR_Integer) 1)));
#line 1806 "typecheck.m"
                MR_Word check_hlds__typecheck__Constraints_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, (MR_Integer) 2)));
#line 1806 "typecheck.m"
                MR_Word check_hlds__typecheck__Args_62;

#line 1821 "typecheck.m"
                if ((check_hlds__typecheck__Args0_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1822 "typecheck.m"
                  {
#line 1824 "typecheck.m"
                    {
#line 1824 "typecheck.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.skip_arg\'/2", (MR_String) "skip_arg");
#line 1824 "typecheck.m"
                      return;
                    }
#line 1822 "typecheck.m"
                  }
#line 1821 "typecheck.m"
                else
#line 1820 "typecheck.m"
                  {
#line 1820 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_59, (MR_Integer) 0)));

#line 1820 "typecheck.m"
                    check_hlds__typecheck__Args_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Args0_59, (MR_Integer) 1)));
#line 1820 "typecheck.m"
                  }
#line 1826 "typecheck.m"
                {
#line 1826 "typecheck.m"
                  check_hlds__typecheck__ArgTypeAssign_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1826 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_56, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_58));
#line 1826 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_56, 1) = ((MR_Box) (check_hlds__typecheck__Args_62));
#line 1826 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ArgTypeAssign_56, 2) = ((MR_Box) (check_hlds__typecheck__Constraints_60));
#line 1826 "typecheck.m"
                }
#line 1827 "typecheck.m"
                {
#line 1827 "typecheck.m"
                  check_hlds__typecheck__skip_arg_2_p_0(check_hlds__typecheck__V_50_50, &check_hlds__typecheck__ArgTypeAssigns_57);
                }
#line 1817 "typecheck.m"
                {
#line 1817 "typecheck.m"
                  check_hlds__typecheck__ArgTypeAssignSet1_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_18, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssign_56));
#line 1817 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__ArgTypeAssignSet1_18, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypeAssigns_57));
#line 1817 "typecheck.m"
                }
#line 1807 "typecheck.m"
                {
#line 1807 "typecheck.m"
                  check_hlds__typecheck__Spec_51 = check_hlds__typecheck_errors__report_error_arg_var_3_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_21_21, check_hlds__typecheck__Var_13, check_hlds__typecheck__HeadVar__3_3);
                }
#line 1808 "typecheck.m"
                {
#line 1808 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_51, check_hlds__typecheck__STATE_VARIABLE_Info_21_21, &check_hlds__typecheck__STATE_VARIABLE_Info_22_22);
                }
#line 1806 "typecheck.m"
              }
#line 1809 "typecheck.m"
            else
#line 1810 "typecheck.m"
              {
#line 1810 "typecheck.m"
                check_hlds__typecheck__ArgTypeAssignSet1_18 = check_hlds__typecheck__ArgTypeAssignSet1_48;
#line 1810 "typecheck.m"
                check_hlds__typecheck__STATE_VARIABLE_Info_22_22 = check_hlds__typecheck__STATE_VARIABLE_Info_21_21;
#line 1810 "typecheck.m"
              }
#line 1792 "typecheck.m"
            check_hlds__typecheck__V_23_23 = (check_hlds__typecheck__ArgNum_2 + (MR_Integer) 1);
#line 1792 "typecheck.m"
            /* direct tailcall eliminated */
#line 1792 "typecheck.m"
            {
#line 1792 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__Vars_14;
#line 1792 "typecheck.m"
              MR_Integer check_hlds__typecheck__ArgNum__tmp_copy_2 = check_hlds__typecheck__V_23_23;
#line 1792 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__3__tmp_copy_3 = check_hlds__typecheck__ArgTypeAssignSet1_18;
#line 1792 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_4 = check_hlds__typecheck__STATE_VARIABLE_Info_22_22;

#line 1792 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_0_4 = check_hlds__typecheck__STATE_VARIABLE_Info_0__tmp_copy_4;
#line 1792 "typecheck.m"
              check_hlds__typecheck__HeadVar__3_3 = check_hlds__typecheck__HeadVar__3__tmp_copy_3;
#line 1792 "typecheck.m"
              check_hlds__typecheck__ArgNum_2 = check_hlds__typecheck__ArgNum__tmp_copy_2;
#line 1792 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1792 "typecheck.m"
            }
#line 1792 "typecheck.m"
            continue;
#line 1788 "typecheck.m"
          }
#line 1782 "typecheck.m"
      }
#line 1782 "typecheck.m"
      break;
#line 1782 "typecheck.m"
    }
#line 1778 "typecheck.m"
}

#line 1732 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__rename_apart_7_p_0(
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__PredTypeVarSet_2,
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__PredExistQVars_3,
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__PredArgTypes_4,
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__PredConstraints_5,
#line 1732 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6,
#line 1732 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7)
#line 1732 "typecheck.m"
{
#line 1736 "typecheck.m"
  while (MR_TRUE)
#line 1736 "typecheck.m"
    {
#line 1736 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1736 "typecheck.m"
      {
#line 1736 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1736 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1736 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_7 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6;
#line 1736 "typecheck.m"
        else
#line 1738 "typecheck.m"
          {
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssigns0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign1_22;
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentArgTypes_23;
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__Renaming_24;
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentExistQVars_25;
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__ParentConstraints_26;
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypeParams0_27;
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypeParams_28;
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign_29;
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__NewArgTypeAssign_30;
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet0_42;
#line 1738 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeVarSet_43;

#line 1767 "typecheck.m"
            {
#line 1767 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_typevarset_2_p_0(check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeVarSet0_42);
            }
#line 1768 "typecheck.m"
            {
#line 1768 "typecheck.m"
              parse_tree__prog_data__tvarset_merge_renaming_4_p_0(check_hlds__typecheck__TypeVarSet0_42, check_hlds__typecheck__PredTypeVarSet_2, &check_hlds__typecheck__TypeVarSet_43, &check_hlds__typecheck__Renaming_24);
            }
#line 1769 "typecheck.m"
            {
#line 1769 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredArgTypes_4, &check_hlds__typecheck__ParentArgTypes_23);
            }
#line 1771 "typecheck.m"
            {
#line 1771 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_typevarset_3_p_0(check_hlds__typecheck__TypeVarSet_43, check_hlds__typecheck__TypeAssign0_15, &check_hlds__typecheck__TypeAssign1_22);
            }
#line 1742 "typecheck.m"
            {
#line 1742 "typecheck.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredExistQVars_3, &check_hlds__typecheck__ParentExistQVars_25);
            }
#line 1744 "typecheck.m"
            {
#line 1744 "typecheck.m"
              check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(check_hlds__typecheck__Renaming_24, check_hlds__typecheck__PredConstraints_5, &check_hlds__typecheck__ParentConstraints_26);
            }
#line 1750 "typecheck.m"
            {
#line 1750 "typecheck.m"
              check_hlds__typecheck_info__type_assign_get_head_type_params_2_p_0(check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__HeadTypeParams0_27);
            }
#line 1751 "typecheck.m"
            {
#line 1751 "typecheck.m"
              mercury__list__append_3_p_1((MR_Word) &check_hlds__typecheck_scalar_common_1[1], check_hlds__typecheck__ParentExistQVars_25, check_hlds__typecheck__HeadTypeParams0_27, &check_hlds__typecheck__HeadTypeParams_28);
            }
#line 1752 "typecheck.m"
            {
#line 1752 "typecheck.m"
              check_hlds__typecheck_info__type_assign_set_head_type_params_3_p_0(check_hlds__typecheck__HeadTypeParams_28, check_hlds__typecheck__TypeAssign1_22, &check_hlds__typecheck__TypeAssign_29);
            }
#line 1755 "typecheck.m"
            {
#line 1755 "typecheck.m"
              check_hlds__typecheck__NewArgTypeAssign_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1755 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 0) = ((MR_Box) (check_hlds__typecheck__TypeAssign_29));
#line 1755 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 1) = ((MR_Box) (check_hlds__typecheck__ParentArgTypes_23));
#line 1755 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__NewArgTypeAssign_30, 2) = ((MR_Box) (check_hlds__typecheck__ParentConstraints_26));
#line 1755 "typecheck.m"
            }
#line 1757 "typecheck.m"
            {
#line 1757 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1757 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 0) = ((MR_Box) (check_hlds__typecheck__NewArgTypeAssign_30));
#line 1757 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6));
#line 1757 "typecheck.m"
            }
#line 1758 "typecheck.m"
            /* direct tailcall eliminated */
#line 1758 "typecheck.m"
            {
#line 1758 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__TypeAssigns0_16;
#line 1758 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_33_33;

#line 1758 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgTypeAssigns_0__tmp_copy_6;
#line 1758 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1758 "typecheck.m"
            }
#line 1758 "typecheck.m"
            continue;
#line 1738 "typecheck.m"
          }
#line 1736 "typecheck.m"
      }
#line 1736 "typecheck.m"
      break;
#line 1736 "typecheck.m"
    }
#line 1732 "typecheck.m"
}

#line 1691 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__4_4,
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__5_5,
#line 1691 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6,
#line 1691 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7)
#line 1691 "typecheck.m"
{
#line 1695 "typecheck.m"
  while (MR_TRUE)
#line 1695 "typecheck.m"
    {
#line 1695 "typecheck.m"
      /* tailcall optimized into a loop */
#line 1695 "typecheck.m"
      {
#line 1695 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;

#line 1695 "typecheck.m"
        if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1696 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_7 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6;
#line 1695 "typecheck.m"
        else
#line 1698 "typecheck.m"
          {
#line 1698 "typecheck.m"
            MR_Word check_hlds__typecheck__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1698 "typecheck.m"
            MR_Word check_hlds__typecheck__PredIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1698 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_22;
#line 1698 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_23;
#line 1698 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_24;
#line 1698 "typecheck.m"
            MR_Word check_hlds__typecheck__PredArgTypes_25;
#line 1698 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_26;
#line 1698 "typecheck.m"
            MR_Word check_hlds__typecheck__TVarSet_27;
#line 1698 "typecheck.m"
            MR_Word check_hlds__typecheck__PredConstraints_28;
#line 1698 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;
#line 1699 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_22;

#line 1699 "typecheck.m"
            {
#line 1699 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__HeadVar__2_2, ((MR_Box) (check_hlds__typecheck__PredId_15)), &check_hlds__typecheck__conv0_PredInfo_22);
            }
#line 1699 "typecheck.m"
            check_hlds__typecheck__PredInfo_22 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_22);
#line 1700 "typecheck.m"
            {
#line 1700 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredTypeVarSet_23, &check_hlds__typecheck__PredExistQVars_24, &check_hlds__typecheck__PredArgTypes_25);
            }
#line 1702 "typecheck.m"
            {
#line 1702 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__PredClassContext_26);
            }
#line 1703 "typecheck.m"
            {
#line 1703 "typecheck.m"
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__typecheck__PredInfo_22, &check_hlds__typecheck__TVarSet_27);
            }
#line 1704 "typecheck.m"
            {
#line 1704 "typecheck.m"
              hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__HeadVar__3_3, check_hlds__typecheck__TVarSet_27, check_hlds__typecheck__HeadVar__4_4, check_hlds__typecheck__PredClassContext_26, &check_hlds__typecheck__PredConstraints_28);
            }
#line 1706 "typecheck.m"
            {
#line 1706 "typecheck.m"
              check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__HeadVar__5_5, check_hlds__typecheck__PredTypeVarSet_23, check_hlds__typecheck__PredExistQVars_24, check_hlds__typecheck__PredArgTypes_25, check_hlds__typecheck__PredConstraints_28, check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6, &check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31);
            }
#line 1708 "typecheck.m"
            /* direct tailcall eliminated */
#line 1708 "typecheck.m"
            {
#line 1708 "typecheck.m"
              MR_Word check_hlds__typecheck__HeadVar__1__tmp_copy_1 = check_hlds__typecheck__PredIds_16;
#line 1708 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_6 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_31_31;

#line 1708 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0_6 = check_hlds__typecheck__STATE_VARIABLE_ArgsTypeAssignSet_0__tmp_copy_6;
#line 1708 "typecheck.m"
              check_hlds__typecheck__HeadVar__1_1 = check_hlds__typecheck__HeadVar__1__tmp_copy_1;
#line 1708 "typecheck.m"
            }
#line 1708 "typecheck.m"
            continue;
#line 1698 "typecheck.m"
          }
#line 1695 "typecheck.m"
      }
#line 1695 "typecheck.m"
      break;
#line 1695 "typecheck.m"
    }
#line 1691 "typecheck.m"
}

#line 1667 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_overloaded_pred_6_p_0(
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__CallId_7,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__PredIdList_8,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_9,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_10,
#line 1667 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 1667 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21)
#line 1667 "typecheck.m"
{
#line 1671 "typecheck.m"
  {
#line 1671 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1671 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
#line 1671 "typecheck.m"
    MR_Word check_hlds__typecheck__Symbol_13;
#line 1671 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_14;
#line 1671 "typecheck.m"
    MR_Word check_hlds__typecheck__ClassTable_15;
#line 1671 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_16;
#line 1671 "typecheck.m"
    MR_Word check_hlds__typecheck__Preds_17;
#line 1671 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet0_18;
#line 1671 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgsTypeAssignSet_19;
#line 1671 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_22_22;
#line 1672 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 1672 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 1672 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 1672 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 1672 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
#line 1672 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 6)));
#line 1672 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 7)));
#line 1679 "typecheck.m"
    MR_Word check_hlds__typecheck__V_33_33;
#line 1679 "typecheck.m"
    MR_Word check_hlds__typecheck__V_34_34;
#line 1679 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_35_35;
#line 1679 "typecheck.m"
    MR_Word check_hlds__typecheck__V_36_36;
#line 1679 "typecheck.m"
    MR_Word check_hlds__typecheck__V_37_37;
#line 1679 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38;
#line 1679 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_39_39;
#line 1683 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 1683 "typecheck.m"
    MR_Word check_hlds__typecheck__V_41_41;
#line 1683 "typecheck.m"
    MR_Word check_hlds__typecheck__V_42_42;
#line 1683 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_43_43;
#line 1683 "typecheck.m"
    MR_Word check_hlds__typecheck__V_44_44;
#line 1683 "typecheck.m"
    MR_Word check_hlds__typecheck__V_45_45;
#line 1683 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_46_46;

#line 1673 "typecheck.m"
    {
#line 1673 "typecheck.m"
      check_hlds__typecheck__Symbol_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1673 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_13, 0) = ((MR_Box) (check_hlds__typecheck__CallId_7));
#line 1673 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__Symbol_13, 1) = ((MR_Box) (check_hlds__typecheck__PredIdList_8));
#line 1673 "typecheck.m"
    }
#line 1674 "typecheck.m"
    {
#line 1674 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_add_overloaded_symbol_4_p_0(check_hlds__typecheck__Symbol_13, check_hlds__typecheck__Context_12, check_hlds__typecheck__STATE_VARIABLE_Info_0_20, &check_hlds__typecheck__STATE_VARIABLE_Info_22_22);
    }
#line 1679 "typecheck.m"
    check_hlds__typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 0)));
#line 1679 "typecheck.m"
    check_hlds__typecheck__ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 1)));
#line 1679 "typecheck.m"
    check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 2)));
#line 1679 "typecheck.m"
    check_hlds__typecheck__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)));
#line 1679 "typecheck.m"
    check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 4)));
#line 1679 "typecheck.m"
    check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 5)));
#line 1679 "typecheck.m"
    check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 6)));
#line 1679 "typecheck.m"
    check_hlds__typecheck__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 7)));
#line 1680 "typecheck.m"
    {
#line 1680 "typecheck.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_14, &check_hlds__typecheck__ClassTable_15);
    }
#line 1681 "typecheck.m"
    {
#line 1681 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_14, &check_hlds__typecheck__PredicateTable_16);
    }
#line 1682 "typecheck.m"
    {
#line 1682 "typecheck.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_16, &check_hlds__typecheck__Preds_17);
    }
#line 1683 "typecheck.m"
    check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 0)));
#line 1683 "typecheck.m"
    check_hlds__typecheck__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 1)));
#line 1683 "typecheck.m"
    check_hlds__typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 2)));
#line 1683 "typecheck.m"
    check_hlds__typecheck__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)));
#line 1683 "typecheck.m"
    check_hlds__typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 4)));
#line 1683 "typecheck.m"
    check_hlds__typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 5)));
#line 1683 "typecheck.m"
    check_hlds__typecheck__TypeAssignSet0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 6)));
#line 1683 "typecheck.m"
    check_hlds__typecheck__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 7)));
#line 1684 "typecheck.m"
    {
#line 1684 "typecheck.m"
      check_hlds__typecheck__get_overloaded_pred_arg_types_7_p_0(check_hlds__typecheck__PredIdList_8, check_hlds__typecheck__Preds_17, check_hlds__typecheck__ClassTable_15, check_hlds__typecheck__GoalId_10, check_hlds__typecheck__TypeAssignSet0_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_19);
    }
#line 1689 "typecheck.m"
    {
#line 1689 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__Args_9, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_19, check_hlds__typecheck__STATE_VARIABLE_Info_22_22, check_hlds__typecheck__STATE_VARIABLE_Info_21);
#line 1689 "typecheck.m"
      return;
    }
#line 1671 "typecheck.m"
  }
#line 1667 "typecheck.m"
}

#line 1638 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_id_5_p_0(
#line 1638 "typecheck.m"
  MR_Word check_hlds__typecheck__PredId_6,
#line 1638 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_7,
#line 1638 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_8,
#line 1638 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_20,
#line 1638 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_21)
#line 1638 "typecheck.m"
{
#line 1641 "typecheck.m"
  {
#line 1641 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1641 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 1641 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_11;
#line 1641 "typecheck.m"
    MR_Word check_hlds__typecheck__Preds_12;
#line 1641 "typecheck.m"
    MR_Word check_hlds__typecheck__PredInfo_13;
#line 1641 "typecheck.m"
    MR_Word check_hlds__typecheck__PredTypeVarSet_14;
#line 1641 "typecheck.m"
    MR_Word check_hlds__typecheck__PredExistQVars_15;
#line 1641 "typecheck.m"
    MR_Word check_hlds__typecheck__PredArgTypes_16;
#line 1641 "typecheck.m"
    MR_Word check_hlds__typecheck__PredClassContext_17;
#line 1642 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 1642 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 1642 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 1642 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
#line 1642 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
#line 1642 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 6)));
#line 1642 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 7)));
#line 1645 "typecheck.m"
    MR_Box check_hlds__typecheck__conv0_PredInfo_13;
#line 1655 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 1655 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;

#line 1643 "typecheck.m"
    {
#line 1643 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_10, &check_hlds__typecheck__PredicateTable_11);
    }
#line 1644 "typecheck.m"
    {
#line 1644 "typecheck.m"
      hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_11, &check_hlds__typecheck__Preds_12);
    }
#line 1645 "typecheck.m"
    {
#line 1645 "typecheck.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_12, ((MR_Box) (check_hlds__typecheck__PredId_6)), &check_hlds__typecheck__conv0_PredInfo_13);
    }
#line 1645 "typecheck.m"
    check_hlds__typecheck__PredInfo_13 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_13);
#line 1646 "typecheck.m"
    {
#line 1646 "typecheck.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_13, &check_hlds__typecheck__PredTypeVarSet_14, &check_hlds__typecheck__PredExistQVars_15, &check_hlds__typecheck__PredArgTypes_16);
    }
#line 1648 "typecheck.m"
    {
#line 1648 "typecheck.m"
      hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_13, &check_hlds__typecheck__PredClassContext_17);
    }
#line 1655 "typecheck.m"
    {
#line 1655 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__PredTypeVarSet_14);
    }
#line 1655 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1655 "typecheck.m"
      {
#line 1656 "typecheck.m"
        check_hlds__typecheck__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_17, (MR_Integer) 0)));
#line 1656 "typecheck.m"
        check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_17, (MR_Integer) 1)));
#line 1656 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1655 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1656 "typecheck.m"
          check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1655 "typecheck.m"
      }
#line 1659 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1658 "typecheck.m"
      {
#line 1658 "typecheck.m"
        {
#line 1658 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(check_hlds__typecheck__Args_7, check_hlds__typecheck__PredArgTypes_16, (MR_Integer) 1, check_hlds__typecheck__STATE_VARIABLE_Info_0_20, check_hlds__typecheck__STATE_VARIABLE_Info_21);
#line 1658 "typecheck.m"
          return;
        }
#line 1658 "typecheck.m"
      }
#line 1659 "typecheck.m"
    else
#line 1660 "typecheck.m"
      {
#line 1660 "typecheck.m"
        MR_Word check_hlds__typecheck__ClassTable_18;
#line 1660 "typecheck.m"
        MR_Word check_hlds__typecheck__PredConstraints_19;
#line 1660 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet0_45;
#line 1660 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_46;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_50_50;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_51_51;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_52_52;
#line 1727 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_53_53;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_54_54;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_55_55;
#line 1727 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_56_56;

#line 1660 "typecheck.m"
        {
#line 1660 "typecheck.m"
          hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_10, &check_hlds__typecheck__ClassTable_18);
        }
#line 1661 "typecheck.m"
        {
#line 1661 "typecheck.m"
          hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_18, check_hlds__typecheck__PredTypeVarSet_14, check_hlds__typecheck__GoalId_8, check_hlds__typecheck__PredClassContext_17, &check_hlds__typecheck__PredConstraints_19);
        }
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 0)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 1)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 2)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 3)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 4)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 5)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__TypeAssignSet0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 6)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_20, (MR_Integer) 7)));
#line 1728 "typecheck.m"
        {
#line 1728 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__TypeAssignSet0_45, check_hlds__typecheck__PredTypeVarSet_14, check_hlds__typecheck__PredExistQVars_15, check_hlds__typecheck__PredArgTypes_16, check_hlds__typecheck__PredConstraints_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_46);
        }
#line 1730 "typecheck.m"
        {
#line 1730 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__Args_7, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_46, check_hlds__typecheck__STATE_VARIABLE_Info_0_20, check_hlds__typecheck__STATE_VARIABLE_Info_21);
#line 1730 "typecheck.m"
          return;
        }
#line 1660 "typecheck.m"
      }
#line 1641 "typecheck.m"
  }
#line 1638 "typecheck.m"
}

#line 1589 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_call_pred_6_p_0(
#line 1589 "typecheck.m"
  MR_Word check_hlds__typecheck__CallId_7,
#line 1589 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_8,
#line 1589 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalId_9,
#line 1589 "typecheck.m"
  MR_Word * check_hlds__typecheck__PredId_10,
#line 1589 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_25,
#line 1589 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_26)
#line 1589 "typecheck.m"
{
#line 1592 "typecheck.m"
  {
#line 1592 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__PredicateTable_13;
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__PorF_14;
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__SymName_15;
#line 1592 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity_16;
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMarkers_17;
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__IsFullyQualified_18;
#line 1592 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIds_19;
#line 1594 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 1594 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 1594 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 1594 "typecheck.m"
    MR_Word check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 1594 "typecheck.m"
    MR_Word check_hlds__typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 1594 "typecheck.m"
    MR_Word check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 1594 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));

#line 1595 "typecheck.m"
    {
#line 1595 "typecheck.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_12, &check_hlds__typecheck__PredicateTable_13);
    }
#line 1596 "typecheck.m"
    check_hlds__typecheck__PorF_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__CallId_7, (MR_Integer) 0)));
#line 1596 "typecheck.m"
    check_hlds__typecheck__SymName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__CallId_7, (MR_Integer) 1)));
#line 1596 "typecheck.m"
    check_hlds__typecheck__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__CallId_7, (MR_Integer) 2)));
#line 1597 "typecheck.m"
    {
#line 1597 "typecheck.m"
      check_hlds__typecheck_info__typecheck_info_get_pred_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_25, &check_hlds__typecheck__PredMarkers_17);
    }
#line 1598 "typecheck.m"
    {
#line 1598 "typecheck.m"
      check_hlds__typecheck__IsFullyQualified_18 = hlds__hlds_pred__calls_are_fully_qualified_1_f_0(check_hlds__typecheck__PredMarkers_17);
    }
#line 1599 "typecheck.m"
    {
#line 1599 "typecheck.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(check_hlds__typecheck__PredicateTable_13, check_hlds__typecheck__IsFullyQualified_18, check_hlds__typecheck__PorF_14, check_hlds__typecheck__SymName_15, check_hlds__typecheck__Arity_16, &check_hlds__typecheck__PredIds_19);
    }
#line 1606 "typecheck.m"
    if ((check_hlds__typecheck__PredIds_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1602 "typecheck.m"
      {
#line 1602 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_20;

#line 1603 "typecheck.m"
        {
#line 1603 "typecheck.m"
          *check_hlds__typecheck__PredId_10 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 1604 "typecheck.m"
        {
#line 1604 "typecheck.m"
          check_hlds__typecheck__Spec_20 = check_hlds__typecheck_errors__report_pred_call_error_2_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_25, check_hlds__typecheck__CallId_7);
        }
#line 1605 "typecheck.m"
        {
#line 1605 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_20, check_hlds__typecheck__STATE_VARIABLE_Info_0_25, check_hlds__typecheck__STATE_VARIABLE_Info_26);
#line 1605 "typecheck.m"
          return;
        }
#line 1602 "typecheck.m"
      }
#line 1606 "typecheck.m"
    else
#line 1607 "typecheck.m"
      {
#line 1607 "typecheck.m"
        MR_Word check_hlds__typecheck__HeadPredId_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_19, (MR_Integer) 0)));
#line 1607 "typecheck.m"
        MR_Word check_hlds__typecheck__TailPredIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__PredIds_19, (MR_Integer) 1)));
#line 1607 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_28_28;

#line 1615 "typecheck.m"
        if ((check_hlds__typecheck__TailPredIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1609 "typecheck.m"
          {
#line 1609 "typecheck.m"
            MR_Word check_hlds__typecheck__ModuleInfo_44;
#line 1609 "typecheck.m"
            MR_Word check_hlds__typecheck__PredicateTable_45;
#line 1609 "typecheck.m"
            MR_Word check_hlds__typecheck__Preds_46;
#line 1609 "typecheck.m"
            MR_Word check_hlds__typecheck__PredInfo_47;
#line 1609 "typecheck.m"
            MR_Word check_hlds__typecheck__PredTypeVarSet_48;
#line 1609 "typecheck.m"
            MR_Word check_hlds__typecheck__PredExistQVars_49;
#line 1609 "typecheck.m"
            MR_Word check_hlds__typecheck__PredArgTypes_50;
#line 1609 "typecheck.m"
            MR_Word check_hlds__typecheck__PredClassContext_51;
#line 1642 "typecheck.m"
            MR_Word check_hlds__typecheck__V_59_59;
#line 1642 "typecheck.m"
            MR_Word check_hlds__typecheck__V_60_60;
#line 1642 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_61_61;
#line 1642 "typecheck.m"
            MR_Word check_hlds__typecheck__V_62_62;
#line 1642 "typecheck.m"
            MR_Word check_hlds__typecheck__V_63_63;
#line 1642 "typecheck.m"
            MR_Word check_hlds__typecheck__V_64_64;
#line 1642 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_65_65;
#line 1645 "typecheck.m"
            MR_Box check_hlds__typecheck__conv0_PredInfo_47;
#line 1655 "typecheck.m"
            MR_Word check_hlds__typecheck__V_54_54;
#line 1655 "typecheck.m"
            MR_Word check_hlds__typecheck__V_55_55;

#line 1613 "typecheck.m"
            *check_hlds__typecheck__PredId_10 = check_hlds__typecheck__HeadPredId_21;
#line 1642 "typecheck.m"
            check_hlds__typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 1642 "typecheck.m"
            check_hlds__typecheck__ModuleInfo_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 1642 "typecheck.m"
            check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 1642 "typecheck.m"
            check_hlds__typecheck__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 1642 "typecheck.m"
            check_hlds__typecheck__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 1642 "typecheck.m"
            check_hlds__typecheck__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 1642 "typecheck.m"
            check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 1642 "typecheck.m"
            check_hlds__typecheck__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 1643 "typecheck.m"
            {
#line 1643 "typecheck.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(check_hlds__typecheck__ModuleInfo_44, &check_hlds__typecheck__PredicateTable_45);
            }
#line 1644 "typecheck.m"
            {
#line 1644 "typecheck.m"
              hlds__pred_table__predicate_table_get_preds_2_p_0(check_hlds__typecheck__PredicateTable_45, &check_hlds__typecheck__Preds_46);
            }
#line 1645 "typecheck.m"
            {
#line 1645 "typecheck.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, check_hlds__typecheck__Preds_46, ((MR_Box) (*check_hlds__typecheck__PredId_10)), &check_hlds__typecheck__conv0_PredInfo_47);
            }
#line 1645 "typecheck.m"
            check_hlds__typecheck__PredInfo_47 = ((MR_Word) check_hlds__typecheck__conv0_PredInfo_47);
#line 1646 "typecheck.m"
            {
#line 1646 "typecheck.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(check_hlds__typecheck__PredInfo_47, &check_hlds__typecheck__PredTypeVarSet_48, &check_hlds__typecheck__PredExistQVars_49, &check_hlds__typecheck__PredArgTypes_50);
            }
#line 1648 "typecheck.m"
            {
#line 1648 "typecheck.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(check_hlds__typecheck__PredInfo_47, &check_hlds__typecheck__PredClassContext_51);
            }
#line 1655 "typecheck.m"
            {
#line 1655 "typecheck.m"
              check_hlds__typecheck__succeeded = mercury__varset__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__typecheck__PredTypeVarSet_48);
            }
#line 1655 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1655 "typecheck.m"
              {
#line 1656 "typecheck.m"
                check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_51, (MR_Integer) 0)));
#line 1656 "typecheck.m"
                check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredClassContext_51, (MR_Integer) 1)));
#line 1656 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1655 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1656 "typecheck.m"
                  check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1655 "typecheck.m"
              }
#line 1659 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1658 "typecheck.m"
              {
#line 1658 "typecheck.m"
                {
#line 1658 "typecheck.m"
                  check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(check_hlds__typecheck__Args_8, check_hlds__typecheck__PredArgTypes_50, (MR_Integer) 1, check_hlds__typecheck__STATE_VARIABLE_Info_0_25, &check_hlds__typecheck__STATE_VARIABLE_Info_28_28);
                }
#line 1658 "typecheck.m"
              }
#line 1659 "typecheck.m"
            else
#line 1660 "typecheck.m"
              {
#line 1660 "typecheck.m"
                MR_Word check_hlds__typecheck__ClassTable_52;
#line 1660 "typecheck.m"
                MR_Word check_hlds__typecheck__PredConstraints_53;
#line 1660 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeAssignSet0_77;
#line 1660 "typecheck.m"
                MR_Word check_hlds__typecheck__ArgsTypeAssignSet_78;
#line 1727 "typecheck.m"
                MR_Word check_hlds__typecheck__V_82_82;
#line 1727 "typecheck.m"
                MR_Word check_hlds__typecheck__V_83_83;
#line 1727 "typecheck.m"
                MR_Word check_hlds__typecheck__V_84_84;
#line 1727 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_85_85;
#line 1727 "typecheck.m"
                MR_Word check_hlds__typecheck__V_86_86;
#line 1727 "typecheck.m"
                MR_Word check_hlds__typecheck__V_87_87;
#line 1727 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_88_88;

#line 1660 "typecheck.m"
                {
#line 1660 "typecheck.m"
                  hlds__hlds_module__module_info_get_class_table_2_p_0(check_hlds__typecheck__ModuleInfo_44, &check_hlds__typecheck__ClassTable_52);
                }
#line 1661 "typecheck.m"
                {
#line 1661 "typecheck.m"
                  hlds__hlds_data__make_body_hlds_constraints_5_p_0(check_hlds__typecheck__ClassTable_52, check_hlds__typecheck__PredTypeVarSet_48, check_hlds__typecheck__GoalId_9, check_hlds__typecheck__PredClassContext_51, &check_hlds__typecheck__PredConstraints_53);
                }
#line 1727 "typecheck.m"
                check_hlds__typecheck__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
#line 1727 "typecheck.m"
                check_hlds__typecheck__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
#line 1727 "typecheck.m"
                check_hlds__typecheck__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
#line 1727 "typecheck.m"
                check_hlds__typecheck__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
#line 1727 "typecheck.m"
                check_hlds__typecheck__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
#line 1727 "typecheck.m"
                check_hlds__typecheck__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
#line 1727 "typecheck.m"
                check_hlds__typecheck__TypeAssignSet0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
#line 1727 "typecheck.m"
                check_hlds__typecheck__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_25, (MR_Integer) 7)));
#line 1728 "typecheck.m"
                {
#line 1728 "typecheck.m"
                  check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__TypeAssignSet0_77, check_hlds__typecheck__PredTypeVarSet_48, check_hlds__typecheck__PredExistQVars_49, check_hlds__typecheck__PredArgTypes_50, check_hlds__typecheck__PredConstraints_53, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_78);
                }
#line 1730 "typecheck.m"
                {
#line 1730 "typecheck.m"
                  check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__Args_8, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_78, check_hlds__typecheck__STATE_VARIABLE_Info_0_25, &check_hlds__typecheck__STATE_VARIABLE_Info_28_28);
                }
#line 1660 "typecheck.m"
              }
#line 1609 "typecheck.m"
          }
#line 1615 "typecheck.m"
        else
#line 1616 "typecheck.m"
          {
#line 1617 "typecheck.m"
            {
#line 1617 "typecheck.m"
              check_hlds__typecheck__typecheck_call_overloaded_pred_6_p_0(check_hlds__typecheck__CallId_7, check_hlds__typecheck__PredIds_19, check_hlds__typecheck__Args_8, check_hlds__typecheck__GoalId_9, check_hlds__typecheck__STATE_VARIABLE_Info_0_25, &check_hlds__typecheck__STATE_VARIABLE_Info_28_28);
            }
#line 1626 "typecheck.m"
            {
#line 1626 "typecheck.m"
              *check_hlds__typecheck__PredId_10 = hlds__hlds_pred__invalid_pred_id_0_f_0();
            }
#line 1616 "typecheck.m"
          }
#line 1633 "typecheck.m"
        {
#line 1633 "typecheck.m"
          check_hlds__typeclasses__perform_context_reduction_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_28_28, check_hlds__typecheck__STATE_VARIABLE_Info_26);
#line 1633 "typecheck.m"
          return;
        }
#line 1607 "typecheck.m"
      }
#line 1592 "typecheck.m"
  }
#line 1589 "typecheck.m"
}

#line 1567 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_event_call_4_p_0(
#line 1567 "typecheck.m"
  MR_String check_hlds__typecheck__EventName_5,
#line 1567 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_6,
#line 1567 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_13,
#line 1567 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_14)
#line 1567 "typecheck.m"
{
#line 1570 "typecheck.m"
  {
#line 1570 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1570 "typecheck.m"
    MR_Word check_hlds__typecheck__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 1)));
#line 1570 "typecheck.m"
    MR_Word check_hlds__typecheck__EventSet_9;
#line 1570 "typecheck.m"
    MR_Word check_hlds__typecheck__EventSpecMap_10;
#line 1571 "typecheck.m"
    MR_Word check_hlds__typecheck__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 0)));
#line 1571 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 2)));
#line 1571 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 3)));
#line 1571 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 4)));
#line 1571 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 5)));
#line 1571 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 6)));
#line 1571 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_13, (MR_Integer) 7)));
#line 1573 "typecheck.m"
    MR_String check_hlds__typecheck__V_27_27;
#line 1582 "typecheck.m"
    MR_Word check_hlds__typecheck__EventArgTypes_11;

#line 1572 "typecheck.m"
    {
#line 1572 "typecheck.m"
      hlds__hlds_module__module_info_get_event_set_2_p_0(check_hlds__typecheck__ModuleInfo_8, &check_hlds__typecheck__EventSet_9);
    }
#line 1573 "typecheck.m"
    check_hlds__typecheck__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_9, (MR_Integer) 0)));
#line 1573 "typecheck.m"
    check_hlds__typecheck__EventSpecMap_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__EventSet_9, (MR_Integer) 1)));
#line 1574 "typecheck.m"
    {
#line 1574 "typecheck.m"
      check_hlds__typecheck__succeeded = parse_tree__prog_event__event_arg_types_3_p_0(check_hlds__typecheck__EventSpecMap_10, check_hlds__typecheck__EventName_5, &check_hlds__typecheck__EventArgTypes_11);
    }
#line 1582 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1577 "typecheck.m"
      {
#line 1575 "typecheck.m"
        {
#line 1575 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__Args_6, check_hlds__typecheck__EventArgTypes_11);
        }
#line 1577 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1576 "typecheck.m"
          {
#line 1576 "typecheck.m"
            {
#line 1576 "typecheck.m"
              check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(check_hlds__typecheck__Args_6, check_hlds__typecheck__EventArgTypes_11, (MR_Integer) 1, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
#line 1576 "typecheck.m"
              return;
            }
#line 1576 "typecheck.m"
          }
#line 1577 "typecheck.m"
        else
#line 1579 "typecheck.m"
          {
#line 1579 "typecheck.m"
            MR_Word check_hlds__typecheck__Spec_12;

#line 1578 "typecheck.m"
            {
#line 1578 "typecheck.m"
              check_hlds__typecheck__Spec_12 = check_hlds__typecheck_errors__report_event_args_mismatch_4_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__EventName_5, check_hlds__typecheck__EventArgTypes_11, check_hlds__typecheck__Args_6);
            }
#line 1580 "typecheck.m"
            {
#line 1580 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_12, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
#line 1580 "typecheck.m"
              return;
            }
#line 1579 "typecheck.m"
          }
#line 1577 "typecheck.m"
      }
#line 1582 "typecheck.m"
    else
#line 1583 "typecheck.m"
      {
#line 1583 "typecheck.m"
        MR_Word check_hlds__typecheck__Spec_19;

#line 1583 "typecheck.m"
        {
#line 1583 "typecheck.m"
          check_hlds__typecheck__Spec_19 = check_hlds__typecheck_errors__report_unknown_event_call_error_2_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__EventName_5);
        }
#line 1584 "typecheck.m"
        {
#line 1584 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_19, check_hlds__typecheck__STATE_VARIABLE_Info_0_13, check_hlds__typecheck__STATE_VARIABLE_Info_14);
#line 1584 "typecheck.m"
          return;
        }
#line 1583 "typecheck.m"
      }
#line 1570 "typecheck.m"
  }
#line 1567 "typecheck.m"
}

#line 1510 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_higher_order_call_5_p_0(
#line 1510 "typecheck.m"
  MR_Word check_hlds__typecheck__PredVar_6,
#line 1510 "typecheck.m"
  MR_Word check_hlds__typecheck__Purity_7,
#line 1510 "typecheck.m"
  MR_Word check_hlds__typecheck__Args_8,
#line 1510 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_16,
#line 1510 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_17)
#line 1510 "typecheck.m"
{
#line 1513 "typecheck.m"
  {
#line 1513 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_33;
#line 1513 "typecheck.m"
    MR_Integer check_hlds__typecheck__Arity_10;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet_11;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__PredVarType_12;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypes_13;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyConstraints_14;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__V_19_19;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__V_20_20;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeVarSet0_29;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgTypeVars_30;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet0_44;
#line 1513 "typecheck.m"
    MR_Word check_hlds__typecheck__ArgsTypeAssignSet_45;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__V_49_49;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__V_50_50;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__V_51_51;
#line 1727 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_52_52;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__V_53_53;
#line 1727 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 1727 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_55_55;

#line 1514 "typecheck.m"
    {
#line 1514 "typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_8, &check_hlds__typecheck__Arity_10);
    }
#line 1515 "typecheck.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 12808 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_17_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1536 "typecheck.m"
    {
#line 1536 "typecheck.m"
      mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_17_33, &check_hlds__typecheck__TypeVarSet0_29);
    }
#line 1537 "typecheck.m"
    {
#line 1537 "typecheck.m"
      mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_17_33, check_hlds__typecheck__Arity_10, &check_hlds__typecheck__ArgTypeVars_30, check_hlds__typecheck__TypeVarSet0_29, &check_hlds__typecheck__TypeVarSet_11);
    }
#line 1539 "typecheck.m"
    {
#line 1539 "typecheck.m"
      check_hlds__typecheck__V_31_31 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
    }
#line 1539 "typecheck.m"
    {
#line 1539 "typecheck.m"
      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_31_31, check_hlds__typecheck__ArgTypeVars_30, &check_hlds__typecheck__ArgTypes_13);
    }
#line 1540 "typecheck.m"
    {
#line 1540 "typecheck.m"
      parse_tree__prog_type__construct_higher_order_type_5_p_0(check_hlds__typecheck__Purity_7, (MR_Integer) 0, check_hlds__typecheck__ArgTypes_13, &check_hlds__typecheck__PredVarType_12);
    }
#line 1519 "typecheck.m"
    {
#line 1519 "typecheck.m"
      hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_14);
    }
#line 1521 "typecheck.m"
    {
#line 1521 "typecheck.m"
      check_hlds__typecheck__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1521 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_19_19, 0) = ((MR_Box) (check_hlds__typecheck__PredVar_6));
#line 1521 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_19_19, 1) = ((MR_Box) (check_hlds__typecheck__Args_8));
#line 1521 "typecheck.m"
    }
#line 1522 "typecheck.m"
    {
#line 1522 "typecheck.m"
      check_hlds__typecheck__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1522 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_20_20, 0) = ((MR_Box) (check_hlds__typecheck__PredVarType_12));
#line 1522 "typecheck.m"
      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_20_20, 1) = ((MR_Box) (check_hlds__typecheck__ArgTypes_13));
#line 1522 "typecheck.m"
    }
#line 1727 "typecheck.m"
    check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 1727 "typecheck.m"
    check_hlds__typecheck__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 1727 "typecheck.m"
    check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 1727 "typecheck.m"
    check_hlds__typecheck__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 1727 "typecheck.m"
    check_hlds__typecheck__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 1727 "typecheck.m"
    check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 1727 "typecheck.m"
    check_hlds__typecheck__TypeAssignSet0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 1727 "typecheck.m"
    check_hlds__typecheck__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 1728 "typecheck.m"
    {
#line 1728 "typecheck.m"
      check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__TypeAssignSet0_44, check_hlds__typecheck__TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__V_20_20, check_hlds__typecheck__EmptyConstraints_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_45);
    }
#line 1730 "typecheck.m"
    {
#line 1730 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__V_19_19, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_45, check_hlds__typecheck__STATE_VARIABLE_Info_0_16, check_hlds__typecheck__STATE_VARIABLE_Info_17);
#line 1730 "typecheck.m"
      return;
    }
#line 1513 "typecheck.m"
  }
#line 1510 "typecheck.m"
}

#line 1487 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_single_type_3_p_0(
#line 1487 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_4,
#line 1487 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_15,
#line 1487 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_16)
#line 1487 "typecheck.m"
{
#line 1492 "typecheck.m"
  {
#line 1492 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1492 "typecheck.m"
    if ((check_hlds__typecheck__Vars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1492 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_16 = check_hlds__typecheck__STATE_VARIABLE_Info_0_15;
#line 1492 "typecheck.m"
    else
#line 1494 "typecheck.m"
      {
#line 1494 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1494 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet0_8;
#line 1494 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVar_9;
#line 1494 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet_10;
#line 1494 "typecheck.m"
        MR_Word check_hlds__typecheck__Type_11;
#line 1494 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumVars_12;
#line 1494 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_13;
#line 1494 "typecheck.m"
        MR_Word check_hlds__typecheck__EmptyConstraints_14;
#line 1494 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet0_31;
#line 1494 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_32;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_36_36;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_38_38;
#line 1727 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_39_39;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_40_40;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_41_41;
#line 1727 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_42_42;

#line 1498 "typecheck.m"
        {
#line 1498 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_20_20, &check_hlds__typecheck__TypeVarSet0_8);
        }
#line 1499 "typecheck.m"
        {
#line 1499 "typecheck.m"
          mercury__varset__new_var_3_p_0(check_hlds__typecheck__TypeCtorInfo_20_20, &check_hlds__typecheck__TypeVar_9, check_hlds__typecheck__TypeVarSet0_8, &check_hlds__typecheck__TypeVarSet_10);
        }
#line 1500 "typecheck.m"
        {
#line 1500 "typecheck.m"
          check_hlds__typecheck__Type_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1500 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_11, 0) = ((MR_Box) (check_hlds__typecheck__TypeVar_9));
#line 1500 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__Type_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1500 "typecheck.m"
        }
#line 1501 "typecheck.m"
        {
#line 1501 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_4, &check_hlds__typecheck__NumVars_12);
        }
#line 1502 "typecheck.m"
        {
#line 1502 "typecheck.m"
          mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__typecheck__NumVars_12, ((MR_Box) (check_hlds__typecheck__Type_11)), &check_hlds__typecheck__Types_13);
        }
#line 1503 "typecheck.m"
        {
#line 1503 "typecheck.m"
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_14);
        }
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 0)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 1)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 2)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 3)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 4)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 5)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__TypeAssignSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 6)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_15, (MR_Integer) 7)));
#line 1728 "typecheck.m"
        {
#line 1728 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__TypeAssignSet0_31, check_hlds__typecheck__TypeVarSet_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_13, check_hlds__typecheck__EmptyConstraints_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_32);
        }
#line 1730 "typecheck.m"
        {
#line 1730 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__Vars_4, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_32, check_hlds__typecheck__STATE_VARIABLE_Info_0_15, check_hlds__typecheck__STATE_VARIABLE_Info_16);
#line 1730 "typecheck.m"
          return;
        }
#line 1494 "typecheck.m"
      }
#line 1492 "typecheck.m"
  }
#line 1487 "typecheck.m"
}

#line 1465 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(
#line 1465 "typecheck.m"
  MR_Word check_hlds__typecheck__Vars_4,
#line 1465 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_14,
#line 1465 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_15)
#line 1465 "typecheck.m"
{
#line 1470 "typecheck.m"
  {
#line 1470 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1470 "typecheck.m"
    if ((check_hlds__typecheck__Vars_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1470 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Info_15 = check_hlds__typecheck__STATE_VARIABLE_Info_0_14;
#line 1470 "typecheck.m"
    else
#line 1472 "typecheck.m"
      {
#line 1472 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_20_20;
#line 1472 "typecheck.m"
        MR_Integer check_hlds__typecheck__NumVars_8;
#line 1472 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet0_9;
#line 1472 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVars_10;
#line 1472 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeVarSet_11;
#line 1472 "typecheck.m"
        MR_Word check_hlds__typecheck__Types_12;
#line 1472 "typecheck.m"
        MR_Word check_hlds__typecheck__EmptyConstraints_13;
#line 1472 "typecheck.m"
        MR_Word check_hlds__typecheck__V_16_16;
#line 1472 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeAssignSet0_31;
#line 1472 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgsTypeAssignSet_32;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_36_36;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_37_37;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_38_38;
#line 1727 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_39_39;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_40_40;
#line 1727 "typecheck.m"
        MR_Word check_hlds__typecheck__V_41_41;
#line 1727 "typecheck.m"
        MR_Integer check_hlds__typecheck__V_42_42;

#line 1476 "typecheck.m"
        {
#line 1476 "typecheck.m"
          mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Vars_4, &check_hlds__typecheck__NumVars_8);
        }
#line 13086 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 1477 "typecheck.m"
        {
#line 1477 "typecheck.m"
          mercury__varset__init_1_p_0(check_hlds__typecheck__TypeCtorInfo_20_20, &check_hlds__typecheck__TypeVarSet0_9);
        }
#line 1478 "typecheck.m"
        {
#line 1478 "typecheck.m"
          mercury__varset__new_vars_4_p_0(check_hlds__typecheck__TypeCtorInfo_20_20, check_hlds__typecheck__NumVars_8, &check_hlds__typecheck__TypeVars_10, check_hlds__typecheck__TypeVarSet0_9, &check_hlds__typecheck__TypeVarSet_11);
        }
#line 1479 "typecheck.m"
        {
#line 1479 "typecheck.m"
          check_hlds__typecheck__V_16_16 = mercury__map__init_0_f_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 1479 "typecheck.m"
        {
#line 1479 "typecheck.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__V_16_16, check_hlds__typecheck__TypeVars_10, &check_hlds__typecheck__Types_12);
        }
#line 1480 "typecheck.m"
        {
#line 1480 "typecheck.m"
          hlds__hlds_data__empty_hlds_constraints_1_p_0(&check_hlds__typecheck__EmptyConstraints_13);
        }
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 0)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 1)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 2)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 3)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 4)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 5)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__TypeAssignSet0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 6)));
#line 1727 "typecheck.m"
        check_hlds__typecheck__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_14, (MR_Integer) 7)));
#line 1728 "typecheck.m"
        {
#line 1728 "typecheck.m"
          check_hlds__typecheck__rename_apart_7_p_0(check_hlds__typecheck__TypeAssignSet0_31, check_hlds__typecheck__TypeVarSet_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__typecheck__Types_12, check_hlds__typecheck__EmptyConstraints_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ArgsTypeAssignSet_32);
        }
#line 1730 "typecheck.m"
        {
#line 1730 "typecheck.m"
          check_hlds__typecheck__typecheck_var_has_arg_type_list_5_p_0(check_hlds__typecheck__Vars_4, (MR_Integer) 1, check_hlds__typecheck__ArgsTypeAssignSet_32, check_hlds__typecheck__STATE_VARIABLE_Info_0_14, check_hlds__typecheck__STATE_VARIABLE_Info_15);
#line 1730 "typecheck.m"
          return;
        }
#line 1472 "typecheck.m"
      }
#line 1470 "typecheck.m"
  }
#line 1465 "typecheck.m"
}

#line 1453 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_list_4_p_0(
#line 1453 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 1453 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__2_2,
#line 1453 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_3,
#line 1453 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_4)
#line 1453 "typecheck.m"
{
#line 1456 "typecheck.m"
  {
#line 1456 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1456 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1456 "typecheck.m"
      {
#line 1456 "typecheck.m"
        *check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1456 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_4 = check_hlds__typecheck__STATE_VARIABLE_Info_0_3;
#line 1456 "typecheck.m"
      }
#line 1456 "typecheck.m"
    else
#line 1457 "typecheck.m"
      {
#line 1457 "typecheck.m"
        MR_Word check_hlds__typecheck__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1457 "typecheck.m"
        MR_Word check_hlds__typecheck__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1457 "typecheck.m"
        MR_Word check_hlds__typecheck__Goal_10;
#line 1457 "typecheck.m"
        MR_Word check_hlds__typecheck__Goals_11;
#line 1457 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_15_15;

#line 1458 "typecheck.m"
        {
#line 1458 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Goal0_8, &check_hlds__typecheck__Goal_10, check_hlds__typecheck__STATE_VARIABLE_Info_0_3, &check_hlds__typecheck__STATE_VARIABLE_Info_15_15);
        }
#line 1459 "typecheck.m"
        {
#line 1459 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_list_4_p_0(check_hlds__typecheck__Goals0_9, &check_hlds__typecheck__Goals_11, check_hlds__typecheck__STATE_VARIABLE_Info_15_15, check_hlds__typecheck__STATE_VARIABLE_Info_4);
        }
#line 1457 "typecheck.m"
        {
#line 1457 "typecheck.m"
          MR_Word base;
#line 1457 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "typecheck.m"
          *check_hlds__typecheck__HeadVar__2_2 = base;
#line 1457 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Goal_10));
#line 1457 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Goals_11));
#line 1457 "typecheck.m"
        }
#line 1457 "typecheck.m"
      }
#line 1456 "typecheck.m"
  }
#line 1453 "typecheck.m"
}

#line 1444 "typecheck.m"
static MR_Word MR_CALL 
check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(
#line 1444 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1)
#line 1444 "typecheck.m"
{
#line 1447 "typecheck.m"
  {
#line 1447 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1447 "typecheck.m"
    MR_Word check_hlds__typecheck__HeadVar__2_2;

#line 1447 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1447 "typecheck.m"
      check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1447 "typecheck.m"
    else
#line 1448 "typecheck.m"
      {
#line 1448 "typecheck.m"
        MR_Word check_hlds__typecheck__I_3;
#line 1448 "typecheck.m"
        MR_Word check_hlds__typecheck__O_4;
#line 1448 "typecheck.m"
        MR_Word check_hlds__typecheck__Interfaces_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 1448 "typecheck.m"
        MR_Word check_hlds__typecheck__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 1448 "typecheck.m"
        MR_Word check_hlds__typecheck__V_7_7;
#line 1448 "typecheck.m"
        MR_Word check_hlds__typecheck__V_8_8;

#line 1448 "typecheck.m"
        check_hlds__typecheck__I_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 0)));
#line 1448 "typecheck.m"
        check_hlds__typecheck__O_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_6_6, (MR_Integer) 1)));
#line 1449 "typecheck.m"
        {
#line 1449 "typecheck.m"
          check_hlds__typecheck__V_8_8 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(check_hlds__typecheck__Interfaces_5);
        }
#line 1449 "typecheck.m"
        {
#line 1449 "typecheck.m"
          check_hlds__typecheck__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 0) = ((MR_Box) (check_hlds__typecheck__O_4));
#line 1449 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_7_7, 1) = ((MR_Box) (check_hlds__typecheck__V_8_8));
#line 1449 "typecheck.m"
        }
#line 1449 "typecheck.m"
        {
#line 1449 "typecheck.m"
          check_hlds__typecheck__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1449 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__typecheck__I_3));
#line 1449 "typecheck.m"
          MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__typecheck__V_7_7));
#line 1449 "typecheck.m"
        }
#line 1448 "typecheck.m"
      }
#line 1447 "typecheck.m"
    return check_hlds__typecheck__HeadVar__2_2;
#line 1447 "typecheck.m"
  }
#line 1444 "typecheck.m"
}

#line 1421 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_3(
#line 1421 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg)
#line 1421 "typecheck.m"
{
#line 1421 "typecheck.m"
  {
#line 1421 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1421 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;

#line 1421 "typecheck.m"
    {
#line 1421 "typecheck.m"
      return check_hlds__typecheck__succeeded = check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1421__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__closure, (MR_Integer) 4))));
    }
#line 1421 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 1421 "typecheck.m"
  }
#line 1421 "typecheck.m"
}

#line 1418 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_2(
#line 1418 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1418 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1,
#line 1418 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_2,
#line 1418 "typecheck.m"
  MR_Box * check_hlds__typecheck__wrapper_arg_3)
#line 1418 "typecheck.m"
{
#line 1418 "typecheck.m"
  {
#line 1418 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 1418 "typecheck.m"
    MR_Word check_hlds__typecheck__conv1_HeadVar__3_135;

#line 1418 "typecheck.m"
    {
#line 1418 "typecheck.m"
      check_hlds__typecheck__IntroducedFrom__pred__typecheck_goal_2__1418__1_3_p_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1), ((MR_Word) check_hlds__typecheck__wrapper_arg_2), &check_hlds__typecheck__conv1_HeadVar__3_135);
    }
#line 1418 "typecheck.m"
    *check_hlds__typecheck__wrapper_arg_3 = ((MR_Box) (check_hlds__typecheck__conv1_HeadVar__3_135));
#line 1418 "typecheck.m"
  }
#line 1418 "typecheck.m"
}

#line 1376 "typecheck.m"
static MR_Box MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0_1(
#line 1376 "typecheck.m"
  MR_Box check_hlds__typecheck__closure_arg,
#line 1376 "typecheck.m"
  MR_Box check_hlds__typecheck__wrapper_arg_1)
#line 1376 "typecheck.m"
{
#line 1376 "typecheck.m"
  {
#line 1376 "typecheck.m"
    MR_Box check_hlds__typecheck__wrapper_arg_2;
#line 1376 "typecheck.m"
    MR_Box check_hlds__typecheck__closure = check_hlds__typecheck__closure_arg;
#line 1376 "typecheck.m"
    MR_Word check_hlds__typecheck__conv0_HeadVar__2_2;

#line 1376 "typecheck.m"
    {
#line 1376 "typecheck.m"
      check_hlds__typecheck__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) check_hlds__typecheck__wrapper_arg_1));
    }
#line 1376 "typecheck.m"
    check_hlds__typecheck__wrapper_arg_2 = ((MR_Box) (check_hlds__typecheck__conv0_HeadVar__2_2));
#line 1376 "typecheck.m"
    return check_hlds__typecheck__wrapper_arg_2;
#line 1376 "typecheck.m"
  }
#line 1376 "typecheck.m"
}

#line 1245 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_2_5_p_0(
#line 1245 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalExpr0_6,
#line 1245 "typecheck.m"
  MR_Word * check_hlds__typecheck__GoalExpr_7,
#line 1245 "typecheck.m"
  MR_Word check_hlds__typecheck__GoalInfo_8,
#line 1245 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_105,
#line 1245 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_106)
#line 1245 "typecheck.m"
{
#line 1250 "typecheck.m"
  {
#line 1250 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1250 "typecheck.m"
    if (((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 0))))
#line 1280 "typecheck.m"
      {
#line 1280 "typecheck.m"
        MR_Word check_hlds__typecheck__SubGoal0_21 = (MR_Word) MR_body(((MR_Word) check_hlds__typecheck__GoalExpr0_6), (MR_Integer) 0);
#line 1280 "typecheck.m"
        MR_Word check_hlds__typecheck__SubGoal_22;

#line 1284 "typecheck.m"
        {
#line 1284 "typecheck.m"
          check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__SubGoal0_21, &check_hlds__typecheck__SubGoal_22, check_hlds__typecheck__STATE_VARIABLE_Info_0_105, check_hlds__typecheck__STATE_VARIABLE_Info_106);
        }
#line 1285 "typecheck.m"
        *check_hlds__typecheck__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__typecheck__SubGoal_22);
#line 1280 "typecheck.m"
      }
#line 1250 "typecheck.m"
    else
#line 1250 "typecheck.m"
      if (((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 2))))
#line 1317 "typecheck.m"
        {
#line 1317 "typecheck.m"
          MR_Integer check_hlds__typecheck__ProcId_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__Args_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__BI_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 3)));
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__UC_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 4)));
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__Name_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 5)));
#line 1317 "typecheck.m"
          MR_Integer check_hlds__typecheck__Arity_48;
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__CurCall_49;
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__GoalId_50;
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__PredId_51;
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__V_176_176;
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_177_177;
#line 1317 "typecheck.m"
          MR_Word check_hlds__typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)));

#line 1321 "typecheck.m"
          {
#line 1321 "typecheck.m"
            mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], check_hlds__typecheck__Args_44, &check_hlds__typecheck__Arity_48);
          }
#line 1322 "typecheck.m"
          {
#line 1322 "typecheck.m"
            check_hlds__typecheck__CurCall_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__CurCall_49, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1322 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__CurCall_49, 1) = ((MR_Box) (check_hlds__typecheck__Name_47));
#line 1322 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__CurCall_49, 2) = ((MR_Box) (check_hlds__typecheck__Arity_48));
#line 1322 "typecheck.m"
          }
#line 1323 "typecheck.m"
          {
#line 1323 "typecheck.m"
            check_hlds__typecheck__V_176_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1323 "typecheck.m"
            MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_176_176, 0) = ((MR_Box) (check_hlds__typecheck__CurCall_49));
#line 1323 "typecheck.m"
          }
#line 1323 "typecheck.m"
          {
#line 1323 "typecheck.m"
            check_hlds__typecheck_info__typecheck_info_set_called_predid_3_p_0(check_hlds__typecheck__V_176_176, check_hlds__typecheck__STATE_VARIABLE_Info_0_105, &check_hlds__typecheck__STATE_VARIABLE_Info_177_177);
          }
#line 1324 "typecheck.m"
          {
#line 1324 "typecheck.m"
            check_hlds__typecheck__GoalId_50 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_8);
          }
#line 1325 "typecheck.m"
          {
#line 1325 "typecheck.m"
            check_hlds__typecheck__typecheck_call_pred_6_p_0(check_hlds__typecheck__CurCall_49, check_hlds__typecheck__Args_44, check_hlds__typecheck__GoalId_50, &check_hlds__typecheck__PredId_51, check_hlds__typecheck__STATE_VARIABLE_Info_177_177, check_hlds__typecheck__STATE_VARIABLE_Info_106);
          }
#line 1326 "typecheck.m"
          {
#line 1326 "typecheck.m"
            MR_Word base;
#line 1326 "typecheck.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1326 "typecheck.m"
            *check_hlds__typecheck__GoalExpr_7 = base;
#line 1326 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__typecheck__PredId_51));
#line 1326 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__typecheck__ProcId_43));
#line 1326 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__typecheck__Args_44));
#line 1326 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (check_hlds__typecheck__BI_45));
#line 1326 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (check_hlds__typecheck__UC_46));
#line 1326 "typecheck.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (check_hlds__typecheck__Name_47));
#line 1326 "typecheck.m"
          }
#line 1317 "typecheck.m"
        }
#line 1250 "typecheck.m"
      else
#line 1250 "typecheck.m"
        if (((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 1))))
#line 1357 "typecheck.m"
          {
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__LHS_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)));
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__RHS0_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__UnifyMode_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__Unification_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 3)));
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__UnifyContext_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 4)));
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__RHS_73;
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_158_158;
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalId_219;
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_105, (MR_Integer) 0)));
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_105, (MR_Integer) 1)));
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_105, (MR_Integer) 2)));
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_105, (MR_Integer) 4)));
#line 1357 "typecheck.m"
            MR_Word check_hlds__typecheck__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_105, (MR_Integer) 6)));
#line 1357 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_248_248 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_105, (MR_Integer) 7)));
#line 1361 "typecheck.m"
            MR_Integer check_hlds__typecheck__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_105, (MR_Integer) 3)));
#line 1361 "typecheck.m"
            MR_Word check_hlds__typecheck__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_105, (MR_Integer) 5)));

#line 1362 "typecheck.m"
            {
#line 1362 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_158_158 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_158_158, 0) = ((MR_Box) (check_hlds__typecheck__V_241_241));
#line 1362 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_158_158, 1) = ((MR_Box) (check_hlds__typecheck__V_242_242));
#line 1362 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_158_158, 2) = ((MR_Box) (check_hlds__typecheck__V_243_243));
#line 1362 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_158_158, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1362 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_158_158, 4) = ((MR_Box) (check_hlds__typecheck__V_245_245));
#line 1362 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_158_158, 5) = ((MR_Box) (check_hlds__typecheck__UnifyContext_72));
#line 1362 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_158_158, 6) = ((MR_Box) (check_hlds__typecheck__V_247_247));
#line 1362 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_158_158, 7) = ((MR_Box) (check_hlds__typecheck__V_248_248));
#line 1362 "typecheck.m"
            }
#line 1363 "typecheck.m"
            {
#line 1363 "typecheck.m"
              check_hlds__typecheck__GoalId_219 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_8);
            }
#line 1364 "typecheck.m"
            {
#line 1364 "typecheck.m"
              check_hlds__typecheck__typecheck_unification_6_p_0(check_hlds__typecheck__LHS_68, check_hlds__typecheck__RHS0_69, &check_hlds__typecheck__RHS_73, check_hlds__typecheck__GoalId_219, check_hlds__typecheck__STATE_VARIABLE_Info_158_158, check_hlds__typecheck__STATE_VARIABLE_Info_106);
            }
#line 1365 "typecheck.m"
            {
#line 1365 "typecheck.m"
              MR_Word base;
#line 1365 "typecheck.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "typecheck.m"
              *check_hlds__typecheck__GoalExpr_7 = base;
#line 1365 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__LHS_68));
#line 1365 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__RHS_73));
#line 1365 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (check_hlds__typecheck__UnifyMode_70));
#line 1365 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (check_hlds__typecheck__Unification_71));
#line 1365 "typecheck.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (check_hlds__typecheck__UnifyContext_72));
#line 1365 "typecheck.m"
            }
#line 1357 "typecheck.m"
          }
#line 1250 "typecheck.m"
        else
#line 1250 "typecheck.m"
          if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1370 "typecheck.m"
            {
#line 1370 "typecheck.m"
              MR_Word check_hlds__typecheck__ArgVars_82;
#line 1370 "typecheck.m"
              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_148_148;
#line 1370 "typecheck.m"
              MR_Word check_hlds__typecheck__Args_220 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 4)));
#line 1370 "typecheck.m"
              MR_Word check_hlds__typecheck__GoalId_221;
#line 1370 "typecheck.m"
              MR_Word check_hlds__typecheck__PredId_222 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1370 "typecheck.m"
              MR_Word check_hlds__typecheck__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1370 "typecheck.m"
              MR_Integer check_hlds__typecheck__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 3)));
#line 1370 "typecheck.m"
              MR_Word check_hlds__typecheck__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 5)));
#line 1370 "typecheck.m"
              MR_Word check_hlds__typecheck__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 6)));
#line 1370 "typecheck.m"
              MR_Word check_hlds__typecheck__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 7)));

#line 1376 "typecheck.m"
              {
#line 1376 "typecheck.m"
                check_hlds__typecheck__ArgVars_82 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_scalar_common_2[1], check_hlds__typecheck__Args_220);
              }
#line 1377 "typecheck.m"
              {
#line 1377 "typecheck.m"
                check_hlds__typecheck__GoalId_221 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__typecheck__GoalInfo_8);
              }
#line 1378 "typecheck.m"
              {
#line 1378 "typecheck.m"
                check_hlds__typecheck__typecheck_call_pred_id_5_p_0(check_hlds__typecheck__PredId_222, check_hlds__typecheck__ArgVars_82, check_hlds__typecheck__GoalId_221, check_hlds__typecheck__STATE_VARIABLE_Info_0_105, &check_hlds__typecheck__STATE_VARIABLE_Info_148_148);
              }
#line 1379 "typecheck.m"
              {
#line 1379 "typecheck.m"
                check_hlds__typeclasses__perform_context_reduction_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_148_148, check_hlds__typecheck__STATE_VARIABLE_Info_106);
              }
#line 1380 "typecheck.m"
              *check_hlds__typecheck__GoalExpr_7 = check_hlds__typecheck__GoalExpr0_6;
#line 1370 "typecheck.m"
            }
#line 1250 "typecheck.m"
          else
#line 1250 "typecheck.m"
            if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1250 "typecheck.m"
              {
#line 1250 "typecheck.m"
                MR_Word check_hlds__typecheck__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1250 "typecheck.m"
                MR_Word check_hlds__typecheck__List0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1250 "typecheck.m"
                MR_Word check_hlds__typecheck__List_13;

#line 1254 "typecheck.m"
                {
#line 1254 "typecheck.m"
                  check_hlds__typecheck__typecheck_goal_list_4_p_0(check_hlds__typecheck__List0_11, &check_hlds__typecheck__List_13, check_hlds__typecheck__STATE_VARIABLE_Info_0_105, check_hlds__typecheck__STATE_VARIABLE_Info_106);
                }
#line 1255 "typecheck.m"
                {
#line 1255 "typecheck.m"
                  MR_Word base;
#line 1255 "typecheck.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1255 "typecheck.m"
                  *check_hlds__typecheck__GoalExpr_7 = base;
#line 1255 "typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1255 "typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ConjType_10));
#line 1255 "typecheck.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__List_13));
#line 1255 "typecheck.m"
                }
#line 1250 "typecheck.m"
              }
#line 1250 "typecheck.m"
            else
#line 1250 "typecheck.m"
              if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1257 "typecheck.m"
                {
#line 1257 "typecheck.m"
                  MR_Word check_hlds__typecheck__List0_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1257 "typecheck.m"
                  MR_Word check_hlds__typecheck__List_212;

#line 1261 "typecheck.m"
                  {
#line 1261 "typecheck.m"
                    check_hlds__typecheck__typecheck_goal_list_4_p_0(check_hlds__typecheck__List0_211, &check_hlds__typecheck__List_212, check_hlds__typecheck__STATE_VARIABLE_Info_0_105, check_hlds__typecheck__STATE_VARIABLE_Info_106);
                  }
#line 1262 "typecheck.m"
                  {
#line 1262 "typecheck.m"
                    MR_Word base;
#line 1262 "typecheck.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "typecheck.m"
                    *check_hlds__typecheck__GoalExpr_7 = base;
#line 1262 "typecheck.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1262 "typecheck.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__List_212));
#line 1262 "typecheck.m"
                  }
#line 1257 "typecheck.m"
                }
#line 1250 "typecheck.m"
              else
#line 1250 "typecheck.m"
                if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1329 "typecheck.m"
                  {
#line 1329 "typecheck.m"
                    MR_Word check_hlds__typecheck__GenericCall0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1329 "typecheck.m"
                    MR_Word check_hlds__typecheck__Modes_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 3)));
#line 1329 "typecheck.m"
                    MR_Word check_hlds__typecheck__MaybeArgRegs_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 4)));
#line 1329 "typecheck.m"
                    MR_Word check_hlds__typecheck__Detism_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 5)));
#line 1329 "typecheck.m"
                    MR_Word check_hlds__typecheck__CallId_56;
#line 1329 "typecheck.m"
                    MR_Word check_hlds__typecheck__GenericCall_61;
#line 1329 "typecheck.m"
                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_160_160;
#line 1329 "typecheck.m"
                    MR_Word check_hlds__typecheck__Args_218 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));

#line 1330 "typecheck.m"
                    {
#line 1330 "typecheck.m"
                      hlds__hlds_goal__generic_call_id_2_p_0(check_hlds__typecheck__GenericCall0_52, &check_hlds__typecheck__CallId_56);
                    }
#line 1331 "typecheck.m"
                    {
#line 1331 "typecheck.m"
                      check_hlds__typecheck_info__typecheck_info_set_called_predid_3_p_0(check_hlds__typecheck__CallId_56, check_hlds__typecheck__STATE_VARIABLE_Info_0_105, &check_hlds__typecheck__STATE_VARIABLE_Info_160_160);
                    }
#line 1339 "typecheck.m"
                    if (((MR_tag((MR_Word) check_hlds__typecheck__GenericCall0_52)) == (MR_mktag((MR_Integer) 3))))
#line 1350 "typecheck.m"
                      {
#line 1353 "typecheck.m"
                        check_hlds__typecheck__GenericCall_61 = check_hlds__typecheck__GenericCall0_52;
#line 1353 "typecheck.m"
                        *check_hlds__typecheck__STATE_VARIABLE_Info_106 = check_hlds__typecheck__STATE_VARIABLE_Info_160_160;
#line 1350 "typecheck.m"
                      }
#line 1339 "typecheck.m"
                    else
#line 1339 "typecheck.m"
                      if (((MR_tag((MR_Word) check_hlds__typecheck__GenericCall0_52)) == (MR_mktag((MR_Integer) 1))))
#line 1340 "typecheck.m"
                        {
#line 1341 "typecheck.m"
                          {
#line 1341 "typecheck.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_2\'/5", (MR_String) "unexpected class method call");
#line 1341 "typecheck.m"
                            return;
                          }
#line 1340 "typecheck.m"
                        }
#line 1339 "typecheck.m"
                      else
#line 1339 "typecheck.m"
                        if (((MR_tag((MR_Word) check_hlds__typecheck__GenericCall0_52)) == (MR_mktag((MR_Integer) 2))))
#line 1343 "typecheck.m"
                          {
#line 1343 "typecheck.m"
                            MR_String check_hlds__typecheck__EventName_66 = ((MR_String) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__GenericCall0_52, (MR_Integer) 0)));

#line 1344 "typecheck.m"
                            check_hlds__typecheck__GenericCall_61 = check_hlds__typecheck__GenericCall0_52;
#line 1348 "typecheck.m"
                            {
#line 1348 "typecheck.m"
                              check_hlds__typecheck__typecheck_event_call_4_p_0(check_hlds__typecheck__EventName_66, check_hlds__typecheck__Args_218, check_hlds__typecheck__STATE_VARIABLE_Info_160_160, check_hlds__typecheck__STATE_VARIABLE_Info_106);
                            }
#line 1343 "typecheck.m"
                          }
#line 1339 "typecheck.m"
                        else
#line 1333 "typecheck.m"
                          {
#line 1333 "typecheck.m"
                            MR_Word check_hlds__typecheck__PredVar_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall0_52, (MR_Integer) 0)));
#line 1333 "typecheck.m"
                            MR_Word check_hlds__typecheck__Purity_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall0_52, (MR_Integer) 1)));
#line 1333 "typecheck.m"
                            MR_Word check_hlds__typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall0_52, (MR_Integer) 2)));
#line 1333 "typecheck.m"
                            MR_Integer check_hlds__typecheck__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__GenericCall0_52, (MR_Integer) 3)));

#line 1334 "typecheck.m"
                            check_hlds__typecheck__GenericCall_61 = check_hlds__typecheck__GenericCall0_52;
#line 1338 "typecheck.m"
                            {
#line 1338 "typecheck.m"
                              check_hlds__typecheck__typecheck_higher_order_call_5_p_0(check_hlds__typecheck__PredVar_57, check_hlds__typecheck__Purity_58, check_hlds__typecheck__Args_218, check_hlds__typecheck__STATE_VARIABLE_Info_160_160, check_hlds__typecheck__STATE_VARIABLE_Info_106);
                            }
#line 1333 "typecheck.m"
                          }
#line 1355 "typecheck.m"
                    {
#line 1355 "typecheck.m"
                      MR_Word base;
#line 1355 "typecheck.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "typecheck.m"
                      *check_hlds__typecheck__GoalExpr_7 = base;
#line 1355 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1355 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__GenericCall_61));
#line 1355 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__Args_218));
#line 1355 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__typecheck__Modes_53));
#line 1355 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__typecheck__MaybeArgRegs_54));
#line 1355 "typecheck.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (check_hlds__typecheck__Detism_55));
#line 1355 "typecheck.m"
                    }
#line 1329 "typecheck.m"
                  }
#line 1250 "typecheck.m"
                else
#line 1250 "typecheck.m"
                  if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1264 "typecheck.m"
                    {
#line 1264 "typecheck.m"
                      MR_Word check_hlds__typecheck__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1264 "typecheck.m"
                      MR_Word check_hlds__typecheck__Cond0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1264 "typecheck.m"
                      MR_Word check_hlds__typecheck__Then0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 3)));
#line 1264 "typecheck.m"
                      MR_Word check_hlds__typecheck__Else0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 4)));
#line 1264 "typecheck.m"
                      MR_Word check_hlds__typecheck__Cond_18;
#line 1264 "typecheck.m"
                      MR_Word check_hlds__typecheck__Then_19;
#line 1264 "typecheck.m"
                      MR_Word check_hlds__typecheck__Else_20;
#line 1264 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_193_193;
#line 1264 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_197_197;
#line 1264 "typecheck.m"
                      MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_201_201;

#line 1268 "typecheck.m"
                      {
#line 1268 "typecheck.m"
                        check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Cond0_15, &check_hlds__typecheck__Cond_18, check_hlds__typecheck__STATE_VARIABLE_Info_0_105, &check_hlds__typecheck__STATE_VARIABLE_Info_193_193);
                      }
#line 1272 "typecheck.m"
                      {
#line 1272 "typecheck.m"
                        check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Then0_16, &check_hlds__typecheck__Then_19, check_hlds__typecheck__STATE_VARIABLE_Info_193_193, &check_hlds__typecheck__STATE_VARIABLE_Info_197_197);
                      }
#line 1276 "typecheck.m"
                      {
#line 1276 "typecheck.m"
                        check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Else0_17, &check_hlds__typecheck__Else_20, check_hlds__typecheck__STATE_VARIABLE_Info_197_197, &check_hlds__typecheck__STATE_VARIABLE_Info_201_201);
                      }
#line 1277 "typecheck.m"
                      {
#line 1277 "typecheck.m"
                        check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__Vars_14, check_hlds__typecheck__STATE_VARIABLE_Info_201_201, check_hlds__typecheck__STATE_VARIABLE_Info_106);
                      }
#line 1278 "typecheck.m"
                      {
#line 1278 "typecheck.m"
                        MR_Word base;
#line 1278 "typecheck.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1278 "typecheck.m"
                        *check_hlds__typecheck__GoalExpr_7 = base;
#line 1278 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1278 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Vars_14));
#line 1278 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__Cond_18));
#line 1278 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__typecheck__Then_19));
#line 1278 "typecheck.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (check_hlds__typecheck__Else_20));
#line 1278 "typecheck.m"
                      }
#line 1264 "typecheck.m"
                    }
#line 1250 "typecheck.m"
                  else
#line 1250 "typecheck.m"
                    if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1287 "typecheck.m"
                      {
#line 1287 "typecheck.m"
                        MR_Word check_hlds__typecheck__Reason_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1287 "typecheck.m"
                        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_182_182;
#line 1287 "typecheck.m"
                        MR_Word check_hlds__typecheck__SubGoal0_216 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 2)));
#line 1287 "typecheck.m"
                        MR_Word check_hlds__typecheck__SubGoal_217;

#line 1291 "typecheck.m"
                        {
#line 1291 "typecheck.m"
                          check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__SubGoal0_216, &check_hlds__typecheck__SubGoal_217, check_hlds__typecheck__STATE_VARIABLE_Info_0_105, &check_hlds__typecheck__STATE_VARIABLE_Info_182_182);
                        }
#line 1304 "typecheck.m"
                        if (((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 0))))
#line 1302 "typecheck.m"
                          {
#line 1302 "typecheck.m"
                            MR_Word check_hlds__typecheck__Vars_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Reason_23, (MR_Integer) 0)));

#line 1303 "typecheck.m"
                            {
#line 1303 "typecheck.m"
                              check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__Vars_213, check_hlds__typecheck__STATE_VARIABLE_Info_182_182, check_hlds__typecheck__STATE_VARIABLE_Info_106);
                            }
#line 1302 "typecheck.m"
                          }
#line 1304 "typecheck.m"
                        else
#line 1304 "typecheck.m"
                          if (((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 2))))
#line 1305 "typecheck.m"
                            *check_hlds__typecheck__STATE_VARIABLE_Info_106 = check_hlds__typecheck__STATE_VARIABLE_Info_182_182;
#line 1304 "typecheck.m"
                          else
#line 1304 "typecheck.m"
                            if (((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 1))))
#line 1302 "typecheck.m"
                              {
#line 1302 "typecheck.m"
                                MR_Word check_hlds__typecheck__Vars_266 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Reason_23, (MR_Integer) 0)));
#line 1295 "typecheck.m"
                                MR_Word check_hlds__typecheck__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__Reason_23, (MR_Integer) 1)));

#line 1303 "typecheck.m"
                                {
#line 1303 "typecheck.m"
                                  check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__Vars_266, check_hlds__typecheck__STATE_VARIABLE_Info_182_182, check_hlds__typecheck__STATE_VARIABLE_Info_106);
                                }
#line 1302 "typecheck.m"
                              }
#line 1304 "typecheck.m"
                            else
#line 1304 "typecheck.m"
                              if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1310 "typecheck.m"
                                *check_hlds__typecheck__STATE_VARIABLE_Info_106 = check_hlds__typecheck__STATE_VARIABLE_Info_182_182;
#line 1304 "typecheck.m"
                              else
#line 1304 "typecheck.m"
                                if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1309 "typecheck.m"
                                  *check_hlds__typecheck__STATE_VARIABLE_Info_106 = check_hlds__typecheck__STATE_VARIABLE_Info_182_182;
#line 1304 "typecheck.m"
                                else
#line 1304 "typecheck.m"
                                  if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1311 "typecheck.m"
                                    *check_hlds__typecheck__STATE_VARIABLE_Info_106 = check_hlds__typecheck__STATE_VARIABLE_Info_182_182;
#line 1304 "typecheck.m"
                                  else
#line 1304 "typecheck.m"
                                    if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1302 "typecheck.m"
                                      {
#line 1302 "typecheck.m"
                                        MR_Word check_hlds__typecheck__LCVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 1)));
#line 1302 "typecheck.m"
                                        MR_Word check_hlds__typecheck__LCSVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 2)));
#line 1302 "typecheck.m"
                                        MR_Word check_hlds__typecheck__V_183_183;
#line 1302 "typecheck.m"
                                        MR_Word check_hlds__typecheck__Vars_265;
#line 1300 "typecheck.m"
                                        MR_Word check_hlds__typecheck__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 3)));

#line 1301 "typecheck.m"
                                        {
#line 1301 "typecheck.m"
                                          check_hlds__typecheck__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_183_183, 0) = ((MR_Box) (check_hlds__typecheck__LCSVar_26));
#line 1301 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_183_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1301 "typecheck.m"
                                        }
#line 1301 "typecheck.m"
                                        {
#line 1301 "typecheck.m"
                                          check_hlds__typecheck__Vars_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_265, 0) = ((MR_Box) (check_hlds__typecheck__LCVar_25));
#line 1301 "typecheck.m"
                                          MR_hl_field(MR_mktag(1), check_hlds__typecheck__Vars_265, 1) = ((MR_Box) (check_hlds__typecheck__V_183_183));
#line 1301 "typecheck.m"
                                        }
#line 1303 "typecheck.m"
                                        {
#line 1303 "typecheck.m"
                                          check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__Vars_265, check_hlds__typecheck__STATE_VARIABLE_Info_182_182, check_hlds__typecheck__STATE_VARIABLE_Info_106);
                                        }
#line 1302 "typecheck.m"
                                      }
#line 1304 "typecheck.m"
                                    else
#line 1304 "typecheck.m"
                                      if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1307 "typecheck.m"
                                        *check_hlds__typecheck__STATE_VARIABLE_Info_106 = check_hlds__typecheck__STATE_VARIABLE_Info_182_182;
#line 1304 "typecheck.m"
                                      else
#line 1304 "typecheck.m"
                                        if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1306 "typecheck.m"
                                          *check_hlds__typecheck__STATE_VARIABLE_Info_106 = check_hlds__typecheck__STATE_VARIABLE_Info_182_182;
#line 1304 "typecheck.m"
                                        else
#line 1304 "typecheck.m"
                                          if (((((MR_tag((MR_Word) check_hlds__typecheck__Reason_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__Reason_23, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1308 "typecheck.m"
                                            *check_hlds__typecheck__STATE_VARIABLE_Info_106 = check_hlds__typecheck__STATE_VARIABLE_Info_182_182;
#line 1304 "typecheck.m"
                                          else
#line 1312 "typecheck.m"
                                            *check_hlds__typecheck__STATE_VARIABLE_Info_106 = check_hlds__typecheck__STATE_VARIABLE_Info_182_182;
#line 1315 "typecheck.m"
                        {
#line 1315 "typecheck.m"
                          MR_Word base;
#line 1315 "typecheck.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1315 "typecheck.m"
                          *check_hlds__typecheck__GoalExpr_7 = base;
#line 1315 "typecheck.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1315 "typecheck.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__Reason_23));
#line 1315 "typecheck.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_217));
#line 1315 "typecheck.m"
                        }
#line 1287 "typecheck.m"
                      }
#line 1250 "typecheck.m"
                    else
#line 1250 "typecheck.m"
                      if (((((MR_tag((MR_Word) check_hlds__typecheck__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1382 "typecheck.m"
                        {
#line 1382 "typecheck.m"
                          MR_Word check_hlds__typecheck__ShortHand0_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__typecheck__GoalExpr0_6, (MR_Integer) 1)));
#line 1382 "typecheck.m"
                          MR_Word check_hlds__typecheck__ShortHand_85;

#line 1391 "typecheck.m"
                          if (((MR_tag((MR_Word) check_hlds__typecheck__ShortHand0_83)) == (MR_mktag((MR_Integer) 1))))
#line 1393 "typecheck.m"
                            {
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__GoalType_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 0)));
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__Outer_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 1)));
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__Inner_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 2)));
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__MaybeOutputVars_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 3)));
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__MainGoal0_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 4)));
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__OrElseGoals0_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 5)));
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__OrElseInners_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 6)));
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__MainGoal_94;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__OrElseGoals_95;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__OuterDI_96;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__OuterUO_97;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__InnerVars_98;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_123_123;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_124_124;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_125_125;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_126_126;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_127_127;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_128_128;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_130_130;
#line 1393 "typecheck.m"
                              MR_Word check_hlds__typecheck__V_137_137;
#line 1418 "typecheck.m"
                              MR_Box check_hlds__typecheck__conv2_STATE_VARIABLE_Info_106;

#line 1400 "typecheck.m"
                              if ((check_hlds__typecheck__MaybeOutputVars_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1401 "typecheck.m"
                                check_hlds__typecheck__STATE_VARIABLE_Info_123_123 = check_hlds__typecheck__STATE_VARIABLE_Info_0_105;
#line 1400 "typecheck.m"
                              else
#line 1398 "typecheck.m"
                                {
#line 1398 "typecheck.m"
                                  MR_Word check_hlds__typecheck__OutputVars_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeOutputVars_89, (MR_Integer) 0)));

#line 1399 "typecheck.m"
                                  {
#line 1399 "typecheck.m"
                                    check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__OutputVars_93, check_hlds__typecheck__STATE_VARIABLE_Info_0_105, &check_hlds__typecheck__STATE_VARIABLE_Info_123_123);
                                  }
#line 1398 "typecheck.m"
                                }
#line 1404 "typecheck.m"
                              {
#line 1404 "typecheck.m"
                                check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__MainGoal0_90, &check_hlds__typecheck__MainGoal_94, check_hlds__typecheck__STATE_VARIABLE_Info_123_123, &check_hlds__typecheck__STATE_VARIABLE_Info_124_124);
                              }
#line 1405 "typecheck.m"
                              {
#line 1405 "typecheck.m"
                                check_hlds__typecheck__typecheck_goal_list_4_p_0(check_hlds__typecheck__OrElseGoals0_91, &check_hlds__typecheck__OrElseGoals_95, check_hlds__typecheck__STATE_VARIABLE_Info_124_124, &check_hlds__typecheck__STATE_VARIABLE_Info_125_125);
                              }
#line 1407 "typecheck.m"
                              check_hlds__typecheck__OuterDI_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_87, (MR_Integer) 0)));
#line 1407 "typecheck.m"
                              check_hlds__typecheck__OuterUO_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Outer_87, (MR_Integer) 1)));
#line 1408 "typecheck.m"
                              {
#line 1408 "typecheck.m"
                                check_hlds__typecheck__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_128_128, 0) = ((MR_Box) (check_hlds__typecheck__OuterUO_97));
#line 1408 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_128_128, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1408 "typecheck.m"
                              }
#line 1408 "typecheck.m"
                              {
#line 1408 "typecheck.m"
                                check_hlds__typecheck__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_126_126, 0) = ((MR_Box) (check_hlds__typecheck__OuterDI_96));
#line 1408 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_126_126, 1) = ((MR_Box) (check_hlds__typecheck__V_128_128));
#line 1408 "typecheck.m"
                              }
#line 1408 "typecheck.m"
                              {
#line 1408 "typecheck.m"
                                check_hlds__typecheck__ensure_vars_have_a_single_type_3_p_0(check_hlds__typecheck__V_126_126, check_hlds__typecheck__STATE_VARIABLE_Info_125_125, &check_hlds__typecheck__STATE_VARIABLE_Info_127_127);
                              }
#line 1417 "typecheck.m"
                              {
#line 1417 "typecheck.m"
                                check_hlds__typecheck__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1417 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_130_130, 0) = ((MR_Box) (check_hlds__typecheck__Inner_88));
#line 1417 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_130_130, 1) = ((MR_Box) (check_hlds__typecheck__OrElseInners_92));
#line 1417 "typecheck.m"
                              }
#line 1416 "typecheck.m"
                              {
#line 1416 "typecheck.m"
                                check_hlds__typecheck__InnerVars_98 = check_hlds__typecheck__atomic_interface_list_to_var_list_1_f_0(check_hlds__typecheck__V_130_130);
                              }
#line 1418 "typecheck.m"
                              {
#line 1418 "typecheck.m"
                                mercury__list__foldl_4_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[2], (MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_typecheck_info_0, (MR_Word) &check_hlds__typecheck_scalar_common_2[2], check_hlds__typecheck__InnerVars_98, ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_Info_127_127)), &check_hlds__typecheck__conv2_STATE_VARIABLE_Info_106);
                              }
#line 1418 "typecheck.m"
                              *check_hlds__typecheck__STATE_VARIABLE_Info_106 = ((MR_Word) check_hlds__typecheck__conv2_STATE_VARIABLE_Info_106);
#line 1421 "typecheck.m"
                              {
#line 1421 "typecheck.m"
                                check_hlds__typecheck__V_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_137_137, 0) = ((MR_Box) (&check_hlds__typecheck_scalar_common_5[3]));
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_137_137, 1) = ((MR_Box) (check_hlds__typecheck__typecheck_goal_2_5_p_0_3));
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_137_137, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_137_137, 3) = ((MR_Box) (check_hlds__typecheck__GoalType_86));
#line 1421 "typecheck.m"
                                MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_137_137, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1421 "typecheck.m"
                              }
#line 1421 "typecheck.m"
                              {
#line 1421 "typecheck.m"
                                mercury__require__expect_4_p_0(check_hlds__typecheck__V_137_137, (MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_2\'/5", (MR_String) "GoalType != unknown_atomic_goal_type");
                              }
#line 1423 "typecheck.m"
                              {
#line 1423 "typecheck.m"
                                check_hlds__typecheck__ShortHand_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1423 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_85, 0) = ((MR_Box) (check_hlds__typecheck__GoalType_86));
#line 1423 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_85, 1) = ((MR_Box) (check_hlds__typecheck__Outer_87));
#line 1423 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_85, 2) = ((MR_Box) (check_hlds__typecheck__Inner_88));
#line 1423 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_85, 3) = ((MR_Box) (check_hlds__typecheck__MaybeOutputVars_89));
#line 1423 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_85, 4) = ((MR_Box) (check_hlds__typecheck__MainGoal_94));
#line 1423 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_85, 5) = ((MR_Box) (check_hlds__typecheck__OrElseGoals_95));
#line 1423 "typecheck.m"
                                MR_hl_field(MR_mktag(1), check_hlds__typecheck__ShortHand_85, 6) = ((MR_Box) (check_hlds__typecheck__OrElseInners_92));
#line 1423 "typecheck.m"
                              }
#line 1393 "typecheck.m"
                            }
#line 1391 "typecheck.m"
                          else
#line 1391 "typecheck.m"
                            if (((MR_tag((MR_Word) check_hlds__typecheck__ShortHand0_83)) == (MR_mktag((MR_Integer) 0))))
#line 1384 "typecheck.m"
                              {
#line 1384 "typecheck.m"
                                MR_Word check_hlds__typecheck__LHS0_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 0)));
#line 1384 "typecheck.m"
                                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_145_145;
#line 1384 "typecheck.m"
                                MR_Word check_hlds__typecheck__LHS_223;
#line 1384 "typecheck.m"
                                MR_Word check_hlds__typecheck__RHS0_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 1)));
#line 1384 "typecheck.m"
                                MR_Word check_hlds__typecheck__RHS_225;

#line 1388 "typecheck.m"
                                {
#line 1388 "typecheck.m"
                                  check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__LHS0_84, &check_hlds__typecheck__LHS_223, check_hlds__typecheck__STATE_VARIABLE_Info_0_105, &check_hlds__typecheck__STATE_VARIABLE_Info_145_145);
                                }
#line 1389 "typecheck.m"
                                {
#line 1389 "typecheck.m"
                                  check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__RHS0_224, &check_hlds__typecheck__RHS_225, check_hlds__typecheck__STATE_VARIABLE_Info_145_145, check_hlds__typecheck__STATE_VARIABLE_Info_106);
                                }
#line 1390 "typecheck.m"
                                {
#line 1390 "typecheck.m"
                                  check_hlds__typecheck__ShortHand_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1390 "typecheck.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_85, 0) = ((MR_Box) (check_hlds__typecheck__LHS_223));
#line 1390 "typecheck.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__ShortHand_85, 1) = ((MR_Box) (check_hlds__typecheck__RHS_225));
#line 1390 "typecheck.m"
                                }
#line 1384 "typecheck.m"
                              }
#line 1391 "typecheck.m"
                            else
#line 1426 "typecheck.m"
                              {
#line 1426 "typecheck.m"
                                MR_Word check_hlds__typecheck__MaybeIO_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 0)));
#line 1426 "typecheck.m"
                                MR_Word check_hlds__typecheck__ResultVar_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 1)));
#line 1426 "typecheck.m"
                                MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_110_110;
#line 1426 "typecheck.m"
                                MR_Word check_hlds__typecheck__SubGoal0_229 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand0_83, (MR_Integer) 2)));
#line 1426 "typecheck.m"
                                MR_Word check_hlds__typecheck__SubGoal_230;

#line 1430 "typecheck.m"
                                {
#line 1430 "typecheck.m"
                                  check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__SubGoal0_229, &check_hlds__typecheck__SubGoal_230, check_hlds__typecheck__STATE_VARIABLE_Info_0_105, &check_hlds__typecheck__STATE_VARIABLE_Info_110_110);
                                }
#line 1436 "typecheck.m"
                                if ((check_hlds__typecheck__MaybeIO_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1437 "typecheck.m"
                                  *check_hlds__typecheck__STATE_VARIABLE_Info_106 = check_hlds__typecheck__STATE_VARIABLE_Info_110_110;
#line 1436 "typecheck.m"
                                else
#line 1432 "typecheck.m"
                                  {
#line 1432 "typecheck.m"
                                    MR_Word check_hlds__typecheck__InitialIO_103;
#line 1432 "typecheck.m"
                                    MR_Word check_hlds__typecheck__FinalIO_104;
#line 1432 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__MaybeIO_101, (MR_Integer) 0)));
#line 1432 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_112_112;
#line 1432 "typecheck.m"
                                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_113_113;
#line 1432 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_114_114;
#line 1432 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_116_116;
#line 1432 "typecheck.m"
                                    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_117_117;
#line 1432 "typecheck.m"
                                    MR_Word check_hlds__typecheck__V_118_118;

#line 1432 "typecheck.m"
                                    check_hlds__typecheck__InitialIO_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_111_111, (MR_Integer) 0)));
#line 1432 "typecheck.m"
                                    check_hlds__typecheck__FinalIO_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_111_111, (MR_Integer) 1)));
#line 1433 "typecheck.m"
                                    {
#line 1433 "typecheck.m"
                                      check_hlds__typecheck__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_114_114, 0) = ((MR_Box) (check_hlds__typecheck__FinalIO_104));
#line 1433 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1433 "typecheck.m"
                                    }
#line 1433 "typecheck.m"
                                    {
#line 1433 "typecheck.m"
                                      check_hlds__typecheck__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1433 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_112_112, 0) = ((MR_Box) (check_hlds__typecheck__InitialIO_103));
#line 1433 "typecheck.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_112_112, 1) = ((MR_Box) (check_hlds__typecheck__V_114_114));
#line 1433 "typecheck.m"
                                    }
#line 1433 "typecheck.m"
                                    {
#line 1433 "typecheck.m"
                                      check_hlds__typecheck__ensure_vars_have_a_type_3_p_0(check_hlds__typecheck__V_112_112, check_hlds__typecheck__STATE_VARIABLE_Info_110_110, &check_hlds__typecheck__STATE_VARIABLE_Info_113_113);
                                    }
#line 1434 "typecheck.m"
                                    {
#line 1434 "typecheck.m"
                                      check_hlds__typecheck__V_116_116 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                                    }
#line 1434 "typecheck.m"
                                    {
#line 1434 "typecheck.m"
                                      check_hlds__typecheck__typecheck_var_has_type_4_p_0(check_hlds__typecheck__InitialIO_103, check_hlds__typecheck__V_116_116, check_hlds__typecheck__STATE_VARIABLE_Info_113_113, &check_hlds__typecheck__STATE_VARIABLE_Info_117_117);
                                    }
#line 1435 "typecheck.m"
                                    {
#line 1435 "typecheck.m"
                                      check_hlds__typecheck__V_118_118 = parse_tree__builtin_lib_types__io_state_type_0_f_0();
                                    }
#line 1435 "typecheck.m"
                                    {
#line 1435 "typecheck.m"
                                      check_hlds__typecheck__typecheck_var_has_type_4_p_0(check_hlds__typecheck__FinalIO_104, check_hlds__typecheck__V_118_118, check_hlds__typecheck__STATE_VARIABLE_Info_117_117, check_hlds__typecheck__STATE_VARIABLE_Info_106);
                                    }
#line 1432 "typecheck.m"
                                  }
#line 1439 "typecheck.m"
                                {
#line 1439 "typecheck.m"
                                  check_hlds__typecheck__ShortHand_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "typecheck.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_85, 0) = ((MR_Box) (check_hlds__typecheck__MaybeIO_101));
#line 1439 "typecheck.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_85, 1) = ((MR_Box) (check_hlds__typecheck__ResultVar_102));
#line 1439 "typecheck.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__typecheck__ShortHand_85, 2) = ((MR_Box) (check_hlds__typecheck__SubGoal_230));
#line 1439 "typecheck.m"
                                }
#line 1426 "typecheck.m"
                              }
#line 1441 "typecheck.m"
                          {
#line 1441 "typecheck.m"
                            MR_Word base;
#line 1441 "typecheck.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "typecheck.m"
                            *check_hlds__typecheck__GoalExpr_7 = base;
#line 1441 "typecheck.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1441 "typecheck.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__typecheck__ShortHand_85));
#line 1441 "typecheck.m"
                          }
#line 1382 "typecheck.m"
                        }
#line 1250 "typecheck.m"
                      else
#line 1367 "typecheck.m"
                        {
#line 1368 "typecheck.m"
                          {
#line 1368 "typecheck.m"
                            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_goal_2\'/5", (MR_String) "switch");
#line 1368 "typecheck.m"
                            return;
                          }
#line 1367 "typecheck.m"
                        }
#line 1250 "typecheck.m"
  }
#line 1245 "typecheck.m"
}

#line 1190 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_goal_4_p_0(
#line 1190 "typecheck.m"
  MR_Word check_hlds__typecheck__Goal0_5,
#line 1190 "typecheck.m"
  MR_Word * check_hlds__typecheck__Goal_6,
#line 1190 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1190 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 1190 "typecheck.m"
{
#line 1193 "typecheck.m"
  {
#line 1193 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_5, (MR_Integer) 0)));
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_5, (MR_Integer) 1)));
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_10;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__EmptyContext_11;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalInfo_13;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet_14;
#line 1193 "typecheck.m"
    MR_Integer check_hlds__typecheck__Count_15;
#line 1193 "typecheck.m"
    MR_Integer check_hlds__typecheck__WarnLimit_16;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__GoalExpr_19;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_25_25;
#line 1193 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_62_62;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__V_63_63;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__V_64_64;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__V_65_65;
#line 1193 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_66_66;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__V_67_67;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__V_68_68;
#line 1193 "typecheck.m"
    MR_Word check_hlds__typecheck__V_69_69;
#line 1205 "typecheck.m"
    MR_Word check_hlds__typecheck__V_47_47;
#line 1205 "typecheck.m"
    MR_Word check_hlds__typecheck__V_48_48;
#line 1205 "typecheck.m"
    MR_Word check_hlds__typecheck__V_49_49;
#line 1205 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_50_50;
#line 1205 "typecheck.m"
    MR_Word check_hlds__typecheck__V_51_51;
#line 1205 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52;
#line 1205 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_53_53;
#line 1218 "typecheck.m"
    MR_Word check_hlds__typecheck__V_54_54;
#line 1218 "typecheck.m"
    MR_Word check_hlds__typecheck__V_55_55;
#line 1218 "typecheck.m"
    MR_Word check_hlds__typecheck__V_56_56;
#line 1218 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_57_57;
#line 1218 "typecheck.m"
    MR_Word check_hlds__typecheck__V_58_58;
#line 1218 "typecheck.m"
    MR_Word check_hlds__typecheck__V_59_59;
#line 1218 "typecheck.m"
    MR_Word check_hlds__typecheck__V_60_60;

#line 1195 "typecheck.m"
    {
#line 1195 "typecheck.m"
      check_hlds__typecheck__Context_10 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__typecheck__GoalInfo0_9);
    }
#line 1196 "typecheck.m"
    {
#line 1196 "typecheck.m"
      mercury__term__context_init_1_p_0(&check_hlds__typecheck__EmptyContext_11);
    }
#line 1198 "typecheck.m"
    check_hlds__typecheck__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 1198 "typecheck.m"
    check_hlds__typecheck__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 1198 "typecheck.m"
    check_hlds__typecheck__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 1198 "typecheck.m"
    check_hlds__typecheck__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 1198 "typecheck.m"
    check_hlds__typecheck__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
#line 1198 "typecheck.m"
    check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
#line 1198 "typecheck.m"
    check_hlds__typecheck__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
#line 1198 "typecheck.m"
    check_hlds__typecheck__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));
#line 1197 "typecheck.m"
    {
#line 1197 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__term____Unify____context_0_0(check_hlds__typecheck__Context_10, check_hlds__typecheck__EmptyContext_11);
    }
#line 1200 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1198 "typecheck.m"
      {
#line 1199 "typecheck.m"
        {
#line 1199 "typecheck.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__typecheck__V_65_65, check_hlds__typecheck__GoalInfo0_9, &check_hlds__typecheck__GoalInfo_13);
        }
#line 1199 "typecheck.m"
        check_hlds__typecheck__STATE_VARIABLE_Info_25_25 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 1198 "typecheck.m"
      }
#line 1200 "typecheck.m"
    else
#line 1201 "typecheck.m"
      {
#line 1201 "typecheck.m"
        check_hlds__typecheck__GoalInfo_13 = check_hlds__typecheck__GoalInfo0_9;
#line 1202 "typecheck.m"
        {
#line 1202 "typecheck.m"
          check_hlds__typecheck__STATE_VARIABLE_Info_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1202 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 0) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 1202 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 1) = ((MR_Box) (check_hlds__typecheck__V_68_68));
#line 1202 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 2) = ((MR_Box) (check_hlds__typecheck__V_67_67));
#line 1202 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 3) = ((MR_Box) (check_hlds__typecheck__V_66_66));
#line 1202 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 4) = ((MR_Box) (check_hlds__typecheck__Context_10));
#line 1202 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 5) = ((MR_Box) (check_hlds__typecheck__V_64_64));
#line 1202 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 6) = ((MR_Box) (check_hlds__typecheck__V_63_63));
#line 1202 "typecheck.m"
          MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, 7) = ((MR_Box) (check_hlds__typecheck__V_62_62));
#line 1202 "typecheck.m"
        }
#line 1201 "typecheck.m"
      }
#line 1205 "typecheck.m"
    check_hlds__typecheck__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1205 "typecheck.m"
    check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 1205 "typecheck.m"
    check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1205 "typecheck.m"
    check_hlds__typecheck__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1205 "typecheck.m"
    check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1205 "typecheck.m"
    check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1205 "typecheck.m"
    check_hlds__typecheck__TypeAssignSet_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1205 "typecheck.m"
    check_hlds__typecheck__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1206 "typecheck.m"
    {
#line 1206 "typecheck.m"
      mercury__list__length_2_p_0((MR_Word) &check_hlds__typecheck_info__check_hlds__typecheck_info__type_ctor_info_type_assign_0, check_hlds__typecheck__TypeAssignSet_14, &check_hlds__typecheck__Count_15);
    }
#line 1218 "typecheck.m"
    check_hlds__typecheck__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 0)));
#line 1218 "typecheck.m"
    check_hlds__typecheck__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 1)));
#line 1218 "typecheck.m"
    check_hlds__typecheck__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 2)));
#line 1218 "typecheck.m"
    check_hlds__typecheck__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 3)));
#line 1218 "typecheck.m"
    check_hlds__typecheck__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 4)));
#line 1218 "typecheck.m"
    check_hlds__typecheck__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 5)));
#line 1218 "typecheck.m"
    check_hlds__typecheck__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 6)));
#line 1218 "typecheck.m"
    check_hlds__typecheck__WarnLimit_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_25_25, (MR_Integer) 7)));
#line 1219 "typecheck.m"
    check_hlds__typecheck__succeeded = (check_hlds__typecheck__Count_15 > check_hlds__typecheck__WarnLimit_16);
#line 1240 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 1220 "typecheck.m"
      {
#line 1220 "typecheck.m"
        MR_Integer check_hlds__typecheck__ErrorLimit_17;

#line 1220 "typecheck.m"
        {
#line 1220 "typecheck.m"
          check_hlds__typecheck_info__typecheck_info_get_ambiguity_error_limit_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_25_25, &check_hlds__typecheck__ErrorLimit_17);
        }
#line 1221 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Count_15 > check_hlds__typecheck__ErrorLimit_17);
#line 1229 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 1223 "typecheck.m"
          {
#line 1223 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorSpec_18;
#line 1223 "typecheck.m"
            MR_Word check_hlds__typecheck__V_26_26;

#line 1223 "typecheck.m"
            {
#line 1223 "typecheck.m"
              check_hlds__typecheck__ErrorSpec_18 = check_hlds__typecheck_errors__report_error_too_much_overloading_1_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_25_25);
            }
#line 1224 "typecheck.m"
            {
#line 1224 "typecheck.m"
              check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "typecheck.m"
              MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__ErrorSpec_18));
#line 1224 "typecheck.m"
            }
#line 1224 "typecheck.m"
            {
#line 1224 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_26_26, check_hlds__typecheck__STATE_VARIABLE_Info_25_25, check_hlds__typecheck__STATE_VARIABLE_Info_24);
            }
#line 1228 "typecheck.m"
            check_hlds__typecheck__GoalExpr_19 = check_hlds__typecheck__GoalExpr0_8;
#line 1223 "typecheck.m"
          }
#line 1229 "typecheck.m"
        else
#line 1230 "typecheck.m"
          {
#line 1230 "typecheck.m"
            MR_Word check_hlds__typecheck__MaybePrevSpec_20;
#line 1230 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_29_29;

#line 1230 "typecheck.m"
            {
#line 1230 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_overload_error_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_25_25, &check_hlds__typecheck__MaybePrevSpec_20);
            }
#line 1235 "typecheck.m"
            if ((check_hlds__typecheck__MaybePrevSpec_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1232 "typecheck.m"
              {
#line 1232 "typecheck.m"
                MR_Word check_hlds__typecheck__WarnSpec_21;
#line 1232 "typecheck.m"
                MR_Word check_hlds__typecheck__V_28_28;

#line 1233 "typecheck.m"
                {
#line 1233 "typecheck.m"
                  check_hlds__typecheck__WarnSpec_21 = check_hlds__typecheck_errors__report_warning_too_much_overloading_1_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_25_25);
                }
#line 1234 "typecheck.m"
                {
#line 1234 "typecheck.m"
                  check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_28_28, 0) = ((MR_Box) (check_hlds__typecheck__WarnSpec_21));
#line 1234 "typecheck.m"
                }
#line 1234 "typecheck.m"
                {
#line 1234 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_set_overload_error_3_p_0(check_hlds__typecheck__V_28_28, check_hlds__typecheck__STATE_VARIABLE_Info_25_25, &check_hlds__typecheck__STATE_VARIABLE_Info_29_29);
                }
#line 1232 "typecheck.m"
              }
#line 1235 "typecheck.m"
            else
#line 1236 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_Info_29_29 = check_hlds__typecheck__STATE_VARIABLE_Info_25_25;
#line 1238 "typecheck.m"
            {
#line 1238 "typecheck.m"
              check_hlds__typecheck__typecheck_goal_2_5_p_0(check_hlds__typecheck__GoalExpr0_8, &check_hlds__typecheck__GoalExpr_19, check_hlds__typecheck__GoalInfo_13, check_hlds__typecheck__STATE_VARIABLE_Info_29_29, check_hlds__typecheck__STATE_VARIABLE_Info_24);
            }
#line 1230 "typecheck.m"
          }
#line 1220 "typecheck.m"
      }
#line 1240 "typecheck.m"
    else
#line 1241 "typecheck.m"
      {
#line 1241 "typecheck.m"
        check_hlds__typecheck__typecheck_goal_2_5_p_0(check_hlds__typecheck__GoalExpr0_8, &check_hlds__typecheck__GoalExpr_19, check_hlds__typecheck__GoalInfo_13, check_hlds__typecheck__STATE_VARIABLE_Info_25_25, check_hlds__typecheck__STATE_VARIABLE_Info_24);
      }
#line 1243 "typecheck.m"
    {
#line 1243 "typecheck.m"
      MR_Word base;
#line 1243 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1243 "typecheck.m"
      *check_hlds__typecheck__Goal_6 = base;
#line 1243 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_19));
#line 1243 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_13));
#line 1243 "typecheck.m"
    }
#line 1193 "typecheck.m"
  }
#line 1190 "typecheck.m"
}

#line 1125 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_check_for_ambiguity_4_p_0(
#line 1125 "typecheck.m"
  MR_Word check_hlds__typecheck__StuffToCheck_5,
#line 1125 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_6,
#line 1125 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_23,
#line 1125 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_24)
#line 1125 "typecheck.m"
{
#line 1128 "typecheck.m"
  {
#line 1128 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1128 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 6)));
#line 1129 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 0)));
#line 1129 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 1)));
#line 1129 "typecheck.m"
    MR_Word check_hlds__typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 2)));
#line 1129 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 3)));
#line 1129 "typecheck.m"
    MR_Word check_hlds__typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 4)));
#line 1129 "typecheck.m"
    MR_Word check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 5)));
#line 1129 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_23, (MR_Integer) 7)));

#line 1138 "typecheck.m"
    if ((check_hlds__typecheck__TypeAssignSet_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "typecheck.m"
      {
#line 1137 "typecheck.m"
        {
#line 1137 "typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/4", (MR_String) "no type-assignment");
#line 1137 "typecheck.m"
          return;
        }
#line 1136 "typecheck.m"
      }
#line 1138 "typecheck.m"
    else
#line 1138 "typecheck.m"
      {
#line 1138 "typecheck.m"
        MR_Word check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_8, (MR_Integer) 1)));
#line 1138 "typecheck.m"
        MR_Word check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_8, (MR_Integer) 0)));

#line 1138 "typecheck.m"
        if ((check_hlds__typecheck__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1139 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 1138 "typecheck.m"
        else
#line 1141 "typecheck.m"
          {
#line 1141 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_38_38, (MR_Integer) 0)));
#line 1141 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorsSoFar_13;
#line 1141 "typecheck.m"
            MR_Word check_hlds__typecheck__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_38_38, (MR_Integer) 1)));

#line 1150 "typecheck.m"
            {
#line 1150 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, &check_hlds__typecheck__ErrorsSoFar_13);
            }
#line 1152 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ErrorsSoFar_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1152 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1155 "typecheck.m"
              {
#line 1155 "typecheck.m"
                if ((check_hlds__typecheck__StuffToCheck_5 == (MR_Integer) 0))
#line 1156 "typecheck.m"
                  {
#line 1156 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes1_14;
#line 1156 "typecheck.m"
                    MR_Word check_hlds__typecheck__VarTypes2_15;
#line 1156 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings1_16;
#line 1156 "typecheck.m"
                    MR_Word check_hlds__typecheck__TypeBindings2_17;
#line 1156 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypes1_18;
#line 1156 "typecheck.m"
                    MR_Word check_hlds__typecheck__HeadTypes2_19;
#line 1156 "typecheck.m"
                    MR_Word check_hlds__typecheck__FinalHeadTypes1_20;
#line 1156 "typecheck.m"
                    MR_Word check_hlds__typecheck__FinalHeadTypes2_21;
#line 975 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_42_42;
#line 976 "typecheck.m"
                    MR_Word check_hlds__typecheck__V_43_43;

#line 1161 "typecheck.m"
                    {
#line 1161 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__V_39_39, &check_hlds__typecheck__VarTypes1_14);
                    }
#line 1162 "typecheck.m"
                    {
#line 1162 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign2_11, &check_hlds__typecheck__VarTypes2_15);
                    }
#line 1163 "typecheck.m"
                    {
#line 1163 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__V_39_39, &check_hlds__typecheck__TypeBindings1_16);
                    }
#line 1164 "typecheck.m"
                    {
#line 1164 "typecheck.m"
                      check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign2_11, &check_hlds__typecheck__TypeBindings2_17);
                    }
#line 1165 "typecheck.m"
                    {
#line 1165 "typecheck.m"
                      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes1_14, check_hlds__typecheck__HeadVars_6, &check_hlds__typecheck__HeadTypes1_18);
                    }
#line 1166 "typecheck.m"
                    {
#line 1166 "typecheck.m"
                      parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes2_15, check_hlds__typecheck__HeadVars_6, &check_hlds__typecheck__HeadTypes2_19);
                    }
#line 1167 "typecheck.m"
                    {
#line 1167 "typecheck.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings1_16, check_hlds__typecheck__HeadTypes1_18, &check_hlds__typecheck__FinalHeadTypes1_20);
                    }
#line 1169 "typecheck.m"
                    {
#line 1169 "typecheck.m"
                      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings2_17, check_hlds__typecheck__HeadTypes2_19, &check_hlds__typecheck__FinalHeadTypes2_21);
                    }
#line 975 "typecheck.m"
                    {
#line 975 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes1_20, check_hlds__typecheck__FinalHeadTypes2_21, &check_hlds__typecheck__V_42_42);
                    }
#line 1156 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 976 "typecheck.m"
                      {
#line 976 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes2_21, check_hlds__typecheck__FinalHeadTypes1_20, &check_hlds__typecheck__V_43_43);
                      }
#line 1156 "typecheck.m"
                  }
#line 1155 "typecheck.m"
                else
#line 1154 "typecheck.m"
                  check_hlds__typecheck__succeeded = MR_TRUE;
#line 1155 "typecheck.m"
              }
#line 1176 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1174 "typecheck.m"
              {
#line 1174 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_22;

#line 1174 "typecheck.m"
                {
#line 1174 "typecheck.m"
                  check_hlds__typecheck__Spec_22 = check_hlds__typecheck_errors__report_ambiguity_error_3_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__V_39_39, check_hlds__typecheck__TypeAssign2_11);
                }
#line 1175 "typecheck.m"
                {
#line 1175 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_22, check_hlds__typecheck__STATE_VARIABLE_Info_0_23, check_hlds__typecheck__STATE_VARIABLE_Info_24);
#line 1175 "typecheck.m"
                  return;
                }
#line 1174 "typecheck.m"
              }
#line 1176 "typecheck.m"
            else
#line 1175 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_24 = check_hlds__typecheck__STATE_VARIABLE_Info_0_23;
#line 1141 "typecheck.m"
          }
#line 1138 "typecheck.m"
      }
#line 1128 "typecheck.m"
  }
#line 1125 "typecheck.m"
}

#line 1088 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_6_p_0(
#line 1088 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_7,
#line 1088 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_8,
#line 1088 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Clause_0_15,
#line 1088 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Clause_16,
#line 1088 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_17,
#line 1088 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_18)
#line 1088 "typecheck.m"
{
#line 1091 "typecheck.m"
  {
#line 1091 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 1091 "typecheck.m"
    MR_Word check_hlds__typecheck__Body0_11;
#line 1091 "typecheck.m"
    MR_Word check_hlds__typecheck__Context_12;
#line 1091 "typecheck.m"
    MR_Word check_hlds__typecheck__Body_13;
#line 1091 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_19_19;
#line 1091 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_21_21;
#line 1091 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_22_22;
#line 1091 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_27_27;
#line 1091 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeAssignSet_60;
#line 1093 "typecheck.m"
    MR_Word check_hlds__typecheck__V_30_30;
#line 1093 "typecheck.m"
    MR_Word check_hlds__typecheck__V_31_31;
#line 1093 "typecheck.m"
    MR_Word check_hlds__typecheck__V_32_32;
#line 1093 "typecheck.m"
    MR_Word check_hlds__typecheck__V_33_33;
#line 1094 "typecheck.m"
    MR_Word check_hlds__typecheck__V_34_34;
#line 1094 "typecheck.m"
    MR_Word check_hlds__typecheck__V_35_35;
#line 1094 "typecheck.m"
    MR_Word check_hlds__typecheck__V_36_36;
#line 1094 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_37_37;
#line 1094 "typecheck.m"
    MR_Word check_hlds__typecheck__V_39_39;
#line 1094 "typecheck.m"
    MR_Word check_hlds__typecheck__V_40_40;
#line 1094 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_41_41;
#line 1094 "typecheck.m"
    MR_Word check_hlds__typecheck__V_38_38;
#line 1102 "typecheck.m"
    MR_Word check_hlds__typecheck__V_42_42;
#line 1102 "typecheck.m"
    MR_Word check_hlds__typecheck__V_44_44;
#line 1102 "typecheck.m"
    MR_Word check_hlds__typecheck__V_45_45;
#line 1102 "typecheck.m"
    MR_Word check_hlds__typecheck__V_46_46;
#line 1102 "typecheck.m"
    MR_Word check_hlds__typecheck__V_43_43;
#line 1103 "typecheck.m"
    MR_Word check_hlds__typecheck__V_47_47;
#line 1103 "typecheck.m"
    MR_Word check_hlds__typecheck__V_48_48;
#line 1103 "typecheck.m"
    MR_Word check_hlds__typecheck__V_49_49;
#line 1103 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_50_50;
#line 1103 "typecheck.m"
    MR_Word check_hlds__typecheck__V_52_52;
#line 1103 "typecheck.m"
    MR_Integer check_hlds__typecheck__V_54_54;
#line 1103 "typecheck.m"
    MR_Word check_hlds__typecheck__V_51_51;

#line 1092 "typecheck.m"
    {
#line 1092 "typecheck.m"
      check_hlds__typecheck__Body0_11 = hlds__hlds_clauses__clause_body_1_f_0(check_hlds__typecheck__STATE_VARIABLE_Clause_0_15);
    }
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 0)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 1)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 2)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 3)));
#line 1093 "typecheck.m"
    check_hlds__typecheck__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 4)));
#line 1094 "typecheck.m"
    check_hlds__typecheck__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 0)));
#line 1094 "typecheck.m"
    check_hlds__typecheck__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 1)));
#line 1094 "typecheck.m"
    check_hlds__typecheck__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 2)));
#line 1094 "typecheck.m"
    check_hlds__typecheck__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 3)));
#line 1094 "typecheck.m"
    check_hlds__typecheck__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 4)));
#line 1094 "typecheck.m"
    check_hlds__typecheck__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 5)));
#line 1094 "typecheck.m"
    check_hlds__typecheck__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 6)));
#line 1094 "typecheck.m"
    check_hlds__typecheck__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_0_17, (MR_Integer) 7)));
#line 1094 "typecheck.m"
    {
#line 1094 "typecheck.m"
      check_hlds__typecheck__STATE_VARIABLE_Info_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1094 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 0) = ((MR_Box) (check_hlds__typecheck__V_34_34));
#line 1094 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 1) = ((MR_Box) (check_hlds__typecheck__V_35_35));
#line 1094 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 2) = ((MR_Box) (check_hlds__typecheck__V_36_36));
#line 1094 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 3) = ((MR_Box) (check_hlds__typecheck__V_37_37));
#line 1094 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 4) = ((MR_Box) (check_hlds__typecheck__Context_12));
#line 1094 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 5) = ((MR_Box) (check_hlds__typecheck__V_39_39));
#line 1094 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 6) = ((MR_Box) (check_hlds__typecheck__V_40_40));
#line 1094 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_19_19, 7) = ((MR_Box) (check_hlds__typecheck__V_41_41));
#line 1094 "typecheck.m"
    }
#line 1097 "typecheck.m"
    {
#line 1097 "typecheck.m"
      check_hlds__typecheck__typecheck_var_has_type_list_5_p_0(check_hlds__typecheck__HeadVars_7, check_hlds__typecheck__ArgTypes_8, (MR_Integer) 1, check_hlds__typecheck__STATE_VARIABLE_Info_19_19, &check_hlds__typecheck__STATE_VARIABLE_Info_21_21);
    }
#line 1098 "typecheck.m"
    {
#line 1098 "typecheck.m"
      check_hlds__typecheck__typecheck_goal_4_p_0(check_hlds__typecheck__Body0_11, &check_hlds__typecheck__Body_13, check_hlds__typecheck__STATE_VARIABLE_Info_21_21, &check_hlds__typecheck__STATE_VARIABLE_Info_22_22);
    }
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 0)));
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 1)));
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 2)));
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 3)));
#line 1102 "typecheck.m"
    check_hlds__typecheck__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Clause_0_15, (MR_Integer) 4)));
#line 1102 "typecheck.m"
    {
#line 1102 "typecheck.m"
      MR_Word base;
#line 1102 "typecheck.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1102 "typecheck.m"
      *check_hlds__typecheck__STATE_VARIABLE_Clause_16 = base;
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__typecheck__V_42_42));
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__typecheck__Body_13));
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__typecheck__V_44_44));
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__typecheck__V_45_45));
#line 1102 "typecheck.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__typecheck__V_46_46));
#line 1102 "typecheck.m"
    }
#line 1103 "typecheck.m"
    check_hlds__typecheck__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 0)));
#line 1103 "typecheck.m"
    check_hlds__typecheck__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 1)));
#line 1103 "typecheck.m"
    check_hlds__typecheck__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 2)));
#line 1103 "typecheck.m"
    check_hlds__typecheck__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 3)));
#line 1103 "typecheck.m"
    check_hlds__typecheck__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 4)));
#line 1103 "typecheck.m"
    check_hlds__typecheck__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 5)));
#line 1103 "typecheck.m"
    check_hlds__typecheck__TypeAssignSet_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 6)));
#line 1103 "typecheck.m"
    check_hlds__typecheck__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_22_22, (MR_Integer) 7)));
#line 1103 "typecheck.m"
    {
#line 1103 "typecheck.m"
      check_hlds__typecheck__STATE_VARIABLE_Info_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1103 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 0) = ((MR_Box) (check_hlds__typecheck__V_47_47));
#line 1103 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 1) = ((MR_Box) (check_hlds__typecheck__V_48_48));
#line 1103 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 2) = ((MR_Box) (check_hlds__typecheck__V_49_49));
#line 1103 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 3) = ((MR_Box) (check_hlds__typecheck__V_50_50));
#line 1103 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 4) = ((MR_Box) (check_hlds__typecheck__Context_12));
#line 1103 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 5) = ((MR_Box) (check_hlds__typecheck__V_52_52));
#line 1103 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 6) = ((MR_Box) (check_hlds__typecheck__TypeAssignSet_60));
#line 1103 "typecheck.m"
      MR_hl_field(MR_mktag(0), check_hlds__typecheck__STATE_VARIABLE_Info_27_27, 7) = ((MR_Box) (check_hlds__typecheck__V_54_54));
#line 1103 "typecheck.m"
    }
#line 1138 "typecheck.m"
    if ((check_hlds__typecheck__TypeAssignSet_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "typecheck.m"
      {
#line 1137 "typecheck.m"
        {
#line 1137 "typecheck.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.typecheck", (MR_String) "predicate \140check_hlds.typecheck.typecheck_check_for_ambiguity\'/4", (MR_String) "no type-assignment");
#line 1137 "typecheck.m"
          return;
        }
#line 1136 "typecheck.m"
      }
#line 1138 "typecheck.m"
    else
#line 1138 "typecheck.m"
      {
#line 1138 "typecheck.m"
        MR_Word check_hlds__typecheck__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_60, (MR_Integer) 1)));
#line 1138 "typecheck.m"
        MR_Word check_hlds__typecheck__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__TypeAssignSet_60, (MR_Integer) 0)));

#line 1138 "typecheck.m"
        if ((check_hlds__typecheck__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1139 "typecheck.m"
          *check_hlds__typecheck__STATE_VARIABLE_Info_18 = check_hlds__typecheck__STATE_VARIABLE_Info_27_27;
#line 1138 "typecheck.m"
        else
#line 1141 "typecheck.m"
          {
#line 1141 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeAssign2_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_88_88, (MR_Integer) 0)));
#line 1141 "typecheck.m"
            MR_Word check_hlds__typecheck__ErrorsSoFar_65;
#line 1141 "typecheck.m"
            MR_Word check_hlds__typecheck__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_88_88, (MR_Integer) 1)));
#line 1152 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes1_66;
#line 1152 "typecheck.m"
            MR_Word check_hlds__typecheck__VarTypes2_67;
#line 1152 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeBindings1_68;
#line 1152 "typecheck.m"
            MR_Word check_hlds__typecheck__TypeBindings2_69;
#line 1152 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypes1_70;
#line 1152 "typecheck.m"
            MR_Word check_hlds__typecheck__HeadTypes2_71;
#line 1152 "typecheck.m"
            MR_Word check_hlds__typecheck__FinalHeadTypes1_72;
#line 1152 "typecheck.m"
            MR_Word check_hlds__typecheck__FinalHeadTypes2_73;
#line 975 "typecheck.m"
            MR_Word check_hlds__typecheck__V_92_92;
#line 976 "typecheck.m"
            MR_Word check_hlds__typecheck__V_93_93;

#line 1150 "typecheck.m"
            {
#line 1150 "typecheck.m"
              check_hlds__typecheck_info__typecheck_info_get_all_errors_2_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_27_27, &check_hlds__typecheck__ErrorsSoFar_65);
            }
#line 1152 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__ErrorsSoFar_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1152 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1152 "typecheck.m"
              {
#line 1161 "typecheck.m"
                {
#line 1161 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__V_89_89, &check_hlds__typecheck__VarTypes1_66);
                }
#line 1162 "typecheck.m"
                {
#line 1162 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_var_types_2_p_0(check_hlds__typecheck__TypeAssign2_63, &check_hlds__typecheck__VarTypes2_67);
                }
#line 1163 "typecheck.m"
                {
#line 1163 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__V_89_89, &check_hlds__typecheck__TypeBindings1_68);
                }
#line 1164 "typecheck.m"
                {
#line 1164 "typecheck.m"
                  check_hlds__typecheck_info__type_assign_get_type_bindings_2_p_0(check_hlds__typecheck__TypeAssign2_63, &check_hlds__typecheck__TypeBindings2_69);
                }
#line 1165 "typecheck.m"
                {
#line 1165 "typecheck.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes1_66, check_hlds__typecheck__HeadVars_7, &check_hlds__typecheck__HeadTypes1_70);
                }
#line 1166 "typecheck.m"
                {
#line 1166 "typecheck.m"
                  parse_tree__prog_data__lookup_var_types_3_p_0(check_hlds__typecheck__VarTypes2_67, check_hlds__typecheck__HeadVars_7, &check_hlds__typecheck__HeadTypes2_71);
                }
#line 1167 "typecheck.m"
                {
#line 1167 "typecheck.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings1_68, check_hlds__typecheck__HeadTypes1_70, &check_hlds__typecheck__FinalHeadTypes1_72);
                }
#line 1169 "typecheck.m"
                {
#line 1169 "typecheck.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__typecheck__TypeBindings2_69, check_hlds__typecheck__HeadTypes2_71, &check_hlds__typecheck__FinalHeadTypes2_73);
                }
#line 975 "typecheck.m"
                {
#line 975 "typecheck.m"
                  check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes1_72, check_hlds__typecheck__FinalHeadTypes2_73, &check_hlds__typecheck__V_92_92);
                }
#line 1152 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 976 "typecheck.m"
                  {
#line 976 "typecheck.m"
                    check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__FinalHeadTypes2_73, check_hlds__typecheck__FinalHeadTypes1_72, &check_hlds__typecheck__V_93_93);
                  }
#line 1152 "typecheck.m"
              }
#line 1176 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1174 "typecheck.m"
              {
#line 1174 "typecheck.m"
                MR_Word check_hlds__typecheck__Spec_74;

#line 1174 "typecheck.m"
                {
#line 1174 "typecheck.m"
                  check_hlds__typecheck__Spec_74 = check_hlds__typecheck_errors__report_ambiguity_error_3_f_0(check_hlds__typecheck__STATE_VARIABLE_Info_27_27, check_hlds__typecheck__V_89_89, check_hlds__typecheck__TypeAssign2_63);
                }
#line 1175 "typecheck.m"
                {
#line 1175 "typecheck.m"
                  check_hlds__typecheck_info__typecheck_info_add_error_3_p_0(check_hlds__typecheck__Spec_74, check_hlds__typecheck__STATE_VARIABLE_Info_27_27, check_hlds__typecheck__STATE_VARIABLE_Info_18);
#line 1175 "typecheck.m"
                  return;
                }
#line 1174 "typecheck.m"
              }
#line 1176 "typecheck.m"
            else
#line 1175 "typecheck.m"
              *check_hlds__typecheck__STATE_VARIABLE_Info_18 = check_hlds__typecheck__STATE_VARIABLE_Info_27_27;
#line 1141 "typecheck.m"
          }
#line 1138 "typecheck.m"
      }
#line 1091 "typecheck.m"
  }
#line 1088 "typecheck.m"
}

#line 1060 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_clause_list_6_p_0(
#line 1060 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVars_1,
#line 1060 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypes_2,
#line 1060 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 1060 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4,
#line 1060 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_0_5,
#line 1060 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_Info_6)
#line 1060 "typecheck.m"
{
#line 1064 "typecheck.m"
  {
#line 1064 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 1064 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1064 "typecheck.m"
      {
#line 1064 "typecheck.m"
        *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1064 "typecheck.m"
        *check_hlds__typecheck__STATE_VARIABLE_Info_6 = check_hlds__typecheck__STATE_VARIABLE_Info_0_5;
#line 1064 "typecheck.m"
      }
#line 1064 "typecheck.m"
    else
#line 1066 "typecheck.m"
      {
#line 1066 "typecheck.m"
        MR_Word check_hlds__typecheck__Clause0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 1066 "typecheck.m"
        MR_Word check_hlds__typecheck__Clauses0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 1066 "typecheck.m"
        MR_Word check_hlds__typecheck__Clause_16;
#line 1066 "typecheck.m"
        MR_Word check_hlds__typecheck__Clauses_17;
#line 1066 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_Info_21_21;

#line 1067 "typecheck.m"
        {
#line 1067 "typecheck.m"
          check_hlds__typecheck__typecheck_clause_6_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clause0_14, &check_hlds__typecheck__Clause_16, check_hlds__typecheck__STATE_VARIABLE_Info_0_5, &check_hlds__typecheck__STATE_VARIABLE_Info_21_21);
        }
#line 1068 "typecheck.m"
        {
#line 1068 "typecheck.m"
          check_hlds__typecheck__typecheck_clause_list_6_p_0(check_hlds__typecheck__HeadVars_1, check_hlds__typecheck__ArgTypes_2, check_hlds__typecheck__Clauses0_15, &check_hlds__typecheck__Clauses_17, check_hlds__typecheck__STATE_VARIABLE_Info_21_21, check_hlds__typecheck__STATE_VARIABLE_Info_6);
        }
#line 1066 "typecheck.m"
        {
#line 1066 "typecheck.m"
          MR_Word base;
#line 1066 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 1066 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__Clause_16));
#line 1066 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__Clauses_17));
#line 1066 "typecheck.m"
        }
#line 1066 "typecheck.m"
      }
#line 1064 "typecheck.m"
  }
#line 1060 "typecheck.m"
}

#line 955 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__same_structure_2_4_p_0(
#line 955 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__1_1,
#line 955 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__2_2,
#line 955 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__3_3,
#line 955 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 955 "typecheck.m"
{
#line 958 "typecheck.m"
  {
#line 958 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 958 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 958 "typecheck.m"
      {
#line 958 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 958 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 958 "typecheck.m"
          {
#line 958 "typecheck.m"
            *check_hlds__typecheck__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "typecheck.m"
            *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "typecheck.m"
            check_hlds__typecheck__succeeded = MR_TRUE;
#line 958 "typecheck.m"
          }
#line 958 "typecheck.m"
      }
#line 958 "typecheck.m"
    else
#line 960 "typecheck.m"
      {
#line 960 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_16_16;
#line 960 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 0)));
#line 960 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintsA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__1_1, (MR_Integer) 1)));
#line 960 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintB_7;
#line 960 "typecheck.m"
        MR_Word check_hlds__typecheck__ConstraintsB_8;
#line 960 "typecheck.m"
        MR_Word check_hlds__typecheck__ClassName_11;
#line 960 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypesA_12;
#line 960 "typecheck.m"
        MR_Word check_hlds__typecheck__ArgTypesB_13;
#line 960 "typecheck.m"
        MR_Word check_hlds__typecheck__TypesA0_14;
#line 960 "typecheck.m"
        MR_Word check_hlds__typecheck__TypesB0_15;
#line 960 "typecheck.m"
        MR_Word check_hlds__typecheck__V_17_17;

#line 959 "typecheck.m"
        check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 959 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 959 "typecheck.m"
          {
#line 959 "typecheck.m"
            check_hlds__typecheck__ConstraintB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 0)));
#line 959 "typecheck.m"
            check_hlds__typecheck__ConstraintsB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__2_2, (MR_Integer) 1)));
#line 961 "typecheck.m"
            check_hlds__typecheck__ClassName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 0)));
#line 961 "typecheck.m"
            check_hlds__typecheck__ArgTypesA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintA_5, (MR_Integer) 1)));
#line 962 "typecheck.m"
            check_hlds__typecheck__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 0)));
#line 962 "typecheck.m"
            check_hlds__typecheck__ArgTypesB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__ConstraintB_7, (MR_Integer) 1)));
#line 962 "typecheck.m"
            {
#line 962 "typecheck.m"
              check_hlds__typecheck__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__typecheck__ClassName_11, check_hlds__typecheck__V_17_17);
            }
#line 960 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 960 "typecheck.m"
              {
#line 15512 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 963 "typecheck.m"
                {
#line 963 "typecheck.m"
                  check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__ArgTypesB_13);
                }
#line 960 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 960 "typecheck.m"
                  {
#line 964 "typecheck.m"
                    {
#line 964 "typecheck.m"
                      check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ConstraintsA_6, check_hlds__typecheck__ConstraintsB_8, &check_hlds__typecheck__TypesA0_14, &check_hlds__typecheck__TypesB0_15);
                    }
#line 960 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 960 "typecheck.m"
                      {
#line 965 "typecheck.m"
                        {
#line 965 "typecheck.m"
                          *check_hlds__typecheck__HeadVar__3_3 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesA_12, check_hlds__typecheck__TypesA0_14);
                        }
#line 966 "typecheck.m"
                        {
#line 966 "typecheck.m"
                          *check_hlds__typecheck__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_16_16, check_hlds__typecheck__ArgTypesB_13, check_hlds__typecheck__TypesB0_15);
                        }
#line 966 "typecheck.m"
                        check_hlds__typecheck__succeeded = MR_TRUE;
#line 960 "typecheck.m"
                      }
#line 960 "typecheck.m"
                  }
#line 960 "typecheck.m"
              }
#line 959 "typecheck.m"
          }
#line 960 "typecheck.m"
      }
#line 958 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 958 "typecheck.m"
  }
#line 955 "typecheck.m"
}

#line 921 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__KindMap_8,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsA_9,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesA_10,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsA_11,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__ExistQVarsB_12,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__ArgTypesB_13,
#line 921 "typecheck.m"
  MR_Word check_hlds__typecheck__TypeConstraintsB_14)
#line 921 "typecheck.m"
{
#line 926 "typecheck.m"
  {
#line 926 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_29_29;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_17_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_18_43;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstrainedTypesA_15;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__ConstrainedTypesB_16;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarTypesA_17;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistQVarTypesB_18;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesListA_19;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__TypesListB_20;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__V_21_21;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__V_22_22;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__V_23_23;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__V_24_24;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__V_25_25;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__V_26_26;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__V_27_27;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__V_28_28;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCsA_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 0)));
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCsA_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsA_11, (MR_Integer) 1)));
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivCsB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 0)));
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistCsB_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__TypeConstraintsB_14, (MR_Integer) 1)));
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivTypesA_38;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__UnivTypesB_39;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypesA_40;
#line 926 "typecheck.m"
    MR_Word check_hlds__typecheck__ExistTypesB_41;
#line 975 "typecheck.m"
    MR_Word check_hlds__typecheck__V_46_46;
#line 976 "typecheck.m"
    MR_Word check_hlds__typecheck__V_47_47;

#line 948 "typecheck.m"
    {
#line 948 "typecheck.m"
      check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36);
    }
#line 926 "typecheck.m"
    if (check_hlds__typecheck__succeeded)
#line 926 "typecheck.m"
      {
#line 949 "typecheck.m"
        {
#line 949 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__list__same_length_2_p_0(check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__TypeCtorInfo_17_42, check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37);
        }
#line 926 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 926 "typecheck.m"
          {
#line 950 "typecheck.m"
            {
#line 950 "typecheck.m"
              check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__UnivCsA_34, check_hlds__typecheck__UnivCsB_36, &check_hlds__typecheck__UnivTypesA_38, &check_hlds__typecheck__UnivTypesB_39);
            }
#line 926 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 926 "typecheck.m"
              {
#line 951 "typecheck.m"
                {
#line 951 "typecheck.m"
                  check_hlds__typecheck__succeeded = check_hlds__typecheck__same_structure_2_4_p_0(check_hlds__typecheck__ExistCsA_35, check_hlds__typecheck__ExistCsB_37, &check_hlds__typecheck__ExistTypesA_40, &check_hlds__typecheck__ExistTypesB_41);
                }
#line 926 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 926 "typecheck.m"
                  {
#line 15675 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_18_43 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 952 "typecheck.m"
                    {
#line 952 "typecheck.m"
                      check_hlds__typecheck__ConstrainedTypesA_15 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesA_40, check_hlds__typecheck__UnivTypesA_38);
                    }
#line 953 "typecheck.m"
                    {
#line 953 "typecheck.m"
                      check_hlds__typecheck__ConstrainedTypesB_16 = mercury__list__f_43_43_2_f_0(check_hlds__typecheck__TypeCtorInfo_18_43, check_hlds__typecheck__ExistTypesB_41, check_hlds__typecheck__UnivTypesB_39);
                    }
#line 929 "typecheck.m"
                    {
#line 929 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsA_9, &check_hlds__typecheck__ExistQVarTypesA_17);
                    }
#line 930 "typecheck.m"
                    {
#line 930 "typecheck.m"
                      parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__typecheck__KindMap_8, check_hlds__typecheck__ExistQVarsB_12, &check_hlds__typecheck__ExistQVarTypesB_18);
                    }
#line 931 "typecheck.m"
                    check_hlds__typecheck__V_24_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15699 "check_hlds.typecheck.c"
                    check_hlds__typecheck__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 931 "typecheck.m"
                    {
#line 931 "typecheck.m"
                      check_hlds__typecheck__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_23_23, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesA_15));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_23_23, 1) = ((MR_Box) (check_hlds__typecheck__V_24_24));
#line 931 "typecheck.m"
                    }
#line 931 "typecheck.m"
                    {
#line 931 "typecheck.m"
                      check_hlds__typecheck__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_22_22, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesA_10));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_22_22, 1) = ((MR_Box) (check_hlds__typecheck__V_23_23));
#line 931 "typecheck.m"
                    }
#line 931 "typecheck.m"
                    {
#line 931 "typecheck.m"
                      check_hlds__typecheck__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesA_17));
#line 931 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_21_21, 1) = ((MR_Box) (check_hlds__typecheck__V_22_22));
#line 931 "typecheck.m"
                    }
#line 931 "typecheck.m"
                    {
#line 931 "typecheck.m"
                      mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__V_21_21, &check_hlds__typecheck__TypesListA_19);
                    }
#line 932 "typecheck.m"
                    check_hlds__typecheck__V_28_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 932 "typecheck.m"
                    {
#line 932 "typecheck.m"
                      check_hlds__typecheck__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_27_27, 0) = ((MR_Box) (check_hlds__typecheck__ConstrainedTypesB_16));
#line 932 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_27_27, 1) = ((MR_Box) (check_hlds__typecheck__V_28_28));
#line 932 "typecheck.m"
                    }
#line 932 "typecheck.m"
                    {
#line 932 "typecheck.m"
                      check_hlds__typecheck__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 0) = ((MR_Box) (check_hlds__typecheck__ArgTypesB_13));
#line 932 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_26_26, 1) = ((MR_Box) (check_hlds__typecheck__V_27_27));
#line 932 "typecheck.m"
                    }
#line 932 "typecheck.m"
                    {
#line 932 "typecheck.m"
                      check_hlds__typecheck__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 932 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_25_25, 0) = ((MR_Box) (check_hlds__typecheck__ExistQVarTypesB_18));
#line 932 "typecheck.m"
                      MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_25_25, 1) = ((MR_Box) (check_hlds__typecheck__V_26_26));
#line 932 "typecheck.m"
                    }
#line 932 "typecheck.m"
                    {
#line 932 "typecheck.m"
                      mercury__list__condense_2_p_0(check_hlds__typecheck__TypeCtorInfo_29_29, check_hlds__typecheck__V_25_25, &check_hlds__typecheck__TypesListB_20);
                    }
#line 975 "typecheck.m"
                    {
#line 975 "typecheck.m"
                      check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListA_19, check_hlds__typecheck__TypesListB_20, &check_hlds__typecheck__V_46_46);
                    }
#line 926 "typecheck.m"
                    if (check_hlds__typecheck__succeeded)
#line 976 "typecheck.m"
                      {
#line 976 "typecheck.m"
                        check_hlds__typecheck__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(check_hlds__typecheck__TypesListB_20, check_hlds__typecheck__TypesListA_19, &check_hlds__typecheck__V_47_47);
                      }
#line 926 "typecheck.m"
                  }
#line 926 "typecheck.m"
              }
#line 926 "typecheck.m"
          }
#line 926 "typecheck.m"
      }
#line 926 "typecheck.m"
    return check_hlds__typecheck__succeeded;
#line 926 "typecheck.m"
  }
#line 921 "typecheck.m"
}

#line 906 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_1(
#line 906 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 906 "typecheck.m"
{
#line 906 "typecheck.m"
  {
#line 906 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 906 "typecheck.m"
    MR_builtin_longjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0, 1);
#line 906 "typecheck.m"
  }
#line 906 "typecheck.m"
}

#line 906 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_2(
#line 906 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 906 "typecheck.m"
{
#line 906 "typecheck.m"
  {
#line 906 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 906 "typecheck.m"
    {
#line 909 "typecheck.m"
      {
#line 909 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) &check_hlds__typecheck_scalar_common_1[1], ((MR_Box) ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7)), (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__HeadTypeVars_3);
      }
#line 908 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = !((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded);
#line 908 "typecheck.m"
      if ((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded)
#line 908 "typecheck.m"
        {
#line 908 "typecheck.m"
          check_hlds__typecheck__is_head_class_constraint_2_p_0_1(check_hlds__typecheck__env_ptr);
#line 908 "typecheck.m"
          return;
        }
#line 906 "typecheck.m"
    }
#line 906 "typecheck.m"
  }
#line 906 "typecheck.m"
}

#line 906 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0_3(
#line 906 "typecheck.m"
  void * check_hlds__typecheck__env_ptr_arg)
#line 906 "typecheck.m"
{
#line 906 "typecheck.m"
  {
#line 906 "typecheck.m"
    struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s * check_hlds__typecheck__env_ptr = (struct check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0_s *) check_hlds__typecheck__env_ptr_arg;

#line 906 "typecheck.m"
    if (MR_builtin_setjmp((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__commit_0) == 0)
#line 906 "typecheck.m"
      {
#line 907 "typecheck.m"
        {
#line 907 "typecheck.m"
          parse_tree__prog_type__type_list_contains_var_2_p_0((check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6, &(check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__TVar_7, check_hlds__typecheck__is_head_class_constraint_2_p_0_2, check_hlds__typecheck__env_ptr);
        }
#line 906 "typecheck.m"
        (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_FALSE;
#line 906 "typecheck.m"
      }
#line 906 "typecheck.m"
    else
#line 906 "typecheck.m"
      (check_hlds__typecheck__env_ptr)->check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__succeeded = MR_TRUE;
#line 906 "typecheck.m"
  }
#line 906 "typecheck.m"
}

#line 901 "typecheck.m"
static MR_bool MR_CALL 
check_hlds__typecheck__is_head_class_constraint_2_p_0(
#line 901 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadTypeVars_3,
#line 901 "typecheck.m"
  MR_Word check_hlds__typecheck__Constraint_4)
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
#line 905 "typecheck.m"
      MR_Word check_hlds__typecheck___ClassName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 0)));

#line 905 "typecheck.m"
      (check_hlds__typecheck__env).check_hlds__typecheck__is_head_class_constraint_2_p_0_env_0__ArgTypes_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Constraint_4, (MR_Integer) 1)));
#line 906 "typecheck.m"
      {
#line 906 "typecheck.m"
        check_hlds__typecheck__is_head_class_constraint_2_p_0_3(&check_hlds__typecheck__env);
      }
#line 906 "typecheck.m"
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
      check_hlds__typecheck__V_49_49 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
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
    MR_Word check_hlds__typecheck__ConstraintProofMap_40;
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
#line 16962 "check_hlds.typecheck.c"
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
      check_hlds__typecheck_info__typecheck_info_get_final_info_12_p_0(check_hlds__typecheck__STATE_VARIABLE_Info_92_92, check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_77_77, check_hlds__typecheck__ExistQVars0_24, check_hlds__typecheck__ExplicitVarTypes0_20, &check_hlds__typecheck__TypeVarSet_37, &check_hlds__typecheck__STATE_VARIABLE_HeadTypeParams_93_93, &check_hlds__typecheck__InferredVarTypes0_38, &check_hlds__typecheck__InferredTypeConstraints0_39, &check_hlds__typecheck__ConstraintProofMap_40, &check_hlds__typecheck__ConstraintMap_41, &check_hlds__typecheck__TVarRenaming_42, &check_hlds__typecheck__ExistTypeRenaming_43);
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
      hlds__hlds_pred__pred_info_set_constraint_proof_map_3_p_0(check_hlds__typecheck__ConstraintProofMap_40, check_hlds__typecheck__STATE_VARIABLE_PredInfo_98_98, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_99_99);
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
        MR_Word check_hlds__typecheck__TVarKindMap_57;

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
          hlds__hlds_pred__pred_info_get_tvar_kind_map_2_p_0(*check_hlds__typecheck__STATE_VARIABLE_PredInfo_69, &check_hlds__typecheck__TVarKindMap_57);
        }
#line 661 "typecheck.m"
        {
#line 661 "typecheck.m"
          check_hlds__typecheck__succeeded = check_hlds__typecheck__argtypes_identical_up_to_renaming_7_p_0(check_hlds__typecheck__TVarKindMap_57, check_hlds__typecheck__ExistQVars0_24, check_hlds__typecheck__ArgTypes0_25, check_hlds__typecheck__OldTypeConstraints_56, check_hlds__typecheck__ExistQVars_55, check_hlds__typecheck__ArgTypes_51, check_hlds__typecheck__InferredTypeConstraints_53);
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
          check_hlds__typecheck__succeeded = libs__globals__lookup_bool_option_3_p_1(check_hlds__typecheck__Globals_12, (MR_Integer) 165, (MR_Integer) 1);
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
#line 989 "typecheck.m"
              MR_Word check_hlds__typecheck__Origin_72;
#line 989 "typecheck.m"
              MR_Word check_hlds__typecheck__SpecialPredId_73;
#line 989 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeCtor_74;
#line 989 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeTable_75;
#line 989 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeDefn_76;
#line 989 "typecheck.m"
              MR_Word check_hlds__typecheck__Body_77;
#line 989 "typecheck.m"
              MR_Word check_hlds__typecheck__V_78_78;
#line 997 "typecheck.m"
              MR_Word check_hlds__typecheck__TypeCtorInfo_13_80;
#line 997 "typecheck.m"
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
#line 992 "typecheck.m"
                  {
#line 992 "typecheck.m"
                    hlds__hlds_pred__pred_info_get_origin_2_p_0(check_hlds__typecheck__PredInfo0_32, &check_hlds__typecheck__Origin_72);
                  }
#line 993 "typecheck.m"
                  check_hlds__typecheck__succeeded = ((MR_tag((MR_Word) check_hlds__typecheck__Origin_72)) == (MR_mktag((MR_Integer) 0)));
#line 993 "typecheck.m"
                  if (check_hlds__typecheck__succeeded)
#line 993 "typecheck.m"
                    {
#line 993 "typecheck.m"
                      check_hlds__typecheck__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Origin_72, (MR_Integer) 0)));
#line 993 "typecheck.m"
                      check_hlds__typecheck__SpecialPredId_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_78_78, (MR_Integer) 0)));
#line 993 "typecheck.m"
                      check_hlds__typecheck__TypeCtor_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_78_78, (MR_Integer) 1)));
#line 997 "typecheck.m"
                      {
#line 997 "typecheck.m"
                        check_hlds__typecheck__V_79_79 = parse_tree__prog_type__builtin_type_ctors_with_no_hlds_type_defn_0_f_0();
                      }
#line 17992 "check_hlds.typecheck.c"
                      check_hlds__typecheck__TypeCtorInfo_13_80 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 997 "typecheck.m"
                      {
#line 997 "typecheck.m"
                        check_hlds__typecheck__succeeded = mercury__list__member_2_p_0(check_hlds__typecheck__TypeCtorInfo_13_80, ((MR_Box) (check_hlds__typecheck__TypeCtor_74)), check_hlds__typecheck__V_79_79);
                      }
#line 997 "typecheck.m"
                      check_hlds__typecheck__succeeded = !(check_hlds__typecheck__succeeded);
#line 989 "typecheck.m"
                      if (check_hlds__typecheck__succeeded)
#line 989 "typecheck.m"
                        {
#line 1001 "typecheck.m"
                          {
#line 1001 "typecheck.m"
                            hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__TypeTable_75);
                          }
#line 1002 "typecheck.m"
                          {
#line 1002 "typecheck.m"
                            hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__typecheck__TypeTable_75, check_hlds__typecheck__TypeCtor_74, &check_hlds__typecheck__TypeDefn_76);
                          }
#line 1003 "typecheck.m"
                          {
#line 1003 "typecheck.m"
                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__typecheck__TypeDefn_76, &check_hlds__typecheck__Body_77);
                          }
#line 1004 "typecheck.m"
                          {
#line 1004 "typecheck.m"
                            check_hlds__typecheck__succeeded = hlds__special_pred__special_pred_for_type_needs_typecheck_3_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__SpecialPredId_73, check_hlds__typecheck__Body_77);
                          }
#line 989 "typecheck.m"
                        }
#line 993 "typecheck.m"
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
#line 18265 "check_hlds.typecheck.c"
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
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_54_54, 0) = ((MR_Box) (((MR_Integer) 43 | (((MR_Integer) 1 << (MR_Integer) 10)))));
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

#line 218 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__typecheck_to_fixpoint_9_p_0(
#line 218 "typecheck.m"
  MR_Integer check_hlds__typecheck__Iteration_10,
#line 218 "typecheck.m"
  MR_Integer check_hlds__typecheck__MaxIterations_11,
#line 218 "typecheck.m"
  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32,
#line 218 "typecheck.m"
  MR_Word * check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33,
#line 218 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIds_13,
#line 218 "typecheck.m"
  MR_Word check_hlds__typecheck__OrigValidPredIdSet_14,
#line 218 "typecheck.m"
  MR_Word * check_hlds__typecheck__FinalValidPredIdSet_15,
#line 218 "typecheck.m"
  MR_Word * check_hlds__typecheck__Specs_16,
#line 218 "typecheck.m"
  MR_Word * check_hlds__typecheck__ExceededIterationLimit_17)
#line 218 "typecheck.m"
{
#line 225 "typecheck.m"
  while (MR_TRUE)
#line 225 "typecheck.m"
    {
#line 225 "typecheck.m"
      /* tailcall optimized into a loop */
#line 225 "typecheck.m"
      {
#line 225 "typecheck.m"
        MR_bool check_hlds__typecheck__succeeded;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_51_51;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__TypeCtorInfo_52_52;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__PredMap0_18;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_19;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_20;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__NewlyInvalidPredIds_21;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__CurSpecs_22;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__Changed_23;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__PredMap_24;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__NewValidPredIdSet_25;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__Globals_26;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37;
#line 225 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;

#line 226 "typecheck.m"
        {
#line 226 "typecheck.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__typecheck__PredMap0_18);
        }
#line 18622 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_51_51 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 18624 "check_hlds.typecheck.c"
        check_hlds__typecheck__TypeCtorInfo_52_52 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 227 "typecheck.m"
        {
#line 227 "typecheck.m"
          mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_51_51, check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__PredMap0_18, &check_hlds__typecheck__PredIdsInfos0_19);
        }
#line 228 "typecheck.m"
        {
#line 228 "typecheck.m"
          check_hlds__typecheck__typecheck_module_one_iteration_10_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, check_hlds__typecheck__OrigValidPredIdSet_14, check_hlds__typecheck__PredIdsInfos0_19, &check_hlds__typecheck__PredIdsInfos_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__NewlyInvalidPredIds_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__CurSpecs_22, (MR_Integer) 0, &check_hlds__typecheck__Changed_23);
        }
#line 231 "typecheck.m"
        {
#line 231 "typecheck.m"
          mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_51_51, check_hlds__typecheck__TypeCtorInfo_52_52, check_hlds__typecheck__PredIdsInfos_20, &check_hlds__typecheck__PredMap_24);
        }
#line 232 "typecheck.m"
        {
#line 232 "typecheck.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_24, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37);
        }
#line 234 "typecheck.m"
        {
#line 234 "typecheck.m"
          hlds__hlds_module__module_info_make_pred_ids_invalid_3_p_0(check_hlds__typecheck__NewlyInvalidPredIds_21, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_37_37, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38);
        }
#line 235 "typecheck.m"
        {
#line 235 "typecheck.m"
          hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__typecheck__NewValidPredIdSet_25);
        }
#line 237 "typecheck.m"
        {
#line 237 "typecheck.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, &check_hlds__typecheck__Globals_26);
        }
#line 239 "typecheck.m"
        check_hlds__typecheck__succeeded = (check_hlds__typecheck__Changed_23 == (MR_Integer) 0);
#line 240 "typecheck.m"
        if (!(check_hlds__typecheck__succeeded))
#line 240 "typecheck.m"
          {
#line 240 "typecheck.m"
            MR_Word check_hlds__typecheck__V_39_39;

#line 240 "typecheck.m"
            {
#line 240 "typecheck.m"
              check_hlds__typecheck__V_39_39 = parse_tree__error_util__contains_errors_2_f_0(check_hlds__typecheck__Globals_26, check_hlds__typecheck__CurSpecs_22);
            }
#line 240 "typecheck.m"
            check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_39_39 == (MR_Integer) 1);
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
            *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;
#line 243 "typecheck.m"
          }
#line 246 "typecheck.m"
        else
#line 247 "typecheck.m"
          {
#line 247 "typecheck.m"
            MR_Word check_hlds__typecheck__DebugTypes_27;

#line 247 "typecheck.m"
            {
#line 247 "typecheck.m"
              libs__globals__lookup_bool_option_3_p_0(check_hlds__typecheck__Globals_26, (MR_Integer) 58, &check_hlds__typecheck__DebugTypes_27);
            }
#line 255 "typecheck.m"
            if ((check_hlds__typecheck__DebugTypes_27 == (MR_Integer) 0))
#line 256 "typecheck.m"
              {
#line 256 "typecheck.m"
              }
#line 255 "typecheck.m"
            else
#line 249 "typecheck.m"
              {
#line 249 "typecheck.m"
                MR_Word check_hlds__typecheck__ProgressSpecs_28;
#line 253 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_30_30;
#line 253 "typecheck.m"
                MR_Integer check_hlds__typecheck__V_31_31;

#line 250 "typecheck.m"
                {
#line 250 "typecheck.m"
                  check_hlds__typecheck__construct_type_inference_messages_5_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38, check_hlds__typecheck__NewValidPredIdSet_25, check_hlds__typecheck__OrigValidPredIds_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__ProgressSpecs_28);
                }
#line 253 "typecheck.m"
                {
#line 253 "typecheck.m"
                  parse_tree__error_util__write_error_specs_8_p_0(check_hlds__typecheck__ProgressSpecs_28, check_hlds__typecheck__Globals_26, (MR_Integer) 0, &check_hlds__typecheck__V_30_30, (MR_Integer) 0, &check_hlds__typecheck__V_31_31);
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
                MR_Integer check_hlds__typecheck__V_46_46 = (check_hlds__typecheck__Iteration_10 + (MR_Integer) 1);

#line 259 "typecheck.m"
                /* direct tailcall eliminated */
#line 259 "typecheck.m"
                {
#line 259 "typecheck.m"
                  MR_Integer check_hlds__typecheck__Iteration__tmp_copy_10 = check_hlds__typecheck__V_46_46;
#line 259 "typecheck.m"
                  MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0__tmp_copy_32 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;

#line 259 "typecheck.m"
                  check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_32 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0__tmp_copy_32;
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
                MR_Word check_hlds__typecheck__V_49_49;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__Pieces_55;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__Msg_56;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_59_59;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_62_62;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_65_65;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_69_69;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_86_86;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_87_87;
#line 263 "typecheck.m"
                MR_Word check_hlds__typecheck__V_91_91;

#line 263 "typecheck.m"
                *check_hlds__typecheck__FinalValidPredIdSet_15 = check_hlds__typecheck__NewValidPredIdSet_25;
#line 334 "typecheck.m"
                {
#line 334 "typecheck.m"
                  check_hlds__typecheck__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__V_69_69, 1) = ((MR_Box) (check_hlds__typecheck__MaxIterations_11));
#line 334 "typecheck.m"
                }
#line 334 "typecheck.m"
                {
#line 334 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__V_69_69));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__typecheck_scalar_common_1[13])));
#line 334 "typecheck.m"
                }
#line 334 "typecheck.m"
                {
#line 334 "typecheck.m"
                  check_hlds__typecheck__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[17])));
#line 334 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_65_65, 1) = ((MR_Box) (check_hlds__typecheck__V_68_68));
#line 334 "typecheck.m"
                }
#line 333 "typecheck.m"
                {
#line 333 "typecheck.m"
                  check_hlds__typecheck__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 333 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[16])));
#line 333 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_62_62, 1) = ((MR_Box) (check_hlds__typecheck__V_65_65));
#line 333 "typecheck.m"
                }
#line 332 "typecheck.m"
                {
#line 332 "typecheck.m"
                  check_hlds__typecheck__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[15])));
#line 332 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_59_59, 1) = ((MR_Box) (check_hlds__typecheck__V_62_62));
#line 332 "typecheck.m"
                }
#line 331 "typecheck.m"
                {
#line 331 "typecheck.m"
                  check_hlds__typecheck__Pieces_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__typecheck_scalar_common_1[14])));
#line 331 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Pieces_55, 1) = ((MR_Box) (check_hlds__typecheck__V_59_59));
#line 331 "typecheck.m"
                }
#line 338 "typecheck.m"
                {
#line 338 "typecheck.m"
                  check_hlds__typecheck__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_87_87, 0) = ((MR_Box) (check_hlds__typecheck__Pieces_55));
#line 338 "typecheck.m"
                }
#line 338 "typecheck.m"
                {
#line 338 "typecheck.m"
                  check_hlds__typecheck__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_86_86, 0) = ((MR_Box) (check_hlds__typecheck__V_87_87));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "typecheck.m"
                }
#line 338 "typecheck.m"
                {
#line 338 "typecheck.m"
                  check_hlds__typecheck__Msg_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 1) = ((MR_Box) ((MR_Integer) 1));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 2) = ((MR_Box) ((MR_Integer) 0));
#line 338 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__Msg_56, 3) = ((MR_Box) (check_hlds__typecheck__V_86_86));
#line 338 "typecheck.m"
                }
#line 339 "typecheck.m"
                {
#line 339 "typecheck.m"
                  check_hlds__typecheck__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_91_91, 0) = ((MR_Box) (check_hlds__typecheck__Msg_56));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "typecheck.m"
                }
#line 339 "typecheck.m"
                {
#line 339 "typecheck.m"
                  check_hlds__typecheck__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 339 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__V_49_49, 2) = ((MR_Box) (check_hlds__typecheck__V_91_91));
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
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__V_49_49));
#line 264 "typecheck.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "typecheck.m"
                }
#line 265 "typecheck.m"
                *check_hlds__typecheck__ExceededIterationLimit_17 = (MR_Integer) 1;
#line 265 "typecheck.m"
                *check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_33 = check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_38_38;
#line 263 "typecheck.m"
              }
#line 247 "typecheck.m"
          }
#line 225 "typecheck.m"
      }
#line 225 "typecheck.m"
      break;
#line 225 "typecheck.m"
    }
#line 218 "typecheck.m"
}

#line 187 "typecheck.m"
static void MR_CALL 
check_hlds__typecheck__prepare_for_typecheck_4_p_0(
#line 187 "typecheck.m"
  MR_Word check_hlds__typecheck__ModuleInfo_1,
#line 187 "typecheck.m"
  MR_Word check_hlds__typecheck__ValidPredIdSet_2,
#line 187 "typecheck.m"
  MR_Word check_hlds__typecheck__HeadVar__3_3,
#line 187 "typecheck.m"
  MR_Word * check_hlds__typecheck__HeadVar__4_4)
#line 187 "typecheck.m"
{
#line 191 "typecheck.m"
  {
#line 191 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;

#line 191 "typecheck.m"
    if ((check_hlds__typecheck__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 191 "typecheck.m"
      *check_hlds__typecheck__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "typecheck.m"
    else
#line 193 "typecheck.m"
      {
#line 193 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 0)));
#line 193 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__typecheck__HeadVar__3_3, (MR_Integer) 1)));
#line 193 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdInfo_11;
#line 193 "typecheck.m"
        MR_Word check_hlds__typecheck__PredIdsInfos_12;
#line 193 "typecheck.m"
        MR_Word check_hlds__typecheck__PredId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 0)));
#line 193 "typecheck.m"
        MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo0_9, (MR_Integer) 1)));

#line 196 "typecheck.m"
        {
#line 196 "typecheck.m"
          check_hlds__typecheck__succeeded = mercury__set_tree234__contains_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, check_hlds__typecheck__ValidPredIdSet_2, ((MR_Box) (check_hlds__typecheck__PredId_14)));
        }
#line 208 "typecheck.m"
        if (check_hlds__typecheck__succeeded)
#line 198 "typecheck.m"
          {
#line 198 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalIdClausesInfo0_15;
#line 198 "typecheck.m"
            MR_Word check_hlds__typecheck__GoalIdClausesInfo_17;
#line 198 "typecheck.m"
            MR_Word check_hlds__typecheck__Globals_18;
#line 198 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 198 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21;
#line 198 "typecheck.m"
            MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22;
#line 198 "typecheck.m"
            MR_Word check_hlds__typecheck__ImportStatus_30;
#line 198 "typecheck.m"
            MR_Word check_hlds__typecheck__ClausesInfo0_31;
#line 198 "typecheck.m"
            MR_Word check_hlds__typecheck__ClausesRep0_32;
#line 199 "typecheck.m"
            MR_Word check_hlds__typecheck___ContainingGoalMap_16;
#line 1020 "typecheck.m"
            MR_Word check_hlds__typecheck___ItemNumbers0_33;
#line 1022 "typecheck.m"
            MR_Word check_hlds__typecheck__V_57_57;
#line 1022 "typecheck.m"
            MR_Word check_hlds__typecheck__V_58_58;

#line 198 "typecheck.m"
            {
#line 198 "typecheck.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__GoalIdClausesInfo0_15);
            }
#line 199 "typecheck.m"
            {
#line 199 "typecheck.m"
              hlds__goal_path__fill_goal_id_slots_in_clauses_4_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck___ContainingGoalMap_16, check_hlds__typecheck__GoalIdClausesInfo0_15, &check_hlds__typecheck__GoalIdClausesInfo_17);
            }
#line 201 "typecheck.m"
            {
#line 201 "typecheck.m"
              hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__GoalIdClausesInfo_17, check_hlds__typecheck__STATE_VARIABLE_PredInfo_19_19, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 1018 "typecheck.m"
            {
#line 1018 "typecheck.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ImportStatus_30);
            }
#line 1019 "typecheck.m"
            {
#line 1019 "typecheck.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__ClausesInfo0_31);
            }
#line 1020 "typecheck.m"
            {
#line 1020 "typecheck.m"
              hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesRep0_32, &check_hlds__typecheck___ItemNumbers0_33);
            }
#line 1022 "typecheck.m"
            {
#line 1022 "typecheck.m"
              check_hlds__typecheck__succeeded = hlds__hlds_pred__pred_info_is_field_access_function_2_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
            }
#line 1022 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1022 "typecheck.m"
              {
#line 1023 "typecheck.m"
                {
#line 1023 "typecheck.m"
                  check_hlds__typecheck__V_57_57 = hlds__hlds_clauses__clause_list_is_empty_1_f_0(check_hlds__typecheck__ClausesRep0_32);
                }
#line 1023 "typecheck.m"
                check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_57_57 == (MR_Integer) 1);
#line 1022 "typecheck.m"
                if (check_hlds__typecheck__succeeded)
#line 1022 "typecheck.m"
                  {
#line 1024 "typecheck.m"
                    {
#line 1024 "typecheck.m"
                      check_hlds__typecheck__V_58_58 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(check_hlds__typecheck__ImportStatus_30);
                    }
#line 1024 "typecheck.m"
                    check_hlds__typecheck__succeeded = (check_hlds__typecheck__V_58_58 == (MR_Integer) 1);
#line 1022 "typecheck.m"
                  }
#line 1022 "typecheck.m"
              }
#line 1052 "typecheck.m"
            if (check_hlds__typecheck__succeeded)
#line 1026 "typecheck.m"
              {
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__TypeInfo_53_75;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__HeadVars_34;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncArgs_35;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncRetVal_36;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__Context_37;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncModule_38;
#line 1026 "typecheck.m"
                MR_String check_hlds__typecheck__FuncName_39;
#line 1026 "typecheck.m"
                MR_Integer check_hlds__typecheck__PredArity_40;
#line 1026 "typecheck.m"
                MR_Integer check_hlds__typecheck__FuncArity_41;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncSymName_42;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncConsId_43;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__FuncRHS_44;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__Goal0_45;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalExpr_46;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalInfo0_47;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__NonLocals_48;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__GoalInfo_49;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__Goal_50;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__Clause_51;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesRep_52;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__ItemNumbers_53;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__ClausesInfo_54;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers0_55;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__Markers_56;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__V_60_60;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__V_64_64;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__V_68_68;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71;
#line 1026 "typecheck.m"
                MR_Word check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72;
#line 1027 "typecheck.m"
                MR_Box check_hlds__typecheck__conv0_FuncRetVal_36;

#line 1026 "typecheck.m"
                {
#line 1026 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__HeadVars_34);
                }
#line 19142 "check_hlds.typecheck.c"
                check_hlds__typecheck__TypeInfo_53_75 = (MR_Word) &check_hlds__typecheck_scalar_common_1[2];
#line 1027 "typecheck.m"
                {
#line 1027 "typecheck.m"
                  hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34, &check_hlds__typecheck__FuncArgs_35, &check_hlds__typecheck__conv0_FuncRetVal_36);
                }
#line 1027 "typecheck.m"
                check_hlds__typecheck__FuncRetVal_36 = ((MR_Word) check_hlds__typecheck__conv0_FuncRetVal_36);
#line 1028 "typecheck.m"
                {
#line 1028 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__Context_37);
                }
#line 1029 "typecheck.m"
                {
#line 1029 "typecheck.m"
                  check_hlds__typecheck__FuncModule_38 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1030 "typecheck.m"
                {
#line 1030 "typecheck.m"
                  check_hlds__typecheck__FuncName_39 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1031 "typecheck.m"
                {
#line 1031 "typecheck.m"
                  check_hlds__typecheck__PredArity_40 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20);
                }
#line 1032 "typecheck.m"
                {
#line 1032 "typecheck.m"
                  parse_tree__prog_util__adjust_func_arity_3_p_1((MR_Integer) 1, &check_hlds__typecheck__FuncArity_41, check_hlds__typecheck__PredArity_40);
                }
#line 1033 "typecheck.m"
                {
#line 1033 "typecheck.m"
                  check_hlds__typecheck__FuncSymName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 0) = ((MR_Box) (check_hlds__typecheck__FuncModule_38));
#line 1033 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncSymName_42, 1) = ((MR_Box) (check_hlds__typecheck__FuncName_39));
#line 1033 "typecheck.m"
                }
#line 1034 "typecheck.m"
                {
#line 1034 "typecheck.m"
                  check_hlds__typecheck__V_60_60 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
                }
#line 1034 "typecheck.m"
                {
#line 1034 "typecheck.m"
                  check_hlds__typecheck__FuncConsId_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1034 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1034 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 1) = ((MR_Box) (check_hlds__typecheck__FuncSymName_42));
#line 1034 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 2) = ((MR_Box) (check_hlds__typecheck__FuncArity_41));
#line 1034 "typecheck.m"
                  MR_hl_field(MR_mktag(3), check_hlds__typecheck__FuncConsId_43, 3) = ((MR_Box) (check_hlds__typecheck__V_60_60));
#line 1034 "typecheck.m"
                }
#line 1035 "typecheck.m"
                {
#line 1035 "typecheck.m"
                  check_hlds__typecheck__FuncRHS_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 0) = ((MR_Box) (check_hlds__typecheck__FuncConsId_43));
#line 1035 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1035 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__FuncRHS_44, 2) = ((MR_Box) (check_hlds__typecheck__FuncArgs_35));
#line 1035 "typecheck.m"
                }
#line 1036 "typecheck.m"
                {
#line 1036 "typecheck.m"
                  hlds__make_goal__create_pure_atomic_complicated_unification_6_p_0(check_hlds__typecheck__FuncRetVal_36, check_hlds__typecheck__FuncRHS_44, check_hlds__typecheck__Context_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__Goal0_45);
                }
#line 1038 "typecheck.m"
                check_hlds__typecheck__GoalExpr_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 0)));
#line 1038 "typecheck.m"
                check_hlds__typecheck__GoalInfo0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal0_45, (MR_Integer) 1)));
#line 1039 "typecheck.m"
                {
#line 1039 "typecheck.m"
                  check_hlds__typecheck__V_64_64 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(check_hlds__typecheck__TypeInfo_53_75, check_hlds__typecheck__HeadVars_34);
                }
#line 1039 "typecheck.m"
                {
#line 1039 "typecheck.m"
                  check_hlds__typecheck__NonLocals_48 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__typecheck__V_64_64);
                }
#line 1040 "typecheck.m"
                {
#line 1040 "typecheck.m"
                  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__typecheck__NonLocals_48, check_hlds__typecheck__GoalInfo0_47, &check_hlds__typecheck__GoalInfo_49);
                }
#line 1041 "typecheck.m"
                {
#line 1041 "typecheck.m"
                  check_hlds__typecheck__Goal_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 0) = ((MR_Box) (check_hlds__typecheck__GoalExpr_46));
#line 1041 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Goal_50, 1) = ((MR_Box) (check_hlds__typecheck__GoalInfo_49));
#line 1041 "typecheck.m"
                }
#line 1042 "typecheck.m"
                {
#line 1042 "typecheck.m"
                  check_hlds__typecheck__Clause_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 1) = ((MR_Box) (check_hlds__typecheck__Goal_50));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 3) = ((MR_Box) (check_hlds__typecheck__Context_37));
#line 1042 "typecheck.m"
                  MR_hl_field(MR_mktag(0), check_hlds__typecheck__Clause_51, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1042 "typecheck.m"
                }
#line 1043 "typecheck.m"
                {
#line 1043 "typecheck.m"
                  check_hlds__typecheck__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 0) = ((MR_Box) (check_hlds__typecheck__Clause_51));
#line 1043 "typecheck.m"
                  MR_hl_field(MR_mktag(1), check_hlds__typecheck__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1043 "typecheck.m"
                }
#line 1043 "typecheck.m"
                {
#line 1043 "typecheck.m"
                  hlds__hlds_clauses__set_clause_list_2_p_0(check_hlds__typecheck__V_68_68, &check_hlds__typecheck__ClausesRep_52);
                }
#line 1044 "typecheck.m"
                {
#line 1044 "typecheck.m"
                  check_hlds__typecheck__ItemNumbers_53 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
                }
#line 1045 "typecheck.m"
                {
#line 1045 "typecheck.m"
                  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(check_hlds__typecheck__ClausesRep_52, check_hlds__typecheck__ItemNumbers_53, check_hlds__typecheck__ClausesInfo0_31, &check_hlds__typecheck__ClausesInfo_54);
                }
#line 1047 "typecheck.m"
                {
#line 1047 "typecheck.m"
                  hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71);
                }
#line 1048 "typecheck.m"
                {
#line 1048 "typecheck.m"
                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(check_hlds__typecheck__ClausesInfo_54, check_hlds__typecheck__STATE_VARIABLE_PredInfo_49_71, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72);
                }
#line 1049 "typecheck.m"
                {
#line 1049 "typecheck.m"
                  hlds__hlds_pred__pred_info_get_markers_2_p_0(check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__Markers0_55);
                }
#line 1050 "typecheck.m"
                {
#line 1050 "typecheck.m"
                  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, check_hlds__typecheck__Markers0_55, &check_hlds__typecheck__Markers_56);
                }
#line 1051 "typecheck.m"
                {
#line 1051 "typecheck.m"
                  hlds__hlds_pred__pred_info_set_markers_3_p_0(check_hlds__typecheck__Markers_56, check_hlds__typecheck__STATE_VARIABLE_PredInfo_50_72, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21);
                }
#line 1026 "typecheck.m"
              }
#line 1052 "typecheck.m"
            else
#line 1051 "typecheck.m"
              check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21 = check_hlds__typecheck__STATE_VARIABLE_PredInfo_20_20;
#line 205 "typecheck.m"
            {
#line 205 "typecheck.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__ModuleInfo_1, &check_hlds__typecheck__Globals_18);
            }
#line 206 "typecheck.m"
            {
#line 206 "typecheck.m"
              hlds__headvar_names__maybe_improve_headvar_names_3_p_0(check_hlds__typecheck__Globals_18, check_hlds__typecheck__STATE_VARIABLE_PredInfo_21_21, &check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22);
            }
#line 207 "typecheck.m"
            {
#line 207 "typecheck.m"
              check_hlds__typecheck__PredIdInfo_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 0) = ((MR_Box) (check_hlds__typecheck__PredId_14));
#line 207 "typecheck.m"
              MR_hl_field(MR_mktag(0), check_hlds__typecheck__PredIdInfo_11, 1) = ((MR_Box) (check_hlds__typecheck__STATE_VARIABLE_PredInfo_22_22));
#line 207 "typecheck.m"
            }
#line 198 "typecheck.m"
          }
#line 208 "typecheck.m"
        else
#line 209 "typecheck.m"
          check_hlds__typecheck__PredIdInfo_11 = check_hlds__typecheck__PredIdInfo0_9;
#line 212 "typecheck.m"
        {
#line 212 "typecheck.m"
          check_hlds__typecheck__prepare_for_typecheck_4_p_0(check_hlds__typecheck__ModuleInfo_1, check_hlds__typecheck__ValidPredIdSet_2, check_hlds__typecheck__PredIdsInfos0_10, &check_hlds__typecheck__PredIdsInfos_12);
        }
#line 193 "typecheck.m"
        {
#line 193 "typecheck.m"
          MR_Word base;
#line 193 "typecheck.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "typecheck.m"
          *check_hlds__typecheck__HeadVar__4_4 = base;
#line 193 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__typecheck__PredIdInfo_11));
#line 193 "typecheck.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__typecheck__PredIdsInfos_12));
#line 193 "typecheck.m"
        }
#line 193 "typecheck.m"
      }
#line 191 "typecheck.m"
  }
#line 187 "typecheck.m"
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
#line 151 "typecheck.m"
  {
#line 151 "typecheck.m"
    MR_bool check_hlds__typecheck__succeeded;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_26_26;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__TypeCtorInfo_27_27;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__Globals_8;
#line 151 "typecheck.m"
    MR_Integer check_hlds__typecheck__MaxIterations_9;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigValidPredIdSet_10;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__OrigValidPredIds_11;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMap0_12;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIdsInfos0_13;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__PredIdsInfos_14;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__PredMap_15;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__FinalValidPredIdSet_16;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__CheckSpecs_17;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__InferSpecs_18;
#line 151 "typecheck.m"
    MR_Word check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22;

#line 152 "typecheck.m"
    {
#line 152 "typecheck.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__Globals_8);
    }
#line 153 "typecheck.m"
    {
#line 153 "typecheck.m"
      libs__globals__lookup_int_option_3_p_0(check_hlds__typecheck__Globals_8, (MR_Integer) 170, &check_hlds__typecheck__MaxIterations_9);
    }
#line 156 "typecheck.m"
    {
#line 156 "typecheck.m"
      hlds__hlds_module__module_info_get_valid_pred_id_set_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__OrigValidPredIdSet_10);
    }
#line 19436 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_26_26 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 157 "typecheck.m"
    {
#line 157 "typecheck.m"
      check_hlds__typecheck__OrigValidPredIds_11 = mercury__set_tree234__to_sorted_list_1_f_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__OrigValidPredIdSet_10);
    }
#line 159 "typecheck.m"
    {
#line 159 "typecheck.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__PredMap0_12);
    }
#line 19448 "check_hlds.typecheck.c"
    check_hlds__typecheck__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 160 "typecheck.m"
    {
#line 160 "typecheck.m"
      mercury__map__to_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_27_27, check_hlds__typecheck__PredMap0_12, &check_hlds__typecheck__PredIdsInfos0_13);
    }
#line 173 "typecheck.m"
    {
#line 173 "typecheck.m"
      check_hlds__typecheck__prepare_for_typecheck_4_p_0(check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, check_hlds__typecheck__OrigValidPredIdSet_10, check_hlds__typecheck__PredIdsInfos0_13, &check_hlds__typecheck__PredIdsInfos_14);
    }
#line 176 "typecheck.m"
    {
#line 176 "typecheck.m"
      mercury__map__from_sorted_assoc_list_2_p_0(check_hlds__typecheck__TypeCtorInfo_26_26, check_hlds__typecheck__TypeCtorInfo_27_27, check_hlds__typecheck__PredIdsInfos_14, &check_hlds__typecheck__PredMap_15);
    }
#line 177 "typecheck.m"
    {
#line 177 "typecheck.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(check_hlds__typecheck__PredMap_15, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_0_19, &check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22);
    }
#line 179 "typecheck.m"
    {
#line 179 "typecheck.m"
      check_hlds__typecheck__typecheck_to_fixpoint_9_p_0((MR_Integer) 1, check_hlds__typecheck__MaxIterations_9, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_22_22, check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20, check_hlds__typecheck__OrigValidPredIds_11, check_hlds__typecheck__OrigValidPredIdSet_10, &check_hlds__typecheck__FinalValidPredIdSet_16, &check_hlds__typecheck__CheckSpecs_17, check_hlds__typecheck__ExceededIterationLimit_7);
    }
#line 183 "typecheck.m"
    {
#line 183 "typecheck.m"
      check_hlds__typecheck__construct_type_inference_messages_5_p_0(*check_hlds__typecheck__STATE_VARIABLE_ModuleInfo_20, check_hlds__typecheck__FinalValidPredIdSet_16, check_hlds__typecheck__OrigValidPredIds_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__typecheck__InferSpecs_18);
    }
#line 185 "typecheck.m"
    {
#line 185 "typecheck.m"
      *check_hlds__typecheck__Specs_6 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, check_hlds__typecheck__InferSpecs_18, check_hlds__typecheck__CheckSpecs_17);
    }
#line 151 "typecheck.m"
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
