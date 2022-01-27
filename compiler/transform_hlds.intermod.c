/*
** Automatically generated from `intermod.m'
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
#include "hlds.goal_form.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.item_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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



#line 1622 "intermod.m"
struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0_s {
#line 1622 "intermod.m"
  MR_Word transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__TVars_4;
#line 1622 "intermod.m"
  MR_Word * transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__HeadVar__3_9;
#line 1622 "intermod.m"
  MR_Cont transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__cont;
#line 1622 "intermod.m"
  void * transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__cont_env_ptr;
#line 1622 "intermod.m"
  MR_Word transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__TypeInfo_13_13;
#line 1622 "intermod.m"
  MR_Integer transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__N_8;
#line 1623 "intermod.m"
  MR_Box transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__conv0_N_8;
#line 1622 "intermod.m"
};

#line 1622 "intermod.m"
struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s {
#line 1622 "intermod.m"
  MR_Box * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1;
#line 1622 "intermod.m"
  MR_Cont transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont;
#line 1622 "intermod.m"
  void * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr;
#line 1622 "intermod.m"
  MR_Word transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9;
#line 1622 "intermod.m"
};

#line 1622 "intermod.m"
struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s {
#line 1622 "intermod.m"
  MR_Box * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1;
#line 1622 "intermod.m"
  MR_Cont transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont;
#line 1622 "intermod.m"
  void * transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr;
#line 1622 "intermod.m"
  MR_Word transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9;
#line 1622 "intermod.m"
};

#line 1251 "intermod.m"
struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s {
#line 1253 "intermod.m"
  MR_bool transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded;
#line 1267 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12;
#line 1273 "intermod.m"
  jmp_buf transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0;
#line 1273 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14;
#line 1273 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15;
#line 1273 "intermod.m"
  MR_Word transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23;
#line 1273 "intermod.m"
  MR_Box transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23;
#line 1251 "intermod.m"
};

#line 642 "intermod.m"
struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s {
#line 645 "intermod.m"
  MR_bool transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded;
#line 645 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9;
#line 645 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11;
#line 675 "intermod.m"
  jmp_buf transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0;
#line 675 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38;
#line 675 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44;
#line 675 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14;
#line 675 "intermod.m"
  MR_Integer transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15;
#line 675 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16;
#line 675 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26;
#line 675 "intermod.m"
  MR_Word transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41;
#line 676 "intermod.m"
  MR_Box transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15;
#line 642 "intermod.m"
};

#line 459 "intermod.m"
struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s {
#line 459 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1;
#line 459 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
#line 462 "intermod.m"
  MR_bool transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
#line 463 "intermod.m"
  jmp_buf transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0;
#line 463 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4;
#line 463 "intermod.m"
  MR_Word transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8;
#line 459 "intermod.m"
};

#line 296 "intermod.m"
struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s {
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10;
#line 301 "intermod.m"
  MR_bool transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded;
#line 312 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20;
#line 441 "intermod.m"
  jmp_buf transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0;
#line 441 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61;
#line 441 "intermod.m"
  MR_Word transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70;
#line 441 "intermod.m"
  MR_Box transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70;
#line 296 "intermod.m"
};


#line 291 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 294 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 297 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_for_opt_module_section_0;

#line 300 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_for_opt_module_section_0;

#line 303 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0;

#line 306 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 309 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 312 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 315 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 318 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 321 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 324 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 327 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 330 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 333 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 336 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 339 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 342 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 345 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 348 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 351 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 354 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 357 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 360 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

#line 363 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 366 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 369 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0;

#line 372 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 375 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 378 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0;

#line 381 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 384 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 387 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 390 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 393 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 396 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 399 "transform_hlds.intermod.c"
static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0[9];

#line 402 "transform_hlds.intermod.c"
static const MR_ConstString transform_hlds__intermod__transform_hlds__intermod__field_names_intermod_info_0_0[9];

#line 405 "transform_hlds.intermod.c"
static const MR_DuFunctorDesc transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0;

#line 408 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1];

#line 411 "transform_hlds.intermod.c"
static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1];

#line 414 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1];

#line 417 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1];

#line 420 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0;

#line 423 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1;

#line 426 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_opt_file_type_0[2];

#line 429 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_opt_file_type_0[2];

#line 432 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_opt_file_type_0[2];

#line 435 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
#line 438 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 440 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 443 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
#line 446 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 448 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 450 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3);

#line 453 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____opt_file_type_0_0_10001(
#line 456 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 458 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 461 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____opt_file_type_0_0_10001(
#line 464 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 466 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 468 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3);

#line 2504 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
#line 2504 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_1,
#line 2504 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_2,
#line 2504 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2504 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4);

#line 1190 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
#line 1190 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1190 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1190 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1190 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1190 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1190 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6);

#line 229 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
#line 229 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 229 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_2,
#line 229 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_4,
#line 229 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_5,
#line 229 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_6,
#line 229 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_7,
#line 229 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_8);

#line 210 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
#line 210 "intermod.m"
  MR_Word transform_hlds__intermod__ExtraExportedPreds0_8,
#line 210 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_10,
#line 210 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_11,
#line 210 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_12,
#line 210 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_19,
#line 210 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_20);

#line 2292 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2292__1_2_p_0(
#line 2292 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_10,
#line 2292 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_11);

#line 2258 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2258__1_4_p_0(
#line 2258 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_4,
#line 2258 "intermod.m"
  MR_Word transform_hlds__intermod__SpecPredMap_8,
#line 2258 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_13,
#line 2258 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_14);

#line 1905 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1905__1_4_p_0(
#line 1905 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1905 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVarMap_15,
#line 1905 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_23,
#line 1905 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_24);

#line 1823 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1823__1_1_p_0(
#line 1823 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_67);

#line 1701 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1701__1_3_p_0(
#line 1701 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__1_45,
#line 1701 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__2_46,
#line 1701 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_47);

#line 1623 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_2(
#line 1623 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_1(
#line 1622 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0(
#line 1622 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1622 "intermod.m"
  MR_Word transform_hlds__intermod__Set_5,
#line 1622 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_9,
#line 1622 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1622 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1328 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_intermod_info_body__1328__1_3_p_0(
#line 1328 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_49);

#line 1000 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1000__1_1_f_0(
#line 1000 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_54);

#line 987 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__987__1_1_f_0(
#line 987 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_50);

#line 842 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__842__1_2_p_0(
#line 842 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_44,
#line 842 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_45);

#line 2084 "intermod.m"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0(
#line 2084 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__1_1,
#line 2084 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 2084 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3);

#line 2084 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0(
#line 2084 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2084 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 2542 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__read_optimization_interfaces_12_p_0(
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__Globals_1,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__Transitive_2,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__ModulesProcessed0_4,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__5_5,
#line 2542 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__6_6,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0_7,
#line 2542 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Specs_8,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_9,
#line 2542 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_10);

#line 2518 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__keep_unused_and_reuse_pragmas_acc_5_p_0(
#line 2518 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_1,
#line 2518 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_2,
#line 2518 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2518 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4,
#line 2518 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ItemCord_5);

#line 2379 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__import_status_to_write_1_p_0(
#line 2379 "intermod.m"
  MR_Word transform_hlds__intermod__Status_2);

#line 2348 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(
#line 2348 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2348 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0_2,
#line 2348 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Preds_3);

#line 2290 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0_1(
#line 2290 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2290 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2290 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2316 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0(
#line 2316 "intermod.m"
  MR_Word transform_hlds__intermod__Instance0_5,
#line 2316 "intermod.m"
  MR_Word * transform_hlds__intermod__Instance_6,
#line 2316 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20,
#line 2316 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21);

#line 2313 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0_1(
#line 2313 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2313 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2313 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2313 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2313 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2307 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0(
#line 2307 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2307 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2307 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9,
#line 2307 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10);

#line 2290 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0_1(
#line 2290 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2290 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2290 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2272 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0(
#line 2272 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2272 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2272 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10,
#line 2272 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11);

#line 2258 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0_1(
#line 2258 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2258 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2258 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 2239 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0(
#line 2239 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_6,
#line 2239 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_7,
#line 2239 "intermod.m"
  MR_Word * transform_hlds__intermod__TypeDefn_8,
#line 2239 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11,
#line 2239 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12);

#line 2302 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_3(
#line 2302 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2302 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2302 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2302 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2302 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2268 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_2(
#line 2268 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2268 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2268 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2268 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2268 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2235 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_1(
#line 2235 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2235 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2235 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2235 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3,
#line 2235 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_4,
#line 2235 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_5);

#line 2220 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(
#line 2220 "intermod.m"
  MR_Word transform_hlds__intermod__Info_4,
#line 2220 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8,
#line 2220 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9);

#line 2162 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(
#line 2162 "intermod.m"
  MR_Word transform_hlds__intermod__TVarSet_4,
#line 2162 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2162 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2158 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_write_header_2_p_0(
#line 2158 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2158 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2156 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_module_info_3_p_0(
#line 2156 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_4,
#line 2156 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2156 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2152 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
#line 2152 "intermod.m"
  MR_Word transform_hlds__intermod__Types_4,
#line 2152 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2152 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2145 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_preds_3_p_0(
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_4,
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2145 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3);

#line 2136 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_module_info_2_p_0(
#line 2136 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2136 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2129 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_preds_2_p_0(
#line 2129 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2129 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2);

#line 2047 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
#line 2047 "intermod.m"
  MR_Word transform_hlds__intermod__Args_6,
#line 2047 "intermod.m"
  MR_Word transform_hlds__intermod__Modes_7,
#line 2047 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26,
#line 2047 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_VarSet_27,
#line 2047 "intermod.m"
  MR_Word * transform_hlds__intermod__PragmaVars_9);

#line 1978 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(
#line 1978 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_1,
#line 1978 "intermod.m"
  MR_Integer transform_hlds__intermod__Arity_2,
#line 1978 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1978 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_4);

#line 1917 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
#line 1917 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 1917 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_2,
#line 1917 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1917 "intermod.m"
  MR_Word * transform_hlds__intermod__Goals_4,
#line 1917 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5,
#line 1917 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6);

#line 1901 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
#line 1901 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1901 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1901 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 1889 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
#line 1889 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_5,
#line 1889 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1889 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadTerms_7,
#line 1889 "intermod.m"
  MR_Word * transform_hlds__intermod__Clause_8);

#line 1852 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_11,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_12,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__PragmaImpl_13,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__Attributes_14,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__Args_15,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__ProgVarset0_16,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_17,
#line 1852 "intermod.m"
  MR_Integer transform_hlds__intermod__ProcId_18);

#line 1843 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
#line 1843 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1843 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1843 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1843 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1823 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
#line 1823 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1823 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 1797 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_12,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_13,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_14,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__VarSet_15,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_16,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_17,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_18,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__MaybeVarTypes_19,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_20);

#line 1791 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0_1(
#line 1791 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1791 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1791 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1791 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1746 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0(
#line 1746 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_1,
#line 1746 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_2,
#line 1746 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3);

#line 1714 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_modes_6_p_0(
#line 1714 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_1,
#line 1714 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_2,
#line 1714 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_3,
#line 1714 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4);

#line 2003 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_2(
#line 2003 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2003 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2003 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2003 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1701 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1(
#line 1701 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1701 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1701 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1701 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1649 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0(
#line 1649 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1649 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1633 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_4_p_0(
#line 1633 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1633 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1631 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0_1(
#line 1631 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1631 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1631 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1631 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1627 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0(
#line 1627 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1627 "intermod.m"
  MR_Word transform_hlds__intermod__Instances_6);

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3(
#line 1622 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4(
#line 1622 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1622 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1622 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1622 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
#line 1622 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2(
#line 1622 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1622 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1622 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1622 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr);

#line 1611 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
#line 1611 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1611 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1601 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0_1(
#line 1601 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1601 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 1589 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0(
#line 1589 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1589 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1589 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_9,
#line 1589 "intermod.m"
  MR_Word transform_hlds__intermod__ClassDefn_10);

#line 1587 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0_1(
#line 1587 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1587 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1587 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1587 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1587 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1581 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0(
#line 1581 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1581 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6);

#line 1554 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_6_p_0(
#line 1554 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1554 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1554 "intermod.m"
  MR_Word transform_hlds__intermod__InstId_9,
#line 1554 "intermod.m"
  MR_Word transform_hlds__intermod__InstDefn_10);

#line 1552 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0_1(
#line 1552 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1552 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1552 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1552 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1552 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1545 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0(
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6);

#line 1525 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_6_p_0(
#line 1525 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1525 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1525 "intermod.m"
  MR_Word transform_hlds__intermod__ModeId_9,
#line 1525 "intermod.m"
  MR_Word transform_hlds__intermod__ModeDefn_10);

#line 1523 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0_1(
#line 1523 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1523 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1523 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1523 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1523 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1516 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0(
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6);

#line 1499 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(
#line 1499 "intermod.m"
  MR_Word transform_hlds__intermod__ConsId_5,
#line 1499 "intermod.m"
  MR_Word transform_hlds__intermod__ConsTag_6,
#line 1499 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Values_0_14,
#line 1499 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Values_15);

#line 1485 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0_1(
#line 1485 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1485 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1360 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0(
#line 1360 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1360 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 1340 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modules_3_p_0(
#line 1340 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1);

#line 1328 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_2(
#line 1328 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1328 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1328 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1328 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1358 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_1(
#line 1358 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1358 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1358 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1358 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 1285 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0(
#line 1285 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4);

#line 1273 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_1(
#line 1273 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1273 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_3(
#line 1273 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1273 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_2(
#line 1273 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1273 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_4(
#line 1273 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 1251 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0(
#line 1251 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4);

#line 1219 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
#line 1219 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1219 "intermod.m"
  MR_Word transform_hlds__intermod__SpecialId_2,
#line 1219 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_3,
#line 1219 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 1219 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__5_5,
#line 1219 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1219 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7);

#line 1202 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
#line 1202 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1202 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1202 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1202 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1202 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1202 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6);

#line 1108 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
#line 1108 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_7,
#line 1108 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_8,
#line 1108 "intermod.m"
  MR_Word transform_hlds__intermod__ForeignTypeBody0_9,
#line 1108 "intermod.m"
  MR_Word * transform_hlds__intermod__ForeignTypeBody_10,
#line 1108 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 1108 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25);

#line 1041 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_4_p_0(
#line 1041 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_5,
#line 1041 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_6,
#line 1041 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_33,
#line 1041 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_34);

#line 1039 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0_1(
#line 1039 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1039 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1039 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1039 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1039 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 1034 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0(
#line 1034 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1034 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7);

#line 998 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
#line 998 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 998 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 985 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
#line 985 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 985 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 970 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_11,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceMethodName0_12,
#line 970 "intermod.m"
  MR_Integer transform_hlds__intermod__MethodArity_13,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallTVarSet_14,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallExistQTVars_15,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallArgTypes_16,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_17,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__MethodContext_18,
#line 970 "intermod.m"
  MR_Word * transform_hlds__intermod__MaybePredId_19,
#line 970 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethodName_20);

#line 902 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
#line 902 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 902 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 902 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethod_9,
#line 902 "intermod.m"
  MR_Word transform_hlds__intermod__PredIds0_10,
#line 902 "intermod.m"
  MR_Word * transform_hlds__intermod__PredIds_11);

#line 857 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_3(
#line 857 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 857 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 857 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 857 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 857 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 855 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_2(
#line 855 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 855 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 855 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 855 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 855 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 840 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_1(
#line 840 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 840 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 840 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2);

#line 820 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0(
#line 820 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 820 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 820 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefn_8,
#line 820 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_39,
#line 820 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_40);

#line 818 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0_1(
#line 818 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 818 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 818 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 818 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 813 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0(
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefns_8,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_10,
#line 813 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_11);

#line 766 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(
#line 766 "intermod.m"
  MR_Word transform_hlds__intermod__RHS0_6,
#line 766 "intermod.m"
  MR_Word * transform_hlds__intermod__RHS_7,
#line 766 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 766 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_28,
#line 766 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_29);

#line 675 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_1(
#line 675 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 676 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_3(
#line 676 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 675 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_2(
#line 675 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 675 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_4(
#line 675 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 642 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0(
#line 642 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 642 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 642 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 642 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25);

#line 629 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_4_p_0(
#line 629 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 629 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 629 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_8,
#line 629 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_9);

#line 602 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_cases_5_p_0(
#line 602 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 602 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 602 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 602 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 602 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 587 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(
#line 587 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 587 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 587 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 587 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 587 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 486 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(
#line 486 "intermod.m"
  MR_Word transform_hlds__intermod__GoalExpr0_6,
#line 486 "intermod.m"
  MR_Word * transform_hlds__intermod__GoalExpr_7,
#line 486 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 486 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_81,
#line 486 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_82);

#line 478 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_5_p_0(
#line 478 "intermod.m"
  MR_Word transform_hlds__intermod__Goal0_6,
#line 478 "intermod.m"
  MR_Word * transform_hlds__intermod__Goal_7,
#line 478 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 478 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_13,
#line 478 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_14);

#line 463 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
#line 463 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 463 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
#line 463 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 463 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
#line 463 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 459 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
#line 459 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 459 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 421 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__check_for_ho_input_args_4_p_0(
#line 421 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_5,
#line 421 "intermod.m"
  MR_Word transform_hlds__intermod__VarTypes_6,
#line 421 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 421 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4);

#line 395 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_clauses_5_p_0(
#line 395 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 395 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 395 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 395 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 395 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5);

#line 384 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(
#line 384 "intermod.m"
  MR_Word transform_hlds__intermod__Target_1,
#line 384 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2);

#line 441 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_1(
#line 441 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 441 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_3(
#line 441 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 441 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_2(
#line 441 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 441 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_4(
#line 441 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg);

#line 296 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0(
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_9,
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_10,
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__PredInfo_11,
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__TypeSpecForcePreds_12,
#line 296 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_13,
#line 296 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_14,
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_15,
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_16);

#line 811 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_pred_import_status_2_p_0_1(
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 811 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);

#line 2486 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_10(
#line 2486 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2486 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2486 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2486 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 2485 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_9(
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2485 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_8(
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2481 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_7(
#line 2481 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2481 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2481 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2481 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 2480 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_6(
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2480 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_5(
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2464 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_4(
#line 2464 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2464 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2464 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2464 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3);

#line 2463 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_3(
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2463 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_2(
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2);

#line 2460 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_1(
#line 2460 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2460 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1);

#line 811 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_opt_file_4_p_0_1(
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 811 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4);


static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[27][2];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[33][3];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[5][8];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[5][5];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[6][6];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[10][7];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_7[2][1];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_8[3][9];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][14];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_10[1][4];

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_11[1][13];




static /* final */ const MR_Box transform_hlds__intermod_scalar_common_1[27][2] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_opt_module_section_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_src_file_kind_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_src_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_key_1)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_opt_file_kind_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__read_modules__parse_tree__read_modules__type_ctor_info_have_read_module_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_opt_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[3]))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[4]))
  },
  /* row 18 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_2[2]))
  },
  /* row 19 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__intermod_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 24 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_marker_0))
  },
  /* row 25 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: cannot open"))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_2[33][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[8]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__intermod_scalar_common_1[13])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[0])),
    ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[0])),
    ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_9)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[1])),
    ((MR_Box) (transform_hlds__intermod__grab_opt_files_6_p_0_10)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__intermod__gather_instances_3_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[0])),
    ((MR_Box) (transform_hlds__intermod__gather_instances_3_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[2])),
    ((MR_Box) (transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[3])),
    ((MR_Box) (transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[1])),
    ((MR_Box) (transform_hlds__intermod__gather_types_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__intermod__write_intermod_info_body_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_type_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_5[5])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_10[0])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_clause_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[4])),
    ((MR_Box) (transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[6])),
    ((MR_Box) (transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[7])),
    ((MR_Box) (transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__intermod__adjust_class_status_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_6[9])),
    ((MR_Box) (transform_hlds__intermod__adjust_instance_status_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_4[1])),
    ((MR_Box) (transform_hlds__intermod__adjust_instance_status_3_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_3[5][8] = {
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
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&parse_tree__mercury_to_mercury__parse_tree__mercury_to_mercury__type_ctor_info_output_lang_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 4 */
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

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
  /* row 4 */
  {
    ((MR_Box) (&transform_hlds__intermod_scalar_common_3[3])),
    ((MR_Box) (transform_hlds__intermod__intermod_write_pred_decls_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_5[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_kind__parse_tree__file_kind__type_ctor_info_int_file_kind_0)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_int_for_opt_module_section_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_for_opt_module_section_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_6[10][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0)),
    ((MR_Box) (&transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
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
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
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
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&transform_hlds__intermod__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
  /* row 9 */
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_9[1][14] = {
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_maybe_vartypes_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box transform_hlds__intermod_scalar_common_10[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_impl_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pragma_foreign_proc_attributes_0)),
    ((MR_Box) (&transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2697 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2705 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2713 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_for_opt_module_section_0 = {
  &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1,
  {
    (MR_TypeInfo) &parse_tree__status__parse_tree__status__type_ctor_info_int_for_opt_module_section_0
  }
};

#line 2721 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_for_opt_module_section_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__parse_tree__prog_item__ti_item_block_1parse_tree__status__type_ctor_info_int_for_opt_module_section_0
  }
};

#line 2729 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_parse_tree__prog_data__type_ctor_info_instance_method_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0
  }
};

#line 2738 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2746 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 2755 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2764 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
  }
};

#line 2772 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2780 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2788 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2796 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2804 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2813 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2821 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2829 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2837 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 2846 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 2854 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2862 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &transform_hlds__intermod__term__ti_term_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2871 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2879 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__intermod__term__pti_term_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2887 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_hlds__hlds_data__type_ctor_info_hlds_class_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0
  }
};

#line 2896 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2904 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_class_id_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__intermod__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2913 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0
  }
};

#line 2922 "transform_hlds.intermod.c"
static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__intermod__tree234__pti_tree234_2__plain_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__intermod__pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2931 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 2939 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0
  }
};

#line 2947 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2956 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 2964 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 2973 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__intermod__pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 2981 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct2 transform_hlds__intermod__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__intermod__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2990 "transform_hlds.intermod.c"
static const MR_FA_TypeInfo_Struct1 transform_hlds__intermod__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 2998 "transform_hlds.intermod.c"
static const MR_PseudoTypeInfo transform_hlds__intermod__transform_hlds__intermod__field_types_intermod_info_0_0[9] = {
  (MR_PseudoTypeInfo) &transform_hlds__intermod__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_class_id_0hlds__hlds_data__type_ctor_info_hlds_instance_defn_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__list__ti_list_1pair__ti_pair_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__intermod__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0
};

#line 3011 "transform_hlds.intermod.c"
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

#line 3024 "transform_hlds.intermod.c"
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

#line 3039 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

#line 3044 "transform_hlds.intermod.c"
static const MR_DuPtagLayout transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    transform_hlds__intermod__transform_hlds__intermod__du_stag_ordered_intermod_info_0_0
  }
};

#line 3053 "transform_hlds.intermod.c"
static const MR_DuFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0[1] = {
  &transform_hlds__intermod__transform_hlds__intermod__du_functor_desc_intermod_info_0_0
};

#line 3058 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0[1] = {
  (MR_Integer) 0
};

#line 3063 "transform_hlds.intermod.c"
const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__intermod____Unify____intermod_info_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____intermod_info_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "intermod_info",
  {     transform_hlds__intermod__transform_hlds__intermod__du_name_ordered_intermod_info_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__du_ptag_ordered_intermod_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_intermod_info_0
};

#line 3080 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0 = {
  (MR_String) "opt_file",
  (MR_Integer) 0
};

#line 3086 "transform_hlds.intermod.c"
static const MR_EnumFunctorDesc transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1 = {
  (MR_String) "trans_opt_file",
  (MR_Integer) 1
};

#line 3092 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_opt_file_type_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1
};

#line 3098 "transform_hlds.intermod.c"
static const MR_EnumFunctorDescPtr transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_opt_file_type_0[2] = {
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_0,
  &transform_hlds__intermod__transform_hlds__intermod__enum_functor_desc_opt_file_type_0_1
};

#line 3104 "transform_hlds.intermod.c"
static const MR_Integer transform_hlds__intermod__transform_hlds__intermod__functor_number_map_opt_file_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3110 "transform_hlds.intermod.c"
const MR_TypeCtorInfo_Struct transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_opt_file_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__intermod____Unify____opt_file_type_0_0_10001)),
  ((MR_Box) (transform_hlds__intermod____Compare____opt_file_type_0_0_10001)),
  (MR_String) "transform_hlds.intermod",
  (MR_String) "opt_file_type",
  {     transform_hlds__intermod__transform_hlds__intermod__enum_name_ordered_opt_file_type_0 },
  {     transform_hlds__intermod__transform_hlds__intermod__enum_value_ordered_opt_file_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__intermod__transform_hlds__intermod__functor_number_map_opt_file_type_0
};

#line 3127 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0_10001(
#line 3130 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 3132 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 3134 "transform_hlds.intermod.c"
{
#line 3136 "transform_hlds.intermod.c"
  {
#line 3138 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded;

#line 3141 "transform_hlds.intermod.c"
    {
#line 3143 "transform_hlds.intermod.c"
      transform_hlds__intermod__succeeded = transform_hlds__intermod____Unify____intermod_info_0_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 3146 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 3148 "transform_hlds.intermod.c"
  }
#line 3150 "transform_hlds.intermod.c"
}

#line 3153 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0_10001(
#line 3156 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 3158 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 3160 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3)
#line 3162 "transform_hlds.intermod.c"
{
#line 3164 "transform_hlds.intermod.c"
  {
#line 3166 "transform_hlds.intermod.c"
    MR_Word transform_hlds__intermod__conv0_HeadVar__1_1;

#line 3169 "transform_hlds.intermod.c"
    {
#line 3171 "transform_hlds.intermod.c"
      transform_hlds__intermod____Compare____intermod_info_0_0(&transform_hlds__intermod__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3));
    }
#line 3174 "transform_hlds.intermod.c"
    *transform_hlds__intermod__wrapper_arg_1 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__1_1));
#line 3176 "transform_hlds.intermod.c"
  }
#line 3178 "transform_hlds.intermod.c"
}

#line 3181 "transform_hlds.intermod.c"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____opt_file_type_0_0_10001(
#line 3184 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 3186 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 3188 "transform_hlds.intermod.c"
{
#line 3190 "transform_hlds.intermod.c"
  {
#line 3192 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded;

#line 3195 "transform_hlds.intermod.c"
    {
#line 3197 "transform_hlds.intermod.c"
      transform_hlds__intermod__succeeded = transform_hlds__intermod____Unify____opt_file_type_0_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 3200 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 3202 "transform_hlds.intermod.c"
  }
#line 3204 "transform_hlds.intermod.c"
}

#line 3207 "transform_hlds.intermod.c"
static void MR_CALL 
transform_hlds__intermod____Compare____opt_file_type_0_0_10001(
#line 3210 "transform_hlds.intermod.c"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 3212 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 3214 "transform_hlds.intermod.c"
  MR_Box transform_hlds__intermod__wrapper_arg_3)
#line 3216 "transform_hlds.intermod.c"
{
#line 3218 "transform_hlds.intermod.c"
  {
#line 3220 "transform_hlds.intermod.c"
    MR_Word transform_hlds__intermod__conv0_HeadVar__1_1;

#line 3223 "transform_hlds.intermod.c"
    {
#line 3225 "transform_hlds.intermod.c"
      transform_hlds__intermod____Compare____opt_file_type_0_0(&transform_hlds__intermod__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3));
    }
#line 3228 "transform_hlds.intermod.c"
    *transform_hlds__intermod__wrapper_arg_1 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__1_1));
#line 3230 "transform_hlds.intermod.c"
  }
#line 3232 "transform_hlds.intermod.c"
}

#line 2504 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(
#line 2504 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_1,
#line 2504 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_2,
#line 2504 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2504 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4)
#line 2504 "intermod.m"
{
#line 2507 "intermod.m"
  {
#line 2507 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2507 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2507 "intermod.m"
      *transform_hlds__intermod__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2507 "intermod.m"
    else
#line 2509 "intermod.m"
      {
#line 2509 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0;
#line 2509 "intermod.m"
        MR_Word transform_hlds__intermod__ItemBlock0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 2509 "intermod.m"
        MR_Word transform_hlds__intermod__ItemBlocks0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 2509 "intermod.m"
        MR_Word transform_hlds__intermod__ItemBlock_11;
#line 2509 "intermod.m"
        MR_Word transform_hlds__intermod__ItemBlocks_12;
#line 2509 "intermod.m"
        MR_Box transform_hlds__intermod__Section_13 = (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock0_9, (MR_Integer) 0));
#line 2509 "intermod.m"
        MR_Word transform_hlds__intermod__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock0_9, (MR_Integer) 1)));
#line 2509 "intermod.m"
        MR_Word transform_hlds__intermod__Items0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock0_9, (MR_Integer) 2)));
#line 2509 "intermod.m"
        MR_Word transform_hlds__intermod__ItemCord_16;
#line 2509 "intermod.m"
        MR_Word transform_hlds__intermod__Items_17;
#line 2509 "intermod.m"
        MR_Word transform_hlds__intermod__V_18_18;

#line 2512 "intermod.m"
        {
#line 2512 "intermod.m"
          transform_hlds__intermod__V_18_18 = mercury__cord__init_0_f_0(transform_hlds__intermod__TypeCtorInfo_20_20);
        }
#line 2511 "intermod.m"
        {
#line 2511 "intermod.m"
          transform_hlds__intermod__keep_unused_and_reuse_pragmas_acc_5_p_0(transform_hlds__intermod__UnusedArgs_1, transform_hlds__intermod__StructureReuse_2, transform_hlds__intermod__Items0_15, transform_hlds__intermod__V_18_18, &transform_hlds__intermod__ItemCord_16);
        }
#line 2513 "intermod.m"
        {
#line 2513 "intermod.m"
          transform_hlds__intermod__Items_17 = mercury__cord__list_1_f_0(transform_hlds__intermod__TypeCtorInfo_20_20, transform_hlds__intermod__ItemCord_16);
        }
#line 2514 "intermod.m"
        {
#line 2514 "intermod.m"
          transform_hlds__intermod__ItemBlock_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2514 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock_11, 0) = transform_hlds__intermod__Section_13;
#line 2514 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock_11, 1) = ((MR_Box) (transform_hlds__intermod__Context_14));
#line 2514 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemBlock_11, 2) = ((MR_Box) (transform_hlds__intermod__Items_17));
#line 2514 "intermod.m"
        }
#line 2515 "intermod.m"
        {
#line 2515 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(transform_hlds__intermod__UnusedArgs_1, transform_hlds__intermod__StructureReuse_2, transform_hlds__intermod__ItemBlocks0_10, &transform_hlds__intermod__ItemBlocks_12);
        }
#line 2509 "intermod.m"
        {
#line 2509 "intermod.m"
          MR_Word base;
#line 2509 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2509 "intermod.m"
          *transform_hlds__intermod__HeadVar__4_4 = base;
#line 2509 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__ItemBlock_11));
#line 2509 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__ItemBlocks_12));
#line 2509 "intermod.m"
        }
#line 2509 "intermod.m"
      }
#line 2507 "intermod.m"
  }
#line 2504 "intermod.m"
}

#line 1190 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(
#line 1190 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1190 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1190 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1190 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1190 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1190 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6)
#line 1190 "intermod.m"
{
#line 1194 "intermod.m"
  {
#line 1194 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1194 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1194 "intermod.m"
      {
#line 1194 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1194 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1194 "intermod.m"
      }
#line 1194 "intermod.m"
    else
#line 1198 "intermod.m"
      {
#line 1198 "intermod.m"
        MR_Box transform_hlds__intermod__Body_14;
#line 1198 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1198 "intermod.m"
        MR_Word transform_hlds__intermod__Assertions_16;
#line 1198 "intermod.m"
        MR_Word transform_hlds__intermod__MaybeUserEqComp_17;
#line 1198 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1198 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;

#line 1196 "intermod.m"
        transform_hlds__intermod__Body_14 = (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 0));
#line 1196 "intermod.m"
        transform_hlds__intermod__MaybeUserEqComp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 1)));
#line 1196 "intermod.m"
        transform_hlds__intermod__Assertions_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_21_21, (MR_Integer) 2)));
#line 1206 "intermod.m"
        if ((transform_hlds__intermod__MaybeUserEqComp0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1206 "intermod.m"
          {
#line 1206 "intermod.m"
            transform_hlds__intermod__MaybeUserEqComp_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1206 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1206 "intermod.m"
          }
#line 1206 "intermod.m"
        else
#line 1206 "intermod.m"
          {
#line 1206 "intermod.m"
            MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEqComp0_15, (MR_Integer) 0)));

#line 1206 "intermod.m"
            if (((MR_tag((MR_Word) transform_hlds__intermod__V_53_53)) == (MR_mktag((MR_Integer) 1))))
#line 1207 "intermod.m"
              {
#line 1209 "intermod.m"
                transform_hlds__intermod__MaybeUserEqComp_17 = transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1209 "intermod.m"
                *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1207 "intermod.m"
              }
#line 1206 "intermod.m"
            else
#line 1212 "intermod.m"
              {
#line 1212 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserEq0_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_53_53, (MR_Integer) 0)));
#line 1212 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserCompare0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_53_53, (MR_Integer) 1)));
#line 1212 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserEq_42;
#line 1212 "intermod.m"
                MR_Word transform_hlds__intermod__MaybeUserCompare_43;
#line 1212 "intermod.m"
                MR_Word transform_hlds__intermod__V_48_48;
#line 1212 "intermod.m"
                MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_32_50;

#line 1223 "intermod.m"
                if ((transform_hlds__intermod__MaybeUserEq0_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1223 "intermod.m"
                  {
#line 1223 "intermod.m"
                    transform_hlds__intermod__MaybeUserEq_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1223 "intermod.m"
                    transform_hlds__intermod__STATE_VARIABLE_Info_32_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1223 "intermod.m"
                  }
#line 1223 "intermod.m"
                else
#line 1225 "intermod.m"
                  {
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__Pred0_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq0_40, (MR_Integer) 0)));
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__Pred_64;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__SpecialPreds_66;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__UnifyPredId_67;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__UnifyPredInfo_68;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__TVarSet_69;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__ExistQVars_70;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__ArgTypes_71;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__HeadTypeParams_72;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__Markers0_73;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__Markers_74;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__Context_75;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__UserEqPredId_76;
#line 1225 "intermod.m"
                    MR_Word transform_hlds__intermod__V_80_80;
#line 1227 "intermod.m"
                    MR_Box transform_hlds__intermod__conv0_UnifyPredId_67;
#line 633 "intermod.m"
                    MR_Word transform_hlds__intermod__V_91_91;

#line 1226 "intermod.m"
                    {
#line 1226 "intermod.m"
                      hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_66);
                    }
#line 1227 "intermod.m"
                    {
#line 1227 "intermod.m"
                      transform_hlds__intermod__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "intermod.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1227 "intermod.m"
                      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_2));
#line 1227 "intermod.m"
                    }
#line 1227 "intermod.m"
                    {
#line 1227 "intermod.m"
                      mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_66, ((MR_Box) (transform_hlds__intermod__V_80_80)), &transform_hlds__intermod__conv0_UnifyPredId_67);
                    }
#line 1227 "intermod.m"
                    transform_hlds__intermod__UnifyPredId_67 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_67);
#line 1228 "intermod.m"
                    {
#line 1228 "intermod.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_67, &transform_hlds__intermod__UnifyPredInfo_68);
                    }
#line 1229 "intermod.m"
                    {
#line 1229 "intermod.m"
                      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__TVarSet_69, &transform_hlds__intermod__ExistQVars_70, &transform_hlds__intermod__ArgTypes_71);
                    }
#line 1230 "intermod.m"
                    {
#line 1230 "intermod.m"
                      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__HeadTypeParams_72);
                    }
#line 1231 "intermod.m"
                    {
#line 1231 "intermod.m"
                      hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_73);
                    }
#line 1232 "intermod.m"
                    {
#line 1232 "intermod.m"
                      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_73, &transform_hlds__intermod__Markers_74);
                    }
#line 1233 "intermod.m"
                    {
#line 1233 "intermod.m"
                      hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_68, &transform_hlds__intermod__Context_75);
                    }
#line 1234 "intermod.m"
                    {
#line 1234 "intermod.m"
                      hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_74, transform_hlds__intermod__TVarSet_69, transform_hlds__intermod__ExistQVars_70, transform_hlds__intermod__ArgTypes_71, transform_hlds__intermod__HeadTypeParams_72, transform_hlds__intermod__Context_75, transform_hlds__intermod__Pred0_63, &transform_hlds__intermod__Pred_64, &transform_hlds__intermod__UserEqPredId_76);
                    }
#line 1225 "intermod.m"
                    {
#line 1225 "intermod.m"
                      transform_hlds__intermod__MaybeUserEq_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq_42, 0) = ((MR_Box) (transform_hlds__intermod__Pred_64));
#line 1225 "intermod.m"
                    }
#line 633 "intermod.m"
                    {
#line 633 "intermod.m"
                      transform_hlds__intermod__V_91_91 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                    }
#line 633 "intermod.m"
                    {
#line 633 "intermod.m"
                      transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_76, transform_hlds__intermod__V_91_91);
                    }
#line 638 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 637 "intermod.m"
                      transform_hlds__intermod__STATE_VARIABLE_Info_32_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 638 "intermod.m"
                    else
#line 639 "intermod.m"
                      {
#line 639 "intermod.m"
                        MR_Word transform_hlds__intermod__V_93_93;

#line 639 "intermod.m"
                        {
#line 639 "intermod.m"
                          transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_76, &transform_hlds__intermod__V_93_93, transform_hlds__intermod__STATE_VARIABLE_Info_0_5, &transform_hlds__intermod__STATE_VARIABLE_Info_32_50);
                        }
#line 639 "intermod.m"
                      }
#line 1225 "intermod.m"
                  }
#line 1215 "intermod.m"
                {
#line 1215 "intermod.m"
                  transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(transform_hlds__intermod__ModuleInfo_1, (MR_Integer) 2, transform_hlds__intermod__TypeCtor_2, transform_hlds__intermod__MaybeUserCompare0_41, &transform_hlds__intermod__MaybeUserCompare_43, transform_hlds__intermod__STATE_VARIABLE_Info_32_50, transform_hlds__intermod__STATE_VARIABLE_Info_6);
                }
#line 1212 "intermod.m"
                {
#line 1212 "intermod.m"
                  transform_hlds__intermod__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (transform_hlds__intermod__MaybeUserEq_42));
#line 1212 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_48_48, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserCompare_43));
#line 1212 "intermod.m"
                }
#line 1212 "intermod.m"
                {
#line 1212 "intermod.m"
                  transform_hlds__intermod__MaybeUserEqComp_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEqComp_17, 0) = ((MR_Box) (transform_hlds__intermod__V_48_48));
#line 1212 "intermod.m"
                }
#line 1212 "intermod.m"
              }
#line 1206 "intermod.m"
          }
#line 1197 "intermod.m"
        {
#line 1197 "intermod.m"
          transform_hlds__intermod__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1197 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 0) = transform_hlds__intermod__Body_14;
#line 1197 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_17));
#line 1197 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 2) = ((MR_Box) (transform_hlds__intermod__Assertions_16));
#line 1197 "intermod.m"
        }
#line 1197 "intermod.m"
        {
#line 1197 "intermod.m"
          MR_Word base;
#line 1197 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "intermod.m"
          *transform_hlds__intermod__HeadVar__4_4 = base;
#line 1197 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_22_22));
#line 1197 "intermod.m"
        }
#line 1198 "intermod.m"
      }
#line 1194 "intermod.m"
  }
#line 1190 "intermod.m"
}

#line 229 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(
#line 229 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 229 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_2,
#line 229 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_4,
#line 229 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_5,
#line 229 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_6,
#line 229 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_7,
#line 229 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_8)
#line 229 "intermod.m"
{
#line 232 "intermod.m"
  while (MR_TRUE)
#line 232 "intermod.m"
    {
#line 232 "intermod.m"
      /* tailcall optimized into a loop */
#line 232 "intermod.m"
      {
#line 232 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 232 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 232 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_8 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 232 "intermod.m"
        else
#line 234 "intermod.m"
          {
#line 234 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_62_62;
#line 234 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_63_63;
#line 234 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 234 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 234 "intermod.m"
            MR_Word transform_hlds__intermod__ModuleInfo0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 5)));
#line 234 "intermod.m"
            MR_Word transform_hlds__intermod__PredTable0_26;
#line 234 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo0_27;
#line 234 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecInfo_28;
#line 234 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecForcePreds_30;
#line 234 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesInfo0_33;
#line 234 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_60_60;
#line 2170 "intermod.m"
            MR_Word transform_hlds__intermod__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 0)));
#line 2170 "intermod.m"
            MR_Word transform_hlds__intermod__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 1)));
#line 2170 "intermod.m"
            MR_Word transform_hlds__intermod__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 2)));
#line 2170 "intermod.m"
            MR_Word transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 3)));
#line 2170 "intermod.m"
            MR_Word transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 4)));
#line 2170 "intermod.m"
            MR_Word transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 6)));
#line 2170 "intermod.m"
            MR_Word transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 7)));
#line 2170 "intermod.m"
            MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_7, (MR_Integer) 8)));
#line 237 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_PredInfo0_27;
#line 239 "intermod.m"
            MR_Word transform_hlds__intermod__V_29_29;
#line 239 "intermod.m"
            MR_Word transform_hlds__intermod__V_31_31;
#line 239 "intermod.m"
            MR_Word transform_hlds__intermod__V_32_32;
#line 242 "intermod.m"
            MR_Word transform_hlds__intermod__ExplicitVarTypes_34;

#line 236 "intermod.m"
            {
#line 236 "intermod.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__PredTable0_26);
            }
#line 3728 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_62_62 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 3730 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_63_63 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 237 "intermod.m"
            {
#line 237 "intermod.m"
              mercury__map__lookup_3_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, transform_hlds__intermod__TypeCtorInfo_63_63, transform_hlds__intermod__PredTable0_26, ((MR_Box) (transform_hlds__intermod__PredId_17)), &transform_hlds__intermod__conv0_PredInfo0_27);
            }
#line 237 "intermod.m"
            transform_hlds__intermod__PredInfo0_27 = ((MR_Word) transform_hlds__intermod__conv0_PredInfo0_27);
#line 238 "intermod.m"
            {
#line 238 "intermod.m"
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__TypeSpecInfo_28);
            }
#line 239 "intermod.m"
            transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 0)));
#line 239 "intermod.m"
            transform_hlds__intermod__TypeSpecForcePreds_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 1)));
#line 239 "intermod.m"
            transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 2)));
#line 239 "intermod.m"
            transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_28, (MR_Integer) 3)));
#line 240 "intermod.m"
            {
#line 240 "intermod.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__ClausesInfo0_33);
            }
#line 242 "intermod.m"
            {
#line 242 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_explicit_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ExplicitVarTypes_34);
            }
#line 243 "intermod.m"
            {
#line 243 "intermod.m"
              transform_hlds__intermod__succeeded = parse_tree__prog_data__vartypes_is_empty_1_p_0(transform_hlds__intermod__ExplicitVarTypes_34);
            }
#line 242 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 244 "intermod.m"
              {
#line 244 "intermod.m"
                transform_hlds__intermod__succeeded = transform_hlds__intermod__should_be_processed_8_p_0(transform_hlds__intermod__ProcessLocalPreds_2, transform_hlds__intermod__PredId_17, transform_hlds__intermod__PredInfo0_27, transform_hlds__intermod__TypeSpecForcePreds_30, transform_hlds__intermod__InlineThreshold_4, transform_hlds__intermod__HigherOrderSizeLimit_5, transform_hlds__intermod__Deforestation_6, transform_hlds__intermod__ModuleInfo0_25);
              }
#line 290 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 248 "intermod.m"
              {
#line 248 "intermod.m"
                MR_Word transform_hlds__intermod__ClausesRep0_37;
#line 248 "intermod.m"
                MR_Word transform_hlds__intermod__ItemNumbers0_38;
#line 633 "intermod.m"
                MR_Word transform_hlds__intermod__V_79_79;

#line 252 "intermod.m"
                {
#line 252 "intermod.m"
                  hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ClausesRep0_37, &transform_hlds__intermod__ItemNumbers0_38);
                }
#line 633 "intermod.m"
                {
#line 633 "intermod.m"
                  transform_hlds__intermod__V_79_79 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 633 "intermod.m"
                {
#line 633 "intermod.m"
                  transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_17, transform_hlds__intermod__V_79_79);
                }
#line 3800 "transform_hlds.intermod.c"
                if (transform_hlds__intermod__succeeded)
#line 288 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 3804 "transform_hlds.intermod.c"
                else
#line 3806 "transform_hlds.intermod.c"
                  {
#line 3808 "transform_hlds.intermod.c"
                    MR_Word transform_hlds__intermod__DoWrite0_92;
#line 3810 "transform_hlds.intermod.c"
                    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_53_93;

#line 639 "intermod.m"
                    {
#line 639 "intermod.m"
                      transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_17, &transform_hlds__intermod__DoWrite0_92, transform_hlds__intermod__STATE_VARIABLE_Info_0_7, &transform_hlds__intermod__STATE_VARIABLE_Info_53_93);
                    }
#line 3818 "transform_hlds.intermod.c"
#line 3819 "transform_hlds.intermod.c"
                    switch (transform_hlds__intermod__DoWrite0_92) {
#line 3821 "transform_hlds.intermod.c"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 3823 "transform_hlds.intermod.c"
                      case (MR_Integer) 0:
#line 288 "intermod.m"
                        transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 3827 "transform_hlds.intermod.c"
                        break;
#line 3829 "transform_hlds.intermod.c"
                      case (MR_Integer) 1:
#line 3831 "transform_hlds.intermod.c"
                        {
#line 3833 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__VarTypes_39;
#line 3835 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__TVarSet_40;
#line 3837 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__Clauses0_41;
#line 3839 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__Clauses_42;
#line 3841 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_54_54;
#line 3843 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_55_55;
#line 3845 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__DoWrite_97;
#line 3847 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__ClausesRep_98;
#line 3849 "transform_hlds.intermod.c"
                          MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_56_99;
#line 2184 "intermod.m"
                          MR_Word transform_hlds__intermod__V_83_83;
#line 2184 "intermod.m"
                          MR_Word transform_hlds__intermod__V_84_84;
#line 2184 "intermod.m"
                          MR_Word transform_hlds__intermod__V_85_85;
#line 2184 "intermod.m"
                          MR_Word transform_hlds__intermod__V_86_86;
#line 2184 "intermod.m"
                          MR_Word transform_hlds__intermod__V_87_87;
#line 2184 "intermod.m"
                          MR_Word transform_hlds__intermod__V_88_88;
#line 2184 "intermod.m"
                          MR_Word transform_hlds__intermod__V_89_89;
#line 2184 "intermod.m"
                          MR_Word transform_hlds__intermod__V_91_91;
#line 2184 "intermod.m"
                          MR_Word transform_hlds__intermod__V_90_90;

#line 255 "intermod.m"
                          {
#line 255 "intermod.m"
                            hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__VarTypes_39);
                          }
#line 256 "intermod.m"
                          {
#line 256 "intermod.m"
                            hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__TVarSet_40);
                          }
#line 2184 "intermod.m"
                          transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 0)));
#line 2184 "intermod.m"
                          transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 1)));
#line 2184 "intermod.m"
                          transform_hlds__intermod__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 2)));
#line 2184 "intermod.m"
                          transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 3)));
#line 2184 "intermod.m"
                          transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 4)));
#line 2184 "intermod.m"
                          transform_hlds__intermod__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 5)));
#line 2184 "intermod.m"
                          transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 6)));
#line 2184 "intermod.m"
                          transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 7)));
#line 2184 "intermod.m"
                          transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_53_93, (MR_Integer) 8)));
#line 2184 "intermod.m"
                          {
#line 2184 "intermod.m"
                            transform_hlds__intermod__STATE_VARIABLE_Info_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2184 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 0) = ((MR_Box) (transform_hlds__intermod__V_83_83));
#line 2184 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 1) = ((MR_Box) (transform_hlds__intermod__V_84_84));
#line 2184 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 2) = ((MR_Box) (transform_hlds__intermod__V_85_85));
#line 2184 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 3) = ((MR_Box) (transform_hlds__intermod__V_86_86));
#line 2184 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 4) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2184 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 5) = ((MR_Box) (transform_hlds__intermod__V_88_88));
#line 2184 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 6) = ((MR_Box) (transform_hlds__intermod__V_89_89));
#line 2184 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_39));
#line 2184 "intermod.m"
                            MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_54_54, 8) = ((MR_Box) (transform_hlds__intermod__V_91_91));
#line 2184 "intermod.m"
                          }
#line 258 "intermod.m"
                          {
#line 258 "intermod.m"
                            transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(transform_hlds__intermod__TVarSet_40, transform_hlds__intermod__STATE_VARIABLE_Info_54_54, &transform_hlds__intermod__STATE_VARIABLE_Info_55_55);
                          }
#line 259 "intermod.m"
                          {
#line 259 "intermod.m"
                            hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep0_37, &transform_hlds__intermod__Clauses0_41);
                          }
#line 260 "intermod.m"
                          {
#line 260 "intermod.m"
                            transform_hlds__intermod__intermod_traverse_clauses_5_p_0(transform_hlds__intermod__Clauses0_41, &transform_hlds__intermod__Clauses_42, &transform_hlds__intermod__DoWrite_97, transform_hlds__intermod__STATE_VARIABLE_Info_55_55, &transform_hlds__intermod__STATE_VARIABLE_Info_56_99);
                          }
#line 261 "intermod.m"
                          {
#line 261 "intermod.m"
                            hlds__hlds_clauses__set_clause_list_2_p_0(transform_hlds__intermod__Clauses_42, &transform_hlds__intermod__ClausesRep_98);
                          }
#line 285 "intermod.m"
#line 285 "intermod.m"
                          switch (transform_hlds__intermod__DoWrite_97) {
#line 285 "intermod.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 285 "intermod.m"
                            case (MR_Integer) 0:
#line 288 "intermod.m"
                              transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 285 "intermod.m"
                              break;
#line 285 "intermod.m"
                            case (MR_Integer) 1:
#line 268 "intermod.m"
                              {
#line 268 "intermod.m"
                                MR_Word transform_hlds__intermod__ClausesInfo_45;
#line 268 "intermod.m"
                                MR_Word transform_hlds__intermod__PredInfo_46;
#line 268 "intermod.m"
                                MR_Word transform_hlds__intermod__PredTable_47;
#line 268 "intermod.m"
                                MR_Word transform_hlds__intermod__ModuleInfo_48;
#line 268 "intermod.m"
                                MR_Word transform_hlds__intermod__Preds0_49;
#line 268 "intermod.m"
                                MR_Word transform_hlds__intermod__Preds_50;
#line 268 "intermod.m"
                                MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_58_58;
#line 268 "intermod.m"
                                MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_59_59;

#line 269 "intermod.m"
                                {
#line 269 "intermod.m"
                                  hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(transform_hlds__intermod__ClausesRep_98, transform_hlds__intermod__ItemNumbers0_38, transform_hlds__intermod__ClausesInfo0_33, &transform_hlds__intermod__ClausesInfo_45);
                                }
#line 271 "intermod.m"
                                {
#line 271 "intermod.m"
                                  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(transform_hlds__intermod__ClausesInfo_45, transform_hlds__intermod__PredInfo0_27, &transform_hlds__intermod__PredInfo_46);
                                }
#line 272 "intermod.m"
                                {
#line 272 "intermod.m"
                                  mercury__map__det_update_4_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, transform_hlds__intermod__TypeCtorInfo_63_63, ((MR_Box) (transform_hlds__intermod__PredId_17)), ((MR_Box) (transform_hlds__intermod__PredInfo_46)), transform_hlds__intermod__PredTable0_26, &transform_hlds__intermod__PredTable_47);
                                }
#line 273 "intermod.m"
                                {
#line 273 "intermod.m"
                                  hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__PredTable_47, transform_hlds__intermod__ModuleInfo0_25, &transform_hlds__intermod__ModuleInfo_48);
                                }
#line 274 "intermod.m"
                                {
#line 274 "intermod.m"
                                  transform_hlds__intermod__intermod_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_56_99, &transform_hlds__intermod__Preds0_49);
                                }
#line 275 "intermod.m"
                                {
#line 275 "intermod.m"
                                  transform_hlds__intermod__succeeded = hlds__hlds_pred__pred_info_pragma_goal_type_1_p_0(transform_hlds__intermod__PredInfo_46);
                                }
#line 279 "intermod.m"
                                if (transform_hlds__intermod__succeeded)
#line 278 "intermod.m"
                                  {
#line 278 "intermod.m"
                                    transform_hlds__intermod__intermod_info_set_write_header_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_56_99, &transform_hlds__intermod__STATE_VARIABLE_Info_58_58);
                                  }
#line 279 "intermod.m"
                                else
#line 279 "intermod.m"
                                  transform_hlds__intermod__STATE_VARIABLE_Info_58_58 = transform_hlds__intermod__STATE_VARIABLE_Info_56_99;
#line 282 "intermod.m"
                                {
#line 282 "intermod.m"
                                  mercury__set__insert_3_p_0(transform_hlds__intermod__TypeCtorInfo_62_62, ((MR_Box) (transform_hlds__intermod__PredId_17)), transform_hlds__intermod__Preds0_49, &transform_hlds__intermod__Preds_50);
                                }
#line 283 "intermod.m"
                                {
#line 283 "intermod.m"
                                  transform_hlds__intermod__intermod_info_set_preds_3_p_0(transform_hlds__intermod__Preds_50, transform_hlds__intermod__STATE_VARIABLE_Info_58_58, &transform_hlds__intermod__STATE_VARIABLE_Info_59_59);
                                }
#line 284 "intermod.m"
                                {
#line 284 "intermod.m"
                                  transform_hlds__intermod__intermod_info_set_module_info_3_p_0(transform_hlds__intermod__ModuleInfo_48, transform_hlds__intermod__STATE_VARIABLE_Info_59_59, &transform_hlds__intermod__STATE_VARIABLE_Info_60_60);
                                }
#line 268 "intermod.m"
                              }
#line 285 "intermod.m"
                              break;
#line 285 "intermod.m"
                          }
#line 4036 "transform_hlds.intermod.c"
                        }
#line 4038 "transform_hlds.intermod.c"
                        break;
#line 4040 "transform_hlds.intermod.c"
                    }
#line 4042 "transform_hlds.intermod.c"
                  }
#line 248 "intermod.m"
              }
#line 290 "intermod.m"
            else
#line 290 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_60_60 = transform_hlds__intermod__STATE_VARIABLE_Info_0_7;
#line 293 "intermod.m"
            /* direct tailcall eliminated */
#line 293 "intermod.m"
            {
#line 293 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__PredIds_18;
#line 293 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_7 = transform_hlds__intermod__STATE_VARIABLE_Info_60_60;

#line 293 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_0_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_7;
#line 293 "intermod.m"
              transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 293 "intermod.m"
            }
#line 293 "intermod.m"
            continue;
#line 234 "intermod.m"
          }
#line 232 "intermod.m"
      }
#line 232 "intermod.m"
      break;
#line 232 "intermod.m"
    }
#line 229 "intermod.m"
}

#line 210 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(
#line 210 "intermod.m"
  MR_Word transform_hlds__intermod__ExtraExportedPreds0_8,
#line 210 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_10,
#line 210 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_11,
#line 210 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_12,
#line 210 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_19,
#line 210 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_20)
#line 210 "intermod.m"
{
#line 214 "intermod.m"
  while (MR_TRUE)
#line 214 "intermod.m"
    {
#line 214 "intermod.m"
      /* tailcall optimized into a loop */
#line 214 "intermod.m"
      {
#line 214 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;
#line 214 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 214 "intermod.m"
        MR_Word transform_hlds__intermod__ExtraExportedPreds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 2)));
#line 214 "intermod.m"
        MR_Word transform_hlds__intermod__NewlyExportedPreds_15;
#line 214 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21;
#line 2167 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 0)));
#line 2167 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 1)));
#line 2167 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 3)));
#line 2167 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 4)));
#line 2167 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 5)));
#line 2167 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 6)));
#line 2167 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 7)));
#line 2167 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_19, (MR_Integer) 8)));

#line 217 "intermod.m"
        {
#line 217 "intermod.m"
          transform_hlds__intermod__V_21_21 = mercury__set__difference_2_f_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__ExtraExportedPreds_14, transform_hlds__intermod__ExtraExportedPreds0_8);
        }
#line 216 "intermod.m"
        {
#line 216 "intermod.m"
          transform_hlds__intermod__NewlyExportedPreds_15 = mercury__set__to_sorted_list_1_f_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__V_21_21);
        }
#line 220 "intermod.m"
        if ((transform_hlds__intermod__NewlyExportedPreds_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_20 = transform_hlds__intermod__STATE_VARIABLE_Info_0_19;
#line 220 "intermod.m"
        else
#line 221 "intermod.m"
          {
#line 221 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_22_22;

#line 223 "intermod.m"
            {
#line 223 "intermod.m"
              transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__NewlyExportedPreds_15, (MR_Integer) 1, transform_hlds__intermod__InlineThreshold_10, transform_hlds__intermod__HigherOrderSizeLimit_11, transform_hlds__intermod__Deforestation_12, transform_hlds__intermod__STATE_VARIABLE_Info_0_19, &transform_hlds__intermod__STATE_VARIABLE_Info_22_22);
            }
#line 225 "intermod.m"
            /* direct tailcall eliminated */
#line 225 "intermod.m"
            {
#line 225 "intermod.m"
              MR_Word transform_hlds__intermod__ExtraExportedPreds0__tmp_copy_8 = transform_hlds__intermod__ExtraExportedPreds_14;
#line 225 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_19 = transform_hlds__intermod__STATE_VARIABLE_Info_22_22;

#line 225 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_0_19 = transform_hlds__intermod__STATE_VARIABLE_Info_0__tmp_copy_19;
#line 225 "intermod.m"
              transform_hlds__intermod__ExtraExportedPreds0_8 = transform_hlds__intermod__ExtraExportedPreds0__tmp_copy_8;
#line 225 "intermod.m"
            }
#line 225 "intermod.m"
            continue;
#line 221 "intermod.m"
          }
#line 214 "intermod.m"
      }
#line 214 "intermod.m"
      break;
#line 214 "intermod.m"
    }
#line 210 "intermod.m"
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
  MR_Word transform_hlds__intermod__ModuleErrors_15,
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_24,
#line 91 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_25)
#line 91 "intermod.m"
{
#line 2605 "intermod.m"
  {
#line 2605 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2599 "intermod.m"
    {
#line 2599 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__set__is_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, transform_hlds__intermod__ModuleErrors_15);
    }
#line 2605 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2604 "intermod.m"
      {
#line 2604 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Error_25 = transform_hlds__intermod__STATE_VARIABLE_Error_0_24;
#line 2604 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = transform_hlds__intermod__STATE_VARIABLE_Specs_0_22;
#line 2604 "intermod.m"
      }
#line 2605 "intermod.m"
    else
#line 2633 "intermod.m"
      {
#line 2605 "intermod.m"
        {
#line 2605 "intermod.m"
          transform_hlds__intermod__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, transform_hlds__intermod__ModuleErrors_15, ((MR_Box) ((MR_Integer) 0)));
        }
#line 2633 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 2622 "intermod.m"
          {
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__WarningOption_17;
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__Severity_18;
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__Pieces_19;
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__Msg_20;
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__Spec_21;
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__V_30_30;
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__V_32_32;
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__V_33_33;
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__V_34_34;
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__V_37_37;
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__V_38_38;
#line 2622 "intermod.m"
            MR_Word transform_hlds__intermod__V_51_51;

#line 2619 "intermod.m"
#line 2619 "intermod.m"
            switch (transform_hlds__intermod__FileType_11) {
#line 2619 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2619 "intermod.m"
              case (MR_Integer) 0:
#line 2618 "intermod.m"
                transform_hlds__intermod__WarningOption_17 = (MR_Integer) 12;
#line 2619 "intermod.m"
                break;
#line 2619 "intermod.m"
              case (MR_Integer) 1:
#line 2621 "intermod.m"
                transform_hlds__intermod__WarningOption_17 = (MR_Integer) 13;
#line 2619 "intermod.m"
                break;
#line 2619 "intermod.m"
            }
#line 2624 "intermod.m"
            {
#line 2624 "intermod.m"
              transform_hlds__intermod__Severity_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2624 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 0) = ((MR_Box) (transform_hlds__intermod__WarningOption_17));
#line 2624 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2624 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 2624 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Severity_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2624 "intermod.m"
            }
#line 2626 "intermod.m"
            {
#line 2626 "intermod.m"
              transform_hlds__intermod__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2626 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 2626 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_38_38, 1) = ((MR_Box) (transform_hlds__intermod__FileName_12));
#line 2626 "intermod.m"
            }
#line 2626 "intermod.m"
            {
#line 2626 "intermod.m"
              transform_hlds__intermod__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2626 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_37_37, 0) = ((MR_Box) (transform_hlds__intermod__V_38_38));
#line 2626 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_1[22])));
#line 2626 "intermod.m"
            }
#line 2626 "intermod.m"
            {
#line 2626 "intermod.m"
              transform_hlds__intermod__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2626 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_34_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__intermod_scalar_common_1[26])));
#line 2626 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_34_34, 1) = ((MR_Box) (transform_hlds__intermod__V_37_37));
#line 2626 "intermod.m"
            }
#line 2626 "intermod.m"
            {
#line 2626 "intermod.m"
              transform_hlds__intermod__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2626 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_33_33, 0) = ((MR_Box) (transform_hlds__intermod__V_34_34));
#line 2626 "intermod.m"
            }
#line 2627 "intermod.m"
            {
#line 2627 "intermod.m"
              transform_hlds__intermod__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2627 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_32_32, 0) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 2627 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2627 "intermod.m"
            }
#line 2625 "intermod.m"
            {
#line 2625 "intermod.m"
              transform_hlds__intermod__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2625 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_30_30, 0) = ((MR_Box) ((transform_hlds__intermod__WarningOption_17 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 2625 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_30_30, 1) = ((MR_Box) (transform_hlds__intermod__V_32_32));
#line 2625 "intermod.m"
            }
#line 2627 "intermod.m"
            {
#line 2627 "intermod.m"
              transform_hlds__intermod__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2627 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Pieces_19, 0) = ((MR_Box) (transform_hlds__intermod__V_30_30));
#line 2627 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Pieces_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2627 "intermod.m"
            }
#line 2628 "intermod.m"
            {
#line 2628 "intermod.m"
              transform_hlds__intermod__Msg_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 2628 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2628 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 1) = ((MR_Box) ((MR_Integer) 0));
#line 2628 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 2) = ((MR_Box) ((MR_Integer) 0));
#line 2628 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__Msg_20, 3) = ((MR_Box) (transform_hlds__intermod__Pieces_19));
#line 2628 "intermod.m"
            }
#line 2629 "intermod.m"
            {
#line 2629 "intermod.m"
              transform_hlds__intermod__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2629 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_51_51, 0) = ((MR_Box) (transform_hlds__intermod__Msg_20));
#line 2629 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2629 "intermod.m"
            }
#line 2629 "intermod.m"
            {
#line 2629 "intermod.m"
              transform_hlds__intermod__Spec_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2629 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 0) = ((MR_Box) (transform_hlds__intermod__Severity_18));
#line 2629 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2629 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__Spec_21, 2) = ((MR_Box) (transform_hlds__intermod__V_51_51));
#line 2629 "intermod.m"
            }
#line 2630 "intermod.m"
            {
#line 2630 "intermod.m"
              MR_Word base;
#line 2630 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2630 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = base;
#line 2630 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Spec_21));
#line 2630 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Specs_0_22));
#line 2630 "intermod.m"
            }
#line 2622 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Error_25 = transform_hlds__intermod__STATE_VARIABLE_Error_0_24;
#line 2622 "intermod.m"
          }
#line 2633 "intermod.m"
        else
#line 2636 "intermod.m"
          {
#line 2636 "intermod.m"
            {
#line 2636 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, transform_hlds__intermod__ModuleSpecs_13, transform_hlds__intermod__STATE_VARIABLE_Specs_0_22);
            }
#line 2637 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Error_25 = (MR_Integer) 1;
#line 2636 "intermod.m"
          }
#line 2633 "intermod.m"
      }
#line 2605 "intermod.m"
  }
#line 91 "intermod.m"
}

#line 2292 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2292__1_2_p_0(
#line 2292 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_10,
#line 2292 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_11)
#line 2292 "intermod.m"
{
#line 2292 "intermod.m"
  {
#line 2292 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2292 "intermod.m"
    MR_Integer transform_hlds__intermod__V_7_7;

#line 2292 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_10, (MR_Integer) 0)));
#line 2292 "intermod.m"
    transform_hlds__intermod__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_10, (MR_Integer) 1)));
#line 2292 "intermod.m"
  }
#line 2292 "intermod.m"
}

#line 2258 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2258__1_4_p_0(
#line 2258 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_4,
#line 2258 "intermod.m"
  MR_Word transform_hlds__intermod__SpecPredMap_8,
#line 2258 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_13,
#line 2258 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_14)
#line 2258 "intermod.m"
{
#line 2258 "intermod.m"
  {
#line 2258 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2258 "intermod.m"
    MR_Word transform_hlds__intermod__V_15_15;
#line 2259 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_HeadVar__4_14;

#line 2259 "intermod.m"
    {
#line 2259 "intermod.m"
      transform_hlds__intermod__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2259 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_15_15, 0) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_13));
#line 2259 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_15_15, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_4));
#line 2259 "intermod.m"
    }
#line 2259 "intermod.m"
    {
#line 2259 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecPredMap_8, ((MR_Box) (transform_hlds__intermod__V_15_15)), &transform_hlds__intermod__conv0_HeadVar__4_14);
    }
#line 2259 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2259 "intermod.m"
      {
#line 2259 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_14 = ((MR_Word) transform_hlds__intermod__conv0_HeadVar__4_14);
#line 2259 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 2259 "intermod.m"
      }
#line 2258 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2258 "intermod.m"
  }
#line 2258 "intermod.m"
}

#line 1905 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1905__1_4_p_0(
#line 1905 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1905 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVarMap_15,
#line 1905 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_23,
#line 1905 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_24)
#line 1905 "intermod.m"
{
#line 1905 "intermod.m"
  {
#line 1905 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1905 "intermod.m"
    MR_Word transform_hlds__intermod__HeadTerm0_18;
#line 1903 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_HeadTerm0_18;

#line 1903 "intermod.m"
    {
#line 1903 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[13], (MR_Word) &transform_hlds__intermod_scalar_common_1[14], transform_hlds__intermod__HeadVarMap_15, ((MR_Box) (transform_hlds__intermod__HeadVar__3_23)), &transform_hlds__intermod__conv0_HeadTerm0_18);
    }
#line 1903 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1903 "intermod.m"
      {
#line 1903 "intermod.m"
        transform_hlds__intermod__HeadTerm0_18 = ((MR_Word) transform_hlds__intermod__conv0_HeadTerm0_18);
#line 1903 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1903 "intermod.m"
      }
#line 1905 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1904 "intermod.m"
      *transform_hlds__intermod__HeadVar__4_24 = transform_hlds__intermod__HeadTerm0_18;
#line 1905 "intermod.m"
    else
#line 1906 "intermod.m"
      {
#line 1906 "intermod.m"
        MR_Word transform_hlds__intermod__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 3)));
#line 1906 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 0)));
#line 1906 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 1)));
#line 1906 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 2)));
#line 1906 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 4)));

#line 1907 "intermod.m"
        {
#line 1907 "intermod.m"
          MR_Word base;
#line 1907 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1907 "intermod.m"
          *transform_hlds__intermod__HeadVar__4_24 = base;
#line 1907 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_23));
#line 1907 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Context_19));
#line 1907 "intermod.m"
        }
#line 1906 "intermod.m"
      }
#line 1905 "intermod.m"
  }
#line 1905 "intermod.m"
}

#line 1823 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1823__1_1_p_0(
#line 1823 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_67)
#line 1823 "intermod.m"
{
#line 1823 "intermod.m"
  {
#line 1823 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1823 "intermod.m"
    MR_Word transform_hlds__intermod__GE_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_67, (MR_Integer) 0)));
#line 1825 "intermod.m"
    MR_Word transform_hlds__intermod__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_67, (MR_Integer) 1)));
#line 1826 "intermod.m"
    MR_Word transform_hlds__intermod__V_39_39;
#line 1826 "intermod.m"
    MR_Word transform_hlds__intermod__V_40_40;
#line 1826 "intermod.m"
    MR_Integer transform_hlds__intermod__V_41_41;
#line 1826 "intermod.m"
    MR_Word transform_hlds__intermod__V_42_42;
#line 1826 "intermod.m"
    MR_Word transform_hlds__intermod__V_43_43;
#line 1826 "intermod.m"
    MR_Word transform_hlds__intermod__V_44_44;
#line 1826 "intermod.m"
    MR_Word transform_hlds__intermod__V_45_45;

#line 1826 "intermod.m"
    transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__GE_37)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1826 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1826 "intermod.m"
      {
#line 1826 "intermod.m"
        transform_hlds__intermod__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 1)));
#line 1826 "intermod.m"
        transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 2)));
#line 1826 "intermod.m"
        transform_hlds__intermod__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 3)));
#line 1826 "intermod.m"
        transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 4)));
#line 1826 "intermod.m"
        transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 5)));
#line 1826 "intermod.m"
        transform_hlds__intermod__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 6)));
#line 1826 "intermod.m"
        transform_hlds__intermod__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GE_37, (MR_Integer) 7)));
#line 1826 "intermod.m"
      }
#line 1823 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 1823 "intermod.m"
  }
#line 1823 "intermod.m"
}

#line 1701 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1701__1_3_p_0(
#line 1701 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__1_45,
#line 1701 "intermod.m"
  MR_Integer transform_hlds__intermod__HeadVar__2_46,
#line 1701 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_47)
#line 1701 "intermod.m"
{
#line 1701 "intermod.m"
  {
#line 1701 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1701 "intermod.m"
    MR_Integer transform_hlds__intermod__ProcInt1_34;
#line 1701 "intermod.m"
    MR_Integer transform_hlds__intermod__ProcInt2_35;

#line 1703 "intermod.m"
    {
#line 1703 "intermod.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__intermod__HeadVar__1_45, &transform_hlds__intermod__ProcInt1_34);
    }
#line 1704 "intermod.m"
    {
#line 1704 "intermod.m"
      hlds__hlds_pred__proc_id_to_int_2_p_0(transform_hlds__intermod__HeadVar__2_46, &transform_hlds__intermod__ProcInt2_35);
    }
#line 1705 "intermod.m"
    {
#line 1705 "intermod.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__intermod__HeadVar__3_47, transform_hlds__intermod__ProcInt1_34, transform_hlds__intermod__ProcInt2_35);
#line 1705 "intermod.m"
      return;
    }
#line 1701 "intermod.m"
  }
#line 1701 "intermod.m"
}

#line 1623 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_2(
#line 1623 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1623 "intermod.m"
{
#line 1623 "intermod.m"
  {
#line 1623 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1623 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__N_8 = ((MR_Integer) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__conv0_N_8);
#line 1623 "intermod.m"
    {
#line 1623 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_1(transform_hlds__intermod__env_ptr);
#line 1623 "intermod.m"
      return;
    }
#line 1623 "intermod.m"
  }
#line 1623 "intermod.m"
}

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_1(
#line 1622 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1622 "intermod.m"
{
#line 1622 "intermod.m"
  {
#line 1622 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1622 "intermod.m"
    {
#line 1624 "intermod.m"
      MR_Box transform_hlds__intermod__conv1_HeadVar__3_9;

#line 4738 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__TypeInfo_13_13 = (MR_Word) &transform_hlds__intermod_scalar_common_1[12];
#line 1624 "intermod.m"
      {
#line 1624 "intermod.m"
        transform_hlds__intermod__conv1_HeadVar__3_9 = mercury__list__det_index1_2_f_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__TypeInfo_13_13, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__TVars_4, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__N_8);
      }
#line 1624 "intermod.m"
      *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__HeadVar__3_9) = ((MR_Word) transform_hlds__intermod__conv1_HeadVar__3_9);
#line 1624 "intermod.m"
      {
#line 1624 "intermod.m"
        ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__cont_env_ptr);
#line 1624 "intermod.m"
        return;
      }
#line 1622 "intermod.m"
    }
#line 1622 "intermod.m"
  }
#line 1622 "intermod.m"
}

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0(
#line 1622 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1622 "intermod.m"
  MR_Word transform_hlds__intermod__Set_5,
#line 1622 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_9,
#line 1622 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1622 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1622 "intermod.m"
{
#line 1622 "intermod.m"
  {
#line 1622 "intermod.m"
    struct transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0_s transform_hlds__intermod__env;

#line 1622 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__TVars_4 = transform_hlds__intermod__TVars_4;
#line 1622 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__HeadVar__3_9 = transform_hlds__intermod__HeadVar__3_9;
#line 1622 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__cont = transform_hlds__intermod__cont;
#line 1622 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1622 "intermod.m"
    {
#line 1622 "intermod.m"
      MR_bool transform_hlds__intermod__succeeded;

#line 1623 "intermod.m"
      {
#line 1623 "intermod.m"
        mercury__set__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &(transform_hlds__intermod__env).transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_env_0__conv0_N_8, transform_hlds__intermod__Set_5, transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0_2, &transform_hlds__intermod__env);
      }
#line 1622 "intermod.m"
    }
#line 1622 "intermod.m"
  }
#line 1622 "intermod.m"
}

#line 1328 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__write_intermod_info_body__1328__1_3_p_0(
#line 1328 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_49)
#line 1328 "intermod.m"
{
#line 1328 "intermod.m"
  {
#line 1328 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1328 "intermod.m"
    MR_Word transform_hlds__intermod__Lang_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_49, (MR_Integer) 0)));
#line 1328 "intermod.m"
    MR_Word transform_hlds__intermod__Import_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_49, (MR_Integer) 1)));
#line 1328 "intermod.m"
    MR_Word transform_hlds__intermod__FIMInfo_34;
#line 1330 "intermod.m"
    MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_49, (MR_Integer) 2)));

#line 1331 "intermod.m"
    {
#line 1331 "intermod.m"
      transform_hlds__intermod__FIMInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1331 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__FIMInfo_34, 0) = ((MR_Box) (transform_hlds__intermod__Lang_31));
#line 1331 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__FIMInfo_34, 1) = ((MR_Box) (transform_hlds__intermod__Import_32));
#line 1331 "intermod.m"
    }
#line 1332 "intermod.m"
    {
#line 1332 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_pragma_foreign_import_module_3_p_0(transform_hlds__intermod__FIMInfo_34);
#line 1332 "intermod.m"
      return;
    }
#line 1328 "intermod.m"
  }
#line 1328 "intermod.m"
}

#line 1000 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1000__1_1_f_0(
#line 1000 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_54)
#line 1000 "intermod.m"
{
#line 1000 "intermod.m"
  {
#line 1000 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1000 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__2_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 0)));
#line 1000 "intermod.m"
    MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 1)));
#line 1000 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 2)));
#line 1000 "intermod.m"
    MR_Word transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 3)));
#line 1000 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 4)));
#line 1000 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 5)));
#line 1000 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 6)));
#line 1000 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_54, (MR_Integer) 7)));

#line 1000 "intermod.m"
    return transform_hlds__intermod__HeadVar__2_55;
#line 1000 "intermod.m"
  }
#line 1000 "intermod.m"
}

#line 987 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__987__1_1_f_0(
#line 987 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_50)
#line 987 "intermod.m"
{
#line 987 "intermod.m"
  {
#line 987 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 987 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__2_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 2)));
#line 987 "intermod.m"
    MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 0)));
#line 987 "intermod.m"
    MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 1)));
#line 987 "intermod.m"
    MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 3)));
#line 987 "intermod.m"
    MR_Integer transform_hlds__intermod__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_50, (MR_Integer) 4)));

#line 987 "intermod.m"
    return transform_hlds__intermod__HeadVar__2_51;
#line 987 "intermod.m"
  }
#line 987 "intermod.m"
}

#line 842 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__842__1_2_p_0(
#line 842 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_44,
#line 842 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_45)
#line 842 "intermod.m"
{
#line 842 "intermod.m"
  {
#line 842 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 842 "intermod.m"
    MR_Integer transform_hlds__intermod__V_27_27;

#line 842 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_44, (MR_Integer) 0)));
#line 842 "intermod.m"
    transform_hlds__intermod__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_44, (MR_Integer) 1)));
#line 842 "intermod.m"
  }
#line 842 "intermod.m"
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
#line 4978 "transform_hlds.intermod.c"
  {
#line 4980 "transform_hlds.intermod.c"
    MR_bool transform_hlds__intermod__succeeded = (transform_hlds__intermod__HeadVar__2_1 == transform_hlds__intermod__HeadVar__2_2);

#line 4983 "transform_hlds.intermod.c"
    return transform_hlds__intermod__succeeded;
#line 4985 "transform_hlds.intermod.c"
  }
#line 74 "intermod.m"
}

#line 2084 "intermod.m"
static void MR_CALL 
transform_hlds__intermod____Compare____intermod_info_0_0(
#line 2084 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__1_1,
#line 2084 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 2084 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3)
#line 2084 "intermod.m"
{
#line 2084 "intermod.m"
  {
#line 2084 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2084 "intermod.m"
    MR_Integer transform_hlds__intermod__CastX_30 = (MR_Integer) transform_hlds__intermod__HeadVar__2_2;
#line 2084 "intermod.m"
    MR_Integer transform_hlds__intermod__CastY_31 = (MR_Integer) transform_hlds__intermod__HeadVar__3_3;

#line 2084 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__CastX_30 == transform_hlds__intermod__CastY_31);
#line 2084 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 5014 "transform_hlds.intermod.c"
      *transform_hlds__intermod__HeadVar__1_1 = (MR_Integer) 0;
#line 2084 "intermod.m"
    else
#line 2084 "intermod.m"
      {
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 2)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 3)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 4)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 5)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 6)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 7)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 8)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 2)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 3)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 4)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 5)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 6)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 7)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 8)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;

#line 2084 "intermod.m"
        {
#line 2084 "intermod.m"
          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[15], &transform_hlds__intermod__V_22_22, ((MR_Box) (transform_hlds__intermod__V_4_4)), ((MR_Box) (transform_hlds__intermod__V_13_13)));
        }
#line 5064 "transform_hlds.intermod.c"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_22_22 == (MR_Integer) 0);
#line 2084 "intermod.m"
        transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2084 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
          *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_22_22;
#line 2084 "intermod.m"
        else
#line 2084 "intermod.m"
          {
#line 2084 "intermod.m"
            MR_Word transform_hlds__intermod__V_23_23;

#line 2084 "intermod.m"
            {
#line 2084 "intermod.m"
              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[16], &transform_hlds__intermod__V_23_23, ((MR_Box) (transform_hlds__intermod__V_5_5)), ((MR_Box) (transform_hlds__intermod__V_14_14)));
            }
#line 5084 "transform_hlds.intermod.c"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_23_23 == (MR_Integer) 0);
#line 2084 "intermod.m"
            transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2084 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
              *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_23_23;
#line 2084 "intermod.m"
            else
#line 2084 "intermod.m"
              {
#line 2084 "intermod.m"
                MR_Word transform_hlds__intermod__V_24_24;

#line 2084 "intermod.m"
                {
#line 2084 "intermod.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[16], &transform_hlds__intermod__V_24_24, ((MR_Box) (transform_hlds__intermod__V_6_6)), ((MR_Box) (transform_hlds__intermod__V_15_15)));
                }
#line 5104 "transform_hlds.intermod.c"
                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_24_24 == (MR_Integer) 0);
#line 2084 "intermod.m"
                transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2084 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                  *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_24_24;
#line 2084 "intermod.m"
                else
#line 2084 "intermod.m"
                  {
#line 2084 "intermod.m"
                    MR_Word transform_hlds__intermod__V_25_25;

#line 2084 "intermod.m"
                    {
#line 2084 "intermod.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[17], &transform_hlds__intermod__V_25_25, ((MR_Box) (transform_hlds__intermod__V_7_7)), ((MR_Box) (transform_hlds__intermod__V_16_16)));
                    }
#line 5124 "transform_hlds.intermod.c"
                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_25_25 == (MR_Integer) 0);
#line 2084 "intermod.m"
                    transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2084 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                      *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_25_25;
#line 2084 "intermod.m"
                    else
#line 2084 "intermod.m"
                      {
#line 2084 "intermod.m"
                        MR_Word transform_hlds__intermod__V_26_26;

#line 2084 "intermod.m"
                        {
#line 2084 "intermod.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[18], &transform_hlds__intermod__V_26_26, ((MR_Box) (transform_hlds__intermod__V_8_8)), ((MR_Box) (transform_hlds__intermod__V_17_17)));
                        }
#line 5144 "transform_hlds.intermod.c"
                        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_26_26 == (MR_Integer) 0);
#line 2084 "intermod.m"
                        transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2084 "intermod.m"
                        if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                          *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_26_26;
#line 2084 "intermod.m"
                        else
#line 2084 "intermod.m"
                          {
#line 2084 "intermod.m"
                            MR_Word transform_hlds__intermod__V_27_27;

#line 2084 "intermod.m"
                            {
#line 2084 "intermod.m"
                              hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__intermod__V_27_27, transform_hlds__intermod__V_9_9, transform_hlds__intermod__V_18_18);
                            }
#line 5164 "transform_hlds.intermod.c"
                            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_27_27 == (MR_Integer) 0);
#line 2084 "intermod.m"
                            transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2084 "intermod.m"
                            if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                              *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_27_27;
#line 2084 "intermod.m"
                            else
#line 2084 "intermod.m"
                              {
#line 2084 "intermod.m"
                                MR_Word transform_hlds__intermod__V_28_28;
#line 2084 "intermod.m"
                                MR_Integer transform_hlds__intermod__V_41_41 = (MR_Integer) transform_hlds__intermod__V_10_10;
#line 2084 "intermod.m"
                                MR_Integer transform_hlds__intermod__V_42_42 = (MR_Integer) transform_hlds__intermod__V_19_19;

#line 2084 "intermod.m"
                                {
#line 2084 "intermod.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__intermod__V_28_28, transform_hlds__intermod__V_41_41, transform_hlds__intermod__V_42_42);
                                }
#line 5188 "transform_hlds.intermod.c"
                                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_28_28 == (MR_Integer) 0);
#line 2084 "intermod.m"
                                transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2084 "intermod.m"
                                if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                                  *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_28_28;
#line 2084 "intermod.m"
                                else
#line 2084 "intermod.m"
                                  {
#line 2084 "intermod.m"
                                    MR_Word transform_hlds__intermod__V_29_29;

#line 2084 "intermod.m"
                                    {
#line 2084 "intermod.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[7], &transform_hlds__intermod__V_29_29, ((MR_Box) (transform_hlds__intermod__V_11_11)), ((MR_Box) (transform_hlds__intermod__V_20_20)));
                                    }
#line 5208 "transform_hlds.intermod.c"
                                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_29_29 == (MR_Integer) 0);
#line 2084 "intermod.m"
                                    transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 2084 "intermod.m"
                                    if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                                      *transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__V_29_29;
#line 2084 "intermod.m"
                                    else
#line 2084 "intermod.m"
                                      {
#line 2084 "intermod.m"
                                        {
#line 2084 "intermod.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[19], transform_hlds__intermod__HeadVar__1_1, ((MR_Box) (transform_hlds__intermod__V_12_12)), ((MR_Box) (transform_hlds__intermod__V_21_21)));
#line 2084 "intermod.m"
                                          return;
                                        }
#line 2084 "intermod.m"
                                      }
#line 2084 "intermod.m"
                                  }
#line 2084 "intermod.m"
                              }
#line 2084 "intermod.m"
                          }
#line 2084 "intermod.m"
                      }
#line 2084 "intermod.m"
                  }
#line 2084 "intermod.m"
              }
#line 2084 "intermod.m"
          }
#line 2084 "intermod.m"
      }
#line 2084 "intermod.m"
  }
#line 2084 "intermod.m"
}

#line 2084 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod____Unify____intermod_info_0_0(
#line 2084 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2084 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 2084 "intermod.m"
{
#line 2084 "intermod.m"
  {
#line 2084 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2084 "intermod.m"
    MR_Integer transform_hlds__intermod__CastX_21 = (MR_Integer) transform_hlds__intermod__HeadVar__1_1;
#line 2084 "intermod.m"
    MR_Integer transform_hlds__intermod__CastY_22 = (MR_Integer) transform_hlds__intermod__HeadVar__2_2;

#line 2084 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__CastX_21 == transform_hlds__intermod__CastY_22);
#line 2084 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
      transform_hlds__intermod__succeeded = MR_TRUE;
#line 2084 "intermod.m"
    else
#line 2084 "intermod.m"
      {
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_24_24;
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_25_25;
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_26_26;
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_27_27;
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_29_29;
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__TypeInfo_30_30;
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 2)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 3)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 4)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 5)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 6)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 7)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 8)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 2)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 3)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 4)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 5)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 6)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 7)));
#line 2084 "intermod.m"
        MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 8)));

#line 5327 "transform_hlds.intermod.c"
        {
#line 5329 "transform_hlds.intermod.c"
          transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[15], ((MR_Box) (transform_hlds__intermod__V_3_3)), ((MR_Box) (transform_hlds__intermod__V_12_12)));
        }
#line 2084 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
          {
#line 5336 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeInfo_24_24 = (MR_Word) &transform_hlds__intermod_scalar_common_1[16];
#line 5338 "transform_hlds.intermod.c"
            {
#line 5340 "transform_hlds.intermod.c"
              transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_24_24, ((MR_Box) (transform_hlds__intermod__V_4_4)), ((MR_Box) (transform_hlds__intermod__V_13_13)));
            }
#line 2084 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
              {
#line 5347 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeInfo_25_25 = (MR_Word) &transform_hlds__intermod_scalar_common_1[16];
#line 5349 "transform_hlds.intermod.c"
                {
#line 5351 "transform_hlds.intermod.c"
                  transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_25_25, ((MR_Box) (transform_hlds__intermod__V_5_5)), ((MR_Box) (transform_hlds__intermod__V_14_14)));
                }
#line 2084 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                  {
#line 5358 "transform_hlds.intermod.c"
                    transform_hlds__intermod__TypeInfo_26_26 = (MR_Word) &transform_hlds__intermod_scalar_common_1[17];
#line 5360 "transform_hlds.intermod.c"
                    {
#line 5362 "transform_hlds.intermod.c"
                      transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_26_26, ((MR_Box) (transform_hlds__intermod__V_6_6)), ((MR_Box) (transform_hlds__intermod__V_15_15)));
                    }
#line 2084 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                      {
#line 5369 "transform_hlds.intermod.c"
                        transform_hlds__intermod__TypeInfo_27_27 = (MR_Word) &transform_hlds__intermod_scalar_common_1[18];
#line 5371 "transform_hlds.intermod.c"
                        {
#line 5373 "transform_hlds.intermod.c"
                          transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_27_27, ((MR_Box) (transform_hlds__intermod__V_7_7)), ((MR_Box) (transform_hlds__intermod__V_16_16)));
                        }
#line 2084 "intermod.m"
                        if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                          {
#line 5380 "transform_hlds.intermod.c"
                            {
#line 5382 "transform_hlds.intermod.c"
                              transform_hlds__intermod__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__intermod__V_8_8, transform_hlds__intermod__V_17_17);
                            }
#line 2084 "intermod.m"
                            if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                              {
#line 5389 "transform_hlds.intermod.c"
                                transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_9_9 == transform_hlds__intermod__V_18_18);
#line 2084 "intermod.m"
                                if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                                  {
#line 5395 "transform_hlds.intermod.c"
                                    transform_hlds__intermod__TypeInfo_29_29 = (MR_Word) &transform_hlds__intermod_scalar_common_2[7];
#line 5397 "transform_hlds.intermod.c"
                                    {
#line 5399 "transform_hlds.intermod.c"
                                      transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_29_29, ((MR_Box) (transform_hlds__intermod__V_10_10)), ((MR_Box) (transform_hlds__intermod__V_19_19)));
                                    }
#line 2084 "intermod.m"
                                    if (transform_hlds__intermod__succeeded)
#line 2084 "intermod.m"
                                      {
#line 5406 "transform_hlds.intermod.c"
                                        transform_hlds__intermod__TypeInfo_30_30 = (MR_Word) &transform_hlds__intermod_scalar_common_1[19];
#line 5408 "transform_hlds.intermod.c"
                                        {
#line 5410 "transform_hlds.intermod.c"
                                          return transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_30_30, ((MR_Box) (transform_hlds__intermod__V_11_11)), ((MR_Box) (transform_hlds__intermod__V_20_20)));
                                        }
#line 2084 "intermod.m"
                                      }
#line 2084 "intermod.m"
                                  }
#line 2084 "intermod.m"
                              }
#line 2084 "intermod.m"
                          }
#line 2084 "intermod.m"
                      }
#line 2084 "intermod.m"
                  }
#line 2084 "intermod.m"
              }
#line 2084 "intermod.m"
          }
#line 2084 "intermod.m"
      }
#line 2084 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2084 "intermod.m"
  }
#line 2084 "intermod.m"
}

#line 2542 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__read_optimization_interfaces_12_p_0(
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__Globals_1,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__Transitive_2,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__ModulesProcessed0_4,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__5_5,
#line 2542 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__6_6,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0_7,
#line 2542 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Specs_8,
#line 2542 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_9,
#line 2542 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_10)
#line 2542 "intermod.m"
{
#line 2548 "intermod.m"
  while (MR_TRUE)
#line 2548 "intermod.m"
    {
#line 2548 "intermod.m"
      /* tailcall optimized into a loop */
#line 2548 "intermod.m"
      {
#line 2548 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 2548 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2548 "intermod.m"
          {
#line 2549 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Error_10 = transform_hlds__intermod__STATE_VARIABLE_Error_0_9;
#line 2549 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Specs_8 = transform_hlds__intermod__STATE_VARIABLE_Specs_0_7;
#line 2548 "intermod.m"
            *transform_hlds__intermod__HeadVar__6_6 = transform_hlds__intermod__HeadVar__5_5;
#line 2548 "intermod.m"
          }
#line 2548 "intermod.m"
        else
#line 2552 "intermod.m"
          {
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__ModuleToRead_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__ModulesToRead_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__VeryVerbose_37;
#line 2552 "intermod.m"
            MR_String transform_hlds__intermod__ModuleToReadString_38;
#line 2552 "intermod.m"
            MR_String transform_hlds__intermod__FileName_39;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__ParseTreeOpt_40;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__OptSpecs_41;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__OptError_42;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__OptModuleName_43;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__OptFileKind_44;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__OptModuleContext_45;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__OptItems_46;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__OptSection_47;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__OptItemBlock_48;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__ModulesProcessed_56;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__NewDeps_57;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_67_67;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_OptItemBlocksCord_81_81;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_83_83;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_84_84;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_85_85;
#line 2552 "intermod.m"
            MR_Word transform_hlds__intermod__V_94_94;

#line 2553 "intermod.m"
            {
#line 2553 "intermod.m"
              libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_1, (MR_Integer) 46, &transform_hlds__intermod__VeryVerbose_37);
            }
#line 2554 "intermod.m"
            {
#line 2554 "intermod.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__intermod__VeryVerbose_37, transform_hlds__intermod__Globals_1, transform_hlds__intermod__STATE_VARIABLE_Specs_0_7, &transform_hlds__intermod__STATE_VARIABLE_Specs_67_67);
            }
#line 2555 "intermod.m"
            {
#line 2555 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_37, (MR_String) "% Reading optimization interface for module");
            }
#line 2557 "intermod.m"
            {
#line 2557 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_37, (MR_String) " \140");
            }
#line 2558 "intermod.m"
            {
#line 2558 "intermod.m"
              transform_hlds__intermod__ModuleToReadString_38 = mdbcomp__sym_name__sym_name_to_string_1_f_0(transform_hlds__intermod__ModuleToRead_30);
            }
#line 2559 "intermod.m"
            {
#line 2559 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_37, transform_hlds__intermod__ModuleToReadString_38);
            }
#line 2560 "intermod.m"
            {
#line 2560 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_37, (MR_String) "\'...\n");
            }
#line 2561 "intermod.m"
            {
#line 2561 "intermod.m"
              libs__file_util__maybe_flush_output_3_p_0(transform_hlds__intermod__VeryVerbose_37);
            }
#line 2563 "intermod.m"
            {
#line 2563 "intermod.m"
              parse_tree__file_names__module_name_to_search_file_name_6_p_0(transform_hlds__intermod__Globals_1, transform_hlds__intermod__ModuleToRead_30, (MR_String) ".opt", &transform_hlds__intermod__FileName_39);
            }
#line 2565 "intermod.m"
            {
#line 2565 "intermod.m"
              parse_tree__prog_io__actually_read_module_opt_9_p_0((MR_Integer) 0, transform_hlds__intermod__Globals_1, transform_hlds__intermod__FileName_39, transform_hlds__intermod__ModuleToRead_30, &transform_hlds__intermod__ParseTreeOpt_40, &transform_hlds__intermod__OptSpecs_41, &transform_hlds__intermod__OptError_42);
            }
#line 2567 "intermod.m"
            transform_hlds__intermod__OptModuleName_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ParseTreeOpt_40, (MR_Integer) 0)));
#line 2567 "intermod.m"
            transform_hlds__intermod__OptFileKind_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ParseTreeOpt_40, (MR_Integer) 1)));
#line 2567 "intermod.m"
            transform_hlds__intermod__OptModuleContext_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ParseTreeOpt_40, (MR_Integer) 2)));
#line 2567 "intermod.m"
            transform_hlds__intermod__OptItems_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ParseTreeOpt_40, (MR_Integer) 3)));
#line 2569 "intermod.m"
            {
#line 2569 "intermod.m"
              transform_hlds__intermod__OptSection_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2569 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptSection_47, 0) = ((MR_Box) (transform_hlds__intermod__OptModuleName_43));
#line 2569 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptSection_47, 1) = ((MR_Box) (transform_hlds__intermod__OptFileKind_44));
#line 2569 "intermod.m"
            }
#line 2570 "intermod.m"
            {
#line 2570 "intermod.m"
              transform_hlds__intermod__OptItemBlock_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2570 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptItemBlock_48, 0) = ((MR_Box) (transform_hlds__intermod__OptSection_47));
#line 2570 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptItemBlock_48, 1) = ((MR_Box) (transform_hlds__intermod__OptModuleContext_45));
#line 2570 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__OptItemBlock_48, 2) = ((MR_Box) (transform_hlds__intermod__OptItems_46));
#line 2570 "intermod.m"
            }
#line 2571 "intermod.m"
            {
#line 2571 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_OptItemBlocksCord_81_81 = mercury__cord__snoc_2_f_0((MR_Word) &transform_hlds__intermod_scalar_common_1[0], transform_hlds__intermod__HeadVar__5_5, ((MR_Box) (transform_hlds__intermod__OptItemBlock_48)));
            }
#line 2572 "intermod.m"
            {
#line 2572 "intermod.m"
              transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0((MR_Integer) 0, transform_hlds__intermod__FileName_39, transform_hlds__intermod__OptSpecs_41, transform_hlds__intermod__STATE_VARIABLE_Specs_67_67, &transform_hlds__intermod__STATE_VARIABLE_Specs_83_83, transform_hlds__intermod__OptError_42, transform_hlds__intermod__STATE_VARIABLE_Error_0_9, &transform_hlds__intermod__STATE_VARIABLE_Error_84_84);
            }
#line 2574 "intermod.m"
            {
#line 2574 "intermod.m"
              parse_tree__error_util__maybe_write_out_errors_no_module_6_p_0(transform_hlds__intermod__VeryVerbose_37, transform_hlds__intermod__Globals_1, transform_hlds__intermod__STATE_VARIABLE_Specs_83_83, &transform_hlds__intermod__STATE_VARIABLE_Specs_85_85);
            }
#line 2575 "intermod.m"
            {
#line 2575 "intermod.m"
              libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_37, (MR_String) "% done.\n");
            }
#line 2588 "intermod.m"
#line 2588 "intermod.m"
            switch (transform_hlds__intermod__Transitive_2) {
#line 2588 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 2588 "intermod.m"
              case (MR_Integer) 0:
#line 2589 "intermod.m"
                {
#line 2590 "intermod.m"
                  transform_hlds__intermod__ModulesProcessed_56 = transform_hlds__intermod__ModulesProcessed0_4;
#line 2591 "intermod.m"
                  transform_hlds__intermod__NewDeps_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2589 "intermod.m"
                }
#line 2588 "intermod.m"
                break;
#line 2588 "intermod.m"
              case (MR_Integer) 1:
#line 2578 "intermod.m"
                {
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__TypeCtorInfo_100_100;
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__NewImportDeps0_49;
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__NewUseDeps0_50;
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__NewImplicitImportDeps0_51;
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__NewImplicitUseDeps0_52;
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__NewDeps0_53;
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__NewDepsSet0_54;
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__NewDepsSet_55;
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__V_89_89;
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__V_90_90;
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__V_91_91;
#line 2578 "intermod.m"
                  MR_Word transform_hlds__intermod__V_92_92;

#line 2579 "intermod.m"
                  {
#line 2579 "intermod.m"
                    parse_tree__get_dependencies__get_dependencies_in_items_3_p_0(transform_hlds__intermod__OptItems_46, &transform_hlds__intermod__NewImportDeps0_49, &transform_hlds__intermod__NewUseDeps0_50);
                  }
#line 2580 "intermod.m"
                  {
#line 2580 "intermod.m"
                    parse_tree__get_dependencies__get_implicit_dependencies_in_items_4_p_0(transform_hlds__intermod__Globals_1, transform_hlds__intermod__OptItems_46, &transform_hlds__intermod__NewImplicitImportDeps0_51, &transform_hlds__intermod__NewImplicitUseDeps0_52);
                  }
#line 5691 "transform_hlds.intermod.c"
                  transform_hlds__intermod__TypeCtorInfo_100_100 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2583 "intermod.m"
                  {
#line 2583 "intermod.m"
                    transform_hlds__intermod__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2583 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_92_92, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitUseDeps0_52));
#line 2583 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2583 "intermod.m"
                  }
#line 2583 "intermod.m"
                  {
#line 2583 "intermod.m"
                    transform_hlds__intermod__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2583 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_91_91, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitImportDeps0_51));
#line 2583 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_91_91, 1) = ((MR_Box) (transform_hlds__intermod__V_92_92));
#line 2583 "intermod.m"
                  }
#line 2582 "intermod.m"
                  {
#line 2582 "intermod.m"
                    transform_hlds__intermod__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2582 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_90_90, 0) = ((MR_Box) (transform_hlds__intermod__NewUseDeps0_50));
#line 2582 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_90_90, 1) = ((MR_Box) (transform_hlds__intermod__V_91_91));
#line 2582 "intermod.m"
                  }
#line 2582 "intermod.m"
                  {
#line 2582 "intermod.m"
                    transform_hlds__intermod__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2582 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_89_89, 0) = ((MR_Box) (transform_hlds__intermod__NewImportDeps0_49));
#line 2582 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_89_89, 1) = ((MR_Box) (transform_hlds__intermod__V_90_90));
#line 2582 "intermod.m"
                  }
#line 2582 "intermod.m"
                  {
#line 2582 "intermod.m"
                    transform_hlds__intermod__NewDeps0_53 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_100_100, transform_hlds__intermod__V_89_89);
                  }
#line 2584 "intermod.m"
                  {
#line 2584 "intermod.m"
                    mercury__set__list_to_set_2_p_0(transform_hlds__intermod__TypeCtorInfo_100_100, transform_hlds__intermod__NewDeps0_53, &transform_hlds__intermod__NewDepsSet0_54);
                  }
#line 2585 "intermod.m"
                  {
#line 2585 "intermod.m"
                    mercury__set__difference_3_p_0(transform_hlds__intermod__TypeCtorInfo_100_100, transform_hlds__intermod__NewDepsSet0_54, transform_hlds__intermod__ModulesProcessed0_4, &transform_hlds__intermod__NewDepsSet_55);
                  }
#line 2586 "intermod.m"
                  {
#line 2586 "intermod.m"
                    mercury__set__union_3_p_0(transform_hlds__intermod__TypeCtorInfo_100_100, transform_hlds__intermod__ModulesProcessed0_4, transform_hlds__intermod__NewDepsSet_55, &transform_hlds__intermod__ModulesProcessed_56);
                  }
#line 2587 "intermod.m"
                  {
#line 2587 "intermod.m"
                    mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_100_100, transform_hlds__intermod__NewDepsSet_55, &transform_hlds__intermod__NewDeps_57);
                  }
#line 2578 "intermod.m"
                }
#line 2588 "intermod.m"
                break;
#line 2588 "intermod.m"
            }
#line 2594 "intermod.m"
            {
#line 2594 "intermod.m"
              transform_hlds__intermod__V_94_94 = mercury__list__f_43_43_2_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, transform_hlds__intermod__NewDeps_57, transform_hlds__intermod__ModulesToRead_31);
            }
#line 2593 "intermod.m"
            /* direct tailcall eliminated */
#line 2593 "intermod.m"
            {
#line 2593 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__V_94_94;
#line 2593 "intermod.m"
              MR_Word transform_hlds__intermod__ModulesProcessed0__tmp_copy_4 = transform_hlds__intermod__ModulesProcessed_56;
#line 2593 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__5__tmp_copy_5 = transform_hlds__intermod__STATE_VARIABLE_OptItemBlocksCord_81_81;
#line 2593 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Specs_0__tmp_copy_7 = transform_hlds__intermod__STATE_VARIABLE_Specs_85_85;
#line 2593 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0__tmp_copy_9 = transform_hlds__intermod__STATE_VARIABLE_Error_84_84;

#line 2593 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Error_0_9 = transform_hlds__intermod__STATE_VARIABLE_Error_0__tmp_copy_9;
#line 2593 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Specs_0_7 = transform_hlds__intermod__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 2593 "intermod.m"
              transform_hlds__intermod__HeadVar__5_5 = transform_hlds__intermod__HeadVar__5__tmp_copy_5;
#line 2593 "intermod.m"
              transform_hlds__intermod__ModulesProcessed0_4 = transform_hlds__intermod__ModulesProcessed0__tmp_copy_4;
#line 2593 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 2593 "intermod.m"
            }
#line 2593 "intermod.m"
            continue;
#line 2552 "intermod.m"
          }
#line 2548 "intermod.m"
      }
#line 2548 "intermod.m"
      break;
#line 2548 "intermod.m"
    }
#line 2542 "intermod.m"
}

#line 2518 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__keep_unused_and_reuse_pragmas_acc_5_p_0(
#line 2518 "intermod.m"
  MR_Word transform_hlds__intermod__UnusedArgs_1,
#line 2518 "intermod.m"
  MR_Word transform_hlds__intermod__StructureReuse_2,
#line 2518 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 2518 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4,
#line 2518 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ItemCord_5)
#line 2518 "intermod.m"
{
#line 2521 "intermod.m"
  while (MR_TRUE)
#line 2521 "intermod.m"
    {
#line 2521 "intermod.m"
      /* tailcall optimized into a loop */
#line 2521 "intermod.m"
      {
#line 2521 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 2521 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2521 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_ItemCord_5 = transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4;
#line 2521 "intermod.m"
        else
#line 2523 "intermod.m"
          {
#line 2523 "intermod.m"
            MR_Word transform_hlds__intermod__Item0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 2523 "intermod.m"
            MR_Word transform_hlds__intermod__Items0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 2523 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_ItemCord_25_25;
#line 2525 "intermod.m"
            MR_Word transform_hlds__intermod__ItemPragma0_16;
#line 2525 "intermod.m"
            MR_Word transform_hlds__intermod__Pragma0_17;
#line 2526 "intermod.m"
            MR_Word transform_hlds__intermod__V_18_18;
#line 2526 "intermod.m"
            MR_Word transform_hlds__intermod__V_19_19;
#line 2526 "intermod.m"
            MR_Integer transform_hlds__intermod__V_20_20;

#line 2525 "intermod.m"
            transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__Item0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item0_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 2525 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2525 "intermod.m"
              {
#line 2525 "intermod.m"
                transform_hlds__intermod__ItemPragma0_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item0_13, (MR_Integer) 1)));
#line 2526 "intermod.m"
                transform_hlds__intermod__Pragma0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma0_16, (MR_Integer) 0)));
#line 2526 "intermod.m"
                transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma0_16, (MR_Integer) 1)));
#line 2526 "intermod.m"
                transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma0_16, (MR_Integer) 2)));
#line 2526 "intermod.m"
                transform_hlds__intermod__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemPragma0_16, (MR_Integer) 3)));
#line 2530 "intermod.m"
                if (((((MR_tag((MR_Word) transform_hlds__intermod__Pragma0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Pragma0_17, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 2531 "intermod.m"
                  transform_hlds__intermod__succeeded = (transform_hlds__intermod__StructureReuse_2 == (MR_Integer) 1);
#line 2530 "intermod.m"
                else
#line 2530 "intermod.m"
                if (((((MR_tag((MR_Word) transform_hlds__intermod__Pragma0_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Pragma0_17, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 2528 "intermod.m"
                  transform_hlds__intermod__succeeded = (transform_hlds__intermod__UnusedArgs_1 == (MR_Integer) 1);
#line 2530 "intermod.m"
                else
#line 2530 "intermod.m"
                  transform_hlds__intermod__succeeded = MR_FALSE;
#line 2525 "intermod.m"
              }
#line 2536 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2535 "intermod.m"
              {
#line 2535 "intermod.m"
                {
#line 2535 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_ItemCord_25_25 = mercury__cord__snoc_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0, transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4, ((MR_Box) (transform_hlds__intermod__Item0_13)));
                }
#line 2535 "intermod.m"
              }
#line 2536 "intermod.m"
            else
#line 2536 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_ItemCord_25_25 = transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4;
#line 2539 "intermod.m"
            /* direct tailcall eliminated */
#line 2539 "intermod.m"
            {
#line 2539 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__Items0_14;
#line 2539 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_ItemCord_0__tmp_copy_4 = transform_hlds__intermod__STATE_VARIABLE_ItemCord_25_25;

#line 2539 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_ItemCord_0_4 = transform_hlds__intermod__STATE_VARIABLE_ItemCord_0__tmp_copy_4;
#line 2539 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 2539 "intermod.m"
            }
#line 2539 "intermod.m"
            continue;
#line 2523 "intermod.m"
          }
#line 2521 "intermod.m"
      }
#line 2521 "intermod.m"
      break;
#line 2521 "intermod.m"
    }
#line 2518 "intermod.m"
}

#line 2379 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__import_status_to_write_1_p_0(
#line 2379 "intermod.m"
  MR_Word transform_hlds__intermod__Status_2)
#line 2379 "intermod.m"
{
#line 2386 "intermod.m"
  {
#line 2386 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2386 "intermod.m"
#line 2386 "intermod.m"
    switch (MR_tag((MR_Word) transform_hlds__intermod__Status_2)) {
#line 2386 "intermod.m"
      default:
#line 2386 "intermod.m"
        transform_hlds__intermod__succeeded = MR_FALSE;
#line 2386 "intermod.m"
        break;
#line 2386 "intermod.m"
      case (MR_Integer) 0:
#line 2386 "intermod.m"
#line 2386 "intermod.m"
        switch (MR_unmkbody(transform_hlds__intermod__Status_2)) {
#line 2386 "intermod.m"
          default:
#line 2386 "intermod.m"
            transform_hlds__intermod__succeeded = MR_FALSE;
#line 2386 "intermod.m"
            break;
#line 2386 "intermod.m"
          case (MR_Integer) 4:
#line 2391 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 2386 "intermod.m"
            break;
#line 2386 "intermod.m"
          case (MR_Integer) 5:
#line 2392 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 2386 "intermod.m"
            break;
#line 2386 "intermod.m"
          case (MR_Integer) 7:
#line 2394 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 2386 "intermod.m"
            break;
#line 2386 "intermod.m"
          case (MR_Integer) 8:
#line 2395 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 2386 "intermod.m"
            break;
#line 2386 "intermod.m"
        }
#line 2386 "intermod.m"
        break;
#line 2386 "intermod.m"
      case (MR_Integer) 1:
#line 2396 "intermod.m"
        {
#line 2396 "intermod.m"
          MR_Word transform_hlds__intermod__Status_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_2, (MR_Integer) 0)));
#line 2396 "intermod.m"
          MR_Word transform_hlds__intermod__V_6_6;
#line 2396 "intermod.m"
          MR_Word transform_hlds__intermod__V_23_23;

#line 2397 "intermod.m"
          {
#line 2397 "intermod.m"
            transform_hlds__intermod__V_6_6 = parse_tree__status__status_is_exported_1_f_0(transform_hlds__intermod__Status_5);
          }
#line 2397 "intermod.m"
          {
#line 2397 "intermod.m"
            transform_hlds__intermod__V_23_23 = mercury__bool__not_1_f_0(transform_hlds__intermod__V_6_6);
          }
#line 2382 "intermod.m"
          transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_23_23 == (MR_Integer) 1);
#line 2396 "intermod.m"
        }
#line 2386 "intermod.m"
        break;
#line 2386 "intermod.m"
    }
#line 2386 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2386 "intermod.m"
  }
#line 2379 "intermod.m"
}

#line 2348 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(
#line 2348 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2348 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0_2,
#line 2348 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Preds_3)
#line 2348 "intermod.m"
{
#line 2351 "intermod.m"
  while (MR_TRUE)
#line 2351 "intermod.m"
    {
#line 2351 "intermod.m"
      /* tailcall optimized into a loop */
#line 2351 "intermod.m"
      {
#line 2351 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 2351 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2351 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Preds_3 = transform_hlds__intermod__STATE_VARIABLE_Preds_0_2;
#line 2351 "intermod.m"
        else
#line 2352 "intermod.m"
          {
#line 2352 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2352 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
#line 2352 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2352 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2352 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo0_10;
#line 2352 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_22_22;
#line 2353 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_PredInfo0_10;
#line 2372 "intermod.m"
            MR_Word transform_hlds__intermod__Status_11;

#line 2353 "intermod.m"
            {
#line 2353 "intermod.m"
              mercury__map__lookup_3_p_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__STATE_VARIABLE_Preds_0_2, ((MR_Box) (transform_hlds__intermod__PredId_7)), &transform_hlds__intermod__conv0_PredInfo0_10);
            }
#line 2353 "intermod.m"
            transform_hlds__intermod__PredInfo0_10 = ((MR_Word) transform_hlds__intermod__conv0_PredInfo0_10);
#line 2355 "intermod.m"
            {
#line 2355 "intermod.m"
              hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__Status_11);
            }
#line 2356 "intermod.m"
            {
#line 2356 "intermod.m"
              transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status_11);
            }
#line 2372 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2369 "intermod.m"
              {
#line 2369 "intermod.m"
                MR_Word transform_hlds__intermod__NewStatus_14;
#line 2369 "intermod.m"
                MR_Word transform_hlds__intermod__PredInfo_16;
#line 2359 "intermod.m"
                MR_Word transform_hlds__intermod__Origin_12;
#line 2359 "intermod.m"
                MR_Word transform_hlds__intermod__V_19_19;
#line 2359 "intermod.m"
                MR_Word transform_hlds__intermod__V_20_20;
#line 2360 "intermod.m"
                MR_Word transform_hlds__intermod__V_13_13;

#line 2359 "intermod.m"
                {
#line 2359 "intermod.m"
                  hlds__hlds_pred__pred_info_get_origin_2_p_0(transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__Origin_12);
                }
#line 2360 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Origin_12)) == (MR_mktag((MR_Integer) 0)));
#line 2360 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2360 "intermod.m"
                  {
#line 2360 "intermod.m"
                    transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Origin_12, (MR_Integer) 0)));
#line 2360 "intermod.m"
                    transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_19_19, (MR_Integer) 0)));
#line 2360 "intermod.m"
                    transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_19_19, (MR_Integer) 1)));
#line 2360 "intermod.m"
                    transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_20_20 == (MR_Integer) 0);
#line 2360 "intermod.m"
                  }
#line 2363 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 2362 "intermod.m"
                  transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 2363 "intermod.m"
                else
#line 2367 "intermod.m"
                  {
#line 2364 "intermod.m"
                    MR_Word transform_hlds__intermod__V_15_15;

#line 2364 "intermod.m"
                    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Status_11)) == (MR_mktag((MR_Integer) 1)));
#line 2364 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 2364 "intermod.m"
                      {
#line 2364 "intermod.m"
                        transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_11, (MR_Integer) 0)));
#line 2366 "intermod.m"
                        transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(1), &transform_hlds__intermod_scalar_common_7[1]);
#line 2364 "intermod.m"
                      }
#line 2364 "intermod.m"
                    else
#line 2368 "intermod.m"
                      transform_hlds__intermod__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 2367 "intermod.m"
                  }
#line 2370 "intermod.m"
                {
#line 2370 "intermod.m"
                  hlds__hlds_pred__pred_info_set_import_status_3_p_0(transform_hlds__intermod__NewStatus_14, transform_hlds__intermod__PredInfo0_10, &transform_hlds__intermod__PredInfo_16);
                }
#line 2371 "intermod.m"
                {
#line 2371 "intermod.m"
                  mercury__map__det_update_4_p_0(transform_hlds__intermod__TypeCtorInfo_24_24, transform_hlds__intermod__TypeCtorInfo_25_25, ((MR_Box) (transform_hlds__intermod__PredId_7)), ((MR_Box) (transform_hlds__intermod__PredInfo_16)), transform_hlds__intermod__STATE_VARIABLE_Preds_0_2, &transform_hlds__intermod__STATE_VARIABLE_Preds_22_22);
                }
#line 2369 "intermod.m"
              }
#line 2372 "intermod.m"
            else
#line 2372 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Preds_22_22 = transform_hlds__intermod__STATE_VARIABLE_Preds_0_2;
#line 2375 "intermod.m"
            /* direct tailcall eliminated */
#line 2375 "intermod.m"
            {
#line 2375 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__PredIds_8;
#line 2375 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Preds_0__tmp_copy_2 = transform_hlds__intermod__STATE_VARIABLE_Preds_22_22;

#line 2375 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Preds_0_2 = transform_hlds__intermod__STATE_VARIABLE_Preds_0__tmp_copy_2;
#line 2375 "intermod.m"
              transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 2375 "intermod.m"
            }
#line 2375 "intermod.m"
            continue;
#line 2352 "intermod.m"
          }
#line 2351 "intermod.m"
      }
#line 2351 "intermod.m"
      break;
#line 2351 "intermod.m"
    }
#line 2348 "intermod.m"
}

#line 2290 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0_1(
#line 2290 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2290 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2290 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2290 "intermod.m"
{
#line 2290 "intermod.m"
  {
#line 2290 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2290 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_11;

#line 2290 "intermod.m"
    {
#line 2290 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2292__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_11);
    }
#line 2290 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_11));
#line 2290 "intermod.m"
  }
#line 2290 "intermod.m"
}

#line 2316 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_3_4_p_0(
#line 2316 "intermod.m"
  MR_Word transform_hlds__intermod__Instance0_5,
#line 2316 "intermod.m"
  MR_Word * transform_hlds__intermod__Instance_6,
#line 2316 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20,
#line 2316 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21)
#line 2316 "intermod.m"
{
#line 2319 "intermod.m"
  {
#line 2319 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2319 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceModule_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 0)));
#line 2319 "intermod.m"
    MR_Word transform_hlds__intermod__Status0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 1)));
#line 2319 "intermod.m"
    MR_Word transform_hlds__intermod__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 2)));
#line 2319 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 3)));
#line 2319 "intermod.m"
    MR_Word transform_hlds__intermod__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 4)));
#line 2319 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 5)));
#line 2319 "intermod.m"
    MR_Word transform_hlds__intermod__Body_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 6)));
#line 2319 "intermod.m"
    MR_Word transform_hlds__intermod__HLDSClassInterface_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 7)));
#line 2319 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 8)));
#line 2319 "intermod.m"
    MR_Word transform_hlds__intermod__ConstraintProofs_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Instance0_5, (MR_Integer) 9)));

#line 2323 "intermod.m"
    {
#line 2323 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status0_9);
    }
#line 2336 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2326 "intermod.m"
      {
#line 2324 "intermod.m"
        {
#line 2324 "intermod.m"
          MR_Word base;
#line 2324 "intermod.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 2324 "intermod.m"
          *transform_hlds__intermod__Instance_6 = base;
#line 2324 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__InstanceModule_8));
#line 2324 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2324 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__Context_10));
#line 2324 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__Constraints_11));
#line 2324 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__Types_12));
#line 2324 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_13));
#line 2324 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__Body_14));
#line 2324 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__HLDSClassInterface_15));
#line 2324 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_16));
#line 2324 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (transform_hlds__intermod__ConstraintProofs_17));
#line 2324 "intermod.m"
        }
#line 2331 "intermod.m"
        if ((transform_hlds__intermod__HLDSClassInterface_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2334 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20;
#line 2331 "intermod.m"
        else
#line 2328 "intermod.m"
          {
#line 2328 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_15_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2328 "intermod.m"
            MR_Word transform_hlds__intermod__ClassInterface_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HLDSClassInterface_15, (MR_Integer) 0)));
#line 2328 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_19;
#line 2328 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds0_29;
#line 2328 "intermod.m"
            MR_Word transform_hlds__intermod__Preds0_41;
#line 2328 "intermod.m"
            MR_Word transform_hlds__intermod__Preds_42;

#line 2290 "intermod.m"
            {
#line 2290 "intermod.m"
              mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_15_36, (MR_Word) &transform_hlds__intermod_scalar_common_2[32], transform_hlds__intermod__ClassInterface_18, &transform_hlds__intermod__PredIds0_29);
            }
#line 2295 "intermod.m"
            {
#line 2295 "intermod.m"
              mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_15_36, transform_hlds__intermod__PredIds0_29, &transform_hlds__intermod__PredIds_19);
            }
#line 2344 "intermod.m"
            {
#line 2344 "intermod.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20, &transform_hlds__intermod__Preds0_41);
            }
#line 2345 "intermod.m"
            {
#line 2345 "intermod.m"
              transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_19, transform_hlds__intermod__Preds0_41, &transform_hlds__intermod__Preds_42);
            }
#line 2346 "intermod.m"
            {
#line 2346 "intermod.m"
              hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_42, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21);
#line 2346 "intermod.m"
              return;
            }
#line 2328 "intermod.m"
          }
#line 2326 "intermod.m"
      }
#line 2336 "intermod.m"
    else
#line 2337 "intermod.m"
      {
#line 2337 "intermod.m"
        *transform_hlds__intermod__Instance_6 = transform_hlds__intermod__Instance0_5;
#line 2337 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_21 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_20;
#line 2337 "intermod.m"
      }
#line 2319 "intermod.m"
  }
#line 2316 "intermod.m"
}

#line 2313 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0_1(
#line 2313 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2313 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2313 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2313 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2313 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 2313 "intermod.m"
{
#line 2313 "intermod.m"
  {
#line 2313 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2313 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_Instance_6;
#line 2313 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21;

#line 2313 "intermod.m"
    {
#line 2313 "intermod.m"
      transform_hlds__intermod__adjust_instance_status_3_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv1_Instance_6, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21);
    }
#line 2313 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv1_Instance_6));
#line 2313 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_21));
#line 2313 "intermod.m"
  }
#line 2313 "intermod.m"
}

#line 2307 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_instance_status_2_4_p_0(
#line 2307 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2307 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2307 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9,
#line 2307 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10)
#line 2307 "intermod.m"
{
#line 2312 "intermod.m"
  {
#line 2312 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_17_17 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceList0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2312 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceList_7;
#line 2313 "intermod.m"
    MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10;

#line 2313 "intermod.m"
    {
#line 2313 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeCtorInfo_17_17, transform_hlds__intermod__TypeCtorInfo_17_17, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[31], transform_hlds__intermod__InstanceList0_6, &transform_hlds__intermod__InstanceList_7, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_9)), &transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10);
    }
#line 2313 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10 = ((MR_Word) transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_10);
#line 2311 "intermod.m"
    {
#line 2311 "intermod.m"
      MR_Word base;
#line 2311 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2311 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2311 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_5));
#line 2311 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__InstanceList_7));
#line 2311 "intermod.m"
    }
#line 2312 "intermod.m"
  }
#line 2307 "intermod.m"
}

#line 2290 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0_1(
#line 2290 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2290 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2290 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2290 "intermod.m"
{
#line 2290 "intermod.m"
  {
#line 2290 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2290 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_11;

#line 2290 "intermod.m"
    {
#line 2290 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__class_procs_to_pred_ids__2292__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_11);
    }
#line 2290 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_11));
#line 2290 "intermod.m"
  }
#line 2290 "intermod.m"
}

#line 2272 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_class_status_2_4_p_0(
#line 2272 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 2272 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 2272 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10,
#line 2272 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11)
#line 2272 "intermod.m"
{
#line 2277 "intermod.m"
  {
#line 2277 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2277 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 2277 "intermod.m"
    MR_Word transform_hlds__intermod__ClassDefn0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 2277 "intermod.m"
    MR_Word transform_hlds__intermod__ClassDefn_7;
#line 2278 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 0)));
#line 2278 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 1)));
#line 2278 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 2)));
#line 2278 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 3)));
#line 2278 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 4)));
#line 2278 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 5)));
#line 2278 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 6)));
#line 2278 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 7)));
#line 2278 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 8)));
#line 2278 "intermod.m"
    MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 9)));

#line 2278 "intermod.m"
    {
#line 2278 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__V_12_12);
    }
#line 2282 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2279 "intermod.m"
      {
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_15_56;
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_9;
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 7)));
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds0_49;
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__Preds0_61;
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__Preds_62;
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 1)));
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 2)));
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 3)));
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 4)));
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 5)));
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 6)));
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 8)));
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 9)));
#line 2279 "intermod.m"
        MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn0_6, (MR_Integer) 0)));

#line 2279 "intermod.m"
        {
#line 2279 "intermod.m"
          transform_hlds__intermod__ClassDefn_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 2279 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 2279 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 1) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 2279 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 2) = ((MR_Box) (transform_hlds__intermod__V_27_27));
#line 2279 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 3) = ((MR_Box) (transform_hlds__intermod__V_28_28));
#line 2279 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 4) = ((MR_Box) (transform_hlds__intermod__V_29_29));
#line 2279 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 5) = ((MR_Box) (transform_hlds__intermod__V_30_30));
#line 2279 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 6) = ((MR_Box) (transform_hlds__intermod__V_31_31));
#line 2279 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 7) = ((MR_Box) (transform_hlds__intermod__V_32_32));
#line 2279 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 8) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 2279 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_7, 9) = ((MR_Box) (transform_hlds__intermod__V_34_34));
#line 2279 "intermod.m"
        }
#line 6612 "transform_hlds.intermod.c"
        transform_hlds__intermod__TypeCtorInfo_15_56 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2290 "intermod.m"
        {
#line 2290 "intermod.m"
          mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_15_56, (MR_Word) &transform_hlds__intermod_scalar_common_2[30], transform_hlds__intermod__V_32_32, &transform_hlds__intermod__PredIds0_49);
        }
#line 2295 "intermod.m"
        {
#line 2295 "intermod.m"
          mercury__list__sort_and_remove_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_15_56, transform_hlds__intermod__PredIds0_49, &transform_hlds__intermod__PredIds_9);
        }
#line 2344 "intermod.m"
        {
#line 2344 "intermod.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10, &transform_hlds__intermod__Preds0_61);
        }
#line 2345 "intermod.m"
        {
#line 2345 "intermod.m"
          transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_9, transform_hlds__intermod__Preds0_61, &transform_hlds__intermod__Preds_62);
        }
#line 2346 "intermod.m"
        {
#line 2346 "intermod.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_62, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11);
        }
#line 2279 "intermod.m"
      }
#line 2282 "intermod.m"
    else
#line 2283 "intermod.m"
      {
#line 2283 "intermod.m"
        transform_hlds__intermod__ClassDefn_7 = transform_hlds__intermod__ClassDefn0_6;
#line 2283 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_10;
#line 2283 "intermod.m"
      }
#line 2276 "intermod.m"
    {
#line 2276 "intermod.m"
      MR_Word base;
#line 2276 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2276 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2276 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_5));
#line 2276 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__ClassDefn_7));
#line 2276 "intermod.m"
    }
#line 2277 "intermod.m"
  }
#line 2272 "intermod.m"
}

#line 2258 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0_1(
#line 2258 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2258 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2258 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 2258 "intermod.m"
{
#line 2258 "intermod.m"
  {
#line 2258 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2258 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2258 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__4_14;

#line 2258 "intermod.m"
    {
#line 2258 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__IntroducedFrom__pred__fixup_special_preds__2258__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__4_14);
    }
#line 2258 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2258 "intermod.m"
      {
#line 2258 "intermod.m"
        *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__4_14));
#line 2258 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 2258 "intermod.m"
      }
#line 2258 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 2258 "intermod.m"
  }
#line 2258 "intermod.m"
}

#line 2239 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_type_status_2_5_p_0(
#line 2239 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_6,
#line 2239 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_7,
#line 2239 "intermod.m"
  MR_Word * transform_hlds__intermod__TypeDefn_8,
#line 2239 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11,
#line 2239 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12)
#line 2239 "intermod.m"
{
#line 2243 "intermod.m"
  {
#line 2243 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2243 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_10;
#line 1241 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_18;
#line 1241 "intermod.m"
    MR_Word transform_hlds__intermod__Name_19;
#line 1241 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22;
#line 1243 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_20;
#line 1244 "intermod.m"
    MR_String transform_hlds__intermod__V_21_21;

#line 2244 "intermod.m"
    {
#line 2244 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__ModuleName_10);
    }
#line 1242 "intermod.m"
    {
#line 1242 "intermod.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__intermod__TypeDefn0_7, &transform_hlds__intermod__ImportStatus_18);
    }
#line 1243 "intermod.m"
    transform_hlds__intermod__Name_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 0)));
#line 1243 "intermod.m"
    transform_hlds__intermod___Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 1)));
#line 1244 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Name_19)) == (MR_mktag((MR_Integer) 1)));
#line 1244 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1244 "intermod.m"
      {
#line 1244 "intermod.m"
        transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_19, (MR_Integer) 0)));
#line 1244 "intermod.m"
        transform_hlds__intermod__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_19, (MR_Integer) 1)));
#line 1244 "intermod.m"
        {
#line 1244 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_10, transform_hlds__intermod__V_22_22);
        }
#line 1241 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1245 "intermod.m"
          {
#line 1245 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_18);
          }
#line 1244 "intermod.m"
      }
#line 2248 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2246 "intermod.m"
      {
#line 2246 "intermod.m"
        MR_Word transform_hlds__intermod__SpecialPredList_27;
#line 2246 "intermod.m"
        MR_Word transform_hlds__intermod__SpecPredMap_28;
#line 2246 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_31;
#line 2246 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 2246 "intermod.m"
        MR_Word transform_hlds__intermod__Preds0_46;
#line 2246 "intermod.m"
        MR_Word transform_hlds__intermod__Preds_47;

#line 2246 "intermod.m"
        {
#line 2246 "intermod.m"
          hlds__hlds_data__set_type_defn_status_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), transform_hlds__intermod__TypeDefn0_7, transform_hlds__intermod__TypeDefn_8);
        }
#line 2256 "intermod.m"
        {
#line 2256 "intermod.m"
          hlds__special_pred__special_pred_list_1_p_0(&transform_hlds__intermod__SpecialPredList_27);
        }
#line 2257 "intermod.m"
        {
#line 2257 "intermod.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__SpecPredMap_28);
        }
#line 2258 "intermod.m"
        {
#line 2258 "intermod.m"
          transform_hlds__intermod__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2258 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[8]));
#line 2258 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 1) = ((MR_Box) (transform_hlds__intermod__adjust_type_status_2_5_p_0_1));
#line 2258 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2258 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 3) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 2258 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_32_32, 4) = ((MR_Box) (transform_hlds__intermod__SpecPredMap_28));
#line 2258 "intermod.m"
        }
#line 2258 "intermod.m"
        {
#line 2258 "intermod.m"
          mercury__list__filter_map_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__V_32_32, transform_hlds__intermod__SpecialPredList_27, &transform_hlds__intermod__PredIds_31);
        }
#line 2344 "intermod.m"
        {
#line 2344 "intermod.m"
          hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, &transform_hlds__intermod__Preds0_46);
        }
#line 2345 "intermod.m"
        {
#line 2345 "intermod.m"
          transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredIds_31, transform_hlds__intermod__Preds0_46, &transform_hlds__intermod__Preds_47);
        }
#line 2346 "intermod.m"
        {
#line 2346 "intermod.m"
          hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_47, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12);
#line 2346 "intermod.m"
          return;
        }
#line 2246 "intermod.m"
      }
#line 2248 "intermod.m"
    else
#line 2249 "intermod.m"
      {
#line 2249 "intermod.m"
        *transform_hlds__intermod__TypeDefn_8 = transform_hlds__intermod__TypeDefn0_7;
#line 2249 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_11;
#line 2249 "intermod.m"
      }
#line 2243 "intermod.m"
  }
#line 2239 "intermod.m"
}

#line 2302 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_3(
#line 2302 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2302 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2302 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2302 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2302 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 2302 "intermod.m"
{
#line 2302 "intermod.m"
  {
#line 2302 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2302 "intermod.m"
    MR_Word transform_hlds__intermod__conv7_HeadVar__2_2;
#line 2302 "intermod.m"
    MR_Word transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10;

#line 2302 "intermod.m"
    {
#line 2302 "intermod.m"
      transform_hlds__intermod__adjust_instance_status_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv7_HeadVar__2_2, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10);
    }
#line 2302 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv7_HeadVar__2_2));
#line 2302 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv6_STATE_VARIABLE_ModuleInfo_10));
#line 2302 "intermod.m"
  }
#line 2302 "intermod.m"
}

#line 2268 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_2(
#line 2268 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2268 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2268 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 2268 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 2268 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 2268 "intermod.m"
{
#line 2268 "intermod.m"
  {
#line 2268 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2268 "intermod.m"
    MR_Word transform_hlds__intermod__conv4_HeadVar__2_2;
#line 2268 "intermod.m"
    MR_Word transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11;

#line 2268 "intermod.m"
    {
#line 2268 "intermod.m"
      transform_hlds__intermod__adjust_class_status_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv4_HeadVar__2_2, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11);
    }
#line 2268 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv4_HeadVar__2_2));
#line 2268 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv3_STATE_VARIABLE_ModuleInfo_11));
#line 2268 "intermod.m"
  }
#line 2268 "intermod.m"
}

#line 2235 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0_1(
#line 2235 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2235 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2235 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2235 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3,
#line 2235 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_4,
#line 2235 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_5)
#line 2235 "intermod.m"
{
#line 2235 "intermod.m"
  {
#line 2235 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2235 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_TypeDefn_8;
#line 2235 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12;

#line 2235 "intermod.m"
    {
#line 2235 "intermod.m"
      transform_hlds__intermod__adjust_type_status_2_5_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv1_TypeDefn_8, ((MR_Word) transform_hlds__intermod__wrapper_arg_4), &transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12);
    }
#line 2235 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv1_TypeDefn_8));
#line 2235 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_5 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_ModuleInfo_12));
#line 2235 "intermod.m"
  }
#line 2235 "intermod.m"
}

#line 2220 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(
#line 2220 "intermod.m"
  MR_Word transform_hlds__intermod__Info_4,
#line 2220 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8,
#line 2220 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9)
#line 2220 "intermod.m"
{
#line 2223 "intermod.m"
  {
#line 2223 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_13_55;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_14_56;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_19_61;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_13_73;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_14_74;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_19_79;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 2)));
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls_7;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__Preds0_28;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__Preds_29;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable0_34;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable_35;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__Classes0_48;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__ClassAL0_49;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__ClassAL_50;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__Classes_51;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__Instances0_66;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceAL0_67;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceAL_68;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_69;
#line 2223 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71;
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 0)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 1)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 3)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 4)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 5)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 6)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 7)));
#line 2167 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_4, (MR_Integer) 8)));
#line 2235 "intermod.m"
    MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37;
#line 2268 "intermod.m"
    MR_Box transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53;
#line 2302 "intermod.m"
    MR_Box transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71;

#line 2225 "intermod.m"
    {
#line 2225 "intermod.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__PredDecls0_6, &transform_hlds__intermod__PredDecls_7);
    }
#line 2344 "intermod.m"
    {
#line 2344 "intermod.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__intermod__Preds0_28);
    }
#line 2345 "intermod.m"
    {
#line 2345 "intermod.m"
      transform_hlds__intermod__set_list_of_preds_exported_2_3_p_0(transform_hlds__intermod__PredDecls_7, transform_hlds__intermod__Preds0_28, &transform_hlds__intermod__Preds_29);
    }
#line 2346 "intermod.m"
    {
#line 2346 "intermod.m"
      hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__intermod__Preds_29, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_8, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10);
    }
#line 2234 "intermod.m"
    {
#line 2234 "intermod.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10, &transform_hlds__intermod__TypeTable0_34);
    }
#line 2235 "intermod.m"
    {
#line 2235 "intermod.m"
      hlds__hlds_data__map_foldl_over_type_ctor_defns_5_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[27], transform_hlds__intermod__TypeTable0_34, &transform_hlds__intermod__TypeTable_35, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_10_10)), &transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37);
    }
#line 2235 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37 = ((MR_Word) transform_hlds__intermod__conv2_STATE_VARIABLE_ModuleInfo_9_37);
#line 2237 "intermod.m"
    {
#line 2237 "intermod.m"
      hlds__hlds_module__module_info_set_type_table_3_p_0(transform_hlds__intermod__TypeTable_35, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9_37, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11);
    }
#line 2266 "intermod.m"
    {
#line 2266 "intermod.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11, &transform_hlds__intermod__Classes0_48);
    }
#line 7117 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_13_55 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 7119 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_14_56 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
#line 2267 "intermod.m"
    {
#line 2267 "intermod.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_55, transform_hlds__intermod__TypeCtorInfo_14_56, transform_hlds__intermod__Classes0_48, &transform_hlds__intermod__ClassAL0_49);
    }
#line 7126 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_19_61 = (MR_Word) &transform_hlds__intermod_scalar_common_2[5];
#line 2268 "intermod.m"
    {
#line 2268 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeInfo_19_61, transform_hlds__intermod__TypeInfo_19_61, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[28], transform_hlds__intermod__ClassAL0_49, &transform_hlds__intermod__ClassAL_50, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_11)), &transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53);
    }
#line 2268 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53 = ((MR_Word) transform_hlds__intermod__conv5_STATE_VARIABLE_ModuleInfo_11_53);
#line 2269 "intermod.m"
    {
#line 2269 "intermod.m"
      mercury__map__from_sorted_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_55, transform_hlds__intermod__TypeCtorInfo_14_56, transform_hlds__intermod__ClassAL_50, &transform_hlds__intermod__Classes_51);
    }
#line 2270 "intermod.m"
    {
#line 2270 "intermod.m"
      hlds__hlds_module__module_info_set_class_table_3_p_0(transform_hlds__intermod__Classes_51, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_53, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12);
    }
#line 2300 "intermod.m"
    {
#line 2300 "intermod.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12, &transform_hlds__intermod__Instances0_66);
    }
#line 7150 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_13_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 7152 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_14_74 = (MR_Word) &transform_hlds__intermod_scalar_common_1[8];
#line 2301 "intermod.m"
    {
#line 2301 "intermod.m"
      mercury__map__to_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_73, transform_hlds__intermod__TypeInfo_14_74, transform_hlds__intermod__Instances0_66, &transform_hlds__intermod__InstanceAL0_67);
    }
#line 7159 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_19_79 = (MR_Word) &transform_hlds__intermod_scalar_common_2[6];
#line 2302 "intermod.m"
    {
#line 2302 "intermod.m"
      mercury__list__map_foldl_5_p_0(transform_hlds__intermod__TypeInfo_19_79, transform_hlds__intermod__TypeInfo_19_79, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[29], transform_hlds__intermod__InstanceAL0_67, &transform_hlds__intermod__InstanceAL_68, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_12_12)), &transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71);
    }
#line 2302 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71 = ((MR_Word) transform_hlds__intermod__conv8_STATE_VARIABLE_ModuleInfo_11_71);
#line 2304 "intermod.m"
    {
#line 2304 "intermod.m"
      mercury__map__from_sorted_assoc_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_13_73, transform_hlds__intermod__TypeInfo_14_74, transform_hlds__intermod__InstanceAL_68, &transform_hlds__intermod__Instances_69);
    }
#line 2305 "intermod.m"
    {
#line 2305 "intermod.m"
      hlds__hlds_module__module_info_set_instance_table_3_p_0(transform_hlds__intermod__Instances_69, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_11_71, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_9);
#line 2305 "intermod.m"
      return;
    }
#line 2223 "intermod.m"
  }
#line 2220 "intermod.m"
}

#line 2162 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_tvarset_3_p_0(
#line 2162 "intermod.m"
  MR_Word transform_hlds__intermod__TVarSet_4,
#line 2162 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2162 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2162 "intermod.m"
{
#line 2185 "intermod.m"
  {
#line 2185 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2185 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2185 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));
#line 2185 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2185 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2185 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));
#line 2185 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));
#line 2185 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2185 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2185 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));

#line 2185 "intermod.m"
    {
#line 2185 "intermod.m"
      MR_Word base;
#line 2185 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2185 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_11_11));
#line 2185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2185 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_4));
#line 2185 "intermod.m"
    }
#line 2185 "intermod.m"
  }
#line 2162 "intermod.m"
}

#line 2158 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_write_header_2_p_0(
#line 2158 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2158 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2158 "intermod.m"
{
#line 2183 "intermod.m"
  {
#line 2183 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2183 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2183 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2183 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2183 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2183 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2183 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2183 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2183 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2183 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));

#line 2183 "intermod.m"
    {
#line 2183 "intermod.m"
      MR_Word base;
#line 2183 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2183 "intermod.m"
      *transform_hlds__intermod__HeadVar__2_2 = base;
#line 2183 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_5_5));
#line 2183 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2183 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2183 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2183 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2183 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2183 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2183 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2183 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2183 "intermod.m"
    }
#line 2183 "intermod.m"
  }
#line 2158 "intermod.m"
}

#line 2156 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_module_info_3_p_0(
#line 2156 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_4,
#line 2156 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2156 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2156 "intermod.m"
{
#line 2181 "intermod.m"
  {
#line 2181 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2181 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2181 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));
#line 2181 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2181 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2181 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));
#line 2181 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2181 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2181 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2181 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));

#line 2181 "intermod.m"
    {
#line 2181 "intermod.m"
      MR_Word base;
#line 2181 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2181 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_4));
#line 2181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2181 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_14_14));
#line 2181 "intermod.m"
    }
#line 2181 "intermod.m"
  }
#line 2156 "intermod.m"
}

#line 2152 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_types_3_p_0(
#line 2152 "intermod.m"
  MR_Word transform_hlds__intermod__Types_4,
#line 2152 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2152 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2152 "intermod.m"
{
#line 2180 "intermod.m"
  {
#line 2180 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2180 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2180 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));
#line 2180 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2180 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2180 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));
#line 2180 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2180 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2180 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2180 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));

#line 2180 "intermod.m"
    {
#line 2180 "intermod.m"
      MR_Word base;
#line 2180 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2180 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2180 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2180 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_7_7));
#line 2180 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2180 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2180 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__Types_4));
#line 2180 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_11_11));
#line 2180 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2180 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2180 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_14_14));
#line 2180 "intermod.m"
    }
#line 2180 "intermod.m"
  }
#line 2152 "intermod.m"
}

#line 2145 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_set_preds_3_p_0(
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_4,
#line 2145 "intermod.m"
  MR_Word transform_hlds__intermod__Info_5,
#line 2145 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3)
#line 2145 "intermod.m"
{
#line 2176 "intermod.m"
  {
#line 2176 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 0)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 2)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 3)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 4)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 5)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 6)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 7)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 8)));
#line 2176 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_5, (MR_Integer) 1)));

#line 2176 "intermod.m"
    {
#line 2176 "intermod.m"
      MR_Word base;
#line 2176 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2176 "intermod.m"
      *transform_hlds__intermod__HeadVar__3_3 = base;
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_6_6));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__Procs_4));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_8_8));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_9_9));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_10_10));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_11_11));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_12_12));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_13_13));
#line 2176 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_14_14));
#line 2176 "intermod.m"
    }
#line 2176 "intermod.m"
  }
#line 2145 "intermod.m"
}

#line 2136 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_module_info_2_p_0(
#line 2136 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2136 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2136 "intermod.m"
{
#line 2170 "intermod.m"
  {
#line 2170 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 2170 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2170 "intermod.m"
    transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));
#line 2170 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2170 "intermod.m"
    transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2170 "intermod.m"
  }
#line 2136 "intermod.m"
}

#line 2129 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_info_get_preds_2_p_0(
#line 2129 "intermod.m"
  MR_Word transform_hlds__intermod__Info_3,
#line 2129 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2)
#line 2129 "intermod.m"
{
#line 2166 "intermod.m"
  {
#line 2166 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2166 "intermod.m"
    MR_Word transform_hlds__intermod__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 0)));
#line 2166 "intermod.m"
    MR_Word transform_hlds__intermod__V_5_5;
#line 2166 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6;
#line 2166 "intermod.m"
    MR_Word transform_hlds__intermod__V_7_7;
#line 2166 "intermod.m"
    MR_Word transform_hlds__intermod__V_8_8;
#line 2166 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 2166 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 2166 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 2166 "intermod.m"
    *transform_hlds__intermod__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 1)));
#line 2166 "intermod.m"
    transform_hlds__intermod__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 2)));
#line 2166 "intermod.m"
    transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 3)));
#line 2166 "intermod.m"
    transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 4)));
#line 2166 "intermod.m"
    transform_hlds__intermod__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 5)));
#line 2166 "intermod.m"
    transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 6)));
#line 2166 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 7)));
#line 2166 "intermod.m"
    transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Info_3, (MR_Integer) 8)));
#line 2166 "intermod.m"
  }
#line 2129 "intermod.m"
}

#line 2047 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(
#line 2047 "intermod.m"
  MR_Word transform_hlds__intermod__Args_6,
#line 2047 "intermod.m"
  MR_Word transform_hlds__intermod__Modes_7,
#line 2047 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26,
#line 2047 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_VarSet_27,
#line 2047 "intermod.m"
  MR_Word * transform_hlds__intermod__PragmaVars_9)
#line 2047 "intermod.m"
{
#line 2052 "intermod.m"
  {
#line 2052 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2052 "intermod.m"
    if ((transform_hlds__intermod__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2052 "intermod.m"
      if ((transform_hlds__intermod__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2067 "intermod.m"
        {
#line 2069 "intermod.m"
          *transform_hlds__intermod__PragmaVars_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2067 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_VarSet_27 = transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26;
#line 2067 "intermod.m"
        }
#line 2052 "intermod.m"
      else
#line 2071 "intermod.m"
        {
#line 2073 "intermod.m"
          {
#line 2073 "intermod.m"
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
#line 2073 "intermod.m"
            return;
          }
#line 2071 "intermod.m"
        }
#line 2052 "intermod.m"
    else
#line 2052 "intermod.m"
      {
#line 2052 "intermod.m"
        MR_Word transform_hlds__intermod__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Args_6, (MR_Integer) 1)));
#line 2052 "intermod.m"
        MR_Word transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Args_6, (MR_Integer) 0)));

#line 2052 "intermod.m"
        if ((transform_hlds__intermod__Modes_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2075 "intermod.m"
          {
#line 2077 "intermod.m"
            {
#line 2077 "intermod.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.get_pragma_foreign_code_vars\'/5", (MR_String) "list length mismatch");
#line 2077 "intermod.m"
              return;
            }
#line 2075 "intermod.m"
          }
#line 2052 "intermod.m"
        else
#line 2052 "intermod.m"
          {
#line 2052 "intermod.m"
            MR_Word transform_hlds__intermod__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Modes_7, (MR_Integer) 0)));
#line 2052 "intermod.m"
            MR_Word transform_hlds__intermod__ModesTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Modes_7, (MR_Integer) 1)));
#line 2052 "intermod.m"
            MR_Word transform_hlds__intermod__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 0)));
#line 2052 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeNameAndMode_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 1)));
#line 2052 "intermod.m"
            MR_String transform_hlds__intermod__Name_18;
#line 2052 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaVar_20;
#line 2052 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaVarsTail_21;
#line 2052 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36;
#line 2054 "intermod.m"
            MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 2)));
#line 2054 "intermod.m"
            MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, (MR_Integer) 3)));

#line 2058 "intermod.m"
            if ((transform_hlds__intermod__MaybeNameAndMode_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2056 "intermod.m"
              transform_hlds__intermod__Name_18 = (MR_String) "_";
#line 2058 "intermod.m"
            else
#line 2059 "intermod.m"
              {
#line 2059 "intermod.m"
                MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeNameAndMode_15, (MR_Integer) 0)));
#line 2059 "intermod.m"
                MR_Word transform_hlds__intermod___Mode2_19;

#line 2059 "intermod.m"
                transform_hlds__intermod__Name_18 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, (MR_Integer) 0)));
#line 2059 "intermod.m"
                transform_hlds__intermod___Mode2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, (MR_Integer) 1)));
#line 2059 "intermod.m"
              }
#line 2061 "intermod.m"
            {
#line 2061 "intermod.m"
              transform_hlds__intermod__PragmaVar_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2061 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 0) = ((MR_Box) (transform_hlds__intermod__Var_14));
#line 2061 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 1) = ((MR_Box) (transform_hlds__intermod__Name_18));
#line 2061 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 2) = ((MR_Box) (transform_hlds__intermod__Mode_12));
#line 2061 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__PragmaVar_20, 3) = ((MR_Box) ((MR_Integer) 0));
#line 2061 "intermod.m"
            }
#line 2062 "intermod.m"
            {
#line 2062 "intermod.m"
              mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__intermod__Var_14, transform_hlds__intermod__Name_18, transform_hlds__intermod__STATE_VARIABLE_VarSet_0_26, &transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36);
            }
#line 2063 "intermod.m"
            {
#line 2063 "intermod.m"
              transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(transform_hlds__intermod__V_39_39, transform_hlds__intermod__ModesTail_13, transform_hlds__intermod__STATE_VARIABLE_VarSet_36_36, transform_hlds__intermod__STATE_VARIABLE_VarSet_27, &transform_hlds__intermod__PragmaVarsTail_21);
            }
#line 2065 "intermod.m"
            {
#line 2065 "intermod.m"
              MR_Word base;
#line 2065 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2065 "intermod.m"
              *transform_hlds__intermod__PragmaVars_9 = base;
#line 2065 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PragmaVar_20));
#line 2065 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PragmaVarsTail_21));
#line 2065 "intermod.m"
            }
#line 2052 "intermod.m"
          }
#line 2052 "intermod.m"
      }
#line 2052 "intermod.m"
  }
#line 2047 "intermod.m"
}

#line 1978 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(
#line 1978 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_1,
#line 1978 "intermod.m"
  MR_Integer transform_hlds__intermod__Arity_2,
#line 1978 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1978 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_4)
#line 1978 "intermod.m"
{
#line 1981 "intermod.m"
  while (MR_TRUE)
#line 1981 "intermod.m"
    {
#line 1981 "intermod.m"
      /* tailcall optimized into a loop */
#line 1981 "intermod.m"
      {
#line 1981 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1981 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1981 "intermod.m"
          {
#line 1981 "intermod.m"
          }
#line 1981 "intermod.m"
        else
#line 1983 "intermod.m"
          {
#line 1983 "intermod.m"
            MR_Word transform_hlds__intermod__Marker_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1983 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));

#line 7809 "transform_hlds.intermod.c"
#line 7810 "transform_hlds.intermod.c"
            switch (transform_hlds__intermod__Marker_15) {
#line 7812 "transform_hlds.intermod.c"
              default: /*NOTREACHED*/ MR_assert(0);
#line 7814 "transform_hlds.intermod.c"
              case (MR_Integer) 1:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7820 "transform_hlds.intermod.c"
                break;
#line 7822 "transform_hlds.intermod.c"
              case (MR_Integer) 20:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7828 "transform_hlds.intermod.c"
                break;
#line 7830 "transform_hlds.intermod.c"
              case (MR_Integer) 19:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7836 "transform_hlds.intermod.c"
                break;
#line 7838 "transform_hlds.intermod.c"
              case (MR_Integer) 10:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7844 "transform_hlds.intermod.c"
                break;
#line 7846 "transform_hlds.intermod.c"
              case (MR_Integer) 9:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7852 "transform_hlds.intermod.c"
                break;
#line 7854 "transform_hlds.intermod.c"
              case (MR_Integer) 18:
#line 7856 "transform_hlds.intermod.c"
                {
#line 7858 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_20;

#line 1987 "intermod.m"
                  {
#line 1987 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_20);
                  }
#line 1988 "intermod.m"
                  {
#line 1988 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 7871 "transform_hlds.intermod.c"
                }
#line 7873 "transform_hlds.intermod.c"
                break;
#line 7875 "transform_hlds.intermod.c"
              case (MR_Integer) 24:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7881 "transform_hlds.intermod.c"
                break;
#line 7883 "transform_hlds.intermod.c"
              case (MR_Integer) 23:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7889 "transform_hlds.intermod.c"
                break;
#line 7891 "transform_hlds.intermod.c"
              case (MR_Integer) 8:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7897 "transform_hlds.intermod.c"
                break;
#line 7899 "transform_hlds.intermod.c"
              case (MR_Integer) 3:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7905 "transform_hlds.intermod.c"
                break;
#line 7907 "transform_hlds.intermod.c"
              case (MR_Integer) 2:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7913 "transform_hlds.intermod.c"
                break;
#line 7915 "transform_hlds.intermod.c"
              case (MR_Integer) 12:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7921 "transform_hlds.intermod.c"
                break;
#line 7923 "transform_hlds.intermod.c"
              case (MR_Integer) 13:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7929 "transform_hlds.intermod.c"
                break;
#line 7931 "transform_hlds.intermod.c"
              case (MR_Integer) 21:
#line 7933 "transform_hlds.intermod.c"
                {
#line 7935 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_52;

#line 1987 "intermod.m"
                  {
#line 1987 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_52);
                  }
#line 1988 "intermod.m"
                  {
#line 1988 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_52, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 7948 "transform_hlds.intermod.c"
                }
#line 7950 "transform_hlds.intermod.c"
                break;
#line 7952 "transform_hlds.intermod.c"
              case (MR_Integer) 22:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7958 "transform_hlds.intermod.c"
                break;
#line 7960 "transform_hlds.intermod.c"
              case (MR_Integer) 11:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7966 "transform_hlds.intermod.c"
                break;
#line 7968 "transform_hlds.intermod.c"
              case (MR_Integer) 5:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7974 "transform_hlds.intermod.c"
                break;
#line 7976 "transform_hlds.intermod.c"
              case (MR_Integer) 4:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 7982 "transform_hlds.intermod.c"
                break;
#line 7984 "transform_hlds.intermod.c"
              case (MR_Integer) 16:
#line 7986 "transform_hlds.intermod.c"
                {
#line 7988 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_64;

#line 1987 "intermod.m"
                  {
#line 1987 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_64);
                  }
#line 1988 "intermod.m"
                  {
#line 1988 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_64, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8001 "transform_hlds.intermod.c"
                }
#line 8003 "transform_hlds.intermod.c"
                break;
#line 8005 "transform_hlds.intermod.c"
              case (MR_Integer) 14:
#line 8007 "transform_hlds.intermod.c"
                {
#line 8009 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_68;

#line 1987 "intermod.m"
                  {
#line 1987 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_68);
                  }
#line 1988 "intermod.m"
                  {
#line 1988 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_68, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8022 "transform_hlds.intermod.c"
                }
#line 8024 "transform_hlds.intermod.c"
                break;
#line 8026 "transform_hlds.intermod.c"
              case (MR_Integer) 15:
#line 8028 "transform_hlds.intermod.c"
                {
#line 8030 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_72;

#line 1987 "intermod.m"
                  {
#line 1987 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_72);
                  }
#line 1988 "intermod.m"
                  {
#line 1988 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8043 "transform_hlds.intermod.c"
                }
#line 8045 "transform_hlds.intermod.c"
                break;
#line 8047 "transform_hlds.intermod.c"
              case (MR_Integer) 0:
#line 1990 "intermod.m"
                {
#line 1990 "intermod.m"
                }
#line 8053 "transform_hlds.intermod.c"
                break;
#line 8055 "transform_hlds.intermod.c"
              case (MR_Integer) 17:
#line 8057 "transform_hlds.intermod.c"
                {
#line 8059 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_78;

#line 1987 "intermod.m"
                  {
#line 1987 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_78);
                  }
#line 1988 "intermod.m"
                  {
#line 1988 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8072 "transform_hlds.intermod.c"
                }
#line 8074 "transform_hlds.intermod.c"
                break;
#line 8076 "transform_hlds.intermod.c"
              case (MR_Integer) 6:
#line 8078 "transform_hlds.intermod.c"
                {
#line 8080 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_82;

#line 1987 "intermod.m"
                  {
#line 1987 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_82);
                  }
#line 1988 "intermod.m"
                  {
#line 1988 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_82, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8093 "transform_hlds.intermod.c"
                }
#line 8095 "transform_hlds.intermod.c"
                break;
#line 8097 "transform_hlds.intermod.c"
              case (MR_Integer) 7:
#line 8099 "transform_hlds.intermod.c"
                {
#line 8101 "transform_hlds.intermod.c"
                  MR_String transform_hlds__intermod__Name_86;

#line 1987 "intermod.m"
                  {
#line 1987 "intermod.m"
                    hlds__hlds_out__hlds_out_pred__marker_name_2_p_0(transform_hlds__intermod__Marker_15, &transform_hlds__intermod__Name_86);
                  }
#line 1988 "intermod.m"
                  {
#line 1988 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pragma_decl_7_p_0(transform_hlds__intermod__SymName_1, transform_hlds__intermod__Arity_2, transform_hlds__intermod__PredOrFunc_4, transform_hlds__intermod__Name_86, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                  }
#line 8114 "transform_hlds.intermod.c"
                }
#line 8116 "transform_hlds.intermod.c"
                break;
#line 8118 "transform_hlds.intermod.c"
            }
#line 1992 "intermod.m"
            /* direct tailcall eliminated */
#line 1992 "intermod.m"
            {
#line 1992 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__Markers_16;

#line 1992 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1992 "intermod.m"
            }
#line 1992 "intermod.m"
            continue;
#line 1983 "intermod.m"
          }
#line 1981 "intermod.m"
      }
#line 1981 "intermod.m"
      break;
#line 1981 "intermod.m"
    }
#line 1978 "intermod.m"
}

#line 1917 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(
#line 1917 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 1917 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_2,
#line 1917 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1917 "intermod.m"
  MR_Word * transform_hlds__intermod__Goals_4,
#line 1917 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5,
#line 1917 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6)
#line 1917 "intermod.m"
{
#line 1923 "intermod.m"
  while (MR_TRUE)
#line 1923 "intermod.m"
    {
#line 1923 "intermod.m"
      /* tailcall optimized into a loop */
#line 1923 "intermod.m"
      {
#line 1923 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1923 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1923 "intermod.m"
          {
#line 1924 "intermod.m"
            {
#line 1924 "intermod.m"
              mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__Goals_4);
            }
#line 1923 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_6 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5;
#line 1923 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1923 "intermod.m"
          }
#line 1923 "intermod.m"
        else
#line 1926 "intermod.m"
          {
#line 1926 "intermod.m"
            MR_Word transform_hlds__intermod__Goal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 1926 "intermod.m"
            MR_Word transform_hlds__intermod__Goals0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 1926 "intermod.m"
            MR_Word transform_hlds__intermod__RevGoals1_39;
#line 1926 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52;
#line 1960 "intermod.m"
            MR_Word transform_hlds__intermod__LHSVar_19;
#line 1960 "intermod.m"
            MR_Word transform_hlds__intermod__RHSTerm_27;
#line 1928 "intermod.m"
            MR_Word transform_hlds__intermod__TypeInfo_55_55;
#line 1928 "intermod.m"
            MR_Word transform_hlds__intermod__RHS_20;
#line 1928 "intermod.m"
            MR_Word transform_hlds__intermod__Context_25;
#line 1928 "intermod.m"
            MR_Word transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_13, (MR_Integer) 0)));
#line 1928 "intermod.m"
            MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_13, (MR_Integer) 1)));
#line 1928 "intermod.m"
            MR_Word transform_hlds__intermod__V_21_21;
#line 1928 "intermod.m"
            MR_Word transform_hlds__intermod__V_22_22;
#line 1928 "intermod.m"
            MR_Word transform_hlds__intermod__V_23_23;

#line 1928 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 1928 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1928 "intermod.m"
              {
#line 1928 "intermod.m"
                transform_hlds__intermod__LHSVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 0)));
#line 1928 "intermod.m"
                transform_hlds__intermod__RHS_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 1)));
#line 1928 "intermod.m"
                transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 2)));
#line 1928 "intermod.m"
                transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 3)));
#line 1928 "intermod.m"
                transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, (MR_Integer) 4)));
#line 8236 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeInfo_55_55 = (MR_Word) &transform_hlds__intermod_scalar_common_1[13];
#line 1929 "intermod.m"
                {
#line 1929 "intermod.m"
                  transform_hlds__intermod__succeeded = mercury__list__member_2_p_0(transform_hlds__intermod__TypeInfo_55_55, ((MR_Box) (transform_hlds__intermod__LHSVar_19)), transform_hlds__intermod__HeadVars_2);
                }
#line 1928 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1928 "intermod.m"
                  {
#line 1930 "intermod.m"
                    {
#line 1930 "intermod.m"
                      mercury__term__context_init_1_p_0(&transform_hlds__intermod__Context_25);
                    }
#line 1934 "intermod.m"
                    if (((MR_tag((MR_Word) transform_hlds__intermod__RHS_20)) == (MR_mktag((MR_Integer) 1))))
#line 1935 "intermod.m"
                      {
#line 1935 "intermod.m"
                        MR_Word transform_hlds__intermod__ConsId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 0)));
#line 1935 "intermod.m"
                        MR_Word transform_hlds__intermod__Args_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 2)));
#line 1935 "intermod.m"
                        MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS_20, (MR_Integer) 1)));

#line 1939 "intermod.m"
#line 1939 "intermod.m"
                        switch (MR_tag((MR_Word) transform_hlds__intermod__ConsId_28)) {
#line 1939 "intermod.m"
                          default:
#line 1939 "intermod.m"
                            transform_hlds__intermod__succeeded = MR_FALSE;
#line 1939 "intermod.m"
                            break;
#line 1939 "intermod.m"
                          case (MR_Integer) 3:
#line 1939 "intermod.m"
#line 1939 "intermod.m"
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 0)))) {
#line 1939 "intermod.m"
                              default:
#line 1939 "intermod.m"
                                transform_hlds__intermod__succeeded = MR_FALSE;
#line 1939 "intermod.m"
                                break;
#line 1939 "intermod.m"
                              case (MR_Integer) 2:
#line 1950 "intermod.m"
                                {
#line 1950 "intermod.m"
                                  MR_Word transform_hlds__intermod__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1950 "intermod.m"
                                  MR_Word transform_hlds__intermod__SymName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1950 "intermod.m"
                                  MR_Word transform_hlds__intermod__ArgTerms_38;
#line 1950 "intermod.m"
                                  MR_Integer transform_hlds__intermod__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 2)));
#line 1950 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 3)));

#line 1951 "intermod.m"
                                  {
#line 1951 "intermod.m"
                                    mercury__term__var_list_to_term_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_56_56, transform_hlds__intermod__Args_30, &transform_hlds__intermod__ArgTerms_38);
                                  }
#line 1952 "intermod.m"
                                  {
#line 1952 "intermod.m"
                                    parse_tree__prog_util__construct_qualified_term_3_p_0(transform_hlds__intermod__TypeCtorInfo_56_56, transform_hlds__intermod__SymName_35, transform_hlds__intermod__ArgTerms_38, &transform_hlds__intermod__RHSTerm_27);
                                  }
#line 1950 "intermod.m"
                                  transform_hlds__intermod__succeeded = MR_TRUE;
#line 1950 "intermod.m"
                                }
#line 1939 "intermod.m"
                                break;
#line 1939 "intermod.m"
                              case (MR_Integer) 5:
#line 1937 "intermod.m"
                                {
#line 1937 "intermod.m"
                                  MR_Integer transform_hlds__intermod__Int_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1937 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_50_50;

#line 1938 "intermod.m"
                                  {
#line 1938 "intermod.m"
                                    transform_hlds__intermod__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1938 "intermod.m"
                                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_50_50, 0) = ((MR_Box) (transform_hlds__intermod__Int_31));
#line 1938 "intermod.m"
                                  }
#line 1938 "intermod.m"
                                  {
#line 1938 "intermod.m"
                                    transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1938 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_50_50));
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
#line 1939 "intermod.m"
                                break;
#line 1939 "intermod.m"
                              case (MR_Integer) 6:
#line 1940 "intermod.m"
                                {
#line 1940 "intermod.m"
                                  MR_Float transform_hlds__intermod__Float_32 = MR_unbox_float((MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1940 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_48_48;

#line 1941 "intermod.m"
                                  {
#line 1941 "intermod.m"
                                    transform_hlds__intermod__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1941 "intermod.m"
                                    MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1941 "intermod.m"
                                    MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_48_48, 1) = MR_box_float(transform_hlds__intermod__Float_32);
#line 1941 "intermod.m"
                                  }
#line 1941 "intermod.m"
                                  {
#line 1941 "intermod.m"
                                    transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1941 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_48_48));
#line 1941 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1941 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1941 "intermod.m"
                                  }
#line 1940 "intermod.m"
                                  transform_hlds__intermod__succeeded = MR_TRUE;
#line 1940 "intermod.m"
                                }
#line 1939 "intermod.m"
                                break;
#line 1939 "intermod.m"
                              case (MR_Integer) 7:
#line 1943 "intermod.m"
                                {
#line 1943 "intermod.m"
                                  MR_Char transform_hlds__intermod__Char_33 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1943 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_45_45;
#line 1943 "intermod.m"
                                  MR_String transform_hlds__intermod__V_46_46;

#line 1944 "intermod.m"
                                  {
#line 1944 "intermod.m"
                                    transform_hlds__intermod__V_46_46 = mercury__string__from_char_1_f_0(transform_hlds__intermod__Char_33);
                                  }
#line 1944 "intermod.m"
                                  {
#line 1944 "intermod.m"
                                    transform_hlds__intermod__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1944 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_45_45, 0) = ((MR_Box) (transform_hlds__intermod__V_46_46));
#line 1944 "intermod.m"
                                  }
#line 1944 "intermod.m"
                                  {
#line 1944 "intermod.m"
                                    transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1944 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_45_45));
#line 1944 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1944 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1944 "intermod.m"
                                  }
#line 1943 "intermod.m"
                                  transform_hlds__intermod__succeeded = MR_TRUE;
#line 1943 "intermod.m"
                                }
#line 1939 "intermod.m"
                                break;
#line 1939 "intermod.m"
                              case (MR_Integer) 8:
#line 1947 "intermod.m"
                                {
#line 1947 "intermod.m"
                                  MR_String transform_hlds__intermod__String_34 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_28, (MR_Integer) 1)));
#line 1947 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_43_43;

#line 1948 "intermod.m"
                                  {
#line 1948 "intermod.m"
                                    transform_hlds__intermod__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "intermod.m"
                                    MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1948 "intermod.m"
                                    MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_43_43, 1) = ((MR_Box) (transform_hlds__intermod__String_34));
#line 1948 "intermod.m"
                                  }
#line 1948 "intermod.m"
                                  {
#line 1948 "intermod.m"
                                    transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1948 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__V_43_43));
#line 1948 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1948 "intermod.m"
                                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHSTerm_27, 2) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1948 "intermod.m"
                                  }
#line 1947 "intermod.m"
                                  transform_hlds__intermod__succeeded = MR_TRUE;
#line 1947 "intermod.m"
                                }
#line 1939 "intermod.m"
                                break;
#line 1939 "intermod.m"
                            }
#line 1939 "intermod.m"
                            break;
#line 1939 "intermod.m"
                        }
#line 1935 "intermod.m"
                      }
#line 1934 "intermod.m"
                    else
#line 1934 "intermod.m"
                    if (((MR_tag((MR_Word) transform_hlds__intermod__RHS_20)) == (MR_mktag((MR_Integer) 0))))
#line 1932 "intermod.m"
                      {
#line 1932 "intermod.m"
                        MR_Word transform_hlds__intermod__RHSVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__RHS_20, (MR_Integer) 0)));

#line 1933 "intermod.m"
                        {
#line 1933 "intermod.m"
                          transform_hlds__intermod__RHSTerm_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1933 "intermod.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHSTerm_27, 0) = ((MR_Box) (transform_hlds__intermod__RHSVar_26));
#line 1933 "intermod.m"
                          MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHSTerm_27, 1) = ((MR_Box) (transform_hlds__intermod__Context_25));
#line 1933 "intermod.m"
                        }
#line 1932 "intermod.m"
                        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1932 "intermod.m"
                      }
#line 1934 "intermod.m"
                    else
#line 1934 "intermod.m"
                      transform_hlds__intermod__succeeded = MR_FALSE;
#line 1928 "intermod.m"
                  }
#line 1928 "intermod.m"
              }
#line 1960 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1958 "intermod.m"
              {
#line 1958 "intermod.m"
                {
#line 1958 "intermod.m"
                  transform_hlds__intermod__succeeded = mercury__map__insert_4_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[13], (MR_Word) &transform_hlds__intermod_scalar_common_1[14], ((MR_Box) (transform_hlds__intermod__LHSVar_19)), ((MR_Box) (transform_hlds__intermod__RHSTerm_27)), transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5, &transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52);
                }
#line 1958 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1958 "intermod.m"
                  {
#line 1959 "intermod.m"
                    transform_hlds__intermod__RevGoals1_39 = transform_hlds__intermod__HeadVar__3_3;
#line 1959 "intermod.m"
                    transform_hlds__intermod__succeeded = MR_TRUE;
#line 1958 "intermod.m"
                  }
#line 1958 "intermod.m"
              }
#line 1960 "intermod.m"
            else
#line 1961 "intermod.m"
              {
#line 1961 "intermod.m"
                {
#line 1961 "intermod.m"
                  transform_hlds__intermod__RevGoals1_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__RevGoals1_39, 0) = ((MR_Box) (transform_hlds__intermod__Goal_13));
#line 1961 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__RevGoals1_39, 1) = ((MR_Box) (transform_hlds__intermod__HeadVar__3_3));
#line 1961 "intermod.m"
                }
#line 1961 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5;
#line 1961 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 1961 "intermod.m"
              }
#line 1926 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1963 "intermod.m"
              {
#line 1963 "intermod.m"
                /* direct tailcall eliminated */
#line 1963 "intermod.m"
                {
#line 1963 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__Goals0_14;
#line 1963 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__RevGoals1_39;
#line 1963 "intermod.m"
                  MR_Word transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0__tmp_copy_5 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_52_52;

#line 1963 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0_5 = transform_hlds__intermod__STATE_VARIABLE_HeadVarMap_0__tmp_copy_5;
#line 1963 "intermod.m"
                  transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1963 "intermod.m"
                  transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 1963 "intermod.m"
                }
#line 1963 "intermod.m"
                continue;
#line 1963 "intermod.m"
              }
#line 1926 "intermod.m"
          }
#line 1923 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 1923 "intermod.m"
      }
#line 1923 "intermod.m"
      break;
#line 1923 "intermod.m"
    }
#line 1917 "intermod.m"
}

#line 1901 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0_1(
#line 1901 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1901 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1901 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 1901 "intermod.m"
{
#line 1901 "intermod.m"
  {
#line 1901 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1901 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__4_24;

#line 1901 "intermod.m"
    {
#line 1901 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__strip_headvar_unifications__1905__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__4_24);
    }
#line 1901 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__4_24));
#line 1901 "intermod.m"
  }
#line 1901 "intermod.m"
}

#line 1889 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__strip_headvar_unifications_4_p_0(
#line 1889 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_5,
#line 1889 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_6,
#line 1889 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadTerms_7,
#line 1889 "intermod.m"
  MR_Word * transform_hlds__intermod__Clause_8)
#line 1889 "intermod.m"
{
#line 1892 "intermod.m"
  {
#line 1892 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1892 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_36_36;
#line 1892 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_37_37;
#line 1892 "intermod.m"
    MR_Word transform_hlds__intermod__Goal0_9;
#line 1892 "intermod.m"
    MR_Word transform_hlds__intermod__GoalInfo0_11;
#line 1892 "intermod.m"
    MR_Word transform_hlds__intermod__Goals0_12;
#line 1892 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVarMap0_13;
#line 1894 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 1912 "intermod.m"
    MR_Word transform_hlds__intermod__Goals_14;
#line 1912 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVarMap_15;

#line 1893 "intermod.m"
    {
#line 1893 "intermod.m"
      transform_hlds__intermod__Goal0_9 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__Clause0_6);
    }
#line 1894 "intermod.m"
    transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 0)));
#line 1894 "intermod.m"
    transform_hlds__intermod__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 1)));
#line 1895 "intermod.m"
    {
#line 1895 "intermod.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__intermod__Goal0_9, &transform_hlds__intermod__Goals0_12);
    }
#line 8665 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_36_36 = (MR_Word) &transform_hlds__intermod_scalar_common_1[13];
#line 8667 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_37_37 = (MR_Word) &transform_hlds__intermod_scalar_common_1[14];
#line 1896 "intermod.m"
    {
#line 1896 "intermod.m"
      mercury__map__init_1_p_0(transform_hlds__intermod__TypeInfo_36_36, transform_hlds__intermod__TypeInfo_37_37, &transform_hlds__intermod__HeadVarMap0_13);
    }
#line 1898 "intermod.m"
    {
#line 1898 "intermod.m"
      transform_hlds__intermod__succeeded = transform_hlds__intermod__strip_headvar_unifications_from_goal_list_6_p_0(transform_hlds__intermod__Goals0_12, transform_hlds__intermod__HeadVars_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__Goals_14, transform_hlds__intermod__HeadVarMap0_13, &transform_hlds__intermod__HeadVarMap_15);
    }
#line 1912 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1909 "intermod.m"
      {
#line 1909 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_20;
#line 1909 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;
#line 1911 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 1911 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;
#line 1911 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34;
#line 1911 "intermod.m"
        MR_Word transform_hlds__intermod__V_35_35;
#line 1911 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;

#line 1901 "intermod.m"
        {
#line 1901 "intermod.m"
          transform_hlds__intermod__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[5]));
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 1) = ((MR_Box) (transform_hlds__intermod__strip_headvar_unifications_4_p_0_1));
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 3) = ((MR_Box) (transform_hlds__intermod__Clause0_6));
#line 1901 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_22_22, 4) = ((MR_Box) (transform_hlds__intermod__HeadVarMap_15));
#line 1901 "intermod.m"
        }
#line 1901 "intermod.m"
        {
#line 1901 "intermod.m"
          mercury__list__map_3_p_0(transform_hlds__intermod__TypeInfo_36_36, transform_hlds__intermod__TypeInfo_37_37, transform_hlds__intermod__V_22_22, transform_hlds__intermod__HeadVars_5, transform_hlds__intermod__HeadTerms_7);
        }
#line 1910 "intermod.m"
        {
#line 1910 "intermod.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(transform_hlds__intermod__Goals_14, transform_hlds__intermod__GoalInfo0_11, &transform_hlds__intermod__Goal_20);
        }
#line 1911 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 0)));
#line 1911 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 1)));
#line 1911 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 2)));
#line 1911 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 3)));
#line 1911 "intermod.m"
        transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_6, (MR_Integer) 4)));
#line 1911 "intermod.m"
        {
#line 1911 "intermod.m"
          MR_Word base;
#line 1911 "intermod.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1911 "intermod.m"
          *transform_hlds__intermod__Clause_8 = base;
#line 1911 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_31_31));
#line 1911 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__Goal_20));
#line 1911 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_33_33));
#line 1911 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_34_34));
#line 1911 "intermod.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_35_35));
#line 1911 "intermod.m"
        }
#line 1909 "intermod.m"
      }
#line 1912 "intermod.m"
    else
#line 1913 "intermod.m"
      {
#line 1913 "intermod.m"
        {
#line 1913 "intermod.m"
          mercury__term__var_list_to_term_list_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__intermod__HeadVars_5, transform_hlds__intermod__HeadTerms_7);
        }
#line 1914 "intermod.m"
        *transform_hlds__intermod__Clause_8 = transform_hlds__intermod__Clause0_6;
#line 1913 "intermod.m"
      }
#line 1892 "intermod.m"
  }
#line 1889 "intermod.m"
}

#line 1852 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_11,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_12,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__PragmaImpl_13,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__Attributes_14,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__Args_15,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__ProgVarset0_16,
#line 1852 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_17,
#line 1852 "intermod.m"
  MR_Integer transform_hlds__intermod__ProcId_18)
#line 1852 "intermod.m"
{
#line 1858 "intermod.m"
  {
#line 1858 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1858 "intermod.m"
    MR_Word transform_hlds__intermod__ProcInfo_20;
#line 1858 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeArgModes_21;
#line 1859 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_ProcInfo_20;

#line 1859 "intermod.m"
    {
#line 1859 "intermod.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__intermod__Procs_11, transform_hlds__intermod__ProcId_18, &transform_hlds__intermod__conv0_ProcInfo_20);
    }
#line 1859 "intermod.m"
    transform_hlds__intermod__ProcInfo_20 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_20);
#line 1860 "intermod.m"
    {
#line 1860 "intermod.m"
      hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_20, &transform_hlds__intermod__MaybeArgModes_21);
    }
#line 1869 "intermod.m"
    if ((transform_hlds__intermod__MaybeArgModes_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1870 "intermod.m"
      {
#line 1871 "intermod.m"
        {
#line 1871 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_foreign_clause\'/10", (MR_String) "no mode declaration");
#line 1871 "intermod.m"
          return;
        }
#line 1870 "intermod.m"
      }
#line 1869 "intermod.m"
    else
#line 1862 "intermod.m"
      {
#line 1862 "intermod.m"
        MR_Word transform_hlds__intermod__ArgModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeArgModes_21, (MR_Integer) 0)));
#line 1862 "intermod.m"
        MR_Word transform_hlds__intermod__ProgVarset_23;
#line 1862 "intermod.m"
        MR_Word transform_hlds__intermod__PragmaVars_24;
#line 1862 "intermod.m"
        MR_Word transform_hlds__intermod__InstVarset_25;
#line 1862 "intermod.m"
        MR_Word transform_hlds__intermod__FPInfo_26;

#line 1863 "intermod.m"
        {
#line 1863 "intermod.m"
          transform_hlds__intermod__get_pragma_foreign_code_vars_5_p_0(transform_hlds__intermod__Args_15, transform_hlds__intermod__ArgModes_22, transform_hlds__intermod__ProgVarset0_16, &transform_hlds__intermod__ProgVarset_23, &transform_hlds__intermod__PragmaVars_24);
        }
#line 1865 "intermod.m"
        {
#line 1865 "intermod.m"
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(transform_hlds__intermod__ProcInfo_20, &transform_hlds__intermod__InstVarset_25);
        }
#line 1866 "intermod.m"
        {
#line 1866 "intermod.m"
          transform_hlds__intermod__FPInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1866 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 0) = ((MR_Box) (transform_hlds__intermod__Attributes_14));
#line 1866 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 1) = ((MR_Box) (transform_hlds__intermod__SymName_17));
#line 1866 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 2) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_12));
#line 1866 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 3) = ((MR_Box) (transform_hlds__intermod__PragmaVars_24));
#line 1866 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 4) = ((MR_Box) (transform_hlds__intermod__ProgVarset_23));
#line 1866 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 5) = ((MR_Box) (transform_hlds__intermod__InstVarset_25));
#line 1866 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FPInfo_26, 6) = ((MR_Box) (transform_hlds__intermod__PragmaImpl_13));
#line 1866 "intermod.m"
        }
#line 1868 "intermod.m"
        {
#line 1868 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_pragma_foreign_proc_4_p_0((MR_Integer) 0, transform_hlds__intermod__FPInfo_26);
#line 1868 "intermod.m"
          return;
        }
#line 1862 "intermod.m"
      }
#line 1858 "intermod.m"
  }
#line 1852 "intermod.m"
}

#line 1843 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_2(
#line 1843 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1843 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1843 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1843 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1843 "intermod.m"
{
#line 1843 "intermod.m"
  {
#line 1843 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1843 "intermod.m"
    {
#line 1843 "intermod.m"
      transform_hlds__intermod__intermod_write_foreign_clause_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 9))), ((MR_Integer) transform_hlds__intermod__wrapper_arg_1));
#line 1843 "intermod.m"
      return;
    }
#line 1843 "intermod.m"
  }
#line 1843 "intermod.m"
}

#line 1823 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0_1(
#line 1823 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1823 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 1823 "intermod.m"
{
#line 1823 "intermod.m"
  {
#line 1823 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1823 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1823 "intermod.m"
    {
#line 1823 "intermod.m"
      return transform_hlds__intermod__succeeded = transform_hlds__intermod__IntroducedFrom__pred__intermod_write_clause__1823__1_1_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 1823 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 1823 "intermod.m"
  }
#line 1823 "intermod.m"
}

#line 1797 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_clause_11_p_0(
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_12,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_13,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_14,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__VarSet_15,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVars_16,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_17,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_18,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__MaybeVarTypes_19,
#line 1797 "intermod.m"
  MR_Word transform_hlds__intermod__Clause0_20)
#line 1797 "intermod.m"
{
#line 1802 "intermod.m"
  {
#line 1802 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1802 "intermod.m"
    MR_Word transform_hlds__intermod__ApplicableProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 0)));
#line 1802 "intermod.m"
    MR_Word transform_hlds__intermod__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 1)));
#line 1802 "intermod.m"
    MR_Word transform_hlds__intermod__ImplLang_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 2)));
#line 1803 "intermod.m"
    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 3)));
#line 1803 "intermod.m"
    MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_20, (MR_Integer) 4)));

#line 1815 "intermod.m"
    if ((transform_hlds__intermod__ImplLang_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1805 "intermod.m"
      {
#line 1805 "intermod.m"
        MR_Word transform_hlds__intermod__ClauseHeadVars_27;
#line 1805 "intermod.m"
        MR_Word transform_hlds__intermod__Clause_28;

#line 1806 "intermod.m"
        {
#line 1806 "intermod.m"
          transform_hlds__intermod__strip_headvar_unifications_4_p_0(transform_hlds__intermod__HeadVars_16, transform_hlds__intermod__Clause0_20, &transform_hlds__intermod__ClauseHeadVars_27, &transform_hlds__intermod__Clause_28);
        }
#line 1812 "intermod.m"
        {
#line 1812 "intermod.m"
          hlds__hlds_out__hlds_out_pred__write_clause_14_p_0(transform_hlds__intermod__OutInfo_12, (MR_Integer) 0, (MR_Integer) 1, transform_hlds__intermod__ModuleInfo_13, transform_hlds__intermod__PredId_14, transform_hlds__intermod__VarSet_15, (MR_Integer) 1, transform_hlds__intermod__ClauseHeadVars_27, transform_hlds__intermod__PredOrFunc_17, transform_hlds__intermod__Clause_28, (MR_Integer) 1, transform_hlds__intermod__MaybeVarTypes_19);
#line 1812 "intermod.m"
          return;
        }
#line 1805 "intermod.m"
      }
#line 1815 "intermod.m"
    else
#line 1816 "intermod.m"
      {
#line 1816 "intermod.m"
        MR_Word transform_hlds__intermod__PredInfo_32;
#line 1816 "intermod.m"
        MR_Word transform_hlds__intermod__Procs_33;
#line 1847 "intermod.m"
        MR_Word transform_hlds__intermod__Attributes_49;
#line 1847 "intermod.m"
        MR_Word transform_hlds__intermod__Args_52;
#line 1847 "intermod.m"
        MR_Word transform_hlds__intermod__PragmaCode_55;
#line 1831 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 1822 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;

#line 1817 "intermod.m"
        {
#line 1817 "intermod.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_13, transform_hlds__intermod__PredId_14, &transform_hlds__intermod__PredInfo_32);
        }
#line 1818 "intermod.m"
        {
#line 1818 "intermod.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__intermod__PredInfo_32, &transform_hlds__intermod__Procs_33);
        }
#line 1822 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_23, (MR_Integer) 0)));
#line 1822 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_23, (MR_Integer) 1)));
#line 1831 "intermod.m"
        if (((((MR_tag((MR_Word) transform_hlds__intermod__V_93_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1833 "intermod.m"
          {
#line 1833 "intermod.m"
            MR_Word transform_hlds__intermod__V_58_58;
#line 1833 "intermod.m"
            MR_Integer transform_hlds__intermod__V_59_59;
#line 1833 "intermod.m"
            MR_Word transform_hlds__intermod___ExtraArgs_81;
#line 1833 "intermod.m"
            MR_Word transform_hlds__intermod___MaybeTraceRuntimeCond_82;

#line 1833 "intermod.m"
            transform_hlds__intermod__Attributes_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 1)));
#line 1833 "intermod.m"
            transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 2)));
#line 1833 "intermod.m"
            transform_hlds__intermod__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 3)));
#line 1833 "intermod.m"
            transform_hlds__intermod__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 4)));
#line 1833 "intermod.m"
            transform_hlds__intermod___ExtraArgs_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 5)));
#line 1833 "intermod.m"
            transform_hlds__intermod___MaybeTraceRuntimeCond_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 6)));
#line 1833 "intermod.m"
            transform_hlds__intermod__PragmaCode_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 7)));
#line 1833 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1833 "intermod.m"
          }
#line 1831 "intermod.m"
        else
#line 1831 "intermod.m"
        if (((((MR_tag((MR_Word) transform_hlds__intermod__V_93_93)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1822 "intermod.m"
          {
#line 1822 "intermod.m"
            MR_Word transform_hlds__intermod__TypeCtorInfo_85_85;
#line 1822 "intermod.m"
            MR_Word transform_hlds__intermod__TypeInfo_94_94;
#line 1822 "intermod.m"
            MR_Word transform_hlds__intermod__Goals_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 2)));
#line 1822 "intermod.m"
            MR_Word transform_hlds__intermod__ForeignCodeGoal_46;
#line 1822 "intermod.m"
            MR_Word transform_hlds__intermod__ForeignCodeGoalExpr_47;
#line 1822 "intermod.m"
            MR_Word transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_93_93, (MR_Integer) 1)));
#line 1822 "intermod.m"
            MR_Word transform_hlds__intermod__V_65_65;
#line 1822 "intermod.m"
            MR_Word transform_hlds__intermod__V_66_66;
#line 1822 "intermod.m"
            MR_Word transform_hlds__intermod__V_68_68;
#line 1822 "intermod.m"
            MR_Word transform_hlds__intermod__V_91_91;
#line 1828 "intermod.m"
            MR_Word transform_hlds__intermod__V_48_48;
#line 1829 "intermod.m"
            MR_Word transform_hlds__intermod__V_50_50;
#line 1829 "intermod.m"
            MR_Integer transform_hlds__intermod__V_51_51;
#line 1829 "intermod.m"
            MR_Word transform_hlds__intermod___ExtraArgs_53;
#line 1829 "intermod.m"
            MR_Word transform_hlds__intermod___MaybeTraceRuntimeCond_54;

#line 1822 "intermod.m"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_64_64 == (MR_Integer) 0);
#line 1822 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1822 "intermod.m"
              {
#line 1823 "intermod.m"
                transform_hlds__intermod__V_65_65 = (MR_Word) &transform_hlds__intermod_scalar_common_2[26];
#line 1827 "intermod.m"
                transform_hlds__intermod__V_68_68 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9120 "transform_hlds.intermod.c"
                transform_hlds__intermod__TypeCtorInfo_85_85 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1823 "intermod.m"
                {
#line 1823 "intermod.m"
                  mercury__list__filter_3_p_0(transform_hlds__intermod__TypeCtorInfo_85_85, transform_hlds__intermod__V_65_65, transform_hlds__intermod__Goals_34, &transform_hlds__intermod__V_66_66);
                }
#line 1827 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_66_66)) == (MR_mktag((MR_Integer) 1)));
#line 1827 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1827 "intermod.m"
                  {
#line 1827 "intermod.m"
                    transform_hlds__intermod__ForeignCodeGoal_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_66_66, (MR_Integer) 0)));
#line 1827 "intermod.m"
                    transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_66_66, (MR_Integer) 1)));
#line 9137 "transform_hlds.intermod.c"
                    transform_hlds__intermod__TypeInfo_94_94 = (MR_Word) &transform_hlds__intermod_scalar_common_1[25];
#line 1827 "intermod.m"
                    {
#line 1827 "intermod.m"
                      transform_hlds__intermod__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__intermod__TypeInfo_94_94, ((MR_Box) (transform_hlds__intermod__V_68_68)), ((MR_Box) (transform_hlds__intermod__V_91_91)));
                    }
#line 1822 "intermod.m"
                    if (transform_hlds__intermod__succeeded)
#line 1822 "intermod.m"
                      {
#line 1828 "intermod.m"
                        transform_hlds__intermod__ForeignCodeGoalExpr_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignCodeGoal_46, (MR_Integer) 0)));
#line 1828 "intermod.m"
                        transform_hlds__intermod__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignCodeGoal_46, (MR_Integer) 1)));
#line 1829 "intermod.m"
                        transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ForeignCodeGoalExpr_47)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1829 "intermod.m"
                        if (transform_hlds__intermod__succeeded)
#line 1829 "intermod.m"
                          {
#line 1829 "intermod.m"
                            transform_hlds__intermod__Attributes_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 1)));
#line 1829 "intermod.m"
                            transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 2)));
#line 1829 "intermod.m"
                            transform_hlds__intermod__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 3)));
#line 1829 "intermod.m"
                            transform_hlds__intermod__Args_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 4)));
#line 1829 "intermod.m"
                            transform_hlds__intermod___ExtraArgs_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 5)));
#line 1829 "intermod.m"
                            transform_hlds__intermod___MaybeTraceRuntimeCond_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 6)));
#line 1829 "intermod.m"
                            transform_hlds__intermod__PragmaCode_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignCodeGoalExpr_47, (MR_Integer) 7)));
#line 1829 "intermod.m"
                          }
#line 1822 "intermod.m"
                      }
#line 1827 "intermod.m"
                  }
#line 1822 "intermod.m"
              }
#line 1822 "intermod.m"
          }
#line 1831 "intermod.m"
        else
#line 1831 "intermod.m"
          transform_hlds__intermod__succeeded = MR_FALSE;
#line 1847 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1840 "intermod.m"
          if ((transform_hlds__intermod__ApplicableProcIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1838 "intermod.m"
            {
#line 1839 "intermod.m"
              {
#line 1839 "intermod.m"
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "all_modes foreign_proc");
#line 1839 "intermod.m"
                return;
              }
#line 1838 "intermod.m"
            }
#line 1840 "intermod.m"
          else
#line 1841 "intermod.m"
            {
#line 1841 "intermod.m"
              MR_Word transform_hlds__intermod__ProcIds_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ApplicableProcIds_22, (MR_Integer) 0)));
#line 1841 "intermod.m"
              MR_Word transform_hlds__intermod__V_69_69;
#line 1842 "intermod.m"
              MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_62;

#line 1843 "intermod.m"
              {
#line 1843 "intermod.m"
                transform_hlds__intermod__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1843 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_11[0]));
#line 1843 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_clause_11_p_0_2));
#line 1843 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1843 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 3) = ((MR_Box) (transform_hlds__intermod__Procs_33));
#line 1843 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 4) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_17));
#line 1843 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 5) = ((MR_Box) (transform_hlds__intermod__PragmaCode_55));
#line 1843 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 6) = ((MR_Box) (transform_hlds__intermod__Attributes_49));
#line 1843 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 7) = ((MR_Box) (transform_hlds__intermod__Args_52));
#line 1843 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 8) = ((MR_Box) (transform_hlds__intermod__VarSet_15));
#line 1843 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_69_69, 9) = ((MR_Box) (transform_hlds__intermod__SymName_18));
#line 1843 "intermod.m"
              }
#line 1842 "intermod.m"
              {
#line 1842 "intermod.m"
                mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_69_69, transform_hlds__intermod__ProcIds_60, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_62);
              }
#line 1841 "intermod.m"
            }
#line 1847 "intermod.m"
        else
#line 1848 "intermod.m"
          {
#line 1848 "intermod.m"
            {
#line 1848 "intermod.m"
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_clause\'/11", (MR_String) "did not find foreign_proc");
#line 1848 "intermod.m"
              return;
            }
#line 1848 "intermod.m"
          }
#line 1816 "intermod.m"
      }
#line 1802 "intermod.m"
  }
#line 1797 "intermod.m"
}

#line 1791 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0_1(
#line 1791 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1791 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1791 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1791 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1791 "intermod.m"
{
#line 1791 "intermod.m"
  {
#line 1791 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1791 "intermod.m"
    {
#line 1791 "intermod.m"
      transform_hlds__intermod__intermod_write_clause_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 10))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1791 "intermod.m"
      return;
    }
#line 1791 "intermod.m"
  }
#line 1791 "intermod.m"
}

#line 1746 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_preds_5_p_0(
#line 1746 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_1,
#line 1746 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_2,
#line 1746 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3)
#line 1746 "intermod.m"
{
#line 1749 "intermod.m"
  while (MR_TRUE)
#line 1749 "intermod.m"
    {
#line 1749 "intermod.m"
      /* tailcall optimized into a loop */
#line 1749 "intermod.m"
      {
#line 1749 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1749 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1749 "intermod.m"
          {
#line 1749 "intermod.m"
          }
#line 1749 "intermod.m"
        else
#line 1750 "intermod.m"
          {
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo_16;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__Module_17;
#line 1750 "intermod.m"
            MR_String transform_hlds__intermod__Name_18;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_19;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_20;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesInfo_21;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__VarSet_22;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__HeadVars_23;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__ClausesRep_24;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__VarTypes_26;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__Clauses_27;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__GoalType_28;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__Module_68;
#line 1750 "intermod.m"
            MR_String transform_hlds__intermod__Name_69;
#line 1750 "intermod.m"
            MR_Integer transform_hlds__intermod__Arity_70;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_71;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_72;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_73;
#line 1750 "intermod.m"
            MR_Word transform_hlds__intermod__MarkerList_74;
#line 1763 "intermod.m"
            MR_Word transform_hlds__intermod___ItemNumbers_25;

#line 1751 "intermod.m"
            {
#line 1751 "intermod.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_2, transform_hlds__intermod__PredId_13, &transform_hlds__intermod__PredInfo_16);
            }
#line 1752 "intermod.m"
            {
#line 1752 "intermod.m"
              transform_hlds__intermod__Module_17 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1753 "intermod.m"
            {
#line 1753 "intermod.m"
              transform_hlds__intermod__Name_18 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1754 "intermod.m"
            {
#line 1754 "intermod.m"
              transform_hlds__intermod__SymName_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1754 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_19, 0) = ((MR_Box) (transform_hlds__intermod__Module_17));
#line 1754 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_19, 1) = ((MR_Box) (transform_hlds__intermod__Name_18));
#line 1754 "intermod.m"
            }
#line 1755 "intermod.m"
            {
#line 1755 "intermod.m"
              transform_hlds__intermod__PredOrFunc_20 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1969 "intermod.m"
            {
#line 1969 "intermod.m"
              transform_hlds__intermod__Module_68 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1970 "intermod.m"
            {
#line 1970 "intermod.m"
              transform_hlds__intermod__Name_69 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1971 "intermod.m"
            {
#line 1971 "intermod.m"
              transform_hlds__intermod__Arity_70 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1972 "intermod.m"
            {
#line 1972 "intermod.m"
              transform_hlds__intermod__PredOrFunc_71 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_16);
            }
#line 1973 "intermod.m"
            {
#line 1973 "intermod.m"
              transform_hlds__intermod__SymName_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_72, 0) = ((MR_Box) (transform_hlds__intermod__Module_68));
#line 1973 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_72, 1) = ((MR_Box) (transform_hlds__intermod__Name_69));
#line 1973 "intermod.m"
            }
#line 1974 "intermod.m"
            {
#line 1974 "intermod.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__Markers_73);
            }
#line 1975 "intermod.m"
            {
#line 1975 "intermod.m"
              hlds__hlds_pred__markers_to_marker_list_2_p_0(transform_hlds__intermod__Markers_73, &transform_hlds__intermod__MarkerList_74);
            }
#line 1976 "intermod.m"
            {
#line 1976 "intermod.m"
              transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(transform_hlds__intermod__SymName_72, transform_hlds__intermod__Arity_70, transform_hlds__intermod__MarkerList_74, transform_hlds__intermod__PredOrFunc_71);
            }
#line 1760 "intermod.m"
            {
#line 1760 "intermod.m"
              hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__ClausesInfo_21);
            }
#line 1761 "intermod.m"
            {
#line 1761 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_varset_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__VarSet_22);
            }
#line 1762 "intermod.m"
            {
#line 1762 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_headvar_list_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__HeadVars_23);
            }
#line 1763 "intermod.m"
            {
#line 1763 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__ClausesRep_24, &transform_hlds__intermod___ItemNumbers_25);
            }
#line 1764 "intermod.m"
            {
#line 1764 "intermod.m"
              hlds__hlds_clauses__clauses_info_get_vartypes_2_p_0(transform_hlds__intermod__ClausesInfo_21, &transform_hlds__intermod__VarTypes_26);
            }
#line 1765 "intermod.m"
            {
#line 1765 "intermod.m"
              hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep_24, &transform_hlds__intermod__Clauses_27);
            }
#line 1767 "intermod.m"
            {
#line 1767 "intermod.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__GoalType_28);
            }
#line 1782 "intermod.m"
#line 1782 "intermod.m"
            switch (MR_tag((MR_Word) transform_hlds__intermod__GoalType_28)) {
#line 1782 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1782 "intermod.m"
              case (MR_Integer) 0:
#line 1787 "intermod.m"
                {
#line 1787 "intermod.m"
                  MR_Word transform_hlds__intermod__TypeVarset_35;
#line 1787 "intermod.m"
                  MR_Word transform_hlds__intermod__MaybeVarTypes_36;
#line 1787 "intermod.m"
                  MR_Word transform_hlds__intermod__V_40_40;
#line 1790 "intermod.m"
                  MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_49_49;

#line 1788 "intermod.m"
                  {
#line 1788 "intermod.m"
                    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__intermod__PredInfo_16, &transform_hlds__intermod__TypeVarset_35);
                  }
#line 1789 "intermod.m"
                  {
#line 1789 "intermod.m"
                    transform_hlds__intermod__MaybeVarTypes_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1789 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeVarTypes_36, 0) = ((MR_Box) (transform_hlds__intermod__TypeVarset_35));
#line 1789 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeVarTypes_36, 1) = ((MR_Box) (transform_hlds__intermod__VarTypes_26));
#line 1789 "intermod.m"
                  }
#line 1791 "intermod.m"
                  {
#line 1791 "intermod.m"
                    transform_hlds__intermod__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
#line 1791 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_9[0]));
#line 1791 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_preds_5_p_0_1));
#line 1791 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1791 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_1));
#line 1791 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 4) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_2));
#line 1791 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 5) = ((MR_Box) (transform_hlds__intermod__PredId_13));
#line 1791 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 6) = ((MR_Box) (transform_hlds__intermod__VarSet_22));
#line 1791 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 7) = ((MR_Box) (transform_hlds__intermod__HeadVars_23));
#line 1791 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 8) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_20));
#line 1791 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 9) = ((MR_Box) (transform_hlds__intermod__SymName_19));
#line 1791 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_40_40, 10) = ((MR_Box) (transform_hlds__intermod__MaybeVarTypes_36));
#line 1791 "intermod.m"
                  }
#line 1790 "intermod.m"
                  {
#line 1790 "intermod.m"
                    mercury__list__foldl_4_p_2((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_40_40, transform_hlds__intermod__Clauses_27, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_49_49);
                  }
#line 1787 "intermod.m"
                }
#line 1782 "intermod.m"
                break;
#line 1782 "intermod.m"
              case (MR_Integer) 1:
#line 1769 "intermod.m"
                {
#line 1769 "intermod.m"
                  MR_Word transform_hlds__intermod__PromiseType_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalType_28, (MR_Integer) 0)));

#line 1776 "intermod.m"
                  if ((transform_hlds__intermod__Clauses_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1779 "intermod.m"
                    {
#line 1780 "intermod.m"
                      {
#line 1780 "intermod.m"
                        mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_preds\'/5", (MR_String) "assertion not a single clause.");
#line 1780 "intermod.m"
                        return;
                      }
#line 1779 "intermod.m"
                    }
#line 1776 "intermod.m"
                  else
#line 1776 "intermod.m"
                    {
#line 1776 "intermod.m"
                      MR_Word transform_hlds__intermod__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Clauses_27, (MR_Integer) 1)));
#line 1776 "intermod.m"
                      MR_Word transform_hlds__intermod__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Clauses_27, (MR_Integer) 0)));

#line 1776 "intermod.m"
                      if ((transform_hlds__intermod__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1771 "intermod.m"
                        {
#line 1773 "intermod.m"
                          {
#line 1773 "intermod.m"
                            hlds__hlds_out__hlds_out_module__write_promise_13_p_0(transform_hlds__intermod__OutInfo_1, transform_hlds__intermod__PromiseType_29, (MR_Integer) 0, transform_hlds__intermod__ModuleInfo_2, transform_hlds__intermod__PredId_13, transform_hlds__intermod__VarSet_22, (MR_Integer) 0, transform_hlds__intermod__HeadVars_23, transform_hlds__intermod__PredOrFunc_20, transform_hlds__intermod__V_63_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
                          }
#line 1771 "intermod.m"
                        }
#line 1776 "intermod.m"
                      else
#line 1779 "intermod.m"
                        {
#line 1780 "intermod.m"
                          {
#line 1780 "intermod.m"
                            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_preds\'/5", (MR_String) "assertion not a single clause.");
#line 1780 "intermod.m"
                            return;
                          }
#line 1779 "intermod.m"
                        }
#line 1776 "intermod.m"
                    }
#line 1769 "intermod.m"
                }
#line 1782 "intermod.m"
                break;
#line 1782 "intermod.m"
            }
#line 1795 "intermod.m"
            /* direct tailcall eliminated */
#line 1795 "intermod.m"
            {
#line 1795 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__PredIds_14;

#line 1795 "intermod.m"
              transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 1795 "intermod.m"
            }
#line 1795 "intermod.m"
            continue;
#line 1750 "intermod.m"
          }
#line 1749 "intermod.m"
      }
#line 1749 "intermod.m"
      break;
#line 1749 "intermod.m"
    }
#line 1746 "intermod.m"
}

#line 1714 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_modes_6_p_0(
#line 1714 "intermod.m"
  MR_Word transform_hlds__intermod__Procs_1,
#line 1714 "intermod.m"
  MR_Word transform_hlds__intermod__SymName_2,
#line 1714 "intermod.m"
  MR_Word transform_hlds__intermod__PredOrFunc_3,
#line 1714 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4)
#line 1714 "intermod.m"
{
#line 1717 "intermod.m"
  while (MR_TRUE)
#line 1717 "intermod.m"
    {
#line 1717 "intermod.m"
      /* tailcall optimized into a loop */
#line 1717 "intermod.m"
      {
#line 1717 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1717 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1717 "intermod.m"
          {
#line 1717 "intermod.m"
          }
#line 1717 "intermod.m"
        else
#line 1719 "intermod.m"
          {
#line 1719 "intermod.m"
            MR_Integer transform_hlds__intermod__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 1719 "intermod.m"
            MR_Word transform_hlds__intermod__ProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 1)));
#line 1719 "intermod.m"
            MR_Word transform_hlds__intermod__ProcInfo_19;
#line 1719 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeArgModes_20;
#line 1719 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeDetism_21;
#line 1719 "intermod.m"
            MR_Word transform_hlds__intermod__ArgModes_24;
#line 1719 "intermod.m"
            MR_Word transform_hlds__intermod__Detism_25;
#line 1719 "intermod.m"
            MR_Word transform_hlds__intermod__Context_26;
#line 1719 "intermod.m"
            MR_Word transform_hlds__intermod__Varset_27;
#line 1720 "intermod.m"
            MR_Box transform_hlds__intermod__conv0_ProcInfo_19;
#line 1729 "intermod.m"
            MR_Word transform_hlds__intermod__ArgModes0_22;
#line 1729 "intermod.m"
            MR_Word transform_hlds__intermod__Detism0_23;

#line 1720 "intermod.m"
            {
#line 1720 "intermod.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, transform_hlds__intermod__Procs_1, transform_hlds__intermod__ProcId_16, &transform_hlds__intermod__conv0_ProcInfo_19);
            }
#line 1720 "intermod.m"
            transform_hlds__intermod__ProcInfo_19 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_19);
#line 1721 "intermod.m"
            {
#line 1721 "intermod.m"
              hlds__hlds_pred__proc_info_get_maybe_declared_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__MaybeArgModes_20);
            }
#line 1722 "intermod.m"
            {
#line 1722 "intermod.m"
              hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__MaybeDetism_21);
            }
#line 1724 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeArgModes_20)) == (MR_mktag((MR_Integer) 1)));
#line 1724 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1724 "intermod.m"
              {
#line 1724 "intermod.m"
                transform_hlds__intermod__ArgModes0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeArgModes_20, (MR_Integer) 0)));
#line 1725 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeDetism_21)) == (MR_mktag((MR_Integer) 1)));
#line 1725 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1725 "intermod.m"
                  transform_hlds__intermod__Detism0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeDetism_21, (MR_Integer) 0)));
#line 1724 "intermod.m"
              }
#line 1729 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1727 "intermod.m"
              {
#line 1727 "intermod.m"
                transform_hlds__intermod__ArgModes_24 = transform_hlds__intermod__ArgModes0_22;
#line 1728 "intermod.m"
                transform_hlds__intermod__Detism_25 = transform_hlds__intermod__Detism0_23;
#line 1727 "intermod.m"
              }
#line 1729 "intermod.m"
            else
#line 1730 "intermod.m"
              {
#line 1730 "intermod.m"
                {
#line 1730 "intermod.m"
                  mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_write_pred_modes\'/6", (MR_String) "attempt to write undeclared mode");
#line 1730 "intermod.m"
                  return;
                }
#line 1730 "intermod.m"
              }
#line 1732 "intermod.m"
            {
#line 1732 "intermod.m"
              hlds__hlds_pred__proc_info_get_context_2_p_0(transform_hlds__intermod__ProcInfo_19, &transform_hlds__intermod__Context_26);
            }
#line 1733 "intermod.m"
            {
#line 1733 "intermod.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0, &transform_hlds__intermod__Varset_27);
            }
#line 1739 "intermod.m"
#line 1739 "intermod.m"
            switch (transform_hlds__intermod__PredOrFunc_3) {
#line 1739 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1739 "intermod.m"
              case (MR_Integer) 1:
#line 1735 "intermod.m"
                {
#line 1735 "intermod.m"
                  MR_Word transform_hlds__intermod__FuncArgModes_28;
#line 1735 "intermod.m"
                  MR_Word transform_hlds__intermod__FuncRetMode_29;
#line 1735 "intermod.m"
                  MR_Word transform_hlds__intermod__V_39_39;
#line 1736 "intermod.m"
                  MR_Box transform_hlds__intermod__conv1_FuncRetMode_29;

#line 1736 "intermod.m"
                  {
#line 1736 "intermod.m"
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, transform_hlds__intermod__ArgModes_24, &transform_hlds__intermod__FuncArgModes_28, &transform_hlds__intermod__conv1_FuncRetMode_29);
                  }
#line 1736 "intermod.m"
                  transform_hlds__intermod__FuncRetMode_29 = ((MR_Word) transform_hlds__intermod__conv1_FuncRetMode_29);
#line 1738 "intermod.m"
                  {
#line 1738 "intermod.m"
                    transform_hlds__intermod__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1738 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_39_39, 0) = ((MR_Box) (transform_hlds__intermod__Detism_25));
#line 1738 "intermod.m"
                  }
#line 1737 "intermod.m"
                  {
#line 1737 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_func_mode_decl_9_p_0((MR_Integer) 0, transform_hlds__intermod__Varset_27, transform_hlds__intermod__SymName_2, transform_hlds__intermod__FuncArgModes_28, transform_hlds__intermod__FuncRetMode_29, transform_hlds__intermod__V_39_39, transform_hlds__intermod__Context_26);
                  }
#line 1735 "intermod.m"
                }
#line 1739 "intermod.m"
                break;
#line 1739 "intermod.m"
              case (MR_Integer) 0:
#line 1740 "intermod.m"
                {
#line 1740 "intermod.m"
                  MR_Word transform_hlds__intermod__V_36_36;

#line 1742 "intermod.m"
                  {
#line 1742 "intermod.m"
                    transform_hlds__intermod__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1742 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_36_36, 0) = ((MR_Box) (transform_hlds__intermod__Detism_25));
#line 1742 "intermod.m"
                  }
#line 1741 "intermod.m"
                  {
#line 1741 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pred_mode_decl_8_p_0((MR_Integer) 0, transform_hlds__intermod__Varset_27, transform_hlds__intermod__SymName_2, transform_hlds__intermod__ArgModes_24, transform_hlds__intermod__V_36_36, transform_hlds__intermod__Context_26);
                  }
#line 1740 "intermod.m"
                }
#line 1739 "intermod.m"
                break;
#line 1739 "intermod.m"
            }
#line 1744 "intermod.m"
            /* direct tailcall eliminated */
#line 1744 "intermod.m"
            {
#line 1744 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__4__tmp_copy_4 = transform_hlds__intermod__ProcIds_17;

#line 1744 "intermod.m"
              transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__4__tmp_copy_4;
#line 1744 "intermod.m"
            }
#line 1744 "intermod.m"
            continue;
#line 1719 "intermod.m"
          }
#line 1717 "intermod.m"
      }
#line 1717 "intermod.m"
      break;
#line 1717 "intermod.m"
    }
#line 1714 "intermod.m"
}

#line 2003 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_2(
#line 2003 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2003 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2003 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2003 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 2003 "intermod.m"
{
#line 2003 "intermod.m"
  {
#line 2003 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 2003 "intermod.m"
    {
#line 2003 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_pragma_type_spec_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 2003 "intermod.m"
      return;
    }
#line 2003 "intermod.m"
  }
#line 2003 "intermod.m"
}

#line 1701 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0_1(
#line 1701 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1701 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1701 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1701 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1701 "intermod.m"
{
#line 1701 "intermod.m"
  {
#line 1701 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1701 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_HeadVar__3_47;

#line 1701 "intermod.m"
    {
#line 1701 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__intermod_write_pred_decls__1701__1_3_p_0(((MR_Integer) transform_hlds__intermod__wrapper_arg_1), ((MR_Integer) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv1_HeadVar__3_47);
    }
#line 1701 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv1_HeadVar__3_47));
#line 1701 "intermod.m"
  }
#line 1701 "intermod.m"
}

#line 1649 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_pred_decls_4_p_0(
#line 1649 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1649 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1649 "intermod.m"
{
#line 1652 "intermod.m"
  while (MR_TRUE)
#line 1652 "intermod.m"
    {
#line 1652 "intermod.m"
      /* tailcall optimized into a loop */
#line 1652 "intermod.m"
      {
#line 1652 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1652 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1652 "intermod.m"
          {
#line 1652 "intermod.m"
          }
#line 1652 "intermod.m"
        else
#line 1653 "intermod.m"
          {
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__PredIds_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__PredInfo_13;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__Module_14;
#line 1653 "intermod.m"
            MR_String transform_hlds__intermod__Name_15;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_16;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__TVarSet_17;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__ExistQVars_18;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__ArgTypes_19;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__Context_20;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__Purity_21;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__ClassContext_22;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__GoalType_23;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__AppendVarNums_24;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__Procs_28;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__ProcIds_29;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__SortedProcIds_36;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__V_48_48;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__Module_63;
#line 1653 "intermod.m"
            MR_String transform_hlds__intermod__Name_64;
#line 1653 "intermod.m"
            MR_Integer transform_hlds__intermod__Arity_65;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__PredOrFunc_66;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__SymName_67;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__Markers_68;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__MarkerList_69;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecInfo_76;
#line 1653 "intermod.m"
            MR_Word transform_hlds__intermod__PragmaMap_77;
#line 1999 "intermod.m"
            MR_Word transform_hlds__intermod__V_83_83;
#line 1999 "intermod.m"
            MR_Word transform_hlds__intermod__V_84_84;
#line 1999 "intermod.m"
            MR_Word transform_hlds__intermod__V_85_85;
#line 2005 "intermod.m"
            MR_Word transform_hlds__intermod__TypeSpecPragmas_78;

#line 1654 "intermod.m"
            {
#line 1654 "intermod.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__PredId_10, &transform_hlds__intermod__PredInfo_13);
            }
#line 1655 "intermod.m"
            {
#line 1655 "intermod.m"
              transform_hlds__intermod__Module_14 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1656 "intermod.m"
            {
#line 1656 "intermod.m"
              transform_hlds__intermod__Name_15 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1657 "intermod.m"
            {
#line 1657 "intermod.m"
              transform_hlds__intermod__PredOrFunc_16 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1658 "intermod.m"
            {
#line 1658 "intermod.m"
              hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__TVarSet_17, &transform_hlds__intermod__ExistQVars_18, &transform_hlds__intermod__ArgTypes_19);
            }
#line 1659 "intermod.m"
            {
#line 1659 "intermod.m"
              hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Context_20);
            }
#line 1660 "intermod.m"
            {
#line 1660 "intermod.m"
              hlds__hlds_pred__pred_info_get_purity_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Purity_21);
            }
#line 1661 "intermod.m"
            {
#line 1661 "intermod.m"
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__ClassContext_22);
            }
#line 1662 "intermod.m"
            {
#line 1662 "intermod.m"
              hlds__hlds_pred__pred_info_get_goal_type_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__GoalType_23);
            }
#line 1670 "intermod.m"
#line 1670 "intermod.m"
            switch (MR_tag((MR_Word) transform_hlds__intermod__GoalType_23)) {
#line 1670 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1670 "intermod.m"
              case (MR_Integer) 0:
#line 1670 "intermod.m"
#line 1670 "intermod.m"
                switch (MR_unmkbody(transform_hlds__intermod__GoalType_23)) {
#line 1670 "intermod.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1670 "intermod.m"
                  case (MR_Integer) 0:
#line 1677 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1670 "intermod.m"
                    break;
#line 1670 "intermod.m"
                  case (MR_Integer) 1:
#line 1669 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 0;
#line 1670 "intermod.m"
                    break;
#line 1670 "intermod.m"
                  case (MR_Integer) 2:
#line 1674 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 0;
#line 1670 "intermod.m"
                    break;
#line 1670 "intermod.m"
                  case (MR_Integer) 3:
#line 1683 "intermod.m"
                    transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1670 "intermod.m"
                    break;
#line 1670 "intermod.m"
                }
#line 1670 "intermod.m"
                break;
#line 1670 "intermod.m"
              case (MR_Integer) 1:
#line 1680 "intermod.m"
                transform_hlds__intermod__AppendVarNums_24 = (MR_Integer) 1;
#line 1670 "intermod.m"
                break;
#line 1670 "intermod.m"
            }
#line 1689 "intermod.m"
#line 1689 "intermod.m"
            switch (transform_hlds__intermod__PredOrFunc_16) {
#line 1689 "intermod.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1689 "intermod.m"
              case (MR_Integer) 1:
#line 1690 "intermod.m"
                {
#line 1690 "intermod.m"
                  MR_Word transform_hlds__intermod__FuncArgTypes_26;
#line 1690 "intermod.m"
                  MR_Word transform_hlds__intermod__FuncRetType_27;
#line 1690 "intermod.m"
                  MR_Word transform_hlds__intermod__V_39_39;
#line 1691 "intermod.m"
                  MR_Box transform_hlds__intermod__conv0_FuncRetType_27;

#line 1691 "intermod.m"
                  {
#line 1691 "intermod.m"
                    parse_tree__prog_util__pred_args_to_func_args_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__intermod__ArgTypes_19, &transform_hlds__intermod__FuncArgTypes_26, &transform_hlds__intermod__conv0_FuncRetType_27);
                  }
#line 1691 "intermod.m"
                  transform_hlds__intermod__FuncRetType_27 = ((MR_Word) transform_hlds__intermod__conv0_FuncRetType_27);
#line 1692 "intermod.m"
                  {
#line 1692 "intermod.m"
                    transform_hlds__intermod__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1692 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_39_39, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1692 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_39_39, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1692 "intermod.m"
                  }
#line 1692 "intermod.m"
                  {
#line 1692 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_func_type_12_p_0(transform_hlds__intermod__TVarSet_17, transform_hlds__intermod__ExistQVars_18, transform_hlds__intermod__V_39_39, transform_hlds__intermod__FuncArgTypes_26, transform_hlds__intermod__FuncRetType_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__intermod__Purity_21, transform_hlds__intermod__ClassContext_22, transform_hlds__intermod__Context_20, transform_hlds__intermod__AppendVarNums_24);
                  }
#line 1690 "intermod.m"
                }
#line 1689 "intermod.m"
                break;
#line 1689 "intermod.m"
              case (MR_Integer) 0:
#line 1686 "intermod.m"
                {
#line 1686 "intermod.m"
                  MR_Word transform_hlds__intermod__V_42_42;

#line 1687 "intermod.m"
                  {
#line 1687 "intermod.m"
                    transform_hlds__intermod__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1687 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1687 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_42_42, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1687 "intermod.m"
                  }
#line 1687 "intermod.m"
                  {
#line 1687 "intermod.m"
                    parse_tree__mercury_to_mercury__mercury_output_pred_type_11_p_0(transform_hlds__intermod__TVarSet_17, transform_hlds__intermod__ExistQVars_18, transform_hlds__intermod__V_42_42, transform_hlds__intermod__ArgTypes_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), transform_hlds__intermod__Purity_21, transform_hlds__intermod__ClassContext_22, transform_hlds__intermod__Context_20, transform_hlds__intermod__AppendVarNums_24);
                  }
#line 1686 "intermod.m"
                }
#line 1689 "intermod.m"
                break;
#line 1689 "intermod.m"
            }
#line 1696 "intermod.m"
            {
#line 1696 "intermod.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Procs_28);
            }
#line 1697 "intermod.m"
            {
#line 1697 "intermod.m"
              transform_hlds__intermod__ProcIds_29 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1707 "intermod.m"
            {
#line 1707 "intermod.m"
              mercury__list__sort_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[25], transform_hlds__intermod__ProcIds_29, &transform_hlds__intermod__SortedProcIds_36);
            }
#line 1708 "intermod.m"
            {
#line 1708 "intermod.m"
              transform_hlds__intermod__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1708 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (transform_hlds__intermod__Module_14));
#line 1708 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 1) = ((MR_Box) (transform_hlds__intermod__Name_15));
#line 1708 "intermod.m"
            }
#line 1708 "intermod.m"
            {
#line 1708 "intermod.m"
              transform_hlds__intermod__intermod_write_pred_modes_6_p_0(transform_hlds__intermod__Procs_28, transform_hlds__intermod__V_48_48, transform_hlds__intermod__PredOrFunc_16, transform_hlds__intermod__SortedProcIds_36);
            }
#line 1969 "intermod.m"
            {
#line 1969 "intermod.m"
              transform_hlds__intermod__Module_63 = hlds__hlds_pred__pred_info_module_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1970 "intermod.m"
            {
#line 1970 "intermod.m"
              transform_hlds__intermod__Name_64 = hlds__hlds_pred__pred_info_name_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1971 "intermod.m"
            {
#line 1971 "intermod.m"
              transform_hlds__intermod__Arity_65 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1972 "intermod.m"
            {
#line 1972 "intermod.m"
              transform_hlds__intermod__PredOrFunc_66 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(transform_hlds__intermod__PredInfo_13);
            }
#line 1973 "intermod.m"
            {
#line 1973 "intermod.m"
              transform_hlds__intermod__SymName_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_67, 0) = ((MR_Box) (transform_hlds__intermod__Module_63));
#line 1973 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_67, 1) = ((MR_Box) (transform_hlds__intermod__Name_64));
#line 1973 "intermod.m"
            }
#line 1974 "intermod.m"
            {
#line 1974 "intermod.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_13, &transform_hlds__intermod__Markers_68);
            }
#line 1975 "intermod.m"
            {
#line 1975 "intermod.m"
              hlds__hlds_pred__markers_to_marker_list_2_p_0(transform_hlds__intermod__Markers_68, &transform_hlds__intermod__MarkerList_69);
            }
#line 1976 "intermod.m"
            {
#line 1976 "intermod.m"
              transform_hlds__intermod__intermod_write_pragma_markers_6_p_0(transform_hlds__intermod__SymName_67, transform_hlds__intermod__Arity_65, transform_hlds__intermod__MarkerList_69, transform_hlds__intermod__PredOrFunc_66);
            }
#line 1998 "intermod.m"
            {
#line 1998 "intermod.m"
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__TypeSpecInfo_76);
            }
#line 1999 "intermod.m"
            transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 0)));
#line 1999 "intermod.m"
            transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 1)));
#line 1999 "intermod.m"
            transform_hlds__intermod__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 2)));
#line 1999 "intermod.m"
            transform_hlds__intermod__PragmaMap_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeSpecInfo_76, (MR_Integer) 3)));
#line 2000 "intermod.m"
            {
#line 2000 "intermod.m"
              transform_hlds__intermod__succeeded = mercury__multi_map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, transform_hlds__intermod__PragmaMap_77, ((MR_Box) (transform_hlds__intermod__PredId_10)), &transform_hlds__intermod__TypeSpecPragmas_78);
            }
#line 2005 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 2001 "intermod.m"
              {
#line 2002 "intermod.m"
                MR_Box transform_hlds__intermod__conv2_STATE_VARIABLE_IO_51_51;

#line 2002 "intermod.m"
                {
#line 2002 "intermod.m"
                  mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__intermod_scalar_common_4[4], transform_hlds__intermod__TypeSpecPragmas_78, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv2_STATE_VARIABLE_IO_51_51);
                }
#line 2001 "intermod.m"
              }
#line 2005 "intermod.m"
            else
#line 2005 "intermod.m"
              {
#line 2005 "intermod.m"
              }
#line 1712 "intermod.m"
            /* direct tailcall eliminated */
#line 1712 "intermod.m"
            {
#line 1712 "intermod.m"
              MR_Word transform_hlds__intermod__HeadVar__2__tmp_copy_2 = transform_hlds__intermod__PredIds_11;

#line 1712 "intermod.m"
              transform_hlds__intermod__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2__tmp_copy_2;
#line 1712 "intermod.m"
            }
#line 1712 "intermod.m"
            continue;
#line 1653 "intermod.m"
          }
#line 1652 "intermod.m"
      }
#line 1652 "intermod.m"
      break;
#line 1652 "intermod.m"
    }
#line 1649 "intermod.m"
}

#line 1633 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instance_4_p_0(
#line 1633 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1633 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1633 "intermod.m"
{
#line 1636 "intermod.m"
  {
#line 1636 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__ClassId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 0)));
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__Context_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 2)));
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 3)));
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 4)));
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 5)));
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__Body_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 6)));
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 8)));
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__ClassName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_6, (MR_Integer) 0)));
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__ItemInstance_21;
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__Item_22;
#line 1636 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_23;
#line 1637 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 1)));
#line 1637 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 7)));
#line 1637 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_7, (MR_Integer) 9)));
#line 1639 "intermod.m"
    MR_Integer transform_hlds__intermod__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_6, (MR_Integer) 1)));
#line 1643 "intermod.m"
    MR_String transform_hlds__intermod__V_28_28;
#line 1643 "intermod.m"
    MR_String transform_hlds__intermod__V_29_29;
#line 1643 "intermod.m"
    MR_Word transform_hlds__intermod__V_30_30;
#line 1643 "intermod.m"
    MR_Word transform_hlds__intermod__V_31_31;

#line 1640 "intermod.m"
    {
#line 1640 "intermod.m"
      transform_hlds__intermod__ItemInstance_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1640 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 0) = ((MR_Box) (transform_hlds__intermod__ClassName_19));
#line 1640 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 1) = ((MR_Box) (transform_hlds__intermod__Types_13));
#line 1640 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 2) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_14));
#line 1640 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 3) = ((MR_Box) (transform_hlds__intermod__Constraints_12));
#line 1640 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 4) = ((MR_Box) (transform_hlds__intermod__Body_15));
#line 1640 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 5) = ((MR_Box) (transform_hlds__intermod__TVarSet_17));
#line 1640 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 6) = ((MR_Box) (transform_hlds__intermod__ModuleName_9));
#line 1640 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 7) = ((MR_Box) (transform_hlds__intermod__Context_11));
#line 1640 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstance_21, 8) = ((MR_Box) ((MR_Integer) -1));
#line 1640 "intermod.m"
    }
#line 1642 "intermod.m"
    {
#line 1642 "intermod.m"
      transform_hlds__intermod__Item_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1642 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1642 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_22, 1) = ((MR_Box) (transform_hlds__intermod__ItemInstance_21));
#line 1642 "intermod.m"
    }
#line 1643 "intermod.m"
    transform_hlds__intermod__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 0)));
#line 1643 "intermod.m"
    transform_hlds__intermod__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 1)));
#line 1643 "intermod.m"
    transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 2)));
#line 1643 "intermod.m"
    transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 3)));
#line 1643 "intermod.m"
    transform_hlds__intermod__MercInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 4)));
#line 1644 "intermod.m"
    {
#line 1644 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_23, transform_hlds__intermod__Item_22);
#line 1644 "intermod.m"
      return;
    }
#line 1636 "intermod.m"
  }
#line 1633 "intermod.m"
}

#line 1631 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0_1(
#line 1631 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1631 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1631 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1631 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1631 "intermod.m"
{
#line 1631 "intermod.m"
  {
#line 1631 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1631 "intermod.m"
    {
#line 1631 "intermod.m"
      transform_hlds__intermod__intermod_write_instance_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1631 "intermod.m"
      return;
    }
#line 1631 "intermod.m"
  }
#line 1631 "intermod.m"
}

#line 1627 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_instances_4_p_0(
#line 1627 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1627 "intermod.m"
  MR_Word transform_hlds__intermod__Instances_6)
#line 1627 "intermod.m"
{
#line 1630 "intermod.m"
  {
#line 1630 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1630 "intermod.m"
    MR_Word transform_hlds__intermod__V_10_10;
#line 1631 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_9;

#line 1631 "intermod.m"
    {
#line 1631 "intermod.m"
      transform_hlds__intermod__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[4]));
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_instances_4_p_0_1));
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1631 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_10_10, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1631 "intermod.m"
    }
#line 1631 "intermod.m"
    {
#line 1631 "intermod.m"
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__intermod_scalar_common_2[4], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_10_10, transform_hlds__intermod__Instances_6, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_9);
    }
#line 1630 "intermod.m"
  }
#line 1627 "intermod.m"
}

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3(
#line 1622 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1622 "intermod.m"
{
#line 1622 "intermod.m"
  {
#line 1622 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1622 "intermod.m"
    *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9));
#line 1622 "intermod.m"
    {
#line 1622 "intermod.m"
      ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr);
#line 1622 "intermod.m"
      return;
    }
#line 1622 "intermod.m"
  }
#line 1622 "intermod.m"
}

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4(
#line 1622 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1622 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1622 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1622 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1622 "intermod.m"
{
#line 1622 "intermod.m"
  {
#line 1622 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0_s transform_hlds__intermod__env;

#line 1622 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__wrapper_arg_1 = transform_hlds__intermod__wrapper_arg_1;
#line 1622 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont = transform_hlds__intermod__cont;
#line 1622 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1622 "intermod.m"
    {
#line 1622 "intermod.m"
      MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1622 "intermod.m"
      {
#line 1622 "intermod.m"
        transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), &(transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_4_env_0__conv1_HeadVar__3_9, transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_3, &transform_hlds__intermod__env);
      }
#line 1622 "intermod.m"
    }
#line 1622 "intermod.m"
  }
#line 1622 "intermod.m"
}

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1(
#line 1622 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1622 "intermod.m"
{
#line 1622 "intermod.m"
  {
#line 1622 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1622 "intermod.m"
    *((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9));
#line 1622 "intermod.m"
    {
#line 1622 "intermod.m"
      ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont)((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr);
#line 1622 "intermod.m"
      return;
    }
#line 1622 "intermod.m"
  }
#line 1622 "intermod.m"
}

#line 1622 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2(
#line 1622 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1622 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_1,
#line 1622 "intermod.m"
  MR_Cont transform_hlds__intermod__cont,
#line 1622 "intermod.m"
  void * transform_hlds__intermod__cont_env_ptr)
#line 1622 "intermod.m"
{
#line 1622 "intermod.m"
  {
#line 1622 "intermod.m"
    struct transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0_s transform_hlds__intermod__env;

#line 1622 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__wrapper_arg_1 = transform_hlds__intermod__wrapper_arg_1;
#line 1622 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont = transform_hlds__intermod__cont;
#line 1622 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__cont_env_ptr = transform_hlds__intermod__cont_env_ptr;
#line 1622 "intermod.m"
    {
#line 1622 "intermod.m"
      MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1622 "intermod.m"
      {
#line 1622 "intermod.m"
        transform_hlds__intermod__IntroducedFrom__pred__unmake_hlds_class_fundep_2__1622__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), &(transform_hlds__intermod__env).transform_hlds__intermod__unmake_hlds_class_fundep_3_f_0_2_env_0__conv0_HeadVar__3_9, transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_1, &transform_hlds__intermod__env);
      }
#line 1622 "intermod.m"
    }
#line 1622 "intermod.m"
  }
#line 1622 "intermod.m"
}

#line 1611 "intermod.m"
static MR_Word MR_CALL 
transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(
#line 1611 "intermod.m"
  MR_Word transform_hlds__intermod__TVars_4,
#line 1611 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1611 "intermod.m"
{
#line 1614 "intermod.m"
  {
#line 1614 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1614 "intermod.m"
    MR_Word transform_hlds__intermod__HeadVar__3_3;
#line 1614 "intermod.m"
    MR_Word transform_hlds__intermod__Domain0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1614 "intermod.m"
    MR_Word transform_hlds__intermod__Range0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1614 "intermod.m"
    MR_Word transform_hlds__intermod__Domain_7;
#line 1614 "intermod.m"
    MR_Word transform_hlds__intermod__Range_8;
#line 1614 "intermod.m"
    MR_Word transform_hlds__intermod__P_11;
#line 1614 "intermod.m"
    MR_Word transform_hlds__intermod__P_21;

#line 1622 "intermod.m"
    {
#line 1622 "intermod.m"
      transform_hlds__intermod__P_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[4]));
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_2));
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 3) = ((MR_Box) (transform_hlds__intermod__TVars_4));
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_11, 4) = ((MR_Box) (transform_hlds__intermod__Domain0_5));
#line 1622 "intermod.m"
    }
#line 1621 "intermod.m"
    {
#line 1621 "intermod.m"
      transform_hlds__intermod__Domain_7 = mercury__solutions__solutions_1_f_1((MR_Word) &transform_hlds__intermod_scalar_common_1[12], transform_hlds__intermod__P_11);
    }
#line 1622 "intermod.m"
    {
#line 1622 "intermod.m"
      transform_hlds__intermod__P_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[4]));
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 1) = ((MR_Box) (transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0_4));
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 3) = ((MR_Box) (transform_hlds__intermod__TVars_4));
#line 1622 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__P_21, 4) = ((MR_Box) (transform_hlds__intermod__Range0_6));
#line 1622 "intermod.m"
    }
#line 1621 "intermod.m"
    {
#line 1621 "intermod.m"
      transform_hlds__intermod__Range_8 = mercury__solutions__solutions_1_f_1((MR_Word) &transform_hlds__intermod_scalar_common_1[12], transform_hlds__intermod__P_21);
    }
#line 1614 "intermod.m"
    {
#line 1614 "intermod.m"
      transform_hlds__intermod__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1614 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, 0) = ((MR_Box) (transform_hlds__intermod__Domain_7));
#line 1614 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__3_3, 1) = ((MR_Box) (transform_hlds__intermod__Range_8));
#line 1614 "intermod.m"
    }
#line 1614 "intermod.m"
    return transform_hlds__intermod__HeadVar__3_3;
#line 1614 "intermod.m"
  }
#line 1611 "intermod.m"
}

#line 1601 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0_1(
#line 1601 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1601 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 1601 "intermod.m"
{
#line 1601 "intermod.m"
  {
#line 1601 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 1601 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1601 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__3_3;

#line 1601 "intermod.m"
    {
#line 1601 "intermod.m"
      transform_hlds__intermod__conv0_HeadVar__3_3 = transform_hlds__intermod__unmake_hlds_class_fundep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 1601 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__3_3));
#line 1601 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 1601 "intermod.m"
  }
#line 1601 "intermod.m"
}

#line 1589 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_class_6_p_0(
#line 1589 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1589 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1589 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_9,
#line 1589 "intermod.m"
  MR_Word transform_hlds__intermod__ClassDefn_10)
#line 1589 "intermod.m"
{
#line 1592 "intermod.m"
  {
#line 1592 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1592 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 0)));
#line 1592 "intermod.m"
    MR_Word transform_hlds__intermod__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 1)));
#line 1592 "intermod.m"
    MR_Word transform_hlds__intermod__HLDSFunDeps_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 2)));
#line 1592 "intermod.m"
    MR_Word transform_hlds__intermod__TVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 4)));
#line 1592 "intermod.m"
    MR_Word transform_hlds__intermod__Interface_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 6)));
#line 1592 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 8)));
#line 1592 "intermod.m"
    MR_Word transform_hlds__intermod__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 9)));
#line 1592 "intermod.m"
    MR_Word transform_hlds__intermod__QualifiedClassName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_9, (MR_Integer) 0)));
#line 1593 "intermod.m"
    MR_Word transform_hlds__intermod___Ancestors_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 3)));
#line 1593 "intermod.m"
    MR_Word transform_hlds__intermod___Kinds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 5)));
#line 1593 "intermod.m"
    MR_Word transform_hlds__intermod___HLDSClassInterface_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassDefn_10, (MR_Integer) 7)));
#line 1596 "intermod.m"
    MR_Integer transform_hlds__intermod__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ClassId_9, (MR_Integer) 1)));
#line 1598 "intermod.m"
    MR_Word transform_hlds__intermod__V_42_42;
#line 1598 "intermod.m"
    MR_String transform_hlds__intermod__V_24_24;

#line 1598 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__QualifiedClassName_22)) == (MR_mktag((MR_Integer) 1)));
#line 1598 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1598 "intermod.m"
      {
#line 1598 "intermod.m"
        transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__QualifiedClassName_22, (MR_Integer) 0)));
#line 1598 "intermod.m"
        transform_hlds__intermod__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__QualifiedClassName_22, (MR_Integer) 1)));
#line 1598 "intermod.m"
        {
#line 1598 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_42_42);
        }
#line 1598 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1599 "intermod.m"
          {
#line 1599 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_12);
          }
#line 1598 "intermod.m"
      }
#line 1607 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1601 "intermod.m"
      {
#line 1601 "intermod.m"
        MR_Word transform_hlds__intermod__FunDeps_25;
#line 1601 "intermod.m"
        MR_Word transform_hlds__intermod__ItemTypeClass_26;
#line 1601 "intermod.m"
        MR_Word transform_hlds__intermod__Item_27;
#line 1601 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_28;
#line 1601 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 1605 "intermod.m"
        MR_String transform_hlds__intermod__V_34_34;
#line 1605 "intermod.m"
        MR_String transform_hlds__intermod__V_35_35;
#line 1605 "intermod.m"
        MR_Word transform_hlds__intermod__V_36_36;
#line 1605 "intermod.m"
        MR_Word transform_hlds__intermod__V_37_37;

#line 1601 "intermod.m"
        {
#line 1601 "intermod.m"
          transform_hlds__intermod__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1601 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_5[3]));
#line 1601 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_class_6_p_0_1));
#line 1601 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1601 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_31_31, 3) = ((MR_Box) (transform_hlds__intermod__TVars_16));
#line 1601 "intermod.m"
        }
#line 1601 "intermod.m"
        {
#line 1601 "intermod.m"
          transform_hlds__intermod__FunDeps_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, transform_hlds__intermod__V_31_31, transform_hlds__intermod__HLDSFunDeps_14);
        }
#line 1602 "intermod.m"
        {
#line 1602 "intermod.m"
          transform_hlds__intermod__ItemTypeClass_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 1602 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 0) = ((MR_Box) (transform_hlds__intermod__QualifiedClassName_22));
#line 1602 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 1) = ((MR_Box) (transform_hlds__intermod__TVars_16));
#line 1602 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 2) = ((MR_Box) (transform_hlds__intermod__Constraints_13));
#line 1602 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 3) = ((MR_Box) (transform_hlds__intermod__FunDeps_25));
#line 1602 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 4) = ((MR_Box) (transform_hlds__intermod__Interface_18));
#line 1602 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 5) = ((MR_Box) (transform_hlds__intermod__TVarSet_20));
#line 1602 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 6) = ((MR_Box) (transform_hlds__intermod__Context_21));
#line 1602 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemTypeClass_26, 7) = ((MR_Box) ((MR_Integer) -1));
#line 1602 "intermod.m"
        }
#line 1604 "intermod.m"
        {
#line 1604 "intermod.m"
          transform_hlds__intermod__Item_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1604 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1604 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_27, 1) = ((MR_Box) (transform_hlds__intermod__ItemTypeClass_26));
#line 1604 "intermod.m"
        }
#line 1605 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1605 "intermod.m"
        transform_hlds__intermod__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1605 "intermod.m"
        transform_hlds__intermod__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1605 "intermod.m"
        transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1605 "intermod.m"
        transform_hlds__intermod__MercInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1606 "intermod.m"
        {
#line 1606 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_28, transform_hlds__intermod__Item_27);
#line 1606 "intermod.m"
          return;
        }
#line 1601 "intermod.m"
      }
#line 1607 "intermod.m"
    else
#line 1607 "intermod.m"
      {
#line 1607 "intermod.m"
      }
#line 1592 "intermod.m"
  }
#line 1589 "intermod.m"
}

#line 1587 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0_1(
#line 1587 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1587 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1587 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1587 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1587 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1587 "intermod.m"
{
#line 1587 "intermod.m"
  {
#line 1587 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1587 "intermod.m"
    {
#line 1587 "intermod.m"
      transform_hlds__intermod__intermod_write_class_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
#line 1587 "intermod.m"
      return;
    }
#line 1587 "intermod.m"
  }
#line 1587 "intermod.m"
}

#line 1581 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_classes_4_p_0(
#line 1581 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1581 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1581 "intermod.m"
{
#line 1584 "intermod.m"
  {
#line 1584 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1584 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1584 "intermod.m"
    MR_Word transform_hlds__intermod__Classes_9;
#line 1584 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12;
#line 1587 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_11;

#line 1585 "intermod.m"
    {
#line 1585 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1586 "intermod.m"
    {
#line 1586 "intermod.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Classes_9);
    }
#line 1587 "intermod.m"
    {
#line 1587 "intermod.m"
      transform_hlds__intermod__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1587 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[2]));
#line 1587 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_classes_4_p_0_1));
#line 1587 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1587 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1587 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1587 "intermod.m"
    }
#line 1587 "intermod.m"
    {
#line 1587 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_12_12, transform_hlds__intermod__Classes_9, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_11);
    }
#line 1584 "intermod.m"
  }
#line 1581 "intermod.m"
}

#line 1554 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_inst_6_p_0(
#line 1554 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1554 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1554 "intermod.m"
  MR_Word transform_hlds__intermod__InstId_9,
#line 1554 "intermod.m"
  MR_Word transform_hlds__intermod__InstDefn_10)
#line 1554 "intermod.m"
{
#line 1557 "intermod.m"
  {
#line 1557 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1557 "intermod.m"
    MR_Word transform_hlds__intermod__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstId_9, (MR_Integer) 0)));
#line 1557 "intermod.m"
    MR_Word transform_hlds__intermod__Varset_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 0)));
#line 1557 "intermod.m"
    MR_Word transform_hlds__intermod__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 1)));
#line 1557 "intermod.m"
    MR_Word transform_hlds__intermod__Body_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 2)));
#line 1557 "intermod.m"
    MR_Word transform_hlds__intermod__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 4)));
#line 1557 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 5)));
#line 1558 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstId_9, (MR_Integer) 1)));
#line 1559 "intermod.m"
    MR_Word transform_hlds__intermod___MaybeMatchingTypeCtors_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstDefn_10, (MR_Integer) 3)));
#line 1562 "intermod.m"
    MR_Word transform_hlds__intermod__V_34_34;
#line 1562 "intermod.m"
    MR_String transform_hlds__intermod__V_20_20;

#line 1562 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__SymName_12)) == (MR_mktag((MR_Integer) 1)));
#line 1562 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1562 "intermod.m"
      {
#line 1562 "intermod.m"
        transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 0)));
#line 1562 "intermod.m"
        transform_hlds__intermod__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 1)));
#line 1562 "intermod.m"
        {
#line 1562 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_34_34);
        }
#line 1562 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1563 "intermod.m"
          {
#line 1563 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_19);
          }
#line 1562 "intermod.m"
      }
#line 1577 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1571 "intermod.m"
      {
#line 1571 "intermod.m"
        MR_Word transform_hlds__intermod__InstBody_22;
#line 1571 "intermod.m"
        MR_Word transform_hlds__intermod__ItemInstDefn_23;
#line 1571 "intermod.m"
        MR_Word transform_hlds__intermod__Item_24;
#line 1571 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_25;
#line 1575 "intermod.m"
        MR_String transform_hlds__intermod__V_30_30;
#line 1575 "intermod.m"
        MR_String transform_hlds__intermod__V_31_31;
#line 1575 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;
#line 1575 "intermod.m"
        MR_Word transform_hlds__intermod__V_33_33;

#line 1568 "intermod.m"
        if ((transform_hlds__intermod__Body_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1570 "intermod.m"
          transform_hlds__intermod__InstBody_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1568 "intermod.m"
        else
#line 1566 "intermod.m"
          {
#line 1566 "intermod.m"
            MR_Word transform_hlds__intermod__Inst2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_16, (MR_Integer) 0)));

#line 1567 "intermod.m"
            {
#line 1567 "intermod.m"
              transform_hlds__intermod__InstBody_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1567 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__InstBody_22, 0) = ((MR_Box) (transform_hlds__intermod__Inst2_21));
#line 1567 "intermod.m"
            }
#line 1566 "intermod.m"
          }
#line 1572 "intermod.m"
        {
#line 1572 "intermod.m"
          transform_hlds__intermod__ItemInstDefn_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1572 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 0) = ((MR_Box) (transform_hlds__intermod__SymName_12));
#line 1572 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 1) = ((MR_Box) (transform_hlds__intermod__Args_15));
#line 1572 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 2) = ((MR_Box) (transform_hlds__intermod__InstBody_22));
#line 1572 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 3) = ((MR_Box) (transform_hlds__intermod__Varset_14));
#line 1572 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 4) = ((MR_Box) (transform_hlds__intermod__Context_18));
#line 1572 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemInstDefn_23, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1572 "intermod.m"
        }
#line 1574 "intermod.m"
        {
#line 1574 "intermod.m"
          transform_hlds__intermod__Item_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1574 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1574 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_24, 1) = ((MR_Box) (transform_hlds__intermod__ItemInstDefn_23));
#line 1574 "intermod.m"
        }
#line 1575 "intermod.m"
        transform_hlds__intermod__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1575 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1575 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1575 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1575 "intermod.m"
        transform_hlds__intermod__MercInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1576 "intermod.m"
        {
#line 1576 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_25, transform_hlds__intermod__Item_24);
#line 1576 "intermod.m"
          return;
        }
#line 1571 "intermod.m"
      }
#line 1577 "intermod.m"
    else
#line 1577 "intermod.m"
      {
#line 1577 "intermod.m"
      }
#line 1557 "intermod.m"
  }
#line 1554 "intermod.m"
}

#line 1552 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0_1(
#line 1552 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1552 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1552 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1552 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1552 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1552 "intermod.m"
{
#line 1552 "intermod.m"
  {
#line 1552 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1552 "intermod.m"
    {
#line 1552 "intermod.m"
      transform_hlds__intermod__intermod_write_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
#line 1552 "intermod.m"
      return;
    }
#line 1552 "intermod.m"
  }
#line 1552 "intermod.m"
}

#line 1545 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_insts_4_p_0(
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1545 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1545 "intermod.m"
{
#line 1548 "intermod.m"
  {
#line 1548 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1548 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1548 "intermod.m"
    MR_Word transform_hlds__intermod__Insts_9;
#line 1548 "intermod.m"
    MR_Word transform_hlds__intermod__UserInstTable_10;
#line 1548 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13;
#line 1552 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12;

#line 1549 "intermod.m"
    {
#line 1549 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1550 "intermod.m"
    {
#line 1550 "intermod.m"
      hlds__hlds_module__module_info_get_inst_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Insts_9);
    }
#line 1551 "intermod.m"
    {
#line 1551 "intermod.m"
      hlds__hlds_data__inst_table_get_user_insts_2_p_0(transform_hlds__intermod__Insts_9, &transform_hlds__intermod__UserInstTable_10);
    }
#line 1552 "intermod.m"
    {
#line 1552 "intermod.m"
      transform_hlds__intermod__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1552 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[1]));
#line 1552 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_insts_4_p_0_1));
#line 1552 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1552 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1552 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1552 "intermod.m"
    }
#line 1552 "intermod.m"
    {
#line 1552 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_inst_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_13_13, transform_hlds__intermod__UserInstTable_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12);
    }
#line 1548 "intermod.m"
  }
#line 1545 "intermod.m"
}

#line 1525 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_mode_6_p_0(
#line 1525 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_7,
#line 1525 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleName_8,
#line 1525 "intermod.m"
  MR_Word transform_hlds__intermod__ModeId_9,
#line 1525 "intermod.m"
  MR_Word transform_hlds__intermod__ModeDefn_10)
#line 1525 "intermod.m"
{
#line 1528 "intermod.m"
  {
#line 1528 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1528 "intermod.m"
    MR_Word transform_hlds__intermod__SymName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeId_9, (MR_Integer) 0)));
#line 1528 "intermod.m"
    MR_Word transform_hlds__intermod__Varset_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 0)));
#line 1528 "intermod.m"
    MR_Word transform_hlds__intermod__Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 1)));
#line 1528 "intermod.m"
    MR_Word transform_hlds__intermod__Mode_16;
#line 1528 "intermod.m"
    MR_Word transform_hlds__intermod__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 3)));
#line 1528 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 4)));
#line 1528 "intermod.m"
    MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeDefn_10, (MR_Integer) 2)));
#line 1529 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ModeId_9, (MR_Integer) 1)));
#line 1533 "intermod.m"
    MR_Word transform_hlds__intermod__V_33_33;
#line 1533 "intermod.m"
    MR_String transform_hlds__intermod__V_19_19;

#line 1530 "intermod.m"
    transform_hlds__intermod__Mode_16 = (MR_Word) transform_hlds__intermod__V_25_25;
#line 1533 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__SymName_12)) == (MR_mktag((MR_Integer) 1)));
#line 1533 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1533 "intermod.m"
      {
#line 1533 "intermod.m"
        transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 0)));
#line 1533 "intermod.m"
        transform_hlds__intermod__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__SymName_12, (MR_Integer) 1)));
#line 1533 "intermod.m"
        {
#line 1533 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_8, transform_hlds__intermod__V_33_33);
        }
#line 1533 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1534 "intermod.m"
          {
#line 1534 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_18);
          }
#line 1533 "intermod.m"
      }
#line 1541 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1537 "intermod.m"
      {
#line 1537 "intermod.m"
        MR_Word transform_hlds__intermod__ItemModeDefn_20;
#line 1537 "intermod.m"
        MR_Word transform_hlds__intermod__Item_21;
#line 1537 "intermod.m"
        MR_Word transform_hlds__intermod__MercInfo_22;
#line 1537 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26 = (MR_Word) transform_hlds__intermod__Mode_16;
#line 1539 "intermod.m"
        MR_String transform_hlds__intermod__V_29_29;
#line 1539 "intermod.m"
        MR_String transform_hlds__intermod__V_30_30;
#line 1539 "intermod.m"
        MR_Word transform_hlds__intermod__V_31_31;
#line 1539 "intermod.m"
        MR_Word transform_hlds__intermod__V_32_32;

#line 1536 "intermod.m"
        {
#line 1536 "intermod.m"
          transform_hlds__intermod__ItemModeDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 0) = ((MR_Box) (transform_hlds__intermod__SymName_12));
#line 1536 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 1) = ((MR_Box) (transform_hlds__intermod__Args_15));
#line 1536 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 2) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 1536 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 3) = ((MR_Box) (transform_hlds__intermod__Varset_14));
#line 1536 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 4) = ((MR_Box) (transform_hlds__intermod__Context_17));
#line 1536 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ItemModeDefn_20, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1536 "intermod.m"
        }
#line 1538 "intermod.m"
        {
#line 1538 "intermod.m"
          transform_hlds__intermod__Item_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1538 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__Item_21, 1) = ((MR_Box) (transform_hlds__intermod__ItemModeDefn_20));
#line 1538 "intermod.m"
        }
#line 1539 "intermod.m"
        transform_hlds__intermod__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 0)));
#line 1539 "intermod.m"
        transform_hlds__intermod__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 1)));
#line 1539 "intermod.m"
        transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 2)));
#line 1539 "intermod.m"
        transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 3)));
#line 1539 "intermod.m"
        transform_hlds__intermod__MercInfo_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_7, (MR_Integer) 4)));
#line 1540 "intermod.m"
        {
#line 1540 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_22, transform_hlds__intermod__Item_21);
#line 1540 "intermod.m"
          return;
        }
#line 1537 "intermod.m"
      }
#line 1541 "intermod.m"
    else
#line 1541 "intermod.m"
      {
#line 1541 "intermod.m"
      }
#line 1528 "intermod.m"
  }
#line 1525 "intermod.m"
}

#line 1523 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0_1(
#line 1523 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1523 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1523 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1523 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1523 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1523 "intermod.m"
{
#line 1523 "intermod.m"
  {
#line 1523 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1523 "intermod.m"
    {
#line 1523 "intermod.m"
      transform_hlds__intermod__intermod_write_mode_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
#line 1523 "intermod.m"
      return;
    }
#line 1523 "intermod.m"
  }
#line 1523 "intermod.m"
}

#line 1516 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modes_4_p_0(
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1516 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6)
#line 1516 "intermod.m"
{
#line 1519 "intermod.m"
  {
#line 1519 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1519 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 1519 "intermod.m"
    MR_Word transform_hlds__intermod__Modes_9;
#line 1519 "intermod.m"
    MR_Word transform_hlds__intermod__ModeDefns_10;
#line 1519 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13;
#line 1523 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12;

#line 1520 "intermod.m"
    {
#line 1520 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_8);
    }
#line 1521 "intermod.m"
    {
#line 1521 "intermod.m"
      hlds__hlds_module__module_info_get_mode_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__Modes_9);
    }
#line 1522 "intermod.m"
    {
#line 1522 "intermod.m"
      hlds__hlds_data__mode_table_get_mode_defns_2_p_0(transform_hlds__intermod__Modes_9, &transform_hlds__intermod__ModeDefns_10);
    }
#line 1523 "intermod.m"
    {
#line 1523 "intermod.m"
      transform_hlds__intermod__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1523 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_8[0]));
#line 1523 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 1) = ((MR_Box) (transform_hlds__intermod__intermod_write_modes_4_p_0_1));
#line 1523 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1523 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_5));
#line 1523 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_13_13, 4) = ((MR_Box) (transform_hlds__intermod__ModuleName_8));
#line 1523 "intermod.m"
    }
#line 1523 "intermod.m"
    {
#line 1523 "intermod.m"
      mercury__map__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mode_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_mode_defn_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_13_13, transform_hlds__intermod__ModeDefns_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_12);
    }
#line 1519 "intermod.m"
  }
#line 1516 "intermod.m"
}

#line 1499 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(
#line 1499 "intermod.m"
  MR_Word transform_hlds__intermod__ConsId_5,
#line 1499 "intermod.m"
  MR_Word transform_hlds__intermod__ConsTag_6,
#line 1499 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Values_0_14,
#line 1499 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Values_15)
#line 1499 "intermod.m"
{
#line 1503 "intermod.m"
  {
#line 1503 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ConsId_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1503 "intermod.m"
    MR_Word transform_hlds__intermod__SymName_10;
#line 1503 "intermod.m"
    MR_String transform_hlds__intermod__ForeignTag_13;
#line 1503 "intermod.m"
    MR_Word transform_hlds__intermod__V_24_24;
#line 1506 "intermod.m"
    MR_Word transform_hlds__intermod__SymName0_8;
#line 1504 "intermod.m"
    MR_Integer transform_hlds__intermod__V_16_16;
#line 1504 "intermod.m"
    MR_Word transform_hlds__intermod__V_9_9;
#line 1511 "intermod.m"
    MR_String transform_hlds__intermod__ForeignTag0_12;
#line 1509 "intermod.m"
    MR_Word transform_hlds__intermod___ForeignLang_11;

#line 1504 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1504 "intermod.m"
      {
#line 1504 "intermod.m"
        transform_hlds__intermod__SymName0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 1)));
#line 1504 "intermod.m"
        transform_hlds__intermod__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 2)));
#line 1504 "intermod.m"
        transform_hlds__intermod__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_5, (MR_Integer) 3)));
#line 1504 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_16_16 == (MR_Integer) 0);
#line 1504 "intermod.m"
      }
#line 1506 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1505 "intermod.m"
      transform_hlds__intermod__SymName_10 = transform_hlds__intermod__SymName0_8;
#line 1506 "intermod.m"
    else
#line 1507 "intermod.m"
      {
#line 1507 "intermod.m"
        {
#line 1507 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/4", (MR_String) "expected enumeration constant");
#line 1507 "intermod.m"
          return;
        }
#line 1507 "intermod.m"
      }
#line 1509 "intermod.m"
    transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__ConsTag_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1509 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1509 "intermod.m"
      {
#line 1509 "intermod.m"
        transform_hlds__intermod___ForeignLang_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 1)));
#line 1509 "intermod.m"
        transform_hlds__intermod__ForeignTag0_12 = ((MR_String) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsTag_6, (MR_Integer) 2)));
#line 1510 "intermod.m"
        transform_hlds__intermod__ForeignTag_13 = transform_hlds__intermod__ForeignTag0_12;
#line 1509 "intermod.m"
      }
#line 1509 "intermod.m"
    else
#line 1512 "intermod.m"
      {
#line 1512 "intermod.m"
        {
#line 1512 "intermod.m"
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_foreign_enum_value_pair\'/4", (MR_String) "expected foreign tag");
#line 1512 "intermod.m"
          return;
        }
#line 1512 "intermod.m"
      }
#line 1514 "intermod.m"
    {
#line 1514 "intermod.m"
      transform_hlds__intermod__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1514 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_24_24, 0) = ((MR_Box) (transform_hlds__intermod__SymName_10));
#line 1514 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_24_24, 1) = ((MR_Box) (transform_hlds__intermod__ForeignTag_13));
#line 1514 "intermod.m"
    }
#line 1514 "intermod.m"
    {
#line 1514 "intermod.m"
      MR_Word base;
#line 1514 "intermod.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1514 "intermod.m"
      *transform_hlds__intermod__STATE_VARIABLE_Values_15 = base;
#line 1514 "intermod.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_24_24));
#line 1514 "intermod.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Values_0_14));
#line 1514 "intermod.m"
    }
#line 1503 "intermod.m"
  }
#line 1499 "intermod.m"
}

#line 1485 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0_1(
#line 1485 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1485 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1485 "intermod.m"
{
#line 1485 "intermod.m"
  {
#line 1485 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1485 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15;

#line 1485 "intermod.m"
    {
#line 1485 "intermod.m"
      transform_hlds__intermod__gather_foreign_enum_value_pair_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15);
    }
#line 1485 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Values_15));
#line 1485 "intermod.m"
  }
#line 1485 "intermod.m"
}

#line 1360 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_type_4_p_0(
#line 1360 "intermod.m"
  MR_Word transform_hlds__intermod__OutInfo_5,
#line 1360 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 1360 "intermod.m"
{
#line 1363 "intermod.m"
  {
#line 1363 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1363 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 1363 "intermod.m"
    MR_Word transform_hlds__intermod__TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 1363 "intermod.m"
    MR_Word transform_hlds__intermod__VarSet_9;
#line 1363 "intermod.m"
    MR_Word transform_hlds__intermod__Args_10;
#line 1363 "intermod.m"
    MR_Word transform_hlds__intermod__Body_11;
#line 1363 "intermod.m"
    MR_Word transform_hlds__intermod__Context_12;
#line 1363 "intermod.m"
    MR_Word transform_hlds__intermod__Name_13;
#line 1363 "intermod.m"
    MR_Word transform_hlds__intermod__TypeBody_24;
#line 1363 "intermod.m"
    MR_Word transform_hlds__intermod__MainItemTypeDefn_29;
#line 1363 "intermod.m"
    MR_Word transform_hlds__intermod__MainItem_30;
#line 1363 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_31;
#line 1368 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_14;
#line 1391 "intermod.m"
    MR_String transform_hlds__intermod__V_122_122;
#line 1391 "intermod.m"
    MR_String transform_hlds__intermod__V_123_123;
#line 1391 "intermod.m"
    MR_Word transform_hlds__intermod__V_124_124;
#line 1391 "intermod.m"
    MR_Word transform_hlds__intermod__V_125_125;
#line 1465 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL_33;
#line 1465 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC_34;
#line 1465 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava_35;
#line 1465 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp_36;
#line 1465 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang_37;
#line 1396 "intermod.m"
    MR_Word transform_hlds__intermod__ForeignTypeBody_32;
#line 1469 "intermod.m"
    MR_Word transform_hlds__intermod__ReservedTag_68;
#line 1469 "intermod.m"
    MR_Word transform_hlds__intermod__V_134_134;
#line 1469 "intermod.m"
    MR_Word transform_hlds__intermod__V_135_135;
#line 1469 "intermod.m"
    MR_Word transform_hlds__intermod__V_136_136;
#line 1469 "intermod.m"
    MR_Word transform_hlds__intermod__V_137_137;
#line 1469 "intermod.m"
    MR_Word transform_hlds__intermod__V_138_138;
#line 1469 "intermod.m"
    MR_Word transform_hlds__intermod__V_139_139;
#line 1469 "intermod.m"
    MR_Word transform_hlds__intermod__V_140_140;
#line 1469 "intermod.m"
    MR_Word transform_hlds__intermod__V_141_141;
#line 1495 "intermod.m"
    MR_Word transform_hlds__intermod__ConsTagVals_72;
#line 1495 "intermod.m"
    MR_Word transform_hlds__intermod__Lang_80;
#line 1482 "intermod.m"
    MR_Word transform_hlds__intermod__DuTypeKind_74;
#line 1482 "intermod.m"
    MR_Word transform_hlds__intermod__V_71_71;
#line 1482 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73;
#line 1482 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75;
#line 1482 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76;
#line 1482 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77;
#line 1482 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78;
#line 1482 "intermod.m"
    MR_Word transform_hlds__intermod__V_79_79;

#line 1364 "intermod.m"
    {
#line 1364 "intermod.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__VarSet_9);
    }
#line 1365 "intermod.m"
    {
#line 1365 "intermod.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Args_10);
    }
#line 1366 "intermod.m"
    {
#line 1366 "intermod.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Body_11);
    }
#line 1367 "intermod.m"
    {
#line 1367 "intermod.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(transform_hlds__intermod__TypeDefn_7, &transform_hlds__intermod__Context_12);
    }
#line 1368 "intermod.m"
    transform_hlds__intermod__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 0)));
#line 1368 "intermod.m"
    transform_hlds__intermod___Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_6, (MR_Integer) 1)));
#line 1375 "intermod.m"
#line 1375 "intermod.m"
    switch (MR_tag((MR_Word) transform_hlds__intermod__Body_11)) {
#line 1375 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1375 "intermod.m"
      case (MR_Integer) 0:
#line 1382 "intermod.m"
        {
#line 1383 "intermod.m"
          transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(2), &transform_hlds__intermod_scalar_common_7[0]);
#line 1382 "intermod.m"
        }
#line 1375 "intermod.m"
        break;
#line 1375 "intermod.m"
      case (MR_Integer) 1:
#line 1372 "intermod.m"
        {
#line 1372 "intermod.m"
          MR_Word transform_hlds__intermod__Ctors_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1372 "intermod.m"
          MR_Word transform_hlds__intermod__MaybeUserEqComp_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1372 "intermod.m"
          MR_Word transform_hlds__intermod__MaybeDirectArgCtors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1370 "intermod.m"
          MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1370 "intermod.m"
          MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1370 "intermod.m"
          MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1370 "intermod.m"
          MR_Word transform_hlds__intermod__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1370 "intermod.m"
          MR_Word transform_hlds__intermod__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1370 "intermod.m"
          MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));

#line 1373 "intermod.m"
          {
#line 1373 "intermod.m"
            transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1373 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__Ctors_15));
#line 1373 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_19));
#line 1373 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeBody_24, 2) = ((MR_Box) (transform_hlds__intermod__MaybeDirectArgCtors_20));
#line 1373 "intermod.m"
          }
#line 1372 "intermod.m"
        }
#line 1375 "intermod.m"
        break;
#line 1375 "intermod.m"
      case (MR_Integer) 2:
#line 1376 "intermod.m"
        {
#line 1376 "intermod.m"
          MR_Word transform_hlds__intermod__EqvType_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__Body_11, (MR_Integer) 0)));

#line 1377 "intermod.m"
          {
#line 1377 "intermod.m"
            transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "intermod.m"
            MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__EqvType_25));
#line 1377 "intermod.m"
          }
#line 1376 "intermod.m"
        }
#line 1375 "intermod.m"
        break;
#line 1375 "intermod.m"
      case (MR_Integer) 3:
#line 1375 "intermod.m"
#line 1375 "intermod.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 0)))) {
#line 1375 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1375 "intermod.m"
          case (MR_Integer) 0:
#line 1385 "intermod.m"
            {
#line 1385 "intermod.m"
              MR_Word transform_hlds__intermod__SolverTypeDetails_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1385 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeUserEqComp_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 2)));

#line 1386 "intermod.m"
              {
#line 1386 "intermod.m"
                transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1386 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 1) = ((MR_Box) (transform_hlds__intermod__SolverTypeDetails_28));
#line 1386 "intermod.m"
                MR_hl_field(MR_mktag(3), transform_hlds__intermod__TypeBody_24, 2) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_121));
#line 1386 "intermod.m"
              }
#line 1385 "intermod.m"
            }
#line 1375 "intermod.m"
            break;
#line 1375 "intermod.m"
          case (MR_Integer) 1:
#line 1379 "intermod.m"
            {
#line 1379 "intermod.m"
              MR_Word transform_hlds__intermod__Details_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Body_11, (MR_Integer) 1)));

#line 1380 "intermod.m"
              {
#line 1380 "intermod.m"
                transform_hlds__intermod__TypeBody_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "intermod.m"
                MR_hl_field(MR_mktag(2), transform_hlds__intermod__TypeBody_24, 0) = ((MR_Box) (transform_hlds__intermod__Details_26));
#line 1380 "intermod.m"
              }
#line 1379 "intermod.m"
            }
#line 1375 "intermod.m"
            break;
#line 1375 "intermod.m"
        }
#line 1375 "intermod.m"
        break;
#line 1375 "intermod.m"
    }
#line 1388 "intermod.m"
    {
#line 1388 "intermod.m"
      transform_hlds__intermod__MainItemTypeDefn_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1388 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1388 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1388 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 2) = ((MR_Box) (transform_hlds__intermod__TypeBody_24));
#line 1388 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1388 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1388 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__MainItemTypeDefn_29, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1388 "intermod.m"
    }
#line 1390 "intermod.m"
    transform_hlds__intermod__MainItem_30 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) transform_hlds__intermod__MainItemTypeDefn_29);
#line 1391 "intermod.m"
    transform_hlds__intermod__V_122_122 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 0)));
#line 1391 "intermod.m"
    transform_hlds__intermod__V_123_123 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 1)));
#line 1391 "intermod.m"
    transform_hlds__intermod__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 2)));
#line 1391 "intermod.m"
    transform_hlds__intermod__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 3)));
#line 1391 "intermod.m"
    transform_hlds__intermod__MercInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_5, (MR_Integer) 4)));
#line 1392 "intermod.m"
    {
#line 1392 "intermod.m"
      parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__MainItem_30);
    }
#line 1395 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1))))
#line 1395 "intermod.m"
      {
#line 1395 "intermod.m"
        MR_Word transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1395 "intermod.m"
        MR_Word transform_hlds__intermod__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1395 "intermod.m"
        MR_Word transform_hlds__intermod__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1395 "intermod.m"
        MR_Word transform_hlds__intermod__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1395 "intermod.m"
        MR_Word transform_hlds__intermod__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1395 "intermod.m"
        MR_Word transform_hlds__intermod__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1395 "intermod.m"
        MR_Word transform_hlds__intermod__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1395 "intermod.m"
        MR_Word transform_hlds__intermod__V_132_132 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1395 "intermod.m"
        MR_Word transform_hlds__intermod__V_133_133 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1395 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_91_91)) == (MR_mktag((MR_Integer) 1)));
#line 1395 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1395 "intermod.m"
          transform_hlds__intermod__ForeignTypeBody_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_91_91, (MR_Integer) 0)));
#line 1395 "intermod.m"
      }
#line 1395 "intermod.m"
    else
#line 1395 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 0))))
#line 1394 "intermod.m"
      {
#line 1394 "intermod.m"
        transform_hlds__intermod__ForeignTypeBody_32 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__Body_11), (MR_Integer) 0);
#line 1394 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1394 "intermod.m"
      }
#line 1395 "intermod.m"
    else
#line 1395 "intermod.m"
      transform_hlds__intermod__succeeded = MR_FALSE;
#line 1396 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1396 "intermod.m"
      {
#line 1397 "intermod.m"
        transform_hlds__intermod__MaybeIL_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 0)));
#line 1397 "intermod.m"
        transform_hlds__intermod__MaybeC_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 1)));
#line 1397 "intermod.m"
        transform_hlds__intermod__MaybeJava_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 2)));
#line 1397 "intermod.m"
        transform_hlds__intermod__MaybeCSharp_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 3)));
#line 1397 "intermod.m"
        transform_hlds__intermod__MaybeErlang_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody_32, (MR_Integer) 4)));
#line 1397 "intermod.m"
        transform_hlds__intermod__succeeded = MR_TRUE;
#line 1396 "intermod.m"
      }
#line 1465 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1412 "intermod.m"
      {
#line 1410 "intermod.m"
        if ((transform_hlds__intermod__MaybeIL_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1411 "intermod.m"
          {
#line 1411 "intermod.m"
          }
#line 1410 "intermod.m"
        else
#line 1401 "intermod.m"
          {
#line 1401 "intermod.m"
            MR_Word transform_hlds__intermod__DataIL_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeIL_33, (MR_Integer) 0)));
#line 1401 "intermod.m"
            MR_Word transform_hlds__intermod__ILForeignType_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 0)));
#line 1401 "intermod.m"
            MR_Word transform_hlds__intermod__ILMaybeUserEqComp_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 1)));
#line 1401 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsIL_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataIL_38, (MR_Integer) 2)));
#line 1401 "intermod.m"
            MR_Word transform_hlds__intermod__ILItemTypeDefn_42;
#line 1401 "intermod.m"
            MR_Word transform_hlds__intermod__ILItem_43;
#line 1401 "intermod.m"
            MR_Word transform_hlds__intermod__V_92_92;
#line 1401 "intermod.m"
            MR_Word transform_hlds__intermod__V_93_93 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__ILForeignType_39);

#line 1405 "intermod.m"
            {
#line 1405 "intermod.m"
              transform_hlds__intermod__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1405 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_92_92, 1) = ((MR_Box) (transform_hlds__intermod__V_93_93));
#line 1405 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_92_92, 2) = ((MR_Box) (transform_hlds__intermod__ILMaybeUserEqComp_40));
#line 1405 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_92_92, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsIL_41));
#line 1405 "intermod.m"
            }
#line 1404 "intermod.m"
            {
#line 1404 "intermod.m"
              transform_hlds__intermod__ILItemTypeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1404 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1404 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1404 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 2) = ((MR_Box) (transform_hlds__intermod__V_92_92));
#line 1404 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1404 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1404 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ILItemTypeDefn_42, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1404 "intermod.m"
            }
#line 1408 "intermod.m"
            transform_hlds__intermod__ILItem_43 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) transform_hlds__intermod__ILItemTypeDefn_42);
#line 1409 "intermod.m"
            {
#line 1409 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ILItem_43);
            }
#line 1401 "intermod.m"
          }
#line 1423 "intermod.m"
        if ((transform_hlds__intermod__MaybeC_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1424 "intermod.m"
          {
#line 1424 "intermod.m"
          }
#line 1423 "intermod.m"
        else
#line 1414 "intermod.m"
          {
#line 1414 "intermod.m"
            MR_Word transform_hlds__intermod__DataC_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeC_34, (MR_Integer) 0)));
#line 1414 "intermod.m"
            MR_Word transform_hlds__intermod__CForeignType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 0)));
#line 1414 "intermod.m"
            MR_Word transform_hlds__intermod__CMaybeUserEqComp_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 1)));
#line 1414 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsC_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataC_44, (MR_Integer) 2)));
#line 1414 "intermod.m"
            MR_Word transform_hlds__intermod__CItemTypeDefn_48;
#line 1414 "intermod.m"
            MR_Word transform_hlds__intermod__CItem_49;
#line 1414 "intermod.m"
            MR_Word transform_hlds__intermod__V_96_96;
#line 1414 "intermod.m"
            MR_Word transform_hlds__intermod__V_97_97;

#line 1418 "intermod.m"
            {
#line 1418 "intermod.m"
              transform_hlds__intermod__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "intermod.m"
              MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_97_97, 0) = ((MR_Box) (transform_hlds__intermod__CForeignType_45));
#line 1418 "intermod.m"
            }
#line 1418 "intermod.m"
            {
#line 1418 "intermod.m"
              transform_hlds__intermod__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_96_96, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1418 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_96_96, 1) = ((MR_Box) (transform_hlds__intermod__V_97_97));
#line 1418 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_96_96, 2) = ((MR_Box) (transform_hlds__intermod__CMaybeUserEqComp_46));
#line 1418 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_96_96, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsC_47));
#line 1418 "intermod.m"
            }
#line 1417 "intermod.m"
            {
#line 1417 "intermod.m"
              transform_hlds__intermod__CItemTypeDefn_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1417 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1417 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1417 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 2) = ((MR_Box) (transform_hlds__intermod__V_96_96));
#line 1417 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1417 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1417 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CItemTypeDefn_48, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1417 "intermod.m"
            }
#line 1421 "intermod.m"
            transform_hlds__intermod__CItem_49 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) transform_hlds__intermod__CItemTypeDefn_48);
#line 1422 "intermod.m"
            {
#line 1422 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__CItem_49);
            }
#line 1414 "intermod.m"
          }
#line 1436 "intermod.m"
        if ((transform_hlds__intermod__MaybeJava_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1437 "intermod.m"
          {
#line 1437 "intermod.m"
          }
#line 1436 "intermod.m"
        else
#line 1427 "intermod.m"
          {
#line 1427 "intermod.m"
            MR_Word transform_hlds__intermod__DataJava_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeJava_35, (MR_Integer) 0)));
#line 1427 "intermod.m"
            MR_Word transform_hlds__intermod__JavaForeignType_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 0)));
#line 1427 "intermod.m"
            MR_Word transform_hlds__intermod__JavaMaybeUserEqComp_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 1)));
#line 1427 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsJava_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataJava_50, (MR_Integer) 2)));
#line 1427 "intermod.m"
            MR_Word transform_hlds__intermod__JavaItemTypeDefn_54;
#line 1427 "intermod.m"
            MR_Word transform_hlds__intermod__JavaItem_55;
#line 1427 "intermod.m"
            MR_Word transform_hlds__intermod__V_100_100;
#line 1427 "intermod.m"
            MR_Word transform_hlds__intermod__V_101_101;

#line 1431 "intermod.m"
            {
#line 1431 "intermod.m"
              transform_hlds__intermod__V_101_101 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "intermod.m"
              MR_hl_field(MR_mktag(2), transform_hlds__intermod__V_101_101, 0) = ((MR_Box) (transform_hlds__intermod__JavaForeignType_51));
#line 1431 "intermod.m"
            }
#line 1431 "intermod.m"
            {
#line 1431 "intermod.m"
              transform_hlds__intermod__V_100_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_100_100, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1431 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_100_100, 1) = ((MR_Box) (transform_hlds__intermod__V_101_101));
#line 1431 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_100_100, 2) = ((MR_Box) (transform_hlds__intermod__JavaMaybeUserEqComp_52));
#line 1431 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_100_100, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsJava_53));
#line 1431 "intermod.m"
            }
#line 1430 "intermod.m"
            {
#line 1430 "intermod.m"
              transform_hlds__intermod__JavaItemTypeDefn_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1430 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1430 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1430 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 2) = ((MR_Box) (transform_hlds__intermod__V_100_100));
#line 1430 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1430 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1430 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__JavaItemTypeDefn_54, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1430 "intermod.m"
            }
#line 1434 "intermod.m"
            transform_hlds__intermod__JavaItem_55 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) transform_hlds__intermod__JavaItemTypeDefn_54);
#line 1435 "intermod.m"
            {
#line 1435 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__JavaItem_55);
            }
#line 1427 "intermod.m"
          }
#line 1449 "intermod.m"
        if ((transform_hlds__intermod__MaybeCSharp_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1450 "intermod.m"
          {
#line 1450 "intermod.m"
          }
#line 1449 "intermod.m"
        else
#line 1440 "intermod.m"
          {
#line 1440 "intermod.m"
            MR_Word transform_hlds__intermod__DataCSharp_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeCSharp_36, (MR_Integer) 0)));
#line 1440 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpForeignType_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 0)));
#line 1440 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpMaybeUserEqComp_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 1)));
#line 1440 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsCSharp_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataCSharp_56, (MR_Integer) 2)));
#line 1440 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpItemTypeDefn_60;
#line 1440 "intermod.m"
            MR_Word transform_hlds__intermod__CSharpItem_61;
#line 1440 "intermod.m"
            MR_Word transform_hlds__intermod__V_104_104;
#line 1440 "intermod.m"
            MR_Word transform_hlds__intermod__V_105_105;

#line 1444 "intermod.m"
            {
#line 1444 "intermod.m"
              transform_hlds__intermod__V_105_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_105_105, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1444 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_105_105, 1) = ((MR_Box) (transform_hlds__intermod__CSharpForeignType_57));
#line 1444 "intermod.m"
            }
#line 1444 "intermod.m"
            {
#line 1444 "intermod.m"
              transform_hlds__intermod__V_104_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1444 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_104_104, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1444 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_104_104, 1) = ((MR_Box) (transform_hlds__intermod__V_105_105));
#line 1444 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_104_104, 2) = ((MR_Box) (transform_hlds__intermod__CSharpMaybeUserEqComp_58));
#line 1444 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_104_104, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsCSharp_59));
#line 1444 "intermod.m"
            }
#line 1443 "intermod.m"
            {
#line 1443 "intermod.m"
              transform_hlds__intermod__CSharpItemTypeDefn_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1443 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1443 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1443 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 2) = ((MR_Box) (transform_hlds__intermod__V_104_104));
#line 1443 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1443 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1443 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__CSharpItemTypeDefn_60, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1443 "intermod.m"
            }
#line 1447 "intermod.m"
            transform_hlds__intermod__CSharpItem_61 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) transform_hlds__intermod__CSharpItemTypeDefn_60);
#line 1448 "intermod.m"
            {
#line 1448 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__CSharpItem_61);
            }
#line 1440 "intermod.m"
          }
#line 1462 "intermod.m"
        if ((transform_hlds__intermod__MaybeErlang_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1463 "intermod.m"
          {
#line 1463 "intermod.m"
          }
#line 1462 "intermod.m"
        else
#line 1453 "intermod.m"
          {
#line 1453 "intermod.m"
            MR_Word transform_hlds__intermod__DataErlang_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeErlang_37, (MR_Integer) 0)));
#line 1453 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangMaybeUserEqComp_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataErlang_62, (MR_Integer) 1)));
#line 1453 "intermod.m"
            MR_Word transform_hlds__intermod__AssertionsErlang_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__DataErlang_62, (MR_Integer) 2)));
#line 1453 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangItemTypeDefn_66;
#line 1453 "intermod.m"
            MR_Word transform_hlds__intermod__ErlangItem_67;
#line 1453 "intermod.m"
            MR_Word transform_hlds__intermod__V_108_108;
#line 1453 "intermod.m"
            MR_Word transform_hlds__intermod__V_109_109;

#line 1457 "intermod.m"
            {
#line 1457 "intermod.m"
              transform_hlds__intermod__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1457 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_109_109, 1) = NULL;
#line 1457 "intermod.m"
            }
#line 1457 "intermod.m"
            {
#line 1457 "intermod.m"
              transform_hlds__intermod__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1457 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1457 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 1) = ((MR_Box) (transform_hlds__intermod__V_109_109));
#line 1457 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 2) = ((MR_Box) (transform_hlds__intermod__ErlangMaybeUserEqComp_64));
#line 1457 "intermod.m"
              MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_108_108, 3) = ((MR_Box) (transform_hlds__intermod__AssertionsErlang_65));
#line 1457 "intermod.m"
            }
#line 1456 "intermod.m"
            {
#line 1456 "intermod.m"
              transform_hlds__intermod__ErlangItemTypeDefn_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1456 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 0) = ((MR_Box) (transform_hlds__intermod__Name_13));
#line 1456 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 1) = ((MR_Box) (transform_hlds__intermod__Args_10));
#line 1456 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 2) = ((MR_Box) (transform_hlds__intermod__V_108_108));
#line 1456 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 3) = ((MR_Box) (transform_hlds__intermod__VarSet_9));
#line 1456 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 4) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1456 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__ErlangItemTypeDefn_66, 5) = ((MR_Box) ((MR_Integer) -1));
#line 1456 "intermod.m"
            }
#line 1460 "intermod.m"
            transform_hlds__intermod__ErlangItem_67 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) transform_hlds__intermod__ErlangItemTypeDefn_66);
#line 1461 "intermod.m"
            {
#line 1461 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ErlangItem_67);
            }
#line 1453 "intermod.m"
          }
#line 1412 "intermod.m"
      }
#line 1465 "intermod.m"
    else
#line 1465 "intermod.m"
      {
#line 1465 "intermod.m"
      }
#line 1469 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1)));
#line 1469 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1469 "intermod.m"
      {
#line 1469 "intermod.m"
        transform_hlds__intermod__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1469 "intermod.m"
        transform_hlds__intermod__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1469 "intermod.m"
        transform_hlds__intermod__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1469 "intermod.m"
        transform_hlds__intermod__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1469 "intermod.m"
        transform_hlds__intermod__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1469 "intermod.m"
        transform_hlds__intermod__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1469 "intermod.m"
        transform_hlds__intermod__ReservedTag_68 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1469 "intermod.m"
        transform_hlds__intermod__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1469 "intermod.m"
        transform_hlds__intermod__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1470 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__ReservedTag_68 == (MR_Integer) 0);
#line 1469 "intermod.m"
      }
#line 1478 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1475 "intermod.m"
      {
#line 1475 "intermod.m"
        MR_Word transform_hlds__intermod__ReserveItemPragma_69;
#line 1475 "intermod.m"
        MR_Word transform_hlds__intermod__ReserveItem_70;
#line 1475 "intermod.m"
        MR_Word transform_hlds__intermod__V_112_112;

#line 1474 "intermod.m"
        {
#line 1474 "intermod.m"
          transform_hlds__intermod__V_112_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1474 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_112_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 1474 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__V_112_112, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 1474 "intermod.m"
        }
#line 1474 "intermod.m"
        {
#line 1474 "intermod.m"
          transform_hlds__intermod__ReserveItemPragma_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1474 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 0) = ((MR_Box) (transform_hlds__intermod__V_112_112));
#line 1474 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1474 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1474 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ReserveItemPragma_69, 3) = ((MR_Box) ((MR_Integer) -1));
#line 1474 "intermod.m"
        }
#line 1476 "intermod.m"
        {
#line 1476 "intermod.m"
          transform_hlds__intermod__ReserveItem_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1476 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ReserveItem_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1476 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ReserveItem_70, 1) = ((MR_Box) (transform_hlds__intermod__ReserveItemPragma_69));
#line 1476 "intermod.m"
        }
#line 1477 "intermod.m"
        {
#line 1477 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ReserveItem_70);
        }
#line 1475 "intermod.m"
      }
#line 1478 "intermod.m"
    else
#line 1478 "intermod.m"
      {
#line 1478 "intermod.m"
      }
#line 1482 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Body_11)) == (MR_mktag((MR_Integer) 1)));
#line 1482 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1482 "intermod.m"
      {
#line 1482 "intermod.m"
        transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 0)));
#line 1482 "intermod.m"
        transform_hlds__intermod__ConsTagVals_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 1)));
#line 1482 "intermod.m"
        transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 2)));
#line 1482 "intermod.m"
        transform_hlds__intermod__DuTypeKind_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 3)));
#line 1482 "intermod.m"
        transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 4)));
#line 1482 "intermod.m"
        transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 5)));
#line 1482 "intermod.m"
        transform_hlds__intermod__V_77_77 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1482 "intermod.m"
        transform_hlds__intermod__V_78_78 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1482 "intermod.m"
        transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Body_11, (MR_Integer) 7)));
#line 1483 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__DuTypeKind_74)) == (MR_mktag((MR_Integer) 1)));
#line 1483 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1483 "intermod.m"
          transform_hlds__intermod__Lang_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__DuTypeKind_74, (MR_Integer) 0)));
#line 1482 "intermod.m"
      }
#line 1495 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1486 "intermod.m"
      {
#line 1486 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignEnumVals_81;
#line 1486 "intermod.m"
        MR_Word transform_hlds__intermod__FEInfo_82;
#line 1486 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignPragma_83;
#line 1486 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignItemPragma_84;
#line 1486 "intermod.m"
        MR_Word transform_hlds__intermod__ForeignItem_85;
#line 1485 "intermod.m"
        MR_Box transform_hlds__intermod__conv1_ForeignEnumVals_81;

#line 1485 "intermod.m"
        {
#line 1485 "intermod.m"
          mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[11], (MR_Word) &transform_hlds__intermod_scalar_common_2[24], transform_hlds__intermod__ConsTagVals_72, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__intermod__conv1_ForeignEnumVals_81);
        }
#line 1485 "intermod.m"
        transform_hlds__intermod__ForeignEnumVals_81 = ((MR_Word) transform_hlds__intermod__conv1_ForeignEnumVals_81);
#line 1487 "intermod.m"
        {
#line 1487 "intermod.m"
          transform_hlds__intermod__FEInfo_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1487 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 0) = ((MR_Box) (transform_hlds__intermod__Lang_80));
#line 1487 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_6));
#line 1487 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__FEInfo_82, 2) = ((MR_Box) (transform_hlds__intermod__ForeignEnumVals_81));
#line 1487 "intermod.m"
        }
#line 1488 "intermod.m"
        {
#line 1488 "intermod.m"
          transform_hlds__intermod__ForeignPragma_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1488 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignPragma_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1488 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignPragma_83, 1) = ((MR_Box) (transform_hlds__intermod__FEInfo_82));
#line 1488 "intermod.m"
        }
#line 1491 "intermod.m"
        {
#line 1491 "intermod.m"
          transform_hlds__intermod__ForeignItemPragma_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1491 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 0) = ((MR_Box) (transform_hlds__intermod__ForeignPragma_83));
#line 1491 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1491 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 1491 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignItemPragma_84, 3) = ((MR_Box) ((MR_Integer) -1));
#line 1491 "intermod.m"
        }
#line 1493 "intermod.m"
        {
#line 1493 "intermod.m"
          transform_hlds__intermod__ForeignItem_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignItem_85, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1493 "intermod.m"
          MR_hl_field(MR_mktag(3), transform_hlds__intermod__ForeignItem_85, 1) = ((MR_Box) (transform_hlds__intermod__ForeignItemPragma_84));
#line 1493 "intermod.m"
        }
#line 1494 "intermod.m"
        {
#line 1494 "intermod.m"
          parse_tree__mercury_to_mercury__mercury_output_item_4_p_0(transform_hlds__intermod__MercInfo_31, transform_hlds__intermod__ForeignItem_85);
#line 1494 "intermod.m"
          return;
        }
#line 1486 "intermod.m"
      }
#line 1495 "intermod.m"
    else
#line 1495 "intermod.m"
      {
#line 1495 "intermod.m"
      }
#line 1363 "intermod.m"
  }
#line 1360 "intermod.m"
}

#line 1340 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_write_modules_3_p_0(
#line 1340 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1)
#line 1340 "intermod.m"
{
#line 1342 "intermod.m"
  while (MR_TRUE)
#line 1342 "intermod.m"
    {
#line 1342 "intermod.m"
      /* tailcall optimized into a loop */
#line 1342 "intermod.m"
      {
#line 1342 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded;

#line 1342 "intermod.m"
        if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1342 "intermod.m"
          {
#line 1342 "intermod.m"
          }
#line 1342 "intermod.m"
        else
#line 1343 "intermod.m"
          {
#line 1343 "intermod.m"
            MR_Word transform_hlds__intermod__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 1343 "intermod.m"
            MR_Word transform_hlds__intermod__Rest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));

#line 1344 "intermod.m"
            {
#line 1344 "intermod.m"
              parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__intermod__Module_7);
            }
#line 1348 "intermod.m"
            if ((transform_hlds__intermod__Rest_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1346 "intermod.m"
              {
#line 1347 "intermod.m"
                {
#line 1347 "intermod.m"
                  mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1347 "intermod.m"
                  return;
                }
#line 1346 "intermod.m"
              }
#line 1348 "intermod.m"
            else
#line 1349 "intermod.m"
              {
#line 1349 "intermod.m"
                MR_Word transform_hlds__intermod__Module_23;
#line 1349 "intermod.m"
                MR_Word transform_hlds__intermod__Rest_24;

#line 1350 "intermod.m"
                {
#line 1350 "intermod.m"
                  mercury__io__write_string_3_p_0((MR_String) ", ");
                }
#line 1343 "intermod.m"
                transform_hlds__intermod__Module_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Rest_8, (MR_Integer) 0)));
#line 1343 "intermod.m"
                transform_hlds__intermod__Rest_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Rest_8, (MR_Integer) 1)));
#line 1344 "intermod.m"
                {
#line 1344 "intermod.m"
                  parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__intermod__Module_23);
                }
#line 1348 "intermod.m"
                if ((transform_hlds__intermod__Rest_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1346 "intermod.m"
                  {
#line 1347 "intermod.m"
                    {
#line 1347 "intermod.m"
                      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 1347 "intermod.m"
                      return;
                    }
#line 1346 "intermod.m"
                  }
#line 1348 "intermod.m"
                else
#line 1349 "intermod.m"
                  {
#line 1350 "intermod.m"
                    {
#line 1350 "intermod.m"
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
#line 1351 "intermod.m"
                    /* direct tailcall eliminated */
#line 1351 "intermod.m"
                    {
#line 1351 "intermod.m"
                      MR_Word transform_hlds__intermod__HeadVar__1__tmp_copy_1 = transform_hlds__intermod__Rest_24;

#line 1351 "intermod.m"
                      transform_hlds__intermod__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1__tmp_copy_1;
#line 1351 "intermod.m"
                    }
#line 1351 "intermod.m"
                    continue;
#line 1349 "intermod.m"
                  }
#line 1349 "intermod.m"
              }
#line 1343 "intermod.m"
          }
#line 1342 "intermod.m"
      }
#line 1342 "intermod.m"
      break;
#line 1342 "intermod.m"
    }
#line 1340 "intermod.m"
}

#line 1328 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_2(
#line 1328 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1328 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1328 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1328 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1328 "intermod.m"
{
#line 1328 "intermod.m"
  {
#line 1328 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1328 "intermod.m"
    {
#line 1328 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__write_intermod_info_body__1328__1_3_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1328 "intermod.m"
      return;
    }
#line 1328 "intermod.m"
  }
#line 1328 "intermod.m"
}

#line 1358 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0_1(
#line 1358 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1358 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1358 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1358 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 1358 "intermod.m"
{
#line 1358 "intermod.m"
  {
#line 1358 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;

#line 1358 "intermod.m"
    {
#line 1358 "intermod.m"
      transform_hlds__intermod__intermod_write_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1));
#line 1358 "intermod.m"
      return;
    }
#line 1358 "intermod.m"
  }
#line 1358 "intermod.m"
}

#line 1285 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_body_3_p_0(
#line 1285 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4)
#line 1285 "intermod.m"
{
#line 1287 "intermod.m"
  {
#line 1287 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__Preds0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__Types_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__WriteHeader_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__Preds_15;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__PredDecls_16;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__Modules0_17;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__Modules_18;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_21;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfo0_22;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo0_23;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__MercInfo_24;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfo_25;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__OutInfoForPreds_26;
#line 1287 "intermod.m"
    MR_Word transform_hlds__intermod__V_80_80;
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 1288 "intermod.m"
    MR_Word transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 1311 "intermod.m"
    MR_String transform_hlds__intermod__V_57_57;
#line 1311 "intermod.m"
    MR_String transform_hlds__intermod__V_58_58;
#line 1311 "intermod.m"
    MR_Word transform_hlds__intermod__V_59_59;
#line 1311 "intermod.m"
    MR_Word transform_hlds__intermod__V_60_60;
#line 1313 "intermod.m"
    MR_String transform_hlds__intermod__V_61_61;
#line 1313 "intermod.m"
    MR_String transform_hlds__intermod__V_62_62;
#line 1313 "intermod.m"
    MR_Word transform_hlds__intermod__V_63_63;
#line 1313 "intermod.m"
    MR_Word transform_hlds__intermod__V_64_64;
#line 1313 "intermod.m"
    MR_Word transform_hlds__intermod__V_65_65;
#line 1358 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_STATE_VARIABLE_IO_41_41;
#line 1322 "intermod.m"
    MR_String transform_hlds__intermod__V_67_67;
#line 1322 "intermod.m"
    MR_Word transform_hlds__intermod__V_68_68;
#line 1322 "intermod.m"
    MR_Word transform_hlds__intermod__V_69_69;
#line 1322 "intermod.m"
    MR_Word transform_hlds__intermod__V_70_70;
#line 1322 "intermod.m"
    MR_String transform_hlds__intermod__V_66_66;

#line 1290 "intermod.m"
    {
#line 1290 "intermod.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_71_71, transform_hlds__intermod__Preds0_7, &transform_hlds__intermod__Preds_15);
    }
#line 1291 "intermod.m"
    {
#line 1291 "intermod.m"
      mercury__set__to_sorted_list_2_p_0(transform_hlds__intermod__TypeCtorInfo_71_71, transform_hlds__intermod__PredDecls0_8, &transform_hlds__intermod__PredDecls_16);
    }
#line 1293 "intermod.m"
    {
#line 1293 "intermod.m"
      hlds__hlds_module__module_info_get_imported_module_names_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__Modules0_17);
    }
#line 1294 "intermod.m"
    {
#line 1294 "intermod.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, transform_hlds__intermod__Modules0_17, &transform_hlds__intermod__Modules_18);
    }
#line 1301 "intermod.m"
    if ((transform_hlds__intermod__Modules_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1302 "intermod.m"
      {
#line 1302 "intermod.m"
      }
#line 1301 "intermod.m"
    else
#line 1296 "intermod.m"
      {
#line 1299 "intermod.m"
        {
#line 1299 "intermod.m"
          mercury__io__write_string_3_p_0((MR_String) ":- use_module ");
        }
#line 1300 "intermod.m"
        {
#line 1300 "intermod.m"
          transform_hlds__intermod__intermod_write_modules_3_p_0(transform_hlds__intermod__Modules_18);
        }
#line 1296 "intermod.m"
      }
#line 1305 "intermod.m"
    {
#line 1305 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__Globals_21);
    }
#line 1306 "intermod.m"
    {
#line 1306 "intermod.m"
      transform_hlds__intermod__OutInfo0_22 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(transform_hlds__intermod__Globals_21, (MR_Integer) 0);
    }
#line 1311 "intermod.m"
    transform_hlds__intermod__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 0)));
#line 1311 "intermod.m"
    transform_hlds__intermod__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 1)));
#line 1311 "intermod.m"
    transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 2)));
#line 1311 "intermod.m"
    transform_hlds__intermod__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 3)));
#line 1311 "intermod.m"
    transform_hlds__intermod__MercInfo0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 4)));
#line 1312 "intermod.m"
    {
#line 1312 "intermod.m"
      transform_hlds__intermod__MercInfo_24 = parse_tree__mercury_to_mercury__merc_out_info_disable_line_numbers_1_f_0(transform_hlds__intermod__MercInfo0_23);
    }
#line 1313 "intermod.m"
    transform_hlds__intermod__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 0)));
#line 1313 "intermod.m"
    transform_hlds__intermod__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 1)));
#line 1313 "intermod.m"
    transform_hlds__intermod__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 2)));
#line 1313 "intermod.m"
    transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 3)));
#line 1313 "intermod.m"
    transform_hlds__intermod__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo0_22, (MR_Integer) 4)));
#line 1313 "intermod.m"
    {
#line 1313 "intermod.m"
      transform_hlds__intermod__OutInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1313 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 0) = ((MR_Box) (transform_hlds__intermod__V_61_61));
#line 1313 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 1) = ((MR_Box) (transform_hlds__intermod__V_62_62));
#line 1313 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 2) = ((MR_Box) (transform_hlds__intermod__V_63_63));
#line 1313 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 3) = ((MR_Box) (transform_hlds__intermod__V_64_64));
#line 1313 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, 4) = ((MR_Box) (transform_hlds__intermod__MercInfo_24));
#line 1313 "intermod.m"
    }
#line 1358 "intermod.m"
    {
#line 1358 "intermod.m"
      transform_hlds__intermod__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1358 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_6[2]));
#line 1358 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 1) = ((MR_Box) (transform_hlds__intermod__write_intermod_info_body_3_p_0_1));
#line 1358 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1358 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_80_80, 3) = ((MR_Box) (transform_hlds__intermod__OutInfo_25));
#line 1358 "intermod.m"
    }
#line 1358 "intermod.m"
    {
#line 1358 "intermod.m"
      mercury__list__foldl_4_p_2((MR_Word) &transform_hlds__intermod_scalar_common_2[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, transform_hlds__intermod__V_80_80, transform_hlds__intermod__Types_10, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv0_STATE_VARIABLE_IO_41_41);
    }
#line 1316 "intermod.m"
    {
#line 1316 "intermod.m"
      transform_hlds__intermod__intermod_write_insts_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1317 "intermod.m"
    {
#line 1317 "intermod.m"
      transform_hlds__intermod__intermod_write_modes_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1318 "intermod.m"
    {
#line 1318 "intermod.m"
      transform_hlds__intermod__intermod_write_classes_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__ModuleInfo_11);
    }
#line 1319 "intermod.m"
    {
#line 1319 "intermod.m"
      transform_hlds__intermod__intermod_write_instances_4_p_0(transform_hlds__intermod__OutInfo_25, transform_hlds__intermod__Instances_9);
    }
#line 1322 "intermod.m"
    transform_hlds__intermod__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 0)));
#line 1322 "intermod.m"
    transform_hlds__intermod__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 1)));
#line 1322 "intermod.m"
    transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 2)));
#line 1322 "intermod.m"
    transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 3)));
#line 1322 "intermod.m"
    transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfo_25, (MR_Integer) 4)));
#line 1322 "intermod.m"
    {
#line 1322 "intermod.m"
      transform_hlds__intermod__OutInfoForPreds_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1322 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 0) = ((MR_Box) ((MR_String) ""));
#line 1322 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 1) = ((MR_Box) (transform_hlds__intermod__V_67_67));
#line 1322 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 2) = ((MR_Box) (transform_hlds__intermod__V_68_68));
#line 1322 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 3) = ((MR_Box) (transform_hlds__intermod__V_69_69));
#line 1322 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__OutInfoForPreds_26, 4) = ((MR_Box) (transform_hlds__intermod__V_70_70));
#line 1322 "intermod.m"
    }
#line 1334 "intermod.m"
#line 1334 "intermod.m"
    switch (transform_hlds__intermod__WriteHeader_12) {
#line 1334 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1334 "intermod.m"
      case (MR_Integer) 0:
#line 1335 "intermod.m"
        {
#line 1335 "intermod.m"
        }
#line 1334 "intermod.m"
        break;
#line 1334 "intermod.m"
      case (MR_Integer) 1:
#line 1324 "intermod.m"
        {
#line 1324 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_73_73;
#line 1324 "intermod.m"
          MR_Word transform_hlds__intermod__ForeignImportsCord_27;
#line 1324 "intermod.m"
          MR_Word transform_hlds__intermod__ForeignImports_28;
#line 1328 "intermod.m"
          MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_IO_48_48;

#line 1325 "intermod.m"
          {
#line 1325 "intermod.m"
            hlds__hlds_module__module_info_get_foreign_import_modules_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__ForeignImportsCord_27);
          }
#line 13067 "transform_hlds.intermod.c"
          transform_hlds__intermod__TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 1326 "intermod.m"
          {
#line 1326 "intermod.m"
            transform_hlds__intermod__ForeignImports_28 = mercury__cord__list_1_f_0(transform_hlds__intermod__TypeCtorInfo_73_73, transform_hlds__intermod__ForeignImportsCord_27);
          }
#line 1328 "intermod.m"
          {
#line 1328 "intermod.m"
            mercury__list__foldl_4_p_2(transform_hlds__intermod__TypeCtorInfo_73_73, (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[23], transform_hlds__intermod__ForeignImports_28, ((MR_Box) ((MR_Integer) 0)), &transform_hlds__intermod__conv1_STATE_VARIABLE_IO_48_48);
          }
#line 1324 "intermod.m"
        }
#line 1334 "intermod.m"
        break;
#line 1334 "intermod.m"
    }
#line 1337 "intermod.m"
    {
#line 1337 "intermod.m"
      transform_hlds__intermod__intermod_write_pred_decls_4_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__PredDecls_16);
    }
#line 1338 "intermod.m"
    {
#line 1338 "intermod.m"
      transform_hlds__intermod__intermod_write_preds_5_p_0(transform_hlds__intermod__OutInfoForPreds_26, transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__Preds_15);
#line 1338 "intermod.m"
      return;
    }
#line 1287 "intermod.m"
  }
#line 1285 "intermod.m"
}

#line 1273 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_1(
#line 1273 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1273 "intermod.m"
{
#line 1273 "intermod.m"
  {
#line 1273 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1273 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0, 1);
#line 1273 "intermod.m"
  }
#line 1273 "intermod.m"
}

#line 1273 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_3(
#line 1273 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1273 "intermod.m"
{
#line 1273 "intermod.m"
  {
#line 1273 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1273 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23 = ((MR_Word) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23);
#line 1273 "intermod.m"
    {
#line 1273 "intermod.m"
      transform_hlds__intermod__write_intermod_info_3_p_0_2(transform_hlds__intermod__env_ptr);
#line 1273 "intermod.m"
      return;
    }
#line 1273 "intermod.m"
  }
#line 1273 "intermod.m"
}

#line 1273 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_2(
#line 1273 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1273 "intermod.m"
{
#line 1273 "intermod.m"
  {
#line 1273 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1273 "intermod.m"
    {
#line 1273 "intermod.m"
      MR_Word transform_hlds__intermod___TypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23, (MR_Integer) 0)));

#line 1273 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__V_23_23, (MR_Integer) 1)));
#line 1274 "intermod.m"
      {
#line 1274 "intermod.m"
        hlds__hlds_data__get_type_defn_status_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeDefn_14, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15);
      }
#line 1276 "intermod.m"
      if (((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1275 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1276 "intermod.m"
      else
#line 1276 "intermod.m"
      if (((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__Status_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 1276 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1276 "intermod.m"
      else
#line 1276 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_FALSE;
#line 1276 "intermod.m"
      if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1276 "intermod.m"
        {
#line 1276 "intermod.m"
          transform_hlds__intermod__write_intermod_info_3_p_0_1(transform_hlds__intermod__env_ptr);
#line 1276 "intermod.m"
          return;
        }
#line 1273 "intermod.m"
    }
#line 1273 "intermod.m"
  }
#line 1273 "intermod.m"
}

#line 1273 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0_4(
#line 1273 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 1273 "intermod.m"
{
#line 1273 "intermod.m"
  {
#line 1273 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 1273 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__commit_0) == 0)
#line 1273 "intermod.m"
      {
#line 1273 "intermod.m"
        {
#line 1273 "intermod.m"
          {
#line 1273 "intermod.m"
            mercury__list__member_2_p_1((MR_Word) &transform_hlds__intermod_scalar_common_2[2], &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__conv0_V_23_23, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12, transform_hlds__intermod__write_intermod_info_3_p_0_3, transform_hlds__intermod__env_ptr);
          }
#line 1273 "intermod.m"
        }
#line 1273 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_FALSE;
#line 1273 "intermod.m"
      }
#line 1273 "intermod.m"
    else
#line 1273 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = MR_TRUE;
#line 1273 "intermod.m"
  }
#line 1273 "intermod.m"
}

#line 1251 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_intermod_info_3_p_0(
#line 1251 "intermod.m"
  MR_Word transform_hlds__intermod__IntermodInfo_4)
#line 1251 "intermod.m"
{
#line 1251 "intermod.m"
  {
#line 1251 "intermod.m"
    struct transform_hlds__intermod__write_intermod_info_3_p_0_env_0_s transform_hlds__intermod__env;

#line 1253 "intermod.m"
    {
#line 1253 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleInfo_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 1253 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleName_7;
#line 1253 "intermod.m"
      MR_Word transform_hlds__intermod__Preds_8;
#line 1253 "intermod.m"
      MR_Word transform_hlds__intermod__PredDecls_9;
#line 1253 "intermod.m"
      MR_Word transform_hlds__intermod__Instances_10;
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 2166 "intermod.m"
      MR_Word transform_hlds__intermod__V_37_37;
#line 2166 "intermod.m"
      MR_Word transform_hlds__intermod__V_40_40;
#line 2166 "intermod.m"
      MR_Word transform_hlds__intermod__V_41_41;
#line 2166 "intermod.m"
      MR_Word transform_hlds__intermod__V_42_42;
#line 2166 "intermod.m"
      MR_Word transform_hlds__intermod__V_43_43;
#line 2166 "intermod.m"
      MR_Word transform_hlds__intermod__V_44_44;
#line 1267 "intermod.m"
      MR_Word transform_hlds__intermod__TypeCtorInfo_25_25;
#line 1267 "intermod.m"
      MR_Word transform_hlds__intermod__TypeTable_11;

#line 1255 "intermod.m"
      {
#line 1255 "intermod.m"
        hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__ModuleName_7);
      }
#line 1256 "intermod.m"
      {
#line 1256 "intermod.m"
        mercury__io__write_string_3_p_0((MR_String) ":- module ");
      }
#line 1257 "intermod.m"
      {
#line 1257 "intermod.m"
        parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(transform_hlds__intermod__ModuleName_7);
      }
#line 1258 "intermod.m"
      {
#line 1258 "intermod.m"
        mercury__io__write_string_3_p_0((MR_String) ".\n");
      }
#line 2166 "intermod.m"
      transform_hlds__intermod__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 0)));
#line 2166 "intermod.m"
      transform_hlds__intermod__Preds_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 1)));
#line 2166 "intermod.m"
      transform_hlds__intermod__PredDecls_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 2)));
#line 2166 "intermod.m"
      transform_hlds__intermod__Instances_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 3)));
#line 2166 "intermod.m"
      transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 4)));
#line 2166 "intermod.m"
      transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 5)));
#line 2166 "intermod.m"
      transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 6)));
#line 2166 "intermod.m"
      transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 7)));
#line 2166 "intermod.m"
      transform_hlds__intermod__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__IntermodInfo_4, (MR_Integer) 8)));
#line 13334 "transform_hlds.intermod.c"
      transform_hlds__intermod__TypeCtorInfo_25_25 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 1267 "intermod.m"
      {
#line 1267 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = mercury__set__is_empty_1_p_0(transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__Preds_8);
      }
#line 1267 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1267 "intermod.m"
        {
#line 1268 "intermod.m"
          {
#line 1268 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = mercury__set__is_empty_1_p_0(transform_hlds__intermod__TypeCtorInfo_25_25, transform_hlds__intermod__PredDecls_9);
          }
#line 1267 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1267 "intermod.m"
            {
#line 1269 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = (transform_hlds__intermod__Instances_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1267 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1267 "intermod.m"
                {
#line 1270 "intermod.m"
                  {
#line 1270 "intermod.m"
                    hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__ModuleInfo_6, &transform_hlds__intermod__TypeTable_11);
                  }
#line 1271 "intermod.m"
                  {
#line 1271 "intermod.m"
                    hlds__hlds_data__get_all_type_ctor_defns_2_p_0(transform_hlds__intermod__TypeTable_11, &(transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__TypeCtorsDefns_12);
                  }
#line 1273 "intermod.m"
                  {
#line 1273 "intermod.m"
                    transform_hlds__intermod__write_intermod_info_3_p_0_4(&transform_hlds__intermod__env);
                  }
#line 1272 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded);
#line 1267 "intermod.m"
                }
#line 1267 "intermod.m"
            }
#line 1267 "intermod.m"
        }
#line 1281 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__write_intermod_info_3_p_0_env_0__succeeded)
#line 1281 "intermod.m"
        {
#line 1281 "intermod.m"
        }
#line 1281 "intermod.m"
      else
#line 1282 "intermod.m"
        {
#line 1282 "intermod.m"
          transform_hlds__intermod__write_intermod_info_body_3_p_0(transform_hlds__intermod__IntermodInfo_4);
#line 1282 "intermod.m"
          return;
        }
#line 1253 "intermod.m"
    }
#line 1251 "intermod.m"
  }
#line 1251 "intermod.m"
}

#line 1219 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(
#line 1219 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1219 "intermod.m"
  MR_Word transform_hlds__intermod__SpecialId_2,
#line 1219 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_3,
#line 1219 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4,
#line 1219 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__5_5,
#line 1219 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1219 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7)
#line 1219 "intermod.m"
{
#line 1223 "intermod.m"
  {
#line 1223 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1223 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1223 "intermod.m"
      {
#line 1223 "intermod.m"
        *transform_hlds__intermod__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1223 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0_6;
#line 1223 "intermod.m"
      }
#line 1223 "intermod.m"
    else
#line 1225 "intermod.m"
      {
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__Pred0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__Pred_18;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__SpecialPreds_20;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__UnifyPredId_21;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__UnifyPredInfo_22;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__TVarSet_23;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__ExistQVars_24;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__ArgTypes_25;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__HeadTypeParams_26;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__Markers0_27;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__Markers_28;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__Context_29;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__UserEqPredId_30;
#line 1225 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34;
#line 1227 "intermod.m"
        MR_Box transform_hlds__intermod__conv0_UnifyPredId_21;
#line 633 "intermod.m"
        MR_Word transform_hlds__intermod__V_45_45;

#line 1226 "intermod.m"
        {
#line 1226 "intermod.m"
          hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_20);
        }
#line 1227 "intermod.m"
        {
#line 1227 "intermod.m"
          transform_hlds__intermod__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, 0) = ((MR_Box) (transform_hlds__intermod__SpecialId_2));
#line 1227 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_34_34, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_3));
#line 1227 "intermod.m"
        }
#line 1227 "intermod.m"
        {
#line 1227 "intermod.m"
          mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_20, ((MR_Box) (transform_hlds__intermod__V_34_34)), &transform_hlds__intermod__conv0_UnifyPredId_21);
        }
#line 1227 "intermod.m"
        transform_hlds__intermod__UnifyPredId_21 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_21);
#line 1228 "intermod.m"
        {
#line 1228 "intermod.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_21, &transform_hlds__intermod__UnifyPredInfo_22);
        }
#line 1229 "intermod.m"
        {
#line 1229 "intermod.m"
          hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__TVarSet_23, &transform_hlds__intermod__ExistQVars_24, &transform_hlds__intermod__ArgTypes_25);
        }
#line 1230 "intermod.m"
        {
#line 1230 "intermod.m"
          hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__HeadTypeParams_26);
        }
#line 1231 "intermod.m"
        {
#line 1231 "intermod.m"
          hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_27);
        }
#line 1232 "intermod.m"
        {
#line 1232 "intermod.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_27, &transform_hlds__intermod__Markers_28);
        }
#line 1233 "intermod.m"
        {
#line 1233 "intermod.m"
          hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_22, &transform_hlds__intermod__Context_29);
        }
#line 1234 "intermod.m"
        {
#line 1234 "intermod.m"
          hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_28, transform_hlds__intermod__TVarSet_23, transform_hlds__intermod__ExistQVars_24, transform_hlds__intermod__ArgTypes_25, transform_hlds__intermod__HeadTypeParams_26, transform_hlds__intermod__Context_29, transform_hlds__intermod__Pred0_17, &transform_hlds__intermod__Pred_18, &transform_hlds__intermod__UserEqPredId_30);
        }
#line 1225 "intermod.m"
        {
#line 1225 "intermod.m"
          MR_Word base;
#line 1225 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "intermod.m"
          *transform_hlds__intermod__HeadVar__5_5 = base;
#line 1225 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Pred_18));
#line 1225 "intermod.m"
        }
#line 633 "intermod.m"
        {
#line 633 "intermod.m"
          transform_hlds__intermod__V_45_45 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 633 "intermod.m"
        {
#line 633 "intermod.m"
          transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_30, transform_hlds__intermod__V_45_45);
        }
#line 638 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 637 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_7 = transform_hlds__intermod__STATE_VARIABLE_Info_0_6;
#line 638 "intermod.m"
        else
#line 639 "intermod.m"
          {
#line 639 "intermod.m"
            MR_Word transform_hlds__intermod__V_47_47;

#line 639 "intermod.m"
            {
#line 639 "intermod.m"
              transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_30, &transform_hlds__intermod__V_47_47, transform_hlds__intermod__STATE_VARIABLE_Info_0_6, transform_hlds__intermod__STATE_VARIABLE_Info_7);
            }
#line 639 "intermod.m"
          }
#line 1225 "intermod.m"
      }
#line 1223 "intermod.m"
  }
#line 1219 "intermod.m"
}

#line 1202 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(
#line 1202 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_1,
#line 1202 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_2,
#line 1202 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 1202 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__4_4,
#line 1202 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_5,
#line 1202 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_6)
#line 1202 "intermod.m"
{
#line 1206 "intermod.m"
  {
#line 1206 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 1206 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1206 "intermod.m"
      {
#line 1206 "intermod.m"
        *transform_hlds__intermod__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1206 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1206 "intermod.m"
      }
#line 1206 "intermod.m"
    else
#line 1206 "intermod.m"
      {
#line 1206 "intermod.m"
        MR_Word transform_hlds__intermod__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));

#line 1206 "intermod.m"
        if (((MR_tag((MR_Word) transform_hlds__intermod__V_35_35)) == (MR_mktag((MR_Integer) 1))))
#line 1207 "intermod.m"
          {
#line 1209 "intermod.m"
            *transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__3_3;
#line 1209 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_6 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1207 "intermod.m"
          }
#line 1206 "intermod.m"
        else
#line 1212 "intermod.m"
          {
#line 1212 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEq0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_35_35, (MR_Integer) 0)));
#line 1212 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserCompare0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_35_35, (MR_Integer) 1)));
#line 1212 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserEq_24;
#line 1212 "intermod.m"
            MR_Word transform_hlds__intermod__MaybeUserCompare_25;
#line 1212 "intermod.m"
            MR_Word transform_hlds__intermod__V_30_30;
#line 1212 "intermod.m"
            MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_32_32;

#line 1223 "intermod.m"
            if ((transform_hlds__intermod__MaybeUserEq0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1223 "intermod.m"
              {
#line 1223 "intermod.m"
                transform_hlds__intermod__MaybeUserEq_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1223 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_32_32 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 1223 "intermod.m"
              }
#line 1223 "intermod.m"
            else
#line 1225 "intermod.m"
              {
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__Pred0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq0_22, (MR_Integer) 0)));
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__Pred_46;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__SpecialPreds_48;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__UnifyPredId_49;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__UnifyPredInfo_50;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__TVarSet_51;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__ExistQVars_52;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__ArgTypes_53;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__HeadTypeParams_54;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__Markers0_55;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__Markers_56;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__Context_57;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__UserEqPredId_58;
#line 1225 "intermod.m"
                MR_Word transform_hlds__intermod__V_62_62;
#line 1227 "intermod.m"
                MR_Box transform_hlds__intermod__conv0_UnifyPredId_49;
#line 633 "intermod.m"
                MR_Word transform_hlds__intermod__V_73_73;

#line 1226 "intermod.m"
                {
#line 1226 "intermod.m"
                  hlds__hlds_module__module_info_get_special_pred_map_2_p_0(transform_hlds__intermod__ModuleInfo_1, &transform_hlds__intermod__SpecialPreds_48);
                }
#line 1227 "intermod.m"
                {
#line 1227 "intermod.m"
                  transform_hlds__intermod__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1227 "intermod.m"
                  MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_62_62, 1) = ((MR_Box) (transform_hlds__intermod__TypeCtor_2));
#line 1227 "intermod.m"
                }
#line 1227 "intermod.m"
                {
#line 1227 "intermod.m"
                  mercury__map__lookup_3_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[1], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__SpecialPreds_48, ((MR_Box) (transform_hlds__intermod__V_62_62)), &transform_hlds__intermod__conv0_UnifyPredId_49);
                }
#line 1227 "intermod.m"
                transform_hlds__intermod__UnifyPredId_49 = ((MR_Word) transform_hlds__intermod__conv0_UnifyPredId_49);
#line 1228 "intermod.m"
                {
#line 1228 "intermod.m"
                  hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__UnifyPredId_49, &transform_hlds__intermod__UnifyPredInfo_50);
                }
#line 1229 "intermod.m"
                {
#line 1229 "intermod.m"
                  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__TVarSet_51, &transform_hlds__intermod__ExistQVars_52, &transform_hlds__intermod__ArgTypes_53);
                }
#line 1230 "intermod.m"
                {
#line 1230 "intermod.m"
                  hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__HeadTypeParams_54);
                }
#line 1231 "intermod.m"
                {
#line 1231 "intermod.m"
                  hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers0_55);
                }
#line 1232 "intermod.m"
                {
#line 1232 "intermod.m"
                  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, transform_hlds__intermod__Markers0_55, &transform_hlds__intermod__Markers_56);
                }
#line 1233 "intermod.m"
                {
#line 1233 "intermod.m"
                  hlds__hlds_pred__pred_info_get_context_2_p_0(transform_hlds__intermod__UnifyPredInfo_50, &transform_hlds__intermod__Context_57);
                }
#line 1234 "intermod.m"
                {
#line 1234 "intermod.m"
                  hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_1, transform_hlds__intermod__Markers_56, transform_hlds__intermod__TVarSet_51, transform_hlds__intermod__ExistQVars_52, transform_hlds__intermod__ArgTypes_53, transform_hlds__intermod__HeadTypeParams_54, transform_hlds__intermod__Context_57, transform_hlds__intermod__Pred0_45, &transform_hlds__intermod__Pred_46, &transform_hlds__intermod__UserEqPredId_58);
                }
#line 1225 "intermod.m"
                {
#line 1225 "intermod.m"
                  transform_hlds__intermod__MaybeUserEq_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1225 "intermod.m"
                  MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeUserEq_24, 0) = ((MR_Box) (transform_hlds__intermod__Pred_46));
#line 1225 "intermod.m"
                }
#line 633 "intermod.m"
                {
#line 633 "intermod.m"
                  transform_hlds__intermod__V_73_73 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 633 "intermod.m"
                {
#line 633 "intermod.m"
                  transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__UserEqPredId_58, transform_hlds__intermod__V_73_73);
                }
#line 638 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 637 "intermod.m"
                  transform_hlds__intermod__STATE_VARIABLE_Info_32_32 = transform_hlds__intermod__STATE_VARIABLE_Info_0_5;
#line 638 "intermod.m"
                else
#line 639 "intermod.m"
                  {
#line 639 "intermod.m"
                    MR_Word transform_hlds__intermod__V_75_75;

#line 639 "intermod.m"
                    {
#line 639 "intermod.m"
                      transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__UserEqPredId_58, &transform_hlds__intermod__V_75_75, transform_hlds__intermod__STATE_VARIABLE_Info_0_5, &transform_hlds__intermod__STATE_VARIABLE_Info_32_32);
                    }
#line 639 "intermod.m"
                  }
#line 1225 "intermod.m"
              }
#line 1215 "intermod.m"
            {
#line 1215 "intermod.m"
              transform_hlds__intermod__resolve_user_special_pred_overloading_7_p_0(transform_hlds__intermod__ModuleInfo_1, (MR_Integer) 2, transform_hlds__intermod__TypeCtor_2, transform_hlds__intermod__MaybeUserCompare0_23, &transform_hlds__intermod__MaybeUserCompare_25, transform_hlds__intermod__STATE_VARIABLE_Info_32_32, transform_hlds__intermod__STATE_VARIABLE_Info_6);
            }
#line 1212 "intermod.m"
            {
#line 1212 "intermod.m"
              transform_hlds__intermod__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, 0) = ((MR_Box) (transform_hlds__intermod__MaybeUserEq_24));
#line 1212 "intermod.m"
              MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, 1) = ((MR_Box) (transform_hlds__intermod__MaybeUserCompare_25));
#line 1212 "intermod.m"
            }
#line 1212 "intermod.m"
            {
#line 1212 "intermod.m"
              MR_Word base;
#line 1212 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "intermod.m"
              *transform_hlds__intermod__HeadVar__4_4 = base;
#line 1212 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__V_30_30));
#line 1212 "intermod.m"
            }
#line 1212 "intermod.m"
          }
#line 1206 "intermod.m"
      }
#line 1206 "intermod.m"
  }
#line 1202 "intermod.m"
}

#line 1108 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(
#line 1108 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_7,
#line 1108 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_8,
#line 1108 "intermod.m"
  MR_Word transform_hlds__intermod__ForeignTypeBody0_9,
#line 1108 "intermod.m"
  MR_Word * transform_hlds__intermod__ForeignTypeBody_10,
#line 1108 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 1108 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25)
#line 1108 "intermod.m"
{
#line 1113 "intermod.m"
  {
#line 1113 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 0)));
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 1)));
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 2)));
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 3)));
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__ForeignTypeBody0_9, (MR_Integer) 4)));
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_17;
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__Target_18;
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeC_19;
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeIL_20;
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeCSharp_21;
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeJava_22;
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__MaybeErlang_23;
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_26_26;
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_27_27;
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_28_28;
#line 1113 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_29_29;

#line 1116 "intermod.m"
    {
#line 1116 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_7, &transform_hlds__intermod__Globals_17);
    }
#line 1117 "intermod.m"
    {
#line 1117 "intermod.m"
      libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_17, &transform_hlds__intermod__Target_18);
    }
#line 1132 "intermod.m"
#line 1132 "intermod.m"
    switch (transform_hlds__intermod__Target_18) {
#line 1132 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1132 "intermod.m"
      case (MR_Integer) 0:
#line 1132 "intermod.m"
      case (MR_Integer) 4:
#line 1130 "intermod.m"
        {
#line 1130 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeC0_13, &transform_hlds__intermod__MaybeC_19, transform_hlds__intermod__STATE_VARIABLE_Info_0_24, &transform_hlds__intermod__STATE_VARIABLE_Info_26_26);
        }
#line 1132 "intermod.m"
        break;
#line 1132 "intermod.m"
      case (MR_Integer) 2:
#line 1132 "intermod.m"
      case (MR_Integer) 1:
#line 1132 "intermod.m"
      case (MR_Integer) 3:
#line 1136 "intermod.m"
        {
#line 1137 "intermod.m"
          transform_hlds__intermod__MaybeC_19 = transform_hlds__intermod__MaybeC0_13;
#line 1136 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_Info_26_26 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 1136 "intermod.m"
        }
#line 1132 "intermod.m"
        break;
#line 1132 "intermod.m"
    }
#line 1143 "intermod.m"
#line 1143 "intermod.m"
    switch (transform_hlds__intermod__Target_18) {
#line 1143 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1143 "intermod.m"
      case (MR_Integer) 0:
#line 1143 "intermod.m"
      case (MR_Integer) 2:
#line 1143 "intermod.m"
      case (MR_Integer) 4:
#line 1143 "intermod.m"
      case (MR_Integer) 3:
#line 1148 "intermod.m"
        {
#line 1149 "intermod.m"
          transform_hlds__intermod__MaybeIL_20 = transform_hlds__intermod__MaybeIL0_12;
#line 1148 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_Info_27_27 = transform_hlds__intermod__STATE_VARIABLE_Info_26_26;
#line 1148 "intermod.m"
        }
#line 1143 "intermod.m"
        break;
#line 1143 "intermod.m"
      case (MR_Integer) 1:
#line 1141 "intermod.m"
        {
#line 1141 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeIL0_12, &transform_hlds__intermod__MaybeIL_20, transform_hlds__intermod__STATE_VARIABLE_Info_26_26, &transform_hlds__intermod__STATE_VARIABLE_Info_27_27);
        }
#line 1143 "intermod.m"
        break;
#line 1143 "intermod.m"
    }
#line 1155 "intermod.m"
#line 1155 "intermod.m"
    switch (transform_hlds__intermod__Target_18) {
#line 1155 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1155 "intermod.m"
      case (MR_Integer) 0:
#line 1155 "intermod.m"
      case (MR_Integer) 4:
#line 1155 "intermod.m"
      case (MR_Integer) 1:
#line 1155 "intermod.m"
      case (MR_Integer) 3:
#line 1160 "intermod.m"
        {
#line 1161 "intermod.m"
          transform_hlds__intermod__MaybeCSharp_21 = transform_hlds__intermod__MaybeCSharp0_15;
#line 1160 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_Info_28_28 = transform_hlds__intermod__STATE_VARIABLE_Info_27_27;
#line 1160 "intermod.m"
        }
#line 1155 "intermod.m"
        break;
#line 1155 "intermod.m"
      case (MR_Integer) 2:
#line 1153 "intermod.m"
        {
#line 1153 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeCSharp0_15, &transform_hlds__intermod__MaybeCSharp_21, transform_hlds__intermod__STATE_VARIABLE_Info_27_27, &transform_hlds__intermod__STATE_VARIABLE_Info_28_28);
        }
#line 1155 "intermod.m"
        break;
#line 1155 "intermod.m"
    }
#line 1167 "intermod.m"
#line 1167 "intermod.m"
    switch (transform_hlds__intermod__Target_18) {
#line 1167 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1167 "intermod.m"
      case (MR_Integer) 0:
#line 1167 "intermod.m"
      case (MR_Integer) 2:
#line 1167 "intermod.m"
      case (MR_Integer) 4:
#line 1167 "intermod.m"
      case (MR_Integer) 1:
#line 1172 "intermod.m"
        {
#line 1173 "intermod.m"
          transform_hlds__intermod__MaybeJava_22 = transform_hlds__intermod__MaybeJava0_14;
#line 1172 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_Info_29_29 = transform_hlds__intermod__STATE_VARIABLE_Info_28_28;
#line 1172 "intermod.m"
        }
#line 1167 "intermod.m"
        break;
#line 1167 "intermod.m"
      case (MR_Integer) 3:
#line 1165 "intermod.m"
        {
#line 1165 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeJava0_14, &transform_hlds__intermod__MaybeJava_22, transform_hlds__intermod__STATE_VARIABLE_Info_28_28, &transform_hlds__intermod__STATE_VARIABLE_Info_29_29);
        }
#line 1167 "intermod.m"
        break;
#line 1167 "intermod.m"
    }
#line 1179 "intermod.m"
#line 1179 "intermod.m"
    switch (transform_hlds__intermod__Target_18) {
#line 1179 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1179 "intermod.m"
      case (MR_Integer) 0:
#line 1179 "intermod.m"
      case (MR_Integer) 2:
#line 1179 "intermod.m"
      case (MR_Integer) 1:
#line 1179 "intermod.m"
      case (MR_Integer) 3:
#line 1184 "intermod.m"
        {
#line 1185 "intermod.m"
          transform_hlds__intermod__MaybeErlang_23 = transform_hlds__intermod__MaybeErlang0_16;
#line 1184 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_29_29;
#line 1184 "intermod.m"
        }
#line 1179 "intermod.m"
        break;
#line 1179 "intermod.m"
      case (MR_Integer) 4:
#line 1177 "intermod.m"
        {
#line 1177 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_115_111_108_118_101_95_102_111_114_101_105_103_110_95_116_121_112_101_95_98_111_100_121_95_111_118_101_114_108_111_97_100_105_110_103_95_50_95_95_91_49_93_95_48_6_p_0(transform_hlds__intermod__ModuleInfo_7, transform_hlds__intermod__TypeCtor_8, transform_hlds__intermod__MaybeErlang0_16, &transform_hlds__intermod__MaybeErlang_23, transform_hlds__intermod__STATE_VARIABLE_Info_29_29, transform_hlds__intermod__STATE_VARIABLE_Info_25);
        }
#line 1179 "intermod.m"
        break;
#line 1179 "intermod.m"
    }
#line 1187 "intermod.m"
    {
#line 1187 "intermod.m"
      MR_Word base;
#line 1187 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1187 "intermod.m"
      *transform_hlds__intermod__ForeignTypeBody_10 = base;
#line 1187 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__MaybeIL_20));
#line 1187 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__MaybeC_19));
#line 1187 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__MaybeJava_22));
#line 1187 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__MaybeCSharp_21));
#line 1187 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__MaybeErlang_23));
#line 1187 "intermod.m"
    }
#line 1113 "intermod.m"
  }
#line 1108 "intermod.m"
}

#line 1041 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_4_p_0(
#line 1041 "intermod.m"
  MR_Word transform_hlds__intermod__TypeCtor_5,
#line 1041 "intermod.m"
  MR_Word transform_hlds__intermod__TypeDefn0_6,
#line 1041 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_33,
#line 1041 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_34)
#line 1041 "intermod.m"
{
#line 1044 "intermod.m"
  {
#line 1044 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1044 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 1044 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_9;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 1241 "intermod.m"
    MR_Word transform_hlds__intermod__ImportStatus_60;
#line 1241 "intermod.m"
    MR_Word transform_hlds__intermod__Name_61;
#line 1241 "intermod.m"
    MR_Word transform_hlds__intermod__V_64_64;
#line 1243 "intermod.m"
    MR_Integer transform_hlds__intermod___Arity_62;
#line 1244 "intermod.m"
    MR_String transform_hlds__intermod__V_63_63;

#line 1046 "intermod.m"
    {
#line 1046 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__ModuleInfo_8, &transform_hlds__intermod__ModuleName_9);
    }
#line 1242 "intermod.m"
    {
#line 1242 "intermod.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__ImportStatus_60);
    }
#line 1243 "intermod.m"
    transform_hlds__intermod__Name_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_5, (MR_Integer) 0)));
#line 1243 "intermod.m"
    transform_hlds__intermod___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TypeCtor_5, (MR_Integer) 1)));
#line 1244 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Name_61)) == (MR_mktag((MR_Integer) 1)));
#line 1244 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1244 "intermod.m"
      {
#line 1244 "intermod.m"
        transform_hlds__intermod__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_61, (MR_Integer) 0)));
#line 1244 "intermod.m"
        transform_hlds__intermod__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Name_61, (MR_Integer) 1)));
#line 1244 "intermod.m"
        {
#line 1244 "intermod.m"
          transform_hlds__intermod__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(transform_hlds__intermod__ModuleName_9, transform_hlds__intermod__V_64_64);
        }
#line 1241 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1245 "intermod.m"
          {
#line 1245 "intermod.m"
            transform_hlds__intermod__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__ImportStatus_60);
          }
#line 1244 "intermod.m"
      }
#line 1104 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1048 "intermod.m"
      {
#line 1048 "intermod.m"
        MR_Word transform_hlds__intermod__TypeBody0_10;
#line 1048 "intermod.m"
        MR_Word transform_hlds__intermod__TypeDefn_27;
#line 1048 "intermod.m"
        MR_Word transform_hlds__intermod__Types0_32;
#line 1048 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_39_39;
#line 1048 "intermod.m"
        MR_Word transform_hlds__intermod__V_41_41;
#line 1048 "intermod.m"
        MR_Word transform_hlds__intermod__V_43_43;
#line 2169 "intermod.m"
        MR_Word transform_hlds__intermod__V_89_89;
#line 2169 "intermod.m"
        MR_Word transform_hlds__intermod__V_90_90;
#line 2169 "intermod.m"
        MR_Word transform_hlds__intermod__V_91_91;
#line 2169 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;
#line 2169 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 2169 "intermod.m"
        MR_Word transform_hlds__intermod__V_94_94;
#line 2169 "intermod.m"
        MR_Word transform_hlds__intermod__V_95_95;
#line 2169 "intermod.m"
        MR_Word transform_hlds__intermod__V_96_96;

#line 1048 "intermod.m"
        {
#line 1048 "intermod.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeBody0_10);
        }
#line 1086 "intermod.m"
#line 1086 "intermod.m"
        switch (MR_tag((MR_Word) transform_hlds__intermod__TypeBody0_10)) {
#line 1086 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1086 "intermod.m"
          case (MR_Integer) 0:
#line 1087 "intermod.m"
            {
#line 1087 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_35_35;
#line 1087 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignTypeBody0_44 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__TypeBody0_10), (MR_Integer) 0);
#line 1087 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignTypeBody_45;
#line 1087 "intermod.m"
              MR_Word transform_hlds__intermod__TypeBody_46;
#line 2183 "intermod.m"
              MR_Word transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2183 "intermod.m"
              MR_Word transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2183 "intermod.m"
              MR_Word transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2183 "intermod.m"
              MR_Word transform_hlds__intermod__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2183 "intermod.m"
              MR_Word transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2183 "intermod.m"
              MR_Word transform_hlds__intermod__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 2183 "intermod.m"
              MR_Word transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2183 "intermod.m"
              MR_Word transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 2183 "intermod.m"
              MR_Word transform_hlds__intermod__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));

#line 2183 "intermod.m"
              {
#line 2183 "intermod.m"
                transform_hlds__intermod__STATE_VARIABLE_Info_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2183 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 0) = ((MR_Box) (transform_hlds__intermod__V_79_79));
#line 2183 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 1) = ((MR_Box) (transform_hlds__intermod__V_80_80));
#line 2183 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 2) = ((MR_Box) (transform_hlds__intermod__V_81_81));
#line 2183 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 3) = ((MR_Box) (transform_hlds__intermod__V_82_82));
#line 2183 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 4) = ((MR_Box) (transform_hlds__intermod__V_83_83));
#line 2183 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 5) = ((MR_Box) (transform_hlds__intermod__V_84_84));
#line 2183 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2183 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 7) = ((MR_Box) (transform_hlds__intermod__V_86_86));
#line 2183 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_35_35, 8) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2183 "intermod.m"
              }
#line 1091 "intermod.m"
              {
#line 1091 "intermod.m"
                transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__ForeignTypeBody0_44, &transform_hlds__intermod__ForeignTypeBody_45, transform_hlds__intermod__STATE_VARIABLE_Info_35_35, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
              }
#line 1093 "intermod.m"
              transform_hlds__intermod__TypeBody_46 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__ForeignTypeBody_45);
#line 1094 "intermod.m"
              {
#line 1094 "intermod.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(transform_hlds__intermod__TypeBody_46, transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeDefn_27);
              }
#line 1087 "intermod.m"
            }
#line 1086 "intermod.m"
            break;
#line 1086 "intermod.m"
          case (MR_Integer) 1:
#line 1052 "intermod.m"
            {
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__Ctors_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 0)));
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__Tags_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 1)));
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__CheaperTagTest_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 2)));
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__Enum_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 3)));
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeUserEqComp0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 4)));
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeDirectArgCtors_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 5)));
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__ReservedTag_17 = ((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__ReservedAddr_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeForeign0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody0_10, (MR_Integer) 7)));
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__Globals_20;
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__Target_21;
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeForeign_24;
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeUserEqComp_25;
#line 1052 "intermod.m"
              MR_Word transform_hlds__intermod__TypeBody_26;
#line 1077 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignTypeBody0_22;
#line 1067 "intermod.m"
              MR_Word transform_hlds__intermod__V_37_37;
#line 1067 "intermod.m"
              MR_Word transform_hlds__intermod__V_47_47;

#line 1053 "intermod.m"
              {
#line 1053 "intermod.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_8, &transform_hlds__intermod__Globals_20);
              }
#line 1054 "intermod.m"
              {
#line 1054 "intermod.m"
                libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_20, &transform_hlds__intermod__Target_21);
              }
#line 1067 "intermod.m"
              transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__MaybeForeign0_19)) == (MR_mktag((MR_Integer) 1)));
#line 1067 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 1067 "intermod.m"
                {
#line 1067 "intermod.m"
                  transform_hlds__intermod__ForeignTypeBody0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeForeign0_19, (MR_Integer) 0)));
#line 1068 "intermod.m"
                  transform_hlds__intermod__V_37_37 = (MR_Integer) 1;
#line 1068 "intermod.m"
                  {
#line 1068 "intermod.m"
                    backend_libs__foreign__have_foreign_type_for_backend_3_p_0(transform_hlds__intermod__Target_21, transform_hlds__intermod__ForeignTypeBody0_22, &transform_hlds__intermod__V_47_47);
                  }
#line 1068 "intermod.m"
                  transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_37_37 == transform_hlds__intermod__V_47_47);
#line 1067 "intermod.m"
                }
#line 1077 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 1072 "intermod.m"
                {
#line 1072 "intermod.m"
                  MR_Word transform_hlds__intermod__ForeignTypeBody_23;
#line 1072 "intermod.m"
                  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_38_38;
#line 2183 "intermod.m"
                  MR_Word transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 0)));
#line 2183 "intermod.m"
                  MR_Word transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 1)));
#line 2183 "intermod.m"
                  MR_Word transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 2)));
#line 2183 "intermod.m"
                  MR_Word transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 3)));
#line 2183 "intermod.m"
                  MR_Word transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 4)));
#line 2183 "intermod.m"
                  MR_Word transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 5)));
#line 2183 "intermod.m"
                  MR_Word transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 7)));
#line 2183 "intermod.m"
                  MR_Word transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 8)));
#line 2183 "intermod.m"
                  MR_Word transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_33, (MR_Integer) 6)));

#line 2183 "intermod.m"
                  {
#line 2183 "intermod.m"
                    transform_hlds__intermod__STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2183 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (transform_hlds__intermod__V_68_68));
#line 2183 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 1) = ((MR_Box) (transform_hlds__intermod__V_69_69));
#line 2183 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (transform_hlds__intermod__V_70_70));
#line 2183 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (transform_hlds__intermod__V_71_71));
#line 2183 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (transform_hlds__intermod__V_72_72));
#line 2183 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 5) = ((MR_Box) (transform_hlds__intermod__V_73_73));
#line 2183 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 6) = ((MR_Box) ((MR_Integer) 1));
#line 2183 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 7) = ((MR_Box) (transform_hlds__intermod__V_75_75));
#line 2183 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_38_38, 8) = ((MR_Box) (transform_hlds__intermod__V_76_76));
#line 2183 "intermod.m"
                  }
#line 1073 "intermod.m"
                  {
#line 1073 "intermod.m"
                    transform_hlds__intermod__resolve_foreign_type_body_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__ForeignTypeBody0_22, &transform_hlds__intermod__ForeignTypeBody_23, transform_hlds__intermod__STATE_VARIABLE_Info_38_38, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
                  }
#line 1075 "intermod.m"
                  {
#line 1075 "intermod.m"
                    transform_hlds__intermod__MaybeForeign_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "intermod.m"
                    MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeForeign_24, 0) = ((MR_Box) (transform_hlds__intermod__ForeignTypeBody_23));
#line 1075 "intermod.m"
                  }
#line 1076 "intermod.m"
                  transform_hlds__intermod__MaybeUserEqComp_25 = transform_hlds__intermod__MaybeUserEqComp0_15;
#line 1072 "intermod.m"
                }
#line 1077 "intermod.m"
              else
#line 1079 "intermod.m"
                {
#line 1078 "intermod.m"
                  {
#line 1078 "intermod.m"
                    transform_hlds__intermod__resolve_unify_compare_overloading_6_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__TypeCtor_5, transform_hlds__intermod__MaybeUserEqComp0_15, &transform_hlds__intermod__MaybeUserEqComp_25, transform_hlds__intermod__STATE_VARIABLE_Info_0_33, &transform_hlds__intermod__STATE_VARIABLE_Info_39_39);
                  }
#line 1080 "intermod.m"
                  transform_hlds__intermod__MaybeForeign_24 = transform_hlds__intermod__MaybeForeign0_19;
#line 1079 "intermod.m"
                }
#line 1082 "intermod.m"
              {
#line 1082 "intermod.m"
                transform_hlds__intermod__TypeBody_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 0) = ((MR_Box) (transform_hlds__intermod__Ctors_11));
#line 1082 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 1) = ((MR_Box) (transform_hlds__intermod__Tags_12));
#line 1082 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 2) = ((MR_Box) (transform_hlds__intermod__CheaperTagTest_13));
#line 1082 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 3) = ((MR_Box) (transform_hlds__intermod__Enum_14));
#line 1082 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 4) = ((MR_Box) (transform_hlds__intermod__MaybeUserEqComp_25));
#line 1082 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 5) = ((MR_Box) (transform_hlds__intermod__MaybeDirectArgCtors_16));
#line 1082 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 6) = ((MR_Box) ((transform_hlds__intermod__ReservedTag_17 | ((transform_hlds__intermod__ReservedAddr_18 << (MR_Integer) 1)))));
#line 1082 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeBody_26, 7) = ((MR_Box) (transform_hlds__intermod__MaybeForeign_24));
#line 1082 "intermod.m"
              }
#line 1085 "intermod.m"
              {
#line 1085 "intermod.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(transform_hlds__intermod__TypeBody_26, transform_hlds__intermod__TypeDefn0_6, &transform_hlds__intermod__TypeDefn_27);
              }
#line 1052 "intermod.m"
            }
#line 1086 "intermod.m"
            break;
#line 1086 "intermod.m"
          case (MR_Integer) 2:
#line 1099 "intermod.m"
            {
#line 1100 "intermod.m"
              transform_hlds__intermod__TypeDefn_27 = transform_hlds__intermod__TypeDefn0_6;
#line 1099 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_39_39 = transform_hlds__intermod__STATE_VARIABLE_Info_0_33;
#line 1099 "intermod.m"
            }
#line 1086 "intermod.m"
            break;
#line 1086 "intermod.m"
          case (MR_Integer) 3:
#line 1099 "intermod.m"
            {
#line 1100 "intermod.m"
              transform_hlds__intermod__TypeDefn_27 = transform_hlds__intermod__TypeDefn0_6;
#line 1099 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_39_39 = transform_hlds__intermod__STATE_VARIABLE_Info_0_33;
#line 1099 "intermod.m"
            }
#line 1086 "intermod.m"
            break;
#line 1086 "intermod.m"
        }
#line 2169 "intermod.m"
        transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 2169 "intermod.m"
        transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 2169 "intermod.m"
        transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 2169 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 2169 "intermod.m"
        transform_hlds__intermod__Types0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 2169 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 5)));
#line 2169 "intermod.m"
        transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 6)));
#line 2169 "intermod.m"
        transform_hlds__intermod__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 7)));
#line 2169 "intermod.m"
        transform_hlds__intermod__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_39_39, (MR_Integer) 8)));
#line 1103 "intermod.m"
        {
#line 1103 "intermod.m"
          transform_hlds__intermod__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1103 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_43_43, 0) = ((MR_Box) (transform_hlds__intermod__TypeCtor_5));
#line 1103 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_43_43, 1) = ((MR_Box) (transform_hlds__intermod__TypeDefn_27));
#line 1103 "intermod.m"
        }
#line 1103 "intermod.m"
        {
#line 1103 "intermod.m"
          transform_hlds__intermod__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_41_41, 0) = ((MR_Box) (transform_hlds__intermod__V_43_43));
#line 1103 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_41_41, 1) = ((MR_Box) (transform_hlds__intermod__Types0_32));
#line 1103 "intermod.m"
        }
#line 1103 "intermod.m"
        {
#line 1103 "intermod.m"
          transform_hlds__intermod__intermod_info_set_types_3_p_0(transform_hlds__intermod__V_41_41, transform_hlds__intermod__STATE_VARIABLE_Info_39_39, transform_hlds__intermod__STATE_VARIABLE_Info_34);
#line 1103 "intermod.m"
          return;
        }
#line 1048 "intermod.m"
      }
#line 1104 "intermod.m"
    else
#line 1104 "intermod.m"
      *transform_hlds__intermod__STATE_VARIABLE_Info_34 = transform_hlds__intermod__STATE_VARIABLE_Info_0_33;
#line 1044 "intermod.m"
  }
#line 1041 "intermod.m"
}

#line 1039 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0_1(
#line 1039 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 1039 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 1039 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 1039 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 1039 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 1039 "intermod.m"
{
#line 1039 "intermod.m"
  {
#line 1039 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 1039 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34;

#line 1039 "intermod.m"
    {
#line 1039 "intermod.m"
      transform_hlds__intermod__gather_types_2_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34);
    }
#line 1039 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_34));
#line 1039 "intermod.m"
  }
#line 1039 "intermod.m"
}

#line 1034 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_types_2_p_0(
#line 1034 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_6,
#line 1034 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_7)
#line 1034 "intermod.m"
{
#line 1036 "intermod.m"
  {
#line 1036 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 1036 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 5)));
#line 1036 "intermod.m"
    MR_Word transform_hlds__intermod__TypeTable_5;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 0)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 1)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 2)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 3)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 4)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 6)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 7)));
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_6, (MR_Integer) 8)));
#line 1039 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7;

#line 1038 "intermod.m"
    {
#line 1038 "intermod.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(transform_hlds__intermod__ModuleInfo_4, &transform_hlds__intermod__TypeTable_5);
    }
#line 1039 "intermod.m"
    {
#line 1039 "intermod.m"
      hlds__hlds_data__foldl_over_type_ctor_defns_4_p_0((MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[22], transform_hlds__intermod__TypeTable_5, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_6)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
    }
#line 1039 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_Info_7 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_7);
#line 1036 "intermod.m"
  }
#line 1034 "intermod.m"
}

#line 998 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_2(
#line 998 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 998 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 998 "intermod.m"
{
#line 998 "intermod.m"
  {
#line 998 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 998 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 998 "intermod.m"
    MR_Word transform_hlds__intermod__conv2_HeadVar__2_55;

#line 998 "intermod.m"
    {
#line 998 "intermod.m"
      transform_hlds__intermod__conv2_HeadVar__2_55 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__1000__1_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 998 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv2_HeadVar__2_55));
#line 998 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 998 "intermod.m"
  }
#line 998 "intermod.m"
}

#line 985 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0_1(
#line 985 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 985 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 985 "intermod.m"
{
#line 985 "intermod.m"
  {
#line 985 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 985 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 985 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_HeadVar__2_51;

#line 985 "intermod.m"
    {
#line 985 "intermod.m"
      transform_hlds__intermod__conv1_HeadVar__2_51 = transform_hlds__intermod__IntroducedFrom__func__find_func_matching_instance_method__987__1_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 985 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv1_HeadVar__2_51));
#line 985 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 985 "intermod.m"
  }
#line 985 "intermod.m"
}

#line 970 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__find_func_matching_instance_method_10_p_0(
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_11,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceMethodName0_12,
#line 970 "intermod.m"
  MR_Integer transform_hlds__intermod__MethodArity_13,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallTVarSet_14,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallExistQTVars_15,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallArgTypes_16,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_17,
#line 970 "intermod.m"
  MR_Word transform_hlds__intermod__MethodContext_18,
#line 970 "intermod.m"
  MR_Word * transform_hlds__intermod__MaybePredId_19,
#line 970 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethodName_20)
#line 970 "intermod.m"
{
#line 978 "intermod.m"
  {
#line 978 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 978 "intermod.m"
    MR_Word transform_hlds__intermod__CtorFieldTable_21;
#line 978 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors0_25;
#line 978 "intermod.m"
    MR_Word transform_hlds__intermod__Ctors_32;
#line 978 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors1_35;
#line 978 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtors_37;
#line 978 "intermod.m"
    MR_Word transform_hlds__intermod__PredicateTable_38;
#line 978 "intermod.m"
    MR_Word transform_hlds__intermod__PredIds_39;
#line 989 "intermod.m"
    MR_Word transform_hlds__intermod__FieldDefns_24;
#line 982 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_79_79;
#line 982 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_80_80;
#line 982 "intermod.m"
    MR_Word transform_hlds__intermod__FieldName_23;
#line 982 "intermod.m"
    MR_Integer transform_hlds__intermod__V_86_86;
#line 981 "intermod.m"
    MR_Word transform_hlds__intermod__V_22_22;
#line 983 "intermod.m"
    MR_Box transform_hlds__intermod__conv0_FieldDefns_24;
#line 1002 "intermod.m"
    MR_Word transform_hlds__intermod__MatchingConstructors_34;
#line 995 "intermod.m"
    MR_Word transform_hlds__intermod__ConsId_33;
#line 995 "intermod.m"
    MR_Word transform_hlds__intermod__V_52_52;
#line 1020 "intermod.m"
    MR_Word transform_hlds__intermod__PredId_42;
#line 1020 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodFuncName_43;
#line 1011 "intermod.m"
    MR_Word transform_hlds__intermod__V_57_57;
#line 1011 "intermod.m"
    MR_Word transform_hlds__intermod__V_40_40;
#line 1011 "intermod.m"
    MR_Word transform_hlds__intermod__V_41_41;

#line 979 "intermod.m"
    {
#line 979 "intermod.m"
      hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__CtorFieldTable_21);
    }
#line 981 "intermod.m"
    {
#line 981 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_pred__is_field_access_function_name_5_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__InstanceMethodName0_12, &transform_hlds__intermod__V_86_86, &transform_hlds__intermod__V_22_22, &transform_hlds__intermod__FieldName_23);
    }
#line 982 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 982 "intermod.m"
      {
#line 981 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__MethodArity_13 == transform_hlds__intermod__V_86_86);
#line 982 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 982 "intermod.m"
          {
#line 14790 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeCtorInfo_79_79 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 14792 "transform_hlds.intermod.c"
            transform_hlds__intermod__TypeInfo_80_80 = (MR_Word) &transform_hlds__intermod_scalar_common_1[10];
#line 983 "intermod.m"
            {
#line 983 "intermod.m"
              transform_hlds__intermod__succeeded = mercury__map__search_3_p_0(transform_hlds__intermod__TypeCtorInfo_79_79, transform_hlds__intermod__TypeInfo_80_80, transform_hlds__intermod__CtorFieldTable_21, ((MR_Box) (transform_hlds__intermod__FieldName_23)), &transform_hlds__intermod__conv0_FieldDefns_24);
            }
#line 983 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 983 "intermod.m"
              {
#line 983 "intermod.m"
                transform_hlds__intermod__FieldDefns_24 = ((MR_Word) transform_hlds__intermod__conv0_FieldDefns_24);
#line 983 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 983 "intermod.m"
              }
#line 982 "intermod.m"
          }
#line 982 "intermod.m"
      }
#line 989 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 985 "intermod.m"
      {
#line 985 "intermod.m"
        {
#line 985 "intermod.m"
          transform_hlds__intermod__TypeCtors0_25 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[20], transform_hlds__intermod__FieldDefns_24);
        }
#line 985 "intermod.m"
      }
#line 989 "intermod.m"
    else
#line 990 "intermod.m"
      transform_hlds__intermod__TypeCtors0_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 992 "intermod.m"
    {
#line 992 "intermod.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__Ctors_32);
    }
#line 995 "intermod.m"
    {
#line 995 "intermod.m"
      transform_hlds__intermod__V_52_52 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 994 "intermod.m"
    {
#line 994 "intermod.m"
      transform_hlds__intermod__ConsId_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 994 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 994 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 1) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName0_12));
#line 994 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 2) = ((MR_Box) (transform_hlds__intermod__MethodArity_13));
#line 994 "intermod.m"
      MR_hl_field(MR_mktag(3), transform_hlds__intermod__ConsId_33, 3) = ((MR_Box) (transform_hlds__intermod__V_52_52));
#line 994 "intermod.m"
    }
#line 996 "intermod.m"
    {
#line 996 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_data__search_cons_table_3_p_0(transform_hlds__intermod__Ctors_32, transform_hlds__intermod__ConsId_33, &transform_hlds__intermod__MatchingConstructors_34);
    }
#line 1002 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 998 "intermod.m"
      {
#line 998 "intermod.m"
        {
#line 998 "intermod.m"
          transform_hlds__intermod__TypeCtors1_35 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[21], transform_hlds__intermod__MatchingConstructors_34);
        }
#line 998 "intermod.m"
      }
#line 1002 "intermod.m"
    else
#line 1003 "intermod.m"
      transform_hlds__intermod__TypeCtors1_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1005 "intermod.m"
    {
#line 1005 "intermod.m"
      transform_hlds__intermod__TypeCtors_37 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, transform_hlds__intermod__TypeCtors0_25, transform_hlds__intermod__TypeCtors1_35);
    }
#line 1007 "intermod.m"
    {
#line 1007 "intermod.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(transform_hlds__intermod__ModuleInfo_11, &transform_hlds__intermod__PredicateTable_38);
    }
#line 1008 "intermod.m"
    {
#line 1008 "intermod.m"
      hlds__pred_table__predicate_table_lookup_func_sym_arity_5_p_0(transform_hlds__intermod__PredicateTable_38, (MR_Integer) 1, transform_hlds__intermod__InstanceMethodName0_12, transform_hlds__intermod__MethodArity_13, &transform_hlds__intermod__PredIds_39);
    }
#line 1011 "intermod.m"
    transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__PredIds_39)) == (MR_mktag((MR_Integer) 1)));
#line 1011 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1011 "intermod.m"
      {
#line 1011 "intermod.m"
        transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__PredIds_39, (MR_Integer) 0)));
#line 1011 "intermod.m"
        transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__PredIds_39, (MR_Integer) 1)));
#line 1014 "intermod.m"
        transform_hlds__intermod__V_57_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1012 "intermod.m"
        {
#line 1012 "intermod.m"
          transform_hlds__intermod__succeeded = hlds__pred_table__find_matching_pred_id_10_p_0(transform_hlds__intermod__ModuleInfo_11, transform_hlds__intermod__PredIds_39, transform_hlds__intermod__MethodCallTVarSet_14, transform_hlds__intermod__MethodCallExistQTVars_15, transform_hlds__intermod__MethodCallArgTypes_16, transform_hlds__intermod__MethodCallHeadTypeParams_17, transform_hlds__intermod__V_57_57, transform_hlds__intermod__MethodContext_18, &transform_hlds__intermod__PredId_42, &transform_hlds__intermod__InstanceMethodFuncName_43);
        }
#line 1011 "intermod.m"
      }
#line 1020 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 1017 "intermod.m"
      {
#line 1017 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__TypeCtors_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1017 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1017 "intermod.m"
          {
#line 1019 "intermod.m"
            *transform_hlds__intermod__InstanceMethodName_20 = transform_hlds__intermod__InstanceMethodFuncName_43;
#line 1018 "intermod.m"
            {
#line 1018 "intermod.m"
              MR_Word base;
#line 1018 "intermod.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "intermod.m"
              *transform_hlds__intermod__MaybePredId_19 = base;
#line 1018 "intermod.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_42));
#line 1018 "intermod.m"
            }
#line 1018 "intermod.m"
            transform_hlds__intermod__succeeded = MR_TRUE;
#line 1017 "intermod.m"
          }
#line 1017 "intermod.m"
      }
#line 1020 "intermod.m"
    else
#line 1021 "intermod.m"
      {
#line 1021 "intermod.m"
        MR_Word transform_hlds__intermod__TheTypeCtor_44;
#line 1021 "intermod.m"
        MR_Word transform_hlds__intermod__V_58_58;
#line 1026 "intermod.m"
        MR_Word transform_hlds__intermod__TypeModule_45;
#line 1023 "intermod.m"
        MR_Word transform_hlds__intermod__V_59_59;
#line 1023 "intermod.m"
        MR_Integer transform_hlds__intermod__V_47_47;
#line 1023 "intermod.m"
        MR_String transform_hlds__intermod__V_46_46;

#line 1021 "intermod.m"
        transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__TypeCtors_37)) == (MR_mktag((MR_Integer) 1)));
#line 1021 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 1021 "intermod.m"
          {
#line 1021 "intermod.m"
            transform_hlds__intermod__TheTypeCtor_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeCtors_37, (MR_Integer) 0)));
#line 1021 "intermod.m"
            transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__TypeCtors_37, (MR_Integer) 1)));
#line 1021 "intermod.m"
            transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1021 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 1021 "intermod.m"
              {
#line 1022 "intermod.m"
                *transform_hlds__intermod__MaybePredId_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1023 "intermod.m"
                transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TheTypeCtor_44, (MR_Integer) 0)));
#line 1023 "intermod.m"
                transform_hlds__intermod__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__TheTypeCtor_44, (MR_Integer) 1)));
#line 1023 "intermod.m"
                transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_59_59)) == (MR_mktag((MR_Integer) 1)));
#line 1023 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 1023 "intermod.m"
                  {
#line 1023 "intermod.m"
                    transform_hlds__intermod__TypeModule_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, (MR_Integer) 0)));
#line 1023 "intermod.m"
                    transform_hlds__intermod__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_59_59, (MR_Integer) 1)));
#line 1024 "intermod.m"
                    {
#line 1024 "intermod.m"
                      MR_String transform_hlds__intermod__UnqualMethodName_48;

#line 1024 "intermod.m"
                      {
#line 1024 "intermod.m"
                        transform_hlds__intermod__UnqualMethodName_48 = mdbcomp__sym_name__unqualify_name_1_f_0(transform_hlds__intermod__InstanceMethodName0_12);
                      }
#line 1025 "intermod.m"
                      {
#line 1025 "intermod.m"
                        MR_Word base;
#line 1025 "intermod.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "intermod.m"
                        *transform_hlds__intermod__InstanceMethodName_20 = base;
#line 1025 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__TypeModule_45));
#line 1025 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__UnqualMethodName_48));
#line 1025 "intermod.m"
                      }
#line 1024 "intermod.m"
                    }
#line 1023 "intermod.m"
                  }
#line 1023 "intermod.m"
                else
#line 1027 "intermod.m"
                  {
#line 1027 "intermod.m"
                    {
#line 1027 "intermod.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.find_func_matching_instance_method\'/10", (MR_String) "unqualified type_ctor in hlds_cons_defn or hlds_ctor_field_defn");
                    }
#line 1027 "intermod.m"
                  }
#line 1026 "intermod.m"
                transform_hlds__intermod__succeeded = MR_TRUE;
#line 1021 "intermod.m"
              }
#line 1021 "intermod.m"
          }
#line 1021 "intermod.m"
      }
#line 978 "intermod.m"
    return transform_hlds__intermod__succeeded;
#line 978 "intermod.m"
  }
#line 970 "intermod.m"
}

#line 902 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__qualify_instance_method_5_p_0(
#line 902 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 902 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2,
#line 902 "intermod.m"
  MR_Word * transform_hlds__intermod__InstanceMethod_9,
#line 902 "intermod.m"
  MR_Word transform_hlds__intermod__PredIds0_10,
#line 902 "intermod.m"
  MR_Word * transform_hlds__intermod__PredIds_11)
#line 902 "intermod.m"
{
#line 907 "intermod.m"
  {
#line 907 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallPredId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethod0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallPredInfo_12;
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallTVarSet_13;
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallExistQTVars_14;
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallArgTypes_15;
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__MethodCallHeadTypeParams_16;
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__PredOrFunc_17;
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__MethodName_18;
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodDefn0_19;
#line 907 "intermod.m"
    MR_Integer transform_hlds__intermod__MethodArity_20;
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__MethodContext_21;
#line 907 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceMethodDefn_26;

#line 908 "intermod.m"
    {
#line 908 "intermod.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__MethodCallPredId_7, &transform_hlds__intermod__MethodCallPredInfo_12);
    }
#line 909 "intermod.m"
    {
#line 909 "intermod.m"
      hlds__hlds_pred__pred_info_get_arg_types_4_p_0(transform_hlds__intermod__MethodCallPredInfo_12, &transform_hlds__intermod__MethodCallTVarSet_13, &transform_hlds__intermod__MethodCallExistQTVars_14, &transform_hlds__intermod__MethodCallArgTypes_15);
    }
#line 911 "intermod.m"
    {
#line 911 "intermod.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(transform_hlds__intermod__MethodCallPredInfo_12, &transform_hlds__intermod__MethodCallHeadTypeParams_16);
    }
#line 913 "intermod.m"
    transform_hlds__intermod__PredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 0)));
#line 913 "intermod.m"
    transform_hlds__intermod__MethodName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 1)));
#line 913 "intermod.m"
    transform_hlds__intermod__InstanceMethodDefn0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 2)));
#line 913 "intermod.m"
    transform_hlds__intermod__MethodArity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 3)));
#line 913 "intermod.m"
    transform_hlds__intermod__MethodContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethod0_8, (MR_Integer) 4)));
#line 940 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__InstanceMethodDefn0_19)) == (MR_mktag((MR_Integer) 1))))
#line 951 "intermod.m"
      {
#line 951 "intermod.m"
        MR_Word transform_hlds__intermod__PredId_33;

#line 958 "intermod.m"
        {
#line 958 "intermod.m"
          transform_hlds__intermod__PredId_33 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 959 "intermod.m"
        {
#line 959 "intermod.m"
          MR_Word base;
#line 959 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "intermod.m"
          *transform_hlds__intermod__PredIds_11 = base;
#line 959 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_33));
#line 959 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 959 "intermod.m"
        }
#line 961 "intermod.m"
        transform_hlds__intermod__InstanceMethodDefn_26 = transform_hlds__intermod__InstanceMethodDefn0_19;
#line 951 "intermod.m"
      }
#line 940 "intermod.m"
    else
#line 940 "intermod.m"
      {
#line 940 "intermod.m"
        MR_Word transform_hlds__intermod__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn0_19, (MR_Integer) 0)));

#line 940 "intermod.m"
#line 940 "intermod.m"
        switch (transform_hlds__intermod__PredOrFunc_17) {
#line 940 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 940 "intermod.m"
          case (MR_Integer) 1:
#line 932 "intermod.m"
            {
#line 932 "intermod.m"
              MR_Word transform_hlds__intermod__MaybePredId_23;
#line 932 "intermod.m"
              MR_Word transform_hlds__intermod__InstanceMethodName_24;

#line 919 "intermod.m"
              {
#line 919 "intermod.m"
                transform_hlds__intermod__succeeded = transform_hlds__intermod__find_func_matching_instance_method_10_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__V_34_34, transform_hlds__intermod__MethodArity_20, transform_hlds__intermod__MethodCallTVarSet_13, transform_hlds__intermod__MethodCallExistQTVars_14, transform_hlds__intermod__MethodCallArgTypes_15, transform_hlds__intermod__MethodCallHeadTypeParams_16, transform_hlds__intermod__MethodContext_21, &transform_hlds__intermod__MaybePredId_23, &transform_hlds__intermod__InstanceMethodName_24);
              }
#line 932 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 930 "intermod.m"
                {
#line 927 "intermod.m"
                  if ((transform_hlds__intermod__MaybePredId_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 928 "intermod.m"
                    *transform_hlds__intermod__PredIds_11 = transform_hlds__intermod__PredIds0_10;
#line 927 "intermod.m"
                  else
#line 925 "intermod.m"
                    {
#line 925 "intermod.m"
                      MR_Word transform_hlds__intermod__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybePredId_23, (MR_Integer) 0)));

#line 926 "intermod.m"
                      {
#line 926 "intermod.m"
                        MR_Word base;
#line 926 "intermod.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "intermod.m"
                        *transform_hlds__intermod__PredIds_11 = base;
#line 926 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_25));
#line 926 "intermod.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 926 "intermod.m"
                      }
#line 925 "intermod.m"
                    }
#line 931 "intermod.m"
                  {
#line 931 "intermod.m"
                    transform_hlds__intermod__InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 931 "intermod.m"
                    MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn_26, 0) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName_24));
#line 931 "intermod.m"
                  }
#line 930 "intermod.m"
                }
#line 932 "intermod.m"
              else
#line 934 "intermod.m"
                {
#line 934 "intermod.m"
                  MR_Word transform_hlds__intermod__PredId_29;

#line 934 "intermod.m"
                  {
#line 934 "intermod.m"
                    transform_hlds__intermod__PredId_29 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                  }
#line 935 "intermod.m"
                  {
#line 935 "intermod.m"
                    MR_Word base;
#line 935 "intermod.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "intermod.m"
                    *transform_hlds__intermod__PredIds_11 = base;
#line 935 "intermod.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_29));
#line 935 "intermod.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 935 "intermod.m"
                  }
#line 938 "intermod.m"
                  transform_hlds__intermod__InstanceMethodDefn_26 = transform_hlds__intermod__InstanceMethodDefn0_19;
#line 934 "intermod.m"
                }
#line 932 "intermod.m"
            }
#line 940 "intermod.m"
            break;
#line 940 "intermod.m"
          case (MR_Integer) 0:
#line 941 "intermod.m"
            {
#line 941 "intermod.m"
              MR_Word transform_hlds__intermod__Markers_27;
#line 941 "intermod.m"
              MR_Word transform_hlds__intermod__InstanceMethodName_31;
#line 941 "intermod.m"
              MR_Word transform_hlds__intermod__PredId_32;

#line 943 "intermod.m"
              {
#line 943 "intermod.m"
                hlds__hlds_pred__init_markers_1_p_0(&transform_hlds__intermod__Markers_27);
              }
#line 944 "intermod.m"
              {
#line 944 "intermod.m"
                hlds__pred_table__resolve_pred_overloading_10_p_0(transform_hlds__intermod__ModuleInfo_6, transform_hlds__intermod__Markers_27, transform_hlds__intermod__MethodCallTVarSet_13, transform_hlds__intermod__MethodCallExistQTVars_14, transform_hlds__intermod__MethodCallArgTypes_15, transform_hlds__intermod__MethodCallHeadTypeParams_16, transform_hlds__intermod__MethodContext_21, transform_hlds__intermod__V_34_34, &transform_hlds__intermod__InstanceMethodName_31, &transform_hlds__intermod__PredId_32);
              }
#line 948 "intermod.m"
              {
#line 948 "intermod.m"
                MR_Word base;
#line 948 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "intermod.m"
                *transform_hlds__intermod__PredIds_11 = base;
#line 948 "intermod.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__PredId_32));
#line 948 "intermod.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__PredIds0_10));
#line 948 "intermod.m"
              }
#line 949 "intermod.m"
              {
#line 949 "intermod.m"
                transform_hlds__intermod__InstanceMethodDefn_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 949 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceMethodDefn_26, 0) = ((MR_Box) (transform_hlds__intermod__InstanceMethodName_31));
#line 949 "intermod.m"
              }
#line 941 "intermod.m"
            }
#line 940 "intermod.m"
            break;
#line 940 "intermod.m"
        }
#line 940 "intermod.m"
      }
#line 963 "intermod.m"
    {
#line 963 "intermod.m"
      MR_Word base;
#line 963 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 963 "intermod.m"
      *transform_hlds__intermod__InstanceMethod_9 = base;
#line 963 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__PredOrFunc_17));
#line 963 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__MethodName_18));
#line 963 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__InstanceMethodDefn_26));
#line 963 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__MethodArity_20));
#line 963 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__MethodContext_21));
#line 963 "intermod.m"
    }
#line 907 "intermod.m"
  }
#line 902 "intermod.m"
}

#line 857 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_3(
#line 857 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 857 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 857 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 857 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 857 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 857 "intermod.m"
{
#line 857 "intermod.m"
  {
#line 857 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 857 "intermod.m"
    MR_Word transform_hlds__intermod__conv5_DoWrite_6;
#line 857 "intermod.m"
    MR_Word transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9;

#line 857 "intermod.m"
    {
#line 857 "intermod.m"
      transform_hlds__intermod__add_proc_4_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv5_DoWrite_6, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9);
    }
#line 857 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv5_DoWrite_6));
#line 857 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv4_STATE_VARIABLE_Info_9));
#line 857 "intermod.m"
  }
#line 857 "intermod.m"
}

#line 855 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_2(
#line 855 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 855 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 855 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2,
#line 855 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 855 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 855 "intermod.m"
{
#line 855 "intermod.m"
  {
#line 855 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 855 "intermod.m"
    MR_Word transform_hlds__intermod__conv2_InstanceMethod_9;
#line 855 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_PredIds_11;

#line 855 "intermod.m"
    {
#line 855 "intermod.m"
      transform_hlds__intermod__qualify_instance_method_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv2_InstanceMethod_9, ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv1_PredIds_11);
    }
#line 855 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv2_InstanceMethod_9));
#line 855 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv1_PredIds_11));
#line 855 "intermod.m"
  }
#line 855 "intermod.m"
}

#line 840 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0_1(
#line 840 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 840 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 840 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_2)
#line 840 "intermod.m"
{
#line 840 "intermod.m"
  {
#line 840 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 840 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_45;

#line 840 "intermod.m"
    {
#line 840 "intermod.m"
      transform_hlds__intermod__IntroducedFrom__pred__gather_instances_3__842__1_2_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), &transform_hlds__intermod__conv0_HeadVar__2_45);
    }
#line 840 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_45));
#line 840 "intermod.m"
  }
#line 840 "intermod.m"
}

#line 820 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_3_5_p_0(
#line 820 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 820 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 820 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefn_8,
#line 820 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_39,
#line 820 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_40)
#line 820 "intermod.m"
{
#line 823 "intermod.m"
  {
#line 823 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 823 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 0)));
#line 823 "intermod.m"
    MR_Word transform_hlds__intermod__Status_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 1)));
#line 823 "intermod.m"
    MR_Word transform_hlds__intermod__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 2)));
#line 823 "intermod.m"
    MR_Word transform_hlds__intermod__InstanceConstraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 3)));
#line 823 "intermod.m"
    MR_Word transform_hlds__intermod__Types_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 4)));
#line 823 "intermod.m"
    MR_Word transform_hlds__intermod__OriginalTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 5)));
#line 823 "intermod.m"
    MR_Word transform_hlds__intermod__Interface0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 6)));
#line 823 "intermod.m"
    MR_Word transform_hlds__intermod__MaybePredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 7)));
#line 823 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 8)));
#line 823 "intermod.m"
    MR_Word transform_hlds__intermod__Proofs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefn_8, (MR_Integer) 9)));
#line 823 "intermod.m"
    MR_Word transform_hlds__intermod__DefinedThisModule_20;

#line 827 "intermod.m"
    {
#line 827 "intermod.m"
      transform_hlds__intermod__DefinedThisModule_20 = parse_tree__status__status_defined_in_this_module_1_f_0(transform_hlds__intermod__Status_11);
    }
#line 895 "intermod.m"
#line 895 "intermod.m"
    switch (transform_hlds__intermod__DefinedThisModule_20) {
#line 895 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 895 "intermod.m"
      case (MR_Integer) 0:
#line 896 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_40 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 895 "intermod.m"
        break;
#line 895 "intermod.m"
      case (MR_Integer) 1:
#line 829 "intermod.m"
        {
#line 829 "intermod.m"
          MR_Word transform_hlds__intermod__Interface_35;
#line 829 "intermod.m"
          MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_50_50;
#line 883 "intermod.m"
          MR_Word transform_hlds__intermod__V_51_51;

#line 873 "intermod.m"
          if ((transform_hlds__intermod__Interface0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 874 "intermod.m"
            {
#line 875 "intermod.m"
              transform_hlds__intermod__Interface_35 = transform_hlds__intermod__Interface0_16;
#line 874 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 874 "intermod.m"
            }
#line 873 "intermod.m"
          else
#line 837 "intermod.m"
            {
#line 837 "intermod.m"
              MR_Word transform_hlds__intermod__Methods0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Interface0_16, (MR_Integer) 0)));
#line 837 "intermod.m"
              MR_Word transform_hlds__intermod__MethodAL_30;
#line 837 "intermod.m"
              MR_Word transform_hlds__intermod__Methods_31;
#line 837 "intermod.m"
              MR_Word transform_hlds__intermod__PredIds_32;
#line 837 "intermod.m"
              MR_Word transform_hlds__intermod__DoWriteMethodsList_33;
#line 837 "intermod.m"
              MR_Word transform_hlds__intermod__DoWriteMethods_34;
#line 837 "intermod.m"
              MR_Word transform_hlds__intermod__V_46_46;
#line 837 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_49_49;
#line 855 "intermod.m"
              MR_Box transform_hlds__intermod__conv3_PredIds_32;
#line 857 "intermod.m"
              MR_Box transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49;

#line 850 "intermod.m"
              if ((transform_hlds__intermod__MaybePredProcIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 851 "intermod.m"
                {
#line 852 "intermod.m"
                  {
#line 852 "intermod.m"
                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.gather_instances_3\'/5", (MR_String) "method pred_proc_ids not filled in");
#line 852 "intermod.m"
                    return;
                  }
#line 851 "intermod.m"
                }
#line 850 "intermod.m"
              else
#line 839 "intermod.m"
                {
#line 839 "intermod.m"
                  MR_Word transform_hlds__intermod__TypeCtorInfo_57_57 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 839 "intermod.m"
                  MR_Word transform_hlds__intermod__ClassProcs_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybePredProcIds_17, (MR_Integer) 0)));
#line 839 "intermod.m"
                  MR_Word transform_hlds__intermod__ClassPreds0_28;
#line 839 "intermod.m"
                  MR_Word transform_hlds__intermod__ClassPreds_29;

#line 844 "intermod.m"
                  {
#line 844 "intermod.m"
                    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0, transform_hlds__intermod__TypeCtorInfo_57_57, (MR_Word) &transform_hlds__intermod_scalar_common_2[18], transform_hlds__intermod__ClassProcs_23, &transform_hlds__intermod__ClassPreds0_28);
                  }
#line 847 "intermod.m"
                  {
#line 847 "intermod.m"
                    mercury__list__remove_adjacent_dups_2_p_0(transform_hlds__intermod__TypeCtorInfo_57_57, transform_hlds__intermod__ClassPreds0_28, &transform_hlds__intermod__ClassPreds_29);
                  }
#line 848 "intermod.m"
                  {
#line 848 "intermod.m"
                    mercury__assoc_list__from_corresponding_lists_3_p_0(transform_hlds__intermod__TypeCtorInfo_57_57, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, transform_hlds__intermod__ClassPreds_29, transform_hlds__intermod__Methods0_22, &transform_hlds__intermod__MethodAL_30);
                  }
#line 839 "intermod.m"
                }
#line 855 "intermod.m"
              {
#line 855 "intermod.m"
                transform_hlds__intermod__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 855 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[2]));
#line 855 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 1) = ((MR_Box) (transform_hlds__intermod__gather_instances_3_5_p_0_2));
#line 855 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 855 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_46_46, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_6));
#line 855 "intermod.m"
              }
#line 855 "intermod.m"
              {
#line 855 "intermod.m"
                mercury__list__map_foldl_5_p_0((MR_Word) &transform_hlds__intermod_scalar_common_2[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_instance_method_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[9], transform_hlds__intermod__V_46_46, transform_hlds__intermod__MethodAL_30, &transform_hlds__intermod__Methods_31, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &transform_hlds__intermod__conv3_PredIds_32);
              }
#line 855 "intermod.m"
              transform_hlds__intermod__PredIds_32 = ((MR_Word) transform_hlds__intermod__conv3_PredIds_32);
#line 857 "intermod.m"
              {
#line 857 "intermod.m"
                mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, (MR_Word) &transform_hlds__intermod_scalar_common_2[19], transform_hlds__intermod__PredIds_32, &transform_hlds__intermod__DoWriteMethodsList_33, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_39)), &transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49);
              }
#line 857 "intermod.m"
              transform_hlds__intermod__STATE_VARIABLE_Info_49_49 = ((MR_Word) transform_hlds__intermod__conv6_STATE_VARIABLE_Info_49_49);
#line 858 "intermod.m"
              {
#line 858 "intermod.m"
                mercury__bool__and_list_2_p_0(transform_hlds__intermod__DoWriteMethodsList_33, &transform_hlds__intermod__DoWriteMethods_34);
              }
#line 862 "intermod.m"
#line 862 "intermod.m"
              switch (transform_hlds__intermod__DoWriteMethods_34) {
#line 862 "intermod.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 862 "intermod.m"
                case (MR_Integer) 0:
#line 863 "intermod.m"
                  {
#line 867 "intermod.m"
                    transform_hlds__intermod__Interface_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 871 "intermod.m"
                    transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_0_39;
#line 863 "intermod.m"
                  }
#line 862 "intermod.m"
                  break;
#line 862 "intermod.m"
                case (MR_Integer) 1:
#line 860 "intermod.m"
                  {
#line 861 "intermod.m"
                    {
#line 861 "intermod.m"
                      transform_hlds__intermod__Interface_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 861 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__Interface_35, 0) = ((MR_Box) (transform_hlds__intermod__Methods_31));
#line 861 "intermod.m"
                    }
#line 860 "intermod.m"
                    transform_hlds__intermod__STATE_VARIABLE_Info_50_50 = transform_hlds__intermod__STATE_VARIABLE_Info_49_49;
#line 860 "intermod.m"
                  }
#line 862 "intermod.m"
                  break;
#line 862 "intermod.m"
              }
#line 837 "intermod.m"
            }
#line 881 "intermod.m"
          transform_hlds__intermod__succeeded = (transform_hlds__intermod__Interface_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 882 "intermod.m"
          if (transform_hlds__intermod__succeeded)
#line 882 "intermod.m"
            {
#line 883 "intermod.m"
              {
#line 883 "intermod.m"
                transform_hlds__intermod__V_51_51 = parse_tree__status__status_is_exported_1_f_0(transform_hlds__intermod__Status_11);
              }
#line 883 "intermod.m"
              transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_51_51 == (MR_Integer) 0);
#line 882 "intermod.m"
              transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 882 "intermod.m"
            }
#line 882 "intermod.m"
          transform_hlds__intermod__succeeded = !(transform_hlds__intermod__succeeded);
#line 892 "intermod.m"
          if (transform_hlds__intermod__succeeded)
#line 888 "intermod.m"
            {
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__InstanceDefnToWrite_36;
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__Instances0_37;
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__Instances_38;
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__V_52_52;
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__V_74_74;
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__V_75_75;
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__V_76_76;
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__V_77_77;
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__V_78_78;
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__V_79_79;
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__V_80_80;
#line 888 "intermod.m"
              MR_Word transform_hlds__intermod__V_81_81;

#line 886 "intermod.m"
              {
#line 886 "intermod.m"
                transform_hlds__intermod__InstanceDefnToWrite_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 886 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 0) = ((MR_Box) (transform_hlds__intermod__ModuleName_10));
#line 886 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 1) = ((MR_Box) (transform_hlds__intermod__Status_11));
#line 886 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 2) = ((MR_Box) (transform_hlds__intermod__Context_12));
#line 886 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 3) = ((MR_Box) (transform_hlds__intermod__InstanceConstraints_13));
#line 886 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 4) = ((MR_Box) (transform_hlds__intermod__Types_14));
#line 886 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 5) = ((MR_Box) (transform_hlds__intermod__OriginalTypes_15));
#line 886 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 6) = ((MR_Box) (transform_hlds__intermod__Interface_35));
#line 886 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 7) = ((MR_Box) (transform_hlds__intermod__MaybePredProcIds_17));
#line 886 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_18));
#line 886 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__InstanceDefnToWrite_36, 9) = ((MR_Box) (transform_hlds__intermod__Proofs_19));
#line 886 "intermod.m"
              }
#line 2168 "intermod.m"
              transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 0)));
#line 2168 "intermod.m"
              transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 1)));
#line 2168 "intermod.m"
              transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 2)));
#line 2168 "intermod.m"
              transform_hlds__intermod__Instances0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 3)));
#line 2168 "intermod.m"
              transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 4)));
#line 2168 "intermod.m"
              transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 5)));
#line 2168 "intermod.m"
              transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 6)));
#line 2168 "intermod.m"
              transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 7)));
#line 2168 "intermod.m"
              transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_50_50, (MR_Integer) 8)));
#line 890 "intermod.m"
              {
#line 890 "intermod.m"
                transform_hlds__intermod__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 890 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_52_52, 0) = ((MR_Box) (transform_hlds__intermod__ClassId_7));
#line 890 "intermod.m"
                MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_52_52, 1) = ((MR_Box) (transform_hlds__intermod__InstanceDefnToWrite_36));
#line 890 "intermod.m"
              }
#line 890 "intermod.m"
              {
#line 890 "intermod.m"
                transform_hlds__intermod__Instances_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__Instances_38, 0) = ((MR_Box) (transform_hlds__intermod__V_52_52));
#line 890 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__Instances_38, 1) = ((MR_Box) (transform_hlds__intermod__Instances0_37));
#line 890 "intermod.m"
              }
#line 2179 "intermod.m"
              {
#line 2179 "intermod.m"
                MR_Word base;
#line 2179 "intermod.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2179 "intermod.m"
                *transform_hlds__intermod__STATE_VARIABLE_Info_40 = base;
#line 2179 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_74_74));
#line 2179 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_75_75));
#line 2179 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_76_76));
#line 2179 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__Instances_38));
#line 2179 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_77_77));
#line 2179 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_78_78));
#line 2179 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_79_79));
#line 2179 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_80_80));
#line 2179 "intermod.m"
                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_81_81));
#line 2179 "intermod.m"
              }
#line 888 "intermod.m"
            }
#line 892 "intermod.m"
          else
#line 892 "intermod.m"
            *transform_hlds__intermod__STATE_VARIABLE_Info_40 = transform_hlds__intermod__STATE_VARIABLE_Info_50_50;
#line 829 "intermod.m"
        }
#line 895 "intermod.m"
        break;
#line 895 "intermod.m"
    }
#line 823 "intermod.m"
  }
#line 820 "intermod.m"
}

#line 818 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0_1(
#line 818 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 818 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 818 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 818 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 818 "intermod.m"
{
#line 818 "intermod.m"
  {
#line 818 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 818 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40;

#line 818 "intermod.m"
    {
#line 818 "intermod.m"
      transform_hlds__intermod__gather_instances_3_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40);
    }
#line 818 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_40));
#line 818 "intermod.m"
  }
#line 818 "intermod.m"
}

#line 813 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__gather_instances_2_5_p_0(
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_6,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__ClassId_7,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__InstanceDefns_8,
#line 813 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_10,
#line 813 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_11)
#line 813 "intermod.m"
{
#line 817 "intermod.m"
  {
#line 817 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 817 "intermod.m"
    MR_Word transform_hlds__intermod__V_12_12;
#line 818 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11;

#line 818 "intermod.m"
    {
#line 818 "intermod.m"
      transform_hlds__intermod__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 818 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[1]));
#line 818 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 1) = ((MR_Box) (transform_hlds__intermod__gather_instances_2_5_p_0_1));
#line 818 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 818 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_6));
#line 818 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_12_12, 4) = ((MR_Box) (transform_hlds__intermod__ClassId_7));
#line 818 "intermod.m"
    }
#line 818 "intermod.m"
    {
#line 818 "intermod.m"
      mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0, (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_12_12, transform_hlds__intermod__InstanceDefns_8, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_0_10)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11);
    }
#line 818 "intermod.m"
    *transform_hlds__intermod__STATE_VARIABLE_Info_11 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_11);
#line 817 "intermod.m"
  }
#line 813 "intermod.m"
}

#line 766 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(
#line 766 "intermod.m"
  MR_Word transform_hlds__intermod__RHS0_6,
#line 766 "intermod.m"
  MR_Word * transform_hlds__intermod__RHS_7,
#line 766 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 766 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_28,
#line 766 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_29)
#line 766 "intermod.m"
{
#line 771 "intermod.m"
  {
#line 771 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 771 "intermod.m"
#line 771 "intermod.m"
    switch (MR_tag((MR_Word) transform_hlds__intermod__RHS0_6)) {
#line 771 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 771 "intermod.m"
      case (MR_Integer) 0:
#line 771 "intermod.m"
        {
#line 772 "intermod.m"
          *transform_hlds__intermod__RHS_7 = transform_hlds__intermod__RHS0_6;
#line 773 "intermod.m"
          *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 771 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 771 "intermod.m"
        }
#line 771 "intermod.m"
        break;
#line 771 "intermod.m"
      case (MR_Integer) 1:
#line 781 "intermod.m"
        {
#line 781 "intermod.m"
          MR_Word transform_hlds__intermod__Functor_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)));
#line 781 "intermod.m"
          MR_Word transform_hlds__intermod___Exist_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 1)));
#line 781 "intermod.m"
          MR_Word transform_hlds__intermod___Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__RHS0_6, (MR_Integer) 2)));
#line 790 "intermod.m"
          MR_Word transform_hlds__intermod__ShroudedPredProcId_24;

#line 782 "intermod.m"
          *transform_hlds__intermod__RHS_7 = transform_hlds__intermod__RHS0_6;
#line 784 "intermod.m"
          transform_hlds__intermod__succeeded = ((((MR_tag((MR_Word) transform_hlds__intermod__Functor_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Functor_21, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 784 "intermod.m"
          if (transform_hlds__intermod__succeeded)
#line 784 "intermod.m"
            {
#line 784 "intermod.m"
              transform_hlds__intermod__ShroudedPredProcId_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__Functor_21, (MR_Integer) 1)));
#line 788 "intermod.m"
              {
#line 788 "intermod.m"
                MR_Word transform_hlds__intermod__PredId_26;
#line 788 "intermod.m"
                MR_Word transform_hlds__intermod__V_30_30;
#line 788 "intermod.m"
                MR_Integer transform_hlds__intermod__V_27_27;
#line 633 "intermod.m"
                MR_Word transform_hlds__intermod__V_39_39;

#line 788 "intermod.m"
                {
#line 788 "intermod.m"
                  transform_hlds__intermod__V_30_30 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(transform_hlds__intermod__ShroudedPredProcId_24);
                }
#line 788 "intermod.m"
                transform_hlds__intermod__PredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, (MR_Integer) 0)));
#line 788 "intermod.m"
                transform_hlds__intermod__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_30_30, (MR_Integer) 1)));
#line 633 "intermod.m"
                {
#line 633 "intermod.m"
                  transform_hlds__intermod__V_39_39 = hlds__hlds_pred__invalid_pred_id_0_f_0();
                }
#line 633 "intermod.m"
                {
#line 633 "intermod.m"
                  transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_26, transform_hlds__intermod__V_39_39);
                }
#line 638 "intermod.m"
                if (transform_hlds__intermod__succeeded)
#line 637 "intermod.m"
                  {
#line 637 "intermod.m"
                    *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 637 "intermod.m"
                    *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 637 "intermod.m"
                  }
#line 638 "intermod.m"
                else
#line 639 "intermod.m"
                  {
#line 639 "intermod.m"
                    transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_26, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_28, transform_hlds__intermod__STATE_VARIABLE_Info_29);
#line 639 "intermod.m"
                    return;
                  }
#line 788 "intermod.m"
              }
#line 784 "intermod.m"
            }
#line 784 "intermod.m"
          else
#line 800 "intermod.m"
            {
#line 800 "intermod.m"
              *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 800 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_29 = transform_hlds__intermod__STATE_VARIABLE_Info_0_28;
#line 800 "intermod.m"
            }
#line 781 "intermod.m"
        }
#line 771 "intermod.m"
        break;
#line 771 "intermod.m"
      case (MR_Integer) 2:
#line 776 "intermod.m"
        {
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__Purity_11 = ((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__HOGroundness_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__PorF_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__NonLocals_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 2)));
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__QuantVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 3)));
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__Modes_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 4)));
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__Detism_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 5)));
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__Goal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__RHS0_6, (MR_Integer) 6)));
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__Goal_20;
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_19, (MR_Integer) 0)));
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__GoalInfo_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_19, (MR_Integer) 1)));
#line 776 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr_49;

#line 483 "intermod.m"
          {
#line 483 "intermod.m"
            transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_47, &transform_hlds__intermod__GoalExpr_49, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_28, transform_hlds__intermod__STATE_VARIABLE_Info_29);
          }
#line 484 "intermod.m"
          {
#line 484 "intermod.m"
            transform_hlds__intermod__Goal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_20, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_49));
#line 484 "intermod.m"
            MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_20, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_48));
#line 484 "intermod.m"
          }
#line 778 "intermod.m"
          {
#line 778 "intermod.m"
            MR_Word base;
#line 778 "intermod.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 778 "intermod.m"
            *transform_hlds__intermod__RHS_7 = base;
#line 778 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) ((transform_hlds__intermod__Purity_11 | ((((transform_hlds__intermod__HOGroundness_12 << (MR_Integer) 2)) | ((transform_hlds__intermod__PorF_13 << (MR_Integer) 3)))))));
#line 778 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 1) = (MR_Integer) 0;
#line 778 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (transform_hlds__intermod__NonLocals_15));
#line 778 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (transform_hlds__intermod__QuantVars_16));
#line 778 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 4) = ((MR_Box) (transform_hlds__intermod__Modes_17));
#line 778 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 5) = ((MR_Box) (transform_hlds__intermod__Detism_18));
#line 778 "intermod.m"
            MR_hl_field(MR_mktag(2), base, 6) = ((MR_Box) (transform_hlds__intermod__Goal_20));
#line 778 "intermod.m"
          }
#line 776 "intermod.m"
        }
#line 771 "intermod.m"
        break;
#line 771 "intermod.m"
    }
#line 771 "intermod.m"
  }
#line 766 "intermod.m"
}

#line 675 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_1(
#line 675 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 675 "intermod.m"
{
#line 675 "intermod.m"
  {
#line 675 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 675 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0, 1);
#line 675 "intermod.m"
  }
#line 675 "intermod.m"
}

#line 676 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_3(
#line 676 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 676 "intermod.m"
{
#line 676 "intermod.m"
  {
#line 676 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 676 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15 = ((MR_Integer) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15);
#line 676 "intermod.m"
    {
#line 676 "intermod.m"
      transform_hlds__intermod__add_proc_2_4_p_0_2(transform_hlds__intermod__env_ptr);
#line 676 "intermod.m"
      return;
    }
#line 676 "intermod.m"
  }
#line 676 "intermod.m"
}

#line 675 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_2(
#line 675 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 675 "intermod.m"
{
#line 675 "intermod.m"
  {
#line 675 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 675 "intermod.m"
    {
#line 677 "intermod.m"
      MR_Box transform_hlds__intermod__conv1_ProcInfo_16;

#line 16153 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 677 "intermod.m"
      {
#line 677 "intermod.m"
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeCtorInfo_38_38, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcId_15, &transform_hlds__intermod__conv1_ProcInfo_16);
      }
#line 677 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16 = ((MR_Word) transform_hlds__intermod__conv1_ProcInfo_16);
#line 678 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 678 "intermod.m"
      {
#line 678 "intermod.m"
        hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcInfo_16, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41);
      }
#line 16169 "transform_hlds.intermod.c"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44 = (MR_Word) &transform_hlds__intermod_scalar_common_1[23];
#line 678 "intermod.m"
      {
#line 678 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__TypeInfo_44_44, ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_26_26)), ((MR_Box) ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__V_41_41)));
      }
#line 678 "intermod.m"
      if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 678 "intermod.m"
        {
#line 678 "intermod.m"
          transform_hlds__intermod__add_proc_2_4_p_0_1(transform_hlds__intermod__env_ptr);
#line 678 "intermod.m"
          return;
        }
#line 675 "intermod.m"
    }
#line 675 "intermod.m"
  }
#line 675 "intermod.m"
}

#line 675 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0_4(
#line 675 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 675 "intermod.m"
{
#line 675 "intermod.m"
  {
#line 675 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 675 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__commit_0) == 0)
#line 675 "intermod.m"
      {
#line 675 "intermod.m"
        {
#line 675 "intermod.m"
          {
#line 675 "intermod.m"
            hlds__hlds_pred__pred_info_get_proc_table_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__Procs_14);
          }
#line 676 "intermod.m"
          {
#line 676 "intermod.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__conv0_ProcId_15, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11, transform_hlds__intermod__add_proc_2_4_p_0_3, transform_hlds__intermod__env_ptr);
          }
#line 675 "intermod.m"
        }
#line 675 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 675 "intermod.m"
      }
#line 675 "intermod.m"
    else
#line 675 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 675 "intermod.m"
  }
#line 675 "intermod.m"
}

#line 642 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_2_4_p_0(
#line 642 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 642 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 642 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_24,
#line 642 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_25)
#line 642 "intermod.m"
{
#line 642 "intermod.m"
  {
#line 642 "intermod.m"
    struct transform_hlds__intermod__add_proc_2_4_p_0_env_0_s transform_hlds__intermod__env;

#line 645 "intermod.m"
    {
#line 645 "intermod.m"
      MR_Word transform_hlds__intermod__ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 645 "intermod.m"
      MR_Word transform_hlds__intermod__Status_10;
#line 645 "intermod.m"
      MR_Word transform_hlds__intermod__Markers_12;
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2170 "intermod.m"
      MR_Word transform_hlds__intermod__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));

#line 647 "intermod.m"
      {
#line 647 "intermod.m"
        hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__intermod__ModuleInfo_8, transform_hlds__intermod__PredId_5, &(transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 648 "intermod.m"
      {
#line 648 "intermod.m"
        hlds__hlds_pred__pred_info_get_import_status_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__Status_10);
      }
#line 649 "intermod.m"
      {
#line 649 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__ProcIds_11 = hlds__hlds_pred__pred_info_procids_1_f_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 650 "intermod.m"
      {
#line 650 "intermod.m"
        hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__Markers_12);
      }
#line 657 "intermod.m"
      {
#line 657 "intermod.m"
        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
      }
#line 658 "intermod.m"
      if (!((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded))
#line 658 "intermod.m"
        {
#line 658 "intermod.m"
          MR_Word transform_hlds__intermod__V_13_13;

#line 658 "intermod.m"
          {
#line 658 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_13_13);
          }
#line 658 "intermod.m"
        }
#line 662 "intermod.m"
      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 661 "intermod.m"
        {
#line 661 "intermod.m"
          *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 661 "intermod.m"
          *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 661 "intermod.m"
        }
#line 662 "intermod.m"
      else
#line 682 "intermod.m"
        {
#line 673 "intermod.m"
          {
#line 673 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, (MR_Integer) 3);
          }
#line 674 "intermod.m"
          if (!((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded))
#line 675 "intermod.m"
            {
#line 675 "intermod.m"
              {
#line 675 "intermod.m"
                transform_hlds__intermod__add_proc_2_4_p_0_4(&transform_hlds__intermod__env);
              }
#line 675 "intermod.m"
            }
#line 682 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 681 "intermod.m"
            {
#line 681 "intermod.m"
              *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 681 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 681 "intermod.m"
            }
#line 682 "intermod.m"
          else
#line 712 "intermod.m"
            {
#line 708 "intermod.m"
              MR_Word transform_hlds__intermod__V_42_42;
#line 709 "intermod.m"
              MR_Word transform_hlds__intermod__V_29_29;

#line 708 "intermod.m"
              {
#line 708 "intermod.m"
                hlds__hlds_pred__pred_info_get_purity_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_42_42);
              }
#line 708 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = ((MR_Integer) 2 == transform_hlds__intermod__V_42_42);
#line 708 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 708 "intermod.m"
                {
#line 709 "intermod.m"
                  transform_hlds__intermod__V_29_29 = (MR_Integer) 22;
#line 709 "intermod.m"
                  {
#line 709 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, transform_hlds__intermod__V_29_29);
                  }
#line 709 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded);
#line 708 "intermod.m"
                }
#line 712 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 711 "intermod.m"
                {
#line 711 "intermod.m"
                  *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 711 "intermod.m"
                  *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 711 "intermod.m"
                }
#line 712 "intermod.m"
              else
#line 725 "intermod.m"
                {
#line 719 "intermod.m"
                  if ((transform_hlds__intermod__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 718 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 719 "intermod.m"
                  else
#line 719 "intermod.m"
                  if (((MR_tag((MR_Word) transform_hlds__intermod__Status_10)) == (MR_mktag((MR_Integer) 1))))
#line 720 "intermod.m"
                    {
#line 720 "intermod.m"
                      MR_Word transform_hlds__intermod__ExternalStatus_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Status_10, (MR_Integer) 0)));
#line 720 "intermod.m"
                      MR_Word transform_hlds__intermod__V_30_30;

#line 721 "intermod.m"
                      {
#line 721 "intermod.m"
                        transform_hlds__intermod__V_30_30 = parse_tree__status__status_is_exported_1_f_0(transform_hlds__intermod__ExternalStatus_17);
                      }
#line 721 "intermod.m"
                      (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = (transform_hlds__intermod__V_30_30 == (MR_Integer) 1);
#line 720 "intermod.m"
                    }
#line 719 "intermod.m"
                  else
#line 719 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 725 "intermod.m"
                  if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 724 "intermod.m"
                    {
#line 724 "intermod.m"
                      *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 724 "intermod.m"
                      *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 724 "intermod.m"
                    }
#line 725 "intermod.m"
                  else
#line 734 "intermod.m"
                    {
#line 730 "intermod.m"
                      MR_Word transform_hlds__intermod__V_31_31;
#line 730 "intermod.m"
                      MR_Word transform_hlds__intermod__V_43_43;

#line 730 "intermod.m"
                      {
#line 730 "intermod.m"
                        hlds__hlds_pred__pred_info_get_markers_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9, &transform_hlds__intermod__V_43_43);
                      }
#line 730 "intermod.m"
                      {
#line 730 "intermod.m"
                        (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__intermod_scalar_common_1[24], ((MR_Box) (transform_hlds__intermod__Markers_12)), ((MR_Box) (transform_hlds__intermod__V_43_43)));
                      }
#line 730 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 730 "intermod.m"
                        {
#line 731 "intermod.m"
                          transform_hlds__intermod__V_31_31 = (MR_Integer) 9;
#line 731 "intermod.m"
                          {
#line 731 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_12, transform_hlds__intermod__V_31_31);
                          }
#line 730 "intermod.m"
                        }
#line 734 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 733 "intermod.m"
                        {
#line 733 "intermod.m"
                          *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 733 "intermod.m"
                          *transform_hlds__intermod__STATE_VARIABLE_Info_25 = transform_hlds__intermod__STATE_VARIABLE_Info_0_24;
#line 733 "intermod.m"
                        }
#line 734 "intermod.m"
                      else
#line 745 "intermod.m"
                        {
#line 739 "intermod.m"
                          {
#line 739 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = transform_hlds__intermod__import_status_to_write_1_p_0(transform_hlds__intermod__Status_10);
                          }
#line 745 "intermod.m"
                          if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 741 "intermod.m"
                            {
#line 741 "intermod.m"
                              MR_Word transform_hlds__intermod__PredDecls0_18;
#line 741 "intermod.m"
                              MR_Word transform_hlds__intermod__PredDecls_19;
#line 2167 "intermod.m"
                              MR_Word transform_hlds__intermod__V_56_56;
#line 2167 "intermod.m"
                              MR_Word transform_hlds__intermod__V_57_57;
#line 2167 "intermod.m"
                              MR_Word transform_hlds__intermod__V_58_58;
#line 2167 "intermod.m"
                              MR_Word transform_hlds__intermod__V_59_59;
#line 2167 "intermod.m"
                              MR_Word transform_hlds__intermod__V_60_60;
#line 2167 "intermod.m"
                              MR_Word transform_hlds__intermod__V_61_61;
#line 2167 "intermod.m"
                              MR_Word transform_hlds__intermod__V_62_62;
#line 2167 "intermod.m"
                              MR_Word transform_hlds__intermod__V_63_63;
#line 2177 "intermod.m"
                              MR_Word transform_hlds__intermod__V_66_66;
#line 2177 "intermod.m"
                              MR_Word transform_hlds__intermod__V_67_67;
#line 2177 "intermod.m"
                              MR_Word transform_hlds__intermod__V_69_69;
#line 2177 "intermod.m"
                              MR_Word transform_hlds__intermod__V_70_70;
#line 2177 "intermod.m"
                              MR_Word transform_hlds__intermod__V_71_71;
#line 2177 "intermod.m"
                              MR_Word transform_hlds__intermod__V_72_72;
#line 2177 "intermod.m"
                              MR_Word transform_hlds__intermod__V_73_73;
#line 2177 "intermod.m"
                              MR_Word transform_hlds__intermod__V_74_74;
#line 2177 "intermod.m"
                              MR_Word transform_hlds__intermod__V_68_68;

#line 741 "intermod.m"
                              *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 2167 "intermod.m"
                              transform_hlds__intermod__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2167 "intermod.m"
                              transform_hlds__intermod__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2167 "intermod.m"
                              transform_hlds__intermod__PredDecls0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2167 "intermod.m"
                              transform_hlds__intermod__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2167 "intermod.m"
                              transform_hlds__intermod__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2167 "intermod.m"
                              transform_hlds__intermod__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2167 "intermod.m"
                              transform_hlds__intermod__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2167 "intermod.m"
                              transform_hlds__intermod__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2167 "intermod.m"
                              transform_hlds__intermod__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 743 "intermod.m"
                              {
#line 743 "intermod.m"
                                mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, ((MR_Box) (transform_hlds__intermod__PredId_5)), transform_hlds__intermod__PredDecls0_18, &transform_hlds__intermod__PredDecls_19);
                              }
#line 2177 "intermod.m"
                              transform_hlds__intermod__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2177 "intermod.m"
                              transform_hlds__intermod__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2177 "intermod.m"
                              transform_hlds__intermod__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2177 "intermod.m"
                              transform_hlds__intermod__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2177 "intermod.m"
                              transform_hlds__intermod__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2177 "intermod.m"
                              transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2177 "intermod.m"
                              transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2177 "intermod.m"
                              transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2177 "intermod.m"
                              transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 2177 "intermod.m"
                              {
#line 2177 "intermod.m"
                                MR_Word base;
#line 2177 "intermod.m"
                                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2177 "intermod.m"
                                *transform_hlds__intermod__STATE_VARIABLE_Info_25 = base;
#line 2177 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__V_66_66));
#line 2177 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_67_67));
#line 2177 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__PredDecls_19));
#line 2177 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_69_69));
#line 2177 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_70_70));
#line 2177 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_71_71));
#line 2177 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_72_72));
#line 2177 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_73_73));
#line 2177 "intermod.m"
                                MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_74_74));
#line 2177 "intermod.m"
                              }
#line 741 "intermod.m"
                            }
#line 745 "intermod.m"
                          else
#line 757 "intermod.m"
                            {
#line 747 "intermod.m"
                              if ((transform_hlds__intermod__Status_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 747 "intermod.m"
                              else
#line 747 "intermod.m"
                              if (((MR_tag((MR_Word) transform_hlds__intermod__Status_10)) == (MR_mktag((MR_Integer) 2))))
#line 746 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_TRUE;
#line 747 "intermod.m"
                              else
#line 747 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded = MR_FALSE;
#line 757 "intermod.m"
                              if ((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__succeeded)
#line 752 "intermod.m"
                                {
#line 752 "intermod.m"
                                  MR_Word transform_hlds__intermod__PredModule_21;
#line 752 "intermod.m"
                                  MR_Word transform_hlds__intermod__Modules0_22;
#line 752 "intermod.m"
                                  MR_Word transform_hlds__intermod__Modules_23;
#line 2165 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_76_76;
#line 2165 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_77_77;
#line 2165 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_78_78;
#line 2165 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_79_79;
#line 2165 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_80_80;
#line 2165 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_81_81;
#line 2165 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_82_82;
#line 2165 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_83_83;
#line 2175 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_87_87;
#line 2175 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_88_88;
#line 2175 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_89_89;
#line 2175 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_90_90;
#line 2175 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_91_91;
#line 2175 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_92_92;
#line 2175 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_93_93;
#line 2175 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_94_94;
#line 2175 "intermod.m"
                                  MR_Word transform_hlds__intermod__V_86_86;

#line 752 "intermod.m"
                                  *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 1;
#line 753 "intermod.m"
                                  {
#line 753 "intermod.m"
                                    transform_hlds__intermod__PredModule_21 = hlds__hlds_pred__pred_info_module_1_f_0((transform_hlds__intermod__env).transform_hlds__intermod__add_proc_2_4_p_0_env_0__PredInfo_9);
                                  }
#line 2165 "intermod.m"
                                  transform_hlds__intermod__Modules0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2165 "intermod.m"
                                  transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2165 "intermod.m"
                                  transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2165 "intermod.m"
                                  transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2165 "intermod.m"
                                  transform_hlds__intermod__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2165 "intermod.m"
                                  transform_hlds__intermod__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2165 "intermod.m"
                                  transform_hlds__intermod__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2165 "intermod.m"
                                  transform_hlds__intermod__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2165 "intermod.m"
                                  transform_hlds__intermod__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 755 "intermod.m"
                                  {
#line 755 "intermod.m"
                                    mercury__set__insert_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, ((MR_Box) (transform_hlds__intermod__PredModule_21)), transform_hlds__intermod__Modules0_22, &transform_hlds__intermod__Modules_23);
                                  }
#line 2175 "intermod.m"
                                  transform_hlds__intermod__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 0)));
#line 2175 "intermod.m"
                                  transform_hlds__intermod__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 1)));
#line 2175 "intermod.m"
                                  transform_hlds__intermod__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 2)));
#line 2175 "intermod.m"
                                  transform_hlds__intermod__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 3)));
#line 2175 "intermod.m"
                                  transform_hlds__intermod__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 4)));
#line 2175 "intermod.m"
                                  transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 5)));
#line 2175 "intermod.m"
                                  transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 6)));
#line 2175 "intermod.m"
                                  transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 7)));
#line 2175 "intermod.m"
                                  transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_0_24, (MR_Integer) 8)));
#line 2175 "intermod.m"
                                  {
#line 2175 "intermod.m"
                                    MR_Word base;
#line 2175 "intermod.m"
                                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2175 "intermod.m"
                                    *transform_hlds__intermod__STATE_VARIABLE_Info_25 = base;
#line 2175 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__Modules_23));
#line 2175 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2175 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (transform_hlds__intermod__V_88_88));
#line 2175 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (transform_hlds__intermod__V_89_89));
#line 2175 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (transform_hlds__intermod__V_90_90));
#line 2175 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (transform_hlds__intermod__V_91_91));
#line 2175 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (transform_hlds__intermod__V_92_92));
#line 2175 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (transform_hlds__intermod__V_93_93));
#line 2175 "intermod.m"
                                    MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (transform_hlds__intermod__V_94_94));
#line 2175 "intermod.m"
                                  }
#line 752 "intermod.m"
                                }
#line 757 "intermod.m"
                              else
#line 758 "intermod.m"
                                {
#line 758 "intermod.m"
                                  {
#line 758 "intermod.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.add_proc_2\'/4", (MR_String) "unexpected status");
#line 758 "intermod.m"
                                    return;
                                  }
#line 758 "intermod.m"
                                }
#line 757 "intermod.m"
                            }
#line 745 "intermod.m"
                        }
#line 734 "intermod.m"
                    }
#line 725 "intermod.m"
                }
#line 712 "intermod.m"
            }
#line 682 "intermod.m"
        }
#line 645 "intermod.m"
    }
#line 642 "intermod.m"
  }
#line 642 "intermod.m"
}

#line 629 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__add_proc_4_p_0(
#line 629 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_5,
#line 629 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_6,
#line 629 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_8,
#line 629 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_9)
#line 629 "intermod.m"
{
#line 638 "intermod.m"
  {
#line 638 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 633 "intermod.m"
    MR_Word transform_hlds__intermod__V_11_11;

#line 633 "intermod.m"
    {
#line 633 "intermod.m"
      transform_hlds__intermod__V_11_11 = hlds__hlds_pred__invalid_pred_id_0_f_0();
    }
#line 633 "intermod.m"
    {
#line 633 "intermod.m"
      transform_hlds__intermod__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(transform_hlds__intermod__PredId_5, transform_hlds__intermod__V_11_11);
    }
#line 638 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 637 "intermod.m"
      {
#line 637 "intermod.m"
        *transform_hlds__intermod__DoWrite_6 = (MR_Integer) 0;
#line 637 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_9 = transform_hlds__intermod__STATE_VARIABLE_Info_0_8;
#line 637 "intermod.m"
      }
#line 638 "intermod.m"
    else
#line 639 "intermod.m"
      {
#line 639 "intermod.m"
        transform_hlds__intermod__add_proc_2_4_p_0(transform_hlds__intermod__PredId_5, transform_hlds__intermod__DoWrite_6, transform_hlds__intermod__STATE_VARIABLE_Info_0_8, transform_hlds__intermod__STATE_VARIABLE_Info_9);
#line 639 "intermod.m"
        return;
      }
#line 638 "intermod.m"
  }
#line 629 "intermod.m"
}

#line 602 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_cases_5_p_0(
#line 602 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 602 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 602 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 602 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 602 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 602 "intermod.m"
{
#line 605 "intermod.m"
  {
#line 605 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 605 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "intermod.m"
      {
#line 605 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 605 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 605 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 605 "intermod.m"
      }
#line 605 "intermod.m"
    else
#line 606 "intermod.m"
      {
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__Case0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__Cases0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__Case_11;
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__Cases_12;
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__MainConsId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 0)));
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__OtherConsIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 1)));
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case0_9, (MR_Integer) 2)));
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_18;
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22;
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_23_23;
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_17, (MR_Integer) 0)));
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_17, (MR_Integer) 1)));
#line 606 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_34;

#line 483 "intermod.m"
        {
#line 483 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_32, &transform_hlds__intermod__GoalExpr_34, &transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_23_23);
        }
#line 484 "intermod.m"
        {
#line 484 "intermod.m"
          transform_hlds__intermod__Goal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_18, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_34));
#line 484 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_18, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_33));
#line 484 "intermod.m"
        }
#line 609 "intermod.m"
        {
#line 609 "intermod.m"
          transform_hlds__intermod__Case_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 609 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 0) = ((MR_Box) (transform_hlds__intermod__MainConsId_15));
#line 609 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 1) = ((MR_Box) (transform_hlds__intermod__OtherConsIds_16));
#line 609 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Case_11, 2) = ((MR_Box) (transform_hlds__intermod__Goal_18));
#line 609 "intermod.m"
        }
#line 613 "intermod.m"
#line 613 "intermod.m"
        switch (transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22) {
#line 613 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 613 "intermod.m"
          case (MR_Integer) 0:
#line 614 "intermod.m"
            {
#line 615 "intermod.m"
              transform_hlds__intermod__Cases_12 = transform_hlds__intermod__Cases0_10;
#line 614 "intermod.m"
              *transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__STATE_VARIABLE_DoWrite_22_22;
#line 614 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_23_23;
#line 614 "intermod.m"
            }
#line 613 "intermod.m"
            break;
#line 613 "intermod.m"
          case (MR_Integer) 1:
#line 612 "intermod.m"
            {
#line 612 "intermod.m"
              transform_hlds__intermod__intermod_traverse_cases_5_p_0(transform_hlds__intermod__Cases0_10, &transform_hlds__intermod__Cases_12, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__STATE_VARIABLE_Info_23_23, transform_hlds__intermod__STATE_VARIABLE_Info_5);
            }
#line 613 "intermod.m"
            break;
#line 613 "intermod.m"
        }
#line 606 "intermod.m"
        {
#line 606 "intermod.m"
          MR_Word base;
#line 606 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "intermod.m"
          *transform_hlds__intermod__HeadVar__2_2 = base;
#line 606 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Case_11));
#line 606 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Cases_12));
#line 606 "intermod.m"
        }
#line 606 "intermod.m"
      }
#line 605 "intermod.m"
  }
#line 602 "intermod.m"
}

#line 587 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(
#line 587 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 587 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 587 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 587 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 587 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 587 "intermod.m"
{
#line 590 "intermod.m"
  {
#line 590 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 590 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 590 "intermod.m"
      {
#line 590 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 590 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 590 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 590 "intermod.m"
      }
#line 590 "intermod.m"
    else
#line 592 "intermod.m"
      {
#line 592 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 592 "intermod.m"
        MR_Word transform_hlds__intermod__Goals0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 592 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_11;
#line 592 "intermod.m"
        MR_Word transform_hlds__intermod__Goals_12;
#line 592 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18;
#line 592 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_19_19;
#line 592 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 0)));
#line 592 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_9, (MR_Integer) 1)));
#line 592 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_30;

#line 483 "intermod.m"
        {
#line 483 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_28, &transform_hlds__intermod__GoalExpr_30, &transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_19_19);
        }
#line 484 "intermod.m"
        {
#line 484 "intermod.m"
          transform_hlds__intermod__Goal_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_11, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_30));
#line 484 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_11, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_29));
#line 484 "intermod.m"
        }
#line 597 "intermod.m"
#line 597 "intermod.m"
        switch (transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18) {
#line 597 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 597 "intermod.m"
          case (MR_Integer) 0:
#line 598 "intermod.m"
            {
#line 599 "intermod.m"
              transform_hlds__intermod__Goals_12 = transform_hlds__intermod__Goals0_10;
#line 598 "intermod.m"
              *transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__STATE_VARIABLE_DoWrite_18_18;
#line 598 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_19_19;
#line 598 "intermod.m"
            }
#line 597 "intermod.m"
            break;
#line 597 "intermod.m"
          case (MR_Integer) 1:
#line 596 "intermod.m"
            {
#line 596 "intermod.m"
              transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__Goals0_10, &transform_hlds__intermod__Goals_12, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__STATE_VARIABLE_Info_19_19, transform_hlds__intermod__STATE_VARIABLE_Info_5);
            }
#line 597 "intermod.m"
            break;
#line 597 "intermod.m"
        }
#line 591 "intermod.m"
        {
#line 591 "intermod.m"
          MR_Word base;
#line 591 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 591 "intermod.m"
          *transform_hlds__intermod__HeadVar__2_2 = base;
#line 591 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Goal_11));
#line 591 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Goals_12));
#line 591 "intermod.m"
        }
#line 592 "intermod.m"
      }
#line 590 "intermod.m"
  }
#line 587 "intermod.m"
}

#line 486 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(
#line 486 "intermod.m"
  MR_Word transform_hlds__intermod__GoalExpr0_6,
#line 486 "intermod.m"
  MR_Word * transform_hlds__intermod__GoalExpr_7,
#line 486 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 486 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_81,
#line 486 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_82)
#line 486 "intermod.m"
{
#line 491 "intermod.m"
  {
#line 491 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 491 "intermod.m"
#line 491 "intermod.m"
    switch (MR_tag((MR_Word) transform_hlds__intermod__GoalExpr0_6)) {
#line 491 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 491 "intermod.m"
      case (MR_Integer) 0:
#line 553 "intermod.m"
        {
#line 553 "intermod.m"
          MR_Word transform_hlds__intermod__SubGoal0_63 = (MR_Word) MR_body(((MR_Word) transform_hlds__intermod__GoalExpr0_6), (MR_Integer) 0);
#line 553 "intermod.m"
          MR_Word transform_hlds__intermod__SubGoal_64;

#line 554 "intermod.m"
          {
#line 554 "intermod.m"
            transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_63, &transform_hlds__intermod__SubGoal_64, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
          }
#line 555 "intermod.m"
          *transform_hlds__intermod__GoalExpr_7 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__intermod__SubGoal_64);
#line 553 "intermod.m"
        }
#line 491 "intermod.m"
        break;
#line 491 "intermod.m"
      case (MR_Integer) 1:
#line 491 "intermod.m"
        {
#line 491 "intermod.m"
          MR_Word transform_hlds__intermod__LVar_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)));
#line 491 "intermod.m"
          MR_Word transform_hlds__intermod__RHS0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 491 "intermod.m"
          MR_Word transform_hlds__intermod__Mode_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 491 "intermod.m"
          MR_Word transform_hlds__intermod__Kind_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 491 "intermod.m"
          MR_Word transform_hlds__intermod__UnifyContext_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 491 "intermod.m"
          MR_Word transform_hlds__intermod__RHS_15;

#line 494 "intermod.m"
          {
#line 494 "intermod.m"
            transform_hlds__intermod__module_qualify_unify_rhs_5_p_0(transform_hlds__intermod__RHS0_11, &transform_hlds__intermod__RHS_15, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
          }
#line 495 "intermod.m"
          {
#line 495 "intermod.m"
            MR_Word base;
#line 495 "intermod.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 495 "intermod.m"
            *transform_hlds__intermod__GoalExpr_7 = base;
#line 495 "intermod.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__LVar_10));
#line 495 "intermod.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__RHS_15));
#line 495 "intermod.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (transform_hlds__intermod__Mode_12));
#line 495 "intermod.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (transform_hlds__intermod__Kind_13));
#line 495 "intermod.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (transform_hlds__intermod__UnifyContext_14));
#line 495 "intermod.m"
          }
#line 491 "intermod.m"
        }
#line 491 "intermod.m"
        break;
#line 491 "intermod.m"
      case (MR_Integer) 2:
#line 497 "intermod.m"
        {
#line 497 "intermod.m"
          MR_Word transform_hlds__intermod__PredId_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)));
#line 497 "intermod.m"
          MR_Integer transform_hlds__intermod__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 497 "intermod.m"
          MR_Word transform_hlds__intermod__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 497 "intermod.m"
          MR_Word transform_hlds__intermod__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 497 "intermod.m"
          MR_Word transform_hlds__intermod__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 497 "intermod.m"
          MR_Word transform_hlds__intermod__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));

#line 499 "intermod.m"
          {
#line 499 "intermod.m"
            transform_hlds__intermod__add_proc_4_p_0(transform_hlds__intermod__PredId_16, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
          }
#line 500 "intermod.m"
          *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 497 "intermod.m"
        }
#line 491 "intermod.m"
        break;
#line 491 "intermod.m"
      case (MR_Integer) 3:
#line 491 "intermod.m"
#line 491 "intermod.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 0)))) {
#line 491 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 491 "intermod.m"
          case (MR_Integer) 0:
#line 502 "intermod.m"
            {
#line 502 "intermod.m"
              MR_Word transform_hlds__intermod__CallType_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 502 "intermod.m"
              MR_Word transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 502 "intermod.m"
              MR_Word transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 502 "intermod.m"
              MR_Word transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 502 "intermod.m"
              MR_Word transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));

#line 503 "intermod.m"
              *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 507 "intermod.m"
#line 507 "intermod.m"
              switch (MR_tag((MR_Word) transform_hlds__intermod__CallType_22)) {
#line 507 "intermod.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 507 "intermod.m"
                case (MR_Integer) 0:
#line 506 "intermod.m"
                  *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 507 "intermod.m"
                  break;
#line 507 "intermod.m"
                case (MR_Integer) 1:
#line 507 "intermod.m"
                case (MR_Integer) 2:
#line 507 "intermod.m"
                case (MR_Integer) 3:
#line 512 "intermod.m"
                  *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 507 "intermod.m"
                  break;
#line 507 "intermod.m"
              }
#line 502 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_82 = transform_hlds__intermod__STATE_VARIABLE_Info_0_81;
#line 502 "intermod.m"
            }
#line 491 "intermod.m"
            break;
#line 491 "intermod.m"
          case (MR_Integer) 1:
#line 515 "intermod.m"
            {
#line 515 "intermod.m"
              MR_Word transform_hlds__intermod__Attrs_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 515 "intermod.m"
              MR_Word transform_hlds__intermod__MaybeMayDuplicate_44;
#line 515 "intermod.m"
              MR_Word transform_hlds__intermod__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 515 "intermod.m"
              MR_Integer transform_hlds__intermod__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 515 "intermod.m"
              MR_Word transform_hlds__intermod__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 515 "intermod.m"
              MR_Word transform_hlds__intermod__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 5)));
#line 515 "intermod.m"
              MR_Word transform_hlds__intermod__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 6)));
#line 515 "intermod.m"
              MR_Word transform_hlds__intermod__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 7)));

#line 516 "intermod.m"
              *transform_hlds__intermod__GoalExpr_7 = transform_hlds__intermod__GoalExpr0_6;
#line 519 "intermod.m"
              {
#line 519 "intermod.m"
                transform_hlds__intermod__MaybeMayDuplicate_44 = parse_tree__prog_data__get_may_duplicate_1_f_0(transform_hlds__intermod__Attrs_37);
              }
#line 529 "intermod.m"
              if ((transform_hlds__intermod__MaybeMayDuplicate_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "intermod.m"
                *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 529 "intermod.m"
              else
#line 521 "intermod.m"
                {
#line 521 "intermod.m"
                  MR_Word transform_hlds__intermod__MayDuplicate_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__MaybeMayDuplicate_44, (MR_Integer) 0)));

#line 525 "intermod.m"
#line 525 "intermod.m"
                  switch (transform_hlds__intermod__MayDuplicate_45) {
#line 525 "intermod.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 525 "intermod.m"
                    case (MR_Integer) 0:
#line 524 "intermod.m"
                      *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 1;
#line 525 "intermod.m"
                      break;
#line 525 "intermod.m"
                    case (MR_Integer) 1:
#line 527 "intermod.m"
                      *transform_hlds__intermod__DoWrite_8 = (MR_Integer) 0;
#line 525 "intermod.m"
                      break;
#line 525 "intermod.m"
                  }
#line 521 "intermod.m"
                }
#line 515 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_82 = transform_hlds__intermod__STATE_VARIABLE_Info_0_81;
#line 515 "intermod.m"
            }
#line 491 "intermod.m"
            break;
#line 491 "intermod.m"
          case (MR_Integer) 2:
#line 534 "intermod.m"
            {
#line 534 "intermod.m"
              MR_Word transform_hlds__intermod__ConjType_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 534 "intermod.m"
              MR_Word transform_hlds__intermod__Goals0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 534 "intermod.m"
              MR_Word transform_hlds__intermod__Goals_48;

#line 535 "intermod.m"
              {
#line 535 "intermod.m"
                transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__Goals0_47, &transform_hlds__intermod__Goals_48, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
              }
#line 536 "intermod.m"
              {
#line 536 "intermod.m"
                MR_Word base;
#line 536 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 536 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 536 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 536 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__ConjType_46));
#line 536 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__Goals_48));
#line 536 "intermod.m"
              }
#line 534 "intermod.m"
            }
#line 491 "intermod.m"
            break;
#line 491 "intermod.m"
          case (MR_Integer) 3:
#line 538 "intermod.m"
            {
#line 538 "intermod.m"
              MR_Word transform_hlds__intermod__Goals0_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 538 "intermod.m"
              MR_Word transform_hlds__intermod__Goals_104;

#line 539 "intermod.m"
              {
#line 539 "intermod.m"
                transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__Goals0_103, &transform_hlds__intermod__Goals_104, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
              }
#line 540 "intermod.m"
              {
#line 540 "intermod.m"
                MR_Word base;
#line 540 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 540 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 540 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Goals_104));
#line 540 "intermod.m"
              }
#line 538 "intermod.m"
            }
#line 491 "intermod.m"
            break;
#line 491 "intermod.m"
          case (MR_Integer) 4:
#line 542 "intermod.m"
            {
#line 542 "intermod.m"
              MR_Word transform_hlds__intermod__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 542 "intermod.m"
              MR_Word transform_hlds__intermod__CanFail_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 542 "intermod.m"
              MR_Word transform_hlds__intermod__Cases0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 542 "intermod.m"
              MR_Word transform_hlds__intermod__Cases_52;

#line 543 "intermod.m"
              {
#line 543 "intermod.m"
                transform_hlds__intermod__intermod_traverse_cases_5_p_0(transform_hlds__intermod__Cases0_51, &transform_hlds__intermod__Cases_52, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
              }
#line 544 "intermod.m"
              {
#line 544 "intermod.m"
                MR_Word base;
#line 544 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 544 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 544 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 544 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Var_49));
#line 544 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__CanFail_50));
#line 544 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__intermod__Cases_52));
#line 544 "intermod.m"
              }
#line 542 "intermod.m"
            }
#line 491 "intermod.m"
            break;
#line 491 "intermod.m"
          case (MR_Integer) 5:
#line 557 "intermod.m"
            {
#line 557 "intermod.m"
              MR_Word transform_hlds__intermod__Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 557 "intermod.m"
              MR_Word transform_hlds__intermod__SubGoal0_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 557 "intermod.m"
              MR_Word transform_hlds__intermod__SubGoal_106;

#line 562 "intermod.m"
              {
#line 562 "intermod.m"
                transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_105, &transform_hlds__intermod__SubGoal_106, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
              }
#line 563 "intermod.m"
              {
#line 563 "intermod.m"
                MR_Word base;
#line 563 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 563 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 563 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 563 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Reason_65));
#line 563 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__SubGoal_106));
#line 563 "intermod.m"
              }
#line 557 "intermod.m"
            }
#line 491 "intermod.m"
            break;
#line 491 "intermod.m"
          case (MR_Integer) 6:
#line 546 "intermod.m"
            {
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__Vars_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__Cond0_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 2)));
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__Then0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 3)));
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__Else0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 4)));
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__Cond_57;
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__DoWrite1_58;
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__Then_59;
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__DoWrite2_60;
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__Else_61;
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__DoWrite3_62;
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_91_91;
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_92_92;
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__V_94_94;
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__V_95_95;
#line 546 "intermod.m"
              MR_Word transform_hlds__intermod__V_96_96;

#line 547 "intermod.m"
              {
#line 547 "intermod.m"
                transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Cond0_54, &transform_hlds__intermod__Cond_57, &transform_hlds__intermod__DoWrite1_58, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, &transform_hlds__intermod__STATE_VARIABLE_Info_91_91);
              }
#line 548 "intermod.m"
              {
#line 548 "intermod.m"
                transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Then0_55, &transform_hlds__intermod__Then_59, &transform_hlds__intermod__DoWrite2_60, transform_hlds__intermod__STATE_VARIABLE_Info_91_91, &transform_hlds__intermod__STATE_VARIABLE_Info_92_92);
              }
#line 549 "intermod.m"
              {
#line 549 "intermod.m"
                transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__Else0_56, &transform_hlds__intermod__Else_61, &transform_hlds__intermod__DoWrite3_62, transform_hlds__intermod__STATE_VARIABLE_Info_92_92, transform_hlds__intermod__STATE_VARIABLE_Info_82);
              }
#line 550 "intermod.m"
              {
#line 550 "intermod.m"
                transform_hlds__intermod__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_96_96, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite3_62));
#line 550 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 550 "intermod.m"
              }
#line 550 "intermod.m"
              {
#line 550 "intermod.m"
                transform_hlds__intermod__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_95_95, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite2_60));
#line 550 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_95_95, 1) = ((MR_Box) (transform_hlds__intermod__V_96_96));
#line 550 "intermod.m"
              }
#line 550 "intermod.m"
              {
#line 550 "intermod.m"
                transform_hlds__intermod__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 550 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_94_94, 0) = ((MR_Box) (transform_hlds__intermod__DoWrite1_58));
#line 550 "intermod.m"
                MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_94_94, 1) = ((MR_Box) (transform_hlds__intermod__V_95_95));
#line 550 "intermod.m"
              }
#line 550 "intermod.m"
              {
#line 550 "intermod.m"
                mercury__bool__and_list_2_p_0(transform_hlds__intermod__V_94_94, transform_hlds__intermod__DoWrite_8);
              }
#line 551 "intermod.m"
              {
#line 551 "intermod.m"
                MR_Word base;
#line 551 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 551 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 551 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 551 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__Vars_53));
#line 551 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (transform_hlds__intermod__Cond_57));
#line 551 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (transform_hlds__intermod__Then_59));
#line 551 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (transform_hlds__intermod__Else_61));
#line 551 "intermod.m"
              }
#line 546 "intermod.m"
            }
#line 491 "intermod.m"
            break;
#line 491 "intermod.m"
          case (MR_Integer) 7:
#line 565 "intermod.m"
            {
#line 565 "intermod.m"
              MR_Word transform_hlds__intermod__ShortHand0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__intermod__GoalExpr0_6, (MR_Integer) 1)));
#line 565 "intermod.m"
              MR_Word transform_hlds__intermod__ShortHand_76;

#line 575 "intermod.m"
#line 575 "intermod.m"
              switch (MR_tag((MR_Word) transform_hlds__intermod__ShortHand0_66)) {
#line 575 "intermod.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 575 "intermod.m"
                case (MR_Integer) 0:
#line 580 "intermod.m"
                  {
#line 582 "intermod.m"
                    {
#line 582 "intermod.m"
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.intermod", (MR_String) "predicate \140transform_hlds.intermod.intermod_traverse_goal_expr\'/5", (MR_String) "bi_implication");
#line 582 "intermod.m"
                      return;
                    }
#line 580 "intermod.m"
                  }
#line 575 "intermod.m"
                  break;
#line 575 "intermod.m"
                case (MR_Integer) 1:
#line 568 "intermod.m"
                  {
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__GoalType_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 0)));
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__Outer_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 1)));
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__Inner_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 2)));
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__MaybeOutputVars_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 3)));
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__MainGoal0_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 4)));
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__OrElseGoals0_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 5)));
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__OrElseInners_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 6)));
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__MainGoal_74;
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__OrElseGoals_75;
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_87_87;
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__DoWrite1_107;
#line 568 "intermod.m"
                    MR_Word transform_hlds__intermod__DoWrite2_108;

#line 569 "intermod.m"
                    {
#line 569 "intermod.m"
                      transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__MainGoal0_71, &transform_hlds__intermod__MainGoal_74, &transform_hlds__intermod__DoWrite1_107, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, &transform_hlds__intermod__STATE_VARIABLE_Info_87_87);
                    }
#line 570 "intermod.m"
                    {
#line 570 "intermod.m"
                      transform_hlds__intermod__intermod_traverse_list_of_goals_5_p_0(transform_hlds__intermod__OrElseGoals0_72, &transform_hlds__intermod__OrElseGoals_75, &transform_hlds__intermod__DoWrite2_108, transform_hlds__intermod__STATE_VARIABLE_Info_87_87, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                    }
#line 572 "intermod.m"
                    {
#line 572 "intermod.m"
                      mercury__bool__and_3_p_0(transform_hlds__intermod__DoWrite1_107, transform_hlds__intermod__DoWrite2_108, transform_hlds__intermod__DoWrite_8);
                    }
#line 573 "intermod.m"
                    {
#line 573 "intermod.m"
                      transform_hlds__intermod__ShortHand_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 573 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 0) = ((MR_Box) (transform_hlds__intermod__GoalType_67));
#line 573 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 1) = ((MR_Box) (transform_hlds__intermod__Outer_68));
#line 573 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 2) = ((MR_Box) (transform_hlds__intermod__Inner_69));
#line 573 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 3) = ((MR_Box) (transform_hlds__intermod__MaybeOutputVars_70));
#line 573 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 4) = ((MR_Box) (transform_hlds__intermod__MainGoal_74));
#line 573 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 5) = ((MR_Box) (transform_hlds__intermod__OrElseGoals_75));
#line 573 "intermod.m"
                      MR_hl_field(MR_mktag(1), transform_hlds__intermod__ShortHand_76, 6) = ((MR_Box) (transform_hlds__intermod__OrElseInners_73));
#line 573 "intermod.m"
                    }
#line 568 "intermod.m"
                  }
#line 575 "intermod.m"
                  break;
#line 575 "intermod.m"
                case (MR_Integer) 2:
#line 576 "intermod.m"
                  {
#line 576 "intermod.m"
                    MR_Word transform_hlds__intermod__MaybeIO_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 0)));
#line 576 "intermod.m"
                    MR_Word transform_hlds__intermod__ResultVar_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 1)));
#line 576 "intermod.m"
                    MR_Word transform_hlds__intermod__SubGoal0_109 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand0_66, (MR_Integer) 2)));
#line 576 "intermod.m"
                    MR_Word transform_hlds__intermod__SubGoal_110;

#line 577 "intermod.m"
                    {
#line 577 "intermod.m"
                      transform_hlds__intermod__intermod_traverse_goal_5_p_0(transform_hlds__intermod__SubGoal0_109, &transform_hlds__intermod__SubGoal_110, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_81, transform_hlds__intermod__STATE_VARIABLE_Info_82);
                    }
#line 578 "intermod.m"
                    {
#line 578 "intermod.m"
                      transform_hlds__intermod__ShortHand_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 578 "intermod.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 0) = ((MR_Box) (transform_hlds__intermod__MaybeIO_77));
#line 578 "intermod.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 1) = ((MR_Box) (transform_hlds__intermod__ResultVar_78));
#line 578 "intermod.m"
                      MR_hl_field(MR_mktag(2), transform_hlds__intermod__ShortHand_76, 2) = ((MR_Box) (transform_hlds__intermod__SubGoal_110));
#line 578 "intermod.m"
                    }
#line 576 "intermod.m"
                  }
#line 575 "intermod.m"
                  break;
#line 575 "intermod.m"
              }
#line 584 "intermod.m"
              {
#line 584 "intermod.m"
                MR_Word base;
#line 584 "intermod.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "intermod.m"
                *transform_hlds__intermod__GoalExpr_7 = base;
#line 584 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 584 "intermod.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (transform_hlds__intermod__ShortHand_76));
#line 584 "intermod.m"
              }
#line 565 "intermod.m"
            }
#line 491 "intermod.m"
            break;
#line 491 "intermod.m"
        }
#line 491 "intermod.m"
        break;
#line 491 "intermod.m"
    }
#line 491 "intermod.m"
  }
#line 486 "intermod.m"
}

#line 478 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_goal_5_p_0(
#line 478 "intermod.m"
  MR_Word transform_hlds__intermod__Goal0_6,
#line 478 "intermod.m"
  MR_Word * transform_hlds__intermod__Goal_7,
#line 478 "intermod.m"
  MR_Word * transform_hlds__intermod__DoWrite_8,
#line 478 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_13,
#line 478 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_14)
#line 478 "intermod.m"
{
#line 481 "intermod.m"
  {
#line 481 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 481 "intermod.m"
    MR_Word transform_hlds__intermod__GoalExpr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_6, (MR_Integer) 0)));
#line 481 "intermod.m"
    MR_Word transform_hlds__intermod__GoalInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_6, (MR_Integer) 1)));
#line 481 "intermod.m"
    MR_Word transform_hlds__intermod__GoalExpr_12;

#line 483 "intermod.m"
    {
#line 483 "intermod.m"
      transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_10, &transform_hlds__intermod__GoalExpr_12, transform_hlds__intermod__DoWrite_8, transform_hlds__intermod__STATE_VARIABLE_Info_0_13, transform_hlds__intermod__STATE_VARIABLE_Info_14);
    }
#line 484 "intermod.m"
    {
#line 484 "intermod.m"
      MR_Word base;
#line 484 "intermod.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "intermod.m"
      *transform_hlds__intermod__Goal_7 = base;
#line 484 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_12));
#line 484 "intermod.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_11));
#line 484 "intermod.m"
    }
#line 481 "intermod.m"
  }
#line 478 "intermod.m"
}

#line 463 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(
#line 463 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 463 "intermod.m"
{
#line 463 "intermod.m"
  {
#line 463 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 463 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0, 1);
#line 463 "intermod.m"
  }
#line 463 "intermod.m"
}

#line 463 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(
#line 463 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 463 "intermod.m"
{
#line 463 "intermod.m"
  {
#line 463 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 473 "intermod.m"
    {
#line 473 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8);
    }
#line 473 "intermod.m"
    if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 473 "intermod.m"
      {
#line 473 "intermod.m"
        transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_1(transform_hlds__intermod__env_ptr);
#line 473 "intermod.m"
        return;
      }
#line 463 "intermod.m"
  }
#line 463 "intermod.m"
}

#line 463 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(
#line 463 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 463 "intermod.m"
{
#line 463 "intermod.m"
  {
#line 463 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 463 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__commit_0) == 0)
#line 463 "intermod.m"
      {
#line 463 "intermod.m"
        {
#line 463 "intermod.m"
          MR_Word transform_hlds__intermod__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 0)));
#line 463 "intermod.m"
          MR_Word transform_hlds__intermod__GoalExpr_6;
#line 464 "intermod.m"
          MR_Word transform_hlds__intermod__V_7_7;

#line 463 "intermod.m"
          (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
#line 464 "intermod.m"
          transform_hlds__intermod__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_3, (MR_Integer) 0)));
#line 464 "intermod.m"
          transform_hlds__intermod__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_3, (MR_Integer) 1)));
#line 466 "intermod.m"
          {
#line 466 "intermod.m"
            (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = hlds__goal_util__goal_is_branched_1_p_0(transform_hlds__intermod__GoalExpr_6);
          }
#line 466 "intermod.m"
          if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 466 "intermod.m"
            {
#line 467 "intermod.m"
              (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 0);
#line 466 "intermod.m"
              if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 466 "intermod.m"
                {
#line 468 "intermod.m"
                  (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (MR_Integer) 1;
#line 468 "intermod.m"
                  (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 466 "intermod.m"
                }
#line 466 "intermod.m"
            }
#line 466 "intermod.m"
          if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 466 "intermod.m"
            {
#line 466 "intermod.m"
              transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(transform_hlds__intermod__env_ptr);
            }
#line 470 "intermod.m"
          {
#line 470 "intermod.m"
            MR_Word transform_hlds__intermod__V_9_9;

#line 470 "intermod.m"
            {
#line 470 "intermod.m"
              transform_hlds__intermod__V_9_9 = hlds__goal_form__goal_expr_has_subgoals_1_f_0(transform_hlds__intermod__GoalExpr_6);
            }
#line 470 "intermod.m"
            (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = (transform_hlds__intermod__V_9_9 == (MR_Integer) 1);
#line 470 "intermod.m"
            if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 470 "intermod.m"
              {
#line 471 "intermod.m"
                (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__FoundBranch_8 = (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2;
#line 471 "intermod.m"
                (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 470 "intermod.m"
              }
#line 470 "intermod.m"
            if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded)
#line 470 "intermod.m"
              {
#line 470 "intermod.m"
                transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_2(transform_hlds__intermod__env_ptr);
              }
#line 470 "intermod.m"
          }
#line 463 "intermod.m"
        }
#line 463 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_FALSE;
#line 463 "intermod.m"
      }
#line 463 "intermod.m"
    else
#line 463 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = MR_TRUE;
#line 463 "intermod.m"
  }
#line 463 "intermod.m"
}

#line 459 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(
#line 459 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 459 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 459 "intermod.m"
{
#line 459 "intermod.m"
  {
#line 459 "intermod.m"
    struct transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0_s transform_hlds__intermod__env;

#line 459 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 = transform_hlds__intermod__HeadVar__1_1;
#line 459 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2_2;
#line 462 "intermod.m"
    if (((transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 462 "intermod.m"
      (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded = ((transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__HeadVar__2_2 == (MR_Integer) 1);
#line 462 "intermod.m"
    else
#line 463 "intermod.m"
      {
#line 463 "intermod.m"
        {
#line 463 "intermod.m"
          transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_3(&transform_hlds__intermod__env);
        }
#line 463 "intermod.m"
      }
#line 462 "intermod.m"
    return (transform_hlds__intermod__env).transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0_env_0__succeeded;
#line 459 "intermod.m"
  }
#line 459 "intermod.m"
}

#line 421 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__check_for_ho_input_args_4_p_0(
#line 421 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_5,
#line 421 "intermod.m"
  MR_Word transform_hlds__intermod__VarTypes_6,
#line 421 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__3_3,
#line 421 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__4_4)
#line 421 "intermod.m"
{
#line 425 "intermod.m"
  while (MR_TRUE)
#line 425 "intermod.m"
    {
#line 425 "intermod.m"
      /* tailcall optimized into a loop */
#line 425 "intermod.m"
      {
#line 425 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 425 "intermod.m"
        MR_Word transform_hlds__intermod__HeadVar_7;
#line 425 "intermod.m"
        MR_Word transform_hlds__intermod__HeadVars_8;
#line 425 "intermod.m"
        MR_Word transform_hlds__intermod__ArgMode_9;
#line 425 "intermod.m"
        MR_Word transform_hlds__intermod__ArgModes_10;

#line 425 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 425 "intermod.m"
          {
#line 425 "intermod.m"
            transform_hlds__intermod__HeadVar_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 0)));
#line 425 "intermod.m"
            transform_hlds__intermod__HeadVars_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__3_3, (MR_Integer) 1)));
#line 425 "intermod.m"
            transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 425 "intermod.m"
            if (transform_hlds__intermod__succeeded)
#line 425 "intermod.m"
              {
#line 425 "intermod.m"
                transform_hlds__intermod__ArgMode_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 0)));
#line 425 "intermod.m"
                transform_hlds__intermod__ArgModes_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__4_4, (MR_Integer) 1)));
#line 427 "intermod.m"
                {
#line 427 "intermod.m"
                  MR_Word transform_hlds__intermod__Type_11;
#line 427 "intermod.m"
                  MR_Word transform_hlds__intermod__V_12_12;

#line 427 "intermod.m"
                  {
#line 427 "intermod.m"
                    transform_hlds__intermod__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(transform_hlds__intermod__ModuleInfo_5, transform_hlds__intermod__ArgMode_9);
                  }
#line 427 "intermod.m"
                  if (transform_hlds__intermod__succeeded)
#line 427 "intermod.m"
                    {
#line 428 "intermod.m"
                      {
#line 428 "intermod.m"
                        parse_tree__prog_data__lookup_var_type_3_p_0(transform_hlds__intermod__VarTypes_6, transform_hlds__intermod__HeadVar_7, &transform_hlds__intermod__Type_11);
                      }
#line 429 "intermod.m"
                      {
#line 429 "intermod.m"
                        transform_hlds__intermod__V_12_12 = check_hlds__type_util__classify_type_2_f_0(transform_hlds__intermod__ModuleInfo_5, transform_hlds__intermod__Type_11);
                      }
#line 429 "intermod.m"
                      transform_hlds__intermod__succeeded = (transform_hlds__intermod__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 427 "intermod.m"
                    }
#line 427 "intermod.m"
                }
#line 430 "intermod.m"
                if (!(transform_hlds__intermod__succeeded))
#line 431 "intermod.m"
                  {
#line 431 "intermod.m"
                    /* direct tailcall eliminated */
#line 431 "intermod.m"
                    {
#line 431 "intermod.m"
                      MR_Word transform_hlds__intermod__HeadVar__3__tmp_copy_3 = transform_hlds__intermod__HeadVars_8;
#line 431 "intermod.m"
                      MR_Word transform_hlds__intermod__HeadVar__4__tmp_copy_4 = transform_hlds__intermod__ArgModes_10;

#line 431 "intermod.m"
                      transform_hlds__intermod__HeadVar__4_4 = transform_hlds__intermod__HeadVar__4__tmp_copy_4;
#line 431 "intermod.m"
                      transform_hlds__intermod__HeadVar__3_3 = transform_hlds__intermod__HeadVar__3__tmp_copy_3;
#line 431 "intermod.m"
                    }
#line 431 "intermod.m"
                    continue;
#line 431 "intermod.m"
                  }
#line 425 "intermod.m"
              }
#line 425 "intermod.m"
          }
#line 425 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 425 "intermod.m"
      }
#line 425 "intermod.m"
      break;
#line 425 "intermod.m"
    }
#line 421 "intermod.m"
}

#line 395 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__intermod_traverse_clauses_5_p_0(
#line 395 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__1_1,
#line 395 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__2_2,
#line 395 "intermod.m"
  MR_Word * transform_hlds__intermod__HeadVar__3_3,
#line 395 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_0_4,
#line 395 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Info_5)
#line 395 "intermod.m"
{
#line 398 "intermod.m"
  {
#line 398 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 398 "intermod.m"
    if ((transform_hlds__intermod__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "intermod.m"
      {
#line 398 "intermod.m"
        *transform_hlds__intermod__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "intermod.m"
        *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 1;
#line 398 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_0_4;
#line 398 "intermod.m"
      }
#line 398 "intermod.m"
    else
#line 400 "intermod.m"
      {
#line 400 "intermod.m"
        MR_Word transform_hlds__intermod__Clause0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 0)));
#line 400 "intermod.m"
        MR_Word transform_hlds__intermod__Clauses0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__1_1, (MR_Integer) 1)));
#line 400 "intermod.m"
        MR_Word transform_hlds__intermod__Clause_11;
#line 400 "intermod.m"
        MR_Word transform_hlds__intermod__Clauses_12;
#line 400 "intermod.m"
        MR_Word transform_hlds__intermod__Goal0_15;
#line 400 "intermod.m"
        MR_Word transform_hlds__intermod__Goal_16;
#line 400 "intermod.m"
        MR_Word transform_hlds__intermod__DoWrite1_17;
#line 400 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_20_20;
#line 400 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr0_33;
#line 400 "intermod.m"
        MR_Word transform_hlds__intermod__GoalInfo_34;
#line 400 "intermod.m"
        MR_Word transform_hlds__intermod__GoalExpr_35;
#line 403 "intermod.m"
        MR_Word transform_hlds__intermod__V_22_22;
#line 403 "intermod.m"
        MR_Word transform_hlds__intermod__V_24_24;
#line 403 "intermod.m"
        MR_Word transform_hlds__intermod__V_25_25;
#line 403 "intermod.m"
        MR_Word transform_hlds__intermod__V_26_26;
#line 403 "intermod.m"
        MR_Word transform_hlds__intermod__V_23_23;

#line 401 "intermod.m"
        {
#line 401 "intermod.m"
          transform_hlds__intermod__Goal0_15 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__Clause0_9);
        }
#line 482 "intermod.m"
        transform_hlds__intermod__GoalExpr0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_15, (MR_Integer) 0)));
#line 482 "intermod.m"
        transform_hlds__intermod__GoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal0_15, (MR_Integer) 1)));
#line 483 "intermod.m"
        {
#line 483 "intermod.m"
          transform_hlds__intermod__intermod_traverse_goal_expr_5_p_0(transform_hlds__intermod__GoalExpr0_33, &transform_hlds__intermod__GoalExpr_35, &transform_hlds__intermod__DoWrite1_17, transform_hlds__intermod__STATE_VARIABLE_Info_0_4, &transform_hlds__intermod__STATE_VARIABLE_Info_20_20);
        }
#line 484 "intermod.m"
        {
#line 484 "intermod.m"
          transform_hlds__intermod__Goal_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_16, 0) = ((MR_Box) (transform_hlds__intermod__GoalExpr_35));
#line 484 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Goal_16, 1) = ((MR_Box) (transform_hlds__intermod__GoalInfo_34));
#line 484 "intermod.m"
        }
#line 403 "intermod.m"
        transform_hlds__intermod__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 0)));
#line 403 "intermod.m"
        transform_hlds__intermod__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 1)));
#line 403 "intermod.m"
        transform_hlds__intermod__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 2)));
#line 403 "intermod.m"
        transform_hlds__intermod__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 3)));
#line 403 "intermod.m"
        transform_hlds__intermod__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause0_9, (MR_Integer) 4)));
#line 403 "intermod.m"
        {
#line 403 "intermod.m"
          transform_hlds__intermod__Clause_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 403 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 0) = ((MR_Box) (transform_hlds__intermod__V_22_22));
#line 403 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 1) = ((MR_Box) (transform_hlds__intermod__Goal_16));
#line 403 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 2) = ((MR_Box) (transform_hlds__intermod__V_24_24));
#line 403 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 3) = ((MR_Box) (transform_hlds__intermod__V_25_25));
#line 403 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__Clause_11, 4) = ((MR_Box) (transform_hlds__intermod__V_26_26));
#line 403 "intermod.m"
        }
#line 407 "intermod.m"
#line 407 "intermod.m"
        switch (transform_hlds__intermod__DoWrite1_17) {
#line 407 "intermod.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 407 "intermod.m"
          case (MR_Integer) 0:
#line 408 "intermod.m"
            {
#line 409 "intermod.m"
              transform_hlds__intermod__Clauses_12 = transform_hlds__intermod__Clauses0_10;
#line 410 "intermod.m"
              *transform_hlds__intermod__HeadVar__3_3 = (MR_Integer) 0;
#line 408 "intermod.m"
              *transform_hlds__intermod__STATE_VARIABLE_Info_5 = transform_hlds__intermod__STATE_VARIABLE_Info_20_20;
#line 408 "intermod.m"
            }
#line 407 "intermod.m"
            break;
#line 407 "intermod.m"
          case (MR_Integer) 1:
#line 406 "intermod.m"
            {
#line 406 "intermod.m"
              transform_hlds__intermod__intermod_traverse_clauses_5_p_0(transform_hlds__intermod__Clauses0_10, &transform_hlds__intermod__Clauses_12, transform_hlds__intermod__HeadVar__3_3, transform_hlds__intermod__STATE_VARIABLE_Info_20_20, transform_hlds__intermod__STATE_VARIABLE_Info_5);
            }
#line 407 "intermod.m"
            break;
#line 407 "intermod.m"
        }
#line 399 "intermod.m"
        {
#line 399 "intermod.m"
          MR_Word base;
#line 399 "intermod.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 399 "intermod.m"
          *transform_hlds__intermod__HeadVar__2_2 = base;
#line 399 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__intermod__Clause_11));
#line 399 "intermod.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__intermod__Clauses_12));
#line 399 "intermod.m"
        }
#line 400 "intermod.m"
      }
#line 398 "intermod.m"
  }
#line 395 "intermod.m"
}

#line 384 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(
#line 384 "intermod.m"
  MR_Word transform_hlds__intermod__Target_1,
#line 384 "intermod.m"
  MR_Word transform_hlds__intermod__HeadVar__2_2)
#line 384 "intermod.m"
{
#line 387 "intermod.m"
  while (MR_TRUE)
#line 387 "intermod.m"
    {
#line 387 "intermod.m"
      /* tailcall optimized into a loop */
#line 387 "intermod.m"
      {
#line 387 "intermod.m"
        MR_bool transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 387 "intermod.m"
        MR_Word transform_hlds__intermod__V_15_15;
#line 387 "intermod.m"
        MR_Word transform_hlds__intermod__V_16_16;

#line 387 "intermod.m"
        if (transform_hlds__intermod__succeeded)
#line 387 "intermod.m"
          {
#line 387 "intermod.m"
            transform_hlds__intermod__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 0)));
#line 387 "intermod.m"
            transform_hlds__intermod__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__HeadVar__2_2, (MR_Integer) 1)));
#line 387 "intermod.m"
            {
#line 387 "intermod.m"
              MR_Word transform_hlds__intermod__Lang_6;
#line 387 "intermod.m"
              MR_Word transform_hlds__intermod__ForeignLang_7;
#line 389 "intermod.m"
              MR_Word transform_hlds__intermod__V_11_11;
#line 389 "intermod.m"
              MR_Word transform_hlds__intermod__V_12_12;
#line 389 "intermod.m"
              MR_Word transform_hlds__intermod__V_13_13;
#line 389 "intermod.m"
              MR_Word transform_hlds__intermod__V_14_14;

#line 388 "intermod.m"
              transform_hlds__intermod__succeeded = (transform_hlds__intermod__Target_1 == (MR_Integer) 1);
#line 387 "intermod.m"
              if (transform_hlds__intermod__succeeded)
#line 387 "intermod.m"
                {
#line 389 "intermod.m"
                  transform_hlds__intermod__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 0)));
#line 389 "intermod.m"
                  transform_hlds__intermod__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 1)));
#line 389 "intermod.m"
                  transform_hlds__intermod__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 2)));
#line 389 "intermod.m"
                  transform_hlds__intermod__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 3)));
#line 389 "intermod.m"
                  transform_hlds__intermod__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_16_16, (MR_Integer) 4)));
#line 390 "intermod.m"
                  transform_hlds__intermod__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__Lang_6)) == (MR_mktag((MR_Integer) 1)));
#line 390 "intermod.m"
                  if (transform_hlds__intermod__succeeded)
#line 390 "intermod.m"
                    {
#line 390 "intermod.m"
                      transform_hlds__intermod__ForeignLang_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Lang_6, (MR_Integer) 0)));
#line 391 "intermod.m"
                      transform_hlds__intermod__succeeded = (transform_hlds__intermod__ForeignLang_7 == (MR_Integer) 1);
#line 390 "intermod.m"
                    }
#line 387 "intermod.m"
                }
#line 387 "intermod.m"
            }
#line 387 "intermod.m"
            if (!(transform_hlds__intermod__succeeded))
#line 393 "intermod.m"
              {
#line 393 "intermod.m"
                /* direct tailcall eliminated */
#line 393 "intermod.m"
                {
#line 393 "intermod.m"
                  MR_Word transform_hlds__intermod__HeadVar__2__tmp_copy_2 = transform_hlds__intermod__V_15_15;

#line 393 "intermod.m"
                  transform_hlds__intermod__HeadVar__2_2 = transform_hlds__intermod__HeadVar__2__tmp_copy_2;
#line 393 "intermod.m"
                }
#line 393 "intermod.m"
                continue;
#line 393 "intermod.m"
              }
#line 387 "intermod.m"
          }
#line 387 "intermod.m"
        return transform_hlds__intermod__succeeded;
#line 387 "intermod.m"
      }
#line 387 "intermod.m"
      break;
#line 387 "intermod.m"
    }
#line 384 "intermod.m"
}

#line 441 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_1(
#line 441 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 441 "intermod.m"
{
#line 441 "intermod.m"
  {
#line 441 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 441 "intermod.m"
    MR_builtin_longjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0, 1);
#line 441 "intermod.m"
  }
#line 441 "intermod.m"
}

#line 441 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_3(
#line 441 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 441 "intermod.m"
{
#line 441 "intermod.m"
  {
#line 441 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 441 "intermod.m"
    (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70 = ((MR_Word) (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70);
#line 441 "intermod.m"
    {
#line 441 "intermod.m"
      transform_hlds__intermod__should_be_processed_8_p_0_2(transform_hlds__intermod__env_ptr);
#line 441 "intermod.m"
      return;
    }
#line 441 "intermod.m"
  }
#line 441 "intermod.m"
}

#line 441 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_2(
#line 441 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 441 "intermod.m"
{
#line 441 "intermod.m"
  {
#line 441 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 442 "intermod.m"
    {
#line 442 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61 = hlds__hlds_clauses__clause_body_1_f_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clause1_70);
    }
#line 443 "intermod.m"
    {
#line 443 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__goal_util__goal_calls_pred_id_2_p_0((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Goal1_61, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10);
    }
#line 443 "intermod.m"
    if ((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 443 "intermod.m"
      {
#line 443 "intermod.m"
        transform_hlds__intermod__should_be_processed_8_p_0_1(transform_hlds__intermod__env_ptr);
#line 443 "intermod.m"
        return;
      }
#line 441 "intermod.m"
  }
#line 441 "intermod.m"
}

#line 441 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0_4(
#line 441 "intermod.m"
  void * transform_hlds__intermod__env_ptr_arg)
#line 441 "intermod.m"
{
#line 441 "intermod.m"
  {
#line 441 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s * transform_hlds__intermod__env_ptr = (struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s *) transform_hlds__intermod__env_ptr_arg;

#line 441 "intermod.m"
    if (MR_builtin_setjmp((transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__commit_0) == 0)
#line 441 "intermod.m"
      {
#line 441 "intermod.m"
        {
#line 441 "intermod.m"
          {
#line 441 "intermod.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, &(transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__conv1_Clause1_70, (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__should_be_processed_8_p_0_3, transform_hlds__intermod__env_ptr);
          }
#line 441 "intermod.m"
        }
#line 441 "intermod.m"
        (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_FALSE;
#line 441 "intermod.m"
      }
#line 441 "intermod.m"
    else
#line 441 "intermod.m"
      (transform_hlds__intermod__env_ptr)->transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_TRUE;
#line 441 "intermod.m"
  }
#line 441 "intermod.m"
}

#line 296 "intermod.m"
static MR_bool MR_CALL 
transform_hlds__intermod__should_be_processed_8_p_0(
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__ProcessLocalPreds_9,
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__PredId_10,
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__PredInfo_11,
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__TypeSpecForcePreds_12,
#line 296 "intermod.m"
  MR_Integer transform_hlds__intermod__InlineThreshold_13,
#line 296 "intermod.m"
  MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_14,
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__Deforestation_15,
#line 296 "intermod.m"
  MR_Word transform_hlds__intermod__ModuleInfo_16)
#line 296 "intermod.m"
{
#line 296 "intermod.m"
  {
#line 296 "intermod.m"
    struct transform_hlds__intermod__should_be_processed_8_p_0_env_0_s transform_hlds__intermod__env;

#line 296 "intermod.m"
    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10 = transform_hlds__intermod__PredId_10;
#line 307 "intermod.m"
#line 307 "intermod.m"
    switch (transform_hlds__intermod__ProcessLocalPreds_9) {
#line 307 "intermod.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 307 "intermod.m"
      case (MR_Integer) 0:
#line 305 "intermod.m"
        {
#line 304 "intermod.m"
          {
#line 304 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(transform_hlds__intermod__PredInfo_11);
          }
#line 305 "intermod.m"
          if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 305 "intermod.m"
            {
#line 305 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_exported_to_submodules_1_p_0(transform_hlds__intermod__PredInfo_11);
            }
#line 305 "intermod.m"
        }
#line 307 "intermod.m"
        break;
#line 307 "intermod.m"
      case (MR_Integer) 1:
#line 308 "intermod.m"
        {
#line 308 "intermod.m"
          MR_Word transform_hlds__intermod__V_49_49;

#line 309 "intermod.m"
          {
#line 309 "intermod.m"
            hlds__hlds_pred__pred_info_get_import_status_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__V_49_49);
          }
#line 309 "intermod.m"
          {
#line 309 "intermod.m"
            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = parse_tree__status____Unify____import_status_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), transform_hlds__intermod__V_49_49);
          }
#line 308 "intermod.m"
        }
#line 307 "intermod.m"
        break;
#line 307 "intermod.m"
    }
#line 301 "intermod.m"
    if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 301 "intermod.m"
      {
#line 312 "intermod.m"
        {
#line 312 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_47_47;
#line 312 "intermod.m"
          MR_Word transform_hlds__intermod__ClauseInfo_17;
#line 312 "intermod.m"
          MR_Word transform_hlds__intermod__ClausesRep_18;
#line 312 "intermod.m"
          MR_Integer transform_hlds__intermod__ProcId_21;
#line 312 "intermod.m"
          MR_Word transform_hlds__intermod__Procs_23;
#line 312 "intermod.m"
          MR_Word transform_hlds__intermod__ProcInfo_24;
#line 312 "intermod.m"
          MR_Integer transform_hlds__intermod__Arity_25;
#line 312 "intermod.m"
          MR_Word transform_hlds__intermod__Markers_26;
#line 312 "intermod.m"
          MR_Word transform_hlds__intermod__Globals_27;
#line 312 "intermod.m"
          MR_Word transform_hlds__intermod__Target_28;
#line 312 "intermod.m"
          MR_Word transform_hlds__intermod__V_33_33;
#line 312 "intermod.m"
          MR_Word transform_hlds__intermod__V_38_38;
#line 312 "intermod.m"
          MR_Word transform_hlds__intermod__V_50_50;
#line 313 "intermod.m"
          MR_Word transform_hlds__intermod___ItemNumbers_19;
#line 316 "intermod.m"
          MR_Word transform_hlds__intermod___ProcIds_22;
#line 318 "intermod.m"
          MR_Box transform_hlds__intermod__conv0_ProcInfo_24;
#line 329 "intermod.m"
          MR_Word transform_hlds__intermod__V_34_34;
#line 330 "intermod.m"
          MR_Word transform_hlds__intermod__V_35_35;
#line 333 "intermod.m"
          MR_Word transform_hlds__intermod__V_36_36;
#line 341 "intermod.m"
          MR_Word transform_hlds__intermod__TypeCtorInfo_48_48;
#line 344 "intermod.m"
          MR_Word transform_hlds__intermod__V_37_37;

#line 312 "intermod.m"
          {
#line 312 "intermod.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__ClauseInfo_17);
          }
#line 313 "intermod.m"
          {
#line 313 "intermod.m"
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(transform_hlds__intermod__ClauseInfo_17, &transform_hlds__intermod__ClausesRep_18, &transform_hlds__intermod___ItemNumbers_19);
          }
#line 314 "intermod.m"
          {
#line 314 "intermod.m"
            hlds__hlds_clauses__get_clause_list_2_p_0(transform_hlds__intermod__ClausesRep_18, &(transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20);
          }
#line 316 "intermod.m"
          {
#line 316 "intermod.m"
            transform_hlds__intermod__V_33_33 = hlds__hlds_pred__pred_info_procids_1_f_0(transform_hlds__intermod__PredInfo_11);
          }
#line 316 "intermod.m"
          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__intermod__V_33_33)) == (MR_mktag((MR_Integer) 1)));
#line 316 "intermod.m"
          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 316 "intermod.m"
            {
#line 316 "intermod.m"
              transform_hlds__intermod__ProcId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, (MR_Integer) 0)));
#line 316 "intermod.m"
              transform_hlds__intermod___ProcIds_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_33_33, (MR_Integer) 1)));
#line 317 "intermod.m"
              {
#line 317 "intermod.m"
                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__Procs_23);
              }
#line 18676 "transform_hlds.intermod.c"
              transform_hlds__intermod__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 318 "intermod.m"
              {
#line 318 "intermod.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__intermod__TypeCtorInfo_47_47, transform_hlds__intermod__Procs_23, transform_hlds__intermod__ProcId_21, &transform_hlds__intermod__conv0_ProcInfo_24);
              }
#line 318 "intermod.m"
              transform_hlds__intermod__ProcInfo_24 = ((MR_Word) transform_hlds__intermod__conv0_ProcInfo_24);
#line 323 "intermod.m"
              {
#line 323 "intermod.m"
                transform_hlds__intermod__Arity_25 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(transform_hlds__intermod__PredInfo_11);
              }
#line 328 "intermod.m"
              {
#line 328 "intermod.m"
                hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__Markers_26);
              }
#line 329 "intermod.m"
              transform_hlds__intermod__V_34_34 = (MR_Integer) 9;
#line 329 "intermod.m"
              {
#line 329 "intermod.m"
                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_34_34);
              }
#line 329 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 312 "intermod.m"
              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 312 "intermod.m"
                {
#line 330 "intermod.m"
                  transform_hlds__intermod__V_35_35 = (MR_Integer) 10;
#line 330 "intermod.m"
                  {
#line 330 "intermod.m"
                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_35_35);
                  }
#line 330 "intermod.m"
                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 312 "intermod.m"
                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 312 "intermod.m"
                    {
#line 333 "intermod.m"
                      transform_hlds__intermod__V_36_36 = (MR_Integer) 0;
#line 333 "intermod.m"
                      {
#line 333 "intermod.m"
                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_36_36);
                      }
#line 333 "intermod.m"
                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 312 "intermod.m"
                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 312 "intermod.m"
                        {
#line 337 "intermod.m"
                          {
#line 337 "intermod.m"
                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(transform_hlds__intermod__PredInfo_11);
                          }
#line 337 "intermod.m"
                          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 312 "intermod.m"
                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 312 "intermod.m"
                            {
#line 338 "intermod.m"
                              {
#line 338 "intermod.m"
                                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(transform_hlds__intermod__PredInfo_11);
                              }
#line 338 "intermod.m"
                              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 312 "intermod.m"
                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 312 "intermod.m"
                                {
#line 18756 "transform_hlds.intermod.c"
                                  transform_hlds__intermod__TypeCtorInfo_48_48 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 341 "intermod.m"
                                  {
#line 341 "intermod.m"
                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = mercury__set__member_2_p_0(transform_hlds__intermod__TypeCtorInfo_48_48, ((MR_Box) ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__PredId_10)), transform_hlds__intermod__TypeSpecForcePreds_12);
                                  }
#line 341 "intermod.m"
                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 312 "intermod.m"
                                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 312 "intermod.m"
                                    {
#line 344 "intermod.m"
                                      transform_hlds__intermod__V_37_37 = (MR_Integer) 7;
#line 344 "intermod.m"
                                      {
#line 344 "intermod.m"
                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, transform_hlds__intermod__V_37_37);
                                      }
#line 344 "intermod.m"
                                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 312 "intermod.m"
                                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 312 "intermod.m"
                                        {
#line 347 "intermod.m"
                                          {
#line 347 "intermod.m"
                                            hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__ModuleInfo_16, &transform_hlds__intermod__Globals_27);
                                          }
#line 348 "intermod.m"
                                          {
#line 348 "intermod.m"
                                            libs__globals__get_target_2_p_0(transform_hlds__intermod__Globals_27, &transform_hlds__intermod__Target_28);
                                          }
#line 349 "intermod.m"
                                          {
#line 349 "intermod.m"
                                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__clauses_contain_noninlinable_foreign_code_2_p_0(transform_hlds__intermod__Target_28, (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20);
                                          }
#line 349 "intermod.m"
                                          (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = !((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded);
#line 312 "intermod.m"
                                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 312 "intermod.m"
                                            {
#line 352 "intermod.m"
                                              transform_hlds__intermod__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 352 "intermod.m"
                                              {
#line 352 "intermod.m"
                                                hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__V_50_50);
                                              }
#line 352 "intermod.m"
                                              {
#line 352 "intermod.m"
                                                (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(transform_hlds__intermod__V_38_38, transform_hlds__intermod__V_50_50);
                                              }
#line 312 "intermod.m"
                                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 312 "intermod.m"
                                                {
#line 355 "intermod.m"
                                                  {
#line 355 "intermod.m"
                                                    MR_Integer transform_hlds__intermod__V_45_45 = (transform_hlds__intermod__InlineThreshold_13 + transform_hlds__intermod__Arity_25);

#line 355 "intermod.m"
                                                    {
#line 355 "intermod.m"
                                                      (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__V_45_45);
                                                    }
#line 355 "intermod.m"
                                                  }
#line 356 "intermod.m"
                                                  if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 356 "intermod.m"
                                                    {
#line 357 "intermod.m"
                                                      {
#line 357 "intermod.m"
                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_requested_inlining_1_p_0(transform_hlds__intermod__PredInfo_11);
                                                      }
#line 356 "intermod.m"
                                                      if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 356 "intermod.m"
                                                        {
#line 361 "intermod.m"
                                                          {
#line 361 "intermod.m"
                                                            (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__intermod__Markers_26, (MR_Integer) 22);
                                                          }
#line 356 "intermod.m"
                                                          if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 356 "intermod.m"
                                                            {
#line 363 "intermod.m"
                                                              {
#line 363 "intermod.m"
                                                                MR_Integer transform_hlds__intermod__GoalSize_29;
#line 363 "intermod.m"
                                                                MR_Integer transform_hlds__intermod__V_43_43;
#line 363 "intermod.m"
                                                                MR_Word transform_hlds__intermod__HeadVars_55;
#line 363 "intermod.m"
                                                                MR_Word transform_hlds__intermod__ArgModes_56;
#line 363 "intermod.m"
                                                                MR_Word transform_hlds__intermod__VarTypes_57;

#line 416 "intermod.m"
                                                                {
#line 416 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__HeadVars_55);
                                                                }
#line 417 "intermod.m"
                                                                {
#line 417 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__ArgModes_56);
                                                                }
#line 418 "intermod.m"
                                                                {
#line 418 "intermod.m"
                                                                  hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__intermod__ProcInfo_24, &transform_hlds__intermod__VarTypes_57);
                                                                }
#line 419 "intermod.m"
                                                                {
#line 419 "intermod.m"
                                                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__check_for_ho_input_args_4_p_0(transform_hlds__intermod__ModuleInfo_16, transform_hlds__intermod__VarTypes_57, transform_hlds__intermod__HeadVars_55, transform_hlds__intermod__ArgModes_56);
                                                                }
#line 363 "intermod.m"
                                                                if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 363 "intermod.m"
                                                                  {
#line 364 "intermod.m"
                                                                    {
#line 364 "intermod.m"
                                                                      hlds__goal_util__clause_list_size_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, &transform_hlds__intermod__GoalSize_29);
                                                                    }
#line 365 "intermod.m"
                                                                    transform_hlds__intermod__V_43_43 = (transform_hlds__intermod__HigherOrderSizeLimit_14 + transform_hlds__intermod__Arity_25);
#line 365 "intermod.m"
                                                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = (transform_hlds__intermod__GoalSize_29 <= transform_hlds__intermod__V_43_43);
#line 363 "intermod.m"
                                                                  }
#line 363 "intermod.m"
                                                              }
#line 356 "intermod.m"
                                                              if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 367 "intermod.m"
                                                                {
#line 367 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__DeforestThreshold_30;
#line 367 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_39_39;
#line 367 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_40_40;
#line 367 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_41_41;
#line 367 "intermod.m"
                                                                  MR_Integer transform_hlds__intermod__V_42_42;
#line 367 "intermod.m"
                                                                  MR_Word transform_hlds__intermod__V_72_72;
#line 367 "intermod.m"
                                                                  MR_Word transform_hlds__intermod__V_73_73;

#line 367 "intermod.m"
                                                                  (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = (transform_hlds__intermod__Deforestation_15 == (MR_Integer) 1);
#line 367 "intermod.m"
                                                                  if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 367 "intermod.m"
                                                                    {
#line 372 "intermod.m"
                                                                      transform_hlds__intermod__V_40_40 = (MR_Integer) 2;
#line 372 "intermod.m"
                                                                      transform_hlds__intermod__V_39_39 = (transform_hlds__intermod__InlineThreshold_13 * transform_hlds__intermod__V_40_40);
#line 372 "intermod.m"
                                                                      transform_hlds__intermod__V_41_41 = (MR_Integer) 1;
#line 372 "intermod.m"
                                                                      transform_hlds__intermod__DeforestThreshold_30 = (transform_hlds__intermod__V_39_39 + transform_hlds__intermod__V_41_41);
#line 373 "intermod.m"
                                                                      transform_hlds__intermod__V_42_42 = (transform_hlds__intermod__DeforestThreshold_30 + transform_hlds__intermod__Arity_25);
#line 373 "intermod.m"
                                                                      {
#line 373 "intermod.m"
                                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__inlining__is_simple_clause_list_2_p_0((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, transform_hlds__intermod__V_42_42);
                                                                      }
#line 367 "intermod.m"
                                                                      if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 367 "intermod.m"
                                                                        {
#line 441 "intermod.m"
                                                                          {
#line 441 "intermod.m"
                                                                            transform_hlds__intermod__should_be_processed_8_p_0_4(&transform_hlds__intermod__env);
                                                                          }
#line 367 "intermod.m"
                                                                          if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 367 "intermod.m"
                                                                            {
#line 446 "intermod.m"
                                                                              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20)) == (MR_mktag((MR_Integer) 1)));
#line 446 "intermod.m"
                                                                              if ((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded)
#line 446 "intermod.m"
                                                                                {
#line 446 "intermod.m"
                                                                                  transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, (MR_Integer) 0)));
#line 446 "intermod.m"
                                                                                  transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__Clauses_20, (MR_Integer) 1)));
#line 447 "intermod.m"
                                                                                  if ((transform_hlds__intermod__V_72_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "intermod.m"
                                                                                    {
#line 448 "intermod.m"
                                                                                      MR_Word transform_hlds__intermod__Goal2_66;
#line 448 "intermod.m"
                                                                                      MR_Word transform_hlds__intermod__GoalList_67;

#line 449 "intermod.m"
                                                                                      {
#line 449 "intermod.m"
                                                                                        transform_hlds__intermod__Goal2_66 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__intermod__V_73_73);
                                                                                      }
#line 450 "intermod.m"
                                                                                      {
#line 450 "intermod.m"
                                                                                        hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__intermod__Goal2_66, &transform_hlds__intermod__GoalList_67);
                                                                                      }
#line 457 "intermod.m"
                                                                                      {
#line 457 "intermod.m"
                                                                                        (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = transform_hlds__intermod__goal_contains_one_branched_goal_2_p_0(transform_hlds__intermod__GoalList_67, (MR_Integer) 0);
                                                                                      }
#line 448 "intermod.m"
                                                                                    }
#line 447 "intermod.m"
                                                                                  else
#line 446 "intermod.m"
                                                                                    (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = MR_TRUE;
#line 446 "intermod.m"
                                                                                }
#line 367 "intermod.m"
                                                                            }
#line 367 "intermod.m"
                                                                        }
#line 367 "intermod.m"
                                                                    }
#line 367 "intermod.m"
                                                                }
#line 356 "intermod.m"
                                                            }
#line 356 "intermod.m"
                                                        }
#line 356 "intermod.m"
                                                    }
#line 312 "intermod.m"
                                                }
#line 312 "intermod.m"
                                            }
#line 312 "intermod.m"
                                        }
#line 312 "intermod.m"
                                    }
#line 312 "intermod.m"
                                }
#line 312 "intermod.m"
                            }
#line 312 "intermod.m"
                        }
#line 312 "intermod.m"
                    }
#line 312 "intermod.m"
                }
#line 316 "intermod.m"
            }
#line 312 "intermod.m"
        }
#line 376 "intermod.m"
        if (!((transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded))
#line 378 "intermod.m"
          {
#line 378 "intermod.m"
            MR_Word transform_hlds__intermod__V_31_31;

#line 378 "intermod.m"
            {
#line 378 "intermod.m"
              (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_promise_2_p_0(transform_hlds__intermod__PredInfo_11, &transform_hlds__intermod__V_31_31);
            }
#line 378 "intermod.m"
          }
#line 301 "intermod.m"
      }
#line 301 "intermod.m"
    return (transform_hlds__intermod__env).transform_hlds__intermod__should_be_processed_8_p_0_env_0__succeeded;
#line 296 "intermod.m"
  }
#line 296 "intermod.m"
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
  MR_Word transform_hlds__intermod__ModuleErrors_15,
#line 91 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_Error_0_24,
#line 91 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_Error_25)
#line 91 "intermod.m"
{
#line 2605 "intermod.m"
  {
#line 2605 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;

#line 2605 "intermod.m"
    {
#line 2605 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_101_114_114_111_114_95_115_116_97_116_117_115_95_95_91_49_93_95_48_9_p_0(transform_hlds__intermod__FileType_11, transform_hlds__intermod__FileName_12, transform_hlds__intermod__ModuleSpecs_13, transform_hlds__intermod__STATE_VARIABLE_Specs_0_22, transform_hlds__intermod__STATE_VARIABLE_Specs_23, transform_hlds__intermod__ModuleErrors_15, transform_hlds__intermod__STATE_VARIABLE_Error_0_24, transform_hlds__intermod__STATE_VARIABLE_Error_25);
#line 2605 "intermod.m"
      return;
    }
#line 2605 "intermod.m"
  }
#line 91 "intermod.m"
}

#line 811 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__adjust_pred_import_status_2_p_0_1(
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 811 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 811 "intermod.m"
{
#line 811 "intermod.m"
  {
#line 811 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 811 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11;

#line 811 "intermod.m"
    {
#line 811 "intermod.m"
      transform_hlds__intermod__gather_instances_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11);
    }
#line 811 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11));
#line 811 "intermod.m"
  }
#line 811 "intermod.m"
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
#line 2193 "intermod.m"
  {
#line 2193 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_14_41;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_4;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__VeryVerbose_5;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__PredIds_7;
#line 2193 "intermod.m"
    MR_Integer transform_hlds__intermod__Threshold_8;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__Deforestation_9;
#line 2193 "intermod.m"
    MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_10;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_21_21;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_23_23;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_24_24;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_25_25;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__Modules_32;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__Procs_33;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__ProcDecls_34;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__VarTypes_35;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__TVarSet_36;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__ExtraExportedPreds0_52;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_18_53;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleInfo_59;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__Instances_60;
#line 2193 "intermod.m"
    MR_Word transform_hlds__intermod__V_61_61;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_71_71;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_72_72;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_74_74;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_76_76;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_77_77;
#line 2170 "intermod.m"
    MR_Word transform_hlds__intermod__V_78_78;
#line 811 "intermod.m"
    MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_Info_24_24;

#line 2194 "intermod.m"
    {
#line 2194 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__intermod__Globals_4);
    }
#line 2195 "intermod.m"
    {
#line 2195 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 46, &transform_hlds__intermod__VeryVerbose_5);
    }
#line 2197 "intermod.m"
    {
#line 2197 "intermod.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_5, (MR_String) "% Adjusting import status of predicates in the \140.opt\' file...");
    }
#line 2202 "intermod.m"
    {
#line 2202 "intermod.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12, &transform_hlds__intermod__PredIds_7);
    }
#line 2203 "intermod.m"
    {
#line 2203 "intermod.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 346, &transform_hlds__intermod__Threshold_8);
    }
#line 2205 "intermod.m"
    {
#line 2205 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 391, &transform_hlds__intermod__Deforestation_9);
    }
#line 2206 "intermod.m"
    {
#line 2206 "intermod.m"
      libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_4, (MR_Integer) 356, &transform_hlds__intermod__HigherOrderSizeLimit_10);
    }
#line 2117 "intermod.m"
    {
#line 2117 "intermod.m"
      mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &transform_hlds__intermod__Modules_32);
    }
#line 19245 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_14_41 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2118 "intermod.m"
    {
#line 2118 "intermod.m"
      mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_41, &transform_hlds__intermod__Procs_33);
    }
#line 2119 "intermod.m"
    {
#line 2119 "intermod.m"
      mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_41, &transform_hlds__intermod__ProcDecls_34);
    }
#line 2120 "intermod.m"
    {
#line 2120 "intermod.m"
      parse_tree__prog_data__init_vartypes_1_p_0(&transform_hlds__intermod__VarTypes_35);
    }
#line 2121 "intermod.m"
    {
#line 2121 "intermod.m"
      mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__intermod__TVarSet_36);
    }
#line 2124 "intermod.m"
    {
#line 2124 "intermod.m"
      transform_hlds__intermod__STATE_VARIABLE_Info_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2124 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 0) = ((MR_Box) (transform_hlds__intermod__Modules_32));
#line 2124 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 1) = ((MR_Box) (transform_hlds__intermod__Procs_33));
#line 2124 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 2) = ((MR_Box) (transform_hlds__intermod__ProcDecls_34));
#line 2124 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2124 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2124 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 5) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12));
#line 2124 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 6) = ((MR_Box) ((MR_Integer) 0));
#line 2124 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_35));
#line 2124 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_21_21, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_36));
#line 2124 "intermod.m"
    }
#line 202 "intermod.m"
    {
#line 202 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__PredIds_7, (MR_Integer) 0, transform_hlds__intermod__Threshold_8, transform_hlds__intermod__HigherOrderSizeLimit_10, transform_hlds__intermod__Deforestation_9, transform_hlds__intermod__STATE_VARIABLE_Info_21_21, &transform_hlds__intermod__STATE_VARIABLE_Info_18_53);
    }
#line 206 "intermod.m"
    {
#line 206 "intermod.m"
      mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__intermod__ExtraExportedPreds0_52);
    }
#line 207 "intermod.m"
    {
#line 207 "intermod.m"
      transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(transform_hlds__intermod__ExtraExportedPreds0_52, transform_hlds__intermod__Threshold_8, transform_hlds__intermod__HigherOrderSizeLimit_10, transform_hlds__intermod__Deforestation_9, transform_hlds__intermod__STATE_VARIABLE_Info_18_53, &transform_hlds__intermod__STATE_VARIABLE_Info_23_23);
    }
#line 2170 "intermod.m"
    transform_hlds__intermod__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 0)));
#line 2170 "intermod.m"
    transform_hlds__intermod__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 1)));
#line 2170 "intermod.m"
    transform_hlds__intermod__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 2)));
#line 2170 "intermod.m"
    transform_hlds__intermod__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 3)));
#line 2170 "intermod.m"
    transform_hlds__intermod__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 4)));
#line 2170 "intermod.m"
    transform_hlds__intermod__ModuleInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 5)));
#line 2170 "intermod.m"
    transform_hlds__intermod__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 6)));
#line 2170 "intermod.m"
    transform_hlds__intermod__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 7)));
#line 2170 "intermod.m"
    transform_hlds__intermod__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_Info_23_23, (MR_Integer) 8)));
#line 810 "intermod.m"
    {
#line 810 "intermod.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__ModuleInfo_59, &transform_hlds__intermod__Instances_60);
    }
#line 811 "intermod.m"
    {
#line 811 "intermod.m"
      transform_hlds__intermod__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 811 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_61_61, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[0]));
#line 811 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_61_61, 1) = ((MR_Box) (transform_hlds__intermod__adjust_pred_import_status_2_p_0_1));
#line 811 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 811 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_61_61, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_59));
#line 811 "intermod.m"
    }
#line 811 "intermod.m"
    {
#line 811 "intermod.m"
      mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[8], (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_61_61, transform_hlds__intermod__Instances_60, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_Info_23_23)), &transform_hlds__intermod__conv1_STATE_VARIABLE_Info_24_24);
    }
#line 811 "intermod.m"
    transform_hlds__intermod__STATE_VARIABLE_Info_24_24 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_Info_24_24);
#line 2213 "intermod.m"
    {
#line 2213 "intermod.m"
      transform_hlds__intermod__gather_types_2_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_24_24, &transform_hlds__intermod__STATE_VARIABLE_Info_25_25);
    }
#line 2214 "intermod.m"
    {
#line 2214 "intermod.m"
      transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(transform_hlds__intermod__STATE_VARIABLE_Info_25_25, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_12, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_13);
    }
#line 2217 "intermod.m"
    {
#line 2217 "intermod.m"
      libs__file_util__maybe_write_string_4_p_0(transform_hlds__intermod__VeryVerbose_5, (MR_String) " done\n");
#line 2217 "intermod.m"
      return;
    }
#line 2193 "intermod.m"
  }
#line 72 "intermod.m"
}

#line 2486 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_10(
#line 2486 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2486 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2486 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2486 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 2486 "intermod.m"
{
#line 2486 "intermod.m"
  {
#line 2486 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2486 "intermod.m"
    MR_Word transform_hlds__intermod__conv9_HeadVar__3_3;

#line 2486 "intermod.m"
    {
#line 2486 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv9_HeadVar__3_3);
    }
#line 2486 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv9_HeadVar__3_3));
#line 2486 "intermod.m"
  }
#line 2486 "intermod.m"
}

#line 2485 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_9(
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2485 "intermod.m"
{
#line 2485 "intermod.m"
  {
#line 2485 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2485 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2485 "intermod.m"
    MR_Word transform_hlds__intermod__conv8_HeadVar__3_3;

#line 2485 "intermod.m"
    {
#line 2485 "intermod.m"
      transform_hlds__intermod__conv8_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2485 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv8_HeadVar__3_3));
#line 2485 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2485 "intermod.m"
  }
#line 2485 "intermod.m"
}

#line 2485 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_8(
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2485 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2485 "intermod.m"
{
#line 2485 "intermod.m"
  {
#line 2485 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2485 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2485 "intermod.m"
    MR_Word transform_hlds__intermod__conv7_HeadVar__3_3;

#line 2485 "intermod.m"
    {
#line 2485 "intermod.m"
      transform_hlds__intermod__conv7_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2485 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv7_HeadVar__3_3));
#line 2485 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2485 "intermod.m"
  }
#line 2485 "intermod.m"
}

#line 2481 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_7(
#line 2481 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2481 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2481 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2481 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 2481 "intermod.m"
{
#line 2481 "intermod.m"
  {
#line 2481 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2481 "intermod.m"
    MR_Word transform_hlds__intermod__conv6_HeadVar__3_3;

#line 2481 "intermod.m"
    {
#line 2481 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv6_HeadVar__3_3);
    }
#line 2481 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv6_HeadVar__3_3));
#line 2481 "intermod.m"
  }
#line 2481 "intermod.m"
}

#line 2480 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_6(
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2480 "intermod.m"
{
#line 2480 "intermod.m"
  {
#line 2480 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2480 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2480 "intermod.m"
    MR_Word transform_hlds__intermod__conv5_HeadVar__3_3;

#line 2480 "intermod.m"
    {
#line 2480 "intermod.m"
      transform_hlds__intermod__conv5_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2480 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv5_HeadVar__3_3));
#line 2480 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2480 "intermod.m"
  }
#line 2480 "intermod.m"
}

#line 2480 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_5(
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2480 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2480 "intermod.m"
{
#line 2480 "intermod.m"
  {
#line 2480 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2480 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2480 "intermod.m"
    MR_Word transform_hlds__intermod__conv4_HeadVar__3_3;

#line 2480 "intermod.m"
    {
#line 2480 "intermod.m"
      transform_hlds__intermod__conv4_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2480 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv4_HeadVar__3_3));
#line 2480 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2480 "intermod.m"
  }
#line 2480 "intermod.m"
}

#line 2464 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_4(
#line 2464 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2464 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2464 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 2464 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_3)
#line 2464 "intermod.m"
{
#line 2464 "intermod.m"
  {
#line 2464 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2464 "intermod.m"
    MR_Word transform_hlds__intermod__conv3_HeadVar__3_3;

#line 2464 "intermod.m"
    {
#line 2464 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_int_for_opt_item_blocks_3_p_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), &transform_hlds__intermod__conv3_HeadVar__3_3);
    }
#line 2464 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv3_HeadVar__3_3));
#line 2464 "intermod.m"
  }
#line 2464 "intermod.m"
}

#line 2463 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_3(
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2463 "intermod.m"
{
#line 2463 "intermod.m"
  {
#line 2463 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2463 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2463 "intermod.m"
    MR_Word transform_hlds__intermod__conv2_HeadVar__3_3;

#line 2463 "intermod.m"
    {
#line 2463 "intermod.m"
      transform_hlds__intermod__conv2_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2463 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv2_HeadVar__3_3));
#line 2463 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2463 "intermod.m"
  }
#line 2463 "intermod.m"
}

#line 2463 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_2(
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 2463 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2)
#line 2463 "intermod.m"
{
#line 2463 "intermod.m"
  {
#line 2463 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_3;
#line 2463 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2463 "intermod.m"
    MR_Word transform_hlds__intermod__conv1_HeadVar__3_3;

#line 2463 "intermod.m"
    {
#line 2463 "intermod.m"
      transform_hlds__intermod__conv1_HeadVar__3_3 = parse_tree__status__make_ioms_opt_imported_2_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2));
    }
#line 2463 "intermod.m"
    transform_hlds__intermod__wrapper_arg_3 = ((MR_Box) (transform_hlds__intermod__conv1_HeadVar__3_3));
#line 2463 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_3;
#line 2463 "intermod.m"
  }
#line 2463 "intermod.m"
}

#line 2460 "intermod.m"
static MR_Box MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0_1(
#line 2460 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 2460 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1)
#line 2460 "intermod.m"
{
#line 2460 "intermod.m"
  {
#line 2460 "intermod.m"
    MR_Box transform_hlds__intermod__wrapper_arg_2;
#line 2460 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 2460 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_HeadVar__2_2;

#line 2460 "intermod.m"
    {
#line 2460 "intermod.m"
      transform_hlds__intermod__conv0_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_1_f_0(((MR_Word) transform_hlds__intermod__wrapper_arg_1));
    }
#line 2460 "intermod.m"
    transform_hlds__intermod__wrapper_arg_2 = ((MR_Box) (transform_hlds__intermod__conv0_HeadVar__2_2));
#line 2460 "intermod.m"
    return transform_hlds__intermod__wrapper_arg_2;
#line 2460 "intermod.m"
  }
#line 2460 "intermod.m"
}

#line 65 "intermod.m"
void MR_CALL 
transform_hlds__intermod__grab_opt_files_6_p_0(
#line 65 "intermod.m"
  MR_Word transform_hlds__intermod__Globals_7,
#line 65 "intermod.m"
  MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41,
#line 65 "intermod.m"
  MR_Word * transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_42,
#line 65 "intermod.m"
  MR_Word * transform_hlds__intermod__FoundError_9)
#line 65 "intermod.m"
{
#line 2401 "intermod.m"
  {
#line 2401 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_211_211 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__TypeInfo_212_212;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_232_232;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__TypeCtorInfo_233_233;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 2)));
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__Ancestors0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 4)));
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__InterfaceDeps0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 5)));
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__ImplementationDeps0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 6)));
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__OptFiles_15;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__Transitive_16;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__ModulesProcessed_17;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__OptItemBlocksCord_18;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__OptSpecs_19;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__OptError_20;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__OptItemBlocks_21;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__UnusedArgs_22;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__StructureReuse_23;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__UA_SR_Error_26;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__Int0Files_29;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__HaveReadModuleMaps_30;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__AncestorImports1_31;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__AncestorImports2_32;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__NewImportDeps0_33;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__NewUseDeps0_34;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplicitImportDeps0_35;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplicitUseDeps0_36;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__NewDeps_37;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__NewIndirectDeps_38;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__NewImplIndirectDeps_39;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleErrors_40;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_45_45;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_46_46;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_47_47;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_48_48;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_51_51;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_52_52;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_56_56;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_57_57;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_69_69;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_70_70;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_71_71;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_73_73;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_74_74;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_75_75;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_81_81;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_83_83;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_84_84;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_85_85;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_86_86;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_87_87;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_88_88;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_89_89;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_98_98;
#line 2401 "intermod.m"
    MR_Word transform_hlds__intermod__V_100_100;
#line 2403 "intermod.m"
    MR_String transform_hlds__intermod__V_107_107 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 0)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 1)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 3)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 7)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 8)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 9)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 10)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 11)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 12)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 13)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 14)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 15)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 16)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 17)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 18)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 19)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 20)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 21)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 22)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 23)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 24)));
#line 2403 "intermod.m"
    MR_Word transform_hlds__intermod__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 25)));
#line 2403 "intermod.m"
    MR_String transform_hlds__intermod__V_132_132 = ((MR_String) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, (MR_Integer) 26)));

#line 2408 "intermod.m"
    {
#line 2408 "intermod.m"
      transform_hlds__intermod__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2408 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 0) = ((MR_Box) (transform_hlds__intermod__ImplementationDeps0_14));
#line 2408 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2408 "intermod.m"
    }
#line 2408 "intermod.m"
    {
#line 2408 "intermod.m"
      transform_hlds__intermod__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2408 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_47_47, 0) = ((MR_Box) (transform_hlds__intermod__InterfaceDeps0_13));
#line 2408 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_47_47, 1) = ((MR_Box) (transform_hlds__intermod__V_48_48));
#line 2408 "intermod.m"
    }
#line 2408 "intermod.m"
    {
#line 2408 "intermod.m"
      transform_hlds__intermod__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2408 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_46_46, 0) = ((MR_Box) (transform_hlds__intermod__Ancestors0_12));
#line 2408 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_46_46, 1) = ((MR_Box) (transform_hlds__intermod__V_47_47));
#line 2408 "intermod.m"
    }
#line 2407 "intermod.m"
    {
#line 2407 "intermod.m"
      transform_hlds__intermod__V_45_45 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_211_211, transform_hlds__intermod__V_46_46);
    }
#line 2407 "intermod.m"
    {
#line 2407 "intermod.m"
      transform_hlds__intermod__OptFiles_15 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__intermod__TypeCtorInfo_211_211, transform_hlds__intermod__V_45_45);
    }
#line 2409 "intermod.m"
    {
#line 2409 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 330, &transform_hlds__intermod__Transitive_16);
    }
#line 2411 "intermod.m"
    {
#line 2411 "intermod.m"
      transform_hlds__intermod__V_51_51 = mercury__set__sorted_list_to_set_1_f_0(transform_hlds__intermod__TypeCtorInfo_211_211, transform_hlds__intermod__OptFiles_15);
    }
#line 2411 "intermod.m"
    {
#line 2411 "intermod.m"
      transform_hlds__intermod__ModulesProcessed_17 = mercury__set__insert_2_f_0(transform_hlds__intermod__TypeCtorInfo_211_211, transform_hlds__intermod__V_51_51, ((MR_Box) (transform_hlds__intermod__ModuleName_11)));
    }
#line 19931 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeInfo_212_212 = (MR_Word) &transform_hlds__intermod_scalar_common_1[0];
#line 2414 "intermod.m"
    {
#line 2414 "intermod.m"
      transform_hlds__intermod__V_52_52 = mercury__cord__empty_0_f_0(transform_hlds__intermod__TypeInfo_212_212);
    }
#line 2413 "intermod.m"
    {
#line 2413 "intermod.m"
      transform_hlds__intermod__read_optimization_interfaces_12_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__Transitive_16, transform_hlds__intermod__OptFiles_15, transform_hlds__intermod__ModulesProcessed_17, transform_hlds__intermod__V_52_52, &transform_hlds__intermod__OptItemBlocksCord_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__OptSpecs_19, (MR_Integer) 0, &transform_hlds__intermod__OptError_20);
    }
#line 2416 "intermod.m"
    {
#line 2416 "intermod.m"
      transform_hlds__intermod__OptItemBlocks_21 = mercury__cord__list_1_f_0(transform_hlds__intermod__TypeInfo_212_212, transform_hlds__intermod__OptItemBlocksCord_18);
    }
#line 2423 "intermod.m"
    {
#line 2423 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(transform_hlds__intermod__OptItemBlocks_21, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_0_41, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_56_56);
    }
#line 2424 "intermod.m"
    {
#line 2424 "intermod.m"
      parse_tree__module_imports__module_and_imports_add_specs_3_p_0(transform_hlds__intermod__OptSpecs_19, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_56_56, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_57_57);
    }
#line 2437 "intermod.m"
    {
#line 2437 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 354, &transform_hlds__intermod__UnusedArgs_22);
    }
#line 2438 "intermod.m"
    {
#line 2438 "intermod.m"
      libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 411, &transform_hlds__intermod__StructureReuse_23);
    }
#line 2441 "intermod.m"
    transform_hlds__intermod__succeeded = (transform_hlds__intermod__UnusedArgs_22 == (MR_Integer) 1);
#line 2442 "intermod.m"
    if (!(transform_hlds__intermod__succeeded))
#line 2442 "intermod.m"
      transform_hlds__intermod__succeeded = (transform_hlds__intermod__StructureReuse_23 == (MR_Integer) 1);
#line 2454 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2447 "intermod.m"
      {
#line 2447 "intermod.m"
        MR_Word transform_hlds__intermod__LocalItemBlocksCord_24;
#line 2447 "intermod.m"
        MR_Word transform_hlds__intermod__LocalSpecs_25;
#line 2447 "intermod.m"
        MR_Word transform_hlds__intermod__LocalItemBlocks_27;
#line 2447 "intermod.m"
        MR_Word transform_hlds__intermod__FilteredItemBlocks_28;
#line 2447 "intermod.m"
        MR_Word transform_hlds__intermod__V_61_61;
#line 2447 "intermod.m"
        MR_Word transform_hlds__intermod__V_62_62;
#line 2447 "intermod.m"
        MR_Word transform_hlds__intermod__V_63_63;
#line 2447 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_68_68;

#line 2445 "intermod.m"
        {
#line 2445 "intermod.m"
          transform_hlds__intermod__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2445 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_61_61, 0) = ((MR_Box) (transform_hlds__intermod__ModuleName_11));
#line 2445 "intermod.m"
          MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2445 "intermod.m"
        }
#line 2445 "intermod.m"
        {
#line 2445 "intermod.m"
          transform_hlds__intermod__V_62_62 = mercury__set__init_0_f_0(transform_hlds__intermod__TypeCtorInfo_211_211);
        }
#line 2446 "intermod.m"
        {
#line 2446 "intermod.m"
          transform_hlds__intermod__V_63_63 = mercury__cord__empty_0_f_0(transform_hlds__intermod__TypeInfo_212_212);
        }
#line 2445 "intermod.m"
        {
#line 2445 "intermod.m"
          transform_hlds__intermod__read_optimization_interfaces_12_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 0, transform_hlds__intermod__V_61_61, transform_hlds__intermod__V_62_62, transform_hlds__intermod__V_63_63, &transform_hlds__intermod__LocalItemBlocksCord_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__LocalSpecs_25, (MR_Integer) 0, &transform_hlds__intermod__UA_SR_Error_26);
        }
#line 2448 "intermod.m"
        {
#line 2448 "intermod.m"
          transform_hlds__intermod__LocalItemBlocks_27 = mercury__cord__list_1_f_0(transform_hlds__intermod__TypeInfo_212_212, transform_hlds__intermod__LocalItemBlocksCord_24);
        }
#line 2449 "intermod.m"
        {
#line 2449 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_107_101_101_112_95_117_110_117_115_101_100_95_97_110_100_95_114_101_117_115_101_95_112_114_97_103_109_97_115_95_105_110_95_98_108_111_99_107_115_95_95_91_49_93_95_48_4_p_0(transform_hlds__intermod__UnusedArgs_22, transform_hlds__intermod__StructureReuse_23, transform_hlds__intermod__LocalItemBlocks_27, &transform_hlds__intermod__FilteredItemBlocks_28);
        }
#line 2451 "intermod.m"
        {
#line 2451 "intermod.m"
          parse_tree__module_imports__module_and_imports_add_opt_item_blocks_3_p_0(transform_hlds__intermod__FilteredItemBlocks_28, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_57_57, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_68_68);
        }
#line 2453 "intermod.m"
        {
#line 2453 "intermod.m"
          parse_tree__module_imports__module_and_imports_add_specs_3_p_0(transform_hlds__intermod__LocalSpecs_25, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_68_68, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_69_69);
        }
#line 2447 "intermod.m"
      }
#line 2454 "intermod.m"
    else
#line 2455 "intermod.m"
      {
#line 2455 "intermod.m"
        transform_hlds__intermod__UA_SR_Error_26 = (MR_Integer) 0;
#line 2455 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_69_69 = transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_57_57;
#line 2455 "intermod.m"
      }
#line 2460 "intermod.m"
    {
#line 2460 "intermod.m"
      transform_hlds__intermod__V_71_71 = mercury__list__map_2_f_0(transform_hlds__intermod__TypeCtorInfo_211_211, (MR_Word) &transform_hlds__intermod_scalar_common_1[1], (MR_Word) &transform_hlds__intermod_scalar_common_2[8], transform_hlds__intermod__OptFiles_15);
    }
#line 2460 "intermod.m"
    {
#line 2460 "intermod.m"
      transform_hlds__intermod__V_70_70 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_211_211, transform_hlds__intermod__V_71_71);
    }
#line 2459 "intermod.m"
    {
#line 2459 "intermod.m"
      transform_hlds__intermod__Int0Files_29 = mercury__list__delete_all_2_f_0(transform_hlds__intermod__TypeCtorInfo_211_211, transform_hlds__intermod__V_70_70, ((MR_Box) (transform_hlds__intermod__ModuleName_11)));
    }
#line 2461 "intermod.m"
    {
#line 2461 "intermod.m"
      transform_hlds__intermod__V_73_73 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__intermod_scalar_common_1[2], (MR_Word) &transform_hlds__intermod_scalar_common_1[3]);
    }
#line 2461 "intermod.m"
    {
#line 2461 "intermod.m"
      transform_hlds__intermod__V_74_74 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__intermod_scalar_common_1[4], (MR_Word) &transform_hlds__intermod_scalar_common_1[5]);
    }
#line 2461 "intermod.m"
    {
#line 2461 "intermod.m"
      transform_hlds__intermod__V_75_75 = mercury__map__init_0_f_0((MR_Word) &transform_hlds__intermod_scalar_common_1[6], (MR_Word) &transform_hlds__intermod_scalar_common_1[7]);
    }
#line 2461 "intermod.m"
    {
#line 2461 "intermod.m"
      transform_hlds__intermod__HaveReadModuleMaps_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2461 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HaveReadModuleMaps_30, 0) = ((MR_Box) (transform_hlds__intermod__V_73_73));
#line 2461 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HaveReadModuleMaps_30, 1) = ((MR_Box) (transform_hlds__intermod__V_74_74));
#line 2461 "intermod.m"
      MR_hl_field(MR_mktag(0), transform_hlds__intermod__HaveReadModuleMaps_30, 2) = ((MR_Box) (transform_hlds__intermod__V_75_75));
#line 2461 "intermod.m"
    }
#line 20094 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_232_232 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_int_for_opt_module_section_0;
#line 2462 "intermod.m"
    {
#line 2462 "intermod.m"
      parse_tree__modules__process_module_private_interfaces_14_p_0(transform_hlds__intermod__TypeCtorInfo_232_232, transform_hlds__intermod__Globals_7, transform_hlds__intermod__HaveReadModuleMaps_30, transform_hlds__intermod__Int0Files_29, (MR_Word) &transform_hlds__intermod_scalar_common_2[9], (MR_Word) &transform_hlds__intermod_scalar_common_2[10], (MR_Word) &transform_hlds__intermod_scalar_common_2[11], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__AncestorImports1_31, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__AncestorImports2_32, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_69_69, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_81_81);
    }
#line 20101 "transform_hlds.intermod.c"
    transform_hlds__intermod__TypeCtorInfo_233_233 = (MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_opt_module_section_0;
#line 2468 "intermod.m"
    {
#line 2468 "intermod.m"
      parse_tree__get_dependencies__get_dependencies_in_item_blocks_3_p_0(transform_hlds__intermod__TypeCtorInfo_233_233, transform_hlds__intermod__OptItemBlocks_21, &transform_hlds__intermod__NewImportDeps0_33, &transform_hlds__intermod__NewUseDeps0_34);
    }
#line 2470 "intermod.m"
    {
#line 2470 "intermod.m"
      parse_tree__get_dependencies__get_implicit_dependencies_in_item_blocks_4_p_0(transform_hlds__intermod__TypeCtorInfo_233_233, transform_hlds__intermod__Globals_7, transform_hlds__intermod__OptItemBlocks_21, &transform_hlds__intermod__NewImplicitImportDeps0_35, &transform_hlds__intermod__NewImplicitUseDeps0_36);
    }
#line 2475 "intermod.m"
    {
#line 2475 "intermod.m"
      transform_hlds__intermod__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2475 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_89_89, 0) = ((MR_Box) (transform_hlds__intermod__AncestorImports2_32));
#line 2475 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2475 "intermod.m"
    }
#line 2475 "intermod.m"
    {
#line 2475 "intermod.m"
      transform_hlds__intermod__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2475 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_88_88, 0) = ((MR_Box) (transform_hlds__intermod__AncestorImports1_31));
#line 2475 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_88_88, 1) = ((MR_Box) (transform_hlds__intermod__V_89_89));
#line 2475 "intermod.m"
    }
#line 2474 "intermod.m"
    {
#line 2474 "intermod.m"
      transform_hlds__intermod__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2474 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_87_87, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitUseDeps0_36));
#line 2474 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_87_87, 1) = ((MR_Box) (transform_hlds__intermod__V_88_88));
#line 2474 "intermod.m"
    }
#line 2474 "intermod.m"
    {
#line 2474 "intermod.m"
      transform_hlds__intermod__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2474 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_86_86, 0) = ((MR_Box) (transform_hlds__intermod__NewImplicitImportDeps0_35));
#line 2474 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_86_86, 1) = ((MR_Box) (transform_hlds__intermod__V_87_87));
#line 2474 "intermod.m"
    }
#line 2473 "intermod.m"
    {
#line 2473 "intermod.m"
      transform_hlds__intermod__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2473 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_85_85, 0) = ((MR_Box) (transform_hlds__intermod__NewUseDeps0_34));
#line 2473 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_85_85, 1) = ((MR_Box) (transform_hlds__intermod__V_86_86));
#line 2473 "intermod.m"
    }
#line 2473 "intermod.m"
    {
#line 2473 "intermod.m"
      transform_hlds__intermod__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2473 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_84_84, 0) = ((MR_Box) (transform_hlds__intermod__NewImportDeps0_33));
#line 2473 "intermod.m"
      MR_hl_field(MR_mktag(1), transform_hlds__intermod__V_84_84, 1) = ((MR_Box) (transform_hlds__intermod__V_85_85));
#line 2473 "intermod.m"
    }
#line 2472 "intermod.m"
    {
#line 2472 "intermod.m"
      transform_hlds__intermod__V_83_83 = mercury__list__condense_1_f_0(transform_hlds__intermod__TypeCtorInfo_211_211, transform_hlds__intermod__V_84_84);
    }
#line 2472 "intermod.m"
    {
#line 2472 "intermod.m"
      transform_hlds__intermod__NewDeps_37 = mercury__list__sort_and_remove_dups_1_f_0(transform_hlds__intermod__TypeCtorInfo_211_211, transform_hlds__intermod__V_83_83);
    }
#line 2478 "intermod.m"
    {
#line 2478 "intermod.m"
      parse_tree__modules__process_module_long_interfaces_16_p_0(transform_hlds__intermod__TypeCtorInfo_232_232, transform_hlds__intermod__Globals_7, transform_hlds__intermod__HaveReadModuleMaps_30, (MR_Integer) 0, transform_hlds__intermod__NewDeps_37, (MR_Integer) 3, (MR_Word) &transform_hlds__intermod_scalar_common_2[12], (MR_Word) &transform_hlds__intermod_scalar_common_2[13], (MR_Word) &transform_hlds__intermod_scalar_common_2[14], (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__NewIndirectDeps_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &transform_hlds__intermod__NewImplIndirectDeps_39, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_81_81, &transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_98_98);
    }
#line 2484 "intermod.m"
    {
#line 2484 "intermod.m"
      transform_hlds__intermod__V_100_100 = mercury__list__f_43_43_2_f_0(transform_hlds__intermod__TypeCtorInfo_211_211, transform_hlds__intermod__NewIndirectDeps_38, transform_hlds__intermod__NewImplIndirectDeps_39);
    }
#line 2483 "intermod.m"
    {
#line 2483 "intermod.m"
      parse_tree__modules__process_module_short_interfaces_and_impls_transitively_11_p_0(transform_hlds__intermod__TypeCtorInfo_232_232, transform_hlds__intermod__Globals_7, transform_hlds__intermod__HaveReadModuleMaps_30, transform_hlds__intermod__V_100_100, (MR_Integer) 2, (MR_Word) &transform_hlds__intermod_scalar_common_2[15], (MR_Word) &transform_hlds__intermod_scalar_common_2[16], (MR_Word) &transform_hlds__intermod_scalar_common_2[17], transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_98_98, transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_42);
    }
#line 2492 "intermod.m"
    {
#line 2492 "intermod.m"
      parse_tree__module_imports__module_and_imports_get_errors_2_p_0(*transform_hlds__intermod__STATE_VARIABLE_ModuleAndImports_42, &transform_hlds__intermod__ModuleErrors_40);
    }
#line 2494 "intermod.m"
    {
#line 2494 "intermod.m"
      transform_hlds__intermod__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, transform_hlds__intermod__ModuleErrors_40);
    }
#line 2495 "intermod.m"
    if (!(transform_hlds__intermod__succeeded))
#line 2495 "intermod.m"
      {
#line 2495 "intermod.m"
        transform_hlds__intermod__succeeded = (transform_hlds__intermod__OptError_20 == (MR_Integer) 1);
#line 2495 "intermod.m"
        if (!(transform_hlds__intermod__succeeded))
#line 2496 "intermod.m"
          transform_hlds__intermod__succeeded = (transform_hlds__intermod__UA_SR_Error_26 == (MR_Integer) 1);
#line 2495 "intermod.m"
      }
#line 2500 "intermod.m"
    if (transform_hlds__intermod__succeeded)
#line 2499 "intermod.m"
      *transform_hlds__intermod__FoundError_9 = (MR_Integer) 1;
#line 2500 "intermod.m"
    else
#line 2501 "intermod.m"
      *transform_hlds__intermod__FoundError_9 = (MR_Integer) 0;
#line 2401 "intermod.m"
  }
#line 65 "intermod.m"
}

#line 811 "intermod.m"
static void MR_CALL 
transform_hlds__intermod__write_opt_file_4_p_0_1(
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__closure_arg,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_1,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_2,
#line 811 "intermod.m"
  MR_Box transform_hlds__intermod__wrapper_arg_3,
#line 811 "intermod.m"
  MR_Box * transform_hlds__intermod__wrapper_arg_4)
#line 811 "intermod.m"
{
#line 811 "intermod.m"
  {
#line 811 "intermod.m"
    MR_Box transform_hlds__intermod__closure = transform_hlds__intermod__closure_arg;
#line 811 "intermod.m"
    MR_Word transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11;

#line 811 "intermod.m"
    {
#line 811 "intermod.m"
      transform_hlds__intermod__gather_instances_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__intermod__wrapper_arg_1), ((MR_Word) transform_hlds__intermod__wrapper_arg_2), ((MR_Word) transform_hlds__intermod__wrapper_arg_3), &transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11);
    }
#line 811 "intermod.m"
    *transform_hlds__intermod__wrapper_arg_4 = ((MR_Box) (transform_hlds__intermod__conv0_STATE_VARIABLE_Info_11));
#line 811 "intermod.m"
  }
#line 811 "intermod.m"
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
#line 153 "intermod.m"
  {
#line 153 "intermod.m"
    MR_bool transform_hlds__intermod__succeeded;
#line 153 "intermod.m"
    MR_Word transform_hlds__intermod__Globals_7;
#line 153 "intermod.m"
    MR_Word transform_hlds__intermod__ModuleName_8;
#line 153 "intermod.m"
    MR_String transform_hlds__intermod__TmpName_9;
#line 153 "intermod.m"
    MR_Word transform_hlds__intermod__Result_10;

#line 154 "intermod.m"
    {
#line 154 "intermod.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__Globals_7);
    }
#line 155 "intermod.m"
    {
#line 155 "intermod.m"
      hlds__hlds_module__module_info_get_name_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__ModuleName_8);
    }
#line 156 "intermod.m"
    {
#line 156 "intermod.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(transform_hlds__intermod__Globals_7, transform_hlds__intermod__ModuleName_8, (MR_String) ".opt.tmp", (MR_Integer) 0, &transform_hlds__intermod__TmpName_9);
    }
#line 158 "intermod.m"
    {
#line 158 "intermod.m"
      mercury__io__open_output_4_p_0(transform_hlds__intermod__TmpName_9, &transform_hlds__intermod__Result_10);
    }
#line 164 "intermod.m"
    if (((MR_tag((MR_Word) transform_hlds__intermod__Result_10)) == (MR_mktag((MR_Integer) 1))))
#line 160 "intermod.m"
      {
#line 160 "intermod.m"
        MR_Word transform_hlds__intermod__Err_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__intermod__Result_10, (MR_Integer) 0)));
#line 160 "intermod.m"
        MR_String transform_hlds__intermod__Msg_12;

#line 161 "intermod.m"
        {
#line 161 "intermod.m"
          transform_hlds__intermod__Msg_12 = mercury__io__error_message_1_f_0(transform_hlds__intermod__Err_11);
        }
#line 162 "intermod.m"
        {
#line 162 "intermod.m"
          mercury__io__write_string_3_p_0(transform_hlds__intermod__Msg_12);
        }
#line 163 "intermod.m"
        {
#line 163 "intermod.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 160 "intermod.m"
        *transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_25 = transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24;
#line 160 "intermod.m"
      }
#line 164 "intermod.m"
    else
#line 165 "intermod.m"
      {
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__TypeCtorInfo_14_61;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__FileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__Result_10, (MR_Integer) 0)));
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__OutputStream_14;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__RealPredIds_15;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__AssertionTable_16;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__AssertPredIds_17;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__PredIds_18;
#line 165 "intermod.m"
        MR_Integer transform_hlds__intermod__Threshold_19;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__Deforestation_20;
#line 165 "intermod.m"
        MR_Integer transform_hlds__intermod__HigherOrderSizeLimit_21;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_42_42;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__Modules_52;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__Procs_53;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__ProcDecls_54;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__VarTypes_55;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__TVarSet_56;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__ExtraExportedPreds0_72;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__STATE_VARIABLE_Info_18_73;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__ModuleInfo_79;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__Instances_80;
#line 165 "intermod.m"
        MR_Word transform_hlds__intermod__V_81_81;
#line 2170 "intermod.m"
        MR_Word transform_hlds__intermod__V_91_91;
#line 2170 "intermod.m"
        MR_Word transform_hlds__intermod__V_92_92;
#line 2170 "intermod.m"
        MR_Word transform_hlds__intermod__V_93_93;
#line 2170 "intermod.m"
        MR_Word transform_hlds__intermod__V_94_94;
#line 2170 "intermod.m"
        MR_Word transform_hlds__intermod__V_95_95;
#line 2170 "intermod.m"
        MR_Word transform_hlds__intermod__V_96_96;
#line 2170 "intermod.m"
        MR_Word transform_hlds__intermod__V_97_97;
#line 2170 "intermod.m"
        MR_Word transform_hlds__intermod__V_98_98;
#line 811 "intermod.m"
        MR_Box transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_39_39;
#line 184 "intermod.m"
        MR_Word transform_hlds__intermod__V_23_23;

#line 166 "intermod.m"
        {
#line 166 "intermod.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__intermod__FileStream_13, &transform_hlds__intermod__OutputStream_14);
        }
#line 167 "intermod.m"
        {
#line 167 "intermod.m"
          hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__RealPredIds_15);
        }
#line 168 "intermod.m"
        {
#line 168 "intermod.m"
          hlds__hlds_module__module_info_get_assertion_table_2_p_0(transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24, &transform_hlds__intermod__AssertionTable_16);
        }
#line 169 "intermod.m"
        {
#line 169 "intermod.m"
          hlds__hlds_data__assertion_table_pred_ids_2_p_0(transform_hlds__intermod__AssertionTable_16, &transform_hlds__intermod__AssertPredIds_17);
        }
#line 170 "intermod.m"
        {
#line 170 "intermod.m"
          transform_hlds__intermod__PredIds_18 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, transform_hlds__intermod__AssertPredIds_17, transform_hlds__intermod__RealPredIds_15);
        }
#line 171 "intermod.m"
        {
#line 171 "intermod.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 346, &transform_hlds__intermod__Threshold_19);
        }
#line 173 "intermod.m"
        {
#line 173 "intermod.m"
          libs__globals__lookup_bool_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 391, &transform_hlds__intermod__Deforestation_20);
        }
#line 174 "intermod.m"
        {
#line 174 "intermod.m"
          libs__globals__lookup_int_option_3_p_0(transform_hlds__intermod__Globals_7, (MR_Integer) 356, &transform_hlds__intermod__HigherOrderSizeLimit_21);
        }
#line 2117 "intermod.m"
        {
#line 2117 "intermod.m"
          mercury__set__init_1_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, &transform_hlds__intermod__Modules_52);
        }
#line 20457 "transform_hlds.intermod.c"
        transform_hlds__intermod__TypeCtorInfo_14_61 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 2118 "intermod.m"
        {
#line 2118 "intermod.m"
          mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_61, &transform_hlds__intermod__Procs_53);
        }
#line 2119 "intermod.m"
        {
#line 2119 "intermod.m"
          mercury__set__init_1_p_0(transform_hlds__intermod__TypeCtorInfo_14_61, &transform_hlds__intermod__ProcDecls_54);
        }
#line 2120 "intermod.m"
        {
#line 2120 "intermod.m"
          parse_tree__prog_data__init_vartypes_1_p_0(&transform_hlds__intermod__VarTypes_55);
        }
#line 2121 "intermod.m"
        {
#line 2121 "intermod.m"
          mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, &transform_hlds__intermod__TVarSet_56);
        }
#line 2124 "intermod.m"
        {
#line 2124 "intermod.m"
          transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 2124 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 0) = ((MR_Box) (transform_hlds__intermod__Modules_52));
#line 2124 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 1) = ((MR_Box) (transform_hlds__intermod__Procs_53));
#line 2124 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 2) = ((MR_Box) (transform_hlds__intermod__ProcDecls_54));
#line 2124 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2124 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2124 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 5) = ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_0_24));
#line 2124 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 6) = ((MR_Box) ((MR_Integer) 0));
#line 2124 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 7) = ((MR_Box) (transform_hlds__intermod__VarTypes_55));
#line 2124 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, 8) = ((MR_Box) (transform_hlds__intermod__TVarSet_56));
#line 2124 "intermod.m"
        }
#line 202 "intermod.m"
        {
#line 202 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_95_108_105_115_116_95_95_91_51_93_95_48_8_p_0(transform_hlds__intermod__PredIds_18, (MR_Integer) 0, transform_hlds__intermod__Threshold_19, transform_hlds__intermod__HigherOrderSizeLimit_21, transform_hlds__intermod__Deforestation_20, transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_36_36, &transform_hlds__intermod__STATE_VARIABLE_Info_18_73);
        }
#line 206 "intermod.m"
        {
#line 206 "intermod.m"
          mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, &transform_hlds__intermod__ExtraExportedPreds0_72);
        }
#line 207 "intermod.m"
        {
#line 207 "intermod.m"
          transform_hlds__intermod__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_97_116_104_101_114_95_112_114_101_100_115_95_102_105_120_112_111_105_110_116_95_95_91_50_93_95_48_7_p_0(transform_hlds__intermod__ExtraExportedPreds0_72, transform_hlds__intermod__Threshold_19, transform_hlds__intermod__HigherOrderSizeLimit_21, transform_hlds__intermod__Deforestation_20, transform_hlds__intermod__STATE_VARIABLE_Info_18_73, &transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38);
        }
#line 2170 "intermod.m"
        transform_hlds__intermod__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 0)));
#line 2170 "intermod.m"
        transform_hlds__intermod__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 1)));
#line 2170 "intermod.m"
        transform_hlds__intermod__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 2)));
#line 2170 "intermod.m"
        transform_hlds__intermod__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 3)));
#line 2170 "intermod.m"
        transform_hlds__intermod__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 4)));
#line 2170 "intermod.m"
        transform_hlds__intermod__ModuleInfo_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 5)));
#line 2170 "intermod.m"
        transform_hlds__intermod__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 6)));
#line 2170 "intermod.m"
        transform_hlds__intermod__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 7)));
#line 2170 "intermod.m"
        transform_hlds__intermod__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38, (MR_Integer) 8)));
#line 810 "intermod.m"
        {
#line 810 "intermod.m"
          hlds__hlds_module__module_info_get_instance_table_2_p_0(transform_hlds__intermod__ModuleInfo_79, &transform_hlds__intermod__Instances_80);
        }
#line 811 "intermod.m"
        {
#line 811 "intermod.m"
          transform_hlds__intermod__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 811 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 0) = ((MR_Box) (&transform_hlds__intermod_scalar_common_3[0]));
#line 811 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 1) = ((MR_Box) (transform_hlds__intermod__write_opt_file_4_p_0_1));
#line 811 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 811 "intermod.m"
          MR_hl_field(MR_mktag(0), transform_hlds__intermod__V_81_81, 3) = ((MR_Box) (transform_hlds__intermod__ModuleInfo_79));
#line 811 "intermod.m"
        }
#line 811 "intermod.m"
        {
#line 811 "intermod.m"
          mercury__map__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &transform_hlds__intermod_scalar_common_1[8], (MR_Word) &transform_hlds__intermod__transform_hlds__intermod__type_ctor_info_intermod_info_0, transform_hlds__intermod__V_81_81, transform_hlds__intermod__Instances_80, ((MR_Box) (transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_38_38)), &transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_39_39);
        }
#line 811 "intermod.m"
        transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39 = ((MR_Word) transform_hlds__intermod__conv1_STATE_VARIABLE_IntermodInfo_39_39);
#line 181 "intermod.m"
        {
#line 181 "intermod.m"
          transform_hlds__intermod__gather_types_2_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_39_39, &transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40);
        }
#line 182 "intermod.m"
        {
#line 182 "intermod.m"
          transform_hlds__intermod__write_intermod_info_3_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40);
        }
#line 183 "intermod.m"
        {
#line 183 "intermod.m"
          transform_hlds__intermod__intermod_info_get_module_info_2_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, &transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_42_42);
        }
#line 184 "intermod.m"
        {
#line 184 "intermod.m"
          mercury__io__set_output_stream_4_p_0(transform_hlds__intermod__OutputStream_14, &transform_hlds__intermod__V_23_23);
        }
#line 185 "intermod.m"
        {
#line 185 "intermod.m"
          mercury__io__close_output_3_p_0(transform_hlds__intermod__FileStream_13);
        }
#line 186 "intermod.m"
        {
#line 186 "intermod.m"
          transform_hlds__intermod__do_adjust_pred_import_status_3_p_0(transform_hlds__intermod__STATE_VARIABLE_IntermodInfo_40_40, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_42_42, transform_hlds__intermod__STATE_VARIABLE_ModuleInfo_25);
#line 186 "intermod.m"
          return;
        }
#line 165 "intermod.m"
      }
#line 153 "intermod.m"
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
