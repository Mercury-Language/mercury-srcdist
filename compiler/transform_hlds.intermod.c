/*
** Automatically generated from `intermod.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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


/* :- module transform_hlds.intermod. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__intermod__init
ENDINIT
*/

#include "transform_hlds.intermod.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.inlining.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_module.mih"
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1616 "intermod.m"
struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0_s {
#line 1616 "intermod.m"
  MR_Word transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__TVars_4;
#line 1616 "intermod.m"
  MR_Word * transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__HeadVar__3_9;
#line 1616 "intermod.m"
  MR_Cont transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__cont;
#line 1616 "intermod.m"
  void * transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__cont_env_ptr;
#line 1616 "intermod.m"
  MR_Word transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__TypeInfo_13_13;
#line 1616 "intermod.m"
  MR_Integer transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__N_8;
#line 1617 "intermod.m"
  MR_Box transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__conv0_N_8;
#line 1616 "intermod.m"
};

#line 1616 "intermod.m"
struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s {
#line 1616 "intermod.m"
  MR_Box * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1;
#line 1616 "intermod.m"
  MR_Cont transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont;
#line 1616 "intermod.m"
  void * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr;
#line 1616 "intermod.m"
  MR_Word transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9;
#line 1616 "intermod.m"
};

#line 1616 "intermod.m"
struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s {
#line 1616 "intermod.m"
  MR_Box * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1;
#line 1616 "intermod.m"
  MR_Cont transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont;
#line 1616 "intermod.m"
  void * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr;
#line 1616 "intermod.m"
  MR_Word transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9;
#line 1616 "intermod.m"
};

#line 1249 "intermod.m"
struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s {
#line 1251 "intermod.m"
  MR_bool transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded;
#line 1265 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12;
#line 1271 "intermod.m"
  jmp_buf transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0;
#line 1271 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14;
#line 1271 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15;
#line 1271 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23;
#line 1271 "intermod.m"
  MR_Box transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23;
#line 1249 "intermod.m"
};

#line 635 "intermod.m"
struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s {
#line 638 "intermod.m"
  MR_bool transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded;
#line 638 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9;
#line 638 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11;
#line 668 "intermod.m"
  jmp_buf transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0;
#line 668 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_37_37;
#line 668 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38;
#line 668 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44;
#line 668 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14;
#line 668 "intermod.m"
  MR_Integer transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15;
#line 668 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16;
#line 668 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26;
#line 668 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41;
#line 669 "intermod.m"
  MR_Box transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15;
#line 635 "intermod.m"
};

#line 452 "intermod.m"
struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s {
#line 452 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1;
#line 452 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
#line 455 "intermod.m"
  MR_bool transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
#line 456 "intermod.m"
  jmp_buf transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0;
#line 456 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4;
#line 456 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8;
#line 452 "intermod.m"
};

#line 289 "intermod.m"
struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s {
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10;
#line 294 "intermod.m"
  MR_bool transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded;
#line 305 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20;
#line 434 "intermod.m"
  jmp_buf transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0;
#line 434 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61;
#line 434 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70;
#line 434 "intermod.m"
  MR_Box transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70;
#line 289 "intermod.m"
};


#line 285 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 288 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 291 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

#line 294 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 297 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 300 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 303 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 306 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 309 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 312 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 315 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 318 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 321 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 324 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 327 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 330 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 333 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 336 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 339 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 342 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 345 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 348 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

#line 351 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 354 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 357 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 360 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 363 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0;

#line 366 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 369 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 372 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 375 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 378 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 381 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 384 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 387 "transform_hlds.intermod.c"
static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0[9];

#line 390 "transform_hlds.intermod.c"
static const MR_ConstString transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0[9];

#line 393 "transform_hlds.intermod.c"
static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0;

#line 396 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1];

#line 399 "transform_hlds.intermod.c"
static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1];

#line 402 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1];

#line 405 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1];

#line 408 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0;

#line 411 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1;

#line 414 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_opt_file_type_0[2];

#line 417 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_opt_file_type_0[2];

#line 420 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_opt_file_type_0[2];

#line 423 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
#line 426 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 428 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 431 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
#line 434 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 436 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 438 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3);

#line 441 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____opt_file_type_0_0_10001(
#line 444 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 446 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 449 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____opt_file_type_0_0_10001(
#line 452 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 454 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 456 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3);

#line 2506 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_111_112_116_105_109_105_122_97_116_105_111_110_95_105_110_116_101_114_102_97_99_101_115_95_95_91_51_93_95_48_13_p_0(
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__Globals_1,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__Transitive_2,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__ModulesProcessed0_5,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Items_0_6,
#line 2506 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Items_7,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0_8,
#line 2506 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Specs_9,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_10,
#line 2506 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_11);

#line 1188 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
#line 1188 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1188 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1188 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1188 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1188 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1188 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6);

#line 222 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
#line 222 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 222 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_2,
#line 222 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_4,
#line 222 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_5,
#line 222 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_6,
#line 222 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_7,
#line 222 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_8);

#line 203 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
#line 203 "intermod.m"
  MR_Word transform_hlds__intermod__ExtraExportedPreds0_8,
#line 203 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_10,
#line 203 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_11,
#line 203 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_12,
#line 203 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_19,
#line 203 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_20);

#line 2285 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2285__1_2_p_0(
#line 2285 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_10,
#line 2285 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_11);

#line 2251 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2251__1_4_p_0(
#line 2251 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_4,
#line 2251 "intermod.m"
  MR_Word transform_hlds__intermod__SpecPredMap_8,
#line 2251 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_13,
#line 2251 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_14);

#line 1899 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1899__1_4_p_0(
#line 1899 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1899 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVarMap_15,
#line 1899 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_23,
#line 1899 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_24);

#line 1817 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1817__1_1_p_0(
#line 1817 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_67);

#line 1695 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1695__1_3_p_0(
#line 1695 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__1_45,
#line 1695 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__2_46,
#line 1695 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_47);

#line 1617 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_2(
#line 1617 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_1(
#line 1616 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0(
#line 1616 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1616 "intermod.m"
  MR_Word transform_hlds__intermod__Set_5,
#line 1616 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_9,
#line 1616 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1616 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1326 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_intermod_info_body__1326__1_3_p_0(
#line 1326 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_48);

#line 993 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__993__1_1_f_0(
#line 993 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_54);

#line 980 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__980__1_1_f_0(
#line 980 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_50);

#line 835 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__835__1_2_p_0(
#line 835 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_44,
#line 835 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_45);

#line 2444 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__grab_opt_files__2444__1_3_p_0(
#line 2444 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_23,
#line 2444 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_24,
#line 2444 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_82);

#line 2077 "intermod.m"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0(
#line 2077 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__1_1,
#line 2077 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 2077 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3);

#line 2077 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0(
#line 2077 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2077 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 2372 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__import_status_to_write_1_p_0(
#line 2372 "intermod.m"
  MR_Word transform_hlds__intermod__Status_2);

#line 2341 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(
#line 2341 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2341 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0_2,
#line 2341 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Preds_3);

#line 2283 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0_1(
#line 2283 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2283 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2283 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2309 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0(
#line 2309 "intermod.m"
  MR_Word transform_hlds__intermod__Instance0_5,
#line 2309 "intermod.m"
  MR_Word * transform_hlds__intermod__Instance_6,
#line 2309 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20,
#line 2309 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21);

#line 2306 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0_1(
#line 2306 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2306 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2306 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2306 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2306 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2300 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0(
#line 2300 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2300 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2300 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9,
#line 2300 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10);

#line 2283 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0_1(
#line 2283 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2283 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2283 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2265 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0(
#line 2265 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2265 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2265 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10,
#line 2265 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11);

#line 2251 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0_1(
#line 2251 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2251 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2251 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2232 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0(
#line 2232 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_6,
#line 2232 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_7,
#line 2232 "intermod.m"
  MR_Word * transform_hlds__intermod__TypeDefn_8,
#line 2232 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11,
#line 2232 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12);

#line 2295 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_3(
#line 2295 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2295 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2295 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2295 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2295 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2261 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_2(
#line 2261 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2261 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2261 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2261 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2261 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2228 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_1(
#line 2228 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2228 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2228 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2228 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3,
#line 2228 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_4,
#line 2228 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_5);

#line 2213 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(
#line 2213 "intermod.m"
  MR_Word transform_hlds__intermod__Info_4,
#line 2213 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8,
#line 2213 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9);

#line 2155 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(
#line 2155 "intermod.m"
  MR_Word transform_hlds__intermod__TVarSet_4,
#line 2155 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2155 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2151 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_write_header_2_p_0(
#line 2151 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2151 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2149 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_module_info_3_p_0(
#line 2149 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_4,
#line 2149 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2149 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2145 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__Types_4,
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2145 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2138 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_preds_3_p_0(
#line 2138 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_4,
#line 2138 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2138 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2129 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_module_info_2_p_0(
#line 2129 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2129 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2122 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_preds_2_p_0(
#line 2122 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2122 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2040 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
#line 2040 "intermod.m"
  MR_Word transform_hlds__intermod__Args_6,
#line 2040 "intermod.m"
  MR_Word transform_hlds__intermod__Modes_7,
#line 2040 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26,
#line 2040 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_VarSet_27,
#line 2040 "intermod.m"
  MR_Word * transform_hlds__intermod__PragmaVars_9);

#line 1972 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(
#line 1972 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_1,
#line 1972 "intermod.m"
  MR_Integer transform_hlds__intermod__Arity_2,
#line 1972 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1972 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_4);

#line 1911 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
#line 1911 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 1911 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_2,
#line 1911 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1911 "intermod.m"
  MR_Word * transform_hlds__intermod__Goals_4,
#line 1911 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5,
#line 1911 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6);

#line 1895 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
#line 1895 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1895 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1895 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 1883 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
#line 1883 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_5,
#line 1883 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1883 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadTerms_7,
#line 1883 "intermod.m"
  MR_Word * transform_hlds__intermod__Clause_8);

#line 1846 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_11,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_12,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__PragmaImpl_13,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__Attributes_14,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__Args_15,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__ProgVarset0_16,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_17,
#line 1846 "intermod.m"
  MR_Integer transform_hlds__intermod__ProcId_18);

#line 1836 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
#line 1836 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1836 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1836 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1836 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1817 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
#line 1817 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1817 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 1791 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_12,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_13,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_14,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__VarSet_15,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_16,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_17,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_18,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__MaybeVarTypes_19,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_20);

#line 1784 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0_1(
#line 1784 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1784 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1784 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1784 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1740 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0(
#line 1740 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_1,
#line 1740 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_2,
#line 1740 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3);

#line 1708 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_modes_6_p_0(
#line 1708 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_1,
#line 1708 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_2,
#line 1708 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_3,
#line 1708 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4);

#line 1996 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_2(
#line 1996 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1996 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1996 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1996 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1695 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1(
#line 1695 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1695 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1695 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1695 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1643 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0(
#line 1643 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1643 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1627 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_4_p_0(
#line 1627 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1627 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1625 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0_1(
#line 1625 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1625 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1625 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1625 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1621 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0(
#line 1621 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1621 "intermod.m"
  MR_Word transform_hlds__intermod__Instances_6);

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3(
#line 1616 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4(
#line 1616 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1616 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1616 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1616 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
#line 1616 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2(
#line 1616 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1616 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1616 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1616 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1605 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
#line 1605 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1605 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1595 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0_1(
#line 1595 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1595 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 1583 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0(
#line 1583 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1583 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1583 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_9,
#line 1583 "intermod.m"
  MR_Word transform_hlds__intermod__ClassDefn_10);

#line 1581 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0_1(
#line 1581 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1581 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1581 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1581 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1581 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1575 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0(
#line 1575 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1575 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6);

#line 1549 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_6_p_0(
#line 1549 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1549 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1549 "intermod.m"
  MR_Word transform_hlds__intermod__InstId_9,
#line 1549 "intermod.m"
  MR_Word transform_hlds__intermod__InstDefn_10);

#line 1547 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0_1(
#line 1547 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1547 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1547 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1547 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1547 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1539 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0(
#line 1539 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1539 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6);

#line 1519 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_6_p_0(
#line 1519 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1519 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1519 "intermod.m"
  MR_Word transform_hlds__intermod__ModeId_9,
#line 1519 "intermod.m"
  MR_Word transform_hlds__intermod__ModeDefn_10);

#line 1517 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0_1(
#line 1517 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1517 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1517 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1517 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1517 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1510 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0(
#line 1510 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1510 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6);

#line 1493 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(
#line 1493 "intermod.m"
  MR_Word transform_hlds__intermod__ConsId_5,
#line 1493 "intermod.m"
  MR_Word transform_hlds__intermod__ConsTag_6,
#line 1493 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Values_0_14,
#line 1493 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Values_15);

#line 1482 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0_1(
#line 1482 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1482 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1482 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1482 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1482 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1358 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0(
#line 1358 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1358 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1338 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modules_3_p_0(
#line 1338 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1);

#line 1326 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_2(
#line 1326 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1326 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1326 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1326 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1356 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_1(
#line 1356 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1356 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1356 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1356 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1283 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0(
#line 1283 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4);

#line 1271 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_1(
#line 1271 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1271 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_3(
#line 1271 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1271 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_2(
#line 1271 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1271 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_4(
#line 1271 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1249 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0(
#line 1249 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4);

#line 1217 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
#line 1217 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1217 "intermod.m"
  MR_Word transform_hlds__intermod__SpecialId_2,
#line 1217 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_3,
#line 1217 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 1217 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__5_5,
#line 1217 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1217 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7);

#line 1200 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
#line 1200 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1200 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1200 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1200 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1200 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1200 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6);

#line 1101 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
#line 1101 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_7,
#line 1101 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_8,
#line 1101 "intermod.m"
  MR_Word transform_hlds__intermod__ForeignTypeBody0_9,
#line 1101 "intermod.m"
  MR_Word * transform_hlds__intermod__ForeignTypeBody_10,
#line 1101 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 1101 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25);

#line 1034 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_4_p_0(
#line 1034 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_5,
#line 1034 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_6,
#line 1034 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_33,
#line 1034 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_34);

#line 1032 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0_1(
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1032 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1027 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0(
#line 1027 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1027 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7);

#line 991 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
#line 991 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 991 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 978 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
#line 978 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 978 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 963 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_11,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceMethodName0_12,
#line 963 "intermod.m"
  MR_Integer transform_hlds__intermod__MethodArity_13,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallTVarSet_14,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallExistQTVars_15,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallArgTypes_16,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_17,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__MethodContext_18,
#line 963 "intermod.m"
  MR_Word * transform_hlds__intermod__MaybePredId_19,
#line 963 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethodName_20);

#line 895 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
#line 895 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 895 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 895 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethod_9,
#line 895 "intermod.m"
  MR_Word transform_hlds__intermod__PredIds0_10,
#line 895 "intermod.m"
  MR_Word * transform_hlds__intermod__PredIds_11);

#line 850 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_3(
#line 850 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 850 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 850 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 850 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 850 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 848 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_2(
#line 848 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 848 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 848 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 848 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 848 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 833 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_1(
#line 833 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 833 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 833 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 813 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0(
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefn_8,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_39,
#line 813 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_40);

#line 811 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0_1(
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 811 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 806 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0(
#line 806 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 806 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 806 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefns_8,
#line 806 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_10,
#line 806 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_11);

#line 804 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_p_0_1(
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 804 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 799 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_p_0(
#line 799 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 799 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7);

#line 759 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(
#line 759 "intermod.m"
  MR_Word transform_hlds__intermod__RHS0_6,
#line 759 "intermod.m"
  MR_Word * transform_hlds__intermod__RHS_7,
#line 759 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 759 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_28,
#line 759 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_29);

#line 668 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_1(
#line 668 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 669 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_3(
#line 669 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 668 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_2(
#line 668 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 668 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_4(
#line 668 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 635 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0(
#line 635 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 635 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 635 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 635 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25);

#line 622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_4_p_0(
#line 622 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 622 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 622 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_8,
#line 622 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_9);

#line 595 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_cases_5_p_0(
#line 595 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 595 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 595 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 595 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 595 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 580 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(
#line 580 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 580 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 580 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 580 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 580 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 479 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(
#line 479 "intermod.m"
  MR_Word transform_hlds__intermod__GoalExpr0_6,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__GoalExpr_7,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 479 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_81,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_82);

#line 471 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_5_p_0(
#line 471 "intermod.m"
  MR_Word transform_hlds__intermod__Goal0_6,
#line 471 "intermod.m"
  MR_Word * transform_hlds__intermod__Goal_7,
#line 471 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 471 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_13,
#line 471 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_14);

#line 456 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
#line 456 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 456 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
#line 456 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 456 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
#line 456 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 452 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
#line 452 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 452 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 414 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__check_for_ho_input_args_4_p_0(
#line 414 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_5,
#line 414 "intermod.m"
  MR_Word transform_hlds__intermod__VarTypes_6,
#line 414 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 414 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4);

#line 388 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_clauses_5_p_0(
#line 388 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 388 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 388 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 388 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 388 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 377 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(
#line 377 "intermod.m"
  MR_Word transform_hlds__intermod__Target_1,
#line 377 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 434 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_1(
#line 434 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 434 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_3(
#line 434 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 434 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_2(
#line 434 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 434 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_4(
#line 434 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 289 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0(
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_9,
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_10,
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__PredInfo_11,
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__TypeSpecForcePreds_12,
#line 289 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_13,
#line 289 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_14,
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_15,
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_16);

#line 804 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_pred_import_status_2_p_0_1(
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 804 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2464 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_2(
#line 2464 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2464 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 2444 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_1(
#line 2444 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2444 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 1032 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_opt_file_4_p_0_1(
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1032 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);


static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[19][2];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[24][3];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[11][7];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[5][6];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[4][5];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[4][8];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[2][1];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[3][9];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[2][4];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_10[1][14];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_11[1][13];




static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[19][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[4]))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[3]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__intermod_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Warning: cannot open"))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[24][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[1]))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__intermod__write_opt_file_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__intermod__gather_instances_3_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[1])),
    ((MR_Box) (transform_hlds__intermod__gather_instances_3_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[3])),
    ((MR_Box) (transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[0])),
    ((MR_Box) (transform_hlds__intermod__gather_types_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__intermod__write_intermod_info_body_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_type_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[4])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_9[1])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_clause_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[7])),
    ((MR_Box) (transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[8])),
    ((MR_Box) (transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__intermod__adjust_class_status_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[10])),
    ((MR_Box) (transform_hlds__intermod__adjust_instance_status_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__intermod__adjust_instance_status_3_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[11][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[5][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[5])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_pred_decls_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_10[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_vartypes_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_11[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_code_impl_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_attributes_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 2504 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 2512 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2520 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

#line 2529 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2537 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 2546 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2555 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
  }
};

#line 2563 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2571 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2579 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2587 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2595 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2604 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2612 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2620 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2628 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2637 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 2645 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2653 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2662 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2670 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2678 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

#line 2687 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2695 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2704 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 2713 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2722 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
  }
};

#line 2730 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2738 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2747 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2755 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 2764 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 2772 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2781 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2789 "transform_hlds.intermod.c"
static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0[9] = {
  (MR_PseudoTypeInfo) &transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0
};

#line 2802 "transform_hlds.intermod.c"
static const MR_ConstString transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0[9] = {
  (MR_String) "im_modules",
  (MR_String) "im_preds",
  (MR_String) "im_pred_decls",
  (MR_String) "im_instances",
  (MR_String) "im_types",
  (MR_String) "im_module_info",
  (MR_String) "im_write_foreign_header",
  (MR_String) "im_var_types",
  (MR_String) "im_tvarset"
};

#line 2815 "transform_hlds.intermod.c"
static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0 = {
  (MR_String) "intermod_info",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0,
  transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0,
  NULL,
  NULL
};

#line 2830 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

#line 2835 "transform_hlds.intermod.c"
static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0
  }
};

#line 2844 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

#line 2849 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1] = {
  (MR_Integer) 0
};

#line 2854 "transform_hlds.intermod.c"
const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__intermod____Unify____intermod_info_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____intermod_info_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "intermod_info",
  {
    transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0
  },
  {
    transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0
};

#line 2875 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0 = {
  (MR_String) "opt_file",
  (MR_Integer) 0
};

#line 2881 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1 = {
  (MR_String) "trans_opt_file",
  (MR_Integer) 1
};

#line 2887 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_opt_file_type_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1
};

#line 2893 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_opt_file_type_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1
};

#line 2899 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_opt_file_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2905 "transform_hlds.intermod.c"
const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_opt_file_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____opt_file_type_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____opt_file_type_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "opt_file_type",
  {
    transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_opt_file_type_0
  },
  {
    transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_opt_file_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_opt_file_type_0
};

#line 2926 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
#line 2929 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2931 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2933 "transform_hlds.intermod.c"
{
#line 2935 "transform_hlds.intermod.c"
  {
#line 2937 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded;

#line 2940 "transform_hlds.intermod.c"
    {
#line 2942 "transform_hlds.intermod.c"
      transform_hlds__intermod__succeeded = transform_hlds__intermod____Unify____intermod_info_0_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2945 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 2947 "transform_hlds.intermod.c"
  }
#line 2949 "transform_hlds.intermod.c"
}

#line 2952 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
#line 2955 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 2957 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2959 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3)
#line 2961 "transform_hlds.intermod.c"
{
#line 2963 "transform_hlds.intermod.c"
  {
#line 2965 "transform_hlds.intermod.c"
    MR_Word transform_hlds__intermod__conv0_HeadVar__1_1;

#line 2968 "transform_hlds.intermod.c"
    {
#line 2970 "transform_hlds.intermod.c"
      transform_hlds__intermod____Compare____intermod_info_0_0(&transform_hlds__intermod__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3));
    }
#line 2973 "transform_hlds.intermod.c"
    *transform_hlds__intermod__wrapper_arg_1 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__1_1));
#line 2975 "transform_hlds.intermod.c"
  }
#line 2977 "transform_hlds.intermod.c"
}

#line 2980 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____opt_file_type_0_0_10001(
#line 2983 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2985 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2987 "transform_hlds.intermod.c"
{
#line 2989 "transform_hlds.intermod.c"
  {
#line 2991 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded;

#line 2994 "transform_hlds.intermod.c"
    {
#line 2996 "transform_hlds.intermod.c"
      transform_hlds__intermod__succeeded = transform_hlds__intermod____Unify____opt_file_type_0_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2999 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 3001 "transform_hlds.intermod.c"
  }
#line 3003 "transform_hlds.intermod.c"
}

#line 3006 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____opt_file_type_0_0_10001(
#line 3009 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 3011 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 3013 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3)
#line 3015 "transform_hlds.intermod.c"
{
#line 3017 "transform_hlds.intermod.c"
  {
#line 3019 "transform_hlds.intermod.c"
    MR_Word transform_hlds__intermod__conv0_HeadVar__1_1;

#line 3022 "transform_hlds.intermod.c"
    {
#line 3024 "transform_hlds.intermod.c"
      transform_hlds__intermod____Compare____opt_file_type_0_0(&transform_hlds__intermod__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3));
    }
#line 3027 "transform_hlds.intermod.c"
    *transform_hlds__intermod__wrapper_arg_1 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__1_1));
#line 3029 "transform_hlds.intermod.c"
  }
#line 3031 "transform_hlds.intermod.c"
}

#line 2506 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_111_112_116_105_109_105_122_97_116_105_111_110_95_105_110_116_101_114_102_97_99_101_115_95_95_91_51_93_95_48_13_p_0(
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__Globals_1,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__Transitive_2,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__ModulesProcessed0_5,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Items_0_6,
#line 2506 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Items_7,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0_8,
#line 2506 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Specs_9,
#line 2506 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_10,
#line 2506 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_11)
#line 2506 "intermod.m"
{
#line 2512 "intermod.m"
  while (MR_TRUE)
#line 2512 "intermod.m"
    {
#line 2512 "intermod.m"
      /* tailcall optimized into a loop */
#line 2512 "intermod.m"
      {
#line 2512 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 2512 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2512 "intermod.m"
          {
#line 2512 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Error_11 = transform_hlds__intermod__STATE_VARIABLE_Error_0_10;
#line 2512 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Specs_9 = transform_hlds__intermod__STATE_VARIABLE_Specs_0_8;
#line 2512 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Items_7 = transform_hlds__intermod__STATE_VARIABLE_Items_0_6;
#line 2512 "intermod.m"
          }
#line 2512 "intermod.m"
        else
#line 2515 "intermod.m"
          {
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_96_96;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__ModuleToRead_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__ModulesToRead_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 1)));
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__VeryVerbose_40;
#line 2515 "intermod.m"
            MR_String transform_hlds__intermod__ModuleToReadString_41;
#line 2515 "intermod.m"
            MR_String transform_hlds__intermod__FileName_42;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__OptItems_43;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__OptSpecs_44;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__OptError_45;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__ModulesProcessed_53;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__NewDeps_54;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_64_64;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_78_78;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_79_79;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Items_80_80;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__V_81_81;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_82_82;
#line 2515 "intermod.m"
            MR_Word transform_hlds__intermod__V_91_91;

#line 2516 "intermod.m"
            {
#line 2516 "intermod.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_1, (MR_Integer) 45, &transform_hlds__intermod__VeryVerbose_40);
            }
#line 2517 "intermod.m"
            {
#line 2517 "intermod.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__intermod__VeryVerbose_40, transform_hlds__intermod__Globals_1, transform_hlds__intermod__STATE_VARIABLE_Specs_0_8, &transform_hlds__intermod__STATE_VARIABLE_Specs_64_64);
            }
#line 2518 "intermod.m"
            {
#line 2518 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_40, (MR_String) "% Reading optimization interface for module");
            }
#line 2520 "intermod.m"
            {
#line 2520 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_40, (MR_String) " \140");
            }
#line 2521 "intermod.m"
            {
#line 2521 "intermod.m"
              transform_hlds__intermod__ModuleToReadString_41 = mdbcomp__prim_data__sym_name_to_string_1_f_0(transform_hlds__intermod__ModuleToRead_33);
            }
#line 2522 "intermod.m"
            {
#line 2522 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_40, transform_hlds__intermod__ModuleToReadString_41);
            }
#line 2523 "intermod.m"
            {
#line 2523 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_40, (MR_String) "\'...\n");
            }
#line 2524 "intermod.m"
            {
#line 2524 "intermod.m"
              libs__file_util__maybe_flush_output_3_p_0(transform_hlds__intermod__VeryVerbose_40);
            }
#line 2526 "intermod.m"
            {
#line 2526 "intermod.m"
              parse_tree__file_names__module_name_to_search_file_name_6_p_0(transform_hlds__intermod__Globals_1, transform_hlds__intermod__ModuleToRead_33, (MR_String) ".opt", &transform_hlds__intermod__FileName_42);
            }
#line 2528 "intermod.m"
            {
#line 2528 "intermod.m"
              parse_tree__prog_io__actually_read_opt_file_8_p_0(transform_hlds__intermod__Globals_1, transform_hlds__intermod__FileName_42, transform_hlds__intermod__ModuleToRead_33, &transform_hlds__intermod__OptItems_43, &transform_hlds__intermod__OptSpecs_44, &transform_hlds__intermod__OptError_45);
            }
#line 2530 "intermod.m"
            {
#line 2530 "intermod.m"
              transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0((MR_Integer) 0, transform_hlds__intermod__FileName_42, transform_hlds__intermod__OptSpecs_44, transform_hlds__intermod__STATE_VARIABLE_Specs_64_64, &transform_hlds__intermod__STATE_VARIABLE_Specs_78_78, transform_hlds__intermod__OptError_45, transform_hlds__intermod__STATE_VARIABLE_Error_0_10, &transform_hlds__intermod__STATE_VARIABLE_Error_79_79);
            }
#line 3178 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_96_96 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 2532 "intermod.m"
            {
#line 2532 "intermod.m"
              transform_hlds__intermod__V_81_81 = mercury__cord__from_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_96_96, transform_hlds__intermod__OptItems_43);
            }
#line 2532 "intermod.m"
            {
#line 2532 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Items_80_80 = mercury__cord__f_43_43_2_f_0(transform_hlds__intermod__TypeCtorInfo_96_96, transform_hlds__intermod__STATE_VARIABLE_Items_0_6, transform_hlds__intermod__V_81_81);
            }
#line 2533 "intermod.m"
            {
#line 2533 "intermod.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__intermod__VeryVerbose_40, transform_hlds__intermod__Globals_1, transform_hlds__intermod__STATE_VARIABLE_Specs_78_78, &transform_hlds__intermod__STATE_VARIABLE_Specs_82_82);
            }
#line 2534 "intermod.m"
            {
#line 2534 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_40, (MR_String) "% done.\n");
            }
#line 2547 "intermod.m"
            if ((transform_hlds__intermod__Transitive_2 == (MR_Integer) 0))
#line 2548 "intermod.m"
              {
#line 2549 "intermod.m"
                transform_hlds__intermod__ModulesProcessed_53 = transform_hlds__intermod__ModulesProcessed0_5;
#line 2550 "intermod.m"
                transform_hlds__intermod__NewDeps_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2548 "intermod.m"
              }
#line 2547 "intermod.m"
            else
#line 2537 "intermod.m"
              {
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__TypeCtorInfo_97_97;
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__NewImportDeps0_46;
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__NewUseDeps0_47;
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__NewImplicitImportDeps0_48;
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__NewImplicitUseDeps0_49;
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__NewDeps0_50;
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__NewDepsSet0_51;
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__NewDepsSet_52;
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__V_86_86;
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__V_87_87;
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__V_88_88;
#line 2537 "intermod.m"
                MR_Word transform_hlds__intermod__V_89_89;

#line 2538 "intermod.m"
                {
#line 2538 "intermod.m"
                  parse_tree__module_imports__get_dependencies_3_p_0(transform_hlds__intermod__OptItems_43, &transform_hlds__intermod__NewImportDeps0_46, &transform_hlds__intermod__NewUseDeps0_47);
                }
#line 2539 "intermod.m"
                {
#line 2539 "intermod.m"
                  parse_tree__module_imports__get_implicit_dependencies_4_p_0(transform_hlds__intermod__OptItems_43, transform_hlds__intermod__Globals_1, &transform_hlds__intermod__NewImplicitImportDeps0_48, &transform_hlds__intermod__NewImplicitUseDeps0_49);
                }
#line 3249 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeCtorInfo_97_97 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 2542 "intermod.m"
                {
#line 2542 "intermod.m"
                  transform_hlds__intermod__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2542 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_89_89, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitUseDeps0_49));
#line 2542 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2542 "intermod.m"
                }
#line 2541 "intermod.m"
                {
#line 2541 "intermod.m"
                  transform_hlds__intermod__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2541 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_88_88, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitImportDeps0_48));
#line 2541 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_88_88, 1) = ((MR_Box) (transform_hlds__intermod__V_89_89));
#line 2541 "intermod.m"
                }
#line 2541 "intermod.m"
                {
#line 2541 "intermod.m"
                  transform_hlds__intermod__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2541 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_87_87, 0) = ((MR_Box) (transform_hlds__intermod__NewUseDeps0_47));
#line 2541 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_87_87, 1) = ((MR_Box) (transform_hlds__intermod__V_88_88));
#line 2541 "intermod.m"
                }
#line 2541 "intermod.m"
                {
#line 2541 "intermod.m"
                  transform_hlds__intermod__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2541 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_86_86, 0) = ((MR_Box) (transform_hlds__intermod__NewImportDeps0_46));
#line 2541 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_86_86, 1) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2541 "intermod.m"
                }
#line 2541 "intermod.m"
                {
#line 2541 "intermod.m"
                  transform_hlds__intermod__NewDeps0_50 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_97_97, transform_hlds__intermod__V_86_86);
                }
#line 2543 "intermod.m"
                {
#line 2543 "intermod.m"
                  mercury__set__list_to_set_2_p_0(transform_hlds__intermod__TypeCtorInfo_97_97, transform_hlds__intermod__NewDeps0_50, &transform_hlds__intermod__NewDepsSet0_51);
                }
#line 2544 "intermod.m"
                {
#line 2544 "intermod.m"
                  mercury__set__difference_3_p_0(transform_hlds__intermod__TypeCtorInfo_97_97, transform_hlds__intermod__NewDepsSet0_51, transform_hlds__intermod__ModulesProcessed0_5, &transform_hlds__intermod__NewDepsSet_52);
                }
#line 2545 "intermod.m"
                {
#line 2545 "intermod.m"
                  mercury__set__union_3_p_0(transform_hlds__intermod__TypeCtorInfo_97_97, transform_hlds__intermod__ModulesProcessed0_5, transform_hlds__intermod__NewDepsSet_52, &transform_hlds__intermod__ModulesProcessed_53);
                }
#line 2546 "intermod.m"
                {
#line 2546 "intermod.m"
                  mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_97_97, transform_hlds__intermod__NewDepsSet_52, &transform_hlds__intermod__NewDeps_54);
                }
#line 2537 "intermod.m"
              }
#line 2552 "intermod.m"
            {
#line 2552 "intermod.m"
              transform_hlds__intermod__V_91_91 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, transform_hlds__intermod__NewDeps_54, transform_hlds__intermod__ModulesToRead_34);
            }
#line 2552 "intermod.m"
            /* direct tailcall eliminated */
#line 2552 "intermod.m"
            {
#line 2552 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__4__tmp_copy_4 = transform_hlds__intermod__V_91_91;
#line 2552 "intermod.m"
              MR_Word transform_hlds__intermod__ModulesProcessed0__tmp_copy_5 = transform_hlds__intermod__ModulesProcessed_53;
#line 2552 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Items_0__tmp_copy_6 = transform_hlds__intermod__STATE_VARIABLE_Items_80_80;
#line 2552 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0__tmp_copy_8 = transform_hlds__intermod__STATE_VARIABLE_Specs_82_82;
#line 2552 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0__tmp_copy_10 = transform_hlds__intermod__STATE_VARIABLE_Error_79_79;

#line 2552 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Error_0_10 = transform_hlds__intermod__STATE_VARIABLE_Error_0__tmp_copy_10;
#line 2552 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Specs_0_8 = transform_hlds__intermod__STATE_VARIABLE_Specs_0__tmp_copy_8;
#line 2552 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Items_0_6 = transform_hlds__intermod__STATE_VARIABLE_Items_0__tmp_copy_6;
#line 2552 "intermod.m"
              transform_hlds__intermod__ModulesProcessed0_5 = transform_hlds__intermod__ModulesProcessed0__tmp_copy_5;
#line 2552 "intermod.m"
              transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__4__tmp_copy_4;
#line 2552 "intermod.m"
            }
#line 2552 "intermod.m"
            continue;
#line 2515 "intermod.m"
          }
#line 2512 "intermod.m"
      }
#line 2512 "intermod.m"
      break;
#line 2512 "intermod.m"
    }
#line 2506 "intermod.m"
}

#line 1188 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
#line 1188 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1188 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1188 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1188 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1188 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1188 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6)
#line 1188 "intermod.m"
{
#line 1192 "intermod.m"
  {
#line 1192 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1192 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1192 "intermod.m"
      {
#line 1192 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1192 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1192 "intermod.m"
      }
#line 1192 "intermod.m"
    else
#line 1196 "intermod.m"
      {
#line 1196 "intermod.m"
        MR_Box transform_hlds__intermod__Body_14;
#line 1196 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1196 "intermod.m"
        MR_Word transform_hlds__intermod__Assertions_16;
#line 1196 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeUserEqComp_17;
#line 1196 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1196 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;

#line 1194 "intermod.m"
        transform_hlds__intermod__Body_14 = (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 0));
#line 1194 "intermod.m"
        transform_hlds__intermod__MaybeUserEqComp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 1)));
#line 1194 "intermod.m"
        transform_hlds__intermod__Assertions_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 2)));
#line 1204 "intermod.m"
        if ((transform_hlds__intermod__MaybeUserEqComp0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1204 "intermod.m"
          {
#line 1204 "intermod.m"
            transform_hlds__intermod__MaybeUserEqComp_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1204 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1204 "intermod.m"
          }
#line 1204 "intermod.m"
        else
#line 1204 "intermod.m"
          {
#line 1204 "intermod.m"
            MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEqComp0_15, (MR_Integer) 0)));

#line 1204 "intermod.m"
            if (((MR_tag((MR_Word) transform_hlds__intermod__V_53_53)) == (MR_mktag((MR_Integer) 1))))
#line 1205 "intermod.m"
              {
#line 1205 "intermod.m"
                transform_hlds__intermod__MaybeUserEqComp_17 = transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1205 "intermod.m"
                *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1205 "intermod.m"
              }
#line 1204 "intermod.m"
            else
#line 1210 "intermod.m"
              {
#line 1210 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserEq0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_53_53, (MR_Integer) 0)));
#line 1210 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserCompare0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_53_53, (MR_Integer) 1)));
#line 1210 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserEq_42;
#line 1210 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserCompare_43;
#line 1210 "intermod.m"
                MR_Word transform_hlds__intermod__V_48_48;
#line 1210 "intermod.m"
                MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_32_50;

#line 1221 "intermod.m"
                if ((transform_hlds__intermod__MaybeUserEq0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1221 "intermod.m"
                  {
#line 1221 "intermod.m"
                    transform_hlds__intermod__MaybeUserEq_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1221 "intermod.m"
                    transform_hlds__intermod__STATE_VARIABLE_Info_32_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1221 "intermod.m"
                  }
#line 1221 "intermod.m"
                else
#line 1223 "intermod.m"
                  {
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__Pred0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq0_40, (MR_Integer) 0)));
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__Pred_64;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__SpecialPreds_66;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__UnifyPredId_67;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__UnifyPredInfo_68;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__TVarSet_69;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__ExistQVars_70;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__ArgTypes_71;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__HeadTypeParams_72;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__Markers0_73;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__Markers_74;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__Context_75;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__UserEqPredId_76;
#line 1223 "intermod.m"
                    MR_Word transform_hlds__intermod__V_80_80;
#line 1225 "intermod.m"
                    MR_Box transform_hlds__intermod__conv0_UnifyPredId_67;
#line 626 "intermod.m"
                    MR_Word transform_hlds__intermod__V_91_91;

#line 1224 "intermod.m"
                    {
#line 1224 "intermod.m"
                      hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_66);
                    }
#line 1225 "intermod.m"
                    {
#line 1225 "intermod.m"
                      transform_hlds__intermod__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "intermod.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1225 "intermod.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_2));
#line 1225 "intermod.m"
                    }
#line 1225 "intermod.m"
                    {
#line 1225 "intermod.m"
                      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[2], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_66, ((MR_Box) (transform_hlds__intermod__V_80_80)), &transform_hlds__intermod__conv0_UnifyPredId_67);
                    }
#line 1225 "intermod.m"
                    transform_hlds__intermod__UnifyPredId_67 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_67);
#line 1226 "intermod.m"
                    {
#line 1226 "intermod.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_67, &transform_hlds__intermod__UnifyPredInfo_68);
                    }
#line 1227 "intermod.m"
                    {
#line 1227 "intermod.m"
                      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__TVarSet_69, &transform_hlds__intermod__ExistQVars_70, &transform_hlds__intermod__ArgTypes_71);
                    }
#line 1228 "intermod.m"
                    {
#line 1228 "intermod.m"
                      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__HeadTypeParams_72);
                    }
#line 1229 "intermod.m"
                    {
#line 1229 "intermod.m"
                      hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_73);
                    }
#line 1230 "intermod.m"
                    {
#line 1230 "intermod.m"
                      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_73, &transform_hlds__intermod__Markers_74);
                    }
#line 1231 "intermod.m"
                    {
#line 1231 "intermod.m"
                      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__Context_75);
                    }
#line 1232 "intermod.m"
                    {
#line 1232 "intermod.m"
                      hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_74, transform_hlds__intermod__TVarSet_69, transform_hlds__intermod__ExistQVars_70, transform_hlds__intermod__ArgTypes_71, transform_hlds__intermod__HeadTypeParams_72, transform_hlds__intermod__Context_75, transform_hlds__intermod__Pred0_63, &transform_hlds__intermod__Pred_64, &transform_hlds__intermod__UserEqPredId_76);
                    }
#line 1223 "intermod.m"
                    {
#line 1223 "intermod.m"
                      transform_hlds__intermod__MaybeUserEq_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq_42, 0) = ((MR_Box) (transform_hlds__intermod__Pred_64));
#line 1223 "intermod.m"
                    }
#line 626 "intermod.m"
                    {
#line 626 "intermod.m"
                      transform_hlds__intermod__V_91_91 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                    }
#line 626 "intermod.m"
                    {
#line 626 "intermod.m"
                      transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_76, transform_hlds__intermod__V_91_91);
                    }
#line 631 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 630 "intermod.m"
                      transform_hlds__intermod__STATE_VARIABLE_Info_32_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 631 "intermod.m"
                    else
#line 632 "intermod.m"
                      {
#line 632 "intermod.m"
                        MR_Word transform_hlds__intermod__V_93_93;

#line 632 "intermod.m"
                        {
#line 632 "intermod.m"
                          transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_76, &transform_hlds__intermod__V_93_93, transform_hlds__intermod__STATE_VARIABLE_Info_0_5, &transform_hlds__intermod__STATE_VARIABLE_Info_32_50);
                        }
#line 632 "intermod.m"
                      }
#line 1223 "intermod.m"
                  }
#line 1213 "intermod.m"
                {
#line 1213 "intermod.m"
                  transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(transform_hlds__intermod__ModuleInfo_1, (MR_Integer) 2, transform_hlds__intermod__TypeCtor_2, transform_hlds__intermod__MaybeUserCompare0_41, &transform_hlds__intermod__MaybeUserCompare_43, transform_hlds__intermod__STATE_VARIABLE_Info_32_50, transform_hlds__intermod__STATE_VARIABLE_Info_6);
                }
#line 1210 "intermod.m"
                {
#line 1210 "intermod.m"
                  transform_hlds__intermod__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1210 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (transform_hlds__intermod__MaybeUserEq_42));
#line 1210 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_48_48, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserCompare_43));
#line 1210 "intermod.m"
                }
#line 1210 "intermod.m"
                {
#line 1210 "intermod.m"
                  transform_hlds__intermod__MaybeUserEqComp_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEqComp_17, 0) = ((MR_Box) (transform_hlds__intermod__V_48_48));
#line 1210 "intermod.m"
                }
#line 1210 "intermod.m"
              }
#line 1204 "intermod.m"
          }
#line 1195 "intermod.m"
        {
#line 1195 "intermod.m"
          transform_hlds__intermod__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1195 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 0) = transform_hlds__intermod__Body_14;
#line 1195 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_17));
#line 1195 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 2) = ((MR_Box) (transform_hlds__intermod__Assertions_16));
#line 1195 "intermod.m"
        }
#line 1196 "intermod.m"
        {
#line 1196 "intermod.m"
          MR_Word base;
#line 1196 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "intermod.m"
          *transform_hlds__intermod__HeadVar__4_4 = base;
#line 1196 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_22_22));
#line 1196 "intermod.m"
        }
#line 1196 "intermod.m"
      }
#line 1192 "intermod.m"
  }
#line 1188 "intermod.m"
}

#line 222 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
#line 222 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 222 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_2,
#line 222 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_4,
#line 222 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_5,
#line 222 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_6,
#line 222 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_7,
#line 222 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_8)
#line 222 "intermod.m"
{
#line 225 "intermod.m"
  while (MR_TRUE)
#line 225 "intermod.m"
    {
#line 225 "intermod.m"
      /* tailcall optimized into a loop */
#line 225 "intermod.m"
      {
#line 225 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 225 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_8 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 225 "intermod.m"
        else
#line 227 "intermod.m"
          {
#line 227 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_62_62;
#line 227 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_63_63;
#line 227 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 227 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 227 "intermod.m"
            MR_Word transform_hlds__intermod__ModuleInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
#line 227 "intermod.m"
            MR_Word transform_hlds__intermod__PredTable0_26;
#line 227 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo0_27;
#line 227 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecInfo_28;
#line 227 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecForcePreds_30;
#line 227 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesInfo0_33;
#line 227 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_60_60;
#line 2163 "intermod.m"
            MR_Word transform_hlds__intermod__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
#line 2163 "intermod.m"
            MR_Word transform_hlds__intermod__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 2163 "intermod.m"
            MR_Word transform_hlds__intermod__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 2163 "intermod.m"
            MR_Word transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
#line 2163 "intermod.m"
            MR_Word transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
#line 2163 "intermod.m"
            MR_Word transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
#line 2163 "intermod.m"
            MR_Word transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
#line 2163 "intermod.m"
            MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
#line 230 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_PredInfo0_27;
#line 232 "intermod.m"
            MR_Word transform_hlds__intermod__V_29_29;
#line 232 "intermod.m"
            MR_Word transform_hlds__intermod__V_31_31;
#line 232 "intermod.m"
            MR_Word transform_hlds__intermod__V_32_32;
#line 235 "intermod.m"
            MR_Word transform_hlds__intermod__ExplicitVarTypes_34;

#line 229 "intermod.m"
            {
#line 229 "intermod.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__PredTable0_26);
            }
#line 3754 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3756 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 230 "intermod.m"
            {
#line 230 "intermod.m"
              mercury__map__lookup_3_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, transform_hlds__intermod__TypeCtorInfo_63_63, transform_hlds__intermod__PredTable0_26, ((MR_Box) (transform_hlds__intermod__PredId_17)), &transform_hlds__intermod__conv0_PredInfo0_27);
            }
#line 230 "intermod.m"
            transform_hlds__intermod__PredInfo0_27 = ((MR_Word) transform_hlds__intermod__conv0_PredInfo0_27);
#line 231 "intermod.m"
            {
#line 231 "intermod.m"
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__TypeSpecInfo_28);
            }
#line 232 "intermod.m"
            transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 0)));
#line 232 "intermod.m"
            transform_hlds__intermod__TypeSpecForcePreds_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 1)));
#line 232 "intermod.m"
            transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 2)));
#line 232 "intermod.m"
            transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 3)));
#line 233 "intermod.m"
            {
#line 233 "intermod.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__ClausesInfo0_33);
            }
#line 235 "intermod.m"
            {
#line 235 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ExplicitVarTypes_34);
            }
#line 236 "intermod.m"
            {
#line 236 "intermod.m"
              transform_hlds__intermod__succeeded = parse_tree__prog_data__vartypes_is_empty_1_p_0(transform_hlds__intermod__ExplicitVarTypes_34);
            }
#line 235 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 237 "intermod.m"
              {
#line 237 "intermod.m"
                transform_hlds__intermod__succeeded = transform_hlds__intermod__should_be_processed_8_p_0(transform_hlds__intermod__ProcessLocalPreds_2, transform_hlds__intermod__PredId_17, transform_hlds__intermod__PredInfo0_27, transform_hlds__intermod__TypeSpecForcePreds_30, transform_hlds__intermod__InlineThreshold_4, transform_hlds__intermod__HigherOrderSizeLimit_5, transform_hlds__intermod__Deforestation_6, transform_hlds__intermod__ModuleInfo0_25);
              }
#line 283 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 241 "intermod.m"
              {
#line 241 "intermod.m"
                MR_Word transform_hlds__intermod__ClausesRep0_37;
#line 241 "intermod.m"
                MR_Word transform_hlds__intermod__ItemNumbers0_38;
#line 626 "intermod.m"
                MR_Word transform_hlds__intermod__V_79_79;

#line 245 "intermod.m"
                {
#line 245 "intermod.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ClausesRep0_37, &transform_hlds__intermod__ItemNumbers0_38);
                }
#line 626 "intermod.m"
                {
#line 626 "intermod.m"
                  transform_hlds__intermod__V_79_79 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 626 "intermod.m"
                {
#line 626 "intermod.m"
                  transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_17, transform_hlds__intermod__V_79_79);
                }
#line 3826 "transform_hlds.intermod.c"
                if (transform_hlds__intermod__succeeded)
#line 281 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 3830 "transform_hlds.intermod.c"
                else
#line 3832 "transform_hlds.intermod.c"
                  {
#line 3834 "transform_hlds.intermod.c"
                    MR_Word transform_hlds__intermod__DoWrite0_92;
#line 3836 "transform_hlds.intermod.c"
                    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_53_93;

#line 632 "intermod.m"
                    {
#line 632 "intermod.m"
                      transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_17, &transform_hlds__intermod__DoWrite0_92, transform_hlds__intermod__STATE_VARIABLE_Info_0_7, &transform_hlds__intermod__STATE_VARIABLE_Info_53_93);
                    }
#line 3844 "transform_hlds.intermod.c"
                    if ((transform_hlds__intermod__DoWrite0_92 == (MR_Integer) 0))
#line 281 "intermod.m"
                      transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 3848 "transform_hlds.intermod.c"
                    else
#line 3850 "transform_hlds.intermod.c"
                      {
#line 3852 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__VarTypes_39;
#line 3854 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__TVarSet_40;
#line 3856 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__Clauses0_41;
#line 3858 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__Clauses_42;
#line 3860 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_54_54;
#line 3862 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_55_55;
#line 3864 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__DoWrite_97;
#line 3866 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__ClausesRep_98;
#line 3868 "transform_hlds.intermod.c"
                        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_56_99;
#line 2177 "intermod.m"
                        MR_Word transform_hlds__intermod__V_83_83;
#line 2177 "intermod.m"
                        MR_Word transform_hlds__intermod__V_84_84;
#line 2177 "intermod.m"
                        MR_Word transform_hlds__intermod__V_85_85;
#line 2177 "intermod.m"
                        MR_Word transform_hlds__intermod__V_86_86;
#line 2177 "intermod.m"
                        MR_Word transform_hlds__intermod__V_87_87;
#line 2177 "intermod.m"
                        MR_Word transform_hlds__intermod__V_88_88;
#line 2177 "intermod.m"
                        MR_Word transform_hlds__intermod__V_89_89;
#line 2177 "intermod.m"
                        MR_Word transform_hlds__intermod__V_91_91;
#line 2177 "intermod.m"
                        MR_Word transform_hlds__intermod__V_90_90;

#line 248 "intermod.m"
                        {
#line 248 "intermod.m"
                          hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__VarTypes_39);
                        }
#line 249 "intermod.m"
                        {
#line 249 "intermod.m"
                          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__TVarSet_40);
                        }
#line 2177 "intermod.m"
                        transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 0)));
#line 2177 "intermod.m"
                        transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 1)));
#line 2177 "intermod.m"
                        transform_hlds__intermod__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 2)));
#line 2177 "intermod.m"
                        transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 3)));
#line 2177 "intermod.m"
                        transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 4)));
#line 2177 "intermod.m"
                        transform_hlds__intermod__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 5)));
#line 2177 "intermod.m"
                        transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 6)));
#line 2177 "intermod.m"
                        transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 7)));
#line 2177 "intermod.m"
                        transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 8)));
#line 2177 "intermod.m"
                        {
#line 2177 "intermod.m"
                          transform_hlds__intermod__STATE_VARIABLE_Info_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2177 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 0) = ((MR_Box) (transform_hlds__intermod__V_83_83));
#line 2177 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 1) = ((MR_Box) (transform_hlds__intermod__V_84_84));
#line 2177 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 2) = ((MR_Box) (transform_hlds__intermod__V_85_85));
#line 2177 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 3) = ((MR_Box) (transform_hlds__intermod__V_86_86));
#line 2177 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 4) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2177 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 5) = ((MR_Box) (transform_hlds__intermod__V_88_88));
#line 2177 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 6) = ((MR_Box) (transform_hlds__intermod__V_89_89));
#line 2177 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_39));
#line 2177 "intermod.m"
                          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 8) = ((MR_Box) (transform_hlds__intermod__V_91_91));
#line 2177 "intermod.m"
                        }
#line 251 "intermod.m"
                        {
#line 251 "intermod.m"
                          transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(transform_hlds__intermod__TVarSet_40, transform_hlds__intermod__STATE_VARIABLE_Info_54_54, &transform_hlds__intermod__STATE_VARIABLE_Info_55_55);
                        }
#line 252 "intermod.m"
                        {
#line 252 "intermod.m"
                          hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep0_37, &transform_hlds__intermod__Clauses0_41);
                        }
#line 253 "intermod.m"
                        {
#line 253 "intermod.m"
                          transform_hlds__intermod__intermod_traverse_clauses_5_p_0(transform_hlds__intermod__Clauses0_41, &transform_hlds__intermod__Clauses_42, &transform_hlds__intermod__DoWrite_97, transform_hlds__intermod__STATE_VARIABLE_Info_55_55, &transform_hlds__intermod__STATE_VARIABLE_Info_56_99);
                        }
#line 254 "intermod.m"
                        {
#line 254 "intermod.m"
                          hlds__hlds_clauses__set_clause_list_2_p_0(transform_hlds__intermod__Clauses_42, &transform_hlds__intermod__ClausesRep_98);
                        }
#line 278 "intermod.m"
                        if ((transform_hlds__intermod__DoWrite_97 == (MR_Integer) 0))
#line 281 "intermod.m"
                          transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 278 "intermod.m"
                        else
#line 261 "intermod.m"
                          {
#line 261 "intermod.m"
                            MR_Word transform_hlds__intermod__ClausesInfo_45;
#line 261 "intermod.m"
                            MR_Word transform_hlds__intermod__PredInfo_46;
#line 261 "intermod.m"
                            MR_Word transform_hlds__intermod__PredTable_47;
#line 261 "intermod.m"
                            MR_Word transform_hlds__intermod__ModuleInfo_48;
#line 261 "intermod.m"
                            MR_Word transform_hlds__intermod__Preds0_49;
#line 261 "intermod.m"
                            MR_Word transform_hlds__intermod__Preds_50;
#line 261 "intermod.m"
                            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_58_58;
#line 261 "intermod.m"
                            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_59_59;

#line 262 "intermod.m"
                            {
#line 262 "intermod.m"
                              hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(transform_hlds__intermod__ClausesRep_98, transform_hlds__intermod__ItemNumbers0_38, transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ClausesInfo_45);
                            }
#line 264 "intermod.m"
                            {
#line 264 "intermod.m"
                              hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(transform_hlds__intermod__ClausesInfo_45, transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__PredInfo_46);
                            }
#line 265 "intermod.m"
                            {
#line 265 "intermod.m"
                              mercury__map__det_update_4_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, transform_hlds__intermod__TypeCtorInfo_63_63, ((MR_Box) (transform_hlds__intermod__PredId_17)), ((MR_Box) (transform_hlds__intermod__PredInfo_46)), transform_hlds__intermod__PredTable0_26, &transform_hlds__intermod__PredTable_47);
                            }
#line 266 "intermod.m"
                            {
#line 266 "intermod.m"
                              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__PredTable_47, transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__ModuleInfo_48);
                            }
#line 267 "intermod.m"
                            {
#line 267 "intermod.m"
                              transform_hlds__intermod__intermod_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_56_99, &transform_hlds__intermod__Preds0_49);
                            }
#line 268 "intermod.m"
                            {
#line 268 "intermod.m"
                              transform_hlds__intermod__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(transform_hlds__intermod__PredInfo_46);
                            }
#line 272 "intermod.m"
                            if (transform_hlds__intermod__succeeded)
#line 271 "intermod.m"
                              {
#line 271 "intermod.m"
                                transform_hlds__intermod__intermod_info_set_write_header_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_56_99, &transform_hlds__intermod__STATE_VARIABLE_Info_58_58);
                              }
#line 272 "intermod.m"
                            else
#line 271 "intermod.m"
                              transform_hlds__intermod__STATE_VARIABLE_Info_58_58 = transform_hlds__intermod__STATE_VARIABLE_Info_56_99;
#line 275 "intermod.m"
                            {
#line 275 "intermod.m"
                              mercury__set__insert_3_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, ((MR_Box) (transform_hlds__intermod__PredId_17)), transform_hlds__intermod__Preds0_49, &transform_hlds__intermod__Preds_50);
                            }
#line 276 "intermod.m"
                            {
#line 276 "intermod.m"
                              transform_hlds__intermod__intermod_info_set_preds_3_p_0(transform_hlds__intermod__Preds_50, transform_hlds__intermod__STATE_VARIABLE_Info_58_58, &transform_hlds__intermod__STATE_VARIABLE_Info_59_59);
                            }
#line 277 "intermod.m"
                            {
#line 277 "intermod.m"
                              transform_hlds__intermod__intermod_info_set_module_info_3_p_0(transform_hlds__intermod__ModuleInfo_48, transform_hlds__intermod__STATE_VARIABLE_Info_59_59, &transform_hlds__intermod__STATE_VARIABLE_Info_60_60);
                            }
#line 261 "intermod.m"
                          }
#line 4044 "transform_hlds.intermod.c"
                      }
#line 4046 "transform_hlds.intermod.c"
                  }
#line 241 "intermod.m"
              }
#line 283 "intermod.m"
            else
#line 281 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 286 "intermod.m"
            /* direct tailcall eliminated */
#line 286 "intermod.m"
            {
#line 286 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__PredIds_18;
#line 286 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_7 = transform_hlds__intermod__STATE_VARIABLE_Info_60_60;

#line 286 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_0_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 286 "intermod.m"
              transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 286 "intermod.m"
            }
#line 286 "intermod.m"
            continue;
#line 227 "intermod.m"
          }
#line 225 "intermod.m"
      }
#line 225 "intermod.m"
      break;
#line 225 "intermod.m"
    }
#line 222 "intermod.m"
}

#line 203 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
#line 203 "intermod.m"
  MR_Word transform_hlds__intermod__ExtraExportedPreds0_8,
#line 203 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_10,
#line 203 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_11,
#line 203 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_12,
#line 203 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_19,
#line 203 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_20)
#line 203 "intermod.m"
{
#line 207 "intermod.m"
  while (MR_TRUE)
#line 207 "intermod.m"
    {
#line 207 "intermod.m"
      /* tailcall optimized into a loop */
#line 207 "intermod.m"
      {
#line 207 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;
#line 207 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 207 "intermod.m"
        MR_Word transform_hlds__intermod__ExtraExportedPreds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 207 "intermod.m"
        MR_Word transform_hlds__intermod__NewlyExportedPreds_15;
#line 207 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21;
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
#line 2160 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));

#line 209 "intermod.m"
        {
#line 209 "intermod.m"
          transform_hlds__intermod__V_21_21 = mercury__set__difference_2_f_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__ExtraExportedPreds_14, transform_hlds__intermod__ExtraExportedPreds0_8);
        }
#line 209 "intermod.m"
        {
#line 209 "intermod.m"
          transform_hlds__intermod__NewlyExportedPreds_15 = mercury__set__to_sorted_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__V_21_21);
        }
#line 213 "intermod.m"
        if ((transform_hlds__intermod__NewlyExportedPreds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 212 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_20 = transform_hlds__intermod__STATE_VARIABLE_Info_0_19;
#line 213 "intermod.m"
        else
#line 214 "intermod.m"
          {
#line 214 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_22_22;

#line 216 "intermod.m"
            {
#line 216 "intermod.m"
              transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__NewlyExportedPreds_15, (MR_Integer) 1, transform_hlds__intermod__InlineThreshold_10, transform_hlds__intermod__HigherOrderSizeLimit_11, transform_hlds__intermod__Deforestation_12, transform_hlds__intermod__STATE_VARIABLE_Info_0_19, &transform_hlds__intermod__STATE_VARIABLE_Info_22_22);
            }
#line 218 "intermod.m"
            /* direct tailcall eliminated */
#line 218 "intermod.m"
            {
#line 218 "intermod.m"
              MR_Word transform_hlds__intermod__ExtraExportedPreds0__tmp_copy_8 = transform_hlds__intermod__ExtraExportedPreds_14;
#line 218 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_19 = transform_hlds__intermod__STATE_VARIABLE_Info_22_22;

#line 218 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_0_19 = transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_19;
#line 218 "intermod.m"
              transform_hlds__intermod__ExtraExportedPreds0_8 = transform_hlds__intermod__ExtraExportedPreds0__tmp_copy_8;
#line 218 "intermod.m"
            }
#line 218 "intermod.m"
            continue;
#line 214 "intermod.m"
          }
#line 207 "intermod.m"
      }
#line 207 "intermod.m"
      break;
#line 207 "intermod.m"
    }
#line 203 "intermod.m"
}

#line 91 "intermod.m"
void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0(
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__FileType_11,
#line 91 "intermod.m"
  MR_String transform_hlds__intermod__FileName_12,
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleSpecs_13,
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0_22,
#line 91 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Specs_23,
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleError_15,
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_24,
#line 91 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_25)
#line 91 "intermod.m"
{
#line 2559 "intermod.m"
  {
#line 2559 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2559 "intermod.m"
    if ((transform_hlds__intermod__ModuleError_15 == (MR_Integer) 2))
#line 2569 "intermod.m"
      {
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__WarningOption_17;
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__Severity_18;
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__Pieces_19;
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__Msg_20;
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__Spec_21;
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29;
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__V_36_36;
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__V_37_37;
#line 2569 "intermod.m"
        MR_Word transform_hlds__intermod__V_50_50;

#line 2582 "intermod.m"
        if ((transform_hlds__intermod__FileType_11 == (MR_Integer) 0))
#line 2581 "intermod.m"
          transform_hlds__intermod__WarningOption_17 = (MR_Integer) 12;
#line 2582 "intermod.m"
        else
#line 2584 "intermod.m"
          transform_hlds__intermod__WarningOption_17 = (MR_Integer) 13;
#line 2586 "intermod.m"
        {
#line 2586 "intermod.m"
          transform_hlds__intermod__Severity_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2586 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 0) = ((MR_Box) (transform_hlds__intermod__WarningOption_17));
#line 2586 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2586 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2586 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2586 "intermod.m"
        }
#line 2589 "intermod.m"
        {
#line 2589 "intermod.m"
          transform_hlds__intermod__V_37_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2589 "intermod.m"
          MR_hl_field(MR_mktag(2), transform_hlds__intermod__V_37_37, 0) = ((MR_Box) (transform_hlds__intermod__FileName_12));
#line 2589 "intermod.m"
        }
#line 2589 "intermod.m"
        {
#line 2589 "intermod.m"
          transform_hlds__intermod__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2589 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_36_36, 0) = ((MR_Box) (transform_hlds__intermod__V_37_37));
#line 2589 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_1[15])));
#line 2589 "intermod.m"
        }
#line 2589 "intermod.m"
        {
#line 2589 "intermod.m"
          transform_hlds__intermod__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2589 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__intermod_scalar_common_1[18])));
#line 2589 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, 1) = ((MR_Box) (transform_hlds__intermod__V_36_36));
#line 2589 "intermod.m"
        }
#line 2590 "intermod.m"
        {
#line 2590 "intermod.m"
          transform_hlds__intermod__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2590 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 0) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 2590 "intermod.m"
        }
#line 2588 "intermod.m"
        {
#line 2588 "intermod.m"
          transform_hlds__intermod__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2588 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_31_31, 0) = ((MR_Box) (transform_hlds__intermod__V_32_32));
#line 2588 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2588 "intermod.m"
        }
#line 2590 "intermod.m"
        {
#line 2590 "intermod.m"
          transform_hlds__intermod__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2590 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_29_29, 0) = ((MR_Box) ((transform_hlds__intermod__WarningOption_17 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 2590 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_29_29, 1) = ((MR_Box) (transform_hlds__intermod__V_31_31));
#line 2590 "intermod.m"
        }
#line 2588 "intermod.m"
        {
#line 2588 "intermod.m"
          transform_hlds__intermod__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2588 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Pieces_19, 0) = ((MR_Box) (transform_hlds__intermod__V_29_29));
#line 2588 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Pieces_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2588 "intermod.m"
        }
#line 2591 "intermod.m"
        {
#line 2591 "intermod.m"
          transform_hlds__intermod__Msg_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2591 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2591 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2591 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2591 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 3) = ((MR_Box) (transform_hlds__intermod__Pieces_19));
#line 2591 "intermod.m"
        }
#line 2592 "intermod.m"
        {
#line 2592 "intermod.m"
          transform_hlds__intermod__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2592 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_50_50, 0) = ((MR_Box) (transform_hlds__intermod__Msg_20));
#line 2592 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2592 "intermod.m"
        }
#line 2592 "intermod.m"
        {
#line 2592 "intermod.m"
          transform_hlds__intermod__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 0) = ((MR_Box) (transform_hlds__intermod__Severity_18));
#line 2592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2592 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 2) = ((MR_Box) (transform_hlds__intermod__V_50_50));
#line 2592 "intermod.m"
        }
#line 2593 "intermod.m"
        {
#line 2593 "intermod.m"
          MR_Word base;
#line 2593 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2593 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = base;
#line 2593 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Spec_21));
#line 2593 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Specs_0_22));
#line 2593 "intermod.m"
        }
#line 2593 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Error_25 = transform_hlds__intermod__STATE_VARIABLE_Error_0_24;
#line 2569 "intermod.m"
      }
#line 2559 "intermod.m"
    else
#line 2559 "intermod.m"
      if ((transform_hlds__intermod__ModuleError_15 == (MR_Integer) 0))
#line 2559 "intermod.m"
        {
#line 2559 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = transform_hlds__intermod__STATE_VARIABLE_Specs_0_22;
#line 2559 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Error_25 = transform_hlds__intermod__STATE_VARIABLE_Error_0_24;
#line 2559 "intermod.m"
        }
#line 2559 "intermod.m"
      else
#line 2565 "intermod.m"
        {
#line 2566 "intermod.m"
          {
#line 2566 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__intermod__ModuleSpecs_13, transform_hlds__intermod__STATE_VARIABLE_Specs_0_22);
          }
#line 2567 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Error_25 = (MR_Integer) 1;
#line 2565 "intermod.m"
        }
#line 2559 "intermod.m"
  }
#line 91 "intermod.m"
}

#line 2285 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2285__1_2_p_0(
#line 2285 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_10,
#line 2285 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_11)
#line 2285 "intermod.m"
{
#line 2285 "intermod.m"
  {
#line 2285 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2285 "intermod.m"
    MR_Integer transform_hlds__intermod__V_7_7;

#line 2285 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_10, (MR_Integer) 0)));
#line 2285 "intermod.m"
    transform_hlds__intermod__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_10, (MR_Integer) 1)));
#line 2285 "intermod.m"
  }
#line 2285 "intermod.m"
}

#line 2251 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2251__1_4_p_0(
#line 2251 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_4,
#line 2251 "intermod.m"
  MR_Word transform_hlds__intermod__SpecPredMap_8,
#line 2251 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_13,
#line 2251 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_14)
#line 2251 "intermod.m"
{
#line 2251 "intermod.m"
  {
#line 2251 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2251 "intermod.m"
    MR_Word transform_hlds__intermod__V_15_15;
#line 2252 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_HeadVar__4_14;

#line 2252 "intermod.m"
    {
#line 2252 "intermod.m"
      transform_hlds__intermod__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2252 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_15_15, 0) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_13));
#line 2252 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_15_15, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_4));
#line 2252 "intermod.m"
    }
#line 2252 "intermod.m"
    {
#line 2252 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[2], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecPredMap_8, ((MR_Box) (transform_hlds__intermod__V_15_15)), &transform_hlds__intermod__conv0_HeadVar__4_14);
    }
#line 2252 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2252 "intermod.m"
      {
#line 2252 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_14 = ((MR_Word) transform_hlds__intermod__conv0_HeadVar__4_14);
#line 2252 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 2252 "intermod.m"
      }
#line 2251 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2251 "intermod.m"
  }
#line 2251 "intermod.m"
}

#line 1899 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1899__1_4_p_0(
#line 1899 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1899 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVarMap_15,
#line 1899 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_23,
#line 1899 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_24)
#line 1899 "intermod.m"
{
#line 1899 "intermod.m"
  {
#line 1899 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1899 "intermod.m"
    MR_Word transform_hlds__intermod__HeadTerm0_18;
#line 1897 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_HeadTerm0_18;

#line 1897 "intermod.m"
    {
#line 1897 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[6], (MR_Word) &transform_hlds__intermod_scalar_common_1[7], transform_hlds__intermod__HeadVarMap_15, ((MR_Box) (transform_hlds__intermod__HeadVar__3_23)), &transform_hlds__intermod__conv0_HeadTerm0_18);
    }
#line 1897 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1897 "intermod.m"
      {
#line 1897 "intermod.m"
        transform_hlds__intermod__HeadTerm0_18 = ((MR_Word) transform_hlds__intermod__conv0_HeadTerm0_18);
#line 1897 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1897 "intermod.m"
      }
#line 1899 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1898 "intermod.m"
      *transform_hlds__intermod__HeadVar__4_24 = transform_hlds__intermod__HeadTerm0_18;
#line 1899 "intermod.m"
    else
#line 1900 "intermod.m"
      {
#line 1900 "intermod.m"
        MR_Word transform_hlds__intermod__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 3)));
#line 1900 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 0)));
#line 1900 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 1)));
#line 1900 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 2)));
#line 1900 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 4)));

#line 1901 "intermod.m"
        {
#line 1901 "intermod.m"
          MR_Word base;
#line 1901 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1901 "intermod.m"
          *transform_hlds__intermod__HeadVar__4_24 = base;
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_23));
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Context_19));
#line 1901 "intermod.m"
        }
#line 1900 "intermod.m"
      }
#line 1899 "intermod.m"
  }
#line 1899 "intermod.m"
}

#line 1817 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1817__1_1_p_0(
#line 1817 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_67)
#line 1817 "intermod.m"
{
#line 1817 "intermod.m"
  {
#line 1817 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1817 "intermod.m"
    MR_Word transform_hlds__intermod__GE_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_67, (MR_Integer) 0)));
#line 1819 "intermod.m"
    MR_Word transform_hlds__intermod__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_67, (MR_Integer) 1)));
#line 1820 "intermod.m"
    MR_Word transform_hlds__intermod__V_39_39;
#line 1820 "intermod.m"
    MR_Word transform_hlds__intermod__V_40_40;
#line 1820 "intermod.m"
    MR_Integer transform_hlds__intermod__V_41_41;
#line 1820 "intermod.m"
    MR_Word transform_hlds__intermod__V_42_42;
#line 1820 "intermod.m"
    MR_Word transform_hlds__intermod__V_43_43;
#line 1820 "intermod.m"
    MR_Word transform_hlds__intermod__V_44_44;
#line 1820 "intermod.m"
    MR_Word transform_hlds__intermod__V_45_45;

#line 1820 "intermod.m"
    transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__GE_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1820 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1820 "intermod.m"
      {
#line 1820 "intermod.m"
        transform_hlds__intermod__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 1)));
#line 1820 "intermod.m"
        transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 2)));
#line 1820 "intermod.m"
        transform_hlds__intermod__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 3)));
#line 1820 "intermod.m"
        transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 4)));
#line 1820 "intermod.m"
        transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 5)));
#line 1820 "intermod.m"
        transform_hlds__intermod__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 6)));
#line 1820 "intermod.m"
        transform_hlds__intermod__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 7)));
#line 1820 "intermod.m"
      }
#line 1817 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 1817 "intermod.m"
  }
#line 1817 "intermod.m"
}

#line 1695 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1695__1_3_p_0(
#line 1695 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__1_45,
#line 1695 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__2_46,
#line 1695 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_47)
#line 1695 "intermod.m"
{
#line 1695 "intermod.m"
  {
#line 1695 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1695 "intermod.m"
    MR_Integer transform_hlds__intermod__ProcInt1_34;
#line 1695 "intermod.m"
    MR_Integer transform_hlds__intermod__ProcInt2_35;

#line 1697 "intermod.m"
    {
#line 1697 "intermod.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__intermod__HeadVar__1_45, &transform_hlds__intermod__ProcInt1_34);
    }
#line 1698 "intermod.m"
    {
#line 1698 "intermod.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__intermod__HeadVar__2_46, &transform_hlds__intermod__ProcInt2_35);
    }
#line 1699 "intermod.m"
    {
#line 1699 "intermod.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__intermod__HeadVar__3_47, transform_hlds__intermod__ProcInt1_34, transform_hlds__intermod__ProcInt2_35);
#line 1699 "intermod.m"
      return;
    }
#line 1695 "intermod.m"
  }
#line 1695 "intermod.m"
}

#line 1617 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_2(
#line 1617 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1617 "intermod.m"
{
#line 1617 "intermod.m"
  {
#line 1617 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1617 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__N_8 = ((MR_Integer) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__conv0_N_8);
#line 1617 "intermod.m"
    {
#line 1617 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_1(transform_hlds__intermod__env_ptr);
#line 1617 "intermod.m"
      return;
    }
#line 1617 "intermod.m"
  }
#line 1617 "intermod.m"
}

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_1(
#line 1616 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1616 "intermod.m"
{
#line 1616 "intermod.m"
  {
#line 1616 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1616 "intermod.m"
    {
#line 1618 "intermod.m"
      MR_Box transform_hlds__intermod__conv1_HeadVar__3_9;

#line 4715 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) &transform_hlds__intermod_scalar_common_1[5];
#line 1618 "intermod.m"
      {
#line 1618 "intermod.m"
        transform_hlds__intermod__conv1_HeadVar__3_9 = mercury__list__det_index1_2_f_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__TypeInfo_13_13, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__TVars_4, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__N_8);
      }
#line 1618 "intermod.m"
      *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__HeadVar__3_9) = ((MR_Word) transform_hlds__intermod__conv1_HeadVar__3_9);
#line 1618 "intermod.m"
      {
#line 1618 "intermod.m"
        ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__cont_env_ptr);
#line 1618 "intermod.m"
        return;
      }
#line 1616 "intermod.m"
    }
#line 1616 "intermod.m"
  }
#line 1616 "intermod.m"
}

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0(
#line 1616 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1616 "intermod.m"
  MR_Word transform_hlds__intermod__Set_5,
#line 1616 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_9,
#line 1616 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1616 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1616 "intermod.m"
{
#line 1616 "intermod.m"
  {
#line 1616 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0_s transform_hlds__intermod__env;

#line 1616 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__TVars_4 = transform_hlds__intermod__TVars_4;
#line 1616 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__HeadVar__3_9 = transform_hlds__intermod__HeadVar__3_9;
#line 1616 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__cont = transform_hlds__intermod__cont;
#line 1616 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1616 "intermod.m"
    {
#line 1616 "intermod.m"
      MR_bool transform_hlds__intermod__succeeded;

#line 1617 "intermod.m"
      {
#line 1617 "intermod.m"
        mercury__set__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &(transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_env_0__conv0_N_8, transform_hlds__intermod__Set_5, transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0_2, &transform_hlds__intermod__env);
      }
#line 1616 "intermod.m"
    }
#line 1616 "intermod.m"
  }
#line 1616 "intermod.m"
}

#line 1326 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_intermod_info_body__1326__1_3_p_0(
#line 1326 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_48)
#line 1326 "intermod.m"
{
#line 1326 "intermod.m"
  {
#line 1326 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1326 "intermod.m"
    MR_Word transform_hlds__intermod__Lang_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_48, (MR_Integer) 0)));
#line 1326 "intermod.m"
    MR_Word transform_hlds__intermod__Import_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_48, (MR_Integer) 1)));
#line 1326 "intermod.m"
    MR_Word transform_hlds__intermod__FIMInfo_34;
#line 1328 "intermod.m"
    MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_48, (MR_Integer) 2)));

#line 1329 "intermod.m"
    {
#line 1329 "intermod.m"
      transform_hlds__intermod__FIMInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__FIMInfo_34, 0) = ((MR_Box) (transform_hlds__intermod__Lang_31));
#line 1329 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__FIMInfo_34, 1) = ((MR_Box) (transform_hlds__intermod__Import_32));
#line 1329 "intermod.m"
    }
#line 1330 "intermod.m"
    {
#line 1330 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_pragma_foreign_import_module_3_p_0(transform_hlds__intermod__FIMInfo_34);
#line 1330 "intermod.m"
      return;
    }
#line 1326 "intermod.m"
  }
#line 1326 "intermod.m"
}

#line 993 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__993__1_1_f_0(
#line 993 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_54)
#line 993 "intermod.m"
{
#line 993 "intermod.m"
  {
#line 993 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 993 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__2_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 0)));
#line 993 "intermod.m"
    MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 1)));
#line 993 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 2)));
#line 993 "intermod.m"
    MR_Word transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 3)));
#line 993 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 4)));
#line 993 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 5)));
#line 993 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 6)));
#line 993 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 7)));

#line 993 "intermod.m"
    return transform_hlds__intermod__HeadVar__2_55;
#line 993 "intermod.m"
  }
#line 993 "intermod.m"
}

#line 980 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__980__1_1_f_0(
#line 980 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_50)
#line 980 "intermod.m"
{
#line 980 "intermod.m"
  {
#line 980 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 980 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__2_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 2)));
#line 980 "intermod.m"
    MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 0)));
#line 980 "intermod.m"
    MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 1)));
#line 980 "intermod.m"
    MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 3)));
#line 980 "intermod.m"
    MR_Integer transform_hlds__intermod__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 4)));

#line 980 "intermod.m"
    return transform_hlds__intermod__HeadVar__2_51;
#line 980 "intermod.m"
  }
#line 980 "intermod.m"
}

#line 835 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__835__1_2_p_0(
#line 835 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_44,
#line 835 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_45)
#line 835 "intermod.m"
{
#line 835 "intermod.m"
  {
#line 835 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 835 "intermod.m"
    MR_Integer transform_hlds__intermod__V_27_27;

#line 835 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_44, (MR_Integer) 0)));
#line 835 "intermod.m"
    transform_hlds__intermod__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_44, (MR_Integer) 1)));
#line 835 "intermod.m"
  }
#line 835 "intermod.m"
}

#line 2444 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__grab_opt_files__2444__1_3_p_0(
#line 2444 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_23,
#line 2444 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_24,
#line 2444 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_82)
#line 2444 "intermod.m"
{
#line 2444 "intermod.m"
  {
#line 2444 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__3_82)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__HeadVar__3_82, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 2444 "intermod.m"
    MR_Word transform_hlds__intermod__ItemPragma_30;
#line 2444 "intermod.m"
    MR_Word transform_hlds__intermod__Pragma_32;
#line 2446 "intermod.m"
    MR_Word transform_hlds__intermod__V_31_31;
#line 2446 "intermod.m"
    MR_Word transform_hlds__intermod__V_33_33;
#line 2446 "intermod.m"
    MR_Integer transform_hlds__intermod__V_34_34;

#line 2445 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2445 "intermod.m"
      {
#line 2445 "intermod.m"
        transform_hlds__intermod__ItemPragma_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__HeadVar__3_82, (MR_Integer) 1)));
#line 2446 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma_30, (MR_Integer) 0)));
#line 2446 "intermod.m"
        transform_hlds__intermod__Pragma_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma_30, (MR_Integer) 1)));
#line 2446 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma_30, (MR_Integer) 2)));
#line 2446 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma_30, (MR_Integer) 3)));
#line 2450 "intermod.m"
        if (((((MR_tag((MR_Word) transform_hlds__intermod__Pragma_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Pragma_32, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 2451 "intermod.m"
          transform_hlds__intermod__succeeded = (transform_hlds__intermod__StructureReuse_24 == (MR_Integer) 1);
#line 2450 "intermod.m"
        else
#line 2450 "intermod.m"
          if (((((MR_tag((MR_Word) transform_hlds__intermod__Pragma_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Pragma_32, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2448 "intermod.m"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__UnusedArgs_23 == (MR_Integer) 1);
#line 2450 "intermod.m"
          else
#line 2450 "intermod.m"
            transform_hlds__intermod__succeeded = MR_FALSE;
#line 2445 "intermod.m"
      }
#line 2444 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2444 "intermod.m"
  }
#line 2444 "intermod.m"
}

#line 74 "intermod.m"
void MR_CALL 
transform_hlds__intermod____Compare____opt_file_type_0_0(
#line 74 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__1_1,
#line 74 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 74 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3)
#line 74 "intermod.m"
{
#line 74 "intermod.m"
  {
#line 74 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 74 "intermod.m"
    MR_Integer transform_hlds__intermod__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__intermod__HeadVar__2_2;
#line 74 "intermod.m"
    MR_Integer transform_hlds__intermod__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__intermod__HeadVar__3_3;

#line 74 "intermod.m"
    {
#line 74 "intermod.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__intermod__HeadVar__1_1, transform_hlds__intermod__Cast_HeadVar1_4, transform_hlds__intermod__Cast_HeadVar2_5);
#line 74 "intermod.m"
      return;
    }
#line 74 "intermod.m"
  }
#line 74 "intermod.m"
}

#line 74 "intermod.m"
MR_bool MR_CALL 
transform_hlds__intermod____Unify____opt_file_type_0_0(
#line 74 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_1,
#line 74 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 74 "intermod.m"
{
#line 5018 "transform_hlds.intermod.c"
  {
#line 5020 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded = (transform_hlds__intermod__HeadVar__2_1 == transform_hlds__intermod__HeadVar__2_2);

#line 5023 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 5025 "transform_hlds.intermod.c"
  }
#line 74 "intermod.m"
}

#line 2077 "intermod.m"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0(
#line 2077 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__1_1,
#line 2077 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 2077 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3)
#line 2077 "intermod.m"
{
#line 2077 "intermod.m"
  {
#line 2077 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2077 "intermod.m"
    MR_Integer transform_hlds__intermod__CastX_30 = (MR_Integer) transform_hlds__intermod__HeadVar__2_2;
#line 2077 "intermod.m"
    MR_Integer transform_hlds__intermod__CastY_31 = (MR_Integer) transform_hlds__intermod__HeadVar__3_3;

#line 2077 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__CastX_30 == transform_hlds__intermod__CastY_31);
#line 2077 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 5054 "transform_hlds.intermod.c"
      *transform_hlds__intermod__HeadVar__1_1 = (MR_Integer) 0;
#line 2077 "intermod.m"
    else
#line 2077 "intermod.m"
      {
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 2)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 3)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 4)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 5)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 6)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 7)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 8)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 2)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 3)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 4)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 5)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 6)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 7)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 8)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;

#line 2077 "intermod.m"
        {
#line 2077 "intermod.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[8], &transform_hlds__intermod__V_22_22, ((MR_Box) (transform_hlds__intermod__V_4_4)), ((MR_Box) (transform_hlds__intermod__V_13_13)));
        }
#line 5104 "transform_hlds.intermod.c"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_22_22 == (MR_Integer) 0);
#line 2077 "intermod.m"
        transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2077 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
          *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_22_22;
#line 2077 "intermod.m"
        else
#line 2077 "intermod.m"
          {
#line 2077 "intermod.m"
            MR_Word transform_hlds__intermod__V_23_23;

#line 2077 "intermod.m"
            {
#line 2077 "intermod.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[9], &transform_hlds__intermod__V_23_23, ((MR_Box) (transform_hlds__intermod__V_5_5)), ((MR_Box) (transform_hlds__intermod__V_14_14)));
            }
#line 5124 "transform_hlds.intermod.c"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_23_23 == (MR_Integer) 0);
#line 2077 "intermod.m"
            transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2077 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
              *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_23_23;
#line 2077 "intermod.m"
            else
#line 2077 "intermod.m"
              {
#line 2077 "intermod.m"
                MR_Word transform_hlds__intermod__V_24_24;

#line 2077 "intermod.m"
                {
#line 2077 "intermod.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[9], &transform_hlds__intermod__V_24_24, ((MR_Box) (transform_hlds__intermod__V_6_6)), ((MR_Box) (transform_hlds__intermod__V_15_15)));
                }
#line 5144 "transform_hlds.intermod.c"
                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_24_24 == (MR_Integer) 0);
#line 2077 "intermod.m"
                transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2077 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                  *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_24_24;
#line 2077 "intermod.m"
                else
#line 2077 "intermod.m"
                  {
#line 2077 "intermod.m"
                    MR_Word transform_hlds__intermod__V_25_25;

#line 2077 "intermod.m"
                    {
#line 2077 "intermod.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[10], &transform_hlds__intermod__V_25_25, ((MR_Box) (transform_hlds__intermod__V_7_7)), ((MR_Box) (transform_hlds__intermod__V_16_16)));
                    }
#line 5164 "transform_hlds.intermod.c"
                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_25_25 == (MR_Integer) 0);
#line 2077 "intermod.m"
                    transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2077 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                      *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_25_25;
#line 2077 "intermod.m"
                    else
#line 2077 "intermod.m"
                      {
#line 2077 "intermod.m"
                        MR_Word transform_hlds__intermod__V_26_26;

#line 2077 "intermod.m"
                        {
#line 2077 "intermod.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[11], &transform_hlds__intermod__V_26_26, ((MR_Box) (transform_hlds__intermod__V_8_8)), ((MR_Box) (transform_hlds__intermod__V_17_17)));
                        }
#line 5184 "transform_hlds.intermod.c"
                        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_26_26 == (MR_Integer) 0);
#line 2077 "intermod.m"
                        transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2077 "intermod.m"
                        if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                          *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_26_26;
#line 2077 "intermod.m"
                        else
#line 2077 "intermod.m"
                          {
#line 2077 "intermod.m"
                            MR_Word transform_hlds__intermod__V_27_27;

#line 2077 "intermod.m"
                            {
#line 2077 "intermod.m"
                              hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__intermod__V_27_27, transform_hlds__intermod__V_9_9, transform_hlds__intermod__V_18_18);
                            }
#line 5204 "transform_hlds.intermod.c"
                            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_27_27 == (MR_Integer) 0);
#line 2077 "intermod.m"
                            transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2077 "intermod.m"
                            if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                              *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_27_27;
#line 2077 "intermod.m"
                            else
#line 2077 "intermod.m"
                              {
#line 2077 "intermod.m"
                                MR_Word transform_hlds__intermod__V_28_28;
#line 2077 "intermod.m"
                                MR_Integer transform_hlds__intermod__V_41_41 = (MR_Integer) transform_hlds__intermod__V_10_10;
#line 2077 "intermod.m"
                                MR_Integer transform_hlds__intermod__V_42_42 = (MR_Integer) transform_hlds__intermod__V_19_19;

#line 2077 "intermod.m"
                                {
#line 2077 "intermod.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__intermod__V_28_28, transform_hlds__intermod__V_41_41, transform_hlds__intermod__V_42_42);
                                }
#line 5228 "transform_hlds.intermod.c"
                                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_28_28 == (MR_Integer) 0);
#line 2077 "intermod.m"
                                transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2077 "intermod.m"
                                if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                                  *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_28_28;
#line 2077 "intermod.m"
                                else
#line 2077 "intermod.m"
                                  {
#line 2077 "intermod.m"
                                    MR_Word transform_hlds__intermod__V_29_29;

#line 2077 "intermod.m"
                                    {
#line 2077 "intermod.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &transform_hlds__intermod__V_29_29, ((MR_Box) (transform_hlds__intermod__V_11_11)), ((MR_Box) (transform_hlds__intermod__V_20_20)));
                                    }
#line 5248 "transform_hlds.intermod.c"
                                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_29_29 == (MR_Integer) 0);
#line 2077 "intermod.m"
                                    transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2077 "intermod.m"
                                    if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                                      *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_29_29;
#line 2077 "intermod.m"
                                    else
#line 2077 "intermod.m"
                                      {
#line 2077 "intermod.m"
                                        {
#line 2077 "intermod.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[12], transform_hlds__intermod__HeadVar__1_1, ((MR_Box) (transform_hlds__intermod__V_12_12)), ((MR_Box) (transform_hlds__intermod__V_21_21)));
#line 2077 "intermod.m"
                                          return;
                                        }
#line 2077 "intermod.m"
                                      }
#line 2077 "intermod.m"
                                  }
#line 2077 "intermod.m"
                              }
#line 2077 "intermod.m"
                          }
#line 2077 "intermod.m"
                      }
#line 2077 "intermod.m"
                  }
#line 2077 "intermod.m"
              }
#line 2077 "intermod.m"
          }
#line 2077 "intermod.m"
      }
#line 2077 "intermod.m"
  }
#line 2077 "intermod.m"
}

#line 2077 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0(
#line 2077 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2077 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 2077 "intermod.m"
{
#line 2077 "intermod.m"
  {
#line 2077 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2077 "intermod.m"
    MR_Integer transform_hlds__intermod__CastX_21 = (MR_Integer) transform_hlds__intermod__HeadVar__1_1;
#line 2077 "intermod.m"
    MR_Integer transform_hlds__intermod__CastY_22 = (MR_Integer) transform_hlds__intermod__HeadVar__2_2;

#line 2077 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__CastX_21 == transform_hlds__intermod__CastY_22);
#line 2077 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
      transform_hlds__intermod__succeeded = MR_TRUE;
#line 2077 "intermod.m"
    else
#line 2077 "intermod.m"
      {
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_24_24;
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_25_25;
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_26_26;
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_27_27;
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_29_29;
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_30_30;
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 2)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 3)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 4)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 5)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 6)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 7)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 8)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 2)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 3)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 4)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 5)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 6)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 7)));
#line 2077 "intermod.m"
        MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 8)));

#line 5367 "transform_hlds.intermod.c"
        {
#line 5369 "transform_hlds.intermod.c"
          transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[8], ((MR_Box) (transform_hlds__intermod__V_3_3)), ((MR_Box) (transform_hlds__intermod__V_12_12)));
        }
#line 2077 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
          {
#line 5376 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeInfo_24_24 = (MR_Word) &transform_hlds__intermod_scalar_common_1[9];
#line 5378 "transform_hlds.intermod.c"
            {
#line 5380 "transform_hlds.intermod.c"
              transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_24_24, ((MR_Box) (transform_hlds__intermod__V_4_4)), ((MR_Box) (transform_hlds__intermod__V_13_13)));
            }
#line 2077 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
              {
#line 5387 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeInfo_25_25 = (MR_Word) &transform_hlds__intermod_scalar_common_1[9];
#line 5389 "transform_hlds.intermod.c"
                {
#line 5391 "transform_hlds.intermod.c"
                  transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_25_25, ((MR_Box) (transform_hlds__intermod__V_5_5)), ((MR_Box) (transform_hlds__intermod__V_14_14)));
                }
#line 2077 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                  {
#line 5398 "transform_hlds.intermod.c"
                    transform_hlds__intermod__TypeInfo_26_26 = (MR_Word) &transform_hlds__intermod_scalar_common_1[10];
#line 5400 "transform_hlds.intermod.c"
                    {
#line 5402 "transform_hlds.intermod.c"
                      transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_26_26, ((MR_Box) (transform_hlds__intermod__V_6_6)), ((MR_Box) (transform_hlds__intermod__V_15_15)));
                    }
#line 2077 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                      {
#line 5409 "transform_hlds.intermod.c"
                        transform_hlds__intermod__TypeInfo_27_27 = (MR_Word) &transform_hlds__intermod_scalar_common_1[11];
#line 5411 "transform_hlds.intermod.c"
                        {
#line 5413 "transform_hlds.intermod.c"
                          transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_27_27, ((MR_Box) (transform_hlds__intermod__V_7_7)), ((MR_Box) (transform_hlds__intermod__V_16_16)));
                        }
#line 2077 "intermod.m"
                        if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                          {
#line 5420 "transform_hlds.intermod.c"
                            {
#line 5422 "transform_hlds.intermod.c"
                              transform_hlds__intermod__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__intermod__V_8_8, transform_hlds__intermod__V_17_17);
                            }
#line 2077 "intermod.m"
                            if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                              {
#line 5429 "transform_hlds.intermod.c"
                                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_9_9 == transform_hlds__intermod__V_18_18);
#line 2077 "intermod.m"
                                if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                                  {
#line 5435 "transform_hlds.intermod.c"
                                    transform_hlds__intermod__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 5437 "transform_hlds.intermod.c"
                                    {
#line 5439 "transform_hlds.intermod.c"
                                      transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeCtorInfo_29_29, ((MR_Box) (transform_hlds__intermod__V_10_10)), ((MR_Box) (transform_hlds__intermod__V_19_19)));
                                    }
#line 2077 "intermod.m"
                                    if (transform_hlds__intermod__succeeded)
#line 2077 "intermod.m"
                                      {
#line 5446 "transform_hlds.intermod.c"
                                        transform_hlds__intermod__TypeInfo_30_30 = (MR_Word) &transform_hlds__intermod_scalar_common_1[12];
#line 5448 "transform_hlds.intermod.c"
                                        {
#line 5450 "transform_hlds.intermod.c"
                                          return transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_30_30, ((MR_Box) (transform_hlds__intermod__V_11_11)), ((MR_Box) (transform_hlds__intermod__V_20_20)));
                                        }
#line 2077 "intermod.m"
                                      }
#line 2077 "intermod.m"
                                  }
#line 2077 "intermod.m"
                              }
#line 2077 "intermod.m"
                          }
#line 2077 "intermod.m"
                      }
#line 2077 "intermod.m"
                  }
#line 2077 "intermod.m"
              }
#line 2077 "intermod.m"
          }
#line 2077 "intermod.m"
      }
#line 2077 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2077 "intermod.m"
  }
#line 2077 "intermod.m"
}

#line 2372 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__import_status_to_write_1_p_0(
#line 2372 "intermod.m"
  MR_Word transform_hlds__intermod__Status_2)
#line 2372 "intermod.m"
{
#line 2379 "intermod.m"
  {
#line 2379 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2379 "intermod.m"
    if ((transform_hlds__intermod__Status_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 2385 "intermod.m"
      transform_hlds__intermod__succeeded = MR_TRUE;
#line 2379 "intermod.m"
    else
#line 2379 "intermod.m"
      if ((transform_hlds__intermod__Status_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 2387 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 2379 "intermod.m"
      else
#line 2379 "intermod.m"
        if ((transform_hlds__intermod__Status_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 2388 "intermod.m"
          transform_hlds__intermod__succeeded = MR_TRUE;
#line 2379 "intermod.m"
        else
#line 2379 "intermod.m"
          if ((transform_hlds__intermod__Status_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2384 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 2379 "intermod.m"
          else
#line 2379 "intermod.m"
            if (((MR_tag((MR_Word) transform_hlds__intermod__Status_2)) == (MR_mktag((MR_Integer) 1))))
#line 2389 "intermod.m"
              {
#line 2389 "intermod.m"
                MR_Word transform_hlds__intermod__Status_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_2, (MR_Integer) 0)));
#line 2389 "intermod.m"
                MR_Word transform_hlds__intermod__V_6_6;
#line 2389 "intermod.m"
                MR_Word transform_hlds__intermod__V_23_23;

#line 2390 "intermod.m"
                {
#line 2390 "intermod.m"
                  transform_hlds__intermod__V_6_6 = hlds__hlds_pred__status_is_exported_1_f_0(transform_hlds__intermod__Status_5);
                }
#line 2389 "intermod.m"
                {
#line 2389 "intermod.m"
                  transform_hlds__intermod__V_23_23 = mercury__bool__not_1_f_0(transform_hlds__intermod__V_6_6);
                }
#line 2375 "intermod.m"
                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_23_23 == (MR_Integer) 1);
#line 2389 "intermod.m"
              }
#line 2379 "intermod.m"
            else
#line 2379 "intermod.m"
              transform_hlds__intermod__succeeded = MR_FALSE;
#line 2379 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2379 "intermod.m"
  }
#line 2372 "intermod.m"
}

#line 2341 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(
#line 2341 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2341 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0_2,
#line 2341 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Preds_3)
#line 2341 "intermod.m"
{
#line 2344 "intermod.m"
  while (MR_TRUE)
#line 2344 "intermod.m"
    {
#line 2344 "intermod.m"
      /* tailcall optimized into a loop */
#line 2344 "intermod.m"
      {
#line 2344 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 2344 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2344 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Preds_3 = transform_hlds__intermod__STATE_VARIABLE_Preds_0_2;
#line 2344 "intermod.m"
        else
#line 2345 "intermod.m"
          {
#line 2345 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2345 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 2345 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2345 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2345 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo0_10;
#line 2345 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_22_22;
#line 2346 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_PredInfo0_10;
#line 2365 "intermod.m"
            MR_Word transform_hlds__intermod__Status_11;

#line 2346 "intermod.m"
            {
#line 2346 "intermod.m"
              mercury__map__lookup_3_p_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__STATE_VARIABLE_Preds_0_2, ((MR_Box) (transform_hlds__intermod__PredId_7)), &transform_hlds__intermod__conv0_PredInfo0_10);
            }
#line 2346 "intermod.m"
            transform_hlds__intermod__PredInfo0_10 = ((MR_Word) transform_hlds__intermod__conv0_PredInfo0_10);
#line 2348 "intermod.m"
            {
#line 2348 "intermod.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__Status_11);
            }
#line 2349 "intermod.m"
            {
#line 2349 "intermod.m"
              transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status_11);
            }
#line 2365 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2362 "intermod.m"
              {
#line 2362 "intermod.m"
                MR_Word transform_hlds__intermod__NewStatus_14;
#line 2362 "intermod.m"
                MR_Word transform_hlds__intermod__PredInfo_16;
#line 2352 "intermod.m"
                MR_Word transform_hlds__intermod__Origin_12;
#line 2352 "intermod.m"
                MR_Word transform_hlds__intermod__V_19_19;
#line 2352 "intermod.m"
                MR_Word transform_hlds__intermod__V_20_20;
#line 2353 "intermod.m"
                MR_Word transform_hlds__intermod__V_13_13;

#line 2352 "intermod.m"
                {
#line 2352 "intermod.m"
                  hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__Origin_12);
                }
#line 2353 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Origin_12)) == (MR_mktag((MR_Integer) 0)));
#line 2353 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2353 "intermod.m"
                  {
#line 2353 "intermod.m"
                    transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Origin_12, (MR_Integer) 0)));
#line 2353 "intermod.m"
                    transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_19_19, (MR_Integer) 0)));
#line 2353 "intermod.m"
                    transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_19_19, (MR_Integer) 1)));
#line 2353 "intermod.m"
                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_20_20 == (MR_Integer) 0);
#line 2353 "intermod.m"
                  }
#line 2356 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2355 "intermod.m"
                  transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 2356 "intermod.m"
                else
#line 2360 "intermod.m"
                  {
#line 2357 "intermod.m"
                    MR_Word transform_hlds__intermod__V_15_15;

#line 2357 "intermod.m"
                    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Status_11)) == (MR_mktag((MR_Integer) 1)));
#line 2357 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2357 "intermod.m"
                      {
#line 2357 "intermod.m"
                        transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_11, (MR_Integer) 0)));
#line 2359 "intermod.m"
                        transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_7[1]);
#line 2357 "intermod.m"
                      }
#line 2357 "intermod.m"
                    else
#line 2361 "intermod.m"
                      transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 2360 "intermod.m"
                  }
#line 2363 "intermod.m"
                {
#line 2363 "intermod.m"
                  hlds__hlds_pred__pred_info_set_import_status_3_p_0(transform_hlds__intermod__NewStatus_14, transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__PredInfo_16);
                }
#line 2364 "intermod.m"
                {
#line 2364 "intermod.m"
                  mercury__map__det_update_4_p_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__intermod__PredId_7)), ((MR_Box) (transform_hlds__intermod__PredInfo_16)), transform_hlds__intermod__STATE_VARIABLE_Preds_0_2, &transform_hlds__intermod__STATE_VARIABLE_Preds_22_22);
                }
#line 2362 "intermod.m"
              }
#line 2365 "intermod.m"
            else
#line 2364 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Preds_22_22 = transform_hlds__intermod__STATE_VARIABLE_Preds_0_2;
#line 2368 "intermod.m"
            /* direct tailcall eliminated */
#line 2368 "intermod.m"
            {
#line 2368 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__PredIds_8;
#line 2368 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0__tmp_copy_2 = transform_hlds__intermod__STATE_VARIABLE_Preds_22_22;

#line 2368 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Preds_0_2 = transform_hlds__intermod__STATE_VARIABLE_Preds_0__tmp_copy_2;
#line 2368 "intermod.m"
              transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 2368 "intermod.m"
            }
#line 2368 "intermod.m"
            continue;
#line 2345 "intermod.m"
          }
#line 2344 "intermod.m"
      }
#line 2344 "intermod.m"
      break;
#line 2344 "intermod.m"
    }
#line 2341 "intermod.m"
}

#line 2283 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0_1(
#line 2283 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2283 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2283 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2283 "intermod.m"
{
#line 2283 "intermod.m"
  {
#line 2283 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2283 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_11;

#line 2283 "intermod.m"
    {
#line 2283 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2285__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_11);
    }
#line 2283 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_11));
#line 2283 "intermod.m"
  }
#line 2283 "intermod.m"
}

#line 2309 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0(
#line 2309 "intermod.m"
  MR_Word transform_hlds__intermod__Instance0_5,
#line 2309 "intermod.m"
  MR_Word * transform_hlds__intermod__Instance_6,
#line 2309 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20,
#line 2309 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21)
#line 2309 "intermod.m"
{
#line 2312 "intermod.m"
  {
#line 2312 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceModule_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 0)));
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__Status0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 1)));
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 2)));
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 3)));
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 4)));
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 5)));
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__Body_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 6)));
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__HLDSClassInterface_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 7)));
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 8)));
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__ConstraintProofs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 9)));

#line 2316 "intermod.m"
    {
#line 2316 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status0_9);
    }
#line 2329 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2319 "intermod.m"
      {
#line 2317 "intermod.m"
        {
#line 2317 "intermod.m"
          MR_Word base;
#line 2317 "intermod.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 2317 "intermod.m"
          *transform_hlds__intermod__Instance_6 = base;
#line 2317 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__InstanceModule_8));
#line 2317 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2317 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__Context_10));
#line 2317 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__Constraints_11));
#line 2317 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__Types_12));
#line 2317 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_13));
#line 2317 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__Body_14));
#line 2317 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__HLDSClassInterface_15));
#line 2317 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_16));
#line 2317 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__intermod__ConstraintProofs_17));
#line 2317 "intermod.m"
        }
#line 2324 "intermod.m"
        if ((transform_hlds__intermod__HLDSClassInterface_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2327 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20;
#line 2324 "intermod.m"
        else
#line 2321 "intermod.m"
          {
#line 2321 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_15_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2321 "intermod.m"
            MR_Word transform_hlds__intermod__ClassInterface_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HLDSClassInterface_15, (MR_Integer) 0)));
#line 2321 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_19;
#line 2321 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds0_29;
#line 2321 "intermod.m"
            MR_Word transform_hlds__intermod__Preds0_41;
#line 2321 "intermod.m"
            MR_Word transform_hlds__intermod__Preds_42;

#line 2283 "intermod.m"
            {
#line 2283 "intermod.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_15_36, (MR_Word) &transform_hlds__intermod_scalar_common_2[23], transform_hlds__intermod__ClassInterface_18, &transform_hlds__intermod__PredIds0_29);
            }
#line 2288 "intermod.m"
            {
#line 2288 "intermod.m"
              mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_15_36, transform_hlds__intermod__PredIds0_29, &transform_hlds__intermod__PredIds_19);
            }
#line 2337 "intermod.m"
            {
#line 2337 "intermod.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__intermod__Preds0_41);
            }
#line 2338 "intermod.m"
            {
#line 2338 "intermod.m"
              transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_19, transform_hlds__intermod__Preds0_41, &transform_hlds__intermod__Preds_42);
            }
#line 2339 "intermod.m"
            {
#line 2339 "intermod.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_42, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21);
#line 2339 "intermod.m"
              return;
            }
#line 2321 "intermod.m"
          }
#line 2319 "intermod.m"
      }
#line 2329 "intermod.m"
    else
#line 2330 "intermod.m"
      {
#line 2330 "intermod.m"
        *transform_hlds__intermod__Instance_6 = transform_hlds__intermod__Instance0_5;
#line 2330 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20;
#line 2330 "intermod.m"
      }
#line 2312 "intermod.m"
  }
#line 2309 "intermod.m"
}

#line 2306 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0_1(
#line 2306 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2306 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2306 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2306 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2306 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 2306 "intermod.m"
{
#line 2306 "intermod.m"
  {
#line 2306 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2306 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_Instance_6;
#line 2306 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21;

#line 2306 "intermod.m"
    {
#line 2306 "intermod.m"
      transform_hlds__intermod__adjust_instance_status_3_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv1_Instance_6, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21);
    }
#line 2306 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv1_Instance_6));
#line 2306 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21));
#line 2306 "intermod.m"
  }
#line 2306 "intermod.m"
}

#line 2300 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0(
#line 2300 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2300 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2300 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9,
#line 2300 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10)
#line 2300 "intermod.m"
{
#line 2305 "intermod.m"
  {
#line 2305 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2305 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 2305 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2305 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceList0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2305 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceList_7;
#line 2306 "intermod.m"
    MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10;

#line 2306 "intermod.m"
    {
#line 2306 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeCtorInfo_17_17, transform_hlds__intermod__TypeCtorInfo_17_17, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[22], transform_hlds__intermod__InstanceList0_6, &transform_hlds__intermod__InstanceList_7, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9)), &transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10);
    }
#line 2306 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10);
#line 2305 "intermod.m"
    {
#line 2305 "intermod.m"
      MR_Word base;
#line 2305 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2305 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2305 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_5));
#line 2305 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__InstanceList_7));
#line 2305 "intermod.m"
    }
#line 2305 "intermod.m"
  }
#line 2300 "intermod.m"
}

#line 2283 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0_1(
#line 2283 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2283 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2283 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2283 "intermod.m"
{
#line 2283 "intermod.m"
  {
#line 2283 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2283 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_11;

#line 2283 "intermod.m"
    {
#line 2283 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2285__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_11);
    }
#line 2283 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_11));
#line 2283 "intermod.m"
  }
#line 2283 "intermod.m"
}

#line 2265 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0(
#line 2265 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2265 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2265 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10,
#line 2265 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11)
#line 2265 "intermod.m"
{
#line 2270 "intermod.m"
  {
#line 2270 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2270 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2270 "intermod.m"
    MR_Word transform_hlds__intermod__ClassDefn0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2270 "intermod.m"
    MR_Word transform_hlds__intermod__ClassDefn_7;
#line 2271 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 0)));
#line 2271 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 1)));
#line 2271 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 2)));
#line 2271 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 3)));
#line 2271 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 4)));
#line 2271 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 5)));
#line 2271 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 6)));
#line 2271 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 7)));
#line 2271 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 8)));
#line 2271 "intermod.m"
    MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 9)));

#line 2271 "intermod.m"
    {
#line 2271 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__V_12_12);
    }
#line 2275 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2272 "intermod.m"
      {
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_15_56;
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_9;
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 7)));
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds0_49;
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__Preds0_61;
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__Preds_62;
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 1)));
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 2)));
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 3)));
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 4)));
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 5)));
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 6)));
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 8)));
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 9)));
#line 2272 "intermod.m"
        MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 0)));

#line 2272 "intermod.m"
        {
#line 2272 "intermod.m"
          transform_hlds__intermod__ClassDefn_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 2272 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2272 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 1) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 2272 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 2) = ((MR_Box) (transform_hlds__intermod__V_27_27));
#line 2272 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 3) = ((MR_Box) (transform_hlds__intermod__V_28_28));
#line 2272 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 4) = ((MR_Box) (transform_hlds__intermod__V_29_29));
#line 2272 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 5) = ((MR_Box) (transform_hlds__intermod__V_30_30));
#line 2272 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 6) = ((MR_Box) (transform_hlds__intermod__V_31_31));
#line 2272 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 7) = ((MR_Box) (transform_hlds__intermod__V_32_32));
#line 2272 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 8) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 2272 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 9) = ((MR_Box) (transform_hlds__intermod__V_34_34));
#line 2272 "intermod.m"
        }
#line 6131 "transform_hlds.intermod.c"
        transform_hlds__intermod__TypeCtorInfo_15_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2283 "intermod.m"
        {
#line 2283 "intermod.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_15_56, (MR_Word) &transform_hlds__intermod_scalar_common_2[21], transform_hlds__intermod__V_32_32, &transform_hlds__intermod__PredIds0_49);
        }
#line 2288 "intermod.m"
        {
#line 2288 "intermod.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_15_56, transform_hlds__intermod__PredIds0_49, &transform_hlds__intermod__PredIds_9);
        }
#line 2337 "intermod.m"
        {
#line 2337 "intermod.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__intermod__Preds0_61);
        }
#line 2338 "intermod.m"
        {
#line 2338 "intermod.m"
          transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_9, transform_hlds__intermod__Preds0_61, &transform_hlds__intermod__Preds_62);
        }
#line 2339 "intermod.m"
        {
#line 2339 "intermod.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_62, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11);
        }
#line 2272 "intermod.m"
      }
#line 2275 "intermod.m"
    else
#line 2276 "intermod.m"
      {
#line 2276 "intermod.m"
        transform_hlds__intermod__ClassDefn_7 = transform_hlds__intermod__ClassDefn0_6;
#line 2276 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10;
#line 2276 "intermod.m"
      }
#line 2270 "intermod.m"
    {
#line 2270 "intermod.m"
      MR_Word base;
#line 2270 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2270 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2270 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_5));
#line 2270 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__ClassDefn_7));
#line 2270 "intermod.m"
    }
#line 2270 "intermod.m"
  }
#line 2265 "intermod.m"
}

#line 2251 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0_1(
#line 2251 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2251 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2251 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2251 "intermod.m"
{
#line 2251 "intermod.m"
  {
#line 2251 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2251 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2251 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__4_14;

#line 2251 "intermod.m"
    {
#line 2251 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2251__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__4_14);
    }
#line 2251 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2251 "intermod.m"
      {
#line 2251 "intermod.m"
        *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__4_14));
#line 2251 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 2251 "intermod.m"
      }
#line 2251 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2251 "intermod.m"
  }
#line 2251 "intermod.m"
}

#line 2232 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0(
#line 2232 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_6,
#line 2232 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_7,
#line 2232 "intermod.m"
  MR_Word * transform_hlds__intermod__TypeDefn_8,
#line 2232 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11,
#line 2232 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12)
#line 2232 "intermod.m"
{
#line 2236 "intermod.m"
  {
#line 2236 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2236 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_10;
#line 1239 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_18;
#line 1239 "intermod.m"
    MR_Word transform_hlds__intermod__Name_19;
#line 1239 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22;
#line 1241 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_20;
#line 1242 "intermod.m"
    MR_String transform_hlds__intermod__V_21_21;

#line 2237 "intermod.m"
    {
#line 2237 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__ModuleName_10);
    }
#line 1240 "intermod.m"
    {
#line 1240 "intermod.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__intermod__TypeDefn0_7, &transform_hlds__intermod__ImportStatus_18);
    }
#line 1241 "intermod.m"
    transform_hlds__intermod__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 0)));
#line 1241 "intermod.m"
    transform_hlds__intermod___Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 1)));
#line 1242 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Name_19)) == (MR_mktag((MR_Integer) 1)));
#line 1242 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1242 "intermod.m"
      {
#line 1242 "intermod.m"
        transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_19, (MR_Integer) 0)));
#line 1242 "intermod.m"
        transform_hlds__intermod__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_19, (MR_Integer) 1)));
#line 1242 "intermod.m"
        {
#line 1242 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_10, transform_hlds__intermod__V_22_22);
        }
#line 1239 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1243 "intermod.m"
          {
#line 1243 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_18);
          }
#line 1242 "intermod.m"
      }
#line 2241 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2239 "intermod.m"
      {
#line 2239 "intermod.m"
        MR_Word transform_hlds__intermod__SpecialPredList_27;
#line 2239 "intermod.m"
        MR_Word transform_hlds__intermod__SpecPredMap_28;
#line 2239 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_31;
#line 2239 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 2239 "intermod.m"
        MR_Word transform_hlds__intermod__Preds0_46;
#line 2239 "intermod.m"
        MR_Word transform_hlds__intermod__Preds_47;

#line 2239 "intermod.m"
        {
#line 2239 "intermod.m"
          hlds__hlds_data__set_type_defn_status_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), transform_hlds__intermod__TypeDefn0_7, transform_hlds__intermod__TypeDefn_8);
        }
#line 2249 "intermod.m"
        {
#line 2249 "intermod.m"
          hlds__special_pred__special_pred_list_1_p_0(&transform_hlds__intermod__SpecialPredList_27);
        }
#line 2250 "intermod.m"
        {
#line 2250 "intermod.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__SpecPredMap_28);
        }
#line 2251 "intermod.m"
        {
#line 2251 "intermod.m"
          transform_hlds__intermod__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2251 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[9]));
#line 2251 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 1) = ((MR_Box) (transform_hlds__intermod__adjust_type_status_2_5_p_0_1));
#line 2251 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2251 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 3) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 2251 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 4) = ((MR_Box) (transform_hlds__intermod__SpecPredMap_28));
#line 2251 "intermod.m"
        }
#line 2251 "intermod.m"
        {
#line 2251 "intermod.m"
          mercury__list__filter_map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__V_32_32, transform_hlds__intermod__SpecialPredList_27, &transform_hlds__intermod__PredIds_31);
        }
#line 2337 "intermod.m"
        {
#line 2337 "intermod.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__Preds0_46);
        }
#line 2338 "intermod.m"
        {
#line 2338 "intermod.m"
          transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_31, transform_hlds__intermod__Preds0_46, &transform_hlds__intermod__Preds_47);
        }
#line 2339 "intermod.m"
        {
#line 2339 "intermod.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_47, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12);
#line 2339 "intermod.m"
          return;
        }
#line 2239 "intermod.m"
      }
#line 2241 "intermod.m"
    else
#line 2242 "intermod.m"
      {
#line 2242 "intermod.m"
        *transform_hlds__intermod__TypeDefn_8 = transform_hlds__intermod__TypeDefn0_7;
#line 2242 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11;
#line 2242 "intermod.m"
      }
#line 2236 "intermod.m"
  }
#line 2232 "intermod.m"
}

#line 2295 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_3(
#line 2295 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2295 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2295 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2295 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2295 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 2295 "intermod.m"
{
#line 2295 "intermod.m"
  {
#line 2295 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2295 "intermod.m"
    MR_Word transform_hlds__intermod__conv7_HeadVar__2_2;
#line 2295 "intermod.m"
    MR_Word transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10;

#line 2295 "intermod.m"
    {
#line 2295 "intermod.m"
      transform_hlds__intermod__adjust_instance_status_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv7_HeadVar__2_2, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10);
    }
#line 2295 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv7_HeadVar__2_2));
#line 2295 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10));
#line 2295 "intermod.m"
  }
#line 2295 "intermod.m"
}

#line 2261 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_2(
#line 2261 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2261 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2261 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2261 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2261 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 2261 "intermod.m"
{
#line 2261 "intermod.m"
  {
#line 2261 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2261 "intermod.m"
    MR_Word transform_hlds__intermod__conv4_HeadVar__2_2;
#line 2261 "intermod.m"
    MR_Word transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11;

#line 2261 "intermod.m"
    {
#line 2261 "intermod.m"
      transform_hlds__intermod__adjust_class_status_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv4_HeadVar__2_2, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11);
    }
#line 2261 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv4_HeadVar__2_2));
#line 2261 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11));
#line 2261 "intermod.m"
  }
#line 2261 "intermod.m"
}

#line 2228 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_1(
#line 2228 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2228 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2228 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2228 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3,
#line 2228 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_4,
#line 2228 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_5)
#line 2228 "intermod.m"
{
#line 2228 "intermod.m"
  {
#line 2228 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2228 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_TypeDefn_8;
#line 2228 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12;

#line 2228 "intermod.m"
    {
#line 2228 "intermod.m"
      transform_hlds__intermod__adjust_type_status_2_5_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv1_TypeDefn_8, ((MR_Word) transform_hlds__intermod__wrapper_arg_4), &transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12);
    }
#line 2228 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv1_TypeDefn_8));
#line 2228 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_5 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12));
#line 2228 "intermod.m"
  }
#line 2228 "intermod.m"
}

#line 2213 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(
#line 2213 "intermod.m"
  MR_Word transform_hlds__intermod__Info_4,
#line 2213 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8,
#line 2213 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9)
#line 2213 "intermod.m"
{
#line 2216 "intermod.m"
  {
#line 2216 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_13_55;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_14_56;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_19_61;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_13_73;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_14_74;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_19_79;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 2)));
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls_7;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__Preds0_28;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__Preds_29;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable0_34;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable_35;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__Classes0_48;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__ClassAL0_49;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__ClassAL_50;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__Classes_51;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__Instances0_66;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceAL0_67;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceAL_68;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_69;
#line 2216 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71;
#line 2160 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 0)));
#line 2160 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 1)));
#line 2160 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 3)));
#line 2160 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 4)));
#line 2160 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 5)));
#line 2160 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 6)));
#line 2160 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 7)));
#line 2160 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 8)));
#line 2228 "intermod.m"
    MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37;
#line 2261 "intermod.m"
    MR_Box transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53;
#line 2295 "intermod.m"
    MR_Box transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71;

#line 2218 "intermod.m"
    {
#line 2218 "intermod.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__PredDecls0_6, &transform_hlds__intermod__PredDecls_7);
    }
#line 2337 "intermod.m"
    {
#line 2337 "intermod.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__intermod__Preds0_28);
    }
#line 2338 "intermod.m"
    {
#line 2338 "intermod.m"
      transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredDecls_7, transform_hlds__intermod__Preds0_28, &transform_hlds__intermod__Preds_29);
    }
#line 2339 "intermod.m"
    {
#line 2339 "intermod.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_29, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10);
    }
#line 2227 "intermod.m"
    {
#line 2227 "intermod.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10, &transform_hlds__intermod__TypeTable0_34);
    }
#line 2228 "intermod.m"
    {
#line 2228 "intermod.m"
      hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[18], transform_hlds__intermod__TypeTable0_34, &transform_hlds__intermod__TypeTable_35, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10)), &transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37);
    }
#line 2228 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37 = ((MR_Word) transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37);
#line 2230 "intermod.m"
    {
#line 2230 "intermod.m"
      hlds__hlds_module__module_info_set_type_table_3_p_0(transform_hlds__intermod__TypeTable_35, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11);
    }
#line 2259 "intermod.m"
    {
#line 2259 "intermod.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11, &transform_hlds__intermod__Classes0_48);
    }
#line 6636 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_13_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 6638 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_14_56 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 2260 "intermod.m"
    {
#line 2260 "intermod.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_55, transform_hlds__intermod__TypeCtorInfo_14_56, transform_hlds__intermod__Classes0_48, &transform_hlds__intermod__ClassAL0_49);
    }
#line 6645 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_19_61 = (MR_Word) &transform_hlds__intermod_scalar_common_2[5];
#line 2261 "intermod.m"
    {
#line 2261 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeInfo_19_61, transform_hlds__intermod__TypeInfo_19_61, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[19], transform_hlds__intermod__ClassAL0_49, &transform_hlds__intermod__ClassAL_50, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11)), &transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53);
    }
#line 2261 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53 = ((MR_Word) transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53);
#line 2262 "intermod.m"
    {
#line 2262 "intermod.m"
      mercury__map__from_sorted_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_55, transform_hlds__intermod__TypeCtorInfo_14_56, transform_hlds__intermod__ClassAL_50, &transform_hlds__intermod__Classes_51);
    }
#line 2263 "intermod.m"
    {
#line 2263 "intermod.m"
      hlds__hlds_module__module_info_set_class_table_3_p_0(transform_hlds__intermod__Classes_51, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12);
    }
#line 2293 "intermod.m"
    {
#line 2293 "intermod.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12, &transform_hlds__intermod__Instances0_66);
    }
#line 6669 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_13_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 6671 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_14_74 = (MR_Word) &transform_hlds__intermod_scalar_common_1[1];
#line 2294 "intermod.m"
    {
#line 2294 "intermod.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_73, transform_hlds__intermod__TypeInfo_14_74, transform_hlds__intermod__Instances0_66, &transform_hlds__intermod__InstanceAL0_67);
    }
#line 6678 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_19_79 = (MR_Word) &transform_hlds__intermod_scalar_common_2[6];
#line 2295 "intermod.m"
    {
#line 2295 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeInfo_19_79, transform_hlds__intermod__TypeInfo_19_79, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[20], transform_hlds__intermod__InstanceAL0_67, &transform_hlds__intermod__InstanceAL_68, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12)), &transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71);
    }
#line 2295 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71 = ((MR_Word) transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71);
#line 2297 "intermod.m"
    {
#line 2297 "intermod.m"
      mercury__map__from_sorted_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_73, transform_hlds__intermod__TypeInfo_14_74, transform_hlds__intermod__InstanceAL_68, &transform_hlds__intermod__Instances_69);
    }
#line 2298 "intermod.m"
    {
#line 2298 "intermod.m"
      hlds__hlds_module__module_info_set_instance_table_3_p_0(transform_hlds__intermod__Instances_69, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9);
#line 2298 "intermod.m"
      return;
    }
#line 2216 "intermod.m"
  }
#line 2213 "intermod.m"
}

#line 2155 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(
#line 2155 "intermod.m"
  MR_Word transform_hlds__intermod__TVarSet_4,
#line 2155 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2155 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2155 "intermod.m"
{
#line 2178 "intermod.m"
  {
#line 2178 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2178 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2178 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));
#line 2178 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2178 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2178 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));
#line 2178 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));
#line 2178 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2178 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2178 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));

#line 2178 "intermod.m"
    {
#line 2178 "intermod.m"
      MR_Word base;
#line 2178 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2178 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2178 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2178 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2178 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2178 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2178 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2178 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_11_11));
#line 2178 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2178 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2178 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_4));
#line 2178 "intermod.m"
    }
#line 2178 "intermod.m"
  }
#line 2155 "intermod.m"
}

#line 2151 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_write_header_2_p_0(
#line 2151 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2151 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2151 "intermod.m"
{
#line 2176 "intermod.m"
  {
#line 2176 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));

#line 2176 "intermod.m"
    {
#line 2176 "intermod.m"
      MR_Word base;
#line 2176 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2176 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_5_5));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2176 "intermod.m"
    }
#line 2176 "intermod.m"
  }
#line 2151 "intermod.m"
}

#line 2149 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_module_info_3_p_0(
#line 2149 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_4,
#line 2149 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2149 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2149 "intermod.m"
{
#line 2174 "intermod.m"
  {
#line 2174 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2174 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));

#line 2174 "intermod.m"
    {
#line 2174 "intermod.m"
      MR_Word base;
#line 2174 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2174 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_4));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2174 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_14_14));
#line 2174 "intermod.m"
    }
#line 2174 "intermod.m"
  }
#line 2149 "intermod.m"
}

#line 2145 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__Types_4,
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2145 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2145 "intermod.m"
{
#line 2173 "intermod.m"
  {
#line 2173 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2173 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2173 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));
#line 2173 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2173 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2173 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));
#line 2173 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2173 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2173 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2173 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));

#line 2173 "intermod.m"
    {
#line 2173 "intermod.m"
      MR_Word base;
#line 2173 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2173 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2173 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2173 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2173 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2173 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2173 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__Types_4));
#line 2173 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_11_11));
#line 2173 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2173 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2173 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_14_14));
#line 2173 "intermod.m"
    }
#line 2173 "intermod.m"
  }
#line 2145 "intermod.m"
}

#line 2138 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_preds_3_p_0(
#line 2138 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_4,
#line 2138 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2138 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2138 "intermod.m"
{
#line 2169 "intermod.m"
  {
#line 2169 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2169 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));

#line 2169 "intermod.m"
    {
#line 2169 "intermod.m"
      MR_Word base;
#line 2169 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2169 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__Procs_4));
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_11_11));
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2169 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_14_14));
#line 2169 "intermod.m"
    }
#line 2169 "intermod.m"
  }
#line 2138 "intermod.m"
}

#line 2129 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_module_info_2_p_0(
#line 2129 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2129 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2129 "intermod.m"
{
#line 2163 "intermod.m"
  {
#line 2163 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 2163 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2163 "intermod.m"
    transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));
#line 2163 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2163 "intermod.m"
    transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2163 "intermod.m"
  }
#line 2129 "intermod.m"
}

#line 2122 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_preds_2_p_0(
#line 2122 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2122 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2122 "intermod.m"
{
#line 2159 "intermod.m"
  {
#line 2159 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 2159 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 2159 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2159 "intermod.m"
    transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2159 "intermod.m"
  }
#line 2122 "intermod.m"
}

#line 2040 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
#line 2040 "intermod.m"
  MR_Word transform_hlds__intermod__Args_6,
#line 2040 "intermod.m"
  MR_Word transform_hlds__intermod__Modes_7,
#line 2040 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26,
#line 2040 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_VarSet_27,
#line 2040 "intermod.m"
  MR_Word * transform_hlds__intermod__PragmaVars_9)
#line 2040 "intermod.m"
{
#line 2045 "intermod.m"
  {
#line 2045 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2045 "intermod.m"
    if ((transform_hlds__intermod__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2045 "intermod.m"
      if ((transform_hlds__intermod__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2060 "intermod.m"
        {
#line 2062 "intermod.m"
          *transform_hlds__intermod__PragmaVars_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2062 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_VarSet_27 = transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26;
#line 2060 "intermod.m"
        }
#line 2045 "intermod.m"
      else
#line 2064 "intermod.m"
        {
#line 2066 "intermod.m"
          {
#line 2066 "intermod.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
#line 2066 "intermod.m"
            return;
          }
#line 2064 "intermod.m"
        }
#line 2045 "intermod.m"
    else
#line 2045 "intermod.m"
      {
#line 2045 "intermod.m"
        MR_Word transform_hlds__intermod__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Args_6, (MR_Integer) 1)));
#line 2045 "intermod.m"
        MR_Word transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Args_6, (MR_Integer) 0)));

#line 2045 "intermod.m"
        if ((transform_hlds__intermod__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2068 "intermod.m"
          {
#line 2070 "intermod.m"
            {
#line 2070 "intermod.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
#line 2070 "intermod.m"
              return;
            }
#line 2068 "intermod.m"
          }
#line 2045 "intermod.m"
        else
#line 2045 "intermod.m"
          {
#line 2045 "intermod.m"
            MR_Word transform_hlds__intermod__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Modes_7, (MR_Integer) 0)));
#line 2045 "intermod.m"
            MR_Word transform_hlds__intermod__ModesTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Modes_7, (MR_Integer) 1)));
#line 2045 "intermod.m"
            MR_Word transform_hlds__intermod__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 0)));
#line 2045 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeNameAndMode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 1)));
#line 2045 "intermod.m"
            MR_String transform_hlds__intermod__Name_18;
#line 2045 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaVar_20;
#line 2045 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaVarsTail_21;
#line 2045 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36;
#line 2047 "intermod.m"
            MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 2)));
#line 2047 "intermod.m"
            MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 3)));

#line 2051 "intermod.m"
            if ((transform_hlds__intermod__MaybeNameAndMode_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2049 "intermod.m"
              transform_hlds__intermod__Name_18 = (MR_String) "_";
#line 2051 "intermod.m"
            else
#line 2052 "intermod.m"
              {
#line 2052 "intermod.m"
                MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeNameAndMode_15, (MR_Integer) 0)));
#line 2052 "intermod.m"
                MR_Word transform_hlds__intermod___Mode2_19;

#line 2052 "intermod.m"
                transform_hlds__intermod__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, (MR_Integer) 0)));
#line 2052 "intermod.m"
                transform_hlds__intermod___Mode2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, (MR_Integer) 1)));
#line 2052 "intermod.m"
              }
#line 2054 "intermod.m"
            {
#line 2054 "intermod.m"
              transform_hlds__intermod__PragmaVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2054 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 0) = ((MR_Box) (transform_hlds__intermod__Var_14));
#line 2054 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 1) = ((MR_Box) (transform_hlds__intermod__Name_18));
#line 2054 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 2) = ((MR_Box) (transform_hlds__intermod__Mode_12));
#line 2054 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2054 "intermod.m"
            }
#line 2055 "intermod.m"
            {
#line 2055 "intermod.m"
              mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__intermod__Var_14, transform_hlds__intermod__Name_18, transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26, &transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36);
            }
#line 2056 "intermod.m"
            {
#line 2056 "intermod.m"
              transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(transform_hlds__intermod__V_39_39, transform_hlds__intermod__ModesTail_13, transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36, transform_hlds__intermod__STATE_VARIABLE_VarSet_27, &transform_hlds__intermod__PragmaVarsTail_21);
            }
#line 2058 "intermod.m"
            {
#line 2058 "intermod.m"
              MR_Word base;
#line 2058 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2058 "intermod.m"
              *transform_hlds__intermod__PragmaVars_9 = base;
#line 2058 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PragmaVar_20));
#line 2058 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PragmaVarsTail_21));
#line 2058 "intermod.m"
            }
#line 2045 "intermod.m"
          }
#line 2045 "intermod.m"
      }
#line 2045 "intermod.m"
  }
#line 2040 "intermod.m"
}

#line 1972 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(
#line 1972 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_1,
#line 1972 "intermod.m"
  MR_Integer transform_hlds__intermod__Arity_2,
#line 1972 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1972 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_4)
#line 1972 "intermod.m"
{
#line 1975 "intermod.m"
  while (MR_TRUE)
#line 1975 "intermod.m"
    {
#line 1975 "intermod.m"
      /* tailcall optimized into a loop */
#line 1975 "intermod.m"
      {
#line 1975 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1975 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1975 "intermod.m"
          {
#line 1975 "intermod.m"
          }
#line 1975 "intermod.m"
        else
#line 1977 "intermod.m"
          {
#line 1977 "intermod.m"
            MR_Word transform_hlds__intermod__Marker_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1977 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));

#line 7328 "transform_hlds.intermod.c"
            if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 1))
#line 1984 "intermod.m"
              {
#line 1984 "intermod.m"
              }
#line 7334 "transform_hlds.intermod.c"
            else
#line 7336 "transform_hlds.intermod.c"
              if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 20))
#line 1984 "intermod.m"
                {
#line 1984 "intermod.m"
                }
#line 7342 "transform_hlds.intermod.c"
              else
#line 7344 "transform_hlds.intermod.c"
                if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 19))
#line 1984 "intermod.m"
                  {
#line 1984 "intermod.m"
                  }
#line 7350 "transform_hlds.intermod.c"
                else
#line 7352 "transform_hlds.intermod.c"
                  if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 10))
#line 1984 "intermod.m"
                    {
#line 1984 "intermod.m"
                    }
#line 7358 "transform_hlds.intermod.c"
                  else
#line 7360 "transform_hlds.intermod.c"
                    if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 9))
#line 1984 "intermod.m"
                      {
#line 1984 "intermod.m"
                      }
#line 7366 "transform_hlds.intermod.c"
                    else
#line 7368 "transform_hlds.intermod.c"
                      if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 18))
#line 7370 "transform_hlds.intermod.c"
                        {
#line 7372 "transform_hlds.intermod.c"
                          MR_String transform_hlds__intermod__Name_20;

#line 1981 "intermod.m"
                          {
#line 1981 "intermod.m"
                            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_20);
                          }
#line 1982 "intermod.m"
                          {
#line 1982 "intermod.m"
                            parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                          }
#line 7385 "transform_hlds.intermod.c"
                        }
#line 7387 "transform_hlds.intermod.c"
                      else
#line 7389 "transform_hlds.intermod.c"
                        if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 24))
#line 1984 "intermod.m"
                          {
#line 1984 "intermod.m"
                          }
#line 7395 "transform_hlds.intermod.c"
                        else
#line 7397 "transform_hlds.intermod.c"
                          if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 23))
#line 1984 "intermod.m"
                            {
#line 1984 "intermod.m"
                            }
#line 7403 "transform_hlds.intermod.c"
                          else
#line 7405 "transform_hlds.intermod.c"
                            if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 8))
#line 1984 "intermod.m"
                              {
#line 1984 "intermod.m"
                              }
#line 7411 "transform_hlds.intermod.c"
                            else
#line 7413 "transform_hlds.intermod.c"
                              if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 3))
#line 1984 "intermod.m"
                                {
#line 1984 "intermod.m"
                                }
#line 7419 "transform_hlds.intermod.c"
                              else
#line 7421 "transform_hlds.intermod.c"
                                if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 2))
#line 1984 "intermod.m"
                                  {
#line 1984 "intermod.m"
                                  }
#line 7427 "transform_hlds.intermod.c"
                                else
#line 7429 "transform_hlds.intermod.c"
                                  if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 12))
#line 1984 "intermod.m"
                                    {
#line 1984 "intermod.m"
                                    }
#line 7435 "transform_hlds.intermod.c"
                                  else
#line 7437 "transform_hlds.intermod.c"
                                    if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 13))
#line 1984 "intermod.m"
                                      {
#line 1984 "intermod.m"
                                      }
#line 7443 "transform_hlds.intermod.c"
                                    else
#line 7445 "transform_hlds.intermod.c"
                                      if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 21))
#line 7447 "transform_hlds.intermod.c"
                                        {
#line 7449 "transform_hlds.intermod.c"
                                          MR_String transform_hlds__intermod__Name_52;

#line 1981 "intermod.m"
                                          {
#line 1981 "intermod.m"
                                            hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_52);
                                          }
#line 1982 "intermod.m"
                                          {
#line 1982 "intermod.m"
                                            parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_52, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                          }
#line 7462 "transform_hlds.intermod.c"
                                        }
#line 7464 "transform_hlds.intermod.c"
                                      else
#line 7466 "transform_hlds.intermod.c"
                                        if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 22))
#line 1984 "intermod.m"
                                          {
#line 1984 "intermod.m"
                                          }
#line 7472 "transform_hlds.intermod.c"
                                        else
#line 7474 "transform_hlds.intermod.c"
                                          if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 11))
#line 1984 "intermod.m"
                                            {
#line 1984 "intermod.m"
                                            }
#line 7480 "transform_hlds.intermod.c"
                                          else
#line 7482 "transform_hlds.intermod.c"
                                            if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 5))
#line 1984 "intermod.m"
                                              {
#line 1984 "intermod.m"
                                              }
#line 7488 "transform_hlds.intermod.c"
                                            else
#line 7490 "transform_hlds.intermod.c"
                                              if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 4))
#line 1984 "intermod.m"
                                                {
#line 1984 "intermod.m"
                                                }
#line 7496 "transform_hlds.intermod.c"
                                              else
#line 7498 "transform_hlds.intermod.c"
                                                if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 16))
#line 7500 "transform_hlds.intermod.c"
                                                  {
#line 7502 "transform_hlds.intermod.c"
                                                    MR_String transform_hlds__intermod__Name_64;

#line 1981 "intermod.m"
                                                    {
#line 1981 "intermod.m"
                                                      hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_64);
                                                    }
#line 1982 "intermod.m"
                                                    {
#line 1982 "intermod.m"
                                                      parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                    }
#line 7515 "transform_hlds.intermod.c"
                                                  }
#line 7517 "transform_hlds.intermod.c"
                                                else
#line 7519 "transform_hlds.intermod.c"
                                                  if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 14))
#line 7521 "transform_hlds.intermod.c"
                                                    {
#line 7523 "transform_hlds.intermod.c"
                                                      MR_String transform_hlds__intermod__Name_68;

#line 1981 "intermod.m"
                                                      {
#line 1981 "intermod.m"
                                                        hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_68);
                                                      }
#line 1982 "intermod.m"
                                                      {
#line 1982 "intermod.m"
                                                        parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_68, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                      }
#line 7536 "transform_hlds.intermod.c"
                                                    }
#line 7538 "transform_hlds.intermod.c"
                                                  else
#line 7540 "transform_hlds.intermod.c"
                                                    if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 15))
#line 7542 "transform_hlds.intermod.c"
                                                      {
#line 7544 "transform_hlds.intermod.c"
                                                        MR_String transform_hlds__intermod__Name_72;

#line 1981 "intermod.m"
                                                        {
#line 1981 "intermod.m"
                                                          hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_72);
                                                        }
#line 1982 "intermod.m"
                                                        {
#line 1982 "intermod.m"
                                                          parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                        }
#line 7557 "transform_hlds.intermod.c"
                                                      }
#line 7559 "transform_hlds.intermod.c"
                                                    else
#line 7561 "transform_hlds.intermod.c"
                                                      if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 0))
#line 1984 "intermod.m"
                                                        {
#line 1984 "intermod.m"
                                                        }
#line 7567 "transform_hlds.intermod.c"
                                                      else
#line 7569 "transform_hlds.intermod.c"
                                                        if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 17))
#line 7571 "transform_hlds.intermod.c"
                                                          {
#line 7573 "transform_hlds.intermod.c"
                                                            MR_String transform_hlds__intermod__Name_78;

#line 1981 "intermod.m"
                                                            {
#line 1981 "intermod.m"
                                                              hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_78);
                                                            }
#line 1982 "intermod.m"
                                                            {
#line 1982 "intermod.m"
                                                              parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                            }
#line 7586 "transform_hlds.intermod.c"
                                                          }
#line 7588 "transform_hlds.intermod.c"
                                                        else
#line 7590 "transform_hlds.intermod.c"
                                                          if ((transform_hlds__intermod__Marker_15 == (MR_Integer) 6))
#line 7592 "transform_hlds.intermod.c"
                                                            {
#line 7594 "transform_hlds.intermod.c"
                                                              MR_String transform_hlds__intermod__Name_82;

#line 1981 "intermod.m"
                                                              {
#line 1981 "intermod.m"
                                                                hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_82);
                                                              }
#line 1982 "intermod.m"
                                                              {
#line 1982 "intermod.m"
                                                                parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                              }
#line 7607 "transform_hlds.intermod.c"
                                                            }
#line 7609 "transform_hlds.intermod.c"
                                                          else
#line 7611 "transform_hlds.intermod.c"
                                                            {
#line 7613 "transform_hlds.intermod.c"
                                                              MR_String transform_hlds__intermod__Name_86;

#line 1981 "intermod.m"
                                                              {
#line 1981 "intermod.m"
                                                                hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_86);
                                                              }
#line 1982 "intermod.m"
                                                              {
#line 1982 "intermod.m"
                                                                parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                                                              }
#line 7626 "transform_hlds.intermod.c"
                                                            }
#line 1986 "intermod.m"
            /* direct tailcall eliminated */
#line 1986 "intermod.m"
            {
#line 1986 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__Markers_16;

#line 1986 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1986 "intermod.m"
            }
#line 1986 "intermod.m"
            continue;
#line 1977 "intermod.m"
          }
#line 1975 "intermod.m"
      }
#line 1975 "intermod.m"
      break;
#line 1975 "intermod.m"
    }
#line 1972 "intermod.m"
}

#line 1911 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
#line 1911 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 1911 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_2,
#line 1911 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1911 "intermod.m"
  MR_Word * transform_hlds__intermod__Goals_4,
#line 1911 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5,
#line 1911 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6)
#line 1911 "intermod.m"
{
#line 1917 "intermod.m"
  while (MR_TRUE)
#line 1917 "intermod.m"
    {
#line 1917 "intermod.m"
      /* tailcall optimized into a loop */
#line 1917 "intermod.m"
      {
#line 1917 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1917 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1917 "intermod.m"
          {
#line 1918 "intermod.m"
            {
#line 1918 "intermod.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__Goals_4);
            }
#line 1917 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5;
#line 1917 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1917 "intermod.m"
          }
#line 1917 "intermod.m"
        else
#line 1920 "intermod.m"
          {
#line 1920 "intermod.m"
            MR_Word transform_hlds__intermod__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 1920 "intermod.m"
            MR_Word transform_hlds__intermod__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 1920 "intermod.m"
            MR_Word transform_hlds__intermod__RevGoals1_39;
#line 1920 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52;
#line 1954 "intermod.m"
            MR_Word transform_hlds__intermod__LHSVar_19;
#line 1954 "intermod.m"
            MR_Word transform_hlds__intermod__RHSTerm_27;
#line 1922 "intermod.m"
            MR_Word transform_hlds__intermod__TypeInfo_55_55;
#line 1922 "intermod.m"
            MR_Word transform_hlds__intermod__RHS_20;
#line 1922 "intermod.m"
            MR_Word transform_hlds__intermod__Context_25;
#line 1922 "intermod.m"
            MR_Word transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_13, (MR_Integer) 0)));
#line 1922 "intermod.m"
            MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_13, (MR_Integer) 1)));
#line 1922 "intermod.m"
            MR_Word transform_hlds__intermod__V_21_21;
#line 1922 "intermod.m"
            MR_Word transform_hlds__intermod__V_22_22;
#line 1922 "intermod.m"
            MR_Word transform_hlds__intermod__V_23_23;

#line 1922 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 1922 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1922 "intermod.m"
              {
#line 1922 "intermod.m"
                transform_hlds__intermod__LHSVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 0)));
#line 1922 "intermod.m"
                transform_hlds__intermod__RHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 1)));
#line 1922 "intermod.m"
                transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 2)));
#line 1922 "intermod.m"
                transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 3)));
#line 1922 "intermod.m"
                transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 4)));
#line 7744 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeInfo_55_55 = (MR_Word) &transform_hlds__intermod_scalar_common_1[6];
#line 1923 "intermod.m"
                {
#line 1923 "intermod.m"
                  transform_hlds__intermod__succeeded = mercury__list__member_2_p_0(transform_hlds__intermod__TypeInfo_55_55, ((MR_Box) (transform_hlds__intermod__LHSVar_19)), transform_hlds__intermod__HeadVars_2);
                }
#line 1922 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1922 "intermod.m"
                  {
#line 1924 "intermod.m"
                    {
#line 1924 "intermod.m"
                      mercury__term__context_init_1_p_0(&transform_hlds__intermod__Context_25);
                    }
#line 1928 "intermod.m"
                    if (((MR_tag((MR_Word) transform_hlds__intermod__RHS_20)) == (MR_mktag((MR_Integer) 1))))
#line 1929 "intermod.m"
                      {
#line 1929 "intermod.m"
                        MR_Word transform_hlds__intermod__ConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 0)));
#line 1929 "intermod.m"
                        MR_Word transform_hlds__intermod__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 2)));
#line 1929 "intermod.m"
                        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 1)));

#line 1933 "intermod.m"
                        if (((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1937 "intermod.m"
                          {
#line 1937 "intermod.m"
                            MR_Char transform_hlds__intermod__Char_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1937 "intermod.m"
                            MR_Word transform_hlds__intermod__V_45_45;
#line 1937 "intermod.m"
                            MR_String transform_hlds__intermod__V_46_46;

#line 1938 "intermod.m"
                            {
#line 1938 "intermod.m"
                              transform_hlds__intermod__V_46_46 = mercury__string__from_char_1_f_0(transform_hlds__intermod__Char_33);
                            }
#line 1938 "intermod.m"
                            {
#line 1938 "intermod.m"
                              transform_hlds__intermod__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1938 "intermod.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_45_45, 0) = ((MR_Box) (transform_hlds__intermod__V_46_46));
#line 1938 "intermod.m"
                            }
#line 1938 "intermod.m"
                            {
#line 1938 "intermod.m"
                              transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1938 "intermod.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_45_45));
#line 1938 "intermod.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1938 "intermod.m"
                              MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1938 "intermod.m"
                            }
#line 1937 "intermod.m"
                            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1937 "intermod.m"
                          }
#line 1933 "intermod.m"
                        else
#line 1933 "intermod.m"
                          if (((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1944 "intermod.m"
                            {
#line 1944 "intermod.m"
                              MR_Word transform_hlds__intermod__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1944 "intermod.m"
                              MR_Word transform_hlds__intermod__SymName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1944 "intermod.m"
                              MR_Word transform_hlds__intermod__ArgTerms_38;
#line 1944 "intermod.m"
                              MR_Integer transform_hlds__intermod__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 2)));
#line 1944 "intermod.m"
                              MR_Word transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 3)));

#line 1945 "intermod.m"
                              {
#line 1945 "intermod.m"
                                mercury__term__var_list_to_term_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_56_56, transform_hlds__intermod__Args_30, &transform_hlds__intermod__ArgTerms_38);
                              }
#line 1946 "intermod.m"
                              {
#line 1946 "intermod.m"
                                parse_tree__prog_util__construct_qualified_term_3_p_0(transform_hlds__intermod__TypeCtorInfo_56_56, transform_hlds__intermod__SymName_35, transform_hlds__intermod__ArgTerms_38, &transform_hlds__intermod__RHSTerm_27);
                              }
#line 1944 "intermod.m"
                              transform_hlds__intermod__succeeded = MR_TRUE;
#line 1944 "intermod.m"
                            }
#line 1933 "intermod.m"
                          else
#line 1933 "intermod.m"
                            if (((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1934 "intermod.m"
                              {
#line 1934 "intermod.m"
                                MR_Float transform_hlds__intermod__Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1934 "intermod.m"
                                MR_Word transform_hlds__intermod__V_48_48;

#line 1935 "intermod.m"
                                {
#line 1935 "intermod.m"
                                  transform_hlds__intermod__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1935 "intermod.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1935 "intermod.m"
                                  MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_48_48, 1) = MR_box_float(transform_hlds__intermod__Float_32);
#line 1935 "intermod.m"
                                }
#line 1935 "intermod.m"
                                {
#line 1935 "intermod.m"
                                  transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1935 "intermod.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_48_48));
#line 1935 "intermod.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1935 "intermod.m"
                                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1935 "intermod.m"
                                }
#line 1934 "intermod.m"
                                transform_hlds__intermod__succeeded = MR_TRUE;
#line 1934 "intermod.m"
                              }
#line 1933 "intermod.m"
                            else
#line 1933 "intermod.m"
                              if (((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1931 "intermod.m"
                                {
#line 1931 "intermod.m"
                                  MR_Integer transform_hlds__intermod__Int_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1931 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_50_50;

#line 1932 "intermod.m"
                                  {
#line 1932 "intermod.m"
                                    transform_hlds__intermod__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1932 "intermod.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_50_50, 0) = ((MR_Box) (transform_hlds__intermod__Int_31));
#line 1932 "intermod.m"
                                  }
#line 1932 "intermod.m"
                                  {
#line 1932 "intermod.m"
                                    transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1932 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_50_50));
#line 1932 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1932 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1932 "intermod.m"
                                  }
#line 1931 "intermod.m"
                                  transform_hlds__intermod__succeeded = MR_TRUE;
#line 1931 "intermod.m"
                                }
#line 1933 "intermod.m"
                              else
#line 1933 "intermod.m"
                                if (((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1941 "intermod.m"
                                  {
#line 1941 "intermod.m"
                                    MR_String transform_hlds__intermod__String_34 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1941 "intermod.m"
                                    MR_Word transform_hlds__intermod__V_43_43;

#line 1942 "intermod.m"
                                    {
#line 1942 "intermod.m"
                                      transform_hlds__intermod__V_43_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1942 "intermod.m"
                                      MR_hl_field(MR_mktag(2), transform_hlds__intermod__V_43_43, 0) = ((MR_Box) (transform_hlds__intermod__String_34));
#line 1942 "intermod.m"
                                    }
#line 1942 "intermod.m"
                                    {
#line 1942 "intermod.m"
                                      transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1942 "intermod.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_43_43));
#line 1942 "intermod.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1942 "intermod.m"
                                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1942 "intermod.m"
                                    }
#line 1941 "intermod.m"
                                    transform_hlds__intermod__succeeded = MR_TRUE;
#line 1941 "intermod.m"
                                  }
#line 1933 "intermod.m"
                                else
#line 1933 "intermod.m"
                                  transform_hlds__intermod__succeeded = MR_FALSE;
#line 1929 "intermod.m"
                      }
#line 1928 "intermod.m"
                    else
#line 1928 "intermod.m"
                      if (((MR_tag((MR_Word) transform_hlds__intermod__RHS_20)) == (MR_mktag((MR_Integer) 0))))
#line 1926 "intermod.m"
                        {
#line 1926 "intermod.m"
                          MR_Word transform_hlds__intermod__RHSVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHS_20, (MR_Integer) 0)));

#line 1927 "intermod.m"
                          {
#line 1927 "intermod.m"
                            transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1927 "intermod.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__RHSVar_26));
#line 1927 "intermod.m"
                            MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1927 "intermod.m"
                          }
#line 1926 "intermod.m"
                          transform_hlds__intermod__succeeded = MR_TRUE;
#line 1926 "intermod.m"
                        }
#line 1928 "intermod.m"
                      else
#line 1928 "intermod.m"
                        transform_hlds__intermod__succeeded = MR_FALSE;
#line 1922 "intermod.m"
                  }
#line 1922 "intermod.m"
              }
#line 1954 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1952 "intermod.m"
              {
#line 1952 "intermod.m"
                {
#line 1952 "intermod.m"
                  transform_hlds__intermod__succeeded = mercury__map__insert_4_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[6], (MR_Word) &transform_hlds__intermod_scalar_common_1[7], ((MR_Box) (transform_hlds__intermod__LHSVar_19)), ((MR_Box) (transform_hlds__intermod__RHSTerm_27)), transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5, &transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52);
                }
#line 1952 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1952 "intermod.m"
                  {
#line 1953 "intermod.m"
                    transform_hlds__intermod__RevGoals1_39 = transform_hlds__intermod__HeadVar__3_3;
#line 1953 "intermod.m"
                    transform_hlds__intermod__succeeded = MR_TRUE;
#line 1952 "intermod.m"
                  }
#line 1952 "intermod.m"
              }
#line 1954 "intermod.m"
            else
#line 1955 "intermod.m"
              {
#line 1955 "intermod.m"
                {
#line 1955 "intermod.m"
                  transform_hlds__intermod__RevGoals1_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__RevGoals1_39, 0) = ((MR_Box) (transform_hlds__intermod__Goal_13));
#line 1955 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__RevGoals1_39, 1) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_3));
#line 1955 "intermod.m"
                }
#line 1955 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5;
#line 1955 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 1955 "intermod.m"
              }
#line 1920 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1957 "intermod.m"
              {
#line 1957 "intermod.m"
                /* direct tailcall eliminated */
#line 1957 "intermod.m"
                {
#line 1957 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__Goals0_14;
#line 1957 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__RevGoals1_39;
#line 1957 "intermod.m"
                  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0__tmp_copy_5 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52;

#line 1957 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0__tmp_copy_5;
#line 1957 "intermod.m"
                  transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1957 "intermod.m"
                  transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 1957 "intermod.m"
                }
#line 1957 "intermod.m"
                continue;
#line 1957 "intermod.m"
              }
#line 1920 "intermod.m"
          }
#line 1917 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 1917 "intermod.m"
      }
#line 1917 "intermod.m"
      break;
#line 1917 "intermod.m"
    }
#line 1911 "intermod.m"
}

#line 1895 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
#line 1895 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1895 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1895 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 1895 "intermod.m"
{
#line 1895 "intermod.m"
  {
#line 1895 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1895 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__4_24;

#line 1895 "intermod.m"
    {
#line 1895 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1899__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__4_24);
    }
#line 1895 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__4_24));
#line 1895 "intermod.m"
  }
#line 1895 "intermod.m"
}

#line 1883 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
#line 1883 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_5,
#line 1883 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1883 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadTerms_7,
#line 1883 "intermod.m"
  MR_Word * transform_hlds__intermod__Clause_8)
#line 1883 "intermod.m"
{
#line 1886 "intermod.m"
  {
#line 1886 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1886 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_36_36;
#line 1886 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_37_37;
#line 1886 "intermod.m"
    MR_Word transform_hlds__intermod__Goal0_9;
#line 1886 "intermod.m"
    MR_Word transform_hlds__intermod__GoalInfo0_11;
#line 1886 "intermod.m"
    MR_Word transform_hlds__intermod__Goals0_12;
#line 1886 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVarMap0_13;
#line 1888 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 1906 "intermod.m"
    MR_Word transform_hlds__intermod__Goals_14;
#line 1906 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVarMap_15;

#line 1887 "intermod.m"
    {
#line 1887 "intermod.m"
      transform_hlds__intermod__Goal0_9 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__Clause0_6);
    }
#line 1888 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 0)));
#line 1888 "intermod.m"
    transform_hlds__intermod__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 1)));
#line 1889 "intermod.m"
    {
#line 1889 "intermod.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__intermod__Goal0_9, &transform_hlds__intermod__Goals0_12);
    }
#line 8147 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_36_36 = (MR_Word) &transform_hlds__intermod_scalar_common_1[6];
#line 8149 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_37_37 = (MR_Word) &transform_hlds__intermod_scalar_common_1[7];
#line 1890 "intermod.m"
    {
#line 1890 "intermod.m"
      mercury__map__init_1_p_0(transform_hlds__intermod__TypeInfo_36_36, transform_hlds__intermod__TypeInfo_37_37, &transform_hlds__intermod__HeadVarMap0_13);
    }
#line 1892 "intermod.m"
    {
#line 1892 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(transform_hlds__intermod__Goals0_12, transform_hlds__intermod__HeadVars_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__Goals_14, transform_hlds__intermod__HeadVarMap0_13, &transform_hlds__intermod__HeadVarMap_15);
    }
#line 1906 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1903 "intermod.m"
      {
#line 1903 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_20;
#line 1903 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;
#line 1905 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 1905 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;
#line 1905 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34;
#line 1905 "intermod.m"
        MR_Word transform_hlds__intermod__V_35_35;
#line 1905 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;

#line 1895 "intermod.m"
        {
#line 1895 "intermod.m"
          transform_hlds__intermod__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1895 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[6]));
#line 1895 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 1) = ((MR_Box) (transform_hlds__intermod__strip_headvar_unifications_4_p_0_1));
#line 1895 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1895 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 3) = ((MR_Box) (transform_hlds__intermod__Clause0_6));
#line 1895 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 4) = ((MR_Box) (transform_hlds__intermod__HeadVarMap_15));
#line 1895 "intermod.m"
        }
#line 1895 "intermod.m"
        {
#line 1895 "intermod.m"
          mercury__list__map_3_p_0(transform_hlds__intermod__TypeInfo_36_36, transform_hlds__intermod__TypeInfo_37_37, transform_hlds__intermod__V_22_22, transform_hlds__intermod__HeadVars_5, transform_hlds__intermod__HeadTerms_7);
        }
#line 1904 "intermod.m"
        {
#line 1904 "intermod.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__intermod__Goals_14, transform_hlds__intermod__GoalInfo0_11, &transform_hlds__intermod__Goal_20);
        }
#line 1905 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 0)));
#line 1905 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 1)));
#line 1905 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 2)));
#line 1905 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 3)));
#line 1905 "intermod.m"
        transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 4)));
#line 1905 "intermod.m"
        {
#line 1905 "intermod.m"
          MR_Word base;
#line 1905 "intermod.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1905 "intermod.m"
          *transform_hlds__intermod__Clause_8 = base;
#line 1905 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_31_31));
#line 1905 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__Goal_20));
#line 1905 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 1905 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_34_34));
#line 1905 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_35_35));
#line 1905 "intermod.m"
        }
#line 1903 "intermod.m"
      }
#line 1906 "intermod.m"
    else
#line 1907 "intermod.m"
      {
#line 1907 "intermod.m"
        {
#line 1907 "intermod.m"
          mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__intermod__HeadVars_5, transform_hlds__intermod__HeadTerms_7);
        }
#line 1908 "intermod.m"
        *transform_hlds__intermod__Clause_8 = transform_hlds__intermod__Clause0_6;
#line 1907 "intermod.m"
      }
#line 1886 "intermod.m"
  }
#line 1883 "intermod.m"
}

#line 1846 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_11,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_12,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__PragmaImpl_13,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__Attributes_14,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__Args_15,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__ProgVarset0_16,
#line 1846 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_17,
#line 1846 "intermod.m"
  MR_Integer transform_hlds__intermod__ProcId_18)
#line 1846 "intermod.m"
{
#line 1852 "intermod.m"
  {
#line 1852 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1852 "intermod.m"
    MR_Word transform_hlds__intermod__ProcInfo_20;
#line 1852 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeArgModes_21;
#line 1853 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_ProcInfo_20;

#line 1853 "intermod.m"
    {
#line 1853 "intermod.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__intermod__Procs_11, ((MR_Box) (transform_hlds__intermod__ProcId_18)), &transform_hlds__intermod__conv0_ProcInfo_20);
    }
#line 1853 "intermod.m"
    transform_hlds__intermod__ProcInfo_20 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_20);
#line 1854 "intermod.m"
    {
#line 1854 "intermod.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_20, &transform_hlds__intermod__MaybeArgModes_21);
    }
#line 1863 "intermod.m"
    if ((transform_hlds__intermod__MaybeArgModes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1864 "intermod.m"
      {
#line 1865 "intermod.m"
        {
#line 1865 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_foreign_clause\'/10", (MR_String) "no mode declaration");
#line 1865 "intermod.m"
          return;
        }
#line 1864 "intermod.m"
      }
#line 1863 "intermod.m"
    else
#line 1856 "intermod.m"
      {
#line 1856 "intermod.m"
        MR_Word transform_hlds__intermod__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeArgModes_21, (MR_Integer) 0)));
#line 1856 "intermod.m"
        MR_Word transform_hlds__intermod__ProgVarset_23;
#line 1856 "intermod.m"
        MR_Word transform_hlds__intermod__PragmaVars_24;
#line 1856 "intermod.m"
        MR_Word transform_hlds__intermod__InstVarset_25;
#line 1856 "intermod.m"
        MR_Word transform_hlds__intermod__FPInfo_26;

#line 1857 "intermod.m"
        {
#line 1857 "intermod.m"
          transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(transform_hlds__intermod__Args_15, transform_hlds__intermod__ArgModes_22, transform_hlds__intermod__ProgVarset0_16, &transform_hlds__intermod__ProgVarset_23, &transform_hlds__intermod__PragmaVars_24);
        }
#line 1859 "intermod.m"
        {
#line 1859 "intermod.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__intermod__ProcInfo_20, &transform_hlds__intermod__InstVarset_25);
        }
#line 1860 "intermod.m"
        {
#line 1860 "intermod.m"
          transform_hlds__intermod__FPInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1860 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 0) = ((MR_Box) (transform_hlds__intermod__Attributes_14));
#line 1860 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 1) = ((MR_Box) (transform_hlds__intermod__SymName_17));
#line 1860 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 2) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_12));
#line 1860 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 3) = ((MR_Box) (transform_hlds__intermod__PragmaVars_24));
#line 1860 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 4) = ((MR_Box) (transform_hlds__intermod__ProgVarset_23));
#line 1860 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 5) = ((MR_Box) (transform_hlds__intermod__InstVarset_25));
#line 1860 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 6) = ((MR_Box) (transform_hlds__intermod__PragmaImpl_13));
#line 1860 "intermod.m"
        }
#line 1862 "intermod.m"
        {
#line 1862 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_pragma_foreign_proc_3_p_0(transform_hlds__intermod__FPInfo_26);
#line 1862 "intermod.m"
          return;
        }
#line 1856 "intermod.m"
      }
#line 1852 "intermod.m"
  }
#line 1846 "intermod.m"
}

#line 1836 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
#line 1836 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1836 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1836 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1836 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1836 "intermod.m"
{
#line 1836 "intermod.m"
  {
#line 1836 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1836 "intermod.m"
    {
#line 1836 "intermod.m"
      transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 9))), ((MR_Integer) transform_hlds__intermod__wrapper_arg_1));
#line 1836 "intermod.m"
      return;
    }
#line 1836 "intermod.m"
  }
#line 1836 "intermod.m"
}

#line 1817 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
#line 1817 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1817 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 1817 "intermod.m"
{
#line 1817 "intermod.m"
  {
#line 1817 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1817 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1817 "intermod.m"
    {
#line 1817 "intermod.m"
      return transform_hlds__intermod__succeeded = transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1817__1_1_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 1817 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 1817 "intermod.m"
  }
#line 1817 "intermod.m"
}

#line 1791 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_12,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_13,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_14,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__VarSet_15,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_16,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_17,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_18,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__MaybeVarTypes_19,
#line 1791 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_20)
#line 1791 "intermod.m"
{
#line 1796 "intermod.m"
  {
#line 1796 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1796 "intermod.m"
    MR_Word transform_hlds__intermod__ApplicableProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 0)));
#line 1796 "intermod.m"
    MR_Word transform_hlds__intermod__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 1)));
#line 1796 "intermod.m"
    MR_Word transform_hlds__intermod__ImplLang_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 2)));
#line 1797 "intermod.m"
    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 3)));
#line 1797 "intermod.m"
    MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 4)));

#line 1809 "intermod.m"
    if ((transform_hlds__intermod__ImplLang_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1799 "intermod.m"
      {
#line 1799 "intermod.m"
        MR_Word transform_hlds__intermod__ClauseHeadVars_27;
#line 1799 "intermod.m"
        MR_Word transform_hlds__intermod__Clause_28;

#line 1800 "intermod.m"
        {
#line 1800 "intermod.m"
          transform_hlds__intermod__strip_headvar_unifications_4_p_0(transform_hlds__intermod__HeadVars_16, transform_hlds__intermod__Clause0_20, &transform_hlds__intermod__ClauseHeadVars_27, &transform_hlds__intermod__Clause_28);
        }
#line 1806 "intermod.m"
        {
#line 1806 "intermod.m"
          hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(transform_hlds__intermod__OutInfo_12, (MR_Integer) 0, (MR_Integer) 1, transform_hlds__intermod__ModuleInfo_13, transform_hlds__intermod__PredId_14, transform_hlds__intermod__VarSet_15, (MR_Integer) 1, transform_hlds__intermod__ClauseHeadVars_27, transform_hlds__intermod__PredOrFunc_17, transform_hlds__intermod__Clause_28, (MR_Integer) 1, transform_hlds__intermod__MaybeVarTypes_19);
#line 1806 "intermod.m"
          return;
        }
#line 1799 "intermod.m"
      }
#line 1809 "intermod.m"
    else
#line 1810 "intermod.m"
      {
#line 1810 "intermod.m"
        MR_Word transform_hlds__intermod__PredInfo_32;
#line 1810 "intermod.m"
        MR_Word transform_hlds__intermod__Procs_33;
#line 1841 "intermod.m"
        MR_Word transform_hlds__intermod__Attributes_49;
#line 1841 "intermod.m"
        MR_Word transform_hlds__intermod__Args_52;
#line 1841 "intermod.m"
        MR_Word transform_hlds__intermod__PragmaCode_55;
#line 1825 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 1816 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;

#line 1811 "intermod.m"
        {
#line 1811 "intermod.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_13, transform_hlds__intermod__PredId_14, &transform_hlds__intermod__PredInfo_32);
        }
#line 1812 "intermod.m"
        {
#line 1812 "intermod.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__intermod__PredInfo_32, &transform_hlds__intermod__Procs_33);
        }
#line 1816 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_23, (MR_Integer) 0)));
#line 1816 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_23, (MR_Integer) 1)));
#line 1825 "intermod.m"
        if (((((MR_tag((MR_Word) transform_hlds__intermod__V_93_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1827 "intermod.m"
          {
#line 1827 "intermod.m"
            MR_Word transform_hlds__intermod__V_58_58;
#line 1827 "intermod.m"
            MR_Integer transform_hlds__intermod__V_59_59;
#line 1827 "intermod.m"
            MR_Word transform_hlds__intermod___ExtraArgs_81;
#line 1827 "intermod.m"
            MR_Word transform_hlds__intermod___MaybeTraceRuntimeCond_82;

#line 1827 "intermod.m"
            transform_hlds__intermod__Attributes_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 1)));
#line 1827 "intermod.m"
            transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 2)));
#line 1827 "intermod.m"
            transform_hlds__intermod__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 3)));
#line 1827 "intermod.m"
            transform_hlds__intermod__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 4)));
#line 1827 "intermod.m"
            transform_hlds__intermod___ExtraArgs_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 5)));
#line 1827 "intermod.m"
            transform_hlds__intermod___MaybeTraceRuntimeCond_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 6)));
#line 1827 "intermod.m"
            transform_hlds__intermod__PragmaCode_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 7)));
#line 1827 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1827 "intermod.m"
          }
#line 1825 "intermod.m"
        else
#line 1825 "intermod.m"
          if (((((MR_tag((MR_Word) transform_hlds__intermod__V_93_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1816 "intermod.m"
            {
#line 1816 "intermod.m"
              MR_Word transform_hlds__intermod__TypeCtorInfo_85_85;
#line 1816 "intermod.m"
              MR_Word transform_hlds__intermod__TypeInfo_94_94;
#line 1816 "intermod.m"
              MR_Word transform_hlds__intermod__Goals_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 2)));
#line 1816 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignCodeGoal_46;
#line 1816 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignCodeGoalExpr_47;
#line 1816 "intermod.m"
              MR_Word transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 1)));
#line 1816 "intermod.m"
              MR_Word transform_hlds__intermod__V_65_65;
#line 1816 "intermod.m"
              MR_Word transform_hlds__intermod__V_66_66;
#line 1816 "intermod.m"
              MR_Word transform_hlds__intermod__V_68_68;
#line 1816 "intermod.m"
              MR_Word transform_hlds__intermod__V_91_91;
#line 1822 "intermod.m"
              MR_Word transform_hlds__intermod__V_48_48;
#line 1823 "intermod.m"
              MR_Word transform_hlds__intermod__V_50_50;
#line 1823 "intermod.m"
              MR_Integer transform_hlds__intermod__V_51_51;
#line 1823 "intermod.m"
              MR_Word transform_hlds__intermod___ExtraArgs_53;
#line 1823 "intermod.m"
              MR_Word transform_hlds__intermod___MaybeTraceRuntimeCond_54;

#line 1816 "intermod.m"
              transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_64_64 == (MR_Integer) 0);
#line 1816 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 1816 "intermod.m"
                {
#line 1817 "intermod.m"
                  transform_hlds__intermod__V_65_65 = (MR_Word) &transform_hlds__intermod_scalar_common_2[17];
#line 1821 "intermod.m"
                  transform_hlds__intermod__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8602 "transform_hlds.intermod.c"
                  transform_hlds__intermod__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1817 "intermod.m"
                  {
#line 1817 "intermod.m"
                    mercury__list__filter_3_p_0(transform_hlds__intermod__TypeCtorInfo_85_85, transform_hlds__intermod__V_65_65, transform_hlds__intermod__Goals_34, &transform_hlds__intermod__V_66_66);
                  }
#line 1817 "intermod.m"
                  transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 1817 "intermod.m"
                  if (transform_hlds__intermod__succeeded)
#line 1817 "intermod.m"
                    {
#line 1817 "intermod.m"
                      transform_hlds__intermod__ForeignCodeGoal_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_66_66, (MR_Integer) 0)));
#line 1817 "intermod.m"
                      transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_66_66, (MR_Integer) 1)));
#line 8619 "transform_hlds.intermod.c"
                      transform_hlds__intermod__TypeInfo_94_94 = (MR_Word) &transform_hlds__intermod_scalar_common_1[17];
#line 1817 "intermod.m"
                      {
#line 1817 "intermod.m"
                        transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_94_94, ((MR_Box) (transform_hlds__intermod__V_68_68)), ((MR_Box) (transform_hlds__intermod__V_91_91)));
                      }
#line 1816 "intermod.m"
                      if (transform_hlds__intermod__succeeded)
#line 1816 "intermod.m"
                        {
#line 1822 "intermod.m"
                          transform_hlds__intermod__ForeignCodeGoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignCodeGoal_46, (MR_Integer) 0)));
#line 1822 "intermod.m"
                          transform_hlds__intermod__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignCodeGoal_46, (MR_Integer) 1)));
#line 1823 "intermod.m"
                          transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ForeignCodeGoalExpr_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1823 "intermod.m"
                          if (transform_hlds__intermod__succeeded)
#line 1823 "intermod.m"
                            {
#line 1823 "intermod.m"
                              transform_hlds__intermod__Attributes_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 1)));
#line 1823 "intermod.m"
                              transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 2)));
#line 1823 "intermod.m"
                              transform_hlds__intermod__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 3)));
#line 1823 "intermod.m"
                              transform_hlds__intermod__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 4)));
#line 1823 "intermod.m"
                              transform_hlds__intermod___ExtraArgs_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 5)));
#line 1823 "intermod.m"
                              transform_hlds__intermod___MaybeTraceRuntimeCond_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 6)));
#line 1823 "intermod.m"
                              transform_hlds__intermod__PragmaCode_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 7)));
#line 1823 "intermod.m"
                            }
#line 1816 "intermod.m"
                        }
#line 1817 "intermod.m"
                    }
#line 1816 "intermod.m"
                }
#line 1816 "intermod.m"
            }
#line 1825 "intermod.m"
          else
#line 1825 "intermod.m"
            transform_hlds__intermod__succeeded = MR_FALSE;
#line 1841 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1834 "intermod.m"
          if ((transform_hlds__intermod__ApplicableProcIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1832 "intermod.m"
            {
#line 1833 "intermod.m"
              {
#line 1833 "intermod.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "all_modes foreign_proc");
#line 1833 "intermod.m"
                return;
              }
#line 1832 "intermod.m"
            }
#line 1834 "intermod.m"
          else
#line 1835 "intermod.m"
            {
#line 1835 "intermod.m"
              MR_Word transform_hlds__intermod__ProcIds_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ApplicableProcIds_22, (MR_Integer) 0)));
#line 1835 "intermod.m"
              MR_Word transform_hlds__intermod__V_69_69;
#line 1836 "intermod.m"
              MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_62;

#line 1836 "intermod.m"
              {
#line 1836 "intermod.m"
                transform_hlds__intermod__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1836 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
#line 1836 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_clause_11_p_0_2));
#line 1836 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1836 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 3) = ((MR_Box) (transform_hlds__intermod__Procs_33));
#line 1836 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 4) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_17));
#line 1836 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 5) = ((MR_Box) (transform_hlds__intermod__PragmaCode_55));
#line 1836 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 6) = ((MR_Box) (transform_hlds__intermod__Attributes_49));
#line 1836 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 7) = ((MR_Box) (transform_hlds__intermod__Args_52));
#line 1836 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 8) = ((MR_Box) (transform_hlds__intermod__VarSet_15));
#line 1836 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 9) = ((MR_Box) (transform_hlds__intermod__SymName_18));
#line 1836 "intermod.m"
              }
#line 1836 "intermod.m"
              {
#line 1836 "intermod.m"
                mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_69_69, transform_hlds__intermod__ProcIds_60, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_62);
              }
#line 1835 "intermod.m"
            }
#line 1841 "intermod.m"
        else
#line 1842 "intermod.m"
          {
#line 1842 "intermod.m"
            {
#line 1842 "intermod.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "did not find foreign_proc");
#line 1842 "intermod.m"
              return;
            }
#line 1842 "intermod.m"
          }
#line 1810 "intermod.m"
      }
#line 1796 "intermod.m"
  }
#line 1791 "intermod.m"
}

#line 1784 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0_1(
#line 1784 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1784 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1784 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1784 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1784 "intermod.m"
{
#line 1784 "intermod.m"
  {
#line 1784 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1784 "intermod.m"
    {
#line 1784 "intermod.m"
      transform_hlds__intermod__intermod_write_clause_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1784 "intermod.m"
      return;
    }
#line 1784 "intermod.m"
  }
#line 1784 "intermod.m"
}

#line 1740 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0(
#line 1740 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_1,
#line 1740 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_2,
#line 1740 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3)
#line 1740 "intermod.m"
{
#line 1743 "intermod.m"
  while (MR_TRUE)
#line 1743 "intermod.m"
    {
#line 1743 "intermod.m"
      /* tailcall optimized into a loop */
#line 1743 "intermod.m"
      {
#line 1743 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1743 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1743 "intermod.m"
          {
#line 1743 "intermod.m"
          }
#line 1743 "intermod.m"
        else
#line 1744 "intermod.m"
          {
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo_16;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__Module_17;
#line 1744 "intermod.m"
            MR_String transform_hlds__intermod__Name_18;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_19;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_20;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesInfo_21;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__VarSet_22;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__HeadVars_23;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesRep_24;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__VarTypes_26;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__Clauses_27;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__GoalType_28;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__Module_68;
#line 1744 "intermod.m"
            MR_String transform_hlds__intermod__Name_69;
#line 1744 "intermod.m"
            MR_Integer transform_hlds__intermod__Arity_70;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_71;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_72;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_73;
#line 1744 "intermod.m"
            MR_Word transform_hlds__intermod__MarkerList_74;
#line 1757 "intermod.m"
            MR_Word transform_hlds__intermod___ItemNumbers_25;

#line 1745 "intermod.m"
            {
#line 1745 "intermod.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_2, transform_hlds__intermod__PredId_13, &transform_hlds__intermod__PredInfo_16);
            }
#line 1746 "intermod.m"
            {
#line 1746 "intermod.m"
              transform_hlds__intermod__Module_17 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1747 "intermod.m"
            {
#line 1747 "intermod.m"
              transform_hlds__intermod__Name_18 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1748 "intermod.m"
            {
#line 1748 "intermod.m"
              transform_hlds__intermod__SymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1748 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_19, 0) = ((MR_Box) (transform_hlds__intermod__Module_17));
#line 1748 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_19, 1) = ((MR_Box) (transform_hlds__intermod__Name_18));
#line 1748 "intermod.m"
            }
#line 1749 "intermod.m"
            {
#line 1749 "intermod.m"
              transform_hlds__intermod__PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1963 "intermod.m"
            {
#line 1963 "intermod.m"
              transform_hlds__intermod__Module_68 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1964 "intermod.m"
            {
#line 1964 "intermod.m"
              transform_hlds__intermod__Name_69 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1965 "intermod.m"
            {
#line 1965 "intermod.m"
              transform_hlds__intermod__Arity_70 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1966 "intermod.m"
            {
#line 1966 "intermod.m"
              transform_hlds__intermod__PredOrFunc_71 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1967 "intermod.m"
            {
#line 1967 "intermod.m"
              transform_hlds__intermod__SymName_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1967 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_72, 0) = ((MR_Box) (transform_hlds__intermod__Module_68));
#line 1967 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_72, 1) = ((MR_Box) (transform_hlds__intermod__Name_69));
#line 1967 "intermod.m"
            }
#line 1968 "intermod.m"
            {
#line 1968 "intermod.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__Markers_73);
            }
#line 1969 "intermod.m"
            {
#line 1969 "intermod.m"
              hlds__hlds_pred__markers_to_marker_list_2_p_0(transform_hlds__intermod__Markers_73, &transform_hlds__intermod__MarkerList_74);
            }
#line 1970 "intermod.m"
            {
#line 1970 "intermod.m"
              transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(transform_hlds__intermod__SymName_72, transform_hlds__intermod__Arity_70, transform_hlds__intermod__MarkerList_74, transform_hlds__intermod__PredOrFunc_71);
            }
#line 1754 "intermod.m"
            {
#line 1754 "intermod.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__ClausesInfo_21);
            }
#line 1755 "intermod.m"
            {
#line 1755 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_varset_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__VarSet_22);
            }
#line 1756 "intermod.m"
            {
#line 1756 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__HeadVars_23);
            }
#line 1757 "intermod.m"
            {
#line 1757 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__ClausesRep_24, &transform_hlds__intermod___ItemNumbers_25);
            }
#line 1758 "intermod.m"
            {
#line 1758 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__VarTypes_26);
            }
#line 1759 "intermod.m"
            {
#line 1759 "intermod.m"
              hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep_24, &transform_hlds__intermod__Clauses_27);
            }
#line 1761 "intermod.m"
            {
#line 1761 "intermod.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__GoalType_28);
            }
#line 1776 "intermod.m"
            if (((MR_tag((MR_Word) transform_hlds__intermod__GoalType_28)) == (MR_mktag((MR_Integer) 1))))
#line 1763 "intermod.m"
              {
#line 1763 "intermod.m"
                MR_Word transform_hlds__intermod__PromiseType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalType_28, (MR_Integer) 0)));

#line 1770 "intermod.m"
                if ((transform_hlds__intermod__Clauses_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1773 "intermod.m"
                  {
#line 1774 "intermod.m"
                    {
#line 1774 "intermod.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_preds\'/5", (MR_String) "assertion not a single clause.");
#line 1774 "intermod.m"
                      return;
                    }
#line 1773 "intermod.m"
                  }
#line 1770 "intermod.m"
                else
#line 1770 "intermod.m"
                  {
#line 1770 "intermod.m"
                    MR_Word transform_hlds__intermod__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Clauses_27, (MR_Integer) 1)));
#line 1770 "intermod.m"
                    MR_Word transform_hlds__intermod__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Clauses_27, (MR_Integer) 0)));

#line 1770 "intermod.m"
                    if ((transform_hlds__intermod__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1765 "intermod.m"
                      {
#line 1767 "intermod.m"
                        {
#line 1767 "intermod.m"
                          hlds__hlds_out__hlds_out_module__write_promise_13_p_0(transform_hlds__intermod__OutInfo_1, transform_hlds__intermod__PromiseType_29, (MR_Integer) 0, transform_hlds__intermod__ModuleInfo_2, transform_hlds__intermod__PredId_13, transform_hlds__intermod__VarSet_22, (MR_Integer) 0, transform_hlds__intermod__HeadVars_23, transform_hlds__intermod__PredOrFunc_20, transform_hlds__intermod__V_63_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                        }
#line 1765 "intermod.m"
                      }
#line 1770 "intermod.m"
                    else
#line 1773 "intermod.m"
                      {
#line 1774 "intermod.m"
                        {
#line 1774 "intermod.m"
                          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_preds\'/5", (MR_String) "assertion not a single clause.");
#line 1774 "intermod.m"
                          return;
                        }
#line 1773 "intermod.m"
                      }
#line 1770 "intermod.m"
                  }
#line 1763 "intermod.m"
              }
#line 1776 "intermod.m"
            else
#line 1781 "intermod.m"
              {
#line 1781 "intermod.m"
                MR_Word transform_hlds__intermod__TypeVarset_35;
#line 1781 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeVarTypes_36;
#line 1781 "intermod.m"
                MR_Word transform_hlds__intermod__V_40_40;
#line 1784 "intermod.m"
                MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_49_49;

#line 1782 "intermod.m"
                {
#line 1782 "intermod.m"
                  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__TypeVarset_35);
                }
#line 1783 "intermod.m"
                {
#line 1783 "intermod.m"
                  transform_hlds__intermod__MaybeVarTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeVarTypes_36, 0) = ((MR_Box) (transform_hlds__intermod__TypeVarset_35));
#line 1783 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeVarTypes_36, 1) = ((MR_Box) (transform_hlds__intermod__VarTypes_26));
#line 1783 "intermod.m"
                }
#line 1784 "intermod.m"
                {
#line 1784 "intermod.m"
                  transform_hlds__intermod__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1784 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_10[0]));
#line 1784 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_preds_5_p_0_1));
#line 1784 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1784 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_1));
#line 1784 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 4) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_2));
#line 1784 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 5) = ((MR_Box) (transform_hlds__intermod__PredId_13));
#line 1784 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 6) = ((MR_Box) (transform_hlds__intermod__VarSet_22));
#line 1784 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 7) = ((MR_Box) (transform_hlds__intermod__HeadVars_23));
#line 1784 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 8) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_20));
#line 1784 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 9) = ((MR_Box) (transform_hlds__intermod__SymName_19));
#line 1784 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 10) = ((MR_Box) (transform_hlds__intermod__MaybeVarTypes_36));
#line 1784 "intermod.m"
                }
#line 1784 "intermod.m"
                {
#line 1784 "intermod.m"
                  mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_40_40, transform_hlds__intermod__Clauses_27, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_49_49);
                }
#line 1781 "intermod.m"
              }
#line 1789 "intermod.m"
            /* direct tailcall eliminated */
#line 1789 "intermod.m"
            {
#line 1789 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__PredIds_14;

#line 1789 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1789 "intermod.m"
            }
#line 1789 "intermod.m"
            continue;
#line 1744 "intermod.m"
          }
#line 1743 "intermod.m"
      }
#line 1743 "intermod.m"
      break;
#line 1743 "intermod.m"
    }
#line 1740 "intermod.m"
}

#line 1708 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_modes_6_p_0(
#line 1708 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_1,
#line 1708 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_2,
#line 1708 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_3,
#line 1708 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4)
#line 1708 "intermod.m"
{
#line 1711 "intermod.m"
  while (MR_TRUE)
#line 1711 "intermod.m"
    {
#line 1711 "intermod.m"
      /* tailcall optimized into a loop */
#line 1711 "intermod.m"
      {
#line 1711 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1711 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1711 "intermod.m"
          {
#line 1711 "intermod.m"
          }
#line 1711 "intermod.m"
        else
#line 1713 "intermod.m"
          {
#line 1713 "intermod.m"
            MR_Integer transform_hlds__intermod__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 1713 "intermod.m"
            MR_Word transform_hlds__intermod__ProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 1)));
#line 1713 "intermod.m"
            MR_Word transform_hlds__intermod__ProcInfo_19;
#line 1713 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeArgModes_20;
#line 1713 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeDetism_21;
#line 1713 "intermod.m"
            MR_Word transform_hlds__intermod__ArgModes_24;
#line 1713 "intermod.m"
            MR_Word transform_hlds__intermod__Detism_25;
#line 1713 "intermod.m"
            MR_Word transform_hlds__intermod__Context_26;
#line 1713 "intermod.m"
            MR_Word transform_hlds__intermod__Varset_27;
#line 1714 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_ProcInfo_19;
#line 1723 "intermod.m"
            MR_Word transform_hlds__intermod__ArgModes0_22;
#line 1723 "intermod.m"
            MR_Word transform_hlds__intermod__Detism0_23;

#line 1714 "intermod.m"
            {
#line 1714 "intermod.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__intermod__Procs_1, ((MR_Box) (transform_hlds__intermod__ProcId_16)), &transform_hlds__intermod__conv0_ProcInfo_19);
            }
#line 1714 "intermod.m"
            transform_hlds__intermod__ProcInfo_19 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_19);
#line 1715 "intermod.m"
            {
#line 1715 "intermod.m"
              hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__MaybeArgModes_20);
            }
#line 1716 "intermod.m"
            {
#line 1716 "intermod.m"
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__MaybeDetism_21);
            }
#line 1718 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeArgModes_20)) == (MR_mktag((MR_Integer) 1)));
#line 1718 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1718 "intermod.m"
              {
#line 1718 "intermod.m"
                transform_hlds__intermod__ArgModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeArgModes_20, (MR_Integer) 0)));
#line 1719 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeDetism_21)) == (MR_mktag((MR_Integer) 1)));
#line 1719 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1719 "intermod.m"
                  transform_hlds__intermod__Detism0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeDetism_21, (MR_Integer) 0)));
#line 1718 "intermod.m"
              }
#line 1723 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1721 "intermod.m"
              {
#line 1721 "intermod.m"
                transform_hlds__intermod__ArgModes_24 = transform_hlds__intermod__ArgModes0_22;
#line 1722 "intermod.m"
                transform_hlds__intermod__Detism_25 = transform_hlds__intermod__Detism0_23;
#line 1721 "intermod.m"
              }
#line 1723 "intermod.m"
            else
#line 1724 "intermod.m"
              {
#line 1724 "intermod.m"
                {
#line 1724 "intermod.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred_modes\'/6", (MR_String) "attempt to write undeclared mode");
#line 1724 "intermod.m"
                  return;
                }
#line 1724 "intermod.m"
              }
#line 1726 "intermod.m"
            {
#line 1726 "intermod.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__Context_26);
            }
#line 1727 "intermod.m"
            {
#line 1727 "intermod.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &transform_hlds__intermod__Varset_27);
            }
#line 1733 "intermod.m"
            if ((transform_hlds__intermod__PredOrFunc_3 == (MR_Integer) 1))
#line 1729 "intermod.m"
              {
#line 1729 "intermod.m"
                MR_Word transform_hlds__intermod__FuncArgModes_28;
#line 1729 "intermod.m"
                MR_Word transform_hlds__intermod__FuncRetMode_29;
#line 1729 "intermod.m"
                MR_Word transform_hlds__intermod__V_37_37;
#line 1730 "intermod.m"
                MR_Box transform_hlds__intermod__conv1_FuncRetMode_29;

#line 1730 "intermod.m"
                {
#line 1730 "intermod.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__intermod__ArgModes_24, &transform_hlds__intermod__FuncArgModes_28, &transform_hlds__intermod__conv1_FuncRetMode_29);
                }
#line 1730 "intermod.m"
                transform_hlds__intermod__FuncRetMode_29 = ((MR_Word) transform_hlds__intermod__conv1_FuncRetMode_29);
#line 1731 "intermod.m"
                {
#line 1731 "intermod.m"
                  transform_hlds__intermod__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1731 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_37_37, 0) = ((MR_Box) (transform_hlds__intermod__Detism_25));
#line 1731 "intermod.m"
                }
#line 1731 "intermod.m"
                {
#line 1731 "intermod.m"
                  parse_tree__mercury_to_mercury__mercury_output_func_mode_decl_8_p_0(transform_hlds__intermod__Varset_27, transform_hlds__intermod__SymName_2, transform_hlds__intermod__FuncArgModes_28, transform_hlds__intermod__FuncRetMode_29, transform_hlds__intermod__V_37_37, transform_hlds__intermod__Context_26);
                }
#line 1729 "intermod.m"
              }
#line 1733 "intermod.m"
            else
#line 1734 "intermod.m"
              {
#line 1734 "intermod.m"
                MR_Word transform_hlds__intermod__V_35_35;

#line 1735 "intermod.m"
                {
#line 1735 "intermod.m"
                  transform_hlds__intermod__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1735 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_35_35, 0) = ((MR_Box) (transform_hlds__intermod__Detism_25));
#line 1735 "intermod.m"
                }
#line 1735 "intermod.m"
                {
#line 1735 "intermod.m"
                  parse_tree__mercury_to_mercury__mercury_output_pred_mode_decl_7_p_0(transform_hlds__intermod__Varset_27, transform_hlds__intermod__SymName_2, transform_hlds__intermod__ArgModes_24, transform_hlds__intermod__V_35_35, transform_hlds__intermod__Context_26);
                }
#line 1734 "intermod.m"
              }
#line 1738 "intermod.m"
            /* direct tailcall eliminated */
#line 1738 "intermod.m"
            {
#line 1738 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__4__tmp_copy_4 = transform_hlds__intermod__ProcIds_17;

#line 1738 "intermod.m"
              transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__4__tmp_copy_4;
#line 1738 "intermod.m"
            }
#line 1738 "intermod.m"
            continue;
#line 1713 "intermod.m"
          }
#line 1711 "intermod.m"
      }
#line 1711 "intermod.m"
      break;
#line 1711 "intermod.m"
    }
#line 1708 "intermod.m"
}

#line 1996 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_2(
#line 1996 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1996 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1996 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1996 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1996 "intermod.m"
{
#line 1996 "intermod.m"
  {
#line 1996 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1996 "intermod.m"
    {
#line 1996 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_pragma_type_spec_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1996 "intermod.m"
      return;
    }
#line 1996 "intermod.m"
  }
#line 1996 "intermod.m"
}

#line 1695 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1(
#line 1695 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1695 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1695 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1695 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1695 "intermod.m"
{
#line 1695 "intermod.m"
  {
#line 1695 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1695 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_HeadVar__3_47;

#line 1695 "intermod.m"
    {
#line 1695 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1695__1_3_p_0(((MR_Integer) transform_hlds__intermod__wrapper_arg_1), ((MR_Integer) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv1_HeadVar__3_47);
    }
#line 1695 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv1_HeadVar__3_47));
#line 1695 "intermod.m"
  }
#line 1695 "intermod.m"
}

#line 1643 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0(
#line 1643 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1643 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1643 "intermod.m"
{
#line 1646 "intermod.m"
  while (MR_TRUE)
#line 1646 "intermod.m"
    {
#line 1646 "intermod.m"
      /* tailcall optimized into a loop */
#line 1646 "intermod.m"
      {
#line 1646 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1646 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1646 "intermod.m"
          {
#line 1646 "intermod.m"
          }
#line 1646 "intermod.m"
        else
#line 1647 "intermod.m"
          {
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo_13;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__Module_14;
#line 1647 "intermod.m"
            MR_String transform_hlds__intermod__Name_15;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_16;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__TVarSet_17;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__ExistQVars_18;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__ArgTypes_19;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__Context_20;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__Purity_21;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__ClassContext_22;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__GoalType_23;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__AppendVarNums_24;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__Procs_28;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__ProcIds_29;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__SortedProcIds_36;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__V_48_48;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__Module_63;
#line 1647 "intermod.m"
            MR_String transform_hlds__intermod__Name_64;
#line 1647 "intermod.m"
            MR_Integer transform_hlds__intermod__Arity_65;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_66;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_67;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_68;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__MarkerList_69;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecInfo_76;
#line 1647 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaMap_77;
#line 1993 "intermod.m"
            MR_Word transform_hlds__intermod__V_82_82;
#line 1993 "intermod.m"
            MR_Word transform_hlds__intermod__V_83_83;
#line 1993 "intermod.m"
            MR_Word transform_hlds__intermod__V_84_84;
#line 1998 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecPragmas_78;

#line 1648 "intermod.m"
            {
#line 1648 "intermod.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__PredId_10, &transform_hlds__intermod__PredInfo_13);
            }
#line 1649 "intermod.m"
            {
#line 1649 "intermod.m"
              transform_hlds__intermod__Module_14 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1650 "intermod.m"
            {
#line 1650 "intermod.m"
              transform_hlds__intermod__Name_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1651 "intermod.m"
            {
#line 1651 "intermod.m"
              transform_hlds__intermod__PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1652 "intermod.m"
            {
#line 1652 "intermod.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__TVarSet_17, &transform_hlds__intermod__ExistQVars_18, &transform_hlds__intermod__ArgTypes_19);
            }
#line 1653 "intermod.m"
            {
#line 1653 "intermod.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Context_20);
            }
#line 1654 "intermod.m"
            {
#line 1654 "intermod.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Purity_21);
            }
#line 1655 "intermod.m"
            {
#line 1655 "intermod.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__ClassContext_22);
            }
#line 1656 "intermod.m"
            {
#line 1656 "intermod.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__GoalType_23);
            }
#line 1664 "intermod.m"
            if ((transform_hlds__intermod__GoalType_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1671 "intermod.m"
              transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1664 "intermod.m"
            else
#line 1664 "intermod.m"
              if ((transform_hlds__intermod__GoalType_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1668 "intermod.m"
                transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 0;
#line 1664 "intermod.m"
              else
#line 1664 "intermod.m"
                if ((transform_hlds__intermod__GoalType_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1663 "intermod.m"
                  transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 0;
#line 1664 "intermod.m"
                else
#line 1664 "intermod.m"
                  if ((transform_hlds__intermod__GoalType_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1677 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1664 "intermod.m"
                  else
#line 1674 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1683 "intermod.m"
            if ((transform_hlds__intermod__PredOrFunc_16 == (MR_Integer) 1))
#line 1684 "intermod.m"
              {
#line 1684 "intermod.m"
                MR_Word transform_hlds__intermod__FuncArgTypes_26;
#line 1684 "intermod.m"
                MR_Word transform_hlds__intermod__FuncRetType_27;
#line 1684 "intermod.m"
                MR_Word transform_hlds__intermod__V_39_39;
#line 1685 "intermod.m"
                MR_Box transform_hlds__intermod__conv0_FuncRetType_27;

#line 1685 "intermod.m"
                {
#line 1685 "intermod.m"
                  parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__intermod__ArgTypes_19, &transform_hlds__intermod__FuncArgTypes_26, &transform_hlds__intermod__conv0_FuncRetType_27);
                }
#line 1685 "intermod.m"
                transform_hlds__intermod__FuncRetType_27 = ((MR_Word) transform_hlds__intermod__conv0_FuncRetType_27);
#line 1686 "intermod.m"
                {
#line 1686 "intermod.m"
                  transform_hlds__intermod__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1686 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_39_39, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1686 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_39_39, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1686 "intermod.m"
                }
#line 1686 "intermod.m"
                {
#line 1686 "intermod.m"
                  parse_tree__mercury_to_mercury__mercury_output_func_type_12_p_0(transform_hlds__intermod__TVarSet_17, transform_hlds__intermod__ExistQVars_18, transform_hlds__intermod__V_39_39, transform_hlds__intermod__FuncArgTypes_26, transform_hlds__intermod__FuncRetType_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__intermod__Purity_21, transform_hlds__intermod__ClassContext_22, transform_hlds__intermod__Context_20, transform_hlds__intermod__AppendVarNums_24);
                }
#line 1684 "intermod.m"
              }
#line 1683 "intermod.m"
            else
#line 1680 "intermod.m"
              {
#line 1680 "intermod.m"
                MR_Word transform_hlds__intermod__V_42_42;

#line 1681 "intermod.m"
                {
#line 1681 "intermod.m"
                  transform_hlds__intermod__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1681 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1681 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1681 "intermod.m"
                }
#line 1681 "intermod.m"
                {
#line 1681 "intermod.m"
                  parse_tree__mercury_to_mercury__mercury_output_pred_type_11_p_0(transform_hlds__intermod__TVarSet_17, transform_hlds__intermod__ExistQVars_18, transform_hlds__intermod__V_42_42, transform_hlds__intermod__ArgTypes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__intermod__Purity_21, transform_hlds__intermod__ClassContext_22, transform_hlds__intermod__Context_20, transform_hlds__intermod__AppendVarNums_24);
                }
#line 1680 "intermod.m"
              }
#line 1690 "intermod.m"
            {
#line 1690 "intermod.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Procs_28);
            }
#line 1691 "intermod.m"
            {
#line 1691 "intermod.m"
              transform_hlds__intermod__ProcIds_29 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1701 "intermod.m"
            {
#line 1701 "intermod.m"
              mercury__list__sort_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[16], transform_hlds__intermod__ProcIds_29, &transform_hlds__intermod__SortedProcIds_36);
            }
#line 1702 "intermod.m"
            {
#line 1702 "intermod.m"
              transform_hlds__intermod__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1702 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1702 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1702 "intermod.m"
            }
#line 1702 "intermod.m"
            {
#line 1702 "intermod.m"
              transform_hlds__intermod__intermod_write_pred_modes_6_p_0(transform_hlds__intermod__Procs_28, transform_hlds__intermod__V_48_48, transform_hlds__intermod__PredOrFunc_16, transform_hlds__intermod__SortedProcIds_36);
            }
#line 1963 "intermod.m"
            {
#line 1963 "intermod.m"
              transform_hlds__intermod__Module_63 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1964 "intermod.m"
            {
#line 1964 "intermod.m"
              transform_hlds__intermod__Name_64 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1965 "intermod.m"
            {
#line 1965 "intermod.m"
              transform_hlds__intermod__Arity_65 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1966 "intermod.m"
            {
#line 1966 "intermod.m"
              transform_hlds__intermod__PredOrFunc_66 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1967 "intermod.m"
            {
#line 1967 "intermod.m"
              transform_hlds__intermod__SymName_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1967 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_67, 0) = ((MR_Box) (transform_hlds__intermod__Module_63));
#line 1967 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_67, 1) = ((MR_Box) (transform_hlds__intermod__Name_64));
#line 1967 "intermod.m"
            }
#line 1968 "intermod.m"
            {
#line 1968 "intermod.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Markers_68);
            }
#line 1969 "intermod.m"
            {
#line 1969 "intermod.m"
              hlds__hlds_pred__markers_to_marker_list_2_p_0(transform_hlds__intermod__Markers_68, &transform_hlds__intermod__MarkerList_69);
            }
#line 1970 "intermod.m"
            {
#line 1970 "intermod.m"
              transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(transform_hlds__intermod__SymName_67, transform_hlds__intermod__Arity_65, transform_hlds__intermod__MarkerList_69, transform_hlds__intermod__PredOrFunc_66);
            }
#line 1992 "intermod.m"
            {
#line 1992 "intermod.m"
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__TypeSpecInfo_76);
            }
#line 1993 "intermod.m"
            transform_hlds__intermod__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 0)));
#line 1993 "intermod.m"
            transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 1)));
#line 1993 "intermod.m"
            transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 2)));
#line 1993 "intermod.m"
            transform_hlds__intermod__PragmaMap_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 3)));
#line 1994 "intermod.m"
            {
#line 1994 "intermod.m"
              transform_hlds__intermod__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, transform_hlds__intermod__PragmaMap_77, ((MR_Box) (transform_hlds__intermod__PredId_10)), &transform_hlds__intermod__TypeSpecPragmas_78);
            }
#line 1998 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1995 "intermod.m"
              {
#line 1996 "intermod.m"
                MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_IO_51_51;

#line 1996 "intermod.m"
                {
#line 1996 "intermod.m"
                  mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__intermod_scalar_common_9[0], transform_hlds__intermod__TypeSpecPragmas_78, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv2_STATE_VARIABLE_IO_51_51);
                }
#line 1995 "intermod.m"
              }
#line 1998 "intermod.m"
            else
#line 1996 "intermod.m"
              {
#line 1996 "intermod.m"
              }
#line 1706 "intermod.m"
            /* direct tailcall eliminated */
#line 1706 "intermod.m"
            {
#line 1706 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__2__tmp_copy_2 = transform_hlds__intermod__PredIds_11;

#line 1706 "intermod.m"
              transform_hlds__intermod__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2__tmp_copy_2;
#line 1706 "intermod.m"
            }
#line 1706 "intermod.m"
            continue;
#line 1647 "intermod.m"
          }
#line 1646 "intermod.m"
      }
#line 1646 "intermod.m"
      break;
#line 1646 "intermod.m"
    }
#line 1643 "intermod.m"
}

#line 1627 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_4_p_0(
#line 1627 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1627 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1627 "intermod.m"
{
#line 1630 "intermod.m"
  {
#line 1630 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 0)));
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 2)));
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 3)));
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 4)));
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 5)));
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__Body_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 6)));
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 8)));
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__ClassName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_6, (MR_Integer) 0)));
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__ItemInstance_21;
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__Item_22;
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_23;
#line 1631 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 1)));
#line 1631 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 7)));
#line 1631 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 9)));
#line 1633 "intermod.m"
    MR_Integer transform_hlds__intermod__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_6, (MR_Integer) 1)));
#line 1637 "intermod.m"
    MR_String transform_hlds__intermod__V_28_28;
#line 1637 "intermod.m"
    MR_String transform_hlds__intermod__V_29_29;
#line 1637 "intermod.m"
    MR_Word transform_hlds__intermod__V_30_30;
#line 1637 "intermod.m"
    MR_Word transform_hlds__intermod__V_31_31;

#line 1634 "intermod.m"
    {
#line 1634 "intermod.m"
      transform_hlds__intermod__ItemInstance_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1634 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 0) = ((MR_Box) (transform_hlds__intermod__Constraints_12));
#line 1634 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 1) = ((MR_Box) (transform_hlds__intermod__ClassName_19));
#line 1634 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 2) = ((MR_Box) (transform_hlds__intermod__Types_13));
#line 1634 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 3) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_14));
#line 1634 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 4) = ((MR_Box) (transform_hlds__intermod__Body_15));
#line 1634 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 5) = ((MR_Box) (transform_hlds__intermod__TVarSet_17));
#line 1634 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 6) = ((MR_Box) (transform_hlds__intermod__ModuleName_9));
#line 1634 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 7) = ((MR_Box) (transform_hlds__intermod__Context_11));
#line 1634 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 8) = ((MR_Box) ((MR_Integer) -1));
#line 1634 "intermod.m"
    }
#line 1636 "intermod.m"
    {
#line 1636 "intermod.m"
      transform_hlds__intermod__Item_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1636 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1636 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_22, 1) = ((MR_Box) (transform_hlds__intermod__ItemInstance_21));
#line 1636 "intermod.m"
    }
#line 1637 "intermod.m"
    transform_hlds__intermod__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 0)));
#line 1637 "intermod.m"
    transform_hlds__intermod__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 1)));
#line 1637 "intermod.m"
    transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 2)));
#line 1637 "intermod.m"
    transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 3)));
#line 1637 "intermod.m"
    transform_hlds__intermod__MercInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 4)));
#line 1638 "intermod.m"
    {
#line 1638 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_23, transform_hlds__intermod__Item_22);
#line 1638 "intermod.m"
      return;
    }
#line 1630 "intermod.m"
  }
#line 1627 "intermod.m"
}

#line 1625 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0_1(
#line 1625 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1625 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1625 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1625 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1625 "intermod.m"
{
#line 1625 "intermod.m"
  {
#line 1625 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1625 "intermod.m"
    {
#line 1625 "intermod.m"
      transform_hlds__intermod__intermod_write_instance_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1625 "intermod.m"
      return;
    }
#line 1625 "intermod.m"
  }
#line 1625 "intermod.m"
}

#line 1621 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0(
#line 1621 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1621 "intermod.m"
  MR_Word transform_hlds__intermod__Instances_6)
#line 1621 "intermod.m"
{
#line 1624 "intermod.m"
  {
#line 1624 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1624 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 1625 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_9;

#line 1625 "intermod.m"
    {
#line 1625 "intermod.m"
      transform_hlds__intermod__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1625 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[4]));
#line 1625 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_instances_4_p_0_1));
#line 1625 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1625 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1625 "intermod.m"
    }
#line 1625 "intermod.m"
    {
#line 1625 "intermod.m"
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__intermod_scalar_common_2[4], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_10_10, transform_hlds__intermod__Instances_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_9);
    }
#line 1624 "intermod.m"
  }
#line 1621 "intermod.m"
}

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3(
#line 1616 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1616 "intermod.m"
{
#line 1616 "intermod.m"
  {
#line 1616 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1616 "intermod.m"
    *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9));
#line 1616 "intermod.m"
    {
#line 1616 "intermod.m"
      ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr);
#line 1616 "intermod.m"
      return;
    }
#line 1616 "intermod.m"
  }
#line 1616 "intermod.m"
}

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4(
#line 1616 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1616 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1616 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1616 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1616 "intermod.m"
{
#line 1616 "intermod.m"
  {
#line 1616 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s transform_hlds__intermod__env;

#line 1616 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1 = transform_hlds__intermod__wrapper_arg_1;
#line 1616 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont = transform_hlds__intermod__cont;
#line 1616 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1616 "intermod.m"
    {
#line 1616 "intermod.m"
      MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1616 "intermod.m"
      {
#line 1616 "intermod.m"
        transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), &(transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9, transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3, &transform_hlds__intermod__env);
      }
#line 1616 "intermod.m"
    }
#line 1616 "intermod.m"
  }
#line 1616 "intermod.m"
}

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
#line 1616 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1616 "intermod.m"
{
#line 1616 "intermod.m"
  {
#line 1616 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1616 "intermod.m"
    *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9));
#line 1616 "intermod.m"
    {
#line 1616 "intermod.m"
      ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr);
#line 1616 "intermod.m"
      return;
    }
#line 1616 "intermod.m"
  }
#line 1616 "intermod.m"
}

#line 1616 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2(
#line 1616 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1616 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1616 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1616 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1616 "intermod.m"
{
#line 1616 "intermod.m"
  {
#line 1616 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s transform_hlds__intermod__env;

#line 1616 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1 = transform_hlds__intermod__wrapper_arg_1;
#line 1616 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont = transform_hlds__intermod__cont;
#line 1616 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1616 "intermod.m"
    {
#line 1616 "intermod.m"
      MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1616 "intermod.m"
      {
#line 1616 "intermod.m"
        transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1616__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), &(transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9, transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1, &transform_hlds__intermod__env);
      }
#line 1616 "intermod.m"
    }
#line 1616 "intermod.m"
  }
#line 1616 "intermod.m"
}

#line 1605 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
#line 1605 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1605 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1605 "intermod.m"
{
#line 1608 "intermod.m"
  {
#line 1608 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1608 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__3_3;
#line 1608 "intermod.m"
    MR_Word transform_hlds__intermod__Domain0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1608 "intermod.m"
    MR_Word transform_hlds__intermod__Range0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1608 "intermod.m"
    MR_Word transform_hlds__intermod__Domain_7;
#line 1608 "intermod.m"
    MR_Word transform_hlds__intermod__Range_8;
#line 1608 "intermod.m"
    MR_Word transform_hlds__intermod__P_11;
#line 1608 "intermod.m"
    MR_Word transform_hlds__intermod__P_21;

#line 1616 "intermod.m"
    {
#line 1616 "intermod.m"
      transform_hlds__intermod__P_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1616 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3]));
#line 1616 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2));
#line 1616 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1616 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 3) = ((MR_Box) (transform_hlds__intermod__TVars_4));
#line 1616 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 4) = ((MR_Box) (transform_hlds__intermod__Domain0_5));
#line 1616 "intermod.m"
    }
#line 1615 "intermod.m"
    {
#line 1615 "intermod.m"
      transform_hlds__intermod__Domain_7 = mercury__solutions__solutions_1_f_1((MR_Word) &transform_hlds__intermod_scalar_common_1[5], transform_hlds__intermod__P_11);
    }
#line 1616 "intermod.m"
    {
#line 1616 "intermod.m"
      transform_hlds__intermod__P_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1616 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3]));
#line 1616 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4));
#line 1616 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1616 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 3) = ((MR_Box) (transform_hlds__intermod__TVars_4));
#line 1616 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 4) = ((MR_Box) (transform_hlds__intermod__Range0_6));
#line 1616 "intermod.m"
    }
#line 1615 "intermod.m"
    {
#line 1615 "intermod.m"
      transform_hlds__intermod__Range_8 = mercury__solutions__solutions_1_f_1((MR_Word) &transform_hlds__intermod_scalar_common_1[5], transform_hlds__intermod__P_21);
    }
#line 1608 "intermod.m"
    {
#line 1608 "intermod.m"
      transform_hlds__intermod__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1608 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__intermod__Domain_7));
#line 1608 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__intermod__Range_8));
#line 1608 "intermod.m"
    }
#line 1608 "intermod.m"
    return transform_hlds__intermod__HeadVar__3_3;
#line 1608 "intermod.m"
  }
#line 1605 "intermod.m"
}

#line 1595 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0_1(
#line 1595 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1595 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 1595 "intermod.m"
{
#line 1595 "intermod.m"
  {
#line 1595 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 1595 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1595 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__3_3;

#line 1595 "intermod.m"
    {
#line 1595 "intermod.m"
      transform_hlds__intermod__conv0_HeadVar__3_3 = transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 1595 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__3_3));
#line 1595 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 1595 "intermod.m"
  }
#line 1595 "intermod.m"
}

#line 1583 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0(
#line 1583 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1583 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1583 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_9,
#line 1583 "intermod.m"
  MR_Word transform_hlds__intermod__ClassDefn_10)
#line 1583 "intermod.m"
{
#line 1586 "intermod.m"
  {
#line 1586 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1586 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 0)));
#line 1586 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 1)));
#line 1586 "intermod.m"
    MR_Word transform_hlds__intermod__HLDSFunDeps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 2)));
#line 1586 "intermod.m"
    MR_Word transform_hlds__intermod__TVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 4)));
#line 1586 "intermod.m"
    MR_Word transform_hlds__intermod__Interface_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 6)));
#line 1586 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 8)));
#line 1586 "intermod.m"
    MR_Word transform_hlds__intermod__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 9)));
#line 1586 "intermod.m"
    MR_Word transform_hlds__intermod__QualifiedClassName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_9, (MR_Integer) 0)));
#line 1587 "intermod.m"
    MR_Word transform_hlds__intermod___Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 3)));
#line 1587 "intermod.m"
    MR_Word transform_hlds__intermod___Kinds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 5)));
#line 1587 "intermod.m"
    MR_Word transform_hlds__intermod___HLDSClassInterface_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 7)));
#line 1590 "intermod.m"
    MR_Integer transform_hlds__intermod__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_9, (MR_Integer) 1)));
#line 1592 "intermod.m"
    MR_Word transform_hlds__intermod__V_42_42;
#line 1592 "intermod.m"
    MR_String transform_hlds__intermod__V_24_24;

#line 1592 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__QualifiedClassName_22)) == (MR_mktag((MR_Integer) 1)));
#line 1592 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1592 "intermod.m"
      {
#line 1592 "intermod.m"
        transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__QualifiedClassName_22, (MR_Integer) 0)));
#line 1592 "intermod.m"
        transform_hlds__intermod__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__QualifiedClassName_22, (MR_Integer) 1)));
#line 1592 "intermod.m"
        {
#line 1592 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_42_42);
        }
#line 1592 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1593 "intermod.m"
          {
#line 1593 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_12);
          }
#line 1592 "intermod.m"
      }
#line 1601 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1595 "intermod.m"
      {
#line 1595 "intermod.m"
        MR_Word transform_hlds__intermod__FunDeps_25;
#line 1595 "intermod.m"
        MR_Word transform_hlds__intermod__ItemTypeClass_26;
#line 1595 "intermod.m"
        MR_Word transform_hlds__intermod__Item_27;
#line 1595 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_28;
#line 1595 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 1599 "intermod.m"
        MR_String transform_hlds__intermod__V_34_34;
#line 1599 "intermod.m"
        MR_String transform_hlds__intermod__V_35_35;
#line 1599 "intermod.m"
        MR_Word transform_hlds__intermod__V_36_36;
#line 1599 "intermod.m"
        MR_Word transform_hlds__intermod__V_37_37;

#line 1595 "intermod.m"
        {
#line 1595 "intermod.m"
          transform_hlds__intermod__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1595 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2]));
#line 1595 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_class_6_p_0_1));
#line 1595 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1595 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 3) = ((MR_Box) (transform_hlds__intermod__TVars_16));
#line 1595 "intermod.m"
        }
#line 1595 "intermod.m"
        {
#line 1595 "intermod.m"
          transform_hlds__intermod__FunDeps_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, transform_hlds__intermod__V_31_31, transform_hlds__intermod__HLDSFunDeps_14);
        }
#line 1596 "intermod.m"
        {
#line 1596 "intermod.m"
          transform_hlds__intermod__ItemTypeClass_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1596 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 0) = ((MR_Box) (transform_hlds__intermod__Constraints_13));
#line 1596 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 1) = ((MR_Box) (transform_hlds__intermod__FunDeps_25));
#line 1596 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 2) = ((MR_Box) (transform_hlds__intermod__QualifiedClassName_22));
#line 1596 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 3) = ((MR_Box) (transform_hlds__intermod__TVars_16));
#line 1596 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 4) = ((MR_Box) (transform_hlds__intermod__Interface_18));
#line 1596 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 5) = ((MR_Box) (transform_hlds__intermod__TVarSet_20));
#line 1596 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 6) = ((MR_Box) (transform_hlds__intermod__Context_21));
#line 1596 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 7) = ((MR_Box) ((MR_Integer) -1));
#line 1596 "intermod.m"
        }
#line 1598 "intermod.m"
        {
#line 1598 "intermod.m"
          transform_hlds__intermod__Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1598 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1598 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_27, 1) = ((MR_Box) (transform_hlds__intermod__ItemTypeClass_26));
#line 1598 "intermod.m"
        }
#line 1599 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1599 "intermod.m"
        transform_hlds__intermod__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1599 "intermod.m"
        transform_hlds__intermod__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1599 "intermod.m"
        transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1599 "intermod.m"
        transform_hlds__intermod__MercInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1600 "intermod.m"
        {
#line 1600 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_28, transform_hlds__intermod__Item_27);
#line 1600 "intermod.m"
          return;
        }
#line 1595 "intermod.m"
      }
#line 1601 "intermod.m"
    else
#line 1600 "intermod.m"
      {
#line 1600 "intermod.m"
      }
#line 1586 "intermod.m"
  }
#line 1583 "intermod.m"
}

#line 1581 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0_1(
#line 1581 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1581 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1581 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1581 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1581 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1581 "intermod.m"
{
#line 1581 "intermod.m"
  {
#line 1581 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1581 "intermod.m"
    {
#line 1581 "intermod.m"
      transform_hlds__intermod__intermod_write_class_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
#line 1581 "intermod.m"
      return;
    }
#line 1581 "intermod.m"
  }
#line 1581 "intermod.m"
}

#line 1575 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0(
#line 1575 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1575 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1575 "intermod.m"
{
#line 1578 "intermod.m"
  {
#line 1578 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1578 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1578 "intermod.m"
    MR_Word transform_hlds__intermod__Classes_9;
#line 1578 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12;
#line 1581 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_11;

#line 1579 "intermod.m"
    {
#line 1579 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1580 "intermod.m"
    {
#line 1580 "intermod.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Classes_9);
    }
#line 1581 "intermod.m"
    {
#line 1581 "intermod.m"
      transform_hlds__intermod__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1581 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[2]));
#line 1581 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_classes_4_p_0_1));
#line 1581 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1581 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1581 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1581 "intermod.m"
    }
#line 1581 "intermod.m"
    {
#line 1581 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_12_12, transform_hlds__intermod__Classes_9, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_11);
    }
#line 1578 "intermod.m"
  }
#line 1575 "intermod.m"
}

#line 1549 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_6_p_0(
#line 1549 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1549 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1549 "intermod.m"
  MR_Word transform_hlds__intermod__InstId_9,
#line 1549 "intermod.m"
  MR_Word transform_hlds__intermod__InstDefn_10)
#line 1549 "intermod.m"
{
#line 1552 "intermod.m"
  {
#line 1552 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1552 "intermod.m"
    MR_Word transform_hlds__intermod__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstId_9, (MR_Integer) 0)));
#line 1552 "intermod.m"
    MR_Word transform_hlds__intermod__Varset_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 0)));
#line 1552 "intermod.m"
    MR_Word transform_hlds__intermod__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 1)));
#line 1552 "intermod.m"
    MR_Word transform_hlds__intermod__Body_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 2)));
#line 1552 "intermod.m"
    MR_Word transform_hlds__intermod__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 3)));
#line 1552 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 4)));
#line 1553 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstId_9, (MR_Integer) 1)));
#line 1556 "intermod.m"
    MR_Word transform_hlds__intermod__V_34_34;
#line 1556 "intermod.m"
    MR_String transform_hlds__intermod__V_19_19;

#line 1556 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__SymName_12)) == (MR_mktag((MR_Integer) 1)));
#line 1556 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1556 "intermod.m"
      {
#line 1556 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 0)));
#line 1556 "intermod.m"
        transform_hlds__intermod__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 1)));
#line 1556 "intermod.m"
        {
#line 1556 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_34_34);
        }
#line 1556 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1557 "intermod.m"
          {
#line 1557 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_18);
          }
#line 1556 "intermod.m"
      }
#line 1571 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1565 "intermod.m"
      {
#line 1565 "intermod.m"
        MR_Word transform_hlds__intermod__InstBody_21;
#line 1565 "intermod.m"
        MR_Word transform_hlds__intermod__ItemInstDefn_22;
#line 1565 "intermod.m"
        MR_Word transform_hlds__intermod__Item_23;
#line 1565 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_24;
#line 1569 "intermod.m"
        MR_String transform_hlds__intermod__V_30_30;
#line 1569 "intermod.m"
        MR_String transform_hlds__intermod__V_31_31;
#line 1569 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 1569 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;

#line 1562 "intermod.m"
        if ((transform_hlds__intermod__Body_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1564 "intermod.m"
          transform_hlds__intermod__InstBody_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1562 "intermod.m"
        else
#line 1560 "intermod.m"
          {
#line 1560 "intermod.m"
            MR_Word transform_hlds__intermod__Inst2_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_16, (MR_Integer) 0)));

#line 1561 "intermod.m"
            {
#line 1561 "intermod.m"
              transform_hlds__intermod__InstBody_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1561 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__InstBody_21, 0) = ((MR_Box) (transform_hlds__intermod__Inst2_20));
#line 1561 "intermod.m"
            }
#line 1560 "intermod.m"
          }
#line 1566 "intermod.m"
        {
#line 1566 "intermod.m"
          transform_hlds__intermod__ItemInstDefn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1566 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 0) = ((MR_Box) (transform_hlds__intermod__Varset_14));
#line 1566 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 1) = ((MR_Box) (transform_hlds__intermod__SymName_12));
#line 1566 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 2) = ((MR_Box) (transform_hlds__intermod__Args_15));
#line 1566 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 3) = ((MR_Box) (transform_hlds__intermod__InstBody_21));
#line 1566 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1566 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 5) = ((MR_Box) (transform_hlds__intermod__Context_17));
#line 1566 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_22, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1566 "intermod.m"
        }
#line 1568 "intermod.m"
        {
#line 1568 "intermod.m"
          transform_hlds__intermod__Item_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1568 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1568 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_23, 1) = ((MR_Box) (transform_hlds__intermod__ItemInstDefn_22));
#line 1568 "intermod.m"
        }
#line 1569 "intermod.m"
        transform_hlds__intermod__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1569 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1569 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1569 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1569 "intermod.m"
        transform_hlds__intermod__MercInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1570 "intermod.m"
        {
#line 1570 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_24, transform_hlds__intermod__Item_23);
#line 1570 "intermod.m"
          return;
        }
#line 1565 "intermod.m"
      }
#line 1571 "intermod.m"
    else
#line 1570 "intermod.m"
      {
#line 1570 "intermod.m"
      }
#line 1552 "intermod.m"
  }
#line 1549 "intermod.m"
}

#line 1547 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0_1(
#line 1547 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1547 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1547 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1547 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1547 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1547 "intermod.m"
{
#line 1547 "intermod.m"
  {
#line 1547 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1547 "intermod.m"
    {
#line 1547 "intermod.m"
      transform_hlds__intermod__intermod_write_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
#line 1547 "intermod.m"
      return;
    }
#line 1547 "intermod.m"
  }
#line 1547 "intermod.m"
}

#line 1539 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0(
#line 1539 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1539 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1539 "intermod.m"
{
#line 1542 "intermod.m"
  {
#line 1542 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1542 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1542 "intermod.m"
    MR_Word transform_hlds__intermod__Insts_9;
#line 1542 "intermod.m"
    MR_Word transform_hlds__intermod__UserInsts_10;
#line 1542 "intermod.m"
    MR_Word transform_hlds__intermod__InstDefns_11;
#line 1542 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14;
#line 1547 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_13;

#line 1543 "intermod.m"
    {
#line 1543 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1544 "intermod.m"
    {
#line 1544 "intermod.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Insts_9);
    }
#line 1545 "intermod.m"
    {
#line 1545 "intermod.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(transform_hlds__intermod__Insts_9, &transform_hlds__intermod__UserInsts_10);
    }
#line 1546 "intermod.m"
    {
#line 1546 "intermod.m"
      hlds__hlds_data__user_inst_table_get_inst_defns_2_p_0(transform_hlds__intermod__UserInsts_10, &transform_hlds__intermod__InstDefns_11);
    }
#line 1547 "intermod.m"
    {
#line 1547 "intermod.m"
      transform_hlds__intermod__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1547 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_14_14, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[1]));
#line 1547 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_14_14, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_insts_4_p_0_1));
#line 1547 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1547 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_14_14, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1547 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_14_14, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1547 "intermod.m"
    }
#line 1547 "intermod.m"
    {
#line 1547 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_14_14, transform_hlds__intermod__InstDefns_11, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_13);
    }
#line 1542 "intermod.m"
  }
#line 1539 "intermod.m"
}

#line 1519 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_6_p_0(
#line 1519 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1519 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1519 "intermod.m"
  MR_Word transform_hlds__intermod__ModeId_9,
#line 1519 "intermod.m"
  MR_Word transform_hlds__intermod__ModeDefn_10)
#line 1519 "intermod.m"
{
#line 1522 "intermod.m"
  {
#line 1522 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1522 "intermod.m"
    MR_Word transform_hlds__intermod__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeId_9, (MR_Integer) 0)));
#line 1522 "intermod.m"
    MR_Word transform_hlds__intermod__Varset_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 0)));
#line 1522 "intermod.m"
    MR_Word transform_hlds__intermod__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 1)));
#line 1522 "intermod.m"
    MR_Word transform_hlds__intermod__Mode_16;
#line 1522 "intermod.m"
    MR_Word transform_hlds__intermod__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 3)));
#line 1522 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 4)));
#line 1522 "intermod.m"
    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 2)));
#line 1523 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeId_9, (MR_Integer) 1)));
#line 1527 "intermod.m"
    MR_Word transform_hlds__intermod__V_34_34;
#line 1527 "intermod.m"
    MR_String transform_hlds__intermod__V_19_19;

#line 1524 "intermod.m"
    transform_hlds__intermod__Mode_16 = (MR_Word) transform_hlds__intermod__V_25_25;
#line 1527 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__SymName_12)) == (MR_mktag((MR_Integer) 1)));
#line 1527 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1527 "intermod.m"
      {
#line 1527 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 0)));
#line 1527 "intermod.m"
        transform_hlds__intermod__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 1)));
#line 1527 "intermod.m"
        {
#line 1527 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_34_34);
        }
#line 1527 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1528 "intermod.m"
          {
#line 1528 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_18);
          }
#line 1527 "intermod.m"
      }
#line 1535 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1531 "intermod.m"
      {
#line 1531 "intermod.m"
        MR_Word transform_hlds__intermod__ItemModeDefn_20;
#line 1531 "intermod.m"
        MR_Word transform_hlds__intermod__Item_21;
#line 1531 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_22;
#line 1531 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = (MR_Word) transform_hlds__intermod__Mode_16;
#line 1533 "intermod.m"
        MR_String transform_hlds__intermod__V_30_30;
#line 1533 "intermod.m"
        MR_String transform_hlds__intermod__V_31_31;
#line 1533 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 1533 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;

#line 1530 "intermod.m"
        {
#line 1530 "intermod.m"
          transform_hlds__intermod__ItemModeDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1530 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 0) = ((MR_Box) (transform_hlds__intermod__Varset_14));
#line 1530 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 1) = ((MR_Box) (transform_hlds__intermod__SymName_12));
#line 1530 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 2) = ((MR_Box) (transform_hlds__intermod__Args_15));
#line 1530 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 3) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 1530 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1530 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 5) = ((MR_Box) (transform_hlds__intermod__Context_17));
#line 1530 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1530 "intermod.m"
        }
#line 1532 "intermod.m"
        {
#line 1532 "intermod.m"
          transform_hlds__intermod__Item_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1532 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1532 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_21, 1) = ((MR_Box) (transform_hlds__intermod__ItemModeDefn_20));
#line 1532 "intermod.m"
        }
#line 1533 "intermod.m"
        transform_hlds__intermod__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1533 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1533 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1533 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1533 "intermod.m"
        transform_hlds__intermod__MercInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1534 "intermod.m"
        {
#line 1534 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_22, transform_hlds__intermod__Item_21);
#line 1534 "intermod.m"
          return;
        }
#line 1531 "intermod.m"
      }
#line 1535 "intermod.m"
    else
#line 1534 "intermod.m"
      {
#line 1534 "intermod.m"
      }
#line 1522 "intermod.m"
  }
#line 1519 "intermod.m"
}

#line 1517 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0_1(
#line 1517 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1517 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1517 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1517 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1517 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1517 "intermod.m"
{
#line 1517 "intermod.m"
  {
#line 1517 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1517 "intermod.m"
    {
#line 1517 "intermod.m"
      transform_hlds__intermod__intermod_write_mode_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
#line 1517 "intermod.m"
      return;
    }
#line 1517 "intermod.m"
  }
#line 1517 "intermod.m"
}

#line 1510 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0(
#line 1510 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1510 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1510 "intermod.m"
{
#line 1513 "intermod.m"
  {
#line 1513 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1513 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1513 "intermod.m"
    MR_Word transform_hlds__intermod__Modes_9;
#line 1513 "intermod.m"
    MR_Word transform_hlds__intermod__ModeDefns_10;
#line 1513 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13;
#line 1517 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12;

#line 1514 "intermod.m"
    {
#line 1514 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1515 "intermod.m"
    {
#line 1515 "intermod.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Modes_9);
    }
#line 1516 "intermod.m"
    {
#line 1516 "intermod.m"
      hlds__hlds_data__mode_table_get_mode_defns_2_p_0(transform_hlds__intermod__Modes_9, &transform_hlds__intermod__ModeDefns_10);
    }
#line 1517 "intermod.m"
    {
#line 1517 "intermod.m"
      transform_hlds__intermod__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1517 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[0]));
#line 1517 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_modes_4_p_0_1));
#line 1517 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1517 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1517 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1517 "intermod.m"
    }
#line 1517 "intermod.m"
    {
#line 1517 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_13_13, transform_hlds__intermod__ModeDefns_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12);
    }
#line 1513 "intermod.m"
  }
#line 1510 "intermod.m"
}

#line 1493 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(
#line 1493 "intermod.m"
  MR_Word transform_hlds__intermod__ConsId_5,
#line 1493 "intermod.m"
  MR_Word transform_hlds__intermod__ConsTag_6,
#line 1493 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Values_0_14,
#line 1493 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Values_15)
#line 1493 "intermod.m"
{
#line 1497 "intermod.m"
  {
#line 1497 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1497 "intermod.m"
    MR_Word transform_hlds__intermod__SymName_10;
#line 1497 "intermod.m"
    MR_String transform_hlds__intermod__ForeignTag_13;
#line 1497 "intermod.m"
    MR_Word transform_hlds__intermod__V_24_24;
#line 1500 "intermod.m"
    MR_Word transform_hlds__intermod__SymName0_8;
#line 1498 "intermod.m"
    MR_Integer transform_hlds__intermod__V_16_16;
#line 1498 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 1505 "intermod.m"
    MR_String transform_hlds__intermod__ForeignTag0_12;
#line 1503 "intermod.m"
    MR_Word transform_hlds__intermod___ForeignLang_11;

#line 1498 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1498 "intermod.m"
      {
#line 1498 "intermod.m"
        transform_hlds__intermod__SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 1)));
#line 1498 "intermod.m"
        transform_hlds__intermod__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 2)));
#line 1498 "intermod.m"
        transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 3)));
#line 1498 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_16_16 == (MR_Integer) 0);
#line 1498 "intermod.m"
      }
#line 1500 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1499 "intermod.m"
      transform_hlds__intermod__SymName_10 = transform_hlds__intermod__SymName0_8;
#line 1500 "intermod.m"
    else
#line 1501 "intermod.m"
      {
#line 1501 "intermod.m"
        {
#line 1501 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/4", (MR_String) "expected enumeration constant");
#line 1501 "intermod.m"
          return;
        }
#line 1501 "intermod.m"
      }
#line 1503 "intermod.m"
    transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ConsTag_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1503 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1503 "intermod.m"
      {
#line 1503 "intermod.m"
        transform_hlds__intermod___ForeignLang_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 1)));
#line 1503 "intermod.m"
        transform_hlds__intermod__ForeignTag0_12 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 2)));
#line 1504 "intermod.m"
        transform_hlds__intermod__ForeignTag_13 = transform_hlds__intermod__ForeignTag0_12;
#line 1503 "intermod.m"
      }
#line 1503 "intermod.m"
    else
#line 1506 "intermod.m"
      {
#line 1506 "intermod.m"
        {
#line 1506 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/4", (MR_String) "expected foreign tag");
#line 1506 "intermod.m"
          return;
        }
#line 1506 "intermod.m"
      }
#line 1508 "intermod.m"
    {
#line 1508 "intermod.m"
      transform_hlds__intermod__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1508 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_24_24, 0) = ((MR_Box) (transform_hlds__intermod__SymName_10));
#line 1508 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_24_24, 1) = ((MR_Box) (transform_hlds__intermod__ForeignTag_13));
#line 1508 "intermod.m"
    }
#line 1508 "intermod.m"
    {
#line 1508 "intermod.m"
      MR_Word base;
#line 1508 "intermod.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1508 "intermod.m"
      *transform_hlds__intermod__STATE_VARIABLE_Values_15 = base;
#line 1508 "intermod.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_24_24));
#line 1508 "intermod.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Values_0_14));
#line 1508 "intermod.m"
    }
#line 1497 "intermod.m"
  }
#line 1493 "intermod.m"
}

#line 1482 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0_1(
#line 1482 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1482 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1482 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1482 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1482 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1482 "intermod.m"
{
#line 1482 "intermod.m"
  {
#line 1482 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1482 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15;

#line 1482 "intermod.m"
    {
#line 1482 "intermod.m"
      transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15);
    }
#line 1482 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15));
#line 1482 "intermod.m"
  }
#line 1482 "intermod.m"
}

#line 1358 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0(
#line 1358 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1358 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1358 "intermod.m"
{
#line 1361 "intermod.m"
  {
#line 1361 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1361 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1361 "intermod.m"
    MR_Word transform_hlds__intermod__TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1361 "intermod.m"
    MR_Word transform_hlds__intermod__VarSet_9;
#line 1361 "intermod.m"
    MR_Word transform_hlds__intermod__Args_10;
#line 1361 "intermod.m"
    MR_Word transform_hlds__intermod__Body_11;
#line 1361 "intermod.m"
    MR_Word transform_hlds__intermod__Context_12;
#line 1361 "intermod.m"
    MR_Word transform_hlds__intermod__Name_13;
#line 1361 "intermod.m"
    MR_Word transform_hlds__intermod__TypeBody_24;
#line 1361 "intermod.m"
    MR_Word transform_hlds__intermod__MainItemTypeDefn_29;
#line 1361 "intermod.m"
    MR_Word transform_hlds__intermod__MainItem_30;
#line 1361 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_31;
#line 1366 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_14;
#line 1389 "intermod.m"
    MR_String transform_hlds__intermod__V_128_128;
#line 1389 "intermod.m"
    MR_String transform_hlds__intermod__V_129_129;
#line 1389 "intermod.m"
    MR_Word transform_hlds__intermod__V_130_130;
#line 1389 "intermod.m"
    MR_Word transform_hlds__intermod__V_131_131;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL_33;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC_34;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava_35;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp_36;
#line 1463 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang_37;
#line 1394 "intermod.m"
    MR_Word transform_hlds__intermod__ForeignTypeBody_32;
#line 1467 "intermod.m"
    MR_Word transform_hlds__intermod__ReservedTag_68;
#line 1467 "intermod.m"
    MR_Word transform_hlds__intermod__V_140_140;
#line 1467 "intermod.m"
    MR_Word transform_hlds__intermod__V_141_141;
#line 1467 "intermod.m"
    MR_Word transform_hlds__intermod__V_142_142;
#line 1467 "intermod.m"
    MR_Word transform_hlds__intermod__V_143_143;
#line 1467 "intermod.m"
    MR_Word transform_hlds__intermod__V_144_144;
#line 1467 "intermod.m"
    MR_Word transform_hlds__intermod__V_145_145;
#line 1467 "intermod.m"
    MR_Word transform_hlds__intermod__V_146_146;
#line 1467 "intermod.m"
    MR_Word transform_hlds__intermod__V_147_147;
#line 1489 "intermod.m"
    MR_Word transform_hlds__intermod__ConsTagVals_72;
#line 1489 "intermod.m"
    MR_Word transform_hlds__intermod__Lang_80;
#line 1479 "intermod.m"
    MR_Word transform_hlds__intermod__DuTypeKind_74;
#line 1479 "intermod.m"
    MR_Word transform_hlds__intermod__V_71_71;
#line 1479 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73;
#line 1479 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75;
#line 1479 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76;
#line 1479 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77;
#line 1479 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78;
#line 1479 "intermod.m"
    MR_Word transform_hlds__intermod__V_79_79;

#line 1362 "intermod.m"
    {
#line 1362 "intermod.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__VarSet_9);
    }
#line 1363 "intermod.m"
    {
#line 1363 "intermod.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Args_10);
    }
#line 1364 "intermod.m"
    {
#line 1364 "intermod.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Body_11);
    }
#line 1365 "intermod.m"
    {
#line 1365 "intermod.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Context_12);
    }
#line 1366 "intermod.m"
    transform_hlds__intermod__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 0)));
#line 1366 "intermod.m"
    transform_hlds__intermod___Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 1)));
#line 1373 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1))))
#line 1370 "intermod.m"
      {
#line 1370 "intermod.m"
        MR_Word transform_hlds__intermod__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1370 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeUserEqComp_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1370 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeDirectArgCtors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1368 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1368 "intermod.m"
        MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1368 "intermod.m"
        MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1368 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1368 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1368 "intermod.m"
        MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));

#line 1371 "intermod.m"
        {
#line 1371 "intermod.m"
          transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1371 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__Ctors_15));
#line 1371 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_19));
#line 1371 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 2) = ((MR_Box) (transform_hlds__intermod__MaybeDirectArgCtors_20));
#line 1371 "intermod.m"
        }
#line 1370 "intermod.m"
      }
#line 1373 "intermod.m"
    else
#line 1373 "intermod.m"
      if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 2))))
#line 1374 "intermod.m"
        {
#line 1374 "intermod.m"
          MR_Word transform_hlds__intermod__EqvType_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__Body_11, (MR_Integer) 0)));

#line 1375 "intermod.m"
          {
#line 1375 "intermod.m"
            transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "intermod.m"
            MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__EqvType_25));
#line 1375 "intermod.m"
          }
#line 1374 "intermod.m"
        }
#line 1373 "intermod.m"
      else
#line 1373 "intermod.m"
        if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 0))))
#line 1380 "intermod.m"
          {
#line 1381 "intermod.m"
            transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__intermod_scalar_common_7[0]);
#line 1380 "intermod.m"
          }
#line 1373 "intermod.m"
        else
#line 1373 "intermod.m"
          if (((((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1377 "intermod.m"
            {
#line 1377 "intermod.m"
              MR_Word transform_hlds__intermod__Details_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 1)));

#line 1378 "intermod.m"
              {
#line 1378 "intermod.m"
                transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "intermod.m"
                MR_hl_field(MR_mktag(2), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__Details_26));
#line 1378 "intermod.m"
              }
#line 1377 "intermod.m"
            }
#line 1373 "intermod.m"
          else
#line 1383 "intermod.m"
            {
#line 1383 "intermod.m"
              MR_Word transform_hlds__intermod__SolverTypeDetails_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1383 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeUserEqComp_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 2)));

#line 1384 "intermod.m"
              {
#line 1384 "intermod.m"
                transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1384 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 1) = ((MR_Box) (transform_hlds__intermod__SolverTypeDetails_28));
#line 1384 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 2) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_127));
#line 1384 "intermod.m"
              }
#line 1383 "intermod.m"
            }
#line 1386 "intermod.m"
    {
#line 1386 "intermod.m"
      transform_hlds__intermod__MainItemTypeDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1386 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1386 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1386 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1386 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 3) = ((MR_Box) (transform_hlds__intermod__TypeBody_24));
#line 1386 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1386 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1386 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1386 "intermod.m"
    }
#line 1388 "intermod.m"
    {
#line 1388 "intermod.m"
      transform_hlds__intermod__MainItem_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__MainItem_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1388 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__MainItem_30, 1) = ((MR_Box) (transform_hlds__intermod__MainItemTypeDefn_29));
#line 1388 "intermod.m"
    }
#line 1389 "intermod.m"
    transform_hlds__intermod__V_128_128 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 0)));
#line 1389 "intermod.m"
    transform_hlds__intermod__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 1)));
#line 1389 "intermod.m"
    transform_hlds__intermod__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 2)));
#line 1389 "intermod.m"
    transform_hlds__intermod__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 3)));
#line 1389 "intermod.m"
    transform_hlds__intermod__MercInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 4)));
#line 1390 "intermod.m"
    {
#line 1390 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__MainItem_30);
    }
#line 1393 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1))))
#line 1393 "intermod.m"
      {
#line 1393 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1393 "intermod.m"
        MR_Word transform_hlds__intermod__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1393 "intermod.m"
        MR_Word transform_hlds__intermod__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1393 "intermod.m"
        MR_Word transform_hlds__intermod__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1393 "intermod.m"
        MR_Word transform_hlds__intermod__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1393 "intermod.m"
        MR_Word transform_hlds__intermod__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1393 "intermod.m"
        MR_Word transform_hlds__intermod__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1393 "intermod.m"
        MR_Word transform_hlds__intermod__V_138_138 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1393 "intermod.m"
        MR_Word transform_hlds__intermod__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1393 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_92_92)) == (MR_mktag((MR_Integer) 1)));
#line 1393 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1393 "intermod.m"
          transform_hlds__intermod__ForeignTypeBody_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_92_92, (MR_Integer) 0)));
#line 1393 "intermod.m"
      }
#line 1393 "intermod.m"
    else
#line 1393 "intermod.m"
      if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 0))))
#line 1392 "intermod.m"
        {
#line 1392 "intermod.m"
          transform_hlds__intermod__ForeignTypeBody_32 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__Body_11), (MR_Integer) 0);
#line 1392 "intermod.m"
          transform_hlds__intermod__succeeded = MR_TRUE;
#line 1392 "intermod.m"
        }
#line 1393 "intermod.m"
      else
#line 1393 "intermod.m"
        transform_hlds__intermod__succeeded = MR_FALSE;
#line 1394 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1394 "intermod.m"
      {
#line 1395 "intermod.m"
        transform_hlds__intermod__MaybeIL_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 0)));
#line 1395 "intermod.m"
        transform_hlds__intermod__MaybeC_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 1)));
#line 1395 "intermod.m"
        transform_hlds__intermod__MaybeJava_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 2)));
#line 1395 "intermod.m"
        transform_hlds__intermod__MaybeCSharp_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 3)));
#line 1395 "intermod.m"
        transform_hlds__intermod__MaybeErlang_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 4)));
#line 1395 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1394 "intermod.m"
      }
#line 1463 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1410 "intermod.m"
      {
#line 1408 "intermod.m"
        if ((transform_hlds__intermod__MaybeIL_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1409 "intermod.m"
          {
#line 1409 "intermod.m"
          }
#line 1408 "intermod.m"
        else
#line 1399 "intermod.m"
          {
#line 1399 "intermod.m"
            MR_Word transform_hlds__intermod__DataIL_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeIL_33, (MR_Integer) 0)));
#line 1399 "intermod.m"
            MR_Word transform_hlds__intermod__ILForeignType_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 0)));
#line 1399 "intermod.m"
            MR_Word transform_hlds__intermod__ILMaybeUserEqComp_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 1)));
#line 1399 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsIL_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 2)));
#line 1399 "intermod.m"
            MR_Word transform_hlds__intermod__ILItemTypeDefn_42;
#line 1399 "intermod.m"
            MR_Word transform_hlds__intermod__ILItem_43;
#line 1399 "intermod.m"
            MR_Word transform_hlds__intermod__V_93_93;
#line 1399 "intermod.m"
            MR_Word transform_hlds__intermod__V_94_94 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__ILForeignType_39);

#line 1402 "intermod.m"
            {
#line 1402 "intermod.m"
              transform_hlds__intermod__V_93_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, 1) = ((MR_Box) (transform_hlds__intermod__V_94_94));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, 2) = ((MR_Box) (transform_hlds__intermod__ILMaybeUserEqComp_40));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsIL_41));
#line 1402 "intermod.m"
            }
#line 1402 "intermod.m"
            {
#line 1402 "intermod.m"
              transform_hlds__intermod__ILItemTypeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 3) = ((MR_Box) (transform_hlds__intermod__V_93_93));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1402 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1402 "intermod.m"
            }
#line 1406 "intermod.m"
            {
#line 1406 "intermod.m"
              transform_hlds__intermod__ILItem_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1406 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__ILItem_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1406 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__ILItem_43, 1) = ((MR_Box) (transform_hlds__intermod__ILItemTypeDefn_42));
#line 1406 "intermod.m"
            }
#line 1407 "intermod.m"
            {
#line 1407 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ILItem_43);
            }
#line 1399 "intermod.m"
          }
#line 1421 "intermod.m"
        if ((transform_hlds__intermod__MaybeC_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1422 "intermod.m"
          {
#line 1422 "intermod.m"
          }
#line 1421 "intermod.m"
        else
#line 1412 "intermod.m"
          {
#line 1412 "intermod.m"
            MR_Word transform_hlds__intermod__DataC_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeC_34, (MR_Integer) 0)));
#line 1412 "intermod.m"
            MR_Word transform_hlds__intermod__CForeignType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 0)));
#line 1412 "intermod.m"
            MR_Word transform_hlds__intermod__CMaybeUserEqComp_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 1)));
#line 1412 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsC_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 2)));
#line 1412 "intermod.m"
            MR_Word transform_hlds__intermod__CItemTypeDefn_48;
#line 1412 "intermod.m"
            MR_Word transform_hlds__intermod__CItem_49;
#line 1412 "intermod.m"
            MR_Word transform_hlds__intermod__V_98_98;
#line 1412 "intermod.m"
            MR_Word transform_hlds__intermod__V_99_99;

#line 1416 "intermod.m"
            {
#line 1416 "intermod.m"
              transform_hlds__intermod__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1416 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_99_99, 0) = ((MR_Box) (transform_hlds__intermod__CForeignType_45));
#line 1416 "intermod.m"
            }
#line 1415 "intermod.m"
            {
#line 1415 "intermod.m"
              transform_hlds__intermod__V_98_98 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_98_98, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_98_98, 1) = ((MR_Box) (transform_hlds__intermod__V_99_99));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_98_98, 2) = ((MR_Box) (transform_hlds__intermod__CMaybeUserEqComp_46));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_98_98, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsC_47));
#line 1415 "intermod.m"
            }
#line 1415 "intermod.m"
            {
#line 1415 "intermod.m"
              transform_hlds__intermod__CItemTypeDefn_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 3) = ((MR_Box) (transform_hlds__intermod__V_98_98));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1415 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1415 "intermod.m"
            }
#line 1419 "intermod.m"
            {
#line 1419 "intermod.m"
              transform_hlds__intermod__CItem_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__CItem_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1419 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__CItem_49, 1) = ((MR_Box) (transform_hlds__intermod__CItemTypeDefn_48));
#line 1419 "intermod.m"
            }
#line 1420 "intermod.m"
            {
#line 1420 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__CItem_49);
            }
#line 1412 "intermod.m"
          }
#line 1434 "intermod.m"
        if ((transform_hlds__intermod__MaybeJava_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1435 "intermod.m"
          {
#line 1435 "intermod.m"
          }
#line 1434 "intermod.m"
        else
#line 1425 "intermod.m"
          {
#line 1425 "intermod.m"
            MR_Word transform_hlds__intermod__DataJava_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeJava_35, (MR_Integer) 0)));
#line 1425 "intermod.m"
            MR_Word transform_hlds__intermod__JavaForeignType_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 0)));
#line 1425 "intermod.m"
            MR_Word transform_hlds__intermod__JavaMaybeUserEqComp_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 1)));
#line 1425 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsJava_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 2)));
#line 1425 "intermod.m"
            MR_Word transform_hlds__intermod__JavaItemTypeDefn_54;
#line 1425 "intermod.m"
            MR_Word transform_hlds__intermod__JavaItem_55;
#line 1425 "intermod.m"
            MR_Word transform_hlds__intermod__V_103_103;
#line 1425 "intermod.m"
            MR_Word transform_hlds__intermod__V_104_104;

#line 1429 "intermod.m"
            {
#line 1429 "intermod.m"
              transform_hlds__intermod__V_104_104 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "intermod.m"
              MR_hl_field(MR_mktag(2), transform_hlds__intermod__V_104_104, 0) = ((MR_Box) (transform_hlds__intermod__JavaForeignType_51));
#line 1429 "intermod.m"
            }
#line 1428 "intermod.m"
            {
#line 1428 "intermod.m"
              transform_hlds__intermod__V_103_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_103_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_103_103, 1) = ((MR_Box) (transform_hlds__intermod__V_104_104));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_103_103, 2) = ((MR_Box) (transform_hlds__intermod__JavaMaybeUserEqComp_52));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_103_103, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsJava_53));
#line 1428 "intermod.m"
            }
#line 1428 "intermod.m"
            {
#line 1428 "intermod.m"
              transform_hlds__intermod__JavaItemTypeDefn_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 3) = ((MR_Box) (transform_hlds__intermod__V_103_103));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1428 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1428 "intermod.m"
            }
#line 1432 "intermod.m"
            {
#line 1432 "intermod.m"
              transform_hlds__intermod__JavaItem_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1432 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__JavaItem_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1432 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__JavaItem_55, 1) = ((MR_Box) (transform_hlds__intermod__JavaItemTypeDefn_54));
#line 1432 "intermod.m"
            }
#line 1433 "intermod.m"
            {
#line 1433 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__JavaItem_55);
            }
#line 1425 "intermod.m"
          }
#line 1447 "intermod.m"
        if ((transform_hlds__intermod__MaybeCSharp_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1448 "intermod.m"
          {
#line 1448 "intermod.m"
          }
#line 1447 "intermod.m"
        else
#line 1438 "intermod.m"
          {
#line 1438 "intermod.m"
            MR_Word transform_hlds__intermod__DataCSharp_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeCSharp_36, (MR_Integer) 0)));
#line 1438 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpForeignType_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 0)));
#line 1438 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpMaybeUserEqComp_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 1)));
#line 1438 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsCSharp_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 2)));
#line 1438 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpItemTypeDefn_60;
#line 1438 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpItem_61;
#line 1438 "intermod.m"
            MR_Word transform_hlds__intermod__V_108_108;
#line 1438 "intermod.m"
            MR_Word transform_hlds__intermod__V_109_109;

#line 1442 "intermod.m"
            {
#line 1442 "intermod.m"
              transform_hlds__intermod__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1442 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_109_109, 1) = ((MR_Box) (transform_hlds__intermod__CSharpForeignType_57));
#line 1442 "intermod.m"
            }
#line 1441 "intermod.m"
            {
#line 1441 "intermod.m"
              transform_hlds__intermod__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 1) = ((MR_Box) (transform_hlds__intermod__V_109_109));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 2) = ((MR_Box) (transform_hlds__intermod__CSharpMaybeUserEqComp_58));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsCSharp_59));
#line 1441 "intermod.m"
            }
#line 1441 "intermod.m"
            {
#line 1441 "intermod.m"
              transform_hlds__intermod__CSharpItemTypeDefn_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 3) = ((MR_Box) (transform_hlds__intermod__V_108_108));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1441 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1441 "intermod.m"
            }
#line 1445 "intermod.m"
            {
#line 1445 "intermod.m"
              transform_hlds__intermod__CSharpItem_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1445 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__CSharpItem_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1445 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__CSharpItem_61, 1) = ((MR_Box) (transform_hlds__intermod__CSharpItemTypeDefn_60));
#line 1445 "intermod.m"
            }
#line 1446 "intermod.m"
            {
#line 1446 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__CSharpItem_61);
            }
#line 1438 "intermod.m"
          }
#line 1460 "intermod.m"
        if ((transform_hlds__intermod__MaybeErlang_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1461 "intermod.m"
          {
#line 1461 "intermod.m"
          }
#line 1460 "intermod.m"
        else
#line 1451 "intermod.m"
          {
#line 1451 "intermod.m"
            MR_Word transform_hlds__intermod__DataErlang_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeErlang_37, (MR_Integer) 0)));
#line 1451 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangMaybeUserEqComp_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataErlang_62, (MR_Integer) 1)));
#line 1451 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsErlang_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataErlang_62, (MR_Integer) 2)));
#line 1451 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangItemTypeDefn_66;
#line 1451 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangItem_67;
#line 1451 "intermod.m"
            MR_Word transform_hlds__intermod__V_113_113;
#line 1451 "intermod.m"
            MR_Word transform_hlds__intermod__V_114_114;

#line 1455 "intermod.m"
            {
#line 1455 "intermod.m"
              transform_hlds__intermod__V_114_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1455 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_114_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1455 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_114_114, 1) = NULL;
#line 1455 "intermod.m"
            }
#line 1454 "intermod.m"
            {
#line 1454 "intermod.m"
              transform_hlds__intermod__V_113_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_113_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_113_113, 1) = ((MR_Box) (transform_hlds__intermod__V_114_114));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_113_113, 2) = ((MR_Box) (transform_hlds__intermod__ErlangMaybeUserEqComp_64));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_113_113, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsErlang_65));
#line 1454 "intermod.m"
            }
#line 1454 "intermod.m"
            {
#line 1454 "intermod.m"
              transform_hlds__intermod__ErlangItemTypeDefn_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 0) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 1) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 2) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 3) = ((MR_Box) (transform_hlds__intermod__V_113_113));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 5) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1454 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 6) = ((MR_Box) ((MR_Integer) -1));
#line 1454 "intermod.m"
            }
#line 1458 "intermod.m"
            {
#line 1458 "intermod.m"
              transform_hlds__intermod__ErlangItem_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1458 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__ErlangItem_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1458 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__ErlangItem_67, 1) = ((MR_Box) (transform_hlds__intermod__ErlangItemTypeDefn_66));
#line 1458 "intermod.m"
            }
#line 1459 "intermod.m"
            {
#line 1459 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ErlangItem_67);
            }
#line 1451 "intermod.m"
          }
#line 1410 "intermod.m"
      }
#line 1463 "intermod.m"
    else
#line 1461 "intermod.m"
      {
#line 1461 "intermod.m"
      }
#line 1467 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1)));
#line 1467 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1467 "intermod.m"
      {
#line 1467 "intermod.m"
        transform_hlds__intermod__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1467 "intermod.m"
        transform_hlds__intermod__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1467 "intermod.m"
        transform_hlds__intermod__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1467 "intermod.m"
        transform_hlds__intermod__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1467 "intermod.m"
        transform_hlds__intermod__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1467 "intermod.m"
        transform_hlds__intermod__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1467 "intermod.m"
        transform_hlds__intermod__ReservedTag_68 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1467 "intermod.m"
        transform_hlds__intermod__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1467 "intermod.m"
        transform_hlds__intermod__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1468 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__ReservedTag_68 == (MR_Integer) 0);
#line 1467 "intermod.m"
      }
#line 1475 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1472 "intermod.m"
      {
#line 1472 "intermod.m"
        MR_Word transform_hlds__intermod__ReserveItemPragma_69;
#line 1472 "intermod.m"
        MR_Word transform_hlds__intermod__ReserveItem_70;
#line 1472 "intermod.m"
        MR_Word transform_hlds__intermod__V_119_119;

#line 1471 "intermod.m"
        {
#line 1471 "intermod.m"
          transform_hlds__intermod__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1471 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 1471 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_119_119, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 1471 "intermod.m"
        }
#line 1471 "intermod.m"
        {
#line 1471 "intermod.m"
          transform_hlds__intermod__ReserveItemPragma_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1471 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1471 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 1) = ((MR_Box) (transform_hlds__intermod__V_119_119));
#line 1471 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1471 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 3) = ((MR_Box) ((MR_Integer) -1));
#line 1471 "intermod.m"
        }
#line 1473 "intermod.m"
        {
#line 1473 "intermod.m"
          transform_hlds__intermod__ReserveItem_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1473 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ReserveItem_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1473 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ReserveItem_70, 1) = ((MR_Box) (transform_hlds__intermod__ReserveItemPragma_69));
#line 1473 "intermod.m"
        }
#line 1474 "intermod.m"
        {
#line 1474 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ReserveItem_70);
        }
#line 1472 "intermod.m"
      }
#line 1475 "intermod.m"
    else
#line 1474 "intermod.m"
      {
#line 1474 "intermod.m"
      }
#line 1479 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1)));
#line 1479 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1479 "intermod.m"
      {
#line 1479 "intermod.m"
        transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1479 "intermod.m"
        transform_hlds__intermod__ConsTagVals_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1479 "intermod.m"
        transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1479 "intermod.m"
        transform_hlds__intermod__DuTypeKind_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1479 "intermod.m"
        transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1479 "intermod.m"
        transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1479 "intermod.m"
        transform_hlds__intermod__V_77_77 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1479 "intermod.m"
        transform_hlds__intermod__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1479 "intermod.m"
        transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1480 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__DuTypeKind_74)) == (MR_mktag((MR_Integer) 1)));
#line 1480 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1480 "intermod.m"
          transform_hlds__intermod__Lang_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__DuTypeKind_74, (MR_Integer) 0)));
#line 1479 "intermod.m"
      }
#line 1489 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1483 "intermod.m"
      {
#line 1483 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignEnumVals_81;
#line 1483 "intermod.m"
        MR_Word transform_hlds__intermod__FEInfo_82;
#line 1483 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignPragma_83;
#line 1483 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignItemPragma_84;
#line 1483 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignItem_85;
#line 1482 "intermod.m"
        MR_Box transform_hlds__intermod__conv1_ForeignEnumVals_81;

#line 1482 "intermod.m"
        {
#line 1482 "intermod.m"
          mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[4], (MR_Word) &transform_hlds__intermod_scalar_common_2[15], transform_hlds__intermod__ConsTagVals_72, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__intermod__conv1_ForeignEnumVals_81);
        }
#line 1482 "intermod.m"
        transform_hlds__intermod__ForeignEnumVals_81 = ((MR_Word) transform_hlds__intermod__conv1_ForeignEnumVals_81);
#line 1484 "intermod.m"
        {
#line 1484 "intermod.m"
          transform_hlds__intermod__FEInfo_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1484 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 0) = ((MR_Box) (transform_hlds__intermod__Lang_80));
#line 1484 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 1484 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 2) = ((MR_Box) (transform_hlds__intermod__ForeignEnumVals_81));
#line 1484 "intermod.m"
        }
#line 1485 "intermod.m"
        {
#line 1485 "intermod.m"
          transform_hlds__intermod__ForeignPragma_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1485 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignPragma_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1485 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignPragma_83, 1) = ((MR_Box) (transform_hlds__intermod__FEInfo_82));
#line 1485 "intermod.m"
        }
#line 1486 "intermod.m"
        {
#line 1486 "intermod.m"
          transform_hlds__intermod__ForeignItemPragma_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1486 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1486 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 1) = ((MR_Box) (transform_hlds__intermod__ForeignPragma_83));
#line 1486 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1486 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 3) = ((MR_Box) ((MR_Integer) -1));
#line 1486 "intermod.m"
        }
#line 1487 "intermod.m"
        {
#line 1487 "intermod.m"
          transform_hlds__intermod__ForeignItem_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1487 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignItem_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1487 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignItem_85, 1) = ((MR_Box) (transform_hlds__intermod__ForeignItemPragma_84));
#line 1487 "intermod.m"
        }
#line 1488 "intermod.m"
        {
#line 1488 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ForeignItem_85);
#line 1488 "intermod.m"
          return;
        }
#line 1483 "intermod.m"
      }
#line 1489 "intermod.m"
    else
#line 1488 "intermod.m"
      {
#line 1488 "intermod.m"
      }
#line 1361 "intermod.m"
  }
#line 1358 "intermod.m"
}

#line 1338 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modules_3_p_0(
#line 1338 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1)
#line 1338 "intermod.m"
{
#line 1340 "intermod.m"
  while (MR_TRUE)
#line 1340 "intermod.m"
    {
#line 1340 "intermod.m"
      /* tailcall optimized into a loop */
#line 1340 "intermod.m"
      {
#line 1340 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1340 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1340 "intermod.m"
          {
#line 1340 "intermod.m"
          }
#line 1340 "intermod.m"
        else
#line 1341 "intermod.m"
          {
#line 1341 "intermod.m"
            MR_Word transform_hlds__intermod__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 1341 "intermod.m"
            MR_Word transform_hlds__intermod__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));

#line 1342 "intermod.m"
            {
#line 1342 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__intermod__Module_7);
            }
#line 1346 "intermod.m"
            if ((transform_hlds__intermod__Rest_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1344 "intermod.m"
              {
#line 1345 "intermod.m"
                {
#line 1345 "intermod.m"
                  mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1345 "intermod.m"
                  return;
                }
#line 1344 "intermod.m"
              }
#line 1346 "intermod.m"
            else
#line 1347 "intermod.m"
              {
#line 1347 "intermod.m"
                MR_Word transform_hlds__intermod__Module_23;
#line 1347 "intermod.m"
                MR_Word transform_hlds__intermod__Rest_24;

#line 1348 "intermod.m"
                {
#line 1348 "intermod.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1341 "intermod.m"
                transform_hlds__intermod__Module_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Rest_8, (MR_Integer) 0)));
#line 1341 "intermod.m"
                transform_hlds__intermod__Rest_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Rest_8, (MR_Integer) 1)));
#line 1342 "intermod.m"
                {
#line 1342 "intermod.m"
                  parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__intermod__Module_23);
                }
#line 1346 "intermod.m"
                if ((transform_hlds__intermod__Rest_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1344 "intermod.m"
                  {
#line 1345 "intermod.m"
                    {
#line 1345 "intermod.m"
                      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1345 "intermod.m"
                      return;
                    }
#line 1344 "intermod.m"
                  }
#line 1346 "intermod.m"
                else
#line 1347 "intermod.m"
                  {
#line 1348 "intermod.m"
                    {
#line 1348 "intermod.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 1349 "intermod.m"
                    /* direct tailcall eliminated */
#line 1349 "intermod.m"
                    {
#line 1349 "intermod.m"
                      MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__Rest_24;

#line 1349 "intermod.m"
                      transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 1349 "intermod.m"
                    }
#line 1349 "intermod.m"
                    continue;
#line 1347 "intermod.m"
                  }
#line 1347 "intermod.m"
              }
#line 1341 "intermod.m"
          }
#line 1340 "intermod.m"
      }
#line 1340 "intermod.m"
      break;
#line 1340 "intermod.m"
    }
#line 1338 "intermod.m"
}

#line 1326 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_2(
#line 1326 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1326 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1326 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1326 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1326 "intermod.m"
{
#line 1326 "intermod.m"
  {
#line 1326 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1326 "intermod.m"
    {
#line 1326 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__write_intermod_info_body__1326__1_3_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1326 "intermod.m"
      return;
    }
#line 1326 "intermod.m"
  }
#line 1326 "intermod.m"
}

#line 1356 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_1(
#line 1356 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1356 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1356 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1356 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1356 "intermod.m"
{
#line 1356 "intermod.m"
  {
#line 1356 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1356 "intermod.m"
    {
#line 1356 "intermod.m"
      transform_hlds__intermod__intermod_write_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1356 "intermod.m"
      return;
    }
#line 1356 "intermod.m"
  }
#line 1356 "intermod.m"
}

#line 1283 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0(
#line 1283 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4)
#line 1283 "intermod.m"
{
#line 1285 "intermod.m"
  {
#line 1285 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_70_70 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__Preds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__Types_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__WriteHeader_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__Preds_15;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls_16;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__Modules0_17;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__Modules_18;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_21;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfo0_22;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo0_23;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_24;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfo_25;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfoForPreds_26;
#line 1285 "intermod.m"
    MR_Word transform_hlds__intermod__V_79_79;
#line 1286 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 1286 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 1286 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 1309 "intermod.m"
    MR_String transform_hlds__intermod__V_56_56;
#line 1309 "intermod.m"
    MR_String transform_hlds__intermod__V_57_57;
#line 1309 "intermod.m"
    MR_Word transform_hlds__intermod__V_58_58;
#line 1309 "intermod.m"
    MR_Word transform_hlds__intermod__V_59_59;
#line 1311 "intermod.m"
    MR_String transform_hlds__intermod__V_60_60;
#line 1311 "intermod.m"
    MR_String transform_hlds__intermod__V_61_61;
#line 1311 "intermod.m"
    MR_Word transform_hlds__intermod__V_62_62;
#line 1311 "intermod.m"
    MR_Word transform_hlds__intermod__V_63_63;
#line 1311 "intermod.m"
    MR_Word transform_hlds__intermod__V_64_64;
#line 1356 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_40_40;
#line 1320 "intermod.m"
    MR_String transform_hlds__intermod__V_66_66;
#line 1320 "intermod.m"
    MR_Word transform_hlds__intermod__V_67_67;
#line 1320 "intermod.m"
    MR_Word transform_hlds__intermod__V_68_68;
#line 1320 "intermod.m"
    MR_Word transform_hlds__intermod__V_69_69;
#line 1320 "intermod.m"
    MR_String transform_hlds__intermod__V_65_65;

#line 1288 "intermod.m"
    {
#line 1288 "intermod.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_70_70, transform_hlds__intermod__Preds0_7, &transform_hlds__intermod__Preds_15);
    }
#line 1289 "intermod.m"
    {
#line 1289 "intermod.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_70_70, transform_hlds__intermod__PredDecls0_8, &transform_hlds__intermod__PredDecls_16);
    }
#line 1291 "intermod.m"
    {
#line 1291 "intermod.m"
      hlds__hlds_module__module_info_get_imported_module_specifiers_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__Modules0_17);
    }
#line 1292 "intermod.m"
    {
#line 1292 "intermod.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, transform_hlds__intermod__Modules0_17, &transform_hlds__intermod__Modules_18);
    }
#line 1299 "intermod.m"
    if ((transform_hlds__intermod__Modules_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1300 "intermod.m"
      {
#line 1300 "intermod.m"
      }
#line 1299 "intermod.m"
    else
#line 1294 "intermod.m"
      {
#line 1297 "intermod.m"
        {
#line 1297 "intermod.m"
          mercury__io__write_string_3_p_0((MR_String) ":- use_module ");
        }
#line 1298 "intermod.m"
        {
#line 1298 "intermod.m"
          transform_hlds__intermod__intermod_write_modules_3_p_0(transform_hlds__intermod__Modules_18);
        }
#line 1294 "intermod.m"
      }
#line 1303 "intermod.m"
    {
#line 1303 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__Globals_21);
    }
#line 1304 "intermod.m"
    {
#line 1304 "intermod.m"
      transform_hlds__intermod__OutInfo0_22 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_1_f_0(transform_hlds__intermod__Globals_21);
    }
#line 1309 "intermod.m"
    transform_hlds__intermod__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 0)));
#line 1309 "intermod.m"
    transform_hlds__intermod__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 1)));
#line 1309 "intermod.m"
    transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 2)));
#line 1309 "intermod.m"
    transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 3)));
#line 1309 "intermod.m"
    transform_hlds__intermod__MercInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 4)));
#line 1310 "intermod.m"
    {
#line 1310 "intermod.m"
      transform_hlds__intermod__MercInfo_24 = parse_tree__mercury_to_mercury__merc_out_info_disable_line_numbers_1_f_0(transform_hlds__intermod__MercInfo0_23);
    }
#line 1311 "intermod.m"
    transform_hlds__intermod__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 0)));
#line 1311 "intermod.m"
    transform_hlds__intermod__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 1)));
#line 1311 "intermod.m"
    transform_hlds__intermod__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 2)));
#line 1311 "intermod.m"
    transform_hlds__intermod__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 3)));
#line 1311 "intermod.m"
    transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 4)));
#line 1311 "intermod.m"
    {
#line 1311 "intermod.m"
      transform_hlds__intermod__OutInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1311 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 0) = ((MR_Box) (transform_hlds__intermod__V_60_60));
#line 1311 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 1) = ((MR_Box) (transform_hlds__intermod__V_61_61));
#line 1311 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 2) = ((MR_Box) (transform_hlds__intermod__V_62_62));
#line 1311 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 3) = ((MR_Box) (transform_hlds__intermod__V_63_63));
#line 1311 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 4) = ((MR_Box) (transform_hlds__intermod__MercInfo_24));
#line 1311 "intermod.m"
    }
#line 1356 "intermod.m"
    {
#line 1356 "intermod.m"
      transform_hlds__intermod__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1356 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_79_79, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[2]));
#line 1356 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_79_79, 1) = ((MR_Box) (transform_hlds__intermod__write_intermod_info_body_3_p_0_1));
#line 1356 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1356 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_79_79, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_25));
#line 1356 "intermod.m"
    }
#line 1356 "intermod.m"
    {
#line 1356 "intermod.m"
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__intermod_scalar_common_2[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_79_79, transform_hlds__intermod__Types_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_40_40);
    }
#line 1314 "intermod.m"
    {
#line 1314 "intermod.m"
      transform_hlds__intermod__intermod_write_insts_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1315 "intermod.m"
    {
#line 1315 "intermod.m"
      transform_hlds__intermod__intermod_write_modes_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1316 "intermod.m"
    {
#line 1316 "intermod.m"
      transform_hlds__intermod__intermod_write_classes_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1317 "intermod.m"
    {
#line 1317 "intermod.m"
      transform_hlds__intermod__intermod_write_instances_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__Instances_9);
    }
#line 1320 "intermod.m"
    transform_hlds__intermod__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 0)));
#line 1320 "intermod.m"
    transform_hlds__intermod__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 1)));
#line 1320 "intermod.m"
    transform_hlds__intermod__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 2)));
#line 1320 "intermod.m"
    transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 3)));
#line 1320 "intermod.m"
    transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 4)));
#line 1320 "intermod.m"
    {
#line 1320 "intermod.m"
      transform_hlds__intermod__OutInfoForPreds_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1320 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 0) = ((MR_Box) ((MR_String) ""));
#line 1320 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 1) = ((MR_Box) (transform_hlds__intermod__V_66_66));
#line 1320 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 2) = ((MR_Box) (transform_hlds__intermod__V_67_67));
#line 1320 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 3) = ((MR_Box) (transform_hlds__intermod__V_68_68));
#line 1320 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 4) = ((MR_Box) (transform_hlds__intermod__V_69_69));
#line 1320 "intermod.m"
    }
#line 1332 "intermod.m"
    if ((transform_hlds__intermod__WriteHeader_12 == (MR_Integer) 0))
#line 1333 "intermod.m"
      {
#line 1333 "intermod.m"
      }
#line 1332 "intermod.m"
    else
#line 1322 "intermod.m"
      {
#line 1322 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_72_72;
#line 1322 "intermod.m"
        MR_Word transform_hlds__intermod__RevForeignImports_27;
#line 1322 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignImports_28;
#line 1326 "intermod.m"
        MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_IO_47_47;

#line 1323 "intermod.m"
        {
#line 1323 "intermod.m"
          hlds__hlds_module__module_info_get_foreign_import_module_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__RevForeignImports_27);
        }
#line 12534 "transform_hlds.intermod.c"
        transform_hlds__intermod__TypeCtorInfo_72_72 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 1324 "intermod.m"
        {
#line 1324 "intermod.m"
          transform_hlds__intermod__ForeignImports_28 = mercury__list__reverse_1_f_0(transform_hlds__intermod__TypeCtorInfo_72_72, transform_hlds__intermod__RevForeignImports_27);
        }
#line 1326 "intermod.m"
        {
#line 1326 "intermod.m"
          mercury__list__foldl_4_p_2(transform_hlds__intermod__TypeCtorInfo_72_72, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[14], transform_hlds__intermod__ForeignImports_28, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv1_STATE_VARIABLE_IO_47_47);
        }
#line 1322 "intermod.m"
      }
#line 1335 "intermod.m"
    {
#line 1335 "intermod.m"
      transform_hlds__intermod__intermod_write_pred_decls_4_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__PredDecls_16);
    }
#line 1336 "intermod.m"
    {
#line 1336 "intermod.m"
      transform_hlds__intermod__intermod_write_preds_5_p_0(transform_hlds__intermod__OutInfoForPreds_26, transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__Preds_15);
#line 1336 "intermod.m"
      return;
    }
#line 1285 "intermod.m"
  }
#line 1283 "intermod.m"
}

#line 1271 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_1(
#line 1271 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1271 "intermod.m"
{
#line 1271 "intermod.m"
  {
#line 1271 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1271 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0, 1);
#line 1271 "intermod.m"
  }
#line 1271 "intermod.m"
}

#line 1271 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_3(
#line 1271 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1271 "intermod.m"
{
#line 1271 "intermod.m"
  {
#line 1271 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1271 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23 = ((MR_Word) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23);
#line 1271 "intermod.m"
    {
#line 1271 "intermod.m"
      transform_hlds__intermod__write_intermod_info_3_p_0_2(transform_hlds__intermod__env_ptr);
#line 1271 "intermod.m"
      return;
    }
#line 1271 "intermod.m"
  }
#line 1271 "intermod.m"
}

#line 1271 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_2(
#line 1271 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1271 "intermod.m"
{
#line 1271 "intermod.m"
  {
#line 1271 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1271 "intermod.m"
    {
#line 1271 "intermod.m"
      MR_Word transform_hlds__intermod___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23, (MR_Integer) 0)));

#line 1271 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23, (MR_Integer) 1)));
#line 1272 "intermod.m"
      {
#line 1272 "intermod.m"
        hlds__hlds_data__get_type_defn_status_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15);
      }
#line 1274 "intermod.m"
      if (((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1273 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1274 "intermod.m"
      else
#line 1274 "intermod.m"
        if (((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 1274 "intermod.m"
          (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1274 "intermod.m"
        else
#line 1274 "intermod.m"
          (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_FALSE;
#line 1274 "intermod.m"
      if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1274 "intermod.m"
        {
#line 1274 "intermod.m"
          transform_hlds__intermod__write_intermod_info_3_p_0_1(transform_hlds__intermod__env_ptr);
#line 1274 "intermod.m"
          return;
        }
#line 1271 "intermod.m"
    }
#line 1271 "intermod.m"
  }
#line 1271 "intermod.m"
}

#line 1271 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_4(
#line 1271 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1271 "intermod.m"
{
#line 1271 "intermod.m"
  {
#line 1271 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1271 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0) == 0)
#line 1271 "intermod.m"
      {
#line 1271 "intermod.m"
        {
#line 1271 "intermod.m"
          {
#line 1271 "intermod.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__intermod_scalar_common_2[3], &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12, transform_hlds__intermod__write_intermod_info_3_p_0_3, transform_hlds__intermod__env_ptr);
          }
#line 1271 "intermod.m"
        }
#line 1271 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_FALSE;
#line 1271 "intermod.m"
      }
#line 1271 "intermod.m"
    else
#line 1271 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1271 "intermod.m"
  }
#line 1271 "intermod.m"
}

#line 1249 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0(
#line 1249 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4)
#line 1249 "intermod.m"
{
#line 1249 "intermod.m"
  {
#line 1249 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s transform_hlds__intermod__env;

#line 1251 "intermod.m"
    {
#line 1251 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 1251 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleName_7;
#line 1251 "intermod.m"
      MR_Word transform_hlds__intermod__Preds_8;
#line 1251 "intermod.m"
      MR_Word transform_hlds__intermod__PredDecls_9;
#line 1251 "intermod.m"
      MR_Word transform_hlds__intermod__Instances_10;
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_37_37;
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_40_40;
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_41_41;
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_42_42;
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_43_43;
#line 2159 "intermod.m"
      MR_Word transform_hlds__intermod__V_44_44;
#line 1265 "intermod.m"
      MR_Word transform_hlds__intermod__TypeCtorInfo_25_25;
#line 1265 "intermod.m"
      MR_Word transform_hlds__intermod__TypeTable_11;

#line 1253 "intermod.m"
      {
#line 1253 "intermod.m"
        hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_7);
      }
#line 1254 "intermod.m"
      {
#line 1254 "intermod.m"
        mercury__io__write_string_3_p_0((MR_String) ":- module ");
      }
#line 1255 "intermod.m"
      {
#line 1255 "intermod.m"
        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__intermod__ModuleName_7);
      }
#line 1256 "intermod.m"
      {
#line 1256 "intermod.m"
        mercury__io__write_string_3_p_0((MR_String) ".\n");
      }
#line 2159 "intermod.m"
      transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 2159 "intermod.m"
      transform_hlds__intermod__Preds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 2159 "intermod.m"
      transform_hlds__intermod__PredDecls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 2159 "intermod.m"
      transform_hlds__intermod__Instances_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 2159 "intermod.m"
      transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 2159 "intermod.m"
      transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 2159 "intermod.m"
      transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 2159 "intermod.m"
      transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 2159 "intermod.m"
      transform_hlds__intermod__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 12797 "transform_hlds.intermod.c"
      transform_hlds__intermod__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1265 "intermod.m"
      {
#line 1265 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = mercury__set__empty_1_p_0(transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__Preds_8);
      }
#line 1265 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1265 "intermod.m"
        {
#line 1266 "intermod.m"
          {
#line 1266 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = mercury__set__empty_1_p_0(transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__PredDecls_9);
          }
#line 1265 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1265 "intermod.m"
            {
#line 1267 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = (transform_hlds__intermod__Instances_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1265 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1265 "intermod.m"
                {
#line 1268 "intermod.m"
                  {
#line 1268 "intermod.m"
                    hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__TypeTable_11);
                  }
#line 1269 "intermod.m"
                  {
#line 1269 "intermod.m"
                    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(transform_hlds__intermod__TypeTable_11, &(transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12);
                  }
#line 1271 "intermod.m"
                  {
#line 1271 "intermod.m"
                    transform_hlds__intermod__write_intermod_info_3_p_0_4(&transform_hlds__intermod__env);
                  }
#line 1270 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded);
#line 1265 "intermod.m"
                }
#line 1265 "intermod.m"
            }
#line 1265 "intermod.m"
        }
#line 1279 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1274 "intermod.m"
        {
#line 1274 "intermod.m"
        }
#line 1279 "intermod.m"
      else
#line 1280 "intermod.m"
        {
#line 1280 "intermod.m"
          transform_hlds__intermod__write_intermod_info_body_3_p_0(transform_hlds__intermod__IntermodInfo_4);
#line 1280 "intermod.m"
          return;
        }
#line 1251 "intermod.m"
    }
#line 1249 "intermod.m"
  }
#line 1249 "intermod.m"
}

#line 1217 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
#line 1217 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1217 "intermod.m"
  MR_Word transform_hlds__intermod__SpecialId_2,
#line 1217 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_3,
#line 1217 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 1217 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__5_5,
#line 1217 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1217 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7)
#line 1217 "intermod.m"
{
#line 1221 "intermod.m"
  {
#line 1221 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1221 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1221 "intermod.m"
      {
#line 1221 "intermod.m"
        *transform_hlds__intermod__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1221 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0_6;
#line 1221 "intermod.m"
      }
#line 1221 "intermod.m"
    else
#line 1223 "intermod.m"
      {
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__Pred0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__Pred_18;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__SpecialPreds_20;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__UnifyPredId_21;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__UnifyPredInfo_22;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__TVarSet_23;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__ExistQVars_24;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__ArgTypes_25;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__HeadTypeParams_26;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__Markers0_27;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__Markers_28;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__Context_29;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__UserEqPredId_30;
#line 1223 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34;
#line 1225 "intermod.m"
        MR_Box transform_hlds__intermod__conv0_UnifyPredId_21;
#line 626 "intermod.m"
        MR_Word transform_hlds__intermod__V_45_45;

#line 1224 "intermod.m"
        {
#line 1224 "intermod.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_20);
        }
#line 1225 "intermod.m"
        {
#line 1225 "intermod.m"
          transform_hlds__intermod__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, 0) = ((MR_Box) (transform_hlds__intermod__SpecialId_2));
#line 1225 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_3));
#line 1225 "intermod.m"
        }
#line 1225 "intermod.m"
        {
#line 1225 "intermod.m"
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[2], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_20, ((MR_Box) (transform_hlds__intermod__V_34_34)), &transform_hlds__intermod__conv0_UnifyPredId_21);
        }
#line 1225 "intermod.m"
        transform_hlds__intermod__UnifyPredId_21 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_21);
#line 1226 "intermod.m"
        {
#line 1226 "intermod.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_21, &transform_hlds__intermod__UnifyPredInfo_22);
        }
#line 1227 "intermod.m"
        {
#line 1227 "intermod.m"
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__TVarSet_23, &transform_hlds__intermod__ExistQVars_24, &transform_hlds__intermod__ArgTypes_25);
        }
#line 1228 "intermod.m"
        {
#line 1228 "intermod.m"
          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__HeadTypeParams_26);
        }
#line 1229 "intermod.m"
        {
#line 1229 "intermod.m"
          hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_27);
        }
#line 1230 "intermod.m"
        {
#line 1230 "intermod.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_27, &transform_hlds__intermod__Markers_28);
        }
#line 1231 "intermod.m"
        {
#line 1231 "intermod.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__Context_29);
        }
#line 1232 "intermod.m"
        {
#line 1232 "intermod.m"
          hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_28, transform_hlds__intermod__TVarSet_23, transform_hlds__intermod__ExistQVars_24, transform_hlds__intermod__ArgTypes_25, transform_hlds__intermod__HeadTypeParams_26, transform_hlds__intermod__Context_29, transform_hlds__intermod__Pred0_17, &transform_hlds__intermod__Pred_18, &transform_hlds__intermod__UserEqPredId_30);
        }
#line 1223 "intermod.m"
        {
#line 1223 "intermod.m"
          MR_Word base;
#line 1223 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "intermod.m"
          *transform_hlds__intermod__HeadVar__5_5 = base;
#line 1223 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Pred_18));
#line 1223 "intermod.m"
        }
#line 626 "intermod.m"
        {
#line 626 "intermod.m"
          transform_hlds__intermod__V_45_45 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 626 "intermod.m"
        {
#line 626 "intermod.m"
          transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_30, transform_hlds__intermod__V_45_45);
        }
#line 631 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 630 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0_6;
#line 631 "intermod.m"
        else
#line 632 "intermod.m"
          {
#line 632 "intermod.m"
            MR_Word transform_hlds__intermod__V_47_47;

#line 632 "intermod.m"
            {
#line 632 "intermod.m"
              transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_30, &transform_hlds__intermod__V_47_47, transform_hlds__intermod__STATE_VARIABLE_Info_0_6, transform_hlds__intermod__STATE_VARIABLE_Info_7);
            }
#line 632 "intermod.m"
          }
#line 1223 "intermod.m"
      }
#line 1221 "intermod.m"
  }
#line 1217 "intermod.m"
}

#line 1200 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
#line 1200 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1200 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1200 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1200 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1200 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1200 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6)
#line 1200 "intermod.m"
{
#line 1204 "intermod.m"
  {
#line 1204 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1204 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1204 "intermod.m"
      {
#line 1204 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1204 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1204 "intermod.m"
      }
#line 1204 "intermod.m"
    else
#line 1204 "intermod.m"
      {
#line 1204 "intermod.m"
        MR_Word transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));

#line 1204 "intermod.m"
        if (((MR_tag((MR_Word) transform_hlds__intermod__V_35_35)) == (MR_mktag((MR_Integer) 1))))
#line 1205 "intermod.m"
          {
#line 1205 "intermod.m"
            *transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__3_3;
#line 1205 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1205 "intermod.m"
          }
#line 1204 "intermod.m"
        else
#line 1210 "intermod.m"
          {
#line 1210 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEq0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_35_35, (MR_Integer) 0)));
#line 1210 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserCompare0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_35_35, (MR_Integer) 1)));
#line 1210 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEq_24;
#line 1210 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserCompare_25;
#line 1210 "intermod.m"
            MR_Word transform_hlds__intermod__V_30_30;
#line 1210 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_32_32;

#line 1221 "intermod.m"
            if ((transform_hlds__intermod__MaybeUserEq0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1221 "intermod.m"
              {
#line 1221 "intermod.m"
                transform_hlds__intermod__MaybeUserEq_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1221 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_32_32 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1221 "intermod.m"
              }
#line 1221 "intermod.m"
            else
#line 1223 "intermod.m"
              {
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__Pred0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq0_22, (MR_Integer) 0)));
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__Pred_46;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__SpecialPreds_48;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__UnifyPredId_49;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__UnifyPredInfo_50;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__TVarSet_51;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__ExistQVars_52;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__ArgTypes_53;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__HeadTypeParams_54;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__Markers0_55;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__Markers_56;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__Context_57;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__UserEqPredId_58;
#line 1223 "intermod.m"
                MR_Word transform_hlds__intermod__V_62_62;
#line 1225 "intermod.m"
                MR_Box transform_hlds__intermod__conv0_UnifyPredId_49;
#line 626 "intermod.m"
                MR_Word transform_hlds__intermod__V_73_73;

#line 1224 "intermod.m"
                {
#line 1224 "intermod.m"
                  hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_48);
                }
#line 1225 "intermod.m"
                {
#line 1225 "intermod.m"
                  transform_hlds__intermod__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1225 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_2));
#line 1225 "intermod.m"
                }
#line 1225 "intermod.m"
                {
#line 1225 "intermod.m"
                  mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[2], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_48, ((MR_Box) (transform_hlds__intermod__V_62_62)), &transform_hlds__intermod__conv0_UnifyPredId_49);
                }
#line 1225 "intermod.m"
                transform_hlds__intermod__UnifyPredId_49 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_49);
#line 1226 "intermod.m"
                {
#line 1226 "intermod.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_49, &transform_hlds__intermod__UnifyPredInfo_50);
                }
#line 1227 "intermod.m"
                {
#line 1227 "intermod.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__TVarSet_51, &transform_hlds__intermod__ExistQVars_52, &transform_hlds__intermod__ArgTypes_53);
                }
#line 1228 "intermod.m"
                {
#line 1228 "intermod.m"
                  hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__HeadTypeParams_54);
                }
#line 1229 "intermod.m"
                {
#line 1229 "intermod.m"
                  hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_55);
                }
#line 1230 "intermod.m"
                {
#line 1230 "intermod.m"
                  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_55, &transform_hlds__intermod__Markers_56);
                }
#line 1231 "intermod.m"
                {
#line 1231 "intermod.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__Context_57);
                }
#line 1232 "intermod.m"
                {
#line 1232 "intermod.m"
                  hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_56, transform_hlds__intermod__TVarSet_51, transform_hlds__intermod__ExistQVars_52, transform_hlds__intermod__ArgTypes_53, transform_hlds__intermod__HeadTypeParams_54, transform_hlds__intermod__Context_57, transform_hlds__intermod__Pred0_45, &transform_hlds__intermod__Pred_46, &transform_hlds__intermod__UserEqPredId_58);
                }
#line 1223 "intermod.m"
                {
#line 1223 "intermod.m"
                  transform_hlds__intermod__MaybeUserEq_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq_24, 0) = ((MR_Box) (transform_hlds__intermod__Pred_46));
#line 1223 "intermod.m"
                }
#line 626 "intermod.m"
                {
#line 626 "intermod.m"
                  transform_hlds__intermod__V_73_73 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 626 "intermod.m"
                {
#line 626 "intermod.m"
                  transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_58, transform_hlds__intermod__V_73_73);
                }
#line 631 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 630 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_Info_32_32 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 631 "intermod.m"
                else
#line 632 "intermod.m"
                  {
#line 632 "intermod.m"
                    MR_Word transform_hlds__intermod__V_75_75;

#line 632 "intermod.m"
                    {
#line 632 "intermod.m"
                      transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_58, &transform_hlds__intermod__V_75_75, transform_hlds__intermod__STATE_VARIABLE_Info_0_5, &transform_hlds__intermod__STATE_VARIABLE_Info_32_32);
                    }
#line 632 "intermod.m"
                  }
#line 1223 "intermod.m"
              }
#line 1213 "intermod.m"
            {
#line 1213 "intermod.m"
              transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(transform_hlds__intermod__ModuleInfo_1, (MR_Integer) 2, transform_hlds__intermod__TypeCtor_2, transform_hlds__intermod__MaybeUserCompare0_23, &transform_hlds__intermod__MaybeUserCompare_25, transform_hlds__intermod__STATE_VARIABLE_Info_32_32, transform_hlds__intermod__STATE_VARIABLE_Info_6);
            }
#line 1210 "intermod.m"
            {
#line 1210 "intermod.m"
              transform_hlds__intermod__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1210 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, 0) = ((MR_Box) (transform_hlds__intermod__MaybeUserEq_24));
#line 1210 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserCompare_25));
#line 1210 "intermod.m"
            }
#line 1210 "intermod.m"
            {
#line 1210 "intermod.m"
              MR_Word base;
#line 1210 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "intermod.m"
              *transform_hlds__intermod__HeadVar__4_4 = base;
#line 1210 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_30_30));
#line 1210 "intermod.m"
            }
#line 1210 "intermod.m"
          }
#line 1204 "intermod.m"
      }
#line 1204 "intermod.m"
  }
#line 1200 "intermod.m"
}

#line 1101 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
#line 1101 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_7,
#line 1101 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_8,
#line 1101 "intermod.m"
  MR_Word transform_hlds__intermod__ForeignTypeBody0_9,
#line 1101 "intermod.m"
  MR_Word * transform_hlds__intermod__ForeignTypeBody_10,
#line 1101 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 1101 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25)
#line 1101 "intermod.m"
{
#line 1106 "intermod.m"
  {
#line 1106 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 0)));
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 1)));
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 2)));
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 3)));
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 4)));
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_17;
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__Target_18;
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC_19;
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL_20;
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp_21;
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava_22;
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang_23;
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_26_26;
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_27_27;
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_28_28;
#line 1106 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_29_29;

#line 1109 "intermod.m"
    {
#line 1109 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_7, &transform_hlds__intermod__Globals_17);
    }
#line 1110 "intermod.m"
    {
#line 1110 "intermod.m"
      libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_17, &transform_hlds__intermod__Target_18);
    }
#line 1126 "intermod.m"
    if ((((((transform_hlds__intermod__Target_18 == (MR_Integer) 0)) || ((transform_hlds__intermod__Target_18 == (MR_Integer) 5)))) || ((transform_hlds__intermod__Target_18 == (MR_Integer) 4))))
#line 1124 "intermod.m"
      {
#line 1124 "intermod.m"
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeC0_13, &transform_hlds__intermod__MaybeC_19, transform_hlds__intermod__STATE_VARIABLE_Info_0_24, &transform_hlds__intermod__STATE_VARIABLE_Info_26_26);
      }
#line 1126 "intermod.m"
    else
#line 1130 "intermod.m"
      {
#line 1131 "intermod.m"
        transform_hlds__intermod__MaybeC_19 = transform_hlds__intermod__MaybeC0_13;
#line 1131 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_Info_26_26 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 1130 "intermod.m"
      }
#line 1137 "intermod.m"
    if ((transform_hlds__intermod__Target_18 == (MR_Integer) 1))
#line 1135 "intermod.m"
      {
#line 1135 "intermod.m"
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeIL0_12, &transform_hlds__intermod__MaybeIL_20, transform_hlds__intermod__STATE_VARIABLE_Info_26_26, &transform_hlds__intermod__STATE_VARIABLE_Info_27_27);
      }
#line 1137 "intermod.m"
    else
#line 1143 "intermod.m"
      {
#line 1144 "intermod.m"
        transform_hlds__intermod__MaybeIL_20 = transform_hlds__intermod__MaybeIL0_12;
#line 1144 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_Info_27_27 = transform_hlds__intermod__STATE_VARIABLE_Info_26_26;
#line 1143 "intermod.m"
      }
#line 1150 "intermod.m"
    if ((transform_hlds__intermod__Target_18 == (MR_Integer) 2))
#line 1148 "intermod.m"
      {
#line 1148 "intermod.m"
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeCSharp0_15, &transform_hlds__intermod__MaybeCSharp_21, transform_hlds__intermod__STATE_VARIABLE_Info_27_27, &transform_hlds__intermod__STATE_VARIABLE_Info_28_28);
      }
#line 1150 "intermod.m"
    else
#line 1156 "intermod.m"
      {
#line 1157 "intermod.m"
        transform_hlds__intermod__MaybeCSharp_21 = transform_hlds__intermod__MaybeCSharp0_15;
#line 1157 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_Info_28_28 = transform_hlds__intermod__STATE_VARIABLE_Info_27_27;
#line 1156 "intermod.m"
      }
#line 1163 "intermod.m"
    if ((transform_hlds__intermod__Target_18 == (MR_Integer) 3))
#line 1161 "intermod.m"
      {
#line 1161 "intermod.m"
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeJava0_14, &transform_hlds__intermod__MaybeJava_22, transform_hlds__intermod__STATE_VARIABLE_Info_28_28, &transform_hlds__intermod__STATE_VARIABLE_Info_29_29);
      }
#line 1163 "intermod.m"
    else
#line 1169 "intermod.m"
      {
#line 1170 "intermod.m"
        transform_hlds__intermod__MaybeJava_22 = transform_hlds__intermod__MaybeJava0_14;
#line 1170 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_Info_29_29 = transform_hlds__intermod__STATE_VARIABLE_Info_28_28;
#line 1169 "intermod.m"
      }
#line 1176 "intermod.m"
    if ((transform_hlds__intermod__Target_18 == (MR_Integer) 5))
#line 1174 "intermod.m"
      {
#line 1174 "intermod.m"
        transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeErlang0_16, &transform_hlds__intermod__MaybeErlang_23, transform_hlds__intermod__STATE_VARIABLE_Info_29_29, transform_hlds__intermod__STATE_VARIABLE_Info_25);
      }
#line 1176 "intermod.m"
    else
#line 1182 "intermod.m"
      {
#line 1183 "intermod.m"
        transform_hlds__intermod__MaybeErlang_23 = transform_hlds__intermod__MaybeErlang0_16;
#line 1183 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_29_29;
#line 1182 "intermod.m"
      }
#line 1185 "intermod.m"
    {
#line 1185 "intermod.m"
      MR_Word base;
#line 1185 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1185 "intermod.m"
      *transform_hlds__intermod__ForeignTypeBody_10 = base;
#line 1185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__MaybeIL_20));
#line 1185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__MaybeC_19));
#line 1185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__MaybeJava_22));
#line 1185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__MaybeCSharp_21));
#line 1185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__MaybeErlang_23));
#line 1185 "intermod.m"
    }
#line 1106 "intermod.m"
  }
#line 1101 "intermod.m"
}

#line 1034 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_4_p_0(
#line 1034 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_5,
#line 1034 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_6,
#line 1034 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_33,
#line 1034 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_34)
#line 1034 "intermod.m"
{
#line 1037 "intermod.m"
  {
#line 1037 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1037 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 1037 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_9;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 1239 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_60;
#line 1239 "intermod.m"
    MR_Word transform_hlds__intermod__Name_61;
#line 1239 "intermod.m"
    MR_Word transform_hlds__intermod__V_64_64;
#line 1241 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_62;
#line 1242 "intermod.m"
    MR_String transform_hlds__intermod__V_63_63;

#line 1039 "intermod.m"
    {
#line 1039 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_8, &transform_hlds__intermod__ModuleName_9);
    }
#line 1240 "intermod.m"
    {
#line 1240 "intermod.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__ImportStatus_60);
    }
#line 1241 "intermod.m"
    transform_hlds__intermod__Name_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_5, (MR_Integer) 0)));
#line 1241 "intermod.m"
    transform_hlds__intermod___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_5, (MR_Integer) 1)));
#line 1242 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Name_61)) == (MR_mktag((MR_Integer) 1)));
#line 1242 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1242 "intermod.m"
      {
#line 1242 "intermod.m"
        transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_61, (MR_Integer) 0)));
#line 1242 "intermod.m"
        transform_hlds__intermod__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_61, (MR_Integer) 1)));
#line 1242 "intermod.m"
        {
#line 1242 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_9, transform_hlds__intermod__V_64_64);
        }
#line 1239 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1243 "intermod.m"
          {
#line 1243 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_60);
          }
#line 1242 "intermod.m"
      }
#line 1097 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1041 "intermod.m"
      {
#line 1041 "intermod.m"
        MR_Word transform_hlds__intermod__TypeBody0_10;
#line 1041 "intermod.m"
        MR_Word transform_hlds__intermod__TypeDefn_27;
#line 1041 "intermod.m"
        MR_Word transform_hlds__intermod__Types0_32;
#line 1041 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_39_39;
#line 1041 "intermod.m"
        MR_Word transform_hlds__intermod__V_41_41;
#line 1041 "intermod.m"
        MR_Word transform_hlds__intermod__V_43_43;
#line 2162 "intermod.m"
        MR_Word transform_hlds__intermod__V_89_89;
#line 2162 "intermod.m"
        MR_Word transform_hlds__intermod__V_90_90;
#line 2162 "intermod.m"
        MR_Word transform_hlds__intermod__V_91_91;
#line 2162 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;
#line 2162 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 2162 "intermod.m"
        MR_Word transform_hlds__intermod__V_94_94;
#line 2162 "intermod.m"
        MR_Word transform_hlds__intermod__V_95_95;
#line 2162 "intermod.m"
        MR_Word transform_hlds__intermod__V_96_96;

#line 1041 "intermod.m"
        {
#line 1041 "intermod.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeBody0_10);
        }
#line 1079 "intermod.m"
        if (((MR_tag((MR_Word) transform_hlds__intermod__TypeBody0_10)) == (MR_mktag((MR_Integer) 1))))
#line 1045 "intermod.m"
          {
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 0)));
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__Tags_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 1)));
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__CheaperTagTest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 2)));
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__Enum_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 3)));
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEqComp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 4)));
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeDirectArgCtors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 5)));
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__ReservedTag_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__ReservedAddr_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeForeign0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 7)));
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__Globals_20;
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__Target_21;
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeForeign_24;
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEqComp_25;
#line 1045 "intermod.m"
            MR_Word transform_hlds__intermod__TypeBody_26;
#line 1070 "intermod.m"
            MR_Word transform_hlds__intermod__ForeignTypeBody0_22;
#line 1060 "intermod.m"
            MR_Word transform_hlds__intermod__V_37_37;
#line 1060 "intermod.m"
            MR_Word transform_hlds__intermod__V_47_47;

#line 1046 "intermod.m"
            {
#line 1046 "intermod.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_8, &transform_hlds__intermod__Globals_20);
            }
#line 1047 "intermod.m"
            {
#line 1047 "intermod.m"
              libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_20, &transform_hlds__intermod__Target_21);
            }
#line 1060 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeForeign0_19)) == (MR_mktag((MR_Integer) 1)));
#line 1060 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1060 "intermod.m"
              {
#line 1060 "intermod.m"
                transform_hlds__intermod__ForeignTypeBody0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeForeign0_19, (MR_Integer) 0)));
#line 1061 "intermod.m"
                transform_hlds__intermod__V_37_37 = (MR_Integer) 1;
#line 1061 "intermod.m"
                {
#line 1061 "intermod.m"
                  backend_libs__foreign__have_foreign_type_for_backend_3_p_0(transform_hlds__intermod__Target_21, transform_hlds__intermod__ForeignTypeBody0_22, &transform_hlds__intermod__V_47_47);
                }
#line 1061 "intermod.m"
                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_37_37 == transform_hlds__intermod__V_47_47);
#line 1060 "intermod.m"
              }
#line 1070 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1065 "intermod.m"
              {
#line 1065 "intermod.m"
                MR_Word transform_hlds__intermod__ForeignTypeBody_23;
#line 1065 "intermod.m"
                MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_38_38;
#line 2176 "intermod.m"
                MR_Word transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2176 "intermod.m"
                MR_Word transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2176 "intermod.m"
                MR_Word transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2176 "intermod.m"
                MR_Word transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2176 "intermod.m"
                MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2176 "intermod.m"
                MR_Word transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 2176 "intermod.m"
                MR_Word transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2176 "intermod.m"
                MR_Word transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 2176 "intermod.m"
                MR_Word transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));

#line 2176 "intermod.m"
                {
#line 2176 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2176 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (transform_hlds__intermod__V_68_68));
#line 2176 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 1) = ((MR_Box) (transform_hlds__intermod__V_69_69));
#line 2176 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (transform_hlds__intermod__V_70_70));
#line 2176 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (transform_hlds__intermod__V_71_71));
#line 2176 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (transform_hlds__intermod__V_72_72));
#line 2176 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 5) = ((MR_Box) (transform_hlds__intermod__V_73_73));
#line 2176 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2176 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 7) = ((MR_Box) (transform_hlds__intermod__V_75_75));
#line 2176 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 8) = ((MR_Box) (transform_hlds__intermod__V_76_76));
#line 2176 "intermod.m"
                }
#line 1066 "intermod.m"
                {
#line 1066 "intermod.m"
                  transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__ForeignTypeBody0_22, &transform_hlds__intermod__ForeignTypeBody_23, transform_hlds__intermod__STATE_VARIABLE_Info_38_38, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
                }
#line 1068 "intermod.m"
                {
#line 1068 "intermod.m"
                  transform_hlds__intermod__MaybeForeign_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeForeign_24, 0) = ((MR_Box) (transform_hlds__intermod__ForeignTypeBody_23));
#line 1068 "intermod.m"
                }
#line 1069 "intermod.m"
                transform_hlds__intermod__MaybeUserEqComp_25 = transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1065 "intermod.m"
              }
#line 1070 "intermod.m"
            else
#line 1072 "intermod.m"
              {
#line 1071 "intermod.m"
                {
#line 1071 "intermod.m"
                  transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__MaybeUserEqComp0_15, &transform_hlds__intermod__MaybeUserEqComp_25, transform_hlds__intermod__STATE_VARIABLE_Info_0_33, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
                }
#line 1073 "intermod.m"
                transform_hlds__intermod__MaybeForeign_24 = transform_hlds__intermod__MaybeForeign0_19;
#line 1072 "intermod.m"
              }
#line 1075 "intermod.m"
            {
#line 1075 "intermod.m"
              transform_hlds__intermod__TypeBody_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 0) = ((MR_Box) (transform_hlds__intermod__Ctors_11));
#line 1075 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 1) = ((MR_Box) (transform_hlds__intermod__Tags_12));
#line 1075 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 2) = ((MR_Box) (transform_hlds__intermod__CheaperTagTest_13));
#line 1075 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 3) = ((MR_Box) (transform_hlds__intermod__Enum_14));
#line 1075 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 4) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_25));
#line 1075 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 5) = ((MR_Box) (transform_hlds__intermod__MaybeDirectArgCtors_16));
#line 1075 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 6) = ((MR_Box) ((transform_hlds__intermod__ReservedTag_17 | ((transform_hlds__intermod__ReservedAddr_18 << (MR_Integer) 1)))));
#line 1075 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 7) = ((MR_Box) (transform_hlds__intermod__MaybeForeign_24));
#line 1075 "intermod.m"
            }
#line 1078 "intermod.m"
            {
#line 1078 "intermod.m"
              hlds__hlds_data__set_type_defn_body_3_p_0(transform_hlds__intermod__TypeBody_26, transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeDefn_27);
            }
#line 1045 "intermod.m"
          }
#line 1079 "intermod.m"
        else
#line 1079 "intermod.m"
          if (((MR_tag((MR_Word) transform_hlds__intermod__TypeBody0_10)) == (MR_mktag((MR_Integer) 0))))
#line 1080 "intermod.m"
            {
#line 1080 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_35_35;
#line 1080 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignTypeBody0_44 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__TypeBody0_10), (MR_Integer) 0);
#line 1080 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignTypeBody_45;
#line 1080 "intermod.m"
              MR_Word transform_hlds__intermod__TypeBody_46;
#line 2176 "intermod.m"
              MR_Word transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2176 "intermod.m"
              MR_Word transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2176 "intermod.m"
              MR_Word transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2176 "intermod.m"
              MR_Word transform_hlds__intermod__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2176 "intermod.m"
              MR_Word transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2176 "intermod.m"
              MR_Word transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 2176 "intermod.m"
              MR_Word transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2176 "intermod.m"
              MR_Word transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 2176 "intermod.m"
              MR_Word transform_hlds__intermod__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));

#line 2176 "intermod.m"
              {
#line 2176 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2176 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (transform_hlds__intermod__V_79_79));
#line 2176 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (transform_hlds__intermod__V_80_80));
#line 2176 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (transform_hlds__intermod__V_81_81));
#line 2176 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (transform_hlds__intermod__V_82_82));
#line 2176 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (transform_hlds__intermod__V_83_83));
#line 2176 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (transform_hlds__intermod__V_84_84));
#line 2176 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2176 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (transform_hlds__intermod__V_86_86));
#line 2176 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 8) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2176 "intermod.m"
              }
#line 1084 "intermod.m"
              {
#line 1084 "intermod.m"
                transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__ForeignTypeBody0_44, &transform_hlds__intermod__ForeignTypeBody_45, transform_hlds__intermod__STATE_VARIABLE_Info_35_35, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
              }
#line 1086 "intermod.m"
              transform_hlds__intermod__TypeBody_46 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__ForeignTypeBody_45);
#line 1087 "intermod.m"
              {
#line 1087 "intermod.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(transform_hlds__intermod__TypeBody_46, transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeDefn_27);
              }
#line 1080 "intermod.m"
            }
#line 1079 "intermod.m"
          else
#line 1092 "intermod.m"
            {
#line 1093 "intermod.m"
              transform_hlds__intermod__TypeDefn_27 = transform_hlds__intermod__TypeDefn0_6;
#line 1093 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_39_39 = transform_hlds__intermod__STATE_VARIABLE_Info_0_33;
#line 1092 "intermod.m"
            }
#line 2162 "intermod.m"
        transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 2162 "intermod.m"
        transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 2162 "intermod.m"
        transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 2162 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 2162 "intermod.m"
        transform_hlds__intermod__Types0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 2162 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 2162 "intermod.m"
        transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 2162 "intermod.m"
        transform_hlds__intermod__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 2162 "intermod.m"
        transform_hlds__intermod__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 8)));
#line 1096 "intermod.m"
        {
#line 1096 "intermod.m"
          transform_hlds__intermod__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_43_43, 0) = ((MR_Box) (transform_hlds__intermod__TypeCtor_5));
#line 1096 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_43_43, 1) = ((MR_Box) (transform_hlds__intermod__TypeDefn_27));
#line 1096 "intermod.m"
        }
#line 1096 "intermod.m"
        {
#line 1096 "intermod.m"
          transform_hlds__intermod__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_41_41, 0) = ((MR_Box) (transform_hlds__intermod__V_43_43));
#line 1096 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_41_41, 1) = ((MR_Box) (transform_hlds__intermod__Types0_32));
#line 1096 "intermod.m"
        }
#line 1096 "intermod.m"
        {
#line 1096 "intermod.m"
          transform_hlds__intermod__intermod_info_set_types_3_p_0(transform_hlds__intermod__V_41_41, transform_hlds__intermod__STATE_VARIABLE_Info_39_39, transform_hlds__intermod__STATE_VARIABLE_Info_34);
#line 1096 "intermod.m"
          return;
        }
#line 1041 "intermod.m"
      }
#line 1097 "intermod.m"
    else
#line 1096 "intermod.m"
      *transform_hlds__intermod__STATE_VARIABLE_Info_34 = transform_hlds__intermod__STATE_VARIABLE_Info_0_33;
#line 1037 "intermod.m"
  }
#line 1034 "intermod.m"
}

#line 1032 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0_1(
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1032 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1032 "intermod.m"
{
#line 1032 "intermod.m"
  {
#line 1032 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1032 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34;

#line 1032 "intermod.m"
    {
#line 1032 "intermod.m"
      transform_hlds__intermod__gather_types_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34);
    }
#line 1032 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34));
#line 1032 "intermod.m"
  }
#line 1032 "intermod.m"
}

#line 1027 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0(
#line 1027 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1027 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7)
#line 1027 "intermod.m"
{
#line 1029 "intermod.m"
  {
#line 1029 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1029 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 1029 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable_5;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 1032 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7;

#line 1031 "intermod.m"
    {
#line 1031 "intermod.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__ModuleInfo_4, &transform_hlds__intermod__TypeTable_5);
    }
#line 1032 "intermod.m"
    {
#line 1032 "intermod.m"
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[13], transform_hlds__intermod__TypeTable_5, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_6)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
    }
#line 1032 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_Info_7 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
#line 1029 "intermod.m"
  }
#line 1027 "intermod.m"
}

#line 991 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
#line 991 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 991 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 991 "intermod.m"
{
#line 991 "intermod.m"
  {
#line 991 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 991 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 991 "intermod.m"
    MR_Word transform_hlds__intermod__conv2_HeadVar__2_55;

#line 991 "intermod.m"
    {
#line 991 "intermod.m"
      transform_hlds__intermod__conv2_HeadVar__2_55 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__993__1_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 991 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv2_HeadVar__2_55));
#line 991 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 991 "intermod.m"
  }
#line 991 "intermod.m"
}

#line 978 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
#line 978 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 978 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 978 "intermod.m"
{
#line 978 "intermod.m"
  {
#line 978 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 978 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 978 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_HeadVar__2_51;

#line 978 "intermod.m"
    {
#line 978 "intermod.m"
      transform_hlds__intermod__conv1_HeadVar__2_51 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__980__1_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 978 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv1_HeadVar__2_51));
#line 978 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 978 "intermod.m"
  }
#line 978 "intermod.m"
}

#line 963 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_11,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceMethodName0_12,
#line 963 "intermod.m"
  MR_Integer transform_hlds__intermod__MethodArity_13,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallTVarSet_14,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallExistQTVars_15,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallArgTypes_16,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_17,
#line 963 "intermod.m"
  MR_Word transform_hlds__intermod__MethodContext_18,
#line 963 "intermod.m"
  MR_Word * transform_hlds__intermod__MaybePredId_19,
#line 963 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethodName_20)
#line 963 "intermod.m"
{
#line 971 "intermod.m"
  {
#line 971 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 971 "intermod.m"
    MR_Word transform_hlds__intermod__CtorFieldTable_21;
#line 971 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors0_25;
#line 971 "intermod.m"
    MR_Word transform_hlds__intermod__Ctors_32;
#line 971 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors1_35;
#line 971 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors_37;
#line 971 "intermod.m"
    MR_Word transform_hlds__intermod__PredicateTable_38;
#line 971 "intermod.m"
    MR_Word transform_hlds__intermod__PredIds_39;
#line 982 "intermod.m"
    MR_Word transform_hlds__intermod__FieldDefns_24;
#line 975 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_79_79;
#line 975 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_80_80;
#line 975 "intermod.m"
    MR_Word transform_hlds__intermod__FieldName_23;
#line 975 "intermod.m"
    MR_Integer transform_hlds__intermod__V_86_86;
#line 974 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22;
#line 976 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_FieldDefns_24;
#line 995 "intermod.m"
    MR_Word transform_hlds__intermod__MatchingConstructors_34;
#line 988 "intermod.m"
    MR_Word transform_hlds__intermod__ConsId_33;
#line 988 "intermod.m"
    MR_Word transform_hlds__intermod__V_52_52;
#line 1013 "intermod.m"
    MR_Word transform_hlds__intermod__PredId_42;
#line 1013 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodFuncName_43;
#line 1004 "intermod.m"
    MR_Word transform_hlds__intermod__V_57_57;
#line 1004 "intermod.m"
    MR_Word transform_hlds__intermod__V_40_40;
#line 1004 "intermod.m"
    MR_Word transform_hlds__intermod__V_41_41;

#line 972 "intermod.m"
    {
#line 972 "intermod.m"
      hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__CtorFieldTable_21);
    }
#line 974 "intermod.m"
    {
#line 974 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__InstanceMethodName0_12, &transform_hlds__intermod__V_86_86, &transform_hlds__intermod__V_22_22, &transform_hlds__intermod__FieldName_23);
    }
#line 975 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 975 "intermod.m"
      {
#line 974 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__MethodArity_13 == transform_hlds__intermod__V_86_86);
#line 975 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 975 "intermod.m"
          {
#line 14145 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 14147 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeInfo_80_80 = (MR_Word) &transform_hlds__intermod_scalar_common_1[3];
#line 976 "intermod.m"
            {
#line 976 "intermod.m"
              transform_hlds__intermod__succeeded = mercury__map__search_3_p_0(transform_hlds__intermod__TypeCtorInfo_79_79, transform_hlds__intermod__TypeInfo_80_80, transform_hlds__intermod__CtorFieldTable_21, ((MR_Box) (transform_hlds__intermod__FieldName_23)), &transform_hlds__intermod__conv0_FieldDefns_24);
            }
#line 976 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 976 "intermod.m"
              {
#line 976 "intermod.m"
                transform_hlds__intermod__FieldDefns_24 = ((MR_Word) transform_hlds__intermod__conv0_FieldDefns_24);
#line 976 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 976 "intermod.m"
              }
#line 975 "intermod.m"
          }
#line 975 "intermod.m"
      }
#line 982 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 978 "intermod.m"
      {
#line 978 "intermod.m"
        {
#line 978 "intermod.m"
          transform_hlds__intermod__TypeCtors0_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[11], transform_hlds__intermod__FieldDefns_24);
        }
#line 978 "intermod.m"
      }
#line 982 "intermod.m"
    else
#line 983 "intermod.m"
      transform_hlds__intermod__TypeCtors0_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 985 "intermod.m"
    {
#line 985 "intermod.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__Ctors_32);
    }
#line 987 "intermod.m"
    {
#line 987 "intermod.m"
      transform_hlds__intermod__V_52_52 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 987 "intermod.m"
    {
#line 987 "intermod.m"
      transform_hlds__intermod__ConsId_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 987 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 987 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 1) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName0_12));
#line 987 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 2) = ((MR_Box) (transform_hlds__intermod__MethodArity_13));
#line 987 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 3) = ((MR_Box) (transform_hlds__intermod__V_52_52));
#line 987 "intermod.m"
    }
#line 989 "intermod.m"
    {
#line 989 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_data__search_cons_table_3_p_0(transform_hlds__intermod__Ctors_32, transform_hlds__intermod__ConsId_33, &transform_hlds__intermod__MatchingConstructors_34);
    }
#line 995 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 991 "intermod.m"
      {
#line 991 "intermod.m"
        {
#line 991 "intermod.m"
          transform_hlds__intermod__TypeCtors1_35 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[12], transform_hlds__intermod__MatchingConstructors_34);
        }
#line 991 "intermod.m"
      }
#line 995 "intermod.m"
    else
#line 996 "intermod.m"
      transform_hlds__intermod__TypeCtors1_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 998 "intermod.m"
    {
#line 998 "intermod.m"
      transform_hlds__intermod__TypeCtors_37 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__intermod__TypeCtors0_25, transform_hlds__intermod__TypeCtors1_35);
    }
#line 1000 "intermod.m"
    {
#line 1000 "intermod.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__PredicateTable_38);
    }
#line 1001 "intermod.m"
    {
#line 1001 "intermod.m"
      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(transform_hlds__intermod__PredicateTable_38, (MR_Integer) 1, transform_hlds__intermod__InstanceMethodName0_12, transform_hlds__intermod__MethodArity_13, &transform_hlds__intermod__PredIds_39);
    }
#line 1004 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__PredIds_39)) == (MR_mktag((MR_Integer) 1)));
#line 1004 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1004 "intermod.m"
      {
#line 1004 "intermod.m"
        transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__PredIds_39, (MR_Integer) 0)));
#line 1004 "intermod.m"
        transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__PredIds_39, (MR_Integer) 1)));
#line 1005 "intermod.m"
        transform_hlds__intermod__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1005 "intermod.m"
        {
#line 1005 "intermod.m"
          transform_hlds__intermod__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__PredIds_39, transform_hlds__intermod__MethodCallTVarSet_14, transform_hlds__intermod__MethodCallExistQTVars_15, transform_hlds__intermod__MethodCallArgTypes_16, transform_hlds__intermod__MethodCallHeadTypeParams_17, transform_hlds__intermod__V_57_57, transform_hlds__intermod__MethodContext_18, &transform_hlds__intermod__PredId_42, &transform_hlds__intermod__InstanceMethodFuncName_43);
        }
#line 1004 "intermod.m"
      }
#line 1013 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1010 "intermod.m"
      {
#line 1010 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__TypeCtors_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1010 "intermod.m"
          {
#line 1012 "intermod.m"
            *transform_hlds__intermod__InstanceMethodName_20 = transform_hlds__intermod__InstanceMethodFuncName_43;
#line 1011 "intermod.m"
            {
#line 1011 "intermod.m"
              MR_Word base;
#line 1011 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "intermod.m"
              *transform_hlds__intermod__MaybePredId_19 = base;
#line 1011 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_42));
#line 1011 "intermod.m"
            }
#line 1011 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1010 "intermod.m"
          }
#line 1010 "intermod.m"
      }
#line 1013 "intermod.m"
    else
#line 1014 "intermod.m"
      {
#line 1014 "intermod.m"
        MR_Word transform_hlds__intermod__TheTypeCtor_44;
#line 1014 "intermod.m"
        MR_Word transform_hlds__intermod__V_58_58;
#line 1019 "intermod.m"
        MR_Word transform_hlds__intermod__TypeModule_45;
#line 1016 "intermod.m"
        MR_Word transform_hlds__intermod__V_59_59;
#line 1016 "intermod.m"
        MR_Integer transform_hlds__intermod__V_47_47;
#line 1016 "intermod.m"
        MR_String transform_hlds__intermod__V_46_46;

#line 1014 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__TypeCtors_37)) == (MR_mktag((MR_Integer) 1)));
#line 1014 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1014 "intermod.m"
          {
#line 1014 "intermod.m"
            transform_hlds__intermod__TheTypeCtor_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeCtors_37, (MR_Integer) 0)));
#line 1014 "intermod.m"
            transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeCtors_37, (MR_Integer) 1)));
#line 1014 "intermod.m"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1014 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1014 "intermod.m"
              {
#line 1015 "intermod.m"
                *transform_hlds__intermod__MaybePredId_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1016 "intermod.m"
                transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TheTypeCtor_44, (MR_Integer) 0)));
#line 1016 "intermod.m"
                transform_hlds__intermod__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TheTypeCtor_44, (MR_Integer) 1)));
#line 1016 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 1016 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1016 "intermod.m"
                  {
#line 1016 "intermod.m"
                    transform_hlds__intermod__TypeModule_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, (MR_Integer) 0)));
#line 1016 "intermod.m"
                    transform_hlds__intermod__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, (MR_Integer) 1)));
#line 1017 "intermod.m"
                    {
#line 1017 "intermod.m"
                      MR_String transform_hlds__intermod__UnqualMethodName_48;

#line 1017 "intermod.m"
                      {
#line 1017 "intermod.m"
                        transform_hlds__intermod__UnqualMethodName_48 = mdbcomp__prim_data__unqualify_name_1_f_0(transform_hlds__intermod__InstanceMethodName0_12);
                      }
#line 1018 "intermod.m"
                      {
#line 1018 "intermod.m"
                        MR_Word base;
#line 1018 "intermod.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "intermod.m"
                        *transform_hlds__intermod__InstanceMethodName_20 = base;
#line 1018 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__TypeModule_45));
#line 1018 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__UnqualMethodName_48));
#line 1018 "intermod.m"
                      }
#line 1017 "intermod.m"
                    }
#line 1016 "intermod.m"
                  }
#line 1016 "intermod.m"
                else
#line 1020 "intermod.m"
                  {
#line 1020 "intermod.m"
                    {
#line 1020 "intermod.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.find_func_matching_instance_method\'/10", (MR_String) "unqualified type_ctor in hlds_cons_defn or hlds_ctor_field_defn");
                    }
#line 1020 "intermod.m"
                  }
#line 1019 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 1014 "intermod.m"
              }
#line 1014 "intermod.m"
          }
#line 1014 "intermod.m"
      }
#line 971 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 971 "intermod.m"
  }
#line 963 "intermod.m"
}

#line 895 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
#line 895 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 895 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 895 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethod_9,
#line 895 "intermod.m"
  MR_Word transform_hlds__intermod__PredIds0_10,
#line 895 "intermod.m"
  MR_Word * transform_hlds__intermod__PredIds_11)
#line 895 "intermod.m"
{
#line 900 "intermod.m"
  {
#line 900 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallPredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethod0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallPredInfo_12;
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallTVarSet_13;
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallExistQTVars_14;
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallArgTypes_15;
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_16;
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__PredOrFunc_17;
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__MethodName_18;
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodDefn0_19;
#line 900 "intermod.m"
    MR_Integer transform_hlds__intermod__MethodArity_20;
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__MethodContext_21;
#line 900 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodDefn_26;

#line 901 "intermod.m"
    {
#line 901 "intermod.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__MethodCallPredId_7, &transform_hlds__intermod__MethodCallPredInfo_12);
    }
#line 902 "intermod.m"
    {
#line 902 "intermod.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__MethodCallPredInfo_12, &transform_hlds__intermod__MethodCallTVarSet_13, &transform_hlds__intermod__MethodCallExistQTVars_14, &transform_hlds__intermod__MethodCallArgTypes_15);
    }
#line 904 "intermod.m"
    {
#line 904 "intermod.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__MethodCallPredInfo_12, &transform_hlds__intermod__MethodCallHeadTypeParams_16);
    }
#line 906 "intermod.m"
    transform_hlds__intermod__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 0)));
#line 906 "intermod.m"
    transform_hlds__intermod__MethodName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 1)));
#line 906 "intermod.m"
    transform_hlds__intermod__InstanceMethodDefn0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 2)));
#line 906 "intermod.m"
    transform_hlds__intermod__MethodArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 3)));
#line 906 "intermod.m"
    transform_hlds__intermod__MethodContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 4)));
#line 933 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__InstanceMethodDefn0_19)) == (MR_mktag((MR_Integer) 1))))
#line 944 "intermod.m"
      {
#line 944 "intermod.m"
        MR_Word transform_hlds__intermod__PredId_33;

#line 951 "intermod.m"
        {
#line 951 "intermod.m"
          transform_hlds__intermod__PredId_33 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 952 "intermod.m"
        {
#line 952 "intermod.m"
          MR_Word base;
#line 952 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "intermod.m"
          *transform_hlds__intermod__PredIds_11 = base;
#line 952 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_33));
#line 952 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 952 "intermod.m"
        }
#line 954 "intermod.m"
        transform_hlds__intermod__InstanceMethodDefn_26 = transform_hlds__intermod__InstanceMethodDefn0_19;
#line 944 "intermod.m"
      }
#line 933 "intermod.m"
    else
#line 933 "intermod.m"
      {
#line 933 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn0_19, (MR_Integer) 0)));

#line 933 "intermod.m"
        if ((transform_hlds__intermod__PredOrFunc_17 == (MR_Integer) 1))
#line 925 "intermod.m"
          {
#line 925 "intermod.m"
            MR_Word transform_hlds__intermod__MaybePredId_23;
#line 925 "intermod.m"
            MR_Word transform_hlds__intermod__InstanceMethodName_24;

#line 912 "intermod.m"
            {
#line 912 "intermod.m"
              transform_hlds__intermod__succeeded = transform_hlds__intermod__find_func_matching_instance_method_10_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__V_34_34, transform_hlds__intermod__MethodArity_20, transform_hlds__intermod__MethodCallTVarSet_13, transform_hlds__intermod__MethodCallExistQTVars_14, transform_hlds__intermod__MethodCallArgTypes_15, transform_hlds__intermod__MethodCallHeadTypeParams_16, transform_hlds__intermod__MethodContext_21, &transform_hlds__intermod__MaybePredId_23, &transform_hlds__intermod__InstanceMethodName_24);
            }
#line 925 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 923 "intermod.m"
              {
#line 920 "intermod.m"
                if ((transform_hlds__intermod__MaybePredId_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "intermod.m"
                  *transform_hlds__intermod__PredIds_11 = transform_hlds__intermod__PredIds0_10;
#line 920 "intermod.m"
                else
#line 918 "intermod.m"
                  {
#line 918 "intermod.m"
                    MR_Word transform_hlds__intermod__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybePredId_23, (MR_Integer) 0)));

#line 919 "intermod.m"
                    {
#line 919 "intermod.m"
                      MR_Word base;
#line 919 "intermod.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "intermod.m"
                      *transform_hlds__intermod__PredIds_11 = base;
#line 919 "intermod.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_25));
#line 919 "intermod.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 919 "intermod.m"
                    }
#line 918 "intermod.m"
                  }
#line 924 "intermod.m"
                {
#line 924 "intermod.m"
                  transform_hlds__intermod__InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 924 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn_26, 0) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName_24));
#line 924 "intermod.m"
                }
#line 923 "intermod.m"
              }
#line 925 "intermod.m"
            else
#line 927 "intermod.m"
              {
#line 927 "intermod.m"
                MR_Word transform_hlds__intermod__PredId_29;

#line 927 "intermod.m"
                {
#line 927 "intermod.m"
                  transform_hlds__intermod__PredId_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 928 "intermod.m"
                {
#line 928 "intermod.m"
                  MR_Word base;
#line 928 "intermod.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 928 "intermod.m"
                  *transform_hlds__intermod__PredIds_11 = base;
#line 928 "intermod.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_29));
#line 928 "intermod.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 928 "intermod.m"
                }
#line 931 "intermod.m"
                transform_hlds__intermod__InstanceMethodDefn_26 = transform_hlds__intermod__InstanceMethodDefn0_19;
#line 927 "intermod.m"
              }
#line 925 "intermod.m"
          }
#line 933 "intermod.m"
        else
#line 934 "intermod.m"
          {
#line 934 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_27;
#line 934 "intermod.m"
            MR_Word transform_hlds__intermod__InstanceMethodName_31;
#line 934 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_32;

#line 936 "intermod.m"
            {
#line 936 "intermod.m"
              hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers_27);
            }
#line 937 "intermod.m"
            {
#line 937 "intermod.m"
              hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__Markers_27, transform_hlds__intermod__MethodCallTVarSet_13, transform_hlds__intermod__MethodCallExistQTVars_14, transform_hlds__intermod__MethodCallArgTypes_15, transform_hlds__intermod__MethodCallHeadTypeParams_16, transform_hlds__intermod__MethodContext_21, transform_hlds__intermod__V_34_34, &transform_hlds__intermod__InstanceMethodName_31, &transform_hlds__intermod__PredId_32);
            }
#line 941 "intermod.m"
            {
#line 941 "intermod.m"
              MR_Word base;
#line 941 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "intermod.m"
              *transform_hlds__intermod__PredIds_11 = base;
#line 941 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_32));
#line 941 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 941 "intermod.m"
            }
#line 942 "intermod.m"
            {
#line 942 "intermod.m"
              transform_hlds__intermod__InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 942 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn_26, 0) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName_31));
#line 942 "intermod.m"
            }
#line 934 "intermod.m"
          }
#line 933 "intermod.m"
      }
#line 956 "intermod.m"
    {
#line 956 "intermod.m"
      MR_Word base;
#line 956 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 956 "intermod.m"
      *transform_hlds__intermod__InstanceMethod_9 = base;
#line 956 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_17));
#line 956 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__MethodName_18));
#line 956 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__InstanceMethodDefn_26));
#line 956 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__MethodArity_20));
#line 956 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__MethodContext_21));
#line 956 "intermod.m"
    }
#line 900 "intermod.m"
  }
#line 895 "intermod.m"
}

#line 850 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_3(
#line 850 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 850 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 850 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 850 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 850 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 850 "intermod.m"
{
#line 850 "intermod.m"
  {
#line 850 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 850 "intermod.m"
    MR_Word transform_hlds__intermod__conv5_DoWrite_6;
#line 850 "intermod.m"
    MR_Word transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9;

#line 850 "intermod.m"
    {
#line 850 "intermod.m"
      transform_hlds__intermod__add_proc_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv5_DoWrite_6, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9);
    }
#line 850 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv5_DoWrite_6));
#line 850 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9));
#line 850 "intermod.m"
  }
#line 850 "intermod.m"
}

#line 848 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_2(
#line 848 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 848 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 848 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 848 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 848 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 848 "intermod.m"
{
#line 848 "intermod.m"
  {
#line 848 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 848 "intermod.m"
    MR_Word transform_hlds__intermod__conv2_InstanceMethod_9;
#line 848 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_PredIds_11;

#line 848 "intermod.m"
    {
#line 848 "intermod.m"
      transform_hlds__intermod__qualify_instance_method_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv2_InstanceMethod_9, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv1_PredIds_11);
    }
#line 848 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv2_InstanceMethod_9));
#line 848 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv1_PredIds_11));
#line 848 "intermod.m"
  }
#line 848 "intermod.m"
}

#line 833 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_1(
#line 833 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 833 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 833 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 833 "intermod.m"
{
#line 833 "intermod.m"
  {
#line 833 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 833 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_45;

#line 833 "intermod.m"
    {
#line 833 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__835__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_45);
    }
#line 833 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_45));
#line 833 "intermod.m"
  }
#line 833 "intermod.m"
}

#line 813 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0(
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefn_8,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_39,
#line 813 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_40)
#line 813 "intermod.m"
{
#line 816 "intermod.m"
  {
#line 816 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 816 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 0)));
#line 816 "intermod.m"
    MR_Word transform_hlds__intermod__Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 1)));
#line 816 "intermod.m"
    MR_Word transform_hlds__intermod__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 2)));
#line 816 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceConstraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 3)));
#line 816 "intermod.m"
    MR_Word transform_hlds__intermod__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 4)));
#line 816 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 5)));
#line 816 "intermod.m"
    MR_Word transform_hlds__intermod__Interface0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 6)));
#line 816 "intermod.m"
    MR_Word transform_hlds__intermod__MaybePredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 7)));
#line 816 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 8)));
#line 816 "intermod.m"
    MR_Word transform_hlds__intermod__Proofs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 9)));
#line 816 "intermod.m"
    MR_Word transform_hlds__intermod__DefinedThisModule_20;

#line 820 "intermod.m"
    {
#line 820 "intermod.m"
      transform_hlds__intermod__DefinedThisModule_20 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(transform_hlds__intermod__Status_11);
    }
#line 888 "intermod.m"
    if ((transform_hlds__intermod__DefinedThisModule_20 == (MR_Integer) 0))
#line 889 "intermod.m"
      *transform_hlds__intermod__STATE_VARIABLE_Info_40 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 888 "intermod.m"
    else
#line 822 "intermod.m"
      {
#line 822 "intermod.m"
        MR_Word transform_hlds__intermod__Interface_35;
#line 822 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_50_50;
#line 876 "intermod.m"
        MR_Word transform_hlds__intermod__V_51_51;

#line 866 "intermod.m"
        if ((transform_hlds__intermod__Interface0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "intermod.m"
          {
#line 868 "intermod.m"
            transform_hlds__intermod__Interface_35 = transform_hlds__intermod__Interface0_16;
#line 868 "intermod.m"
            transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 867 "intermod.m"
          }
#line 866 "intermod.m"
        else
#line 830 "intermod.m"
          {
#line 830 "intermod.m"
            MR_Word transform_hlds__intermod__Methods0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Interface0_16, (MR_Integer) 0)));
#line 830 "intermod.m"
            MR_Word transform_hlds__intermod__MethodAL_30;
#line 830 "intermod.m"
            MR_Word transform_hlds__intermod__Methods_31;
#line 830 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_32;
#line 830 "intermod.m"
            MR_Word transform_hlds__intermod__DoWriteMethodsList_33;
#line 830 "intermod.m"
            MR_Word transform_hlds__intermod__DoWriteMethods_34;
#line 830 "intermod.m"
            MR_Word transform_hlds__intermod__V_46_46;
#line 830 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_49_49;
#line 848 "intermod.m"
            MR_Box transform_hlds__intermod__conv3_PredIds_32;
#line 850 "intermod.m"
            MR_Box transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49;

#line 843 "intermod.m"
            if ((transform_hlds__intermod__MaybePredProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 844 "intermod.m"
              {
#line 845 "intermod.m"
                {
#line 845 "intermod.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_instances_3\'/5", (MR_String) "method pred_proc_ids not filled in");
#line 845 "intermod.m"
                  return;
                }
#line 844 "intermod.m"
              }
#line 843 "intermod.m"
            else
#line 832 "intermod.m"
              {
#line 832 "intermod.m"
                MR_Word transform_hlds__intermod__TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 832 "intermod.m"
                MR_Word transform_hlds__intermod__ClassProcs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybePredProcIds_17, (MR_Integer) 0)));
#line 832 "intermod.m"
                MR_Word transform_hlds__intermod__ClassPreds0_28;
#line 832 "intermod.m"
                MR_Word transform_hlds__intermod__ClassPreds_29;

#line 837 "intermod.m"
                {
#line 837 "intermod.m"
                  mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_57_57, (MR_Word) &transform_hlds__intermod_scalar_common_2[9], transform_hlds__intermod__ClassProcs_23, &transform_hlds__intermod__ClassPreds0_28);
                }
#line 840 "intermod.m"
                {
#line 840 "intermod.m"
                  mercury__list__remove_adjacent_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_57_57, transform_hlds__intermod__ClassPreds0_28, &transform_hlds__intermod__ClassPreds_29);
                }
#line 841 "intermod.m"
                {
#line 841 "intermod.m"
                  mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__intermod__TypeCtorInfo_57_57, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, transform_hlds__intermod__ClassPreds_29, transform_hlds__intermod__Methods0_22, &transform_hlds__intermod__MethodAL_30);
                }
#line 832 "intermod.m"
              }
#line 848 "intermod.m"
            {
#line 848 "intermod.m"
              transform_hlds__intermod__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 848 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[2]));
#line 848 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 1) = ((MR_Box) (transform_hlds__intermod__gather_instances_3_5_p_0_2));
#line 848 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 848 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_6));
#line 848 "intermod.m"
            }
#line 848 "intermod.m"
            {
#line 848 "intermod.m"
              mercury__list__map_foldl_5_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[2], transform_hlds__intermod__V_46_46, transform_hlds__intermod__MethodAL_30, &transform_hlds__intermod__Methods_31, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__intermod__conv3_PredIds_32);
            }
#line 848 "intermod.m"
            transform_hlds__intermod__PredIds_32 = ((MR_Word) transform_hlds__intermod__conv3_PredIds_32);
#line 850 "intermod.m"
            {
#line 850 "intermod.m"
              mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[10], transform_hlds__intermod__PredIds_32, &transform_hlds__intermod__DoWriteMethodsList_33, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_39)), &transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49);
            }
#line 850 "intermod.m"
            transform_hlds__intermod__STATE_VARIABLE_Info_49_49 = ((MR_Word) transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49);
#line 851 "intermod.m"
            {
#line 851 "intermod.m"
              mercury__bool__and_list_2_p_0(transform_hlds__intermod__DoWriteMethodsList_33, &transform_hlds__intermod__DoWriteMethods_34);
            }
#line 855 "intermod.m"
            if ((transform_hlds__intermod__DoWriteMethods_34 == (MR_Integer) 0))
#line 856 "intermod.m"
              {
#line 860 "intermod.m"
                transform_hlds__intermod__Interface_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 864 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 856 "intermod.m"
              }
#line 855 "intermod.m"
            else
#line 853 "intermod.m"
              {
#line 854 "intermod.m"
                {
#line 854 "intermod.m"
                  transform_hlds__intermod__Interface_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 854 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__Interface_35, 0) = ((MR_Box) (transform_hlds__intermod__Methods_31));
#line 854 "intermod.m"
                }
#line 854 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_49_49;
#line 853 "intermod.m"
              }
#line 830 "intermod.m"
          }
#line 874 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__Interface_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 875 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 875 "intermod.m"
          {
#line 876 "intermod.m"
            {
#line 876 "intermod.m"
              transform_hlds__intermod__V_51_51 = hlds__hlds_pred__status_is_exported_1_f_0(transform_hlds__intermod__Status_11);
            }
#line 876 "intermod.m"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_51_51 == (MR_Integer) 0);
#line 875 "intermod.m"
            transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 875 "intermod.m"
          }
#line 875 "intermod.m"
        transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 885 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 881 "intermod.m"
          {
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__InstanceDefnToWrite_36;
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__Instances0_37;
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__Instances_38;
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__V_52_52;
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__V_74_74;
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__V_75_75;
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__V_76_76;
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__V_77_77;
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__V_78_78;
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__V_79_79;
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__V_80_80;
#line 881 "intermod.m"
            MR_Word transform_hlds__intermod__V_81_81;

#line 879 "intermod.m"
            {
#line 879 "intermod.m"
              transform_hlds__intermod__InstanceDefnToWrite_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 879 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 0) = ((MR_Box) (transform_hlds__intermod__ModuleName_10));
#line 879 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 1) = ((MR_Box) (transform_hlds__intermod__Status_11));
#line 879 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 879 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 3) = ((MR_Box) (transform_hlds__intermod__InstanceConstraints_13));
#line 879 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 4) = ((MR_Box) (transform_hlds__intermod__Types_14));
#line 879 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 5) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_15));
#line 879 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 6) = ((MR_Box) (transform_hlds__intermod__Interface_35));
#line 879 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 7) = ((MR_Box) (transform_hlds__intermod__MaybePredProcIds_17));
#line 879 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_18));
#line 879 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 9) = ((MR_Box) (transform_hlds__intermod__Proofs_19));
#line 879 "intermod.m"
            }
#line 2161 "intermod.m"
            transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 2161 "intermod.m"
            transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
#line 2161 "intermod.m"
            transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 2161 "intermod.m"
            transform_hlds__intermod__Instances0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 2161 "intermod.m"
            transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 2161 "intermod.m"
            transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 2161 "intermod.m"
            transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 2161 "intermod.m"
            transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 2161 "intermod.m"
            transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 883 "intermod.m"
            {
#line 883 "intermod.m"
              transform_hlds__intermod__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 883 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_52_52, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_7));
#line 883 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_52_52, 1) = ((MR_Box) (transform_hlds__intermod__InstanceDefnToWrite_36));
#line 883 "intermod.m"
            }
#line 883 "intermod.m"
            {
#line 883 "intermod.m"
              transform_hlds__intermod__Instances_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Instances_38, 0) = ((MR_Box) (transform_hlds__intermod__V_52_52));
#line 883 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Instances_38, 1) = ((MR_Box) (transform_hlds__intermod__Instances0_37));
#line 883 "intermod.m"
            }
#line 2172 "intermod.m"
            {
#line 2172 "intermod.m"
              MR_Word base;
#line 2172 "intermod.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2172 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_40 = base;
#line 2172 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_74_74));
#line 2172 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_75_75));
#line 2172 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_76_76));
#line 2172 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__Instances_38));
#line 2172 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_77_77));
#line 2172 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_78_78));
#line 2172 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_79_79));
#line 2172 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_80_80));
#line 2172 "intermod.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_81_81));
#line 2172 "intermod.m"
            }
#line 881 "intermod.m"
          }
#line 885 "intermod.m"
        else
#line 884 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_40 = transform_hlds__intermod__STATE_VARIABLE_Info_50_50;
#line 822 "intermod.m"
      }
#line 816 "intermod.m"
  }
#line 813 "intermod.m"
}

#line 811 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0_1(
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 811 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 811 "intermod.m"
{
#line 811 "intermod.m"
  {
#line 811 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 811 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40;

#line 811 "intermod.m"
    {
#line 811 "intermod.m"
      transform_hlds__intermod__gather_instances_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40);
    }
#line 811 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40));
#line 811 "intermod.m"
  }
#line 811 "intermod.m"
}

#line 806 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0(
#line 806 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 806 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 806 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefns_8,
#line 806 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_10,
#line 806 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_11)
#line 806 "intermod.m"
{
#line 810 "intermod.m"
  {
#line 810 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 810 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12;
#line 811 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11;

#line 811 "intermod.m"
    {
#line 811 "intermod.m"
      transform_hlds__intermod__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 811 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[1]));
#line 811 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 1) = ((MR_Box) (transform_hlds__intermod__gather_instances_2_5_p_0_1));
#line 811 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 811 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_6));
#line 811 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 4) = ((MR_Box) (transform_hlds__intermod__ClassId_7));
#line 811 "intermod.m"
    }
#line 811 "intermod.m"
    {
#line 811 "intermod.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_12_12, transform_hlds__intermod__InstanceDefns_8, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_10)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11);
    }
#line 811 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_Info_11 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11);
#line 810 "intermod.m"
  }
#line 806 "intermod.m"
}

#line 804 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_p_0_1(
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 804 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 804 "intermod.m"
{
#line 804 "intermod.m"
  {
#line 804 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 804 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11;

#line 804 "intermod.m"
    {
#line 804 "intermod.m"
      transform_hlds__intermod__gather_instances_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11);
    }
#line 804 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11));
#line 804 "intermod.m"
  }
#line 804 "intermod.m"
}

#line 799 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_p_0(
#line 799 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 799 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7)
#line 799 "intermod.m"
{
#line 801 "intermod.m"
  {
#line 801 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 801 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 801 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_5;
#line 801 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 804 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7;

#line 803 "intermod.m"
    {
#line 803 "intermod.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__ModuleInfo_4, &transform_hlds__intermod__Instances_5);
    }
#line 804 "intermod.m"
    {
#line 804 "intermod.m"
      transform_hlds__intermod__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 804 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_8_8, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[0]));
#line 804 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_8_8, 1) = ((MR_Box) (transform_hlds__intermod__gather_instances_2_p_0_1));
#line 804 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 804 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_8_8, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_4));
#line 804 "intermod.m"
    }
#line 804 "intermod.m"
    {
#line 804 "intermod.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[1], (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_8_8, transform_hlds__intermod__Instances_5, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_6)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
    }
#line 804 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_Info_7 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
#line 801 "intermod.m"
  }
#line 799 "intermod.m"
}

#line 759 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(
#line 759 "intermod.m"
  MR_Word transform_hlds__intermod__RHS0_6,
#line 759 "intermod.m"
  MR_Word * transform_hlds__intermod__RHS_7,
#line 759 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 759 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_28,
#line 759 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_29)
#line 759 "intermod.m"
{
#line 764 "intermod.m"
  {
#line 764 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 764 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__RHS0_6)) == (MR_mktag((MR_Integer) 1))))
#line 774 "intermod.m"
      {
#line 774 "intermod.m"
        MR_Word transform_hlds__intermod__Functor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)));
#line 774 "intermod.m"
        MR_Word transform_hlds__intermod___Exist_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 1)));
#line 774 "intermod.m"
        MR_Word transform_hlds__intermod___Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 2)));
#line 783 "intermod.m"
        MR_Word transform_hlds__intermod__ShroudedPredProcId_24;

#line 775 "intermod.m"
        *transform_hlds__intermod__RHS_7 = transform_hlds__intermod__RHS0_6;
#line 777 "intermod.m"
        transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__Functor_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Functor_21, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 777 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 777 "intermod.m"
          {
#line 777 "intermod.m"
            transform_hlds__intermod__ShroudedPredProcId_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Functor_21, (MR_Integer) 1)));
#line 781 "intermod.m"
            {
#line 781 "intermod.m"
              MR_Word transform_hlds__intermod__PredId_26;
#line 781 "intermod.m"
              MR_Word transform_hlds__intermod__V_30_30;
#line 781 "intermod.m"
              MR_Integer transform_hlds__intermod__V_27_27;
#line 626 "intermod.m"
              MR_Word transform_hlds__intermod__V_39_39;

#line 781 "intermod.m"
              {
#line 781 "intermod.m"
                transform_hlds__intermod__V_30_30 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__intermod__ShroudedPredProcId_24);
              }
#line 781 "intermod.m"
              transform_hlds__intermod__PredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, (MR_Integer) 0)));
#line 781 "intermod.m"
              transform_hlds__intermod__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, (MR_Integer) 1)));
#line 626 "intermod.m"
              {
#line 626 "intermod.m"
                transform_hlds__intermod__V_39_39 = hlds__hlds_pred__invalid_pred_id_0_f_0();
              }
#line 626 "intermod.m"
              {
#line 626 "intermod.m"
                transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_26, transform_hlds__intermod__V_39_39);
              }
#line 631 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 630 "intermod.m"
                {
#line 630 "intermod.m"
                  *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 630 "intermod.m"
                  *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 630 "intermod.m"
                }
#line 631 "intermod.m"
              else
#line 632 "intermod.m"
                {
#line 632 "intermod.m"
                  transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_26, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_28, transform_hlds__intermod__STATE_VARIABLE_Info_29);
#line 632 "intermod.m"
                  return;
                }
#line 781 "intermod.m"
            }
#line 777 "intermod.m"
          }
#line 777 "intermod.m"
        else
#line 793 "intermod.m"
          {
#line 793 "intermod.m"
            *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 793 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 793 "intermod.m"
          }
#line 774 "intermod.m"
      }
#line 764 "intermod.m"
    else
#line 764 "intermod.m"
      if (((MR_tag((MR_Word) transform_hlds__intermod__RHS0_6)) == (MR_mktag((MR_Integer) 2))))
#line 769 "intermod.m"
        {
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__Purity_11 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__HOGroundness_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__PorF_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 2)));
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__QuantVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 3)));
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 4)));
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__Detism_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 5)));
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__Goal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 6)));
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__Goal_20;
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_19, (MR_Integer) 0)));
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_19, (MR_Integer) 1)));
#line 769 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr_49;

#line 476 "intermod.m"
          {
#line 476 "intermod.m"
            transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_47, &transform_hlds__intermod__GoalExpr_49, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_28, transform_hlds__intermod__STATE_VARIABLE_Info_29);
          }
#line 477 "intermod.m"
          {
#line 477 "intermod.m"
            transform_hlds__intermod__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_20, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_49));
#line 477 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_20, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_48));
#line 477 "intermod.m"
          }
#line 771 "intermod.m"
          {
#line 771 "intermod.m"
            MR_Word base;
#line 771 "intermod.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 771 "intermod.m"
            *transform_hlds__intermod__RHS_7 = base;
#line 771 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((transform_hlds__intermod__Purity_11 | ((((transform_hlds__intermod__HOGroundness_12 << (MR_Integer) 2)) | ((transform_hlds__intermod__PorF_13 << (MR_Integer) 3)))))));
#line 771 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
#line 771 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__intermod__NonLocals_15));
#line 771 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__intermod__QuantVars_16));
#line 771 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__intermod__Modes_17));
#line 771 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__intermod__Detism_18));
#line 771 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (transform_hlds__intermod__Goal_20));
#line 771 "intermod.m"
          }
#line 769 "intermod.m"
        }
#line 764 "intermod.m"
      else
#line 764 "intermod.m"
        {
#line 765 "intermod.m"
          *transform_hlds__intermod__RHS_7 = transform_hlds__intermod__RHS0_6;
#line 766 "intermod.m"
          *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 766 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 764 "intermod.m"
        }
#line 764 "intermod.m"
  }
#line 759 "intermod.m"
}

#line 668 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_1(
#line 668 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 668 "intermod.m"
{
#line 668 "intermod.m"
  {
#line 668 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 668 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0, 1);
#line 668 "intermod.m"
  }
#line 668 "intermod.m"
}

#line 669 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_3(
#line 669 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 669 "intermod.m"
{
#line 669 "intermod.m"
  {
#line 669 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 669 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15 = ((MR_Integer) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15);
#line 669 "intermod.m"
    {
#line 669 "intermod.m"
      transform_hlds__intermod__add_proc_2_4_p_0_2(transform_hlds__intermod__env_ptr);
#line 669 "intermod.m"
      return;
    }
#line 669 "intermod.m"
  }
#line 669 "intermod.m"
}

#line 668 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_2(
#line 668 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 668 "intermod.m"
{
#line 668 "intermod.m"
  {
#line 668 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 668 "intermod.m"
    {
#line 670 "intermod.m"
      MR_Box transform_hlds__intermod__conv1_ProcInfo_16;

#line 15567 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 670 "intermod.m"
      {
#line 670 "intermod.m"
        mercury__map__lookup_3_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_37_37, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14, ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15)), &transform_hlds__intermod__conv1_ProcInfo_16);
      }
#line 670 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16 = ((MR_Word) transform_hlds__intermod__conv1_ProcInfo_16);
#line 671 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 671 "intermod.m"
      {
#line 671 "intermod.m"
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41);
      }
#line 15583 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44 = (MR_Word) &transform_hlds__intermod_scalar_common_1[16];
#line 671 "intermod.m"
      {
#line 671 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44, ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26)), ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41)));
      }
#line 671 "intermod.m"
      if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 671 "intermod.m"
        {
#line 671 "intermod.m"
          transform_hlds__intermod__add_proc_2_4_p_0_1(transform_hlds__intermod__env_ptr);
#line 671 "intermod.m"
          return;
        }
#line 668 "intermod.m"
    }
#line 668 "intermod.m"
  }
#line 668 "intermod.m"
}

#line 668 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_4(
#line 668 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 668 "intermod.m"
{
#line 668 "intermod.m"
  {
#line 668 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 668 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0) == 0)
#line 668 "intermod.m"
      {
#line 668 "intermod.m"
        {
#line 668 "intermod.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14);
        }
#line 15627 "transform_hlds.intermod.c"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 669 "intermod.m"
        {
#line 669 "intermod.m"
          mercury__list__member_2_p_1((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_37_37, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11, transform_hlds__intermod__add_proc_2_4_p_0_3, transform_hlds__intermod__env_ptr);
        }
#line 668 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 668 "intermod.m"
      }
#line 668 "intermod.m"
    else
#line 668 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 668 "intermod.m"
  }
#line 668 "intermod.m"
}

#line 635 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0(
#line 635 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 635 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 635 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 635 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25)
#line 635 "intermod.m"
{
#line 635 "intermod.m"
  {
#line 635 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s transform_hlds__intermod__env;

#line 638 "intermod.m"
    {
#line 638 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 638 "intermod.m"
      MR_Word transform_hlds__intermod__Status_10;
#line 638 "intermod.m"
      MR_Word transform_hlds__intermod__Markers_12;
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2163 "intermod.m"
      MR_Word transform_hlds__intermod__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));

#line 640 "intermod.m"
      {
#line 640 "intermod.m"
        hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__PredId_5, &(transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 641 "intermod.m"
      {
#line 641 "intermod.m"
        hlds__hlds_pred__pred_info_get_import_status_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__Status_10);
      }
#line 642 "intermod.m"
      {
#line 642 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 643 "intermod.m"
      {
#line 643 "intermod.m"
        hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__Markers_12);
      }
#line 650 "intermod.m"
      {
#line 650 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 651 "intermod.m"
      if (!((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded))
#line 651 "intermod.m"
        {
#line 651 "intermod.m"
          MR_Word transform_hlds__intermod__V_13_13;

#line 651 "intermod.m"
          {
#line 651 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_13_13);
          }
#line 651 "intermod.m"
        }
#line 655 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 654 "intermod.m"
        {
#line 654 "intermod.m"
          *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 654 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 654 "intermod.m"
        }
#line 655 "intermod.m"
      else
#line 675 "intermod.m"
        {
#line 666 "intermod.m"
          {
#line 666 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, (MR_Integer) 3);
          }
#line 667 "intermod.m"
          if (!((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded))
#line 668 "intermod.m"
            {
#line 668 "intermod.m"
              {
#line 668 "intermod.m"
                transform_hlds__intermod__add_proc_2_4_p_0_4(&transform_hlds__intermod__env);
              }
#line 668 "intermod.m"
            }
#line 675 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 674 "intermod.m"
            {
#line 674 "intermod.m"
              *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 674 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 674 "intermod.m"
            }
#line 675 "intermod.m"
          else
#line 705 "intermod.m"
            {
#line 701 "intermod.m"
              MR_Word transform_hlds__intermod__V_42_42;
#line 702 "intermod.m"
              MR_Word transform_hlds__intermod__V_29_29;

#line 701 "intermod.m"
              {
#line 701 "intermod.m"
                hlds__hlds_pred__pred_info_get_purity_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_42_42);
              }
#line 701 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = ((MR_Integer) 2 == transform_hlds__intermod__V_42_42);
#line 701 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 701 "intermod.m"
                {
#line 702 "intermod.m"
                  transform_hlds__intermod__V_29_29 = (MR_Integer) 22;
#line 702 "intermod.m"
                  {
#line 702 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, transform_hlds__intermod__V_29_29);
                  }
#line 702 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded);
#line 701 "intermod.m"
                }
#line 705 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 704 "intermod.m"
                {
#line 704 "intermod.m"
                  *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 704 "intermod.m"
                  *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 704 "intermod.m"
                }
#line 705 "intermod.m"
              else
#line 718 "intermod.m"
                {
#line 712 "intermod.m"
                  if ((transform_hlds__intermod__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 711 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 712 "intermod.m"
                  else
#line 712 "intermod.m"
                    if (((MR_tag((MR_Word) transform_hlds__intermod__Status_10)) == (MR_mktag((MR_Integer) 1))))
#line 713 "intermod.m"
                      {
#line 713 "intermod.m"
                        MR_Word transform_hlds__intermod__ExternalStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_10, (MR_Integer) 0)));
#line 713 "intermod.m"
                        MR_Word transform_hlds__intermod__V_30_30;

#line 714 "intermod.m"
                        {
#line 714 "intermod.m"
                          transform_hlds__intermod__V_30_30 = hlds__hlds_pred__status_is_exported_1_f_0(transform_hlds__intermod__ExternalStatus_17);
                        }
#line 714 "intermod.m"
                        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = (transform_hlds__intermod__V_30_30 == (MR_Integer) 1);
#line 713 "intermod.m"
                      }
#line 712 "intermod.m"
                    else
#line 712 "intermod.m"
                      (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 718 "intermod.m"
                  if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 717 "intermod.m"
                    {
#line 717 "intermod.m"
                      *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 717 "intermod.m"
                      *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 717 "intermod.m"
                    }
#line 718 "intermod.m"
                  else
#line 727 "intermod.m"
                    {
#line 723 "intermod.m"
                      MR_Word transform_hlds__intermod__V_31_31;
#line 723 "intermod.m"
                      MR_Word transform_hlds__intermod__V_43_43;

#line 723 "intermod.m"
                      {
#line 723 "intermod.m"
                        hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_43_43);
                      }
#line 723 "intermod.m"
                      {
#line 723 "intermod.m"
                        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_markers_0, ((MR_Box) (transform_hlds__intermod__Markers_12)), ((MR_Box) (transform_hlds__intermod__V_43_43)));
                      }
#line 723 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 723 "intermod.m"
                        {
#line 724 "intermod.m"
                          transform_hlds__intermod__V_31_31 = (MR_Integer) 9;
#line 724 "intermod.m"
                          {
#line 724 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, transform_hlds__intermod__V_31_31);
                          }
#line 723 "intermod.m"
                        }
#line 727 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 726 "intermod.m"
                        {
#line 726 "intermod.m"
                          *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 726 "intermod.m"
                          *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 726 "intermod.m"
                        }
#line 727 "intermod.m"
                      else
#line 738 "intermod.m"
                        {
#line 732 "intermod.m"
                          {
#line 732 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status_10);
                          }
#line 738 "intermod.m"
                          if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 734 "intermod.m"
                            {
#line 734 "intermod.m"
                              MR_Word transform_hlds__intermod__PredDecls0_18;
#line 734 "intermod.m"
                              MR_Word transform_hlds__intermod__PredDecls_19;
#line 2160 "intermod.m"
                              MR_Word transform_hlds__intermod__V_56_56;
#line 2160 "intermod.m"
                              MR_Word transform_hlds__intermod__V_57_57;
#line 2160 "intermod.m"
                              MR_Word transform_hlds__intermod__V_58_58;
#line 2160 "intermod.m"
                              MR_Word transform_hlds__intermod__V_59_59;
#line 2160 "intermod.m"
                              MR_Word transform_hlds__intermod__V_60_60;
#line 2160 "intermod.m"
                              MR_Word transform_hlds__intermod__V_61_61;
#line 2160 "intermod.m"
                              MR_Word transform_hlds__intermod__V_62_62;
#line 2160 "intermod.m"
                              MR_Word transform_hlds__intermod__V_63_63;
#line 2170 "intermod.m"
                              MR_Word transform_hlds__intermod__V_66_66;
#line 2170 "intermod.m"
                              MR_Word transform_hlds__intermod__V_67_67;
#line 2170 "intermod.m"
                              MR_Word transform_hlds__intermod__V_69_69;
#line 2170 "intermod.m"
                              MR_Word transform_hlds__intermod__V_70_70;
#line 2170 "intermod.m"
                              MR_Word transform_hlds__intermod__V_71_71;
#line 2170 "intermod.m"
                              MR_Word transform_hlds__intermod__V_72_72;
#line 2170 "intermod.m"
                              MR_Word transform_hlds__intermod__V_73_73;
#line 2170 "intermod.m"
                              MR_Word transform_hlds__intermod__V_74_74;
#line 2170 "intermod.m"
                              MR_Word transform_hlds__intermod__V_68_68;

#line 734 "intermod.m"
                              *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 2160 "intermod.m"
                              transform_hlds__intermod__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2160 "intermod.m"
                              transform_hlds__intermod__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2160 "intermod.m"
                              transform_hlds__intermod__PredDecls0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2160 "intermod.m"
                              transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2160 "intermod.m"
                              transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2160 "intermod.m"
                              transform_hlds__intermod__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2160 "intermod.m"
                              transform_hlds__intermod__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2160 "intermod.m"
                              transform_hlds__intermod__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2160 "intermod.m"
                              transform_hlds__intermod__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 736 "intermod.m"
                              {
#line 736 "intermod.m"
                                mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__intermod__PredId_5)), transform_hlds__intermod__PredDecls0_18, &transform_hlds__intermod__PredDecls_19);
                              }
#line 2170 "intermod.m"
                              transform_hlds__intermod__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2170 "intermod.m"
                              transform_hlds__intermod__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2170 "intermod.m"
                              transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2170 "intermod.m"
                              transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2170 "intermod.m"
                              transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2170 "intermod.m"
                              transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2170 "intermod.m"
                              transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2170 "intermod.m"
                              transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2170 "intermod.m"
                              transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 2170 "intermod.m"
                              {
#line 2170 "intermod.m"
                                MR_Word base;
#line 2170 "intermod.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2170 "intermod.m"
                                *transform_hlds__intermod__STATE_VARIABLE_Info_25 = base;
#line 2170 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_66_66));
#line 2170 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_67_67));
#line 2170 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__PredDecls_19));
#line 2170 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_69_69));
#line 2170 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_70_70));
#line 2170 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_71_71));
#line 2170 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_72_72));
#line 2170 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_73_73));
#line 2170 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_74_74));
#line 2170 "intermod.m"
                              }
#line 734 "intermod.m"
                            }
#line 738 "intermod.m"
                          else
#line 750 "intermod.m"
                            {
#line 740 "intermod.m"
                              if ((transform_hlds__intermod__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 740 "intermod.m"
                              else
#line 740 "intermod.m"
                                if (((MR_tag((MR_Word) transform_hlds__intermod__Status_10)) == (MR_mktag((MR_Integer) 2))))
#line 739 "intermod.m"
                                  (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 740 "intermod.m"
                                else
#line 740 "intermod.m"
                                  (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 750 "intermod.m"
                              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 745 "intermod.m"
                                {
#line 745 "intermod.m"
                                  MR_Word transform_hlds__intermod__PredModule_21;
#line 745 "intermod.m"
                                  MR_Word transform_hlds__intermod__Modules0_22;
#line 745 "intermod.m"
                                  MR_Word transform_hlds__intermod__Modules_23;
#line 2158 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_76_76;
#line 2158 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_77_77;
#line 2158 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_78_78;
#line 2158 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_79_79;
#line 2158 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_80_80;
#line 2158 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_81_81;
#line 2158 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_82_82;
#line 2158 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_83_83;
#line 2168 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_87_87;
#line 2168 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_88_88;
#line 2168 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_89_89;
#line 2168 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_90_90;
#line 2168 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_91_91;
#line 2168 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_92_92;
#line 2168 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_93_93;
#line 2168 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_94_94;
#line 2168 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_86_86;

#line 745 "intermod.m"
                                  *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 746 "intermod.m"
                                  {
#line 746 "intermod.m"
                                    transform_hlds__intermod__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
                                  }
#line 2158 "intermod.m"
                                  transform_hlds__intermod__Modules0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2158 "intermod.m"
                                  transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2158 "intermod.m"
                                  transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2158 "intermod.m"
                                  transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2158 "intermod.m"
                                  transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2158 "intermod.m"
                                  transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2158 "intermod.m"
                                  transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2158 "intermod.m"
                                  transform_hlds__intermod__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2158 "intermod.m"
                                  transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 748 "intermod.m"
                                  {
#line 748 "intermod.m"
                                    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__intermod__PredModule_21)), transform_hlds__intermod__Modules0_22, &transform_hlds__intermod__Modules_23);
                                  }
#line 2168 "intermod.m"
                                  transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2168 "intermod.m"
                                  transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2168 "intermod.m"
                                  transform_hlds__intermod__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2168 "intermod.m"
                                  transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2168 "intermod.m"
                                  transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2168 "intermod.m"
                                  transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2168 "intermod.m"
                                  transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2168 "intermod.m"
                                  transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2168 "intermod.m"
                                  transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 2168 "intermod.m"
                                  {
#line 2168 "intermod.m"
                                    MR_Word base;
#line 2168 "intermod.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2168 "intermod.m"
                                    *transform_hlds__intermod__STATE_VARIABLE_Info_25 = base;
#line 2168 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__Modules_23));
#line 2168 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2168 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_88_88));
#line 2168 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_89_89));
#line 2168 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_90_90));
#line 2168 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_91_91));
#line 2168 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_92_92));
#line 2168 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_93_93));
#line 2168 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_94_94));
#line 2168 "intermod.m"
                                  }
#line 745 "intermod.m"
                                }
#line 750 "intermod.m"
                              else
#line 751 "intermod.m"
                                {
#line 751 "intermod.m"
                                  {
#line 751 "intermod.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.add_proc_2\'/4", (MR_String) "unexpected status");
#line 751 "intermod.m"
                                    return;
                                  }
#line 751 "intermod.m"
                                }
#line 750 "intermod.m"
                            }
#line 738 "intermod.m"
                        }
#line 727 "intermod.m"
                    }
#line 718 "intermod.m"
                }
#line 705 "intermod.m"
            }
#line 675 "intermod.m"
        }
#line 638 "intermod.m"
    }
#line 635 "intermod.m"
  }
#line 635 "intermod.m"
}

#line 622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_4_p_0(
#line 622 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 622 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 622 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_8,
#line 622 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_9)
#line 622 "intermod.m"
{
#line 631 "intermod.m"
  {
#line 631 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 626 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 626 "intermod.m"
    {
#line 626 "intermod.m"
      transform_hlds__intermod__V_11_11 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 626 "intermod.m"
    {
#line 626 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_5, transform_hlds__intermod__V_11_11);
    }
#line 631 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 630 "intermod.m"
      {
#line 630 "intermod.m"
        *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 630 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_9 = transform_hlds__intermod__STATE_VARIABLE_Info_0_8;
#line 630 "intermod.m"
      }
#line 631 "intermod.m"
    else
#line 632 "intermod.m"
      {
#line 632 "intermod.m"
        transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_5, transform_hlds__intermod__DoWrite_6, transform_hlds__intermod__STATE_VARIABLE_Info_0_8, transform_hlds__intermod__STATE_VARIABLE_Info_9);
#line 632 "intermod.m"
        return;
      }
#line 631 "intermod.m"
  }
#line 622 "intermod.m"
}

#line 595 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_cases_5_p_0(
#line 595 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 595 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 595 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 595 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 595 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 595 "intermod.m"
{
#line 598 "intermod.m"
  {
#line 598 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 598 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "intermod.m"
      {
#line 598 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 598 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 598 "intermod.m"
      }
#line 598 "intermod.m"
    else
#line 599 "intermod.m"
      {
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__Case_11;
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__Cases_12;
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 0)));
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 1)));
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 2)));
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_18;
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22;
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_23_23;
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_17, (MR_Integer) 0)));
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_17, (MR_Integer) 1)));
#line 599 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_34;

#line 476 "intermod.m"
        {
#line 476 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_32, &transform_hlds__intermod__GoalExpr_34, &transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_23_23);
        }
#line 477 "intermod.m"
        {
#line 477 "intermod.m"
          transform_hlds__intermod__Goal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_18, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_34));
#line 477 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_18, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_33));
#line 477 "intermod.m"
        }
#line 602 "intermod.m"
        {
#line 602 "intermod.m"
          transform_hlds__intermod__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 602 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 0) = ((MR_Box) (transform_hlds__intermod__MainConsId_15));
#line 602 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 1) = ((MR_Box) (transform_hlds__intermod__OtherConsIds_16));
#line 602 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 2) = ((MR_Box) (transform_hlds__intermod__Goal_18));
#line 602 "intermod.m"
        }
#line 606 "intermod.m"
        if ((transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22 == (MR_Integer) 0))
#line 607 "intermod.m"
          {
#line 608 "intermod.m"
            transform_hlds__intermod__Cases_12 = transform_hlds__intermod__Cases0_10;
#line 608 "intermod.m"
            *transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22;
#line 608 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_23_23;
#line 607 "intermod.m"
          }
#line 606 "intermod.m"
        else
#line 605 "intermod.m"
          {
#line 605 "intermod.m"
            transform_hlds__intermod__intermod_traverse_cases_5_p_0(transform_hlds__intermod__Cases0_10, &transform_hlds__intermod__Cases_12, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__STATE_VARIABLE_Info_23_23, transform_hlds__intermod__STATE_VARIABLE_Info_5);
          }
#line 599 "intermod.m"
        {
#line 599 "intermod.m"
          MR_Word base;
#line 599 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "intermod.m"
          *transform_hlds__intermod__HeadVar__2_2 = base;
#line 599 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Case_11));
#line 599 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Cases_12));
#line 599 "intermod.m"
        }
#line 599 "intermod.m"
      }
#line 598 "intermod.m"
  }
#line 595 "intermod.m"
}

#line 580 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(
#line 580 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 580 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 580 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 580 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 580 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 580 "intermod.m"
{
#line 583 "intermod.m"
  {
#line 583 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 583 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "intermod.m"
      {
#line 583 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 583 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 583 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 583 "intermod.m"
      }
#line 583 "intermod.m"
    else
#line 585 "intermod.m"
      {
#line 585 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 585 "intermod.m"
        MR_Word transform_hlds__intermod__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 585 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_11;
#line 585 "intermod.m"
        MR_Word transform_hlds__intermod__Goals_12;
#line 585 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18;
#line 585 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_19_19;
#line 585 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 0)));
#line 585 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 1)));
#line 585 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_30;

#line 476 "intermod.m"
        {
#line 476 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_28, &transform_hlds__intermod__GoalExpr_30, &transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_19_19);
        }
#line 477 "intermod.m"
        {
#line 477 "intermod.m"
          transform_hlds__intermod__Goal_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_11, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_30));
#line 477 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_11, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_29));
#line 477 "intermod.m"
        }
#line 590 "intermod.m"
        if ((transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18 == (MR_Integer) 0))
#line 591 "intermod.m"
          {
#line 592 "intermod.m"
            transform_hlds__intermod__Goals_12 = transform_hlds__intermod__Goals0_10;
#line 592 "intermod.m"
            *transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18;
#line 592 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_19_19;
#line 591 "intermod.m"
          }
#line 590 "intermod.m"
        else
#line 589 "intermod.m"
          {
#line 589 "intermod.m"
            transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__Goals0_10, &transform_hlds__intermod__Goals_12, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__STATE_VARIABLE_Info_19_19, transform_hlds__intermod__STATE_VARIABLE_Info_5);
          }
#line 585 "intermod.m"
        {
#line 585 "intermod.m"
          MR_Word base;
#line 585 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "intermod.m"
          *transform_hlds__intermod__HeadVar__2_2 = base;
#line 585 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Goal_11));
#line 585 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Goals_12));
#line 585 "intermod.m"
        }
#line 585 "intermod.m"
      }
#line 583 "intermod.m"
  }
#line 580 "intermod.m"
}

#line 479 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(
#line 479 "intermod.m"
  MR_Word transform_hlds__intermod__GoalExpr0_6,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__GoalExpr_7,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 479 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_81,
#line 479 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_82)
#line 479 "intermod.m"
{
#line 484 "intermod.m"
  {
#line 484 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 484 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 0))))
#line 546 "intermod.m"
      {
#line 546 "intermod.m"
        MR_Word transform_hlds__intermod__SubGoal0_63 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__GoalExpr0_6), (MR_Integer) 0);
#line 546 "intermod.m"
        MR_Word transform_hlds__intermod__SubGoal_64;

#line 547 "intermod.m"
        {
#line 547 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_63, &transform_hlds__intermod__SubGoal_64, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
        }
#line 548 "intermod.m"
        *transform_hlds__intermod__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__SubGoal_64);
#line 546 "intermod.m"
      }
#line 484 "intermod.m"
    else
#line 484 "intermod.m"
      if (((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 2))))
#line 490 "intermod.m"
        {
#line 490 "intermod.m"
          MR_Word transform_hlds__intermod__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)));
#line 490 "intermod.m"
          MR_Integer transform_hlds__intermod__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 490 "intermod.m"
          MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 490 "intermod.m"
          MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 490 "intermod.m"
          MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 490 "intermod.m"
          MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));

#line 492 "intermod.m"
          {
#line 492 "intermod.m"
            transform_hlds__intermod__add_proc_4_p_0(transform_hlds__intermod__PredId_16, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
          }
#line 493 "intermod.m"
          *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 490 "intermod.m"
        }
#line 484 "intermod.m"
      else
#line 484 "intermod.m"
        if (((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 1))))
#line 484 "intermod.m"
          {
#line 484 "intermod.m"
            MR_Word transform_hlds__intermod__LVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)));
#line 484 "intermod.m"
            MR_Word transform_hlds__intermod__RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 484 "intermod.m"
            MR_Word transform_hlds__intermod__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 484 "intermod.m"
            MR_Word transform_hlds__intermod__Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 484 "intermod.m"
            MR_Word transform_hlds__intermod__UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 484 "intermod.m"
            MR_Word transform_hlds__intermod__RHS_15;

#line 487 "intermod.m"
            {
#line 487 "intermod.m"
              transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(transform_hlds__intermod__RHS0_11, &transform_hlds__intermod__RHS_15, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
            }
#line 488 "intermod.m"
            {
#line 488 "intermod.m"
              MR_Word base;
#line 488 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 488 "intermod.m"
              *transform_hlds__intermod__GoalExpr_7 = base;
#line 488 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__LVar_10));
#line 488 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__RHS_15));
#line 488 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__intermod__Mode_12));
#line 488 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__intermod__Kind_13));
#line 488 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__intermod__UnifyContext_14));
#line 488 "intermod.m"
            }
#line 484 "intermod.m"
          }
#line 484 "intermod.m"
        else
#line 484 "intermod.m"
          if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 508 "intermod.m"
            {
#line 508 "intermod.m"
              MR_Word transform_hlds__intermod__Attrs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 508 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeMayDuplicate_44;
#line 508 "intermod.m"
              MR_Word transform_hlds__intermod__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 508 "intermod.m"
              MR_Integer transform_hlds__intermod__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 508 "intermod.m"
              MR_Word transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 508 "intermod.m"
              MR_Word transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));
#line 508 "intermod.m"
              MR_Word transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 6)));
#line 508 "intermod.m"
              MR_Word transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 7)));

#line 509 "intermod.m"
              *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 512 "intermod.m"
              {
#line 512 "intermod.m"
                transform_hlds__intermod__MaybeMayDuplicate_44 = parse_tree__prog_data__get_may_duplicate_1_f_0(transform_hlds__intermod__Attrs_37);
              }
#line 522 "intermod.m"
              if ((transform_hlds__intermod__MaybeMayDuplicate_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 524 "intermod.m"
                *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 522 "intermod.m"
              else
#line 514 "intermod.m"
                {
#line 514 "intermod.m"
                  MR_Word transform_hlds__intermod__MayDuplicate_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeMayDuplicate_44, (MR_Integer) 0)));

#line 518 "intermod.m"
                  if ((transform_hlds__intermod__MayDuplicate_45 == (MR_Integer) 0))
#line 517 "intermod.m"
                    *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 518 "intermod.m"
                  else
#line 520 "intermod.m"
                    *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 514 "intermod.m"
                }
#line 524 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_82 = transform_hlds__intermod__STATE_VARIABLE_Info_0_81;
#line 508 "intermod.m"
            }
#line 484 "intermod.m"
          else
#line 484 "intermod.m"
            if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 527 "intermod.m"
              {
#line 527 "intermod.m"
                MR_Word transform_hlds__intermod__ConjType_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 527 "intermod.m"
                MR_Word transform_hlds__intermod__Goals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 527 "intermod.m"
                MR_Word transform_hlds__intermod__Goals_48;

#line 528 "intermod.m"
                {
#line 528 "intermod.m"
                  transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__Goals0_47, &transform_hlds__intermod__Goals_48, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                }
#line 529 "intermod.m"
                {
#line 529 "intermod.m"
                  MR_Word base;
#line 529 "intermod.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 529 "intermod.m"
                  *transform_hlds__intermod__GoalExpr_7 = base;
#line 529 "intermod.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 529 "intermod.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__ConjType_46));
#line 529 "intermod.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__Goals_48));
#line 529 "intermod.m"
                }
#line 527 "intermod.m"
              }
#line 484 "intermod.m"
            else
#line 484 "intermod.m"
              if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 531 "intermod.m"
                {
#line 531 "intermod.m"
                  MR_Word transform_hlds__intermod__Goals0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 531 "intermod.m"
                  MR_Word transform_hlds__intermod__Goals_104;

#line 532 "intermod.m"
                  {
#line 532 "intermod.m"
                    transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__Goals0_103, &transform_hlds__intermod__Goals_104, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                  }
#line 533 "intermod.m"
                  {
#line 533 "intermod.m"
                    MR_Word base;
#line 533 "intermod.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "intermod.m"
                    *transform_hlds__intermod__GoalExpr_7 = base;
#line 533 "intermod.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 533 "intermod.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Goals_104));
#line 533 "intermod.m"
                  }
#line 531 "intermod.m"
                }
#line 484 "intermod.m"
              else
#line 484 "intermod.m"
                if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 495 "intermod.m"
                  {
#line 495 "intermod.m"
                    MR_Word transform_hlds__intermod__CallType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 495 "intermod.m"
                    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 495 "intermod.m"
                    MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 495 "intermod.m"
                    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 495 "intermod.m"
                    MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));

#line 496 "intermod.m"
                    *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 500 "intermod.m"
                    if (((MR_tag((MR_Word) transform_hlds__intermod__CallType_22)) == (MR_mktag((MR_Integer) 0))))
#line 499 "intermod.m"
                      *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 500 "intermod.m"
                    else
#line 505 "intermod.m"
                      *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 505 "intermod.m"
                    *transform_hlds__intermod__STATE_VARIABLE_Info_82 = transform_hlds__intermod__STATE_VARIABLE_Info_0_81;
#line 495 "intermod.m"
                  }
#line 484 "intermod.m"
                else
#line 484 "intermod.m"
                  if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 539 "intermod.m"
                    {
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__Vars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__Cond0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__Then0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__Else0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__Cond_57;
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__DoWrite1_58;
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__Then_59;
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__DoWrite2_60;
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__Else_61;
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__DoWrite3_62;
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_91_91;
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_92_92;
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__V_94_94;
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__V_95_95;
#line 539 "intermod.m"
                      MR_Word transform_hlds__intermod__V_96_96;

#line 540 "intermod.m"
                      {
#line 540 "intermod.m"
                        transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Cond0_54, &transform_hlds__intermod__Cond_57, &transform_hlds__intermod__DoWrite1_58, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, &transform_hlds__intermod__STATE_VARIABLE_Info_91_91);
                      }
#line 541 "intermod.m"
                      {
#line 541 "intermod.m"
                        transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Then0_55, &transform_hlds__intermod__Then_59, &transform_hlds__intermod__DoWrite2_60, transform_hlds__intermod__STATE_VARIABLE_Info_91_91, &transform_hlds__intermod__STATE_VARIABLE_Info_92_92);
                      }
#line 542 "intermod.m"
                      {
#line 542 "intermod.m"
                        transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Else0_56, &transform_hlds__intermod__Else_61, &transform_hlds__intermod__DoWrite3_62, transform_hlds__intermod__STATE_VARIABLE_Info_92_92, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                      }
#line 543 "intermod.m"
                      {
#line 543 "intermod.m"
                        transform_hlds__intermod__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_96_96, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite3_62));
#line 543 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 543 "intermod.m"
                      }
#line 543 "intermod.m"
                      {
#line 543 "intermod.m"
                        transform_hlds__intermod__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_95_95, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite2_60));
#line 543 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_95_95, 1) = ((MR_Box) (transform_hlds__intermod__V_96_96));
#line 543 "intermod.m"
                      }
#line 543 "intermod.m"
                      {
#line 543 "intermod.m"
                        transform_hlds__intermod__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_94_94, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite1_58));
#line 543 "intermod.m"
                        MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_94_94, 1) = ((MR_Box) (transform_hlds__intermod__V_95_95));
#line 543 "intermod.m"
                      }
#line 543 "intermod.m"
                      {
#line 543 "intermod.m"
                        mercury__bool__and_list_2_p_0(transform_hlds__intermod__V_94_94, transform_hlds__intermod__DoWrite_8);
                      }
#line 544 "intermod.m"
                      {
#line 544 "intermod.m"
                        MR_Word base;
#line 544 "intermod.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 544 "intermod.m"
                        *transform_hlds__intermod__GoalExpr_7 = base;
#line 544 "intermod.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 544 "intermod.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Vars_53));
#line 544 "intermod.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__Cond_57));
#line 544 "intermod.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__intermod__Then_59));
#line 544 "intermod.m"
                        MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__intermod__Else_61));
#line 544 "intermod.m"
                      }
#line 539 "intermod.m"
                    }
#line 484 "intermod.m"
                  else
#line 484 "intermod.m"
                    if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 550 "intermod.m"
                      {
#line 550 "intermod.m"
                        MR_Word transform_hlds__intermod__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 550 "intermod.m"
                        MR_Word transform_hlds__intermod__SubGoal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 550 "intermod.m"
                        MR_Word transform_hlds__intermod__SubGoal_106;

#line 555 "intermod.m"
                        {
#line 555 "intermod.m"
                          transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_105, &transform_hlds__intermod__SubGoal_106, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                        }
#line 556 "intermod.m"
                        {
#line 556 "intermod.m"
                          MR_Word base;
#line 556 "intermod.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 556 "intermod.m"
                          *transform_hlds__intermod__GoalExpr_7 = base;
#line 556 "intermod.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 556 "intermod.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Reason_65));
#line 556 "intermod.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__SubGoal_106));
#line 556 "intermod.m"
                        }
#line 550 "intermod.m"
                      }
#line 484 "intermod.m"
                    else
#line 484 "intermod.m"
                      if (((((MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 558 "intermod.m"
                        {
#line 558 "intermod.m"
                          MR_Word transform_hlds__intermod__ShortHand0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 558 "intermod.m"
                          MR_Word transform_hlds__intermod__ShortHand_76;

#line 568 "intermod.m"
                          if (((MR_tag((MR_Word) transform_hlds__intermod__ShortHand0_66)) == (MR_mktag((MR_Integer) 1))))
#line 561 "intermod.m"
                            {
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__GoalType_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 0)));
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__Outer_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 1)));
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__Inner_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 2)));
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__MaybeOutputVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 3)));
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__MainGoal0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 4)));
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__OrElseGoals0_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 5)));
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__OrElseInners_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 6)));
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__MainGoal_74;
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__OrElseGoals_75;
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_87_87;
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__DoWrite1_107;
#line 561 "intermod.m"
                              MR_Word transform_hlds__intermod__DoWrite2_108;

#line 562 "intermod.m"
                              {
#line 562 "intermod.m"
                                transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__MainGoal0_71, &transform_hlds__intermod__MainGoal_74, &transform_hlds__intermod__DoWrite1_107, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, &transform_hlds__intermod__STATE_VARIABLE_Info_87_87);
                              }
#line 563 "intermod.m"
                              {
#line 563 "intermod.m"
                                transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__OrElseGoals0_72, &transform_hlds__intermod__OrElseGoals_75, &transform_hlds__intermod__DoWrite2_108, transform_hlds__intermod__STATE_VARIABLE_Info_87_87, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                              }
#line 565 "intermod.m"
                              {
#line 565 "intermod.m"
                                mercury__bool__and_3_p_0(transform_hlds__intermod__DoWrite1_107, transform_hlds__intermod__DoWrite2_108, transform_hlds__intermod__DoWrite_8);
                              }
#line 566 "intermod.m"
                              {
#line 566 "intermod.m"
                                transform_hlds__intermod__ShortHand_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 566 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 0) = ((MR_Box) (transform_hlds__intermod__GoalType_67));
#line 566 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 1) = ((MR_Box) (transform_hlds__intermod__Outer_68));
#line 566 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 2) = ((MR_Box) (transform_hlds__intermod__Inner_69));
#line 566 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 3) = ((MR_Box) (transform_hlds__intermod__MaybeOutputVars_70));
#line 566 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 4) = ((MR_Box) (transform_hlds__intermod__MainGoal_74));
#line 566 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 5) = ((MR_Box) (transform_hlds__intermod__OrElseGoals_75));
#line 566 "intermod.m"
                                MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 6) = ((MR_Box) (transform_hlds__intermod__OrElseInners_73));
#line 566 "intermod.m"
                              }
#line 561 "intermod.m"
                            }
#line 568 "intermod.m"
                          else
#line 568 "intermod.m"
                            if (((MR_tag((MR_Word) transform_hlds__intermod__ShortHand0_66)) == (MR_mktag((MR_Integer) 0))))
#line 573 "intermod.m"
                              {
#line 575 "intermod.m"
                                {
#line 575 "intermod.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_traverse_goal_expr\'/5", (MR_String) "bi_implication");
#line 575 "intermod.m"
                                  return;
                                }
#line 573 "intermod.m"
                              }
#line 568 "intermod.m"
                            else
#line 569 "intermod.m"
                              {
#line 569 "intermod.m"
                                MR_Word transform_hlds__intermod__MaybeIO_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 0)));
#line 569 "intermod.m"
                                MR_Word transform_hlds__intermod__ResultVar_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 1)));
#line 569 "intermod.m"
                                MR_Word transform_hlds__intermod__SubGoal0_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 2)));
#line 569 "intermod.m"
                                MR_Word transform_hlds__intermod__SubGoal_110;

#line 570 "intermod.m"
                                {
#line 570 "intermod.m"
                                  transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_109, &transform_hlds__intermod__SubGoal_110, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                                }
#line 571 "intermod.m"
                                {
#line 571 "intermod.m"
                                  transform_hlds__intermod__ShortHand_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 571 "intermod.m"
                                  MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 0) = ((MR_Box) (transform_hlds__intermod__MaybeIO_77));
#line 571 "intermod.m"
                                  MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 1) = ((MR_Box) (transform_hlds__intermod__ResultVar_78));
#line 571 "intermod.m"
                                  MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 2) = ((MR_Box) (transform_hlds__intermod__SubGoal_110));
#line 571 "intermod.m"
                                }
#line 569 "intermod.m"
                              }
#line 577 "intermod.m"
                          {
#line 577 "intermod.m"
                            MR_Word base;
#line 577 "intermod.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "intermod.m"
                            *transform_hlds__intermod__GoalExpr_7 = base;
#line 577 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 577 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__ShortHand_76));
#line 577 "intermod.m"
                          }
#line 558 "intermod.m"
                        }
#line 484 "intermod.m"
                      else
#line 535 "intermod.m"
                        {
#line 535 "intermod.m"
                          MR_Word transform_hlds__intermod__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 535 "intermod.m"
                          MR_Word transform_hlds__intermod__CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 535 "intermod.m"
                          MR_Word transform_hlds__intermod__Cases0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 535 "intermod.m"
                          MR_Word transform_hlds__intermod__Cases_52;

#line 536 "intermod.m"
                          {
#line 536 "intermod.m"
                            transform_hlds__intermod__intermod_traverse_cases_5_p_0(transform_hlds__intermod__Cases0_51, &transform_hlds__intermod__Cases_52, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                          }
#line 537 "intermod.m"
                          {
#line 537 "intermod.m"
                            MR_Word base;
#line 537 "intermod.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 537 "intermod.m"
                            *transform_hlds__intermod__GoalExpr_7 = base;
#line 537 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 537 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Var_49));
#line 537 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__CanFail_50));
#line 537 "intermod.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__intermod__Cases_52));
#line 537 "intermod.m"
                          }
#line 535 "intermod.m"
                        }
#line 484 "intermod.m"
  }
#line 479 "intermod.m"
}

#line 471 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_5_p_0(
#line 471 "intermod.m"
  MR_Word transform_hlds__intermod__Goal0_6,
#line 471 "intermod.m"
  MR_Word * transform_hlds__intermod__Goal_7,
#line 471 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 471 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_13,
#line 471 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_14)
#line 471 "intermod.m"
{
#line 474 "intermod.m"
  {
#line 474 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 474 "intermod.m"
    MR_Word transform_hlds__intermod__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_6, (MR_Integer) 0)));
#line 474 "intermod.m"
    MR_Word transform_hlds__intermod__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_6, (MR_Integer) 1)));
#line 474 "intermod.m"
    MR_Word transform_hlds__intermod__GoalExpr_12;

#line 476 "intermod.m"
    {
#line 476 "intermod.m"
      transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_10, &transform_hlds__intermod__GoalExpr_12, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_13, transform_hlds__intermod__STATE_VARIABLE_Info_14);
    }
#line 477 "intermod.m"
    {
#line 477 "intermod.m"
      MR_Word base;
#line 477 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "intermod.m"
      *transform_hlds__intermod__Goal_7 = base;
#line 477 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_12));
#line 477 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_11));
#line 477 "intermod.m"
    }
#line 474 "intermod.m"
  }
#line 471 "intermod.m"
}

#line 456 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
#line 456 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 456 "intermod.m"
{
#line 456 "intermod.m"
  {
#line 456 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 456 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0, 1);
#line 456 "intermod.m"
  }
#line 456 "intermod.m"
}

#line 456 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
#line 456 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 456 "intermod.m"
{
#line 456 "intermod.m"
  {
#line 456 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 466 "intermod.m"
    {
#line 466 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8);
    }
#line 466 "intermod.m"
    if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 466 "intermod.m"
      {
#line 466 "intermod.m"
        transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(transform_hlds__intermod__env_ptr);
#line 466 "intermod.m"
        return;
      }
#line 456 "intermod.m"
  }
#line 456 "intermod.m"
}

#line 456 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
#line 456 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 456 "intermod.m"
{
#line 456 "intermod.m"
  {
#line 456 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 456 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0) == 0)
#line 456 "intermod.m"
      {
#line 456 "intermod.m"
        {
#line 456 "intermod.m"
          MR_Word transform_hlds__intermod__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)));
#line 456 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr_6;
#line 457 "intermod.m"
          MR_Word transform_hlds__intermod__V_7_7;

#line 456 "intermod.m"
          (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
#line 457 "intermod.m"
          transform_hlds__intermod__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_3, (MR_Integer) 0)));
#line 457 "intermod.m"
          transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_3, (MR_Integer) 1)));
#line 459 "intermod.m"
          {
#line 459 "intermod.m"
            (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__intermod__GoalExpr_6);
          }
#line 459 "intermod.m"
          if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 459 "intermod.m"
            {
#line 460 "intermod.m"
              (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 0);
#line 459 "intermod.m"
              if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 459 "intermod.m"
                {
#line 461 "intermod.m"
                  (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (MR_Integer) 1;
#line 461 "intermod.m"
                  (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 459 "intermod.m"
                }
#line 459 "intermod.m"
            }
#line 459 "intermod.m"
          if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 459 "intermod.m"
            {
#line 459 "intermod.m"
              transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(transform_hlds__intermod__env_ptr);
            }
#line 463 "intermod.m"
          {
#line 463 "intermod.m"
            MR_Word transform_hlds__intermod__V_9_9;

#line 463 "intermod.m"
            {
#line 463 "intermod.m"
              transform_hlds__intermod__V_9_9 = hlds__hlds_goal__goal_expr_has_subgoals_1_f_0(transform_hlds__intermod__GoalExpr_6);
            }
#line 463 "intermod.m"
            (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = (transform_hlds__intermod__V_9_9 == (MR_Integer) 1);
#line 463 "intermod.m"
            if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 463 "intermod.m"
              {
#line 464 "intermod.m"
                (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
#line 464 "intermod.m"
                (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 463 "intermod.m"
              }
#line 463 "intermod.m"
            if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 463 "intermod.m"
              {
#line 463 "intermod.m"
                transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(transform_hlds__intermod__env_ptr);
              }
#line 463 "intermod.m"
          }
#line 456 "intermod.m"
        }
#line 456 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_FALSE;
#line 456 "intermod.m"
      }
#line 456 "intermod.m"
    else
#line 456 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 456 "intermod.m"
  }
#line 456 "intermod.m"
}

#line 452 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
#line 452 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 452 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 452 "intermod.m"
{
#line 452 "intermod.m"
  {
#line 452 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s transform_hlds__intermod__env;

#line 452 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1_1;
#line 452 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2_2;
#line 455 "intermod.m"
    if (((transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "intermod.m"
      (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 1);
#line 455 "intermod.m"
    else
#line 456 "intermod.m"
      {
#line 456 "intermod.m"
        {
#line 456 "intermod.m"
          transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(&transform_hlds__intermod__env);
        }
#line 456 "intermod.m"
      }
#line 455 "intermod.m"
    return (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
#line 452 "intermod.m"
  }
#line 452 "intermod.m"
}

#line 414 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__check_for_ho_input_args_4_p_0(
#line 414 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_5,
#line 414 "intermod.m"
  MR_Word transform_hlds__intermod__VarTypes_6,
#line 414 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 414 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4)
#line 414 "intermod.m"
{
#line 418 "intermod.m"
  while (MR_TRUE)
#line 418 "intermod.m"
    {
#line 418 "intermod.m"
      /* tailcall optimized into a loop */
#line 418 "intermod.m"
      {
#line 418 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 418 "intermod.m"
        MR_Word transform_hlds__intermod__HeadVar_7;
#line 418 "intermod.m"
        MR_Word transform_hlds__intermod__HeadVars_8;
#line 418 "intermod.m"
        MR_Word transform_hlds__intermod__ArgMode_9;
#line 418 "intermod.m"
        MR_Word transform_hlds__intermod__ArgModes_10;

#line 418 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 418 "intermod.m"
          {
#line 418 "intermod.m"
            transform_hlds__intermod__HeadVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 418 "intermod.m"
            transform_hlds__intermod__HeadVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 418 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 418 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 418 "intermod.m"
              {
#line 418 "intermod.m"
                transform_hlds__intermod__ArgMode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 418 "intermod.m"
                transform_hlds__intermod__ArgModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 1)));
#line 420 "intermod.m"
                {
#line 420 "intermod.m"
                  MR_Word transform_hlds__intermod__Type_11;
#line 420 "intermod.m"
                  MR_Word transform_hlds__intermod__V_12_12;

#line 420 "intermod.m"
                  {
#line 420 "intermod.m"
                    transform_hlds__intermod__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__intermod__ModuleInfo_5, transform_hlds__intermod__ArgMode_9);
                  }
#line 420 "intermod.m"
                  if (transform_hlds__intermod__succeeded)
#line 420 "intermod.m"
                    {
#line 421 "intermod.m"
                      {
#line 421 "intermod.m"
                        parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__intermod__VarTypes_6, transform_hlds__intermod__HeadVar_7, &transform_hlds__intermod__Type_11);
                      }
#line 422 "intermod.m"
                      {
#line 422 "intermod.m"
                        transform_hlds__intermod__V_12_12 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__intermod__ModuleInfo_5, transform_hlds__intermod__Type_11);
                      }
#line 422 "intermod.m"
                      transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "intermod.m"
                    }
#line 420 "intermod.m"
                }
#line 423 "intermod.m"
                if (!(transform_hlds__intermod__succeeded))
#line 424 "intermod.m"
                  {
#line 424 "intermod.m"
                    /* direct tailcall eliminated */
#line 424 "intermod.m"
                    {
#line 424 "intermod.m"
                      MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__HeadVars_8;
#line 424 "intermod.m"
                      MR_Word transform_hlds__intermod__HeadVar__4__tmp_copy_4 = transform_hlds__intermod__ArgModes_10;

#line 424 "intermod.m"
                      transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__4__tmp_copy_4;
#line 424 "intermod.m"
                      transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 424 "intermod.m"
                    }
#line 424 "intermod.m"
                    continue;
#line 424 "intermod.m"
                  }
#line 418 "intermod.m"
              }
#line 418 "intermod.m"
          }
#line 418 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 418 "intermod.m"
      }
#line 418 "intermod.m"
      break;
#line 418 "intermod.m"
    }
#line 414 "intermod.m"
}

#line 388 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_clauses_5_p_0(
#line 388 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 388 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 388 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 388 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 388 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 388 "intermod.m"
{
#line 391 "intermod.m"
  {
#line 391 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 391 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "intermod.m"
      {
#line 391 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 391 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 391 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 391 "intermod.m"
      }
#line 391 "intermod.m"
    else
#line 393 "intermod.m"
      {
#line 393 "intermod.m"
        MR_Word transform_hlds__intermod__Clause0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 393 "intermod.m"
        MR_Word transform_hlds__intermod__Clauses0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 393 "intermod.m"
        MR_Word transform_hlds__intermod__Clause_11;
#line 393 "intermod.m"
        MR_Word transform_hlds__intermod__Clauses_12;
#line 393 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_15;
#line 393 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_16;
#line 393 "intermod.m"
        MR_Word transform_hlds__intermod__DoWrite1_17;
#line 393 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_20_20;
#line 393 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_33;
#line 393 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_34;
#line 393 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_35;
#line 396 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;
#line 396 "intermod.m"
        MR_Word transform_hlds__intermod__V_24_24;
#line 396 "intermod.m"
        MR_Word transform_hlds__intermod__V_25_25;
#line 396 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26;
#line 396 "intermod.m"
        MR_Word transform_hlds__intermod__V_23_23;

#line 394 "intermod.m"
        {
#line 394 "intermod.m"
          transform_hlds__intermod__Goal0_15 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__Clause0_9);
        }
#line 475 "intermod.m"
        transform_hlds__intermod__GoalExpr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_15, (MR_Integer) 0)));
#line 475 "intermod.m"
        transform_hlds__intermod__GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_15, (MR_Integer) 1)));
#line 476 "intermod.m"
        {
#line 476 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_33, &transform_hlds__intermod__GoalExpr_35, &transform_hlds__intermod__DoWrite1_17, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_20_20);
        }
#line 477 "intermod.m"
        {
#line 477 "intermod.m"
          transform_hlds__intermod__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_16, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_35));
#line 477 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_16, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_34));
#line 477 "intermod.m"
        }
#line 396 "intermod.m"
        transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 0)));
#line 396 "intermod.m"
        transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 1)));
#line 396 "intermod.m"
        transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 2)));
#line 396 "intermod.m"
        transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 3)));
#line 396 "intermod.m"
        transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 4)));
#line 396 "intermod.m"
        {
#line 396 "intermod.m"
          transform_hlds__intermod__Clause_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 396 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 0) = ((MR_Box) (transform_hlds__intermod__V_22_22));
#line 396 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 1) = ((MR_Box) (transform_hlds__intermod__Goal_16));
#line 396 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 2) = ((MR_Box) (transform_hlds__intermod__V_24_24));
#line 396 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 3) = ((MR_Box) (transform_hlds__intermod__V_25_25));
#line 396 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 4) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 396 "intermod.m"
        }
#line 400 "intermod.m"
        if ((transform_hlds__intermod__DoWrite1_17 == (MR_Integer) 0))
#line 401 "intermod.m"
          {
#line 402 "intermod.m"
            transform_hlds__intermod__Clauses_12 = transform_hlds__intermod__Clauses0_10;
#line 403 "intermod.m"
            *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 0;
#line 403 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_20_20;
#line 401 "intermod.m"
          }
#line 400 "intermod.m"
        else
#line 399 "intermod.m"
          {
#line 399 "intermod.m"
            transform_hlds__intermod__intermod_traverse_clauses_5_p_0(transform_hlds__intermod__Clauses0_10, &transform_hlds__intermod__Clauses_12, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__STATE_VARIABLE_Info_20_20, transform_hlds__intermod__STATE_VARIABLE_Info_5);
          }
#line 393 "intermod.m"
        {
#line 393 "intermod.m"
          MR_Word base;
#line 393 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "intermod.m"
          *transform_hlds__intermod__HeadVar__2_2 = base;
#line 393 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Clause_11));
#line 393 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Clauses_12));
#line 393 "intermod.m"
        }
#line 393 "intermod.m"
      }
#line 391 "intermod.m"
  }
#line 388 "intermod.m"
}

#line 377 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(
#line 377 "intermod.m"
  MR_Word transform_hlds__intermod__Target_1,
#line 377 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 377 "intermod.m"
{
#line 380 "intermod.m"
  while (MR_TRUE)
#line 380 "intermod.m"
    {
#line 380 "intermod.m"
      /* tailcall optimized into a loop */
#line 380 "intermod.m"
      {
#line 380 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 380 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15;
#line 380 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16;

#line 380 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 380 "intermod.m"
          {
#line 380 "intermod.m"
            transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "intermod.m"
            transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 380 "intermod.m"
            {
#line 380 "intermod.m"
              MR_Word transform_hlds__intermod__Lang_6;
#line 380 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignLang_7;
#line 382 "intermod.m"
              MR_Word transform_hlds__intermod__V_11_11;
#line 382 "intermod.m"
              MR_Word transform_hlds__intermod__V_12_12;
#line 382 "intermod.m"
              MR_Word transform_hlds__intermod__V_13_13;
#line 382 "intermod.m"
              MR_Word transform_hlds__intermod__V_14_14;

#line 381 "intermod.m"
              transform_hlds__intermod__succeeded = (transform_hlds__intermod__Target_1 == (MR_Integer) 1);
#line 380 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 380 "intermod.m"
                {
#line 382 "intermod.m"
                  transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 0)));
#line 382 "intermod.m"
                  transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 1)));
#line 382 "intermod.m"
                  transform_hlds__intermod__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 2)));
#line 382 "intermod.m"
                  transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 3)));
#line 382 "intermod.m"
                  transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 4)));
#line 383 "intermod.m"
                  transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Lang_6)) == (MR_mktag((MR_Integer) 1)));
#line 383 "intermod.m"
                  if (transform_hlds__intermod__succeeded)
#line 383 "intermod.m"
                    {
#line 383 "intermod.m"
                      transform_hlds__intermod__ForeignLang_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Lang_6, (MR_Integer) 0)));
#line 384 "intermod.m"
                      transform_hlds__intermod__succeeded = (transform_hlds__intermod__ForeignLang_7 == (MR_Integer) 1);
#line 383 "intermod.m"
                    }
#line 380 "intermod.m"
                }
#line 380 "intermod.m"
            }
#line 380 "intermod.m"
            if (!(transform_hlds__intermod__succeeded))
#line 386 "intermod.m"
              {
#line 386 "intermod.m"
                /* direct tailcall eliminated */
#line 386 "intermod.m"
                {
#line 386 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__2__tmp_copy_2 = transform_hlds__intermod__V_15_15;

#line 386 "intermod.m"
                  transform_hlds__intermod__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2__tmp_copy_2;
#line 386 "intermod.m"
                }
#line 386 "intermod.m"
                continue;
#line 386 "intermod.m"
              }
#line 380 "intermod.m"
          }
#line 380 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 380 "intermod.m"
      }
#line 380 "intermod.m"
      break;
#line 380 "intermod.m"
    }
#line 377 "intermod.m"
}

#line 434 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_1(
#line 434 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 434 "intermod.m"
{
#line 434 "intermod.m"
  {
#line 434 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 434 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0, 1);
#line 434 "intermod.m"
  }
#line 434 "intermod.m"
}

#line 434 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_3(
#line 434 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 434 "intermod.m"
{
#line 434 "intermod.m"
  {
#line 434 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 434 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70 = ((MR_Word) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70);
#line 434 "intermod.m"
    {
#line 434 "intermod.m"
      transform_hlds__intermod__should_be_processed_8_p_0_2(transform_hlds__intermod__env_ptr);
#line 434 "intermod.m"
      return;
    }
#line 434 "intermod.m"
  }
#line 434 "intermod.m"
}

#line 434 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_2(
#line 434 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 434 "intermod.m"
{
#line 434 "intermod.m"
  {
#line 434 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 435 "intermod.m"
    {
#line 435 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61 = hlds__hlds_clauses__clause_body_1_f_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70);
    }
#line 436 "intermod.m"
    {
#line 436 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10);
    }
#line 436 "intermod.m"
    if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 436 "intermod.m"
      {
#line 436 "intermod.m"
        transform_hlds__intermod__should_be_processed_8_p_0_1(transform_hlds__intermod__env_ptr);
#line 436 "intermod.m"
        return;
      }
#line 434 "intermod.m"
  }
#line 434 "intermod.m"
}

#line 434 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_4(
#line 434 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 434 "intermod.m"
{
#line 434 "intermod.m"
  {
#line 434 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 434 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0) == 0)
#line 434 "intermod.m"
      {
#line 434 "intermod.m"
        {
#line 434 "intermod.m"
          {
#line 434 "intermod.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__should_be_processed_8_p_0_3, transform_hlds__intermod__env_ptr);
          }
#line 434 "intermod.m"
        }
#line 434 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_FALSE;
#line 434 "intermod.m"
      }
#line 434 "intermod.m"
    else
#line 434 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_TRUE;
#line 434 "intermod.m"
  }
#line 434 "intermod.m"
}

#line 289 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0(
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_9,
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_10,
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__PredInfo_11,
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__TypeSpecForcePreds_12,
#line 289 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_13,
#line 289 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_14,
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_15,
#line 289 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_16)
#line 289 "intermod.m"
{
#line 289 "intermod.m"
  {
#line 289 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s transform_hlds__intermod__env;

#line 289 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10 = transform_hlds__intermod__PredId_10;
#line 300 "intermod.m"
    if ((transform_hlds__intermod__ProcessLocalPreds_9 == (MR_Integer) 0))
#line 298 "intermod.m"
      {
#line 297 "intermod.m"
        {
#line 297 "intermod.m"
          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__intermod__PredInfo_11);
        }
#line 298 "intermod.m"
        if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 298 "intermod.m"
          {
#line 298 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(transform_hlds__intermod__PredInfo_11);
          }
#line 298 "intermod.m"
      }
#line 300 "intermod.m"
    else
#line 301 "intermod.m"
      {
#line 301 "intermod.m"
        MR_Word transform_hlds__intermod__V_49_49;

#line 302 "intermod.m"
        {
#line 302 "intermod.m"
          hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__V_49_49);
        }
#line 302 "intermod.m"
        {
#line 302 "intermod.m"
          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred____Unify____import_status_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__intermod__V_49_49);
        }
#line 301 "intermod.m"
      }
#line 294 "intermod.m"
    if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 294 "intermod.m"
      {
#line 305 "intermod.m"
        {
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_46_46;
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_47_47;
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__ClauseInfo_17;
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__ClausesRep_18;
#line 305 "intermod.m"
          MR_Integer transform_hlds__intermod__ProcId_21;
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__Procs_23;
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__ProcInfo_24;
#line 305 "intermod.m"
          MR_Integer transform_hlds__intermod__Arity_25;
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__Markers_26;
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__Globals_27;
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__Target_28;
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__V_33_33;
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__V_38_38;
#line 305 "intermod.m"
          MR_Word transform_hlds__intermod__V_50_50;
#line 306 "intermod.m"
          MR_Word transform_hlds__intermod___ItemNumbers_19;
#line 309 "intermod.m"
          MR_Word transform_hlds__intermod___ProcIds_22;
#line 311 "intermod.m"
          MR_Box transform_hlds__intermod__conv0_ProcInfo_24;
#line 322 "intermod.m"
          MR_Word transform_hlds__intermod__V_34_34;
#line 323 "intermod.m"
          MR_Word transform_hlds__intermod__V_35_35;
#line 326 "intermod.m"
          MR_Word transform_hlds__intermod__V_36_36;
#line 334 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_48_48;
#line 337 "intermod.m"
          MR_Word transform_hlds__intermod__V_37_37;

#line 305 "intermod.m"
          {
#line 305 "intermod.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__ClauseInfo_17);
          }
#line 306 "intermod.m"
          {
#line 306 "intermod.m"
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClauseInfo_17, &transform_hlds__intermod__ClausesRep_18, &transform_hlds__intermod___ItemNumbers_19);
          }
#line 307 "intermod.m"
          {
#line 307 "intermod.m"
            hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep_18, &(transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20);
          }
#line 309 "intermod.m"
          {
#line 309 "intermod.m"
            transform_hlds__intermod__V_33_33 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__intermod__PredInfo_11);
          }
#line 309 "intermod.m"
          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 309 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 309 "intermod.m"
            {
#line 309 "intermod.m"
              transform_hlds__intermod__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, (MR_Integer) 0)));
#line 309 "intermod.m"
              transform_hlds__intermod___ProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, (MR_Integer) 1)));
#line 310 "intermod.m"
              {
#line 310 "intermod.m"
                hlds__hlds_pred__pred_info_get_procedures_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__Procs_23);
              }
#line 17987 "transform_hlds.intermod.c"
              transform_hlds__intermod__TypeCtorInfo_46_46 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
#line 17989 "transform_hlds.intermod.c"
              transform_hlds__intermod__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 311 "intermod.m"
              {
#line 311 "intermod.m"
                mercury__map__lookup_3_p_0(transform_hlds__intermod__TypeCtorInfo_46_46, transform_hlds__intermod__TypeCtorInfo_47_47, transform_hlds__intermod__Procs_23, ((MR_Box) (transform_hlds__intermod__ProcId_21)), &transform_hlds__intermod__conv0_ProcInfo_24);
              }
#line 311 "intermod.m"
              transform_hlds__intermod__ProcInfo_24 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_24);
#line 316 "intermod.m"
              {
#line 316 "intermod.m"
                transform_hlds__intermod__Arity_25 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_11);
              }
#line 321 "intermod.m"
              {
#line 321 "intermod.m"
                hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__Markers_26);
              }
#line 322 "intermod.m"
              transform_hlds__intermod__V_34_34 = (MR_Integer) 9;
#line 322 "intermod.m"
              {
#line 322 "intermod.m"
                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_34_34);
              }
#line 322 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 305 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 305 "intermod.m"
                {
#line 323 "intermod.m"
                  transform_hlds__intermod__V_35_35 = (MR_Integer) 10;
#line 323 "intermod.m"
                  {
#line 323 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_35_35);
                  }
#line 323 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 305 "intermod.m"
                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 305 "intermod.m"
                    {
#line 326 "intermod.m"
                      transform_hlds__intermod__V_36_36 = (MR_Integer) 0;
#line 326 "intermod.m"
                      {
#line 326 "intermod.m"
                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_36_36);
                      }
#line 326 "intermod.m"
                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 305 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 305 "intermod.m"
                        {
#line 330 "intermod.m"
                          {
#line 330 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__intermod__PredInfo_11);
                          }
#line 330 "intermod.m"
                          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 305 "intermod.m"
                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 305 "intermod.m"
                            {
#line 331 "intermod.m"
                              {
#line 331 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__intermod__PredInfo_11);
                              }
#line 331 "intermod.m"
                              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 305 "intermod.m"
                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 305 "intermod.m"
                                {
#line 18069 "transform_hlds.intermod.c"
                                  transform_hlds__intermod__TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 334 "intermod.m"
                                  {
#line 334 "intermod.m"
                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(transform_hlds__intermod__TypeCtorInfo_48_48, ((MR_Box) ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10)), transform_hlds__intermod__TypeSpecForcePreds_12);
                                  }
#line 334 "intermod.m"
                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 305 "intermod.m"
                                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 305 "intermod.m"
                                    {
#line 337 "intermod.m"
                                      transform_hlds__intermod__V_37_37 = (MR_Integer) 7;
#line 337 "intermod.m"
                                      {
#line 337 "intermod.m"
                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_37_37);
                                      }
#line 337 "intermod.m"
                                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 305 "intermod.m"
                                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 305 "intermod.m"
                                        {
#line 340 "intermod.m"
                                          {
#line 340 "intermod.m"
                                            hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_16, &transform_hlds__intermod__Globals_27);
                                          }
#line 341 "intermod.m"
                                          {
#line 341 "intermod.m"
                                            libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_27, &transform_hlds__intermod__Target_28);
                                          }
#line 342 "intermod.m"
                                          {
#line 342 "intermod.m"
                                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(transform_hlds__intermod__Target_28, (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20);
                                          }
#line 342 "intermod.m"
                                          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 305 "intermod.m"
                                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 305 "intermod.m"
                                            {
#line 345 "intermod.m"
                                              transform_hlds__intermod__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 345 "intermod.m"
                                              {
#line 345 "intermod.m"
                                                hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__V_50_50);
                                              }
#line 345 "intermod.m"
                                              {
#line 345 "intermod.m"
                                                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(transform_hlds__intermod__V_38_38, transform_hlds__intermod__V_50_50);
                                              }
#line 305 "intermod.m"
                                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 305 "intermod.m"
                                                {
#line 348 "intermod.m"
                                                  {
#line 348 "intermod.m"
                                                    MR_Integer transform_hlds__intermod__V_45_45 = (transform_hlds__intermod__InlineThreshold_13 + transform_hlds__intermod__Arity_25);

#line 348 "intermod.m"
                                                    {
#line 348 "intermod.m"
                                                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__V_45_45);
                                                    }
#line 348 "intermod.m"
                                                  }
#line 349 "intermod.m"
                                                  if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 349 "intermod.m"
                                                    {
#line 350 "intermod.m"
                                                      {
#line 350 "intermod.m"
                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(transform_hlds__intermod__PredInfo_11);
                                                      }
#line 349 "intermod.m"
                                                      if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 349 "intermod.m"
                                                        {
#line 354 "intermod.m"
                                                          {
#line 354 "intermod.m"
                                                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, (MR_Integer) 22);
                                                          }
#line 349 "intermod.m"
                                                          if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 349 "intermod.m"
                                                            {
#line 356 "intermod.m"
                                                              {
#line 356 "intermod.m"
                                                                MR_Integer transform_hlds__intermod__GoalSize_29;
#line 356 "intermod.m"
                                                                MR_Integer transform_hlds__intermod__V_43_43;
#line 356 "intermod.m"
                                                                MR_Word transform_hlds__intermod__HeadVars_55;
#line 356 "intermod.m"
                                                                MR_Word transform_hlds__intermod__ArgModes_56;
#line 356 "intermod.m"
                                                                MR_Word transform_hlds__intermod__VarTypes_57;

#line 409 "intermod.m"
                                                                {
#line 409 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__HeadVars_55);
                                                                }
#line 410 "intermod.m"
                                                                {
#line 410 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__ArgModes_56);
                                                                }
#line 411 "intermod.m"
                                                                {
#line 411 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__VarTypes_57);
                                                                }
#line 412 "intermod.m"
                                                                {
#line 412 "intermod.m"
                                                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__check_for_ho_input_args_4_p_0(transform_hlds__intermod__ModuleInfo_16, transform_hlds__intermod__VarTypes_57, transform_hlds__intermod__HeadVars_55, transform_hlds__intermod__ArgModes_56);
                                                                }
#line 356 "intermod.m"
                                                                if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 356 "intermod.m"
                                                                  {
#line 357 "intermod.m"
                                                                    {
#line 357 "intermod.m"
                                                                      hlds__goal_util__clause_list_size_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, &transform_hlds__intermod__GoalSize_29);
                                                                    }
#line 358 "intermod.m"
                                                                    transform_hlds__intermod__V_43_43 = (transform_hlds__intermod__HigherOrderSizeLimit_14 + transform_hlds__intermod__Arity_25);
#line 358 "intermod.m"
                                                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = (transform_hlds__intermod__GoalSize_29 <= transform_hlds__intermod__V_43_43);
#line 356 "intermod.m"
                                                                  }
#line 356 "intermod.m"
                                                              }
#line 349 "intermod.m"
                                                              if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 360 "intermod.m"
                                                                {
#line 360 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__DeforestThreshold_30;
#line 360 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_39_39;
#line 360 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_40_40;
#line 360 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_41_41;
#line 360 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_42_42;
#line 360 "intermod.m"
                                                                  MR_Word transform_hlds__intermod__V_72_72;
#line 360 "intermod.m"
                                                                  MR_Word transform_hlds__intermod__V_73_73;

#line 360 "intermod.m"
                                                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = (transform_hlds__intermod__Deforestation_15 == (MR_Integer) 1);
#line 360 "intermod.m"
                                                                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 360 "intermod.m"
                                                                    {
#line 365 "intermod.m"
                                                                      transform_hlds__intermod__V_40_40 = (MR_Integer) 2;
#line 365 "intermod.m"
                                                                      transform_hlds__intermod__V_39_39 = (transform_hlds__intermod__InlineThreshold_13 * transform_hlds__intermod__V_40_40);
#line 365 "intermod.m"
                                                                      transform_hlds__intermod__V_41_41 = (MR_Integer) 1;
#line 365 "intermod.m"
                                                                      transform_hlds__intermod__DeforestThreshold_30 = (transform_hlds__intermod__V_39_39 + transform_hlds__intermod__V_41_41);
#line 366 "intermod.m"
                                                                      transform_hlds__intermod__V_42_42 = (transform_hlds__intermod__DeforestThreshold_30 + transform_hlds__intermod__Arity_25);
#line 366 "intermod.m"
                                                                      {
#line 366 "intermod.m"
                                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__V_42_42);
                                                                      }
#line 360 "intermod.m"
                                                                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 360 "intermod.m"
                                                                        {
#line 434 "intermod.m"
                                                                          {
#line 434 "intermod.m"
                                                                            transform_hlds__intermod__should_be_processed_8_p_0_4(&transform_hlds__intermod__env);
                                                                          }
#line 360 "intermod.m"
                                                                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 360 "intermod.m"
                                                                            {
#line 439 "intermod.m"
                                                                              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20)) == (MR_mktag((MR_Integer) 1)));
#line 439 "intermod.m"
                                                                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 439 "intermod.m"
                                                                                {
#line 439 "intermod.m"
                                                                                  transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, (MR_Integer) 0)));
#line 439 "intermod.m"
                                                                                  transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, (MR_Integer) 1)));
#line 440 "intermod.m"
                                                                                  if ((transform_hlds__intermod__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "intermod.m"
                                                                                    {
#line 441 "intermod.m"
                                                                                      MR_Word transform_hlds__intermod__Goal2_66;
#line 441 "intermod.m"
                                                                                      MR_Word transform_hlds__intermod__GoalList_67;

#line 442 "intermod.m"
                                                                                      {
#line 442 "intermod.m"
                                                                                        transform_hlds__intermod__Goal2_66 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__V_73_73);
                                                                                      }
#line 443 "intermod.m"
                                                                                      {
#line 443 "intermod.m"
                                                                                        hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__intermod__Goal2_66, &transform_hlds__intermod__GoalList_67);
                                                                                      }
#line 450 "intermod.m"
                                                                                      {
#line 450 "intermod.m"
                                                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(transform_hlds__intermod__GoalList_67, (MR_Integer) 0);
                                                                                      }
#line 441 "intermod.m"
                                                                                    }
#line 440 "intermod.m"
                                                                                  else
#line 439 "intermod.m"
                                                                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_TRUE;
#line 439 "intermod.m"
                                                                                }
#line 360 "intermod.m"
                                                                            }
#line 360 "intermod.m"
                                                                        }
#line 360 "intermod.m"
                                                                    }
#line 360 "intermod.m"
                                                                }
#line 349 "intermod.m"
                                                            }
#line 349 "intermod.m"
                                                        }
#line 349 "intermod.m"
                                                    }
#line 305 "intermod.m"
                                                }
#line 305 "intermod.m"
                                            }
#line 305 "intermod.m"
                                        }
#line 305 "intermod.m"
                                    }
#line 305 "intermod.m"
                                }
#line 305 "intermod.m"
                            }
#line 305 "intermod.m"
                        }
#line 305 "intermod.m"
                    }
#line 305 "intermod.m"
                }
#line 309 "intermod.m"
            }
#line 305 "intermod.m"
        }
#line 369 "intermod.m"
        if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 371 "intermod.m"
          {
#line 371 "intermod.m"
            MR_Word transform_hlds__intermod__V_31_31;

#line 371 "intermod.m"
            {
#line 371 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__V_31_31);
            }
#line 371 "intermod.m"
          }
#line 294 "intermod.m"
      }
#line 294 "intermod.m"
    return (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded;
#line 289 "intermod.m"
  }
#line 289 "intermod.m"
}

#line 91 "intermod.m"
void MR_CALL 
transform_hlds__intermod__update_error_status_9_p_0(
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod___Globals_10,
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__FileType_11,
#line 91 "intermod.m"
  MR_String transform_hlds__intermod__FileName_12,
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleSpecs_13,
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0_22,
#line 91 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Specs_23,
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleError_15,
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_24,
#line 91 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_25)
#line 91 "intermod.m"
{
#line 2559 "intermod.m"
  {
#line 2559 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2559 "intermod.m"
    {
#line 2559 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0(transform_hlds__intermod__FileType_11, transform_hlds__intermod__FileName_12, transform_hlds__intermod__ModuleSpecs_13, transform_hlds__intermod__STATE_VARIABLE_Specs_0_22, transform_hlds__intermod__STATE_VARIABLE_Specs_23, transform_hlds__intermod__ModuleError_15, transform_hlds__intermod__STATE_VARIABLE_Error_0_24, transform_hlds__intermod__STATE_VARIABLE_Error_25);
#line 2559 "intermod.m"
      return;
    }
#line 2559 "intermod.m"
  }
#line 91 "intermod.m"
}

#line 804 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_pred_import_status_2_p_0_1(
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 804 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 804 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 804 "intermod.m"
{
#line 804 "intermod.m"
  {
#line 804 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 804 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11;

#line 804 "intermod.m"
    {
#line 804 "intermod.m"
      transform_hlds__intermod__gather_instances_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11);
    }
#line 804 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11));
#line 804 "intermod.m"
  }
#line 804 "intermod.m"
}

#line 72 "intermod.m"
void MR_CALL 
transform_hlds__intermod__adjust_pred_import_status_2_p_0(
#line 72 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12,
#line 72 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_13)
#line 72 "intermod.m"
{
#line 2186 "intermod.m"
  {
#line 2186 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_14_42;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_4;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__VeryVerbose_5;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__PredIds_7;
#line 2186 "intermod.m"
    MR_Integer transform_hlds__intermod__Threshold_8;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__Deforestation_9;
#line 2186 "intermod.m"
    MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_10;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_18_18;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_22_22;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_24_24;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_25_25;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_26_26;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__Modules_33;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__Procs_34;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__ProcDecls_35;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__VarTypes_36;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_37;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__ExtraExportedPreds0_53;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_18_54;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_60;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_61;
#line 2186 "intermod.m"
    MR_Word transform_hlds__intermod__V_62_62;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_72_72;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_74_74;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78;
#line 2163 "intermod.m"
    MR_Word transform_hlds__intermod__V_79_79;
#line 804 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_25_25;

#line 2187 "intermod.m"
    {
#line 2187 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__intermod__Globals_4);
    }
#line 2188 "intermod.m"
    {
#line 2188 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 45, &transform_hlds__intermod__VeryVerbose_5);
    }
#line 2190 "intermod.m"
    {
#line 2190 "intermod.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_5, (MR_String) "% Adjusting import status of predicates in the \140.opt\' file...");
    }
#line 2195 "intermod.m"
    {
#line 2195 "intermod.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__intermod__PredIds_7, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_18_18);
    }
#line 2196 "intermod.m"
    {
#line 2196 "intermod.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 342, &transform_hlds__intermod__Threshold_8);
    }
#line 2198 "intermod.m"
    {
#line 2198 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 388, &transform_hlds__intermod__Deforestation_9);
    }
#line 2199 "intermod.m"
    {
#line 2199 "intermod.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 353, &transform_hlds__intermod__HigherOrderSizeLimit_10);
    }
#line 2110 "intermod.m"
    {
#line 2110 "intermod.m"
      mercury__set__init_1_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, &transform_hlds__intermod__Modules_33);
    }
#line 18560 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_14_42 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2111 "intermod.m"
    {
#line 2111 "intermod.m"
      mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_42, &transform_hlds__intermod__Procs_34);
    }
#line 2112 "intermod.m"
    {
#line 2112 "intermod.m"
      mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_42, &transform_hlds__intermod__ProcDecls_35);
    }
#line 2113 "intermod.m"
    {
#line 2113 "intermod.m"
      parse_tree__prog_data__init_vartypes_1_p_0(&transform_hlds__intermod__VarTypes_36);
    }
#line 2114 "intermod.m"
    {
#line 2114 "intermod.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__intermod__TVarSet_37);
    }
#line 2117 "intermod.m"
    {
#line 2117 "intermod.m"
      transform_hlds__intermod__STATE_VARIABLE_Info_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2117 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 0) = ((MR_Box) (transform_hlds__intermod__Modules_33));
#line 2117 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 1) = ((MR_Box) (transform_hlds__intermod__Procs_34));
#line 2117 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 2) = ((MR_Box) (transform_hlds__intermod__ProcDecls_35));
#line 2117 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2117 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2117 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 5) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_18_18));
#line 2117 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 6) = ((MR_Box) ((MR_Integer) 0));
#line 2117 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_36));
#line 2117 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_22_22, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_37));
#line 2117 "intermod.m"
    }
#line 195 "intermod.m"
    {
#line 195 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__PredIds_7, (MR_Integer) 0, transform_hlds__intermod__Threshold_8, transform_hlds__intermod__HigherOrderSizeLimit_10, transform_hlds__intermod__Deforestation_9, transform_hlds__intermod__STATE_VARIABLE_Info_22_22, &transform_hlds__intermod__STATE_VARIABLE_Info_18_54);
    }
#line 199 "intermod.m"
    {
#line 199 "intermod.m"
      mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__intermod__ExtraExportedPreds0_53);
    }
#line 200 "intermod.m"
    {
#line 200 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(transform_hlds__intermod__ExtraExportedPreds0_53, transform_hlds__intermod__Threshold_8, transform_hlds__intermod__HigherOrderSizeLimit_10, transform_hlds__intermod__Deforestation_9, transform_hlds__intermod__STATE_VARIABLE_Info_18_54, &transform_hlds__intermod__STATE_VARIABLE_Info_24_24);
    }
#line 2163 "intermod.m"
    transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 0)));
#line 2163 "intermod.m"
    transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 1)));
#line 2163 "intermod.m"
    transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 2)));
#line 2163 "intermod.m"
    transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 3)));
#line 2163 "intermod.m"
    transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 4)));
#line 2163 "intermod.m"
    transform_hlds__intermod__ModuleInfo_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 5)));
#line 2163 "intermod.m"
    transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 6)));
#line 2163 "intermod.m"
    transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 7)));
#line 2163 "intermod.m"
    transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_24_24, (MR_Integer) 8)));
#line 803 "intermod.m"
    {
#line 803 "intermod.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__ModuleInfo_60, &transform_hlds__intermod__Instances_61);
    }
#line 804 "intermod.m"
    {
#line 804 "intermod.m"
      transform_hlds__intermod__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 804 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[0]));
#line 804 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 1) = ((MR_Box) (transform_hlds__intermod__adjust_pred_import_status_2_p_0_1));
#line 804 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 804 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_60));
#line 804 "intermod.m"
    }
#line 804 "intermod.m"
    {
#line 804 "intermod.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[1], (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_62_62, transform_hlds__intermod__Instances_61, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_24_24)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_25_25);
    }
#line 804 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_Info_25_25 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_25_25);
#line 2206 "intermod.m"
    {
#line 2206 "intermod.m"
      transform_hlds__intermod__gather_types_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_25_25, &transform_hlds__intermod__STATE_VARIABLE_Info_26_26);
    }
#line 2207 "intermod.m"
    {
#line 2207 "intermod.m"
      transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_26_26, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_18_18, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_13);
    }
#line 2210 "intermod.m"
    {
#line 2210 "intermod.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_5, (MR_String) " done\n");
#line 2210 "intermod.m"
      return;
    }
#line 2186 "intermod.m"
  }
#line 72 "intermod.m"
}

#line 2464 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_2(
#line 2464 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2464 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 2464 "intermod.m"
{
#line 2464 "intermod.m"
  {
#line 2464 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 2464 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2464 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_2;

#line 2464 "intermod.m"
    {
#line 2464 "intermod.m"
      transform_hlds__intermod__conv0_HeadVar__2_2 = mdbcomp__prim_data__get_ancestors_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 2464 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_2));
#line 2464 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 2464 "intermod.m"
  }
#line 2464 "intermod.m"
}

#line 2444 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_1(
#line 2444 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2444 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 2444 "intermod.m"
{
#line 2444 "intermod.m"
  {
#line 2444 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2444 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 2444 "intermod.m"
    {
#line 2444 "intermod.m"
      return transform_hlds__intermod__succeeded = transform_hlds__intermod__IntroducedFrom__pred__grab_opt_files__2444__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 2444 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2444 "intermod.m"
  }
#line 2444 "intermod.m"
}

#line 65 "intermod.m"
void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0(
#line 65 "intermod.m"
  MR_Word transform_hlds__intermod__Globals_7,
#line 65 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_0_52,
#line 65 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Module_53,
#line 65 "intermod.m"
  MR_Word * transform_hlds__intermod__FoundError_9)
#line 65 "intermod.m"
{
#line 2396 "intermod.m"
  {
#line 2396 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_199_199 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_200_200;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 2)));
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__Ancestors0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 3)));
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__InterfaceDeps0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 4)));
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__ImplementationDeps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 5)));
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__OptFiles_15;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__Transitive_16;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__ModulesProcessed_17;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__OptItemsCord_18;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__OptSpecs_19;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__OptError_20;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__OptItems_21;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__AddedItems_22;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__UnusedArgs_23;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__StructureReuse_24;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__UA_SR_Error_27;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__Int0Files_38;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__ReadModules_39;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__AncestorImports1_40;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__AncestorImports2_41;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__NewImportDeps0_42;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__NewUseDeps0_43;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplicitImportDeps0_44;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplicitUseDeps0_45;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__NewDeps_46;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__NewIndirectDeps_47;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplIndirectDeps_48;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__FoundError0_51;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_56_56;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_57_57;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_58_58;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_59_59;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_62_62;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_63_63;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_67_67;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_69_69;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_70_70;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_71_71;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_84_84;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_85_85;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_86_86;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_88_88;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_89_89;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_92_92;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_96_96;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_97_97;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_98_98;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_99_99;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_100_100;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_101_101;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_102_102;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_106_106;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_107_107;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_110_110;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_114_114;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_116_116;
#line 2396 "intermod.m"
    MR_Word transform_hlds__intermod__V_117_117;
#line 2398 "intermod.m"
    MR_String transform_hlds__intermod__V_123_123 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 0)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 1)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 6)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 7)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 8)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 9)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 10)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 11)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 12)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 13)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 14)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 15)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 16)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 17)));
#line 2398 "intermod.m"
    MR_Word transform_hlds__intermod__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 18)));
#line 2398 "intermod.m"
    MR_String transform_hlds__intermod__V_141_141 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Module_0_52, (MR_Integer) 19)));
#line 2494 "intermod.m"
    MR_Word transform_hlds__intermod___Items_49;
#line 2494 "intermod.m"
    MR_Word transform_hlds__intermod___Specs_50;

#line 2403 "intermod.m"
    {
#line 2403 "intermod.m"
      transform_hlds__intermod__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2403 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, 0) = ((MR_Box) (transform_hlds__intermod__ImplementationDeps0_14));
#line 2403 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2403 "intermod.m"
    }
#line 2403 "intermod.m"
    {
#line 2403 "intermod.m"
      transform_hlds__intermod__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2403 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_58_58, 0) = ((MR_Box) (transform_hlds__intermod__InterfaceDeps0_13));
#line 2403 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_58_58, 1) = ((MR_Box) (transform_hlds__intermod__V_59_59));
#line 2403 "intermod.m"
    }
#line 2402 "intermod.m"
    {
#line 2402 "intermod.m"
      transform_hlds__intermod__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2402 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_57_57, 0) = ((MR_Box) (transform_hlds__intermod__Ancestors0_12));
#line 2402 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_57_57, 1) = ((MR_Box) (transform_hlds__intermod__V_58_58));
#line 2402 "intermod.m"
    }
#line 2402 "intermod.m"
    {
#line 2402 "intermod.m"
      transform_hlds__intermod__V_56_56 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_199_199, transform_hlds__intermod__V_57_57);
    }
#line 2402 "intermod.m"
    {
#line 2402 "intermod.m"
      transform_hlds__intermod__OptFiles_15 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__intermod__TypeCtorInfo_199_199, transform_hlds__intermod__V_56_56);
    }
#line 2404 "intermod.m"
    {
#line 2404 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 326, &transform_hlds__intermod__Transitive_16);
    }
#line 2406 "intermod.m"
    {
#line 2406 "intermod.m"
      transform_hlds__intermod__V_62_62 = mercury__set__sorted_list_to_set_1_f_0(transform_hlds__intermod__TypeCtorInfo_199_199, transform_hlds__intermod__OptFiles_15);
    }
#line 2406 "intermod.m"
    {
#line 2406 "intermod.m"
      transform_hlds__intermod__ModulesProcessed_17 = mercury__set__insert_2_f_0(transform_hlds__intermod__TypeCtorInfo_199_199, transform_hlds__intermod__V_62_62, ((MR_Box) (transform_hlds__intermod__ModuleName_11)));
    }
#line 18972 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_200_200 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 2408 "intermod.m"
    {
#line 2408 "intermod.m"
      transform_hlds__intermod__V_63_63 = mercury__cord__empty_0_f_0(transform_hlds__intermod__TypeCtorInfo_200_200);
    }
#line 2408 "intermod.m"
    {
#line 2408 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_111_112_116_105_109_105_122_97_116_105_111_110_95_105_110_116_101_114_102_97_99_101_115_95_95_91_51_93_95_48_13_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__Transitive_16, transform_hlds__intermod__OptFiles_15, transform_hlds__intermod__ModulesProcessed_17, transform_hlds__intermod__V_63_63, &transform_hlds__intermod__OptItemsCord_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__OptSpecs_19, (MR_Integer) 0, &transform_hlds__intermod__OptError_20);
    }
#line 2417 "intermod.m"
    {
#line 2417 "intermod.m"
      transform_hlds__intermod__OptItems_21 = mercury__cord__list_1_f_0(transform_hlds__intermod__TypeCtorInfo_200_200, transform_hlds__intermod__OptItemsCord_18);
    }
#line 2418 "intermod.m"
    {
#line 2418 "intermod.m"
      transform_hlds__intermod__V_67_67 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2418 "intermod.m"
    {
#line 2418 "intermod.m"
      transform_hlds__intermod__AddedItems_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2418 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__AddedItems_22, 0) = ((MR_Box) (transform_hlds__intermod__V_67_67));
#line 2418 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__AddedItems_22, 1) = ((MR_Box) (transform_hlds__intermod__OptItems_21));
#line 2418 "intermod.m"
    }
#line 2419 "intermod.m"
    {
#line 2419 "intermod.m"
      transform_hlds__intermod__V_69_69 = mercury__cord__from_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_200_200, transform_hlds__intermod__AddedItems_22);
    }
#line 2419 "intermod.m"
    {
#line 2419 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_items_3_p_0(transform_hlds__intermod__V_69_69, transform_hlds__intermod__STATE_VARIABLE_Module_0_52, &transform_hlds__intermod__STATE_VARIABLE_Module_70_70);
    }
#line 2420 "intermod.m"
    {
#line 2420 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(transform_hlds__intermod__OptSpecs_19, transform_hlds__intermod__STATE_VARIABLE_Module_70_70, &transform_hlds__intermod__STATE_VARIABLE_Module_71_71);
    }
#line 2433 "intermod.m"
    {
#line 2433 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 351, &transform_hlds__intermod__UnusedArgs_23);
    }
#line 2434 "intermod.m"
    {
#line 2434 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 408, &transform_hlds__intermod__StructureReuse_24);
    }
#line 2437 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__UnusedArgs_23 == (MR_Integer) 1);
#line 2438 "intermod.m"
    if (!(transform_hlds__intermod__succeeded))
#line 2438 "intermod.m"
      transform_hlds__intermod__succeeded = (transform_hlds__intermod__StructureReuse_24 == (MR_Integer) 1);
#line 2458 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2443 "intermod.m"
      {
#line 2443 "intermod.m"
        MR_Word transform_hlds__intermod__LocalItemsCord_25;
#line 2443 "intermod.m"
        MR_Word transform_hlds__intermod__LocalSpecs_26;
#line 2443 "intermod.m"
        MR_Word transform_hlds__intermod__KeepPragma_28;
#line 2443 "intermod.m"
        MR_Word transform_hlds__intermod__PragmaItemsCord_37;
#line 2443 "intermod.m"
        MR_Word transform_hlds__intermod__V_75_75;
#line 2443 "intermod.m"
        MR_Word transform_hlds__intermod__V_76_76;
#line 2443 "intermod.m"
        MR_Word transform_hlds__intermod__V_77_77;
#line 2443 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Module_83_83;

#line 2441 "intermod.m"
        {
#line 2441 "intermod.m"
          transform_hlds__intermod__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2441 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_75_75, 0) = ((MR_Box) (transform_hlds__intermod__ModuleName_11));
#line 2441 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2441 "intermod.m"
        }
#line 2441 "intermod.m"
        {
#line 2441 "intermod.m"
          transform_hlds__intermod__V_76_76 = mercury__set__init_0_f_0(transform_hlds__intermod__TypeCtorInfo_199_199);
        }
#line 2441 "intermod.m"
        {
#line 2441 "intermod.m"
          transform_hlds__intermod__V_77_77 = mercury__cord__empty_0_f_0(transform_hlds__intermod__TypeCtorInfo_200_200);
        }
#line 2441 "intermod.m"
        {
#line 2441 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_111_112_116_105_109_105_122_97_116_105_111_110_95_105_110_116_101_114_102_97_99_101_115_95_95_91_51_93_95_48_13_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 0, transform_hlds__intermod__V_75_75, transform_hlds__intermod__V_76_76, transform_hlds__intermod__V_77_77, &transform_hlds__intermod__LocalItemsCord_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__LocalSpecs_26, (MR_Integer) 0, &transform_hlds__intermod__UA_SR_Error_27);
        }
#line 2444 "intermod.m"
        {
#line 2444 "intermod.m"
          transform_hlds__intermod__KeepPragma_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2444 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__KeepPragma_28, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_4[0]));
#line 2444 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__KeepPragma_28, 1) = ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_1));
#line 2444 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__KeepPragma_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2444 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__KeepPragma_28, 3) = ((MR_Box) (transform_hlds__intermod__UnusedArgs_23));
#line 2444 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__KeepPragma_28, 4) = ((MR_Box) (transform_hlds__intermod__StructureReuse_24));
#line 2444 "intermod.m"
        }
#line 2455 "intermod.m"
        {
#line 2455 "intermod.m"
          mercury__cord__filter_3_p_0(transform_hlds__intermod__TypeCtorInfo_200_200, transform_hlds__intermod__KeepPragma_28, transform_hlds__intermod__LocalItemsCord_25, &transform_hlds__intermod__PragmaItemsCord_37);
        }
#line 2456 "intermod.m"
        {
#line 2456 "intermod.m"
          parse_tree__module_imports__module_and_imports_add_items_3_p_0(transform_hlds__intermod__PragmaItemsCord_37, transform_hlds__intermod__STATE_VARIABLE_Module_71_71, &transform_hlds__intermod__STATE_VARIABLE_Module_83_83);
        }
#line 2457 "intermod.m"
        {
#line 2457 "intermod.m"
          parse_tree__module_imports__module_and_imports_add_specs_3_p_0(transform_hlds__intermod__LocalSpecs_26, transform_hlds__intermod__STATE_VARIABLE_Module_83_83, &transform_hlds__intermod__STATE_VARIABLE_Module_84_84);
        }
#line 2443 "intermod.m"
      }
#line 2458 "intermod.m"
    else
#line 2459 "intermod.m"
      {
#line 2459 "intermod.m"
        transform_hlds__intermod__UA_SR_Error_27 = (MR_Integer) 0;
#line 2459 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_Module_84_84 = transform_hlds__intermod__STATE_VARIABLE_Module_71_71;
#line 2459 "intermod.m"
      }
#line 2464 "intermod.m"
    {
#line 2464 "intermod.m"
      transform_hlds__intermod__V_86_86 = mercury__list__map_2_f_0(transform_hlds__intermod__TypeCtorInfo_199_199, (MR_Word) &transform_hlds__intermod_scalar_common_1[0], (MR_Word) &transform_hlds__intermod_scalar_common_2[8], transform_hlds__intermod__OptFiles_15);
    }
#line 2463 "intermod.m"
    {
#line 2463 "intermod.m"
      transform_hlds__intermod__V_85_85 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_199_199, transform_hlds__intermod__V_86_86);
    }
#line 2463 "intermod.m"
    {
#line 2463 "intermod.m"
      transform_hlds__intermod__Int0Files_38 = mercury__list__delete_all_2_f_0(transform_hlds__intermod__TypeCtorInfo_199_199, transform_hlds__intermod__V_85_85, ((MR_Box) (transform_hlds__intermod__ModuleName_11)));
    }
#line 2465 "intermod.m"
    {
#line 2465 "intermod.m"
      transform_hlds__intermod__V_88_88 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2465 "intermod.m"
    {
#line 2465 "intermod.m"
      transform_hlds__intermod__V_89_89 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2472 "intermod.m"
    {
#line 2472 "intermod.m"
      parse_tree__module_imports__get_dependencies_3_p_0(transform_hlds__intermod__OptItems_21, &transform_hlds__intermod__NewImportDeps0_42, &transform_hlds__intermod__NewUseDeps0_43);
    }
#line 2473 "intermod.m"
    {
#line 2473 "intermod.m"
      parse_tree__module_imports__get_implicit_dependencies_4_p_0(transform_hlds__intermod__OptItems_21, transform_hlds__intermod__Globals_7, &transform_hlds__intermod__NewImplicitImportDeps0_44, &transform_hlds__intermod__NewImplicitUseDeps0_45);
    }
#line 2481 "intermod.m"
    {
#line 2481 "intermod.m"
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[0], (MR_Word) &parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_0, &transform_hlds__intermod__ReadModules_39);
    }
#line 2465 "intermod.m"
    {
#line 2465 "intermod.m"
      parse_tree__modules__process_module_private_interfaces_13_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__ReadModules_39, transform_hlds__intermod__Int0Files_38, transform_hlds__intermod__V_88_88, transform_hlds__intermod__V_89_89, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__AncestorImports1_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__AncestorImports2_41, transform_hlds__intermod__STATE_VARIABLE_Module_84_84, &transform_hlds__intermod__STATE_VARIABLE_Module_92_92);
    }
#line 2478 "intermod.m"
    {
#line 2478 "intermod.m"
      transform_hlds__intermod__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2478 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_102_102, 0) = ((MR_Box) (transform_hlds__intermod__AncestorImports2_41));
#line 2478 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2478 "intermod.m"
    }
#line 2477 "intermod.m"
    {
#line 2477 "intermod.m"
      transform_hlds__intermod__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2477 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_101_101, 0) = ((MR_Box) (transform_hlds__intermod__AncestorImports1_40));
#line 2477 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_101_101, 1) = ((MR_Box) (transform_hlds__intermod__V_102_102));
#line 2477 "intermod.m"
    }
#line 2477 "intermod.m"
    {
#line 2477 "intermod.m"
      transform_hlds__intermod__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2477 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_100_100, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitUseDeps0_45));
#line 2477 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_100_100, 1) = ((MR_Box) (transform_hlds__intermod__V_101_101));
#line 2477 "intermod.m"
    }
#line 2476 "intermod.m"
    {
#line 2476 "intermod.m"
      transform_hlds__intermod__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2476 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_99_99, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitImportDeps0_44));
#line 2476 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_99_99, 1) = ((MR_Box) (transform_hlds__intermod__V_100_100));
#line 2476 "intermod.m"
    }
#line 2476 "intermod.m"
    {
#line 2476 "intermod.m"
      transform_hlds__intermod__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2476 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_98_98, 0) = ((MR_Box) (transform_hlds__intermod__NewUseDeps0_43));
#line 2476 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_98_98, 1) = ((MR_Box) (transform_hlds__intermod__V_99_99));
#line 2476 "intermod.m"
    }
#line 2475 "intermod.m"
    {
#line 2475 "intermod.m"
      transform_hlds__intermod__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2475 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_97_97, 0) = ((MR_Box) (transform_hlds__intermod__NewImportDeps0_42));
#line 2475 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_97_97, 1) = ((MR_Box) (transform_hlds__intermod__V_98_98));
#line 2475 "intermod.m"
    }
#line 2475 "intermod.m"
    {
#line 2475 "intermod.m"
      transform_hlds__intermod__V_96_96 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_199_199, transform_hlds__intermod__V_97_97);
    }
#line 2475 "intermod.m"
    {
#line 2475 "intermod.m"
      transform_hlds__intermod__NewDeps_46 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__intermod__TypeCtorInfo_199_199, transform_hlds__intermod__V_96_96);
    }
#line 2482 "intermod.m"
    {
#line 2482 "intermod.m"
      transform_hlds__intermod__V_106_106 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2482 "intermod.m"
    {
#line 2482 "intermod.m"
      transform_hlds__intermod__V_107_107 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2482 "intermod.m"
    {
#line 2482 "intermod.m"
      parse_tree__modules__process_module_long_interfaces_15_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__ReadModules_39, (MR_Integer) 0, transform_hlds__intermod__NewDeps_46, (MR_String) ".int", transform_hlds__intermod__V_106_106, transform_hlds__intermod__V_107_107, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__NewIndirectDeps_47, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__NewImplIndirectDeps_48, transform_hlds__intermod__STATE_VARIABLE_Module_92_92, &transform_hlds__intermod__STATE_VARIABLE_Module_110_110);
    }
#line 2486 "intermod.m"
    {
#line 2486 "intermod.m"
      transform_hlds__intermod__V_114_114 = mercury__list__f_43_43_2_f_0(transform_hlds__intermod__TypeCtorInfo_199_199, transform_hlds__intermod__NewIndirectDeps_47, transform_hlds__intermod__NewImplIndirectDeps_48);
    }
#line 2486 "intermod.m"
    {
#line 2486 "intermod.m"
      transform_hlds__intermod__V_116_116 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2486 "intermod.m"
    {
#line 2486 "intermod.m"
      transform_hlds__intermod__V_117_117 = parse_tree__modules__make_pseudo_decl_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
    }
#line 2486 "intermod.m"
    {
#line 2486 "intermod.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively_10_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__ReadModules_39, transform_hlds__intermod__V_114_114, (MR_String) ".int2", transform_hlds__intermod__V_116_116, transform_hlds__intermod__V_117_117, transform_hlds__intermod__STATE_VARIABLE_Module_110_110, transform_hlds__intermod__STATE_VARIABLE_Module_53);
    }
#line 2494 "intermod.m"
    {
#line 2494 "intermod.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(*transform_hlds__intermod__STATE_VARIABLE_Module_53, &transform_hlds__intermod___Items_49, &transform_hlds__intermod___Specs_50, &transform_hlds__intermod__FoundError0_51);
    }
#line 2496 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__FoundError0_51 == (MR_Integer) 0);
#line 2496 "intermod.m"
    transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2497 "intermod.m"
    if (!(transform_hlds__intermod__succeeded))
#line 2497 "intermod.m"
      {
#line 2497 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__OptError_20 == (MR_Integer) 1);
#line 2497 "intermod.m"
        if (!(transform_hlds__intermod__succeeded))
#line 2498 "intermod.m"
          transform_hlds__intermod__succeeded = (transform_hlds__intermod__UA_SR_Error_27 == (MR_Integer) 1);
#line 2497 "intermod.m"
      }
#line 2502 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2501 "intermod.m"
      *transform_hlds__intermod__FoundError_9 = (MR_Integer) 1;
#line 2502 "intermod.m"
    else
#line 2503 "intermod.m"
      *transform_hlds__intermod__FoundError_9 = (MR_Integer) 0;
#line 2396 "intermod.m"
  }
#line 65 "intermod.m"
}

#line 1032 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_opt_file_4_p_0_1(
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1032 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1032 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1032 "intermod.m"
{
#line 1032 "intermod.m"
  {
#line 1032 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1032 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34;

#line 1032 "intermod.m"
    {
#line 1032 "intermod.m"
      transform_hlds__intermod__gather_types_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34);
    }
#line 1032 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34));
#line 1032 "intermod.m"
  }
#line 1032 "intermod.m"
}

#line 59 "intermod.m"
void MR_CALL 
transform_hlds__intermod__write_opt_file_4_p_0(
#line 59 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24,
#line 59 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_25)
#line 59 "intermod.m"
{
#line 146 "intermod.m"
  {
#line 146 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 146 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_7;
#line 146 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 146 "intermod.m"
    MR_String transform_hlds__intermod__TmpName_9;
#line 146 "intermod.m"
    MR_Word transform_hlds__intermod__Result_10;

#line 147 "intermod.m"
    {
#line 147 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__Globals_7);
    }
#line 148 "intermod.m"
    {
#line 148 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__ModuleName_8);
    }
#line 149 "intermod.m"
    {
#line 149 "intermod.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__ModuleName_8, (MR_String) ".opt.tmp", (MR_Integer) 0, &transform_hlds__intermod__TmpName_9);
    }
#line 151 "intermod.m"
    {
#line 151 "intermod.m"
      mercury__io__open_output_4_p_0(transform_hlds__intermod__TmpName_9, &transform_hlds__intermod__Result_10);
    }
#line 157 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Result_10)) == (MR_mktag((MR_Integer) 1))))
#line 153 "intermod.m"
      {
#line 153 "intermod.m"
        MR_Word transform_hlds__intermod__Err_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Result_10, (MR_Integer) 0)));
#line 153 "intermod.m"
        MR_String transform_hlds__intermod__Msg_12;

#line 154 "intermod.m"
        {
#line 154 "intermod.m"
          transform_hlds__intermod__Msg_12 = mercury__io__error_message_1_f_0(transform_hlds__intermod__Err_11);
        }
#line 155 "intermod.m"
        {
#line 155 "intermod.m"
          mercury__io__write_string_3_p_0(transform_hlds__intermod__Msg_12);
        }
#line 156 "intermod.m"
        {
#line 156 "intermod.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 156 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_25 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24;
#line 153 "intermod.m"
      }
#line 157 "intermod.m"
    else
#line 158 "intermod.m"
      {
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_14_62;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__FileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Result_10, (MR_Integer) 0)));
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__OutputStream_14;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__RealPredIds_15;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__AssertionTable_16;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__AssertPredIds_17;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_18;
#line 158 "intermod.m"
        MR_Integer transform_hlds__intermod__Threshold_19;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__Deforestation_20;
#line 158 "intermod.m"
        MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_21;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_33_33;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_41_41;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_43_43;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__Modules_53;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__Procs_54;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__ProcDecls_55;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__VarTypes_56;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__TVarSet_57;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__ExtraExportedPreds0_73;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_18_74;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__ModuleInfo_80;
#line 158 "intermod.m"
        MR_Word transform_hlds__intermod__TypeTable_81;
#line 2163 "intermod.m"
        MR_Word transform_hlds__intermod__V_90_90;
#line 2163 "intermod.m"
        MR_Word transform_hlds__intermod__V_91_91;
#line 2163 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;
#line 2163 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 2163 "intermod.m"
        MR_Word transform_hlds__intermod__V_94_94;
#line 2163 "intermod.m"
        MR_Word transform_hlds__intermod__V_95_95;
#line 2163 "intermod.m"
        MR_Word transform_hlds__intermod__V_96_96;
#line 2163 "intermod.m"
        MR_Word transform_hlds__intermod__V_97_97;
#line 1032 "intermod.m"
        MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_41_41;
#line 177 "intermod.m"
        MR_Word transform_hlds__intermod__V_23_23;

#line 159 "intermod.m"
        {
#line 159 "intermod.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__intermod__FileStream_13, &transform_hlds__intermod__OutputStream_14);
        }
#line 160 "intermod.m"
        {
#line 160 "intermod.m"
          hlds__hlds_module__module_info_get_valid_predids_3_p_0(&transform_hlds__intermod__RealPredIds_15, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_33_33);
        }
#line 161 "intermod.m"
        {
#line 161 "intermod.m"
          hlds__hlds_module__module_info_get_assertion_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_33_33, &transform_hlds__intermod__AssertionTable_16);
        }
#line 162 "intermod.m"
        {
#line 162 "intermod.m"
          hlds__hlds_data__assertion_table_pred_ids_2_p_0(transform_hlds__intermod__AssertionTable_16, &transform_hlds__intermod__AssertPredIds_17);
        }
#line 163 "intermod.m"
        {
#line 163 "intermod.m"
          transform_hlds__intermod__PredIds_18 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__AssertPredIds_17, transform_hlds__intermod__RealPredIds_15);
        }
#line 164 "intermod.m"
        {
#line 164 "intermod.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 342, &transform_hlds__intermod__Threshold_19);
        }
#line 166 "intermod.m"
        {
#line 166 "intermod.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 388, &transform_hlds__intermod__Deforestation_20);
        }
#line 167 "intermod.m"
        {
#line 167 "intermod.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 353, &transform_hlds__intermod__HigherOrderSizeLimit_21);
        }
#line 2110 "intermod.m"
        {
#line 2110 "intermod.m"
          mercury__set__init_1_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, &transform_hlds__intermod__Modules_53);
        }
#line 19532 "transform_hlds.intermod.c"
        transform_hlds__intermod__TypeCtorInfo_14_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2111 "intermod.m"
        {
#line 2111 "intermod.m"
          mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_62, &transform_hlds__intermod__Procs_54);
        }
#line 2112 "intermod.m"
        {
#line 2112 "intermod.m"
          mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_62, &transform_hlds__intermod__ProcDecls_55);
        }
#line 2113 "intermod.m"
        {
#line 2113 "intermod.m"
          parse_tree__prog_data__init_vartypes_1_p_0(&transform_hlds__intermod__VarTypes_56);
        }
#line 2114 "intermod.m"
        {
#line 2114 "intermod.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__intermod__TVarSet_57);
        }
#line 2117 "intermod.m"
        {
#line 2117 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2117 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 0) = ((MR_Box) (transform_hlds__intermod__Modules_53));
#line 2117 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 1) = ((MR_Box) (transform_hlds__intermod__Procs_54));
#line 2117 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 2) = ((MR_Box) (transform_hlds__intermod__ProcDecls_55));
#line 2117 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2117 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2117 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 5) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_33_33));
#line 2117 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 6) = ((MR_Box) ((MR_Integer) 0));
#line 2117 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_56));
#line 2117 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_57));
#line 2117 "intermod.m"
        }
#line 195 "intermod.m"
        {
#line 195 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__PredIds_18, (MR_Integer) 0, transform_hlds__intermod__Threshold_19, transform_hlds__intermod__HigherOrderSizeLimit_21, transform_hlds__intermod__Deforestation_20, transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_37_37, &transform_hlds__intermod__STATE_VARIABLE_Info_18_74);
        }
#line 199 "intermod.m"
        {
#line 199 "intermod.m"
          mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__intermod__ExtraExportedPreds0_73);
        }
#line 200 "intermod.m"
        {
#line 200 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(transform_hlds__intermod__ExtraExportedPreds0_73, transform_hlds__intermod__Threshold_19, transform_hlds__intermod__HigherOrderSizeLimit_21, transform_hlds__intermod__Deforestation_20, transform_hlds__intermod__STATE_VARIABLE_Info_18_74, &transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39);
        }
#line 173 "intermod.m"
        {
#line 173 "intermod.m"
          transform_hlds__intermod__gather_instances_2_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39, &transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40);
        }
#line 2163 "intermod.m"
        transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 0)));
#line 2163 "intermod.m"
        transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 1)));
#line 2163 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 2)));
#line 2163 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 3)));
#line 2163 "intermod.m"
        transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 4)));
#line 2163 "intermod.m"
        transform_hlds__intermod__ModuleInfo_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 5)));
#line 2163 "intermod.m"
        transform_hlds__intermod__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 6)));
#line 2163 "intermod.m"
        transform_hlds__intermod__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 7)));
#line 2163 "intermod.m"
        transform_hlds__intermod__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, (MR_Integer) 8)));
#line 1031 "intermod.m"
        {
#line 1031 "intermod.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__ModuleInfo_80, &transform_hlds__intermod__TypeTable_81);
        }
#line 1032 "intermod.m"
        {
#line 1032 "intermod.m"
          hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[7], transform_hlds__intermod__TypeTable_81, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40)), &transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_41_41);
        }
#line 1032 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_41_41 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_41_41);
#line 175 "intermod.m"
        {
#line 175 "intermod.m"
          transform_hlds__intermod__write_intermod_info_3_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_41_41);
        }
#line 176 "intermod.m"
        {
#line 176 "intermod.m"
          transform_hlds__intermod__intermod_info_get_module_info_2_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_41_41, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_43_43);
        }
#line 177 "intermod.m"
        {
#line 177 "intermod.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__intermod__OutputStream_14, &transform_hlds__intermod__V_23_23);
        }
#line 178 "intermod.m"
        {
#line 178 "intermod.m"
          mercury__io__close_output_3_p_0(transform_hlds__intermod__FileStream_13);
        }
#line 179 "intermod.m"
        {
#line 179 "intermod.m"
          transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_41_41, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_43_43, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_25);
#line 179 "intermod.m"
          return;
        }
#line 158 "intermod.m"
      }
#line 146 "intermod.m"
  }
#line 59 "intermod.m"
}

void mercury__transform_hlds__intermod__init(void)
{
}

void mercury__transform_hlds__intermod__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0);
	MR_register_type_ctor_info(&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_opt_file_type_0);
}

void mercury__transform_hlds__intermod__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module transform_hlds.intermod. */
